void QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4E7436A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1D0F0B4(&MapControl_RootInfo_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_4E7436A = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_1D0F300(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0);
  this->fields.mapControlRootInfo = v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.allQuestInfoList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v17;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.allSpotInfoList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v24;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.allSpotRoadInfoList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v31;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.allMapGimmickInfoList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v38;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.allMapInfoList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v45;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.allWarInfoList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v52 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v52;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.questReleaseEntList,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3BACC6C *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_37824124(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckMapGimmickCond_37821212(
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

  if ( (byte_4E74367 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_1D0F0B4(&long___TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74367 = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1D0F15C(long___TypeInfo, 2);
    if ( !Time )
      goto LABEL_26;
    v11 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v11 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, (_DWORD)v11 == 1) )
      sub_1D0F314(Time);
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
      sub_1D0F30C(Time, v7);
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
  if ( (byte_4E74363 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1D0F0B4(&long___TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74363 = 1;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
  v18 = (_QWORD *)sub_1D0F15C(long___TypeInfo, 3);
  Instance = QuestEntity__getNoticeAt(questEnt, 0);
  if ( !v18 )
    goto LABEL_73;
  v19 = v18[3];
  if ( !(_DWORD)v19 || (v18[4] = Instance, (_DWORD)v19 == 1) || (v18[5] = v16, (unsigned int)v19 <= 2) )
    sub_1D0F314(Instance);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_73;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_3535BC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_73;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4E710BF )
          {
            sub_1D0F0B4(&NetworkManager_TypeInfo);
            byte_4E710BF = 1;
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
      MapControl_QuestInfo__SetDispType_37389692(questInfo, 2, questReleaseNG, 0);
      goto LABEL_69;
    }
LABEL_73:
    sub_1D0F30C(Instance, v10);
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

  return QuestTree__CheckSpotCond_37824124(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckSpotCond_37824124(
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

  if ( (byte_4E74366 & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E74366 = 1;
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
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
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
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
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
  if ( !LODWORD(Instance->fields._ReservedCommandListBeforeFadeIn_k__BackingField) )
    inited = j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
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
      v24 = sub_1CE513C(inited);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1CE513C(inited);
    v26 = **(UnityEngine_Object_o ***)(v25 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
    case 14:
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
    case 15:
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
      goto LABEL_158;
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Item, v36);
              if ( !Item || !Instance )
                goto LABEL_209;
              ++v34;
              v33 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)Item[1].klass, IsExistCommand, 0);
              if ( v34 >= v32->fields._size )
                goto LABEL_165;
            }
          }
        }
        v33 = 0;
LABEL_165:
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)v41, v42);
              if ( !v41 || !Instance )
                break;
              ++v40;
              v39 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)v41[1].klass, IsExistCommand, 0);
              if ( v40 >= v38->fields._size )
                goto LABEL_170;
            }
LABEL_209:
            sub_1D0F30C(Instance, v16);
          }
        }
        v39 = 0;
LABEL_170:
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
          sub_1D0F314(Instance);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4E710BF )
      {
        sub_1D0F0B4(&NetworkManager_TypeInfo);
        byte_4E710BF = 1;
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
LABEL_158:
      LOBYTE(v13) = !IsMissionAchive;
      return (unsigned __int8)v13 & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsQuestAvailable(targetId, 0, 0);
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

  return QuestTree__CheckSpotCond_37824124(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4E74361 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
    byte_4E74361 = 1;
  }
  v7 = sub_1D0F300(QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__49___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)v7, -2, 0);
  if ( !v7 )
    sub_1D0F30C(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 72), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v22, v23, v24, v25, v26, v27);
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
  if ( (byte_4E74364 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4E74364 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_43911800((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1D0F30C(this, questInfo);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v9 = 0;
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1D0F30C(v10, v11);
    klass_high = HIDWORD(v27.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1D0F30C(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_1D0F30C(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1D0F30C(0, v22);
        EndTime = QuestEntity__getClosedAt(Mine, 0);
        goto LABEL_27;
      case 13:
        v23 = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !v23 )
          sub_1D0F30C(0, v24);
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
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_42740560; // x0
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

  if ( (byte_4E74365 & 1) == 0 )
  {
    sub_1D0F0B4(&System_DateTime_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E74365 = 1;
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
    sub_1D0F30C(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_42740560 = NetworkManager__getTime_42740560(v10, 0);
  value = questReleaseEnt->fields.value;
  v13 = Time_42740560;
  dateData = NetworkManager__getDateTime_42741340(Time_42740560 - 3600 * value, 0).fields._dateData;
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
    dateData = NetworkManager__getDateTime_42741340(v17, 0).fields._dateData;
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
  System_Func_object__int__o *_9__42_0; // x21
  Il2CppObject *v8; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  MapControl_WarInfo_o *current; // x21
  BalanceConfig_c *v22; // x0
  int32_t warId; // w22
  QuestTree___c_c *v24; // x8
  System_Func_object__bool__o *_9__42_1; // x21
  Il2CppObject *v26; // x22
  struct QuestTree___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x2
  BalanceConfig_c *v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4E7435A & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_QuestTree___c__GetLatestGrandWarInfo_b__42_0__);
    sub_1D0F0B4(&Method_QuestTree___c__GetLatestGrandWarInfo_b__42_1__);
    sub_1D0F0B4(&QuestTree___c_TypeInfo);
    byte_4E7435A = 1;
  }
  memset(&v38, 0, sizeof(v38));
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
  _9__42_0 = (System_Func_object__int__o *)v5->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestTree___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__42_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__42_0, v8, Method_QuestTree___c__GetLatestGrandWarInfo_b__42_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__42_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__42_0,
      (int32_t)_9__42_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__42_0,
                                                               (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v16,
                                                  (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_32:
    sub_1D0F30C(mapControlRootInfo, method);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)mapControlRootInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v18 )
      break;
    current = (MapControl_WarInfo_o *)v38.fields._current;
    if ( !v38.fields._current )
      sub_1D0F30C(v18, v19);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v38.fields._current[1].klass), v20) )
    {
      v22 = BalanceConfig_TypeInfo;
      warId = current->fields.warId;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      if ( warId != v22->static_fields->GrandExtra2WarId )
        goto LABEL_30;
      v24 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v24 = QuestTree___c_TypeInfo;
      }
      _9__42_1 = (System_Func_object__bool__o *)v24->static_fields->__9__42_1;
      if ( !_9__42_1 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = QuestTree___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__42_1 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MapControl_WarInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__42_1, v26, Method_QuestTree___c__GetLatestGrandWarInfo_b__42_1__, 0);
        v27 = QuestTree___c_TypeInfo->static_fields;
        v27->__9__42_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__42_1;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v27->__9__42_1, (int32_t)_9__42_1, v28, v29, v30, v31, v32, v33);
      }
      current = (MapControl_WarInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__52923832(
                                          v17,
                                          (System_Func_TSource__bool__o *)_9__42_1,
                                          (const MethodInfo_3278DB8 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
      if ( current )
      {
        v35 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v35 = BalanceConfig_TypeInfo;
        }
        if ( QuestTree__IsActiveWar(this, v35->static_fields->GrandExtra1WarId, v34) )
          goto LABEL_30;
      }
    }
  }
  current = 0;
LABEL_30:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return current;
}


MapControl_WarInfo_o *QuestTree__GetLatestProgressWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  QuestTree___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__41_0; // x21
  Il2CppObject *v8; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E74359 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_QuestTree___c__GetLatestProgressWarInfo_b__41_0__);
    sub_1D0F0B4(&QuestTree___c_TypeInfo);
    byte_4E74359 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
  _9__41_0 = (System_Func_object__int__o *)v5->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestTree___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__41_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__41_0, v8, Method_QuestTree___c__GetLatestProgressWarInfo_b__41_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__41_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__41_0,
      (int32_t)_9__41_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__41_0,
                                                               (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v16,
                                                  (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1D0F30C(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v17 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1D0F30C(v17, v18);
    if ( QuestTree__IsActiveWar(
           this,
           *(_DWORD *)((char *)&v22.fields._current->klass + (unsigned __int64)&dword_14),
           v19) )
    {
      goto LABEL_17;
    }
  }
  current = 0;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


MapControl_MapGimmickInfo_o *QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass27_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4E7434F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_1D0F0B4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass27_0__GetMapGimmickInfo_b__0__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass27_0_TypeInfo);
    byte_4E7434F = 1;
  }
  v5 = (QuestTree___c__DisplayClass27_0_o *)sub_1D0F300(QuestTree___c__DisplayClass27_0_TypeInfo);
  QuestTree___c__DisplayClass27_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.mapGimmickId = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass27_0__GetMapGimmickInfo_b__0__,
          0),
        !allMapGimmickInfoList) )
  {
    sub_1D0F30C(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_395CA78 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1D0F30C(QuestInfo, v5);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0);
}


int32_t QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  MapControl_WarInfo_o *v7; // x22
  WarEntity_o *Mine; // x0
  __int64 v9; // x1
  WarEntity_o *v10; // x21
  void *HasFlag; // x0
  const MethodInfo *v12; // x2
  MapControl_WarInfo_o *v13; // x20
  bool IsContainPrioredEntity; // w22
  int v15; // w8
  int32_t v16; // w19
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_object__o *UserReachableMapList; // x19
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v25; // x0
  const MethodInfo *v26; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  System_Collections_Generic_List_int__o *v28; // x21
  __int64 v29; // x1
  System_Collections_Generic_List_object__o *v30; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  MapControl_SpotInfo_o *current; // x23
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_int__o *v37; // x0
  __int64 v38; // x1
  int v39; // w19
  _BOOL8 v40; // x0
  __int64 v41; // x1
  __int64 Item; // x0
  __int64 v43; // x1
  int32_t v44; // w22
  _BOOL8 v45; // x0
  __int64 v46; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  int32_t v51; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4E74352 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4E74352 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  memset(&v54, 0, sizeof(v54));
  memset(&v53, 0, sizeof(v53));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0);
  if ( !ChildByWarID )
    return 0;
  v7 = ChildByWarID;
  Mine = MapControl_WarInfo__GetMine(ChildByWarID, 0);
  if ( !Mine )
    goto LABEL_71;
  v10 = Mine;
  HasFlag = (void *)WarEntity__HasFlag(Mine, 0x8000000, 0);
  if ( ((unsigned __int8)HasFlag & 1) == 0 )
    goto LABEL_22;
  HasFlag = this->fields.mapControlRootInfo;
  if ( !HasFlag )
    goto LABEL_22;
  HasFlag = MapControl_RootInfo__GetChildByWarID((MapControl_RootInfo_o *)HasFlag, v10->fields.targetId, 0);
  if ( !HasFlag )
    goto LABEL_22;
  v13 = (MapControl_WarInfo_o *)HasFlag;
  Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)HasFlag, 0);
  if ( !Mine )
    goto LABEL_71;
  IsContainPrioredEntity = WarEntity__IsContainPrioredEntity(Mine, 15, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_71:
    sub_1D0F30C(Mine, v9);
  HasFlag = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Mine, v10->fields.targetId, 0);
  if ( HasFlag )
  {
    HasFlag = (void *)WarReleaseEntity__IsHide((WarReleaseEntity_o *)HasFlag, 0);
    v15 = (unsigned __int8)HasFlag & 1;
  }
  else
  {
    v15 = 0;
  }
  if ( v15 | IsContainPrioredEntity )
  {
    Mine = MapControl_WarInfo__GetMine(v13, 0);
    if ( !Mine )
      goto LABEL_71;
    HasFlag = QuestTree__GetSpotInfo(this, Mine->fields.parentBlankEarthSpotId, v17);
    v7 = v13;
    if ( HasFlag )
      return *((_DWORD *)HasFlag + 7);
  }
  else
  {
    v7 = v13;
  }
LABEL_22:
  UserReachableMapList = (System_Collections_Generic_List_object__o *)QuestTree__GetUserReachableMapList(
                                                                        (QuestTree_o *)HasFlag,
                                                                        v7,
                                                                        v12);
  v19 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    goto LABEL_71;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    UserReachableMapList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v55 = v52;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v55.fields._current )
      sub_1D0F30C(0, v20);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v55.fields._current,
                                                              0);
    if ( !SpotList )
      sub_1D0F30C(0, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      SpotList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v54 = v52;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v54.fields._current )
        sub_1D0F30C(0, v23);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v54.fields._current,
                                                                              0,
                                                                              0);
      if ( !v19 )
        sub_1D0F30C(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v19,
        AvailableQuestIdList,
        (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v25, v19, v26);
  v28 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    UserReachableMapList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v16 = 0;
  v55 = v52;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v55.fields._current )
      sub_1D0F30C(0, v29);
    v30 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v55.fields._current,
                                                         0);
    if ( !v30 )
      sub_1D0F30C(0, v31);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      v30,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v54 = v52;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v32 )
        break;
      current = (MapControl_SpotInfo_o *)v54.fields._current;
      if ( !v54.fields._current )
        sub_1D0F30C(v32, v33);
      if ( HIDWORD(v54.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1D0F30C(0, v36);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0) )
          continue;
      }
      v37 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0);
      if ( !v37 )
        sub_1D0F30C(0, v38);
      v51 = v16;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v52,
        v37,
        (const MethodInfo_393FEC0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v39 = 0;
      v53 = v52;
      while ( 1 )
      {
        v40 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v53,
                (const MethodInfo_36CA170 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v40 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1D0F30C(v40, v41);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v53.fields._current,
                 (const MethodInfo_359F514 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v44 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v28 )
            sub_1D0F30C(Item, v43);
          v45 = System_Collections_Generic_List_int___Contains(
                  v28,
                  Item,
                  (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v45 )
          {
            ++v39;
          }
          else
          {
            items = v28->fields._items;
            v48 = Method_System_Collections_Generic_List_int__Add__;
            ++v28->fields._version;
            if ( !items )
              sub_1D0F30C(v45, v46);
            size = v28->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v28,
                v44,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v28->fields._size = size + 1;
              items->m_Items[size] = v44;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v53,
        (const MethodInfo_36CA16C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v16 = v51 - v39 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return v16;
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

  if ( (byte_4E74355 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4E74355 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = v40;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1D0F30C(v12, v13);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0);
        if ( !v9 )
          sub_1D0F30C(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v42.fields._current )
          sub_1D0F30C(v12, v13);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
    v19 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
LABEL_49:
      sub_1D0F30C(SpotList, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v39 = 0;
    v42 = v40;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v20 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v39;
        return (int)MapInfoByMapID;
      }
      v22 = (MapControl_SpotInfo_o *)v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1D0F30C(v20, v21);
LABEL_22:
        if ( v22->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1D0F30C(0, v24);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v22->fields.spotId, 0) )
        {
LABEL_25:
          v25 = MapControl_SpotInfo__GetAvailableQuestIdList(v22, 1, 0);
          if ( !v25 )
            sub_1D0F30C(0, v26);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            v25,
            (const MethodInfo_393FEC0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v27 = 0;
          v41 = v40;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v41,
                    (const MethodInfo_36CA170 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v28 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1D0F30C(v28, v29);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v41.fields._current,
                     (const MethodInfo_359F514 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v32 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v19 )
                sub_1D0F30C(Item, v31);
              v33 = System_Collections_Generic_List_int___Contains(
                      v19,
                      Item,
                      (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1D0F30C(v33, v34);
                size = v19->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v32,
                    *(const MethodInfo_393F3EC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
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
            (const MethodInfo_36CA16C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v39 = v39 - v27 + v22->fields.questCount;
        }
      }
      else
      {
        if ( !v42.fields._current )
          sub_1D0F30C(v20, v21);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
          goto LABEL_22;
      }
    }
  }
  return (int)MapInfoByMapID;
}


MapControl_QuestInfo_o *QuestTree__GetQuestInfo(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass28_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4E74350 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1D0F0B4(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass28_0__GetQuestInfo_b__0__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass28_0_TypeInfo);
    byte_4E74350 = 1;
  }
  v5 = (QuestTree___c__DisplayClass28_0_o *)sub_1D0F300(QuestTree___c__DisplayClass28_0_TypeInfo);
  QuestTree___c__DisplayClass28_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.questId = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass28_0__GetQuestInfo_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1D0F30C(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_395CA78 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4E74368 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4E74368 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1D0F30C(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    allQuestInfoList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1D0F30C(v8, v9);
    if ( LODWORD(v23.fields._current[4].klass) == warId )
    {
      if ( !v5 )
        sub_1D0F30C(v8, v9);
      items = v5->fields._items;
      v18 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1D0F30C(v8, v9);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v20[4] = (Il2CppClass *)current;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)current, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4E74354 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E74354 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1D0F30C(Instance, v5);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0);
}


MapControl_SpotInfo_o *QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass26_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4E7434E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1D0F0B4(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass26_0__GetSpotInfo_b__0__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass26_0_TypeInfo);
    byte_4E7434E = 1;
  }
  v5 = (QuestTree___c__DisplayClass26_0_o *)sub_1D0F300(QuestTree___c__DisplayClass26_0_TypeInfo);
  QuestTree___c__DisplayClass26_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.spotId = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v9 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass26_0__GetSpotInfo_b__0__,
          0),
        !allSpotInfoList) )
  {
    sub_1D0F30C(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_395CA78 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x21
  QuestTree___c_c *v19; // x0
  System_Func_object__int__o *_9__34_0; // x23
  Il2CppObject *v21; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  System_Predicate_object__o *v33; // x21

  if ( (byte_4E74353 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_1D0F0B4(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_QuestTree___c__GetUserReachableMapList_b__34_0__);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass34_0__GetUserReachableMapList_b__1__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass34_0_TypeInfo);
    sub_1D0F0B4(&QuestTree___c_TypeInfo);
    byte_4E74353 = 1;
  }
  v4 = sub_1D0F300(QuestTree___c__DisplayClass34_0_TypeInfo);
  QuestTree___c__DisplayClass34_0___ctor((QuestTree___c__DisplayClass34_0_o *)v4, 0);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0);
  v11 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v11;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
    _9__34_0 = (System_Func_object__int__o *)v19->static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = QuestTree___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__34_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__34_0, v21, Method_QuestTree___c__GetUserReachableMapList_b__34_0__, 0);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Func_MapButtonEntity__int__o *)_9__34_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__34_0,
        (int32_t)_9__34_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__34_0,
                            (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v18 )
    {
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1D0F30C(Mine, mapId);
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
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v18,
      mapId,
      *(const MethodInfo_393F3EC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = size + 1;
    items->m_Items[size] = mapId;
  }
LABEL_26:
  v33 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)v4,
    Method_QuestTree___c__DisplayClass34_0__GetUserReachableMapList_b__1__,
    0);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v33,
                                                                    (const MethodInfo_395CB20 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass38_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4E74357 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1D0F0B4(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass38_0__GetWarID_ByQuestID_b__0__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass38_0_TypeInfo);
    byte_4E74357 = 1;
  }
  v5 = (QuestTree___c__DisplayClass38_0_o *)sub_1D0F300(QuestTree___c__DisplayClass38_0_TypeInfo);
  QuestTree___c__DisplayClass38_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.questId = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass38_0__GetWarID_ByQuestID_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1D0F30C(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_395CA78 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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


System_Collections_Generic_List_MapControl_WarInfo__o *QuestTree__GetWarInfoAll_OrderMaterial(
        QuestTree_o *this,
        const MethodInfo *method)
{
  QuestTree___c_c *v3; // x0
  struct System_Collections_Generic_List_MapControl_WarInfo__o *allWarInfoList; // x19
  System_Func_object__int__o *_9__19_0; // x20
  Il2CppObject *v6; // x21
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4E7434A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderBy_MapControl_WarInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__GetWarInfoAll_OrderMaterial_b__19_0__);
    sub_1D0F0B4(&QuestTree___c_TypeInfo);
    byte_4E7434A = 1;
  }
  v3 = QuestTree___c_TypeInfo;
  allWarInfoList = this->fields.allWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v3 = QuestTree___c_TypeInfo;
  }
  _9__19_0 = (System_Func_object__int__o *)v3->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestTree___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__19_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__19_0, v6, Method_QuestTree___c__GetWarInfoAll_OrderMaterial_b__19_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__19_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)allWarInfoList,
                                                               (System_Func_TSource__TKey__o *)_9__19_0,
                                                               (const MethodInfo_327F0D4 *)Method_System_Linq_Enumerable_OrderBy_MapControl_WarInfo__int___);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v14,
                                                                    (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
}


System_Collections_Generic_List_MapControl_WarInfo__o *QuestTree__GetWarInfoAll_OrderReverse(
        QuestTree_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4E74349 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___80344696);
    sub_1D0F0B4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4E74349 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_60144900(
    v4,
    allWarInfoList,
    (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___80344696);
  if ( !v4 )
    sub_1D0F30C(v5, v6);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_395DD3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4E7434B & 1) == 0 )
  {
    sub_1D0F0B4(&QuestTree__Init_d__20_TypeInfo);
    byte_4E7434B = 1;
  }
  v5 = sub_1D0F300(QuestTree__Init_d__20_TypeInfo);
  QuestTree__Init_d__20___ctor((QuestTree__Init_d__20_o *)v5, 0, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)endCallback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4E74362 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4E74362 = 1;
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
    sub_1D0F30C(mapControlRootInfo, method);
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

  if ( (byte_4E7435C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7435C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1D0F30C(Instance, v6);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_3535BC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_37818784(this, (WarEntity_o *)entity, v7);
}


bool QuestTree__IsActiveEventWar_37818784(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_4E7435D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1D0F0B4(&long___TypeInfo);
    this = (QuestTree_o *)sub_1D0F0B4(&NetworkManager_TypeInfo);
    byte_4E7435D = 1;
  }
  entity = 0;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarReleaseMaster___);
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
  this = (QuestTree_o *)sub_1D0F15C(long___TypeInfo, 1);
  if ( !entity || !this )
LABEL_33:
    sub_1D0F30C(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1D0F314(this);
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

  if ( (byte_4E7435B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E7435B = 1;
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
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_25:
    sub_1D0F30C(Mine, v8);
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
  if ( WarEntity__IsEvent((WarEntity_o *)mapControlRootInfo, 0) && !QuestTree__IsActiveEventWar_37818784(this, v11, v12) )
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

  if ( (byte_4E7434C & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7434C = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v5);
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

  if ( (byte_4E74356 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4E74356 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0);
  if ( !SpotList )
    sub_1D0F30C(0, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    SpotList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v19.fields._current;
    if ( layer < 1 )
    {
      if ( !v19.fields._current )
        sub_1D0F30C(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields._current )
      sub_1D0F30C(v10, v11);
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
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v12 && v16 == 6;
  return (char)MapInfoByMapID;
}


bool QuestTree__IsQuestTreeUpdateFinished(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.isQuestTreeUpdateFinished;
}


bool QuestTree__IsSpotSatisfyingActiveCond(QuestTree_o *this, SpotEntity_o *spotEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1D0F30C(this, 0);
  return QuestTree__CheckSpotCond_37824124(
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
    sub_1D0F30C(this, 0);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0))
      && QuestTree__CheckSpotCond_37824124(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_37824124(
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

  if ( (byte_4E74369 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4E74369 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1D0F30C(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestInfoByWarId,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields._current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_1D0F30C(v10, v11);
    if ( !v10 )
      sub_1D0F30C(0, v11);
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
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_4E74358 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4E74358 = 1;
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
    sub_1D0F30C(QuestInfoByWarId, v6);
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
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    if ( !v17.fields._current )
      sub_1D0F30C(v10, v11);
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
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_String_o *name; // x1
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x22
  bool IsExistCommand; // w21
  int32_t v21; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4E7435E & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1D0F0B4(&SpotEntity_TypeInfo);
    byte_4E7435E = 1;
  }
  v6 = sub_1D0F300(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)name, v9, v10, v11, v12, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1CE513C(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1CE513C(v16);
  v19 = **(UnityEngine_Object_o ***)(v18 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1D0F30C(Instance, v8);
  v21 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v21, 0, 0);
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

  v4 = QuestTree__CheckMapGimmickCond_37821212(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1D0F30C(v4, v5);
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
    sub_1D0F30C(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_37824124(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_37824124(
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
    sub_1D0F30C(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_37824124(
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
    sub_1D0F30C(this, nowTime);
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

  if ( (byte_4E7434D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E7434D = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v4);
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
  if ( (byte_4E74348 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4E74348 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4E7435F & 1) == 0 )
  {
    sub_1D0F0B4(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_TypeInfo);
    byte_4E7435F = 1;
  }
  v5 = sub_1D0F300(QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v5, 0, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)endCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *QuestTree__mfBaseTreeUpdateWithOpenCheck(
        QuestTree_o *this,
        int32_t targetWarId,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4E74360 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_TypeInfo);
    byte_4E74360 = 1;
  }
  v7 = sub_1D0F300(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *)v7, 0, 0);
  if ( !v7 )
    sub_1D0F30C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 72), (int32_t)endCallback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


MapControl_RootInfo_o *QuestTree__mfGetMapCtrlP(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.mapControlRootInfo;
}


MapControl_MapInfo_o *QuestTree__mfGetMapInfoByMapID(QuestTree_o *this, int32_t mapId, const MethodInfo *method)
{
  QuestTree___c__DisplayClass32_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4E74351 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_1D0F0B4(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass32_0__mfGetMapInfoByMapID_b__0__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass32_0_TypeInfo);
    byte_4E74351 = 1;
  }
  v5 = (QuestTree___c__DisplayClass32_0_o *)sub_1D0F300(QuestTree___c__DisplayClass32_0_TypeInfo);
  QuestTree___c__DisplayClass32_0___ctor(v5, 0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  v5->fields.mapId = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0;
  v9 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass32_0__mfGetMapInfoByMapID_b__0__,
    0);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_395CA78 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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


void QuestTree__EnumerateBlankEarthSpotInfo_d__49___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestTree__EnumerateBlankEarthSpotInfo_d__49__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *v8; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotEntity_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  int32_t max_length; // w10
  BlankEarthSpotEntity_o *v24; // x21
  QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *v25; // x22
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4E74559 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)sub_1D0F0B4(&BlankEarthSpotMaster_TypeInfo);
    byte_4E74559 = 1;
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
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)v8->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v13 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0);
    v8->fields.__7__wrap1 = v13;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)&v8->fields.__7__wrap1;
  _7__wrap1 = v8->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v20 < max_length )
  {
    if ( v20 >= (unsigned int)max_length )
      sub_1D0F314(this);
    v24 = _7__wrap1->m_Items[v20];
    if ( v24 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)v8->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v24->fields.id,
                                                                   0);
        if ( _4__this )
        {
          v25 = this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v24, (MapControl_SpotInfo_o *)this, 0);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v25;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1D0F058(p__2__current, (int32_t)v25, v27, v28, v29, v30, v31, v32);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1D0F30C(this, method);
  }
  this->klass = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *v10; // x20
  struct QuestTree_o *_4__this; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4E7455A & 1) == 0 )
  {
    sub_1D0F0B4(&QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
    byte_4E7455A = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *)sub_1D0F300(QuestTree__EnumerateBlankEarthSpotInfo_d__49_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v10->fields.__4__this, (int32_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v10->fields.mapInfo = _3__mapInfo;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v10->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v10->fields.blankEarthSpotMaster,
    (int32_t)_3__blankEarthSpotMaster,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v10;
}


MapControl_SpotInfo_o *QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__49_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestTree__EnumerateBlankEarthSpotInfo_d__49__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__Init_d__20___ctor(QuestTree__Init_d__20_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__Init_d__20__MoveNext(QuestTree__Init_d__20_o *this, const MethodInfo *method)
{
  QuestTree__Init_d__20_o *v2; // x19
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
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  bool result; // w0
  __int64 v21; // x0
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4E7455B & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__20_o *)sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7455B = 1;
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
      if ( !_4__this->fields.isInit || QuestTree__IsNeedUpdateQuestTree(_4__this, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4E745EC )
        {
          sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
          byte_4E745EC = 1;
        }
        v6 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v6 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v6->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0);
          v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
            v9 = sub_1CE513C(v8);
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
          if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
            v10 = sub_1CE513C(v8);
          v11 = **(UnityEngine_Object_o ***)(v10 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
            goto LABEL_25;
          this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
            this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0);
              v12 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0);
              v2->fields.__2__current = (Il2CppObject *)v12;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
              sub_1D0F058(p__2__current, (int32_t)v12, v14, v15, v16, v17, v18, v19);
              result = 1;
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1D0F30C(this, method);
      }
      v21 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
        v21 = sub_1CE513C(v5);
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
      if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
        v22 = sub_1CE513C(v5);
      v23 = **(UnityEngine_Object_o ***)(v22 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
        this = (QuestTree__Init_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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


Il2CppObject *QuestTree__Init_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__Init_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__Init_d__20__System_Collections_IEnumerator_Reset(
        QuestTree__Init_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestTree__Init_d__20_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *QuestTree__Init_d__20__System_Collections_IEnumerator_get_Current(
        QuestTree__Init_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__Init_d__20__System_IDisposable_Dispose(QuestTree__Init_d__20_o *this, const MethodInfo *method)
{
  ;
}


void QuestTree___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E74554 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestTree___c_TypeInfo);
    byte_4E74554 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestTree___c___GetLatestGrandWarInfo_b__42_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1D0F30C(this, 0);
  return info->fields.warId;
}


bool QuestTree___c___GetLatestGrandWarInfo_b__42_1(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  int32_t warId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_4E74555 & 1) == 0 )
  {
    this = (QuestTree___c_o *)sub_1D0F0B4(&BalanceConfig_TypeInfo);
    byte_4E74555 = 1;
  }
  if ( !info )
    sub_1D0F30C(this, info);
  warId = info->fields.warId;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return warId == v5->static_fields->GrandExtra1WarId;
}


int32_t QuestTree___c___GetLatestProgressWarInfo_b__41_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1D0F30C(this, 0);
  return info->fields.warId;
}


int32_t QuestTree___c___GetUserReachableMapList_b__34_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.targetMapId;
}


int32_t QuestTree___c___GetWarInfoAll_OrderMaterial_b__19_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *v,
        const MethodInfo *method)
{
  if ( !v || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(v, 0)) == 0 )
    sub_1D0F30C(this, v);
  return WarEntity__GetMaterialPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__47_0(
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
    sub_1D0F30C(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__47_1(
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
    sub_1D0F30C(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__48_11(
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
    sub_1D0F30C(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__48_2(
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
    sub_1D0F30C(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__48_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.spotId;
}


void QuestTree___c__DisplayClass26_0___ctor(QuestTree___c__DisplayClass26_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass26_0___GetSpotInfo_b__0(
        QuestTree___c__DisplayClass26_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass27_0___ctor(QuestTree___c__DisplayClass27_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass27_0___GetMapGimmickInfo_b__0(
        QuestTree___c__DisplayClass27_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass28_0___ctor(QuestTree___c__DisplayClass28_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass28_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass28_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.questId == this->fields.questId;
}


void QuestTree___c__DisplayClass32_0___ctor(QuestTree___c__DisplayClass32_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass32_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass32_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass34_0___ctor(QuestTree___c__DisplayClass34_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass34_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass34_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass34_0_o *v4; // x20

  v4 = this;
  if ( (byte_4E74556 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass34_0_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4E74556 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass34_0_o *)v4->fields.reachableMapIds) == 0 )
    sub_1D0F30C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__);
}


void QuestTree___c__DisplayClass38_0___ctor(QuestTree___c__DisplayClass38_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass38_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass38_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass38_0_o *v3; // x19

  if ( !x || (v3 = this, (this = (QuestTree___c__DisplayClass38_0_o *)MapControl_QuestInfo__GetMine(x, 0)) == 0) )
    sub_1D0F30C(this, x);
  return this->fields.questId == v3->fields.questId;
}


void QuestTree___c__DisplayClass47_0___ctor(QuestTree___c__DisplayClass47_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass47_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void QuestTree___c__DisplayClass48_0___ctor(QuestTree___c__DisplayClass48_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass48_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.id == this->fields.targetWarId;
}


void QuestTree___c__DisplayClass48_1___ctor(QuestTree___c__DisplayClass48_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass48_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.warId == this->fields.warId;
}


bool QuestTree___c__DisplayClass48_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass48_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


bool QuestTree___c__DisplayClass48_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass48_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass48_2___ctor(QuestTree___c__DisplayClass48_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass48_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass48_3___ctor(QuestTree___c__DisplayClass48_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass48_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass48_3_o *v4; // x20

  v4 = this;
  if ( (byte_4E74557 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass48_3_o *)sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4E74557 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass48_3_o *)v4->fields.spotIdHashSet) == 0 )
    sub_1D0F30C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void QuestTree___c__DisplayClass48_4___ctor(QuestTree___c__DisplayClass48_4_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass48_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void QuestTree___c__DisplayClass48_5___ctor(QuestTree___c__DisplayClass48_5_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass48_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass48_6___ctor(QuestTree___c__DisplayClass48_6_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass48_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass48_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass48_6_o *v4; // x20

  v4 = this;
  if ( (byte_4E74558 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass48_6_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4E74558 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass48_6_o *)v4->fields.spotInfoList) == 0 )
    sub_1D0F30C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool QuestTree___c__DisplayClass48_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass48_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool QuestTree___c__DisplayClass48_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass48_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.questId == this->fields.questId;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__47___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v2; // x26
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *MasterData_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  Il2CppObject *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  Il2CppObject *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  Il2CppObject *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_Collections_Generic_Dictionary_int__object__o *v95; // x21
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  System_Object_array *Entitys; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
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
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
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
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v146; // x22
  unsigned int v147; // w27
  __int64 v148; // x8
  int32_t v149; // w24
  int32_t v150; // w2
  int32_t v151; // w3
  System_String_o *v152; // x4
  int32_t v153; // w5
  int64_t v154; // x6
  System_String_o *v155; // x7
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v158; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v160; // x23
  Il2CppClass **v161; // x0
  Il2CppObject *v162; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v163; // x25
  int v164; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_c **v166; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_c *v167; // x8
  SpotEntity_o **v168; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_c *v169; // t1
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  __int64 v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  __int64 v179; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v181; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v182; // x25
  int v183; // w19
  unsigned int v184; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_c **v185; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_c *v186; // x8
  SpotRoadEntity_o **v187; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_c *v188; // t1
  int32_t v189; // w2
  int32_t v190; // w3
  System_String_o *v191; // x4
  int32_t v192; // w5
  int64_t v193; // x6
  System_String_o *v194; // x7
  __int64 v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x8
  Il2CppObject *v199; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v200; // x24
  int v201; // w19
  int v202; // w25
  __int64 v203; // x8
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x4
  int32_t v207; // w5
  int64_t v208; // x6
  System_String_o *v209; // x7
  __int64 v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  __int64 v213; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x26
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v216; // x22
  Il2CppObject *v217; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  System_String_o *v221; // x4
  int32_t v222; // w5
  int64_t v223; // x6
  System_String_o *v224; // x7
  Il2CppObject *v225; // x22
  struct QuestTree___c__DisplayClass47_0_o **p__8__1; // x21
  int32_t v227; // w2
  int32_t v228; // w3
  System_String_o *v229; // x4
  int32_t v230; // w5
  int64_t v231; // x6
  System_String_o *v232; // x7
  int64_t v233; // x22
  MapControl_WarInfo_o *v234; // x23
  int32_t v235; // w2
  int32_t v236; // w3
  System_String_o *v237; // x4
  int32_t v238; // w5
  int64_t v239; // x6
  System_String_o *v240; // x7
  MapControl_MapInfo_o *v241; // x22
  int32_t v242; // w2
  int32_t v243; // w3
  System_String_o *v244; // x4
  int32_t v245; // w5
  int64_t v246; // x6
  System_String_o *v247; // x7
  MapControl_SpotInfo_o *v248; // x22
  int32_t v249; // w2
  int32_t v250; // w3
  System_String_o *v251; // x4
  int32_t v252; // w5
  int64_t v253; // x6
  System_String_o *v254; // x7
  WarEntity_o *v255; // x22
  int32_t v256; // w2
  int32_t v257; // w3
  System_String_o *v258; // x4
  int32_t v259; // w5
  int64_t v260; // x6
  System_String_o *v261; // x7
  Il2CppObject *v262; // x0
  int32_t v263; // w2
  int32_t v264; // w3
  System_String_o *v265; // x4
  int32_t v266; // w5
  int64_t v267; // x6
  System_String_o *v268; // x7
  bool v269; // zf
  int v270; // w8
  QuestEntity_o *v271; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass47_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v276; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v278; // w2
  int32_t v279; // w3
  System_String_o *v280; // x4
  int32_t v281; // w5
  int64_t v282; // x6
  System_String_o *v283; // x7
  Il2CppObject *v284; // x0
  int32_t v285; // w2
  int32_t v286; // w3
  System_String_o *v287; // x4
  int32_t v288; // w5
  int64_t v289; // x6
  System_String_o *v290; // x7
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v293; // w2
  int32_t v294; // w3
  System_String_o *v295; // x4
  int32_t v296; // w5
  int64_t v297; // x6
  System_String_o *v298; // x7
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  WarEntity_o *Mine; // x0
  int32_t v307; // w2
  int32_t v308; // w3
  System_String_o *v309; // x4
  int32_t v310; // w5
  int64_t v311; // x6
  System_String_o *v312; // x7
  int v313; // w25
  int32_t v314; // w2
  int32_t v315; // w3
  System_String_o *v316; // x4
  int32_t v317; // w5
  int64_t v318; // x6
  System_String_o *v319; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v320; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v322; // w2
  int32_t v323; // w3
  System_String_o *v324; // x4
  int32_t v325; // w5
  int64_t v326; // x6
  System_String_o *v327; // x7
  struct WarEntity_o *warEnt_5__23; // x8
  int v329; // w19
  Il2CppObject *Master_object; // x25
  bool isEntityExistsFromId; // w0
  struct MapControl_SpotInfo_o *v332; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v334; // x9
  struct MapControl_MapInfo_o *v335; // x9
  bool v336; // w8
  int32_t v337; // w2
  int32_t v338; // w3
  System_String_o *v339; // x4
  int32_t v340; // w5
  int64_t v341; // x6
  System_String_o *v342; // x7
  Il2CppObject *v343; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v344; // x21
  int v345; // w19
  int v346; // w22
  __int64 v347; // x8
  __int64 v348; // x8
  _QWORD *v349; // x9
  __int64 v350; // x10
  __int64 v351; // x8
  int32_t v352; // w2
  int32_t v353; // w3
  System_String_o *v354; // x4
  int32_t v355; // w5
  int64_t v356; // x6
  System_String_o *v357; // x7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v359; // x22
  Il2CppObject *v360; // x23
  struct QuestTree___c_StaticFields *v361; // x0
  int32_t v362; // w2
  int32_t v363; // w3
  System_String_o *v364; // x4
  int32_t v365; // w5
  int64_t v366; // x6
  System_String_o *v367; // x7
  int32_t v368; // w2
  int32_t v369; // w3
  System_String_o *v370; // x4
  int32_t v371; // w5
  int64_t v372; // x6
  System_String_o *v373; // x7
  int32_t v374; // w2
  int32_t v375; // w3
  System_String_o *v376; // x4
  int32_t v377; // w5
  int64_t v378; // x6
  System_String_o *v379; // x7
  int32_t v380; // w2
  int32_t v381; // w3
  System_String_o *v382; // x4
  int32_t v383; // w5
  int64_t v384; // x6
  System_String_o *v385; // x7
  int32_t v386; // w2
  int32_t v387; // w3
  System_String_o *v388; // x4
  int32_t v389; // w5
  int64_t v390; // x6
  System_String_o *v391; // x7
  int32_t v392; // w2
  int32_t v393; // w3
  System_String_o *v394; // x4
  int32_t v395; // w5
  int64_t v396; // x6
  System_String_o *v397; // x7
  int32_t v398; // w2
  int32_t v399; // w3
  System_String_o *v400; // x4
  int32_t v401; // w5
  int64_t v402; // x6
  System_String_o *v403; // x7
  int32_t v404; // w2
  int32_t v405; // w3
  System_String_o *v406; // x4
  int32_t v407; // w5
  int64_t v408; // x6
  System_String_o *v409; // x7
  GrandQuestFolderBoardItem_o *v410; // x26
  int v411; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v412; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v413; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v414; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *v415; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v417; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v421; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4E7455C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1D0F0B4(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1D0F0B4(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1D0F0B4(&long___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1D0F0B4(&MapControl_MapInfo_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&OptionManager_TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1D0F0B4(&MapControl_SpotInfo_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_0__);
    sub_1D0F0B4(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_1__);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass47_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass47_0_TypeInfo);
    sub_1D0F0B4(&QuestTree___c_TypeInfo);
    sub_1D0F0B4(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)sub_1D0F0B4(&MapControl_WarInfo_TypeInfo);
    byte_4E7455C = 1;
  }
  v421 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v417 = 0;
  mapGimmickInfo = 0;
  value = 0;
  _4__this = v2->fields.__4__this;
  v415 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      QuestTree__InitInfo(_4__this, 0);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._dataManager_5__2,
        (int32_t)Instance,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._mapMaster_5__3,
        (int32_t)MasterData_object,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v18;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._spotMaster_5__4,
        (int32_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v25 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v25;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._blankEarthSpotMaster_5__5,
        (int32_t)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v32 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v32;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._questMaster_5__6,
        (int32_t)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v39 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v39;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._questPhaseMaster_5__7,
        (int32_t)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v46 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v46;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventMaster_5__8,
        (int32_t)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v53 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v53;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventDetailMaster_5__9,
        (int32_t)v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v60 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v60;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventStatusMaster_5__10,
        (int32_t)v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v67 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v67;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int32_t)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v74 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v74;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._spotRoadMaster_5__12,
        (int32_t)v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v81 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v81;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._mapGimmickMaster_5__13,
        (int32_t)v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      v88 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v88;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._questPickupMaster_5__14,
        (int32_t)v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      v95 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v95,
        (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v95;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_291;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_291;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_3534E00 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v2->fields._warList_5__16,
        (int32_t)Entitys,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)NetworkManager__getTime(0);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_291;
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
      v2->fields.__1__state = -1;
      goto LABEL_262;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_291;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
                                                                 endCallback->fields.method_code,
                                                                 endCallback->fields.method);
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_275;
    default:
      return 0;
  }
  while ( v111 < max_length )
  {
    v116 = v2->fields._warList_5__16;
    if ( !v116 )
      goto LABEL_291;
    if ( (unsigned int)v111 >= LODWORD(v116->max_length) )
      goto LABEL_146;
    v117 = v116->m_Items[v111];
    if ( !v117 )
      goto LABEL_291;
    if ( !_4__this )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_291;
    id = v117->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0);
    if ( !this )
      goto LABEL_291;
    v119 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_WarInfo__GetEventId(v119, 0);
      if ( !eventMaster_5__8 )
        goto LABEL_291;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_291;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v119, 1, 0, 0);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_WarInfo__GetEventId(v119, 0);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_291;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v421,
               (int32_t)this,
               (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v421;
          if ( !v421 )
            goto LABEL_291;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v421, 0x2000000, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)entity;
            if ( !entity )
              goto LABEL_291;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_WarInfo__GetEventId(v119, 0);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_291;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v132 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_WarInfo__GetEventId(v119, 0);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_291;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v132->fields.statusId,
                                                                           0);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_291;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v133 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)sub_1D0F15C(long___TypeInfo, 3);
        v134 = entity;
        if ( !entity || !this )
          goto LABEL_291;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_146;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_146;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass47_0_o *)v134[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_146;
        this->fields.endCallback = (struct System_Action_o *)v134[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v133, (System_Int64_array *)this, 0);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_291;
    v136 = *(_QWORD *)&this->fields.__1__state;
    v137 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v136 )
      goto LABEL_291;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v136 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v119,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    }
    else
    {
      v139 = v136 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v139 + 32) = v119;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v139 + 32), (int32_t)v119, v120, v121, v122, v123, v124, v125);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapMaster__getList((MapMaster_o *)this, id, 0);
    if ( !this )
      goto LABEL_291;
    v146 = this;
    v414 = this->fields.__2__current;
    if ( (int)v414 >= 1 )
    {
      v147 = 0;
      v412 = this;
      v413 = v119;
      while ( 1 )
      {
        v148 = *((_QWORD *)&v146->fields.__4__this + (int)v147);
        if ( !v148 )
          goto LABEL_291;
        v149 = *(_DWORD *)(v148 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_WarInfo__AddChild(v119, v149, 0);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_291;
        items = allMapInfoList->fields._items;
        v158 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_291;
        size = allMapInfoList->fields._size;
        v160 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
        }
        else
        {
          v161 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v161[4] = (Il2CppClass *)v160;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v161 + 4), (int32_t)v160, v150, v151, v152, v153, v154, v155);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_291;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)SpotMaster__getList((SpotMaster_o *)this, v149, 0);
        if ( !this )
          goto LABEL_291;
        v162 = this->fields.__2__current;
        v163 = this;
        v164 = (_DWORD)v162 - 1;
        if ( (int)v162 >= 1 )
          break;
LABEL_89:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v160,
                                                                   v415->fields._blankEarthSpotMaster_5__5,
                                                                   0);
        if ( !allSpotInfoList )
          goto LABEL_291;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v415->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_291;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v149,
                                                                   0);
        if ( !this )
          goto LABEL_291;
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
              goto LABEL_291;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v160,
                                                                       (int32_t)v186->_1.name,
                                                                       0);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v184 >= LODWORD(v182->fields.__2__current) )
              goto LABEL_146;
            QuestTree__SetupSpotRoadInfo(_4__this, *v187, &spotRoadInfo, 0);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_291;
            method = (const MethodInfo *)spotRoadInfo;
            v195 = *(_QWORD *)&this->fields.__1__state;
            v196 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v195 )
              goto LABEL_291;
            v197 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v197 >= *(_DWORD *)(v195 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
            }
            else
            {
              v198 = v195 + 8 * v197;
              LODWORD(this->fields.__2__current) = v197 + 1;
              *(_QWORD *)(v198 + 32) = method;
              sub_1D0F058(
                (GrandQuestFolderBoardItem_o *)(v198 + 32),
                (int32_t)method,
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
        v2 = v415;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v415->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_291;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v149,
                                                                   0);
        if ( !this )
          goto LABEL_291;
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
              goto LABEL_291;
            if ( !v160 )
              goto LABEL_291;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v160, *(_DWORD *)(v203 + 16), 0);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_291;
            method = (const MethodInfo *)mapGimmickInfo;
            v210 = *(_QWORD *)&this->fields.__1__state;
            v211 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v210 )
              goto LABEL_291;
            v212 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v212 >= *(_DWORD *)(v210 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
            }
            else
            {
              v213 = v210 + 8 * v212;
              LODWORD(this->fields.__2__current) = v212 + 1;
              *(_QWORD *)(v213 + 32) = method;
              sub_1D0F058(
                (GrandQuestFolderBoardItem_o *)(v213 + 32),
                (int32_t)method,
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
        if ( ++v147 == (_DWORD)v414 )
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
          goto LABEL_291;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_MapInfo__AddChild(
                                                                   v160,
                                                                   (int32_t)v167->_1.name,
                                                                   0);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v163->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v168, &spotInfo, 0);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_291;
        method = (const MethodInfo *)spotInfo;
        v176 = *(_QWORD *)&this->fields.__1__state;
        v177 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v176 )
          goto LABEL_291;
        v178 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
        }
        else
        {
          v179 = v176 + 8 * v178;
          LODWORD(this->fields.__2__current) = v178 + 1;
          *(_QWORD *)(v179 + 32) = method;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v179 + 32), (int32_t)method, v170, v171, v172, v173, v174, v175);
        }
        if ( v164 == i )
          goto LABEL_89;
      }
LABEL_146:
      sub_1D0F314(this);
    }
LABEL_122:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1D0F058(p__2__current, 0, v140, v141, v142, v143, v144, v145);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
LABEL_125:
    max_length = v2->fields._warCount_5__19;
    v111 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v111;
  }
  if ( !_4__this )
    goto LABEL_291;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestTree___c_TypeInfo;
  }
  v216 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 48LL);
  if ( !v216 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestTree___c_TypeInfo;
    }
    v217 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v216 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v216, v217, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Comparison_MapControl_WarInfo__o *)v216;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__47_0,
      (int32_t)v216,
      v219,
      v220,
      v221,
      v222,
      v223,
      v224);
  }
  if ( !allWarInfoList )
    goto LABEL_291;
  System_Collections_Generic_List_object___Sort_60153556(
    allWarInfoList,
    v216,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v225 = (Il2CppObject *)sub_1D0F300(QuestTree___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor(v225, 0);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass47_0_o *)v225;
  p__8__1 = &v2->fields.__8__1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, (int32_t)v225, v227, v228, v229, v230, v231, v232);
  v233 = v2->fields._nowTime_5__17;
  v234 = (MapControl_WarInfo_o *)sub_1D0F300(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v234, v233, 0);
  v2->fields._warInfo_5__20 = v234;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v2->fields._warInfo_5__20,
    (int32_t)v234,
    v235,
    v236,
    v237,
    v238,
    v239,
    v240);
  v241 = (MapControl_MapInfo_o *)sub_1D0F300(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v241, 0);
  v2->fields._mapInfo_5__21 = v241;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v2->fields._mapInfo_5__21,
    (int32_t)v241,
    v242,
    v243,
    v244,
    v245,
    v246,
    v247);
  v248 = (MapControl_SpotInfo_o *)sub_1D0F300(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v248, 0);
  v2->fields._spotInfo_5__22 = v248;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v2->fields._spotInfo_5__22,
    (int32_t)v248,
    v249,
    v250,
    v251,
    v252,
    v253,
    v254);
  v255 = (WarEntity_o *)sub_1D0F300(WarEntity_TypeInfo);
  WarEntity___ctor(v255, 0);
  v2->fields._warEnt_5__23 = v255;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v2->fields._warEnt_5__23,
    (int32_t)v255,
    v256,
    v257,
    v258,
    v259,
    v260,
    v261);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_291;
  v262 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v262;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v2->fields._userQuestMaster_5__24,
    (int32_t)v262,
    v263,
    v264,
    v265,
    v266,
    v267,
    v268);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_291;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v269 = !OptionManager__isSavedMemoryMode(0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._questMaster_5__6;
  v270 = v269 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v270;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_291;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestMaster__Count((QuestMaster_o *)this, 0);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0);
    if ( !this )
      goto LABEL_291;
    v271 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v417 = 0;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4E710BF )
    {
      sub_1D0F0B4(&NetworkManager_TypeInfo);
      byte_4E710BF = 1;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)NetworkManager_TypeInfo;
    }
    if ( !userQuestMaster_5__24 )
      goto LABEL_291;
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__24,
           &v417,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v417;
      if ( !v417 )
        goto LABEL_291;
      QuestPhase = UserQuestEntity__getQuestPhase(v417, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestEntity__getSpotId_43844540(v271, QuestPhase + 1, 0);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_291;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_291;
      v276 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass47_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&_8__1->fields.__9__2,
          (int32_t)_9__2,
          v278,
          v279,
          v280,
          v281,
          v282,
          v283);
      }
      if ( !v276 )
        goto LABEL_291;
      v284 = System_Collections_Generic_List_object___Find(
               v276,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_395CA78 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v415;
      v415->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v284;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v415->fields._spotInfo_5__22,
        (int32_t)v284,
        v285,
        v286,
        v287,
        v288,
        v289,
        v290);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v415->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_291;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0);
      if ( v415->fields._mapInfoNow_5__27 != MapID )
      {
        v415->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0);
        v415->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v415->fields._mapInfo_5__21,
          (int32_t)MapInfoByMapID,
          v293,
          v294,
          v295,
          v296,
          v297,
          v298);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v415->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_291;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0);
        if ( !this )
          goto LABEL_291;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v415->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v415->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0);
          v415->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v415->fields._warInfo_5__20,
            (int32_t)WarInfoByWarID,
            v300,
            v301,
            v302,
            v303,
            v304,
            v305);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v415->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_291;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
          v415->fields._warEnt_5__23 = Mine;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v415->fields._warEnt_5__23,
            (int32_t)Mine,
            v307,
            v308,
            v309,
            v310,
            v311,
            v312);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_291;
    if ( !v417 )
      goto LABEL_191;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v417;
    if ( !v417 )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)UserQuestEntity__HasStatus(v417, 8, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_179;
    if ( !v417 )
      goto LABEL_291;
    if ( v417->fields.challengeNum >= 1 )
    {
LABEL_179:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_291;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v417;
    if ( !v417 )
      goto LABEL_291;
    if ( UserQuestEntity__getClearNum(v417, 0) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_291;
LABEL_191:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0);
      v313 = 0;
      goto LABEL_192;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v417 )
      goto LABEL_291;
    if ( !this )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v417->fields.questId,
                                                               0,
                                                               0);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_291;
    v313 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0);
    if ( !this )
      goto LABEL_291;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_291;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0);
    }
LABEL_192:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_291;
    v320 = this;
    if ( !this )
      goto LABEL_291;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields._eventMaster_5__8,
      (int32_t)method,
      v314,
      v315,
      v316,
      v317,
      v318,
      v319);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v320->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v320->fields._questPhaseMaster_5__7,
      (int32_t)spotInfo_5__22,
      v322,
      v323,
      v324,
      v325,
      v326,
      v327);
    if ( !_4__this )
      goto LABEL_291;
    v320->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v320,
                                                                          0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_291;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_206;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_291;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)value;
      if ( !value )
        goto LABEL_291;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_206:
        v320->fields.__4__this = 0;
LABEL_210:
        v329 = 1;
        goto LABEL_211;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v271, (MapControl_QuestInfo_o *)v320, v2->fields._warInfoNow_5__28, 0) != 1 )
      goto LABEL_210;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_291;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    v329 = 0;
LABEL_211:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v320, 0) )
    {
      if ( ((v313 | v329) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v320, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestResetMaster___);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)sub_1D0F15C(long___TypeInfo, 1);
          if ( !this )
            goto LABEL_291;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_146;
          this->fields.__4__this = (struct QuestTree_o *)_1__state;
          if ( !Master_object )
            goto LABEL_291;
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   (System_Int64_array *)this,
                                   (const MethodInfo_3535158 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v417 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v417, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_291;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
          }
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_291;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v320->fields.__1__state, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v320, 0) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v320,
                                                                   0);
        if ( !this )
          goto LABEL_291;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v332 = v2->fields._spotInfo_5__22;
          if ( !v332 )
            goto LABEL_291;
          v332->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_291;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v320,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v334 = v2->fields._spotInfo_5__22;
        if ( !v334 )
          goto LABEL_291;
        v334->fields._IsNext_k__BackingField = 1;
        v335 = v2->fields._mapInfo_5__21;
        if ( !v335 )
          goto LABEL_291;
        v335->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v271, 0x8000000000LL, 0) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_291;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
      }
    }
    if ( v417 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)UserQuestEntity__HasStatus(v417, 8, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v417 )
          goto LABEL_291;
        v336 = v417->fields.challengeNum == 0;
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
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_291;
    LODWORD(v320->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_291;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    if ( !this )
      goto LABEL_291;
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
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v320,
                                                                   *(_DWORD *)(v347 + 16),
                                                                   *(_DWORD *)(v347 + 20),
                                                                   0);
        if ( v345 == v346 )
          goto LABEL_255;
        if ( (unsigned int)++v346 >= LODWORD(v344->fields.__2__current) )
          goto LABEL_146;
      }
LABEL_291:
      sub_1D0F30C(this, method);
    }
LABEL_255:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_291;
    v348 = *(_QWORD *)&this->fields.__1__state;
    v349 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v348 )
      goto LABEL_291;
    v350 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v350 >= *(_DWORD *)(v348 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v320,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v349[4] + 192LL) + 112LL));
    }
    else
    {
      v351 = v348 + 8 * v350;
      LODWORD(this->fields.__2__current) = v350 + 1;
      *(_QWORD *)(v351 + 32) = v320;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v351 + 32), (int32_t)v320, v337, v338, v339, v340, v341, v342);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0;
      v410 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1D0F058(v410, 0, v352, v353, v354, v355, v356, v357);
      v411 = 2;
      goto LABEL_289;
    }
LABEL_262:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_291;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestTree___c_TypeInfo;
  }
  v359 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 56LL);
  if ( !v359 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)QuestTree___c_TypeInfo;
    }
    v360 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v359 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v359, v360, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__47_1__, 0);
    v361 = QuestTree___c_TypeInfo->static_fields;
    v361->__9__47_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v359;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v361->__9__47_1, (int32_t)v359, v362, v363, v364, v365, v366, v367);
  }
  if ( !allQuestInfoList )
    goto LABEL_291;
  System_Collections_Generic_List_object___Sort_60153556(
    allQuestInfoList,
    v359,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, 0, v368, v369, v370, v371, v372, v373);
  v2->fields._warInfo_5__20 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields._warInfo_5__20, 0, v374, v375, v376, v377, v378, v379);
  v2->fields._mapInfo_5__21 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields._mapInfo_5__21, 0, v380, v381, v382, v383, v384, v385);
  v2->fields._spotInfo_5__22 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields._spotInfo_5__22, 0, v386, v387, v388, v389, v390, v391);
  v2->fields._warEnt_5__23 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields._warEnt_5__23, 0, v392, v393, v394, v395, v396, v397);
  v2->fields._userQuestMaster_5__24 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields._userQuestMaster_5__24, 0, v398, v399, v400, v401, v402, v403);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_291;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0;
    v410 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
    sub_1D0F058(v410, 0, v404, v405, v406, v407, v408, v409);
    v411 = 3;
LABEL_289:
    LODWORD(v410[-1].fields._ClosedMessage_k__BackingField) = v411;
    return 1;
  }
LABEL_275:
  _4__this->fields.isQuestTreeUpdateFinished = 1;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_291;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_291;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_291;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_291;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_291;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_291;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_291;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_291;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_291;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_291;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_291;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_WarAddMaster___);
  if ( !this )
    goto LABEL_291;
  WarAddMaster__DeleteCache((WarAddMaster_o *)this, 0);
  result = 0;
  _4__this->fields.isUseCache = 0;
  return result;
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__47__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v8; // x8
  QuestTree_o *_4__this; // x19
  Il2CppObject *v10; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  struct QuestTree___c__DisplayClass48_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v33; // x0
  Il2CppObject *v34; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x1
  DataManager_o *v43; // x0
  Il2CppObject *v44; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x1
  DataManager_o *v53; // x0
  Il2CppObject *v54; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  __int64 v62; // x1
  DataManager_o *v63; // x0
  Il2CppObject *v64; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
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
  DataManager_o *v84; // x0
  Il2CppObject *v85; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  __int64 v93; // x1
  DataManager_o *v94; // x0
  Il2CppObject *v95; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  __int64 v103; // x1
  DataManager_o *v104; // x0
  Il2CppObject *v105; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  __int64 v113; // x0
  __int64 v114; // x1
  System_Collections_Generic_Dictionary_int__object__o *v115; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  Il2CppObject *v123; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  __int64 v131; // x1
  DataManager_o *v132; // x0
  Il2CppObject *v133; // x0
  __int64 v134; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys; // x25
  Il2CppObject *v136; // x27
  System_Func_object__bool__o *v137; // x26
  Il2CppObject *v138; // x0
  __int64 v139; // x1
  struct QuestTree___c__DisplayClass48_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v144; // x27
  System_Predicate_object__o *v145; // x26
  __int64 v146; // x0
  __int64 v147; // x1
  __int64 Index; // x0
  __int64 v149; // x1
  System_Collections_Generic_List_object__o *v150; // x0
  struct QuestTree___c__DisplayClass48_1_o *v151; // x9
  MapControl_RootInfo_o *v152; // x0
  struct MapControl_WarInfo_o *v153; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  __int64 v161; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v163; // x1
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  MapControl_WarInfo_o *v170; // x0
  __int64 EventId; // x0
  __int64 v172; // x1
  _BOOL8 v173; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v174; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v176; // x0
  MapControl_WarInfo_o *v177; // x0
  __int64 v178; // x0
  __int64 v179; // x1
  __int64 v180; // x1
  __int64 v181; // x1
  __int64 v182; // x1
  MapControl_WarInfo_o *v183; // x0
  __int64 v184; // x0
  __int64 v185; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v187; // x0
  __int64 v188; // x1
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v190; // x1
  struct QuestTree___c__DisplayClass48_1_o *v191; // x8
  Il2CppObject *v192; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v194; // x21
  __int64 v195; // x0
  __int64 v196; // x1
  Il2CppObject *v197; // x8
  unsigned int v198; // w9
  System_Collections_Generic_List_object__o *v199; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v201; // x1
  _QWORD *v202; // x9
  __int64 size; // x10
  Il2CppClass **v204; // x8
  __int64 v205; // x0
  __int64 v206; // x1
  int32_t v207; // w9
  struct QuestTree___c__DisplayClass48_1_o *v208; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v210; // x0
  __int64 v211; // x1
  SpotRoadEntity_array *v212; // x20
  int v213; // w25
  unsigned int i; // w26
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
  int32_t v228; // w2
  int32_t v229; // w3
  System_String_o *v230; // x4
  int32_t v231; // w5
  int64_t v232; // x6
  System_String_o *v233; // x7
  System_Collections_Generic_List_object__o *v234; // x0
  Il2CppObject *v235; // x1
  struct System_Object_array *v236; // x8
  _QWORD *v237; // x9
  __int64 v238; // x10
  Il2CppClass **v239; // x8
  struct QuestTree___c__DisplayClass48_1_o *v240; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v242; // x0
  __int64 v243; // x1
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  MapGimmickEntity_array *v250; // x20
  int v251; // w24
  unsigned int j; // w25
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
  int32_t v266; // w2
  int32_t v267; // w3
  System_String_o *v268; // x4
  int32_t v269; // w5
  int64_t v270; // x6
  System_String_o *v271; // x7
  System_Collections_Generic_List_object__o *v272; // x0
  Il2CppObject *v273; // x1
  struct System_Object_array *v274; // x8
  _QWORD *v275; // x9
  __int64 v276; // x10
  Il2CppClass **v277; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v278; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v279; // x8
  int v280; // w9
  GrandQuestFolderBoardItem_o *p_mapInfo_5__16; // x8
  __int64 v282; // x0
  __int64 v283; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v284; // x8
  int32_t max_length; // w10
  int32_t v286; // w9
  struct System_Action_o *endCallback; // x9
  __int64 v288; // x0
  __int64 v289; // x1
  struct MapControl_WarInfo_o *v290; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v292; // x0
  int32_t v293; // w2
  int32_t v294; // w3
  System_String_o *v295; // x4
  int32_t v296; // w5
  int64_t v297; // x6
  System_String_o *v298; // x7
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v300; // x10
  MapEntity_o *v301; // x9
  struct QuestTree___c__DisplayClass48_1_o *v302; // x22
  struct MapControl_WarInfo_o *v303; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v306; // w2
  int32_t v307; // w3
  System_String_o *v308; // x4
  int32_t v309; // w5
  int64_t v310; // x6
  System_String_o *v311; // x7
  struct MapControl_WarInfo_o *v312; // x8
  System_Collections_Generic_List_object__o *v313; // x0
  struct QuestTree___c__DisplayClass48_1_o *v314; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v317; // w2
  int32_t v318; // w3
  System_String_o *v319; // x4
  int32_t v320; // w5
  int64_t v321; // x6
  System_String_o *v322; // x7
  __int64 v323; // x0
  __int64 v324; // x1
  System_Collections_Generic_List_object__o *v325; // x0
  struct QuestTree___c__DisplayClass48_1_o *v326; // x8
  MapControl_WarInfo_o *v327; // x0
  struct MapControl_MapInfo_o *v328; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v329; // x0
  int32_t v330; // w2
  int32_t v331; // w3
  System_String_o *v332; // x4
  int32_t v333; // w5
  int64_t v334; // x6
  System_String_o *v335; // x7
  __int64 v336; // x1
  int32_t v337; // w2
  int32_t v338; // w3
  System_String_o *v339; // x4
  int32_t v340; // w5
  int64_t v341; // x6
  System_String_o *v342; // x7
  System_Collections_Generic_List_object__o *v343; // x0
  struct System_Object_array *v344; // x8
  Il2CppObject *v345; // x1
  _QWORD *v346; // x9
  __int64 v347; // x10
  Il2CppClass **v348; // x8
  __int64 v349; // x0
  __int64 v350; // x1
  System_Collections_Generic_List_object__o *v351; // x20
  QuestTree___c_c *v352; // x8
  System_Comparison_T__o *_9__48_2; // x21
  Il2CppObject *v354; // x22
  struct QuestTree___c_StaticFields *v355; // x0
  int32_t v356; // w2
  int32_t v357; // w3
  System_String_o *v358; // x4
  int32_t v359; // w5
  int64_t v360; // x6
  System_String_o *v361; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v362; // x0
  int32_t v363; // w2
  int32_t v364; // w3
  System_String_o *v365; // x4
  int32_t v366; // w5
  int64_t v367; // x6
  System_String_o *v368; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v369; // x0
  int32_t v370; // w2
  int32_t v371; // w3
  System_String_o *v372; // x4
  int32_t v373; // w5
  int64_t v374; // x6
  System_String_o *v375; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v376; // x0
  int32_t v377; // w2
  int32_t v378; // w3
  System_String_o *v379; // x4
  int32_t v380; // w5
  int64_t v381; // x6
  System_String_o *v382; // x7
  Il2CppObject *v383; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v384; // x0
  int32_t v385; // w2
  int32_t v386; // w3
  System_String_o *v387; // x4
  int32_t v388; // w5
  int64_t v389; // x6
  System_String_o *v390; // x7
  int64_t v391; // x21
  MapControl_WarInfo_o *v392; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v393; // x0
  int32_t v394; // w2
  int32_t v395; // w3
  System_String_o *v396; // x4
  int32_t v397; // w5
  int64_t v398; // x6
  System_String_o *v399; // x7
  MapControl_MapInfo_o *v400; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v401; // x0
  int32_t v402; // w2
  int32_t v403; // w3
  System_String_o *v404; // x4
  int32_t v405; // w5
  int64_t v406; // x6
  System_String_o *v407; // x7
  MapControl_SpotInfo_o *v408; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v409; // x0
  int32_t v410; // w2
  int32_t v411; // w3
  System_String_o *v412; // x4
  int32_t v413; // w5
  int64_t v414; // x6
  System_String_o *v415; // x7
  WarEntity_o *v416; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v417; // x0
  int32_t v418; // w2
  int32_t v419; // w3
  System_String_o *v420; // x4
  int32_t v421; // w5
  int64_t v422; // x6
  System_String_o *v423; // x7
  __int64 v424; // x1
  DataManager_o *v425; // x0
  Il2CppObject *v426; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v427; // x0
  int32_t v428; // w2
  int32_t v429; // w3
  System_String_o *v430; // x4
  int32_t v431; // w5
  int64_t v432; // x6
  System_String_o *v433; // x7
  Il2CppObject *Master_object; // x0
  __int64 v435; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v436; // x8
  struct QuestTree___c__DisplayClass48_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v439; // x1
  int32_t v440; // w9
  struct QuestTree___c__DisplayClass48_6_o *v441; // x20
  System_Collections_Generic_List_int__o *v442; // x21
  __int64 v443; // x0
  __int64 v444; // x1
  int32_t v445; // w2
  int32_t v446; // w3
  System_String_o *v447; // x4
  int32_t v448; // w5
  int64_t v449; // x6
  System_String_o *v450; // x7
  __int64 v451; // x1
  System_Collections_Generic_List_object__o *v452; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v453; // x9
  __int128 v454; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap24; // x0
  int32_t v456; // w2
  int32_t v457; // w3
  System_String_o *v458; // x4
  int32_t v459; // w5
  int64_t v460; // x6
  System_String_o *v461; // x7
  const MethodInfo *v462; // x1
  bool v463; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v464; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v467; // x1
  int32_t v468; // w2
  int32_t v469; // w3
  System_String_o *v470; // x4
  int32_t v471; // w5
  int64_t v472; // x6
  System_String_o *v473; // x7
  struct QuestTree___c__DisplayClass48_0_o *v474; // x9
  struct QuestTree___c__DisplayClass48_6_o *v475; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v478; // x9
  _QWORD *v479; // x10
  __int64 v480; // x11
  unsigned __int64 v481; // t2
  __int64 v482; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v483; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v485; // x20
  Il2CppObject *v486; // x22
  System_Func_object__bool__o *v487; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v488; // x0
  System_Object_array *v489; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v490; // x0
  int32_t v491; // w2
  int32_t v492; // w3
  System_String_o *v493; // x4
  int32_t v494; // w5
  int64_t v495; // x6
  System_String_o *v496; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v497; // x8
  __int64 mapIdx_5__12; // x0
  int32_t mapCount_5__13; // w9
  struct QuestTree___c__DisplayClass48_1_o *v500; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v502; // x0
  __int64 v503; // x1
  SpotEntity_array *v504; // x20
  int v505; // w25
  unsigned int k; // w26
  __int64 v507; // x21
  __int64 v508; // x0
  __int64 v509; // x1
  SpotEntity_o *v510; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v512; // x24
  __int64 v513; // x0
  __int64 v514; // x1
  unsigned int v515; // w0
  __int64 v516; // x1
  System_Collections_Generic_List_object__o *v517; // x0
  MapControl_MapInfo_o *v518; // x0
  __int64 v519; // x1
  int32_t v520; // w2
  int32_t v521; // w3
  System_String_o *v522; // x4
  int32_t v523; // w5
  int64_t v524; // x6
  System_String_o *v525; // x7
  System_Collections_Generic_List_object__o *v526; // x0
  Il2CppObject *v527; // x1
  struct System_Object_array *v528; // x8
  _QWORD *v529; // x9
  __int64 v530; // x10
  Il2CppClass **v531; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v532; // x0
  System_Object_array *v533; // x0
  __int64 v534; // x1
  int32_t v535; // w2
  int32_t v536; // w3
  System_String_o *v537; // x4
  int32_t v538; // w5
  int64_t v539; // x6
  System_String_o *v540; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v541; // x20
  __int64 v542; // x21
  QuestTree___c_c *v543; // x8
  System_Func_object__int__o *_9__48_6; // x22
  Il2CppObject *v545; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v547; // w2
  int32_t v548; // w3
  System_String_o *v549; // x4
  int32_t v550; // w5
  int64_t v551; // x6
  System_String_o *v552; // x7
  System_Collections_Generic_IEnumerable_T__o *v553; // x23
  System_Collections_Generic_HashSet_int__o *v554; // x22
  __int64 v555; // x0
  __int64 v556; // x1
  int32_t v557; // w2
  int32_t v558; // w3
  System_String_o *v559; // x4
  int32_t v560; // w5
  int64_t v561; // x6
  System_String_o *v562; // x7
  System_Collections_Generic_List_T__o *v563; // x22
  System_Func_object__bool__o *v564; // x23
  __int64 v565; // x1
  System_Collections_Generic_List_object__o *v566; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v567; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v570; // x20
  struct QuestTree___c__DisplayClass48_6_o *v571; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v573; // x0
  struct QuestTree___c__DisplayClass48_6_o *v574; // x8
  __int64 v575; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_43844540; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v579; // x22
  struct QuestTree___c__DisplayClass48_6_o *v580; // x25
  System_Collections_Generic_List_object__o *v581; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v583; // w2
  int32_t v584; // w3
  System_String_o *v585; // x4
  int32_t v586; // w5
  int64_t v587; // x6
  System_String_o *v588; // x7
  Il2CppObject *v589; // x0
  int32_t v590; // w2
  int32_t v591; // w3
  System_String_o *v592; // x4
  int32_t v593; // w5
  int64_t v594; // x6
  System_String_o *v595; // x7
  __int64 v596; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v599; // x0
  int32_t v600; // w2
  int32_t v601; // w3
  System_String_o *v602; // x4
  int32_t v603; // w5
  int64_t v604; // x6
  System_String_o *v605; // x7
  __int64 v606; // x1
  MapControl_MapInfo_o *v607; // x0
  __int64 v608; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v610; // x0
  int32_t v611; // w2
  int32_t v612; // w3
  System_String_o *v613; // x4
  int32_t v614; // w5
  int64_t v615; // x6
  System_String_o *v616; // x7
  __int64 v617; // x1
  MapControl_WarInfo_o *v618; // x0
  struct WarEntity_o *v619; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v620; // x0
  int32_t v621; // w2
  int32_t v622; // w3
  System_String_o *v623; // x4
  int32_t v624; // w5
  int64_t v625; // x6
  System_String_o *v626; // x7
  struct QuestTree___c__DisplayClass48_6_o *v627; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v630; // w2
  int32_t v631; // w3
  System_String_o *v632; // x4
  int32_t v633; // w5
  int64_t v634; // x6
  System_String_o *v635; // x7
  unsigned int v636; // w0
  __int64 v637; // x1
  System_Collections_Generic_List_object__o *v638; // x0
  MapControl_WarInfo_o *v639; // x0
  __int64 v640; // x1
  _BOOL8 HasStatus; // x0
  __int64 v642; // x1
  MapControl_WarInfo_o *v643; // x0
  WarEntity_o *v644; // x0
  __int64 v645; // x1
  int v646; // w23
  bool v647; // cc
  __int64 v648; // x1
  struct QuestTree___c__DisplayClass48_6_o *v649; // x9
  MapControl_WarInfo_o *v650; // x0
  struct QuestTree___c__DisplayClass48_6_o *v651; // x8
  MapControl_SpotInfo_o *v652; // x0
  MapControl_QuestInfo_o *v653; // x0
  int32_t v654; // w2
  int32_t v655; // w3
  System_String_o *v656; // x4
  int32_t v657; // w5
  int64_t v658; // x6
  System_String_o *v659; // x7
  struct MapControl_WarInfo_o *v660; // x1
  MapControl_QuestInfo_o *v661; // x22
  int32_t v662; // w8
  struct MapControl_SpotInfo_o *v663; // x1
  int32_t v664; // w2
  int32_t v665; // w3
  System_String_o *v666; // x4
  int32_t v667; // w5
  int64_t v668; // x6
  System_String_o *v669; // x7
  __int64 v670; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v673; // x1
  struct WarEntity_o *v674; // x8
  struct QuestTree___c__DisplayClass48_6_o *v675; // x9
  struct WarEntity_o *v676; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v677; // x0
  _BOOL8 v678; // x0
  __int64 v679; // x1
  struct QuestTree___c__DisplayClass48_6_o *v680; // x8
  __int64 v681; // x1
  MapControl_WarInfo_o *v682; // x0
  int v683; // w24
  __int64 v684; // x1
  __int64 v685; // x1
  Il2CppObject *v686; // x23
  __int64 v687; // x0
  struct QuestTree___c__DisplayClass48_6_o *v688; // x8
  _BOOL4 isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v690; // x0
  MapControl_SpotInfo_o *v691; // x0
  QuestEntity_o *v692; // x0
  __int64 v693; // x1
  _BOOL8 HasFlag; // x0
  __int64 v695; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v696; // x8
  struct MapControl_SpotInfo_o *v697; // x9
  struct MapControl_MapInfo_o *v698; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v700; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v701; // x8
  struct MapControl_SpotInfo_o *v702; // x9
  struct MapControl_MapInfo_o *v703; // x8
  MapControl_SpotInfo_o *v704; // x0
  UserQuestEntity_o *v705; // x0
  bool v706; // w8
  struct QuestTree___c__DisplayClass48_6_o *v707; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v710; // x1
  struct QuestTree___c__DisplayClass48_6_o *v711; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v713; // x0
  __int64 v714; // x1
  int32_t v715; // w2
  int32_t v716; // w3
  System_String_o *v717; // x4
  int32_t v718; // w5
  int64_t v719; // x6
  System_String_o *v720; // x7
  _QWORD *v721; // x20
  __int64 v722; // x8
  int v723; // w21
  int v724; // w23
  __int64 v725; // x8
  System_Collections_Generic_List_object__o *v726; // x0
  struct System_Object_array *v727; // x8
  _QWORD *v728; // x9
  __int64 v729; // x10
  Il2CppClass **v730; // x8
  int32_t v731; // w2
  int32_t v732; // w3
  System_String_o *v733; // x4
  int32_t v734; // w5
  int64_t v735; // x6
  System_String_o *v736; // x7
  System_Collections_Generic_List_object__o *v737; // x20
  QuestTree___c_c *v738; // x8
  System_Comparison_T__o *_9__48_11; // x21
  Il2CppObject *v740; // x22
  struct QuestTree___c_StaticFields *v741; // x0
  int32_t v742; // w2
  int32_t v743; // w3
  System_String_o *v744; // x4
  int32_t v745; // w5
  int64_t v746; // x6
  System_String_o *v747; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v748; // x0
  int32_t v749; // w2
  int32_t v750; // w3
  System_String_o *v751; // x4
  int32_t v752; // w5
  int64_t v753; // x6
  System_String_o *v754; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v755; // x0
  int32_t v756; // w2
  int32_t v757; // w3
  System_String_o *v758; // x4
  int32_t v759; // w5
  int64_t v760; // x6
  System_String_o *v761; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v762; // x0
  int32_t v763; // w2
  int32_t v764; // w3
  System_String_o *v765; // x4
  int32_t v766; // w5
  int64_t v767; // x6
  System_String_o *v768; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v769; // x0
  int32_t v770; // w2
  int32_t v771; // w3
  System_String_o *v772; // x4
  int32_t v773; // w5
  int64_t v774; // x6
  System_String_o *v775; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v776; // x0
  int32_t v777; // w2
  int32_t v778; // w3
  System_String_o *v779; // x4
  int32_t v780; // w5
  int64_t v781; // x6
  System_String_o *v782; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v783; // x0
  int32_t v784; // w2
  int32_t v785; // w3
  System_String_o *v786; // x4
  int32_t v787; // w5
  int64_t v788; // x6
  System_String_o *v789; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v790; // x0
  int32_t v791; // w2
  int32_t v792; // w3
  System_String_o *v793; // x4
  int32_t v794; // w5
  int64_t v795; // x6
  System_String_o *v796; // x7
  Il2CppObject *v797; // x0
  __int64 v798; // x1
  int32_t v799; // w2
  int32_t v800; // w3
  System_String_o *v801; // x4
  int32_t v802; // w5
  int64_t v803; // x6
  System_String_o *v804; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v805; // x0
  EventStatusQuestMaster_o *v806; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v807[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v808; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o **v809; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v811; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v815; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *v817; // [xsp+88h] [xbp-68h] BYREF

  v8 = this;
  v817 = this;
  if ( (byte_4E7455D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_1D0F0B4(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1D0F0B4(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
    sub_1D0F0B4(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1D0F0B4(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1D0F0B4(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_WarEntity__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor___80297848);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&long___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&MapControl_MapInfo_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&OptionManager_TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1D0F0B4(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&MapControl_SpotInfo_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_11__);
    sub_1D0F0B4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_2__);
    sub_1D0F0B4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_6__);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass48_0_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass48_1_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass48_2_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass48_3_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass48_4_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass48_5_TypeInfo);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_1D0F0B4(&Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_1D0F0B4(&QuestTree___c__DisplayClass48_6_TypeInfo);
    sub_1D0F0B4(&QuestTree___c_TypeInfo);
    sub_1D0F0B4(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *)sub_1D0F0B4(&MapControl_WarInfo_TypeInfo);
    v8 = v817;
    byte_4E7455D = 1;
  }
  v815 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v811 = 0;
  mapGimmickInfo = 0;
  v808 = 0;
  v809 = &v817;
  value = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1D0F300(QuestTree___c__DisplayClass48_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v11 = v817;
      v817->fields.__8__2 = (struct QuestTree___c__DisplayClass48_0_o *)v10;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v11->fields.__8__2, (int32_t)v10, v12, v13, v14, v15, v16, v17);
      _8__2 = v817->fields.__8__2;
      if ( !_8__2 )
        sub_1D0F30C(v18, v19);
      _8__2->fields.targetWarId = v817->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v22 = v817;
      v817->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v22->fields._dataManager_5__2,
        (int32_t)Instance,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      dataManager_5__2 = v817->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1D0F30C(0, v29);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MapMaster___);
      v33 = v817->fields._dataManager_5__2;
      if ( !v33 )
        sub_1D0F30C(0, v31);
      v34 = DataManager__GetMasterData_object_(
              v33,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SpotMaster___);
      v35 = v817;
      v817->fields._spotMaster_5__3 = (struct SpotMaster_o *)v34;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v35->fields._spotMaster_5__3,
        (int32_t)v34,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v43 = v817->fields._dataManager_5__2;
      if ( !v43 )
        sub_1D0F30C(0, v42);
      v44 = DataManager__GetMasterData_object_(
              v43,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v45 = v817;
      v817->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v44;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v45->fields._blankEarthSpotMaster_5__4,
        (int32_t)v44,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      v53 = v817->fields._dataManager_5__2;
      if ( !v53 )
        sub_1D0F30C(0, v52);
      v54 = DataManager__GetMasterData_object_(
              v53,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
      v55 = v817;
      v817->fields._questMaster_5__5 = (struct QuestMaster_o *)v54;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v55->fields._questMaster_5__5,
        (int32_t)v54,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      v63 = v817->fields._dataManager_5__2;
      if ( !v63 )
        sub_1D0F30C(0, v62);
      v64 = DataManager__GetMasterData_object_(
              v63,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v65 = v817;
      v817->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v64;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v65->fields._questPhaseMaster_5__6,
        (int32_t)v64,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      v73 = v817->fields._dataManager_5__2;
      if ( !v73 )
        sub_1D0F30C(0, v72);
      v75 = DataManager__GetMasterData_object_(
              v73,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
      v76 = v817->fields._dataManager_5__2;
      if ( !v76 )
        sub_1D0F30C(0, v74);
      v78 = DataManager__GetMasterData_object_(
              v76,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v79 = v817->fields._dataManager_5__2;
      if ( !v79 )
        sub_1D0F30C(0, v77);
      v81 = DataManager__GetMasterData_object_(
              v79,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v82 = v817->fields._dataManager_5__2;
      if ( !v82 )
        sub_1D0F30C(0, v80);
      v806 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v82,
                                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v84 = v817->fields._dataManager_5__2;
      if ( !v84 )
        sub_1D0F30C(0, v83);
      v85 = DataManager__GetMasterData_object_(
              v84,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v86 = v817;
      v817->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v85;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v86->fields._spotRoadMaster_5__7,
        (int32_t)v85,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      v94 = v817->fields._dataManager_5__2;
      if ( !v94 )
        sub_1D0F30C(0, v93);
      v95 = DataManager__GetMasterData_object_(
              v94,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v96 = v817;
      v817->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v95;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v96->fields._mapGimmickMaster_5__8,
        (int32_t)v95,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      v104 = v817->fields._dataManager_5__2;
      if ( !v104 )
        sub_1D0F30C(0, v103);
      v105 = DataManager__GetMasterData_object_(
               v104,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v106 = v817;
      v817->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v105;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v106->fields._questPickupMaster_5__9,
        (int32_t)v105,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      if ( !_4__this )
        sub_1D0F30C(v113, v114);
      _4__this->fields.isQuestTreeUpdateFinished = 0;
      v115 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v115,
        (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v116 = v817;
      v817->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v115;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v116->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v115,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v817->fields._nowTime_5__11 = NetworkManager__getTime(0);
      v123 = (Il2CppObject *)sub_1D0F300(QuestTree___c__DisplayClass48_1_TypeInfo);
      System_Object___ctor(v123, 0);
      v124 = v817;
      v817->fields.__8__1 = (struct QuestTree___c__DisplayClass48_1_o *)v123;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v124->fields.__8__1,
        (int32_t)v123,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      v132 = v817->fields._dataManager_5__2;
      if ( !v132 )
        sub_1D0F30C(0, v131);
      v133 = DataManager__GetMasterData_object_(
               v132,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v133 )
        sub_1D0F30C(0, v134);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v133,
                                                                       (const MethodInfo_3534E00 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v136 = (Il2CppObject *)v817->fields.__8__2;
      v137 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v137,
        v136,
        Method_QuestTree___c__DisplayClass48_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0);
      v138 = System_Linq_Enumerable__SingleOrDefault_object__53006720(
               Entitys,
               (System_Func_TSource__bool__o *)v137,
               (const MethodInfo_328D180 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v138 )
        sub_1D0F30C(0, v139);
      _8__1 = v817->fields.__8__1;
      if ( !_8__1 )
        sub_1D0F30C(v138, v139);
      klass_low = LODWORD(v138[1].klass);
      _8__1->fields.warId = klass_low;
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1D0F30C(0, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v144 = (Il2CppObject *)v817->fields.__8__1;
      v145 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v145,
        v144,
        Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0);
      if ( !allWarInfoList )
        sub_1D0F30C(v146, v147);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v145,
                (const MethodInfo_395CC68 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v149 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v150 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v150 )
          sub_1D0F30C(0, v149);
        System_Collections_Generic_List_object___RemoveAt(
          v150,
          v149,
          (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v151 = v817->fields.__8__1;
      if ( !v151 )
        sub_1D0F30C(Index, v149);
      v152 = _4__this->fields.mapControlRootInfo;
      if ( !v152 )
        sub_1D0F30C(0, v149);
      v153 = MapControl_RootInfo__AddChild(v152, v151->fields.warId, v817->fields._nowTime_5__11, 0);
      v154 = v817;
      v817->fields._warInfo_5__14 = v153;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v154->fields._warInfo_5__14,
        (int32_t)v153,
        v155,
        v156,
        v157,
        v158,
        v159,
        v160);
      warInfo_5__14 = v817->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1D0F30C(0, v161);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0) )
      {
        v170 = v817->fields._warInfo_5__14;
        if ( !v170 )
          sub_1D0F30C(0, v163);
        EventId = MapControl_WarInfo__GetEventId(v170, 0);
        if ( !v75 )
          sub_1D0F30C(EventId, v172);
        v173 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v75,
                 &entity,
                 EventId,
                 (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v173 )
        {
          if ( !entity )
            sub_1D0F30C(v173, v163);
          v174 = v817;
          nowTime_5__11 = v817->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v176 = v817->fields._warInfo_5__14;
            if ( !v176 )
              sub_1D0F30C(0, v163);
            MapControl_WarInfo__SetStatusCheckFlag(v176, 1, 0, 0);
            v174 = v817;
          }
          v177 = v174->fields._warInfo_5__14;
          if ( !v177 )
            sub_1D0F30C(0, v163);
          v178 = MapControl_WarInfo__GetEventId(v177, 0);
          if ( !v78 )
            sub_1D0F30C(v178, v179);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v78,
                 &v815,
                 v178,
                 (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v815 )
              sub_1D0F30C(0, v180);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v815, 0x2000000, 0) )
            {
              if ( !entity )
                sub_1D0F30C(0, v181);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v817->fields._nowTime_5__11, 0) )
              {
                v183 = v817->fields._warInfo_5__14;
                if ( !v183 )
                  sub_1D0F30C(0, v182);
                v184 = MapControl_WarInfo__GetEventId(v183, 0);
                if ( !v81 )
                  sub_1D0F30C(v184, (unsigned int)v184);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v81, v184, 0);
                if ( NowEntity )
                {
                  v187 = v817->fields._warInfo_5__14;
                  if ( !v187 )
                    sub_1D0F30C(0, v185);
                  v188 = (unsigned int)MapControl_WarInfo__GetEventId(v187, 0);
                  if ( !v806 )
                    sub_1D0F30C(0, v188);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v806,
                                        v188,
                                        NowEntity->fields.statusId,
                                        0);
                  v191 = v817->fields.__8__1;
                  if ( !v191 )
                    sub_1D0F30C(MismatchQuestList, v190);
                  v192 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v817->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1D0F30C(0, v190);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v191->fields.warId,
                    v192,
                    (const MethodInfo_35A8208 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v194 = v817->fields._nowTime_5__11;
          v195 = sub_1D0F15C(long___TypeInfo, 3);
          v197 = entity;
          if ( !entity )
            sub_1D0F30C(v195, v196);
          if ( !v195 )
            sub_1D0F30C(0, v196);
          v198 = *(_DWORD *)(v195 + 24);
          if ( !v198 )
            sub_1D0F314(v195);
          *(_QWORD *)(v195 + 32) = entity[5].klass;
          if ( v198 == 1 )
            sub_1D0F314(v195);
          *(_QWORD *)(v195 + 40) = v197[5].monitor;
          if ( v198 <= 2 )
            sub_1D0F314(v195);
          *(_QWORD *)(v195 + 48) = v197[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v194, (System_Int64_array *)v195, 0);
        }
      }
      v199 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v199 )
        sub_1D0F30C(0, v163);
      items = v199->fields._items;
      v201 = (Il2CppObject *)v817->fields._warInfo_5__14;
      v202 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v199->fields._version;
      if ( !items )
        sub_1D0F30C(v199, v201);
      size = v199->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v199,
          v201,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
      }
      else
      {
        v204 = &items->obj.klass + size;
        v199->fields._size = size + 1;
        v204[4] = (Il2CppClass *)v201;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v204 + 4), (int32_t)v201, v164, v165, v166, v167, v168, v169);
      }
      v290 = v817->fields._warInfo_5__14;
      if ( !v290 )
        sub_1D0F30C(v205, v206);
      if ( !MasterData_object )
        sub_1D0F30C(v205, v206);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v290->fields.warId, 0);
      v292 = v817;
      v817->fields._mapList_5__15 = List;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v292->fields._mapList_5__15,
        (int32_t)List,
        v293,
        v294,
        v295,
        v296,
        v297,
        v298);
      v284 = v817;
      mapList_5__15 = v817->fields._mapList_5__15;
      v817->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1D0F30C(v282, v283);
      max_length = mapList_5__15->max_length;
      v286 = 0;
      v284->fields._mapCount_5__13 = max_length;
      goto LABEL_117;
    case 1:
      v208 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v208 )
        sub_1D0F30C(this, method);
      spotRoadMaster_5__7 = v8->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1D0F30C(0, method);
      v210 = SpotRoadMaster__getList(spotRoadMaster_5__7, v208->fields.mapId, 0);
      v212 = v210;
      if ( !v210 )
        sub_1D0F30C(0, v211);
      v213 = v210->max_length;
      if ( v213 >= 1 )
      {
        for ( i = 0; i != v213; ++i )
        {
          v215 = sub_1D0F300(QuestTree___c__DisplayClass48_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v215, 0);
          if ( i >= LODWORD(v212->max_length) )
            sub_1D0F314(v216);
          v218 = v212->m_Items[i];
          if ( !v218 )
            sub_1D0F30C(v216, v217);
          if ( !v215 )
            sub_1D0F30C(v216, v217);
          *(_DWORD *)(v215 + 16) = v218->fields.id;
          if ( !_4__this )
            sub_1D0F30C(v216, v217);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v220 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v220,
            (Il2CppObject *)v215,
            Method_QuestTree___c__DisplayClass48_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0);
          if ( !allSpotRoadInfoList )
            sub_1D0F30C(v221, v222);
          v223 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v220,
                   (const MethodInfo_395CC68 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v224 = v223;
          if ( v223 != -1 )
          {
            v225 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v225 )
              sub_1D0F30C(0, v224);
            System_Collections_Generic_List_object___RemoveAt(
              v225,
              v224,
              (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v817->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1D0F30C(0, v224);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v215 + 16), 0);
          QuestTree__SetupSpotRoadInfo(_4__this, v218, &spotRoadInfo, 0);
          v234 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v234 )
            sub_1D0F30C(0, v227);
          v235 = (Il2CppObject *)spotRoadInfo;
          v236 = v234->fields._items;
          v237 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v234->fields._version;
          if ( !v236 )
            sub_1D0F30C(v234, v235);
          v238 = v234->fields._size;
          if ( (unsigned int)v238 >= LODWORD(v236->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v234,
              v235,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
          }
          else
          {
            v239 = &v236->obj.klass + v238;
            v234->fields._size = v238 + 1;
            v239[4] = (Il2CppClass *)v235;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v239 + 4), (int32_t)v235, v228, v229, v230, v231, v232, v233);
          }
        }
      }
      v240 = v817->fields.__8__1;
      if ( !v240 )
        sub_1D0F30C(v210, v211);
      mapGimmickMaster_5__8 = v817->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1D0F30C(0, v211);
      v242 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v240->fields.mapId, 0);
      v250 = v242;
      if ( !v242 )
        sub_1D0F30C(0, v243);
      v251 = v242->max_length;
      if ( v251 >= 1 )
      {
        for ( j = 0; j != v251; ++j )
        {
          v253 = sub_1D0F300(QuestTree___c__DisplayClass48_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v253, 0);
          if ( j >= LODWORD(v250->max_length) )
            sub_1D0F314(v254);
          v256 = v250->m_Items[j];
          if ( !v256 )
            sub_1D0F30C(v254, v255);
          if ( !v253 )
            sub_1D0F30C(v254, v255);
          *(_DWORD *)(v253 + 16) = v256->fields.id;
          if ( !_4__this )
            sub_1D0F30C(v254, v255);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v258 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v258,
            (Il2CppObject *)v253,
            Method_QuestTree___c__DisplayClass48_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0);
          if ( !allMapGimmickInfoList )
            sub_1D0F30C(v259, v260);
          v261 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v258,
                   (const MethodInfo_395CC68 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v262 = v261;
          if ( v261 != -1 )
          {
            v263 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v263 )
              sub_1D0F30C(0, v262);
            System_Collections_Generic_List_object___RemoveAt(
              v263,
              v262,
              (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v264 = v817->fields._mapInfo_5__16;
          if ( !v264 )
            sub_1D0F30C(0, v262);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v264, *(_DWORD *)(v253 + 16), 0);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0);
          v272 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v272 )
            sub_1D0F30C(0, v265);
          v273 = (Il2CppObject *)mapGimmickInfo;
          v274 = v272->fields._items;
          v275 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v272->fields._version;
          if ( !v274 )
            sub_1D0F30C(v272, v273);
          v276 = v272->fields._size;
          if ( (unsigned int)v276 >= LODWORD(v274->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v272,
              v273,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
          }
          else
          {
            v277 = &v274->obj.klass + v276;
            v272->fields._size = v276 + 1;
            v277[4] = (Il2CppClass *)v273;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v277 + 4), (int32_t)v273, v266, v267, v268, v269, v270, v271);
          }
        }
      }
      v278 = v817;
      v817->fields.__2__current = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v278->fields.__2__current, 0, v244, v245, v246, v247, v248, v249);
      v279 = v817;
      v280 = 2;
      goto LABEL_329;
    case 2:
      v8->fields._mapInfo_5__16 = 0;
      p_mapInfo_5__16 = (GrandQuestFolderBoardItem_o *)&v8->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-2].fields._ClosedMessage_k__BackingField) = -1;
      sub_1D0F058(p_mapInfo_5__16, 0, v2, v3, v4, v5, v6, v7);
      v284 = v817;
      max_length = v817->fields._mapCount_5__13;
      v286 = v817->fields._mapIdx_5__12 + 1;
      v817->fields._mapIdx_5__12 = v286;
LABEL_117:
      if ( v286 < max_length )
      {
        v300 = v284->fields._mapList_5__15;
        if ( !v300 )
          sub_1D0F30C(v282, v283);
        if ( (unsigned int)v286 >= LODWORD(v300->max_length) )
          sub_1D0F314(v282);
        v301 = v300->m_Items[v286];
        if ( !v301 )
          sub_1D0F30C(v282, v283);
        v302 = v284->fields.__8__1;
        if ( !v302 )
          sub_1D0F30C(v282, v283);
        v302->fields.mapId = v301->fields.id;
        v303 = v284->fields._warInfo_5__14;
        if ( !v303 )
          sub_1D0F30C(v282, v283);
        mapInfoList = (System_Collections_Generic_List_object__o *)v303->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v302->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v302,
              Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0);
            v302->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&v302->fields.__9__3,
              (int32_t)_9__3,
              v306,
              v307,
              v308,
              v309,
              v310,
              v311);
          }
          v282 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_395CC68 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v283 = (unsigned int)v282;
          if ( (_DWORD)v282 != -1 )
          {
            v312 = v817->fields._warInfo_5__14;
            if ( !v312 )
              sub_1D0F30C(v282, (unsigned int)v282);
            v313 = (System_Collections_Generic_List_object__o *)v312->fields.mapInfoList;
            if ( !v313 )
              sub_1D0F30C(0, v283);
            System_Collections_Generic_List_object___RemoveAt(
              v313,
              v283,
              (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1D0F30C(v282, v283);
        v314 = v817->fields.__8__1;
        if ( !v314 )
          sub_1D0F30C(v282, v283);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v314->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v314,
            Method_QuestTree___c__DisplayClass48_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0);
          v314->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v314->fields.__9__4,
            (int32_t)_9__4,
            v317,
            v318,
            v319,
            v320,
            v321,
            v322);
        }
        if ( !allMapInfoList )
          sub_1D0F30C(v282, v283);
        v323 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_395CC68 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v324 = (unsigned int)v323;
        if ( (_DWORD)v323 != -1 )
        {
          v325 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v325 )
            sub_1D0F30C(0, v324);
          System_Collections_Generic_List_object___RemoveAt(
            v325,
            v324,
            (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v326 = v817->fields.__8__1;
        if ( !v326 )
          sub_1D0F30C(v323, v324);
        v327 = v817->fields._warInfo_5__14;
        if ( !v327 )
          sub_1D0F30C(0, v324);
        v328 = MapControl_WarInfo__AddChild(v327, v326->fields.mapId, 0);
        v329 = v817;
        v817->fields._mapInfo_5__16 = v328;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v329->fields._mapInfo_5__16,
          (int32_t)v328,
          v330,
          v331,
          v332,
          v333,
          v334,
          v335);
        v343 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v343 )
          sub_1D0F30C(0, v336);
        v344 = v343->fields._items;
        v345 = (Il2CppObject *)v817->fields._mapInfo_5__16;
        v346 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v343->fields._version;
        if ( !v344 )
          sub_1D0F30C(v343, v345);
        v347 = v343->fields._size;
        if ( (unsigned int)v347 >= LODWORD(v344->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v343,
            v345,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v346[4] + 192LL) + 112LL));
        }
        else
        {
          v348 = &v344->obj.klass + v347;
          v343->fields._size = v347 + 1;
          v348[4] = (Il2CppClass *)v345;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v348 + 4), (int32_t)v345, v337, v338, v339, v340, v341, v342);
        }
        v500 = v817->fields.__8__1;
        if ( !v500 )
          sub_1D0F30C(v349, v350);
        spotMaster_5__3 = v817->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1D0F30C(0, v350);
        v502 = SpotMaster__getList(spotMaster_5__3, v500->fields.mapId, 0);
        v504 = v502;
        if ( !v502 )
          sub_1D0F30C(0, v503);
        v505 = v502->max_length;
        if ( v505 >= 1 )
        {
          for ( k = 0; k != v505; ++k )
          {
            v507 = sub_1D0F300(QuestTree___c__DisplayClass48_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v507, 0);
            if ( k >= LODWORD(v504->max_length) )
              sub_1D0F314(v508);
            v510 = v504->m_Items[k];
            if ( !v510 )
              sub_1D0F30C(v508, v509);
            if ( !v507 )
              sub_1D0F30C(v508, v509);
            *(_DWORD *)(v507 + 16) = v510->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v512 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v512,
              (Il2CppObject *)v507,
              Method_QuestTree___c__DisplayClass48_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0);
            if ( !allSpotInfoList )
              sub_1D0F30C(v513, v514);
            v515 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v512,
                     (const MethodInfo_395CC68 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v516 = v515;
            if ( v515 != -1 )
            {
              v517 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v517 )
                sub_1D0F30C(0, v516);
              System_Collections_Generic_List_object___RemoveAt(
                v517,
                v516,
                (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v518 = v817->fields._mapInfo_5__16;
            if ( !v518 )
              sub_1D0F30C(0, v516);
            spotInfo = MapControl_MapInfo__AddChild(v518, *(_DWORD *)(v507 + 16), 0);
            QuestTree__SetupSpotInfo(_4__this, v510, &spotInfo, 0);
            v526 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v526 )
              sub_1D0F30C(0, v519);
            v527 = (Il2CppObject *)spotInfo;
            v528 = v526->fields._items;
            v529 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v526->fields._version;
            if ( !v528 )
              sub_1D0F30C(v526, v527);
            v530 = v526->fields._size;
            if ( (unsigned int)v530 >= LODWORD(v528->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v526,
                v527,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v529[4] + 192LL) + 112LL));
            }
            else
            {
              v531 = &v528->obj.klass + v530;
              v526->fields._size = v530 + 1;
              v531[4] = (Il2CppClass *)v527;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v531 + 4), (int32_t)v527, v520, v521, v522, v523, v524, v525);
            }
          }
        }
        v532 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v817->fields._mapInfo_5__16,
                 v817->fields._blankEarthSpotMaster_5__4,
                 0);
        v533 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v532,
                 (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v541 = (System_Collections_Generic_IEnumerable_TSource__o *)v533;
        if ( !v533 )
          sub_1D0F30C(0, v534);
        if ( v533->max_length )
        {
          v542 = sub_1D0F300(QuestTree___c__DisplayClass48_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v542, 0);
          v543 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v543 = QuestTree___c_TypeInfo;
          }
          _9__48_6 = (System_Func_object__int__o *)v543->static_fields->__9__48_6;
          if ( !_9__48_6 )
          {
            if ( !v543->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v543);
              v543 = QuestTree___c_TypeInfo;
            }
            v545 = (Il2CppObject *)v543->static_fields->__9;
            _9__48_6 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__48_6,
              v545,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_6__,
              0);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__48_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__48_6;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__48_6,
              (int32_t)_9__48_6,
              v547,
              v548,
              v549,
              v550,
              v551,
              v552);
          }
          v553 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v541,
                                                                  (System_Func_TSource__TResult__o *)_9__48_6,
                                                                  (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v554 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_58722400(
            v554,
            v553,
            (const MethodInfo_3800860 *)Method_System_Collections_Generic_HashSet_int___ctor___80297848);
          if ( !v542 )
            sub_1D0F30C(v555, v556);
          *(_QWORD *)(v542 + 16) = v554;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v542 + 16), (int32_t)v554, v557, v558, v559, v560, v561, v562);
          v563 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v564 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v564,
            (Il2CppObject *)v542,
            Method_QuestTree___c__DisplayClass48_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0);
          BasicHelper__RemoveElements_object_(
            v563,
            (System_Func_T__bool__o *)v564,
            (const MethodInfo_323E1A0 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v566 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v566 )
            sub_1D0F30C(0, v565);
          System_Collections_Generic_List_object___AddRange(
            v566,
            (System_Collections_Generic_IEnumerable_T__o *)v541,
            (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v567 = v817;
        v817->fields.__2__current = 0;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v567->fields.__2__current, 0, v535, v536, v537, v538, v539, v540);
        result = 1;
        v817->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1D0F30C(v282, v283);
      v351 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v352 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v352 = QuestTree___c_TypeInfo;
      }
      _9__48_2 = (System_Comparison_T__o *)v352->static_fields->__9__48_2;
      if ( !_9__48_2 )
      {
        if ( !v352->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v352);
          v352 = QuestTree___c_TypeInfo;
        }
        v354 = (Il2CppObject *)v352->static_fields->__9;
        _9__48_2 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__48_2,
          v354,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_2__,
          0);
        v355 = QuestTree___c_TypeInfo->static_fields;
        v355->__9__48_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__48_2;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v355->__9__48_2,
          (int32_t)_9__48_2,
          v356,
          v357,
          v358,
          v359,
          v360,
          v361);
      }
      if ( !v351 )
        sub_1D0F30C(v282, v283);
      System_Collections_Generic_List_object___Sort_60153556(
        v351,
        _9__48_2,
        (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v362 = v817;
      v817->fields.__8__1 = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v362->fields.__8__1, 0, v363, v364, v365, v366, v367, v368);
      v369 = v817;
      v817->fields._warInfo_5__14 = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v369->fields._warInfo_5__14, 0, v370, v371, v372, v373, v374, v375);
      v376 = v817;
      v817->fields._mapList_5__15 = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v376->fields._mapList_5__15, 0, v377, v378, v379, v380, v381, v382);
      v383 = (Il2CppObject *)sub_1D0F300(QuestTree___c__DisplayClass48_6_TypeInfo);
      System_Object___ctor(v383, 0);
      v384 = v817;
      v817->fields.__8__3 = (struct QuestTree___c__DisplayClass48_6_o *)v383;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v384->fields.__8__3,
        (int32_t)v383,
        v385,
        v386,
        v387,
        v388,
        v389,
        v390);
      v391 = v817->fields._nowTime_5__11;
      v392 = (MapControl_WarInfo_o *)sub_1D0F300(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v392, v391, 0);
      v393 = v817;
      v817->fields._warInfo_5__14 = v392;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v393->fields._warInfo_5__14,
        (int32_t)v392,
        v394,
        v395,
        v396,
        v397,
        v398,
        v399);
      v400 = (MapControl_MapInfo_o *)sub_1D0F300(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v400, 0);
      v401 = v817;
      v817->fields._mapInfo_5__16 = v400;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v401->fields._mapInfo_5__16,
        (int32_t)v400,
        v402,
        v403,
        v404,
        v405,
        v406,
        v407);
      v408 = (MapControl_SpotInfo_o *)sub_1D0F300(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v408, 0);
      v409 = v817;
      v817->fields._spotInfo_5__17 = v408;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v409->fields._spotInfo_5__17,
        (int32_t)v408,
        v410,
        v411,
        v412,
        v413,
        v414,
        v415);
      v416 = (WarEntity_o *)sub_1D0F300(WarEntity_TypeInfo);
      WarEntity___ctor(v416, 0);
      v417 = v817;
      v817->fields._warEnt_5__18 = v416;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v417->fields._warEnt_5__18,
        (int32_t)v416,
        v418,
        v419,
        v420,
        v421,
        v422,
        v423);
      v425 = v817->fields._dataManager_5__2;
      if ( !v425 )
        sub_1D0F30C(0, v424);
      v426 = DataManager__GetMasterData_object_(
               v425,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v427 = v817;
      v817->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v426;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v427->fields._userQuestMaster_5__19,
        (int32_t)v426,
        v428,
        v429,
        v430,
        v431,
        v432,
        v433);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v436 = v817;
      _8__3 = v817->fields.__8__3;
      if ( !_8__3 )
        sub_1D0F30C(Master_object, v435);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v436->fields._nowMapId_5__20 = -1;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
      if ( !v817 )
        sub_1D0F30C(isSavedMemoryMode, v439);
      if ( isSavedMemoryMode )
        v440 = 500;
      else
        v440 = 5000;
      v441 = v817->fields.__8__3;
      v817->fields._breakInterval_5__22 = v440;
      v442 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v442,
        (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v441 )
        sub_1D0F30C(v443, v444);
      v441->fields.spotInfoList = v442;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v441->fields, (int32_t)v442, v445, v446, v447, v448, v449, v450);
      v817->fields._cnt_5__23 = 0;
      v452 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v452 )
        sub_1D0F30C(0, v451);
      System_Collections_Generic_List_object___GetEnumerator(
        v807,
        v452,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v453 = v817;
      v454 = *(_OWORD *)&v807[0].fields._list;
      p__7__wrap24 = (GrandQuestFolderBoardItem_o *)&v817->fields.__7__wrap24;
      v807[1] = v807[0];
      v817->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v807[0].fields._current;
      *(_OWORD *)&v453->fields.__7__wrap24.fields._list = v454;
      sub_1D0F058(p__7__wrap24, 0, v456, v457, v458, v459, v460, v461);
      v8 = v817;
LABEL_165:
      v8->fields.__1__state = -3;
      while ( 1 )
      {
        v463 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap24,
                 (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v464 = v817;
        if ( !v463 )
          break;
        current = v817->fields.__7__wrap24.fields._current;
        ++v817->fields._cnt_5__23;
        if ( !current )
          sub_1D0F30C(v464, v462);
        Mine = MapControl_SpotInfo__GetMine(current, 0);
        if ( !Mine )
          sub_1D0F30C(0, v467);
        v8 = v817;
        v474 = v817->fields.__8__2;
        if ( !v474 )
          sub_1D0F30C(Mine, v467);
        if ( Mine->fields.warId == v474->fields.targetWarId )
        {
          v475 = v817->fields.__8__3;
          if ( !v475 )
            sub_1D0F30C(Mine, v467);
          spotInfoList = v475->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1D0F30C(0, v467);
          spotId = (unsigned int)current->fields.spotId;
          v478 = spotInfoList->fields._items;
          v479 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v478 )
            sub_1D0F30C(spotInfoList, spotId);
          v480 = spotInfoList->fields._size;
          if ( (unsigned int)v480 >= LODWORD(v478->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_393F3EC **)(*(_QWORD *)(v479[4] + 192LL) + 112LL));
            v8 = v817;
          }
          else
          {
            spotInfoList->fields._size = v480 + 1;
            v478->m_Items[v480] = spotId;
          }
        }
        HIDWORD(v481) = 28633112 - 1775253149 * v8->fields._cnt_5__23;
        LODWORD(v481) = HIDWORD(v481);
        if ( (unsigned int)(v481 >> 2) < 0xDA740D )
        {
          v8->fields.__2__current = 0;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, 0, v468, v469, v470, v471, v472, v473);
          v279 = v817;
          v280 = 3;
LABEL_329:
          v279->fields.__1__state = v280;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48____m__Finally1(v817, v462);
      v483 = v817;
      questMaster_5__5 = (DataMasterBase_TMaster__TEntity__PKType__o *)v817->fields._questMaster_5__5;
      v817->fields.__7__wrap24.fields._list = 0;
      *(_QWORD *)&v483->fields.__7__wrap24.fields._index = 0;
      v483->fields.__7__wrap24.fields._current = 0;
      if ( !questMaster_5__5 )
        sub_1D0F30C(0, v482);
      v485 = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                    questMaster_5__5,
                                                                    (const MethodInfo_3534E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
      v486 = (Il2CppObject *)v817->fields.__8__3;
      v487 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v487,
        v486,
        Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0);
      v488 = System_Linq_Enumerable__Where_object_(
               v485,
               (System_Func_TSource__bool__o *)v487,
               (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v489 = System_Linq_Enumerable__ToArray_object_(
               v488,
               (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v490 = v817;
      v817->fields._questList_5__24 = (struct QuestEntity_array *)v489;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v490->fields._questList_5__24,
        (int32_t)v489,
        v491,
        v492,
        v493,
        v494,
        v495,
        v496);
      v497 = v817;
      v817->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v497->fields._questList_5__24,
                       (const MethodInfo_326FA04 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v8 = v817;
      mapCount_5__13 = v817->fields._mapCount_5__13;
      v817->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_165;
    case 4:
      v207 = v8->fields._mapCount_5__13;
      v8->fields.__1__state = -1;
      goto LABEL_467;
    case 5:
      endCallback = v8->fields.endCallback;
      v8->fields.__1__state = -1;
      if ( !endCallback )
        sub_1D0F30C(this, method);
      v288 = ((__int64 (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
               endCallback->fields.method_code,
               endCallback->fields.method);
      if ( !_4__this )
        sub_1D0F30C(v288, v289);
      goto LABEL_480;
    default:
      return 0;
  }
  while ( mapCount_5__13 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v8->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1D0F30C(mapIdx_5__12, method);
    if ( (unsigned int)mapCount_5__13 >= LODWORD(questList_5__24->max_length) )
      sub_1D0F314(mapIdx_5__12);
    v570 = questList_5__24->m_Items[mapCount_5__13];
    if ( !v570 )
      sub_1D0F30C(mapIdx_5__12, method);
    v571 = v8->fields.__8__3;
    if ( !v571 )
      sub_1D0F30C(mapIdx_5__12, method);
    v571->fields.questId = v570->fields.id;
    userQuestMaster_5__19 = v8->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4E710BF )
    {
      sub_1D0F0B4(&NetworkManager_TypeInfo);
      byte_4E710BF = 1;
    }
    v573 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v573 = NetworkManager_TypeInfo;
    }
    v574 = v817->fields.__8__3;
    if ( !v574 )
      sub_1D0F30C(v573, method);
    if ( !userQuestMaster_5__19 )
      sub_1D0F30C(v573, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v811,
           v573->static_fields->userIdNumber,
           v574->fields.questId,
           0) )
    {
      if ( !v811 )
        sub_1D0F30C(0, v575);
      QuestPhase = UserQuestEntity__getQuestPhase(v811, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_43844540 = (MapEntity_o *)QuestEntity__getSpotId_43844540(v570, QuestPhase + 1, 0);
    v579 = v817;
    v580 = v817->fields.__8__3;
    if ( !v580 )
      sub_1D0F30C(SpotId_43844540, warId);
    if ( v580->fields.nowSpotId == (_DWORD)SpotId_43844540 )
    {
      if ( !_4__this )
        sub_1D0F30C(SpotId_43844540, warId);
    }
    else
    {
      v580->fields.nowSpotId = (int)SpotId_43844540;
      if ( !_4__this )
        sub_1D0F30C(SpotId_43844540, warId);
      v581 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v580->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v580,
          Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0);
        v580->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v580->fields.__9__12,
          (int32_t)_9__12,
          v583,
          v584,
          v585,
          v586,
          v587,
          v588);
      }
      if ( !v581 )
        sub_1D0F30C(SpotId_43844540, warId);
      v589 = System_Collections_Generic_List_object___Find(
               v581,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_395CA78 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v579->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v589;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v579->fields._spotInfo_5__17,
        (int32_t)v589,
        v590,
        v591,
        v592,
        v593,
        v594,
        v595);
      spotInfo_5__17 = v817->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1D0F30C(0, v596);
      SpotId_43844540 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0);
      warId = (unsigned int)SpotId_43844540;
      if ( v817->fields._nowMapId_5__20 != (_DWORD)SpotId_43844540 )
      {
        v817->fields._nowMapId_5__20 = (int)SpotId_43844540;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_43844540, 0);
        v599 = v817;
        v817->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&v599->fields._mapInfo_5__16,
          (int32_t)MapInfoByMapID,
          v600,
          v601,
          v602,
          v603,
          v604,
          v605);
        v607 = v817->fields._mapInfo_5__16;
        if ( !v607 )
          sub_1D0F30C(0, v606);
        SpotId_43844540 = MapControl_MapInfo__GetMine(v607, 0);
        if ( !SpotId_43844540 )
          sub_1D0F30C(0, v608);
        warId = (unsigned int)SpotId_43844540->fields.warId;
        if ( v817->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v817->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0);
          v610 = v817;
          v817->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v610->fields._warInfo_5__14,
            (int32_t)WarInfoByWarID,
            v611,
            v612,
            v613,
            v614,
            v615,
            v616);
          v618 = v817->fields._warInfo_5__14;
          if ( !v618 )
            sub_1D0F30C(0, v617);
          v619 = MapControl_WarInfo__GetMine(v618, 0);
          v620 = v817;
          v817->fields._warEnt_5__18 = v619;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&v620->fields._warEnt_5__18,
            (int32_t)v619,
            v621,
            v622,
            v623,
            v624,
            v625,
            v626);
        }
      }
    }
    v627 = v817->fields.__8__3;
    if ( !v627 )
      sub_1D0F30C(SpotId_43844540, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v627->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v627,
        Method_QuestTree___c__DisplayClass48_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0);
      v627->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&v627->fields.__9__13,
        (int32_t)_9__13,
        v630,
        v631,
        v632,
        v633,
        v634,
        v635);
    }
    if ( !allQuestInfoList )
      sub_1D0F30C(SpotId_43844540, warId);
    v636 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_395CC68 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v637 = v636;
    if ( v636 != -1 )
    {
      v638 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v638 )
        sub_1D0F30C(0, v637);
      System_Collections_Generic_List_object___RemoveAt(
        v638,
        v637,
        (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v639 = v817->fields._warInfo_5__14;
    if ( !v811 )
    {
      if ( !v639 )
        sub_1D0F30C(0, v637);
      goto LABEL_378;
    }
    if ( !v639 )
      sub_1D0F30C(0, v637);
    MapControl_WarInfo__SetStatusCheckFlag(v639, 1, 0, 0);
    if ( !v811 )
      sub_1D0F30C(0, v640);
    HasStatus = UserQuestEntity__HasStatus(v811, 8, 0);
    if ( !HasStatus )
    {
      v643 = v817->fields._warInfo_5__14;
      if ( !v643 )
        sub_1D0F30C(0, v642);
      goto LABEL_380;
    }
    if ( !v811 )
      sub_1D0F30C(HasStatus, v642);
    if ( v811->fields.challengeNum >= 1 )
    {
      v643 = v817->fields._warInfo_5__14;
      if ( !v643 )
        sub_1D0F30C(0, v642);
LABEL_380:
      MapControl_WarInfo__SetStatusCheckFlag(v643, 4, 0, 0);
    }
    if ( !v811 )
      sub_1D0F30C(0, v642);
    v647 = UserQuestEntity__getClearNum(v811, 0) < 1;
    v639 = v817->fields._warInfo_5__14;
    if ( v647 )
    {
      if ( !v639 )
        sub_1D0F30C(0, v648);
LABEL_378:
      MapControl_WarInfo__SetStatusCheckFlag(v639, 2, 0, 0);
      v646 = 0;
      goto LABEL_392;
    }
    if ( !v639 )
      sub_1D0F30C(0, v648);
    v644 = MapControl_WarInfo__GetMine(v639, 0);
    if ( !v644 )
      sub_1D0F30C(0, v645);
    v649 = v817->fields.__8__3;
    if ( !v649 )
      sub_1D0F30C(v644, v645);
    if ( v644->fields.lastQuestId == v649->fields.questId )
    {
      v650 = v817->fields._warInfo_5__14;
      if ( !v650 )
        sub_1D0F30C(0, v645);
      v646 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v650, 8, 1, 0);
    }
    else
    {
      v646 = 1;
    }
LABEL_392:
    v651 = v817->fields.__8__3;
    if ( !v651 )
      sub_1D0F30C(v644, v645);
    v652 = v817->fields._spotInfo_5__17;
    if ( !v652 )
      sub_1D0F30C(0, v645);
    v653 = MapControl_SpotInfo__AddChild(v652, v651->fields.questId, 0);
    v660 = v817->fields._warInfo_5__14;
    if ( !v660 )
      sub_1D0F30C(v653, 0);
    v661 = v653;
    if ( !v653 )
      sub_1D0F30C(0, v660);
    v662 = v660->fields.warId;
    v653->fields._WarInfo_k__BackingField = v660;
    v653->fields.warId = v662;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v653->fields._WarInfo_k__BackingField,
      (int32_t)v660,
      v654,
      v655,
      v656,
      v657,
      v658,
      v659);
    v663 = v817->fields._spotInfo_5__17;
    v661->fields._SpotInfo_k__BackingField = v663;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v661->fields._SpotInfo_k__BackingField,
      (int32_t)v663,
      v664,
      v665,
      v666,
      v667,
      v668,
      v669);
    v661->fields.endTime = QuestTree__GetEndTime(_4__this, v661, 0);
    warEnt_5__18 = v817->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1D0F30C(0, v670);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0);
    if ( IsStartTypeQuest )
    {
      v674 = v817->fields._warEnt_5__18;
      if ( !v674 )
        sub_1D0F30C(IsStartTypeQuest, v673);
      v675 = v817->fields.__8__3;
      if ( !v675 )
        sub_1D0F30C(IsStartTypeQuest, v673);
      if ( v674->fields.targetId == v675->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v817->fields._warEnt_5__18, 0x8000, 0);
        if ( !IsStartTypeQuest )
          goto LABEL_408;
      }
    }
    v676 = v817->fields._warEnt_5__18;
    if ( !v676 )
      sub_1D0F30C(IsStartTypeQuest, v673);
    v677 = v817->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v677 )
      sub_1D0F30C(0, v673);
    v678 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v677,
             v676->fields.id,
             &value,
             (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v678 )
    {
      v680 = v817->fields.__8__3;
      if ( !v680 )
        sub_1D0F30C(v678, v679);
      if ( !value )
        sub_1D0F30C(0, v679);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v680->fields.questId,
             (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_408:
        *(_QWORD *)&v661->fields.dispType = 0;
LABEL_412:
        v683 = 1;
        goto LABEL_413;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v570, v661, v817->fields._nowWarId_5__21, 0) != 1 )
      goto LABEL_412;
    v682 = v817->fields._warInfo_5__14;
    if ( !v682 )
      sub_1D0F30C(0, v681);
    MapControl_WarInfo__SetStatusCheckFlag(v682, 1, 0, 0);
    v683 = 0;
LABEL_413:
    if ( MapControl_QuestInfo__IsDisaplayable(v661, 0) )
    {
      if ( ((v646 | v683) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType(v661, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v686 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestResetMaster___);
          v687 = sub_1D0F15C(long___TypeInfo, 1);
          v688 = v817->fields.__8__3;
          if ( !v688 )
            sub_1D0F30C(v687, v687);
          if ( !v687 )
            sub_1D0F30C(0, 0);
          if ( !*(_DWORD *)(v687 + 24) )
            sub_1D0F314(v687);
          *(_QWORD *)(v687 + 32) = v688->fields.questId;
          if ( !v686 )
            sub_1D0F30C(v687, v687);
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v686,
                                   (System_Int64_array *)v687,
                                   (const MethodInfo_3535158 *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v811 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v811, 0) )
          {
            v690 = v817->fields._spotInfo_5__17;
            if ( !v690 )
              sub_1D0F30C(0, v685);
            MapControl_SpotInfo__AddQuestCount(v690, 1, 0);
          }
        }
        v691 = v817->fields._spotInfo_5__17;
        if ( !v691 )
          sub_1D0F30C(0, v685);
        MapControl_SpotInfo__AddAvailableQuestId(v691, v661->fields.questId, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType(v661, 0) == 1 )
      {
        v692 = MapControl_QuestInfo__GetMine(v661, 0);
        if ( !v692 )
          sub_1D0F30C(0, v693);
        HasFlag = QuestEntity__HasFlag(v692, 0x400000000000LL, 0);
        v696 = v817;
        if ( !HasFlag )
        {
          v697 = v817->fields._spotInfo_5__17;
          if ( !v697 )
            sub_1D0F30C(HasFlag, v695);
          v697->fields._IsNext_k__BackingField = 1;
        }
        v698 = v696->fields._mapInfo_5__16;
        if ( !v698 )
          sub_1D0F30C(HasFlag, v695);
        v698->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v661, 0);
      if ( IsDisplayQuestNextIcon )
      {
        v701 = v817;
        v702 = v817->fields._spotInfo_5__17;
        if ( !v702 )
          sub_1D0F30C(IsDisplayQuestNextIcon, v700);
        v702->fields._IsNext_k__BackingField = 1;
        v703 = v701->fields._mapInfo_5__16;
        if ( !v703 )
          sub_1D0F30C(IsDisplayQuestNextIcon, v700);
        v703->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v570, 0x8000000000LL, 0) )
      {
        v704 = v817->fields._spotInfo_5__17;
        if ( !v704 )
          sub_1D0F30C(0, v684);
        MapControl_SpotInfo__AddFreeQuestCount(v704, 1, 0);
      }
    }
    v705 = v811;
    if ( v811 )
    {
      v705 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v811, 8, 0);
      if ( ((unsigned __int8)v705 & 1) != 0 )
      {
        if ( !v811 )
          sub_1D0F30C(v705, v684);
        v706 = v811->fields.challengeNum == 0;
      }
      else
      {
        v706 = 0;
      }
    }
    else
    {
      v706 = 1;
    }
    v661->fields.isNew = v706;
    v661->fields.questPhase = QuestPhase;
    v707 = v817->fields.__8__3;
    if ( !v707 )
      sub_1D0F30C(v705, v684);
    questPickupMaster_5__9 = v817->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1D0F30C(0, v684);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v707->fields.questId, 0);
    v661->fields.pickupPriority = Priority;
    v711 = v817->fields.__8__3;
    if ( !v711 )
      sub_1D0F30C(Priority, v710);
    questPhaseMaster_5__6 = v817->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1D0F30C(0, v710);
    v713 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v711->fields.questId, 0);
    v721 = v713;
    if ( !v713 )
      sub_1D0F30C(0, v714);
    v722 = v713[3];
    v723 = v722 - 1;
    if ( (int)v722 >= 1 )
    {
      v724 = 0;
      while ( 1 )
      {
        v725 = v721[v724 + 4];
        if ( !v725 )
          sub_1D0F30C(v713, v714);
        v713 = MapControl_QuestInfo__AddChild(v661, *(_DWORD *)(v725 + 16), *(_DWORD *)(v725 + 20), 0);
        if ( v723 == v724 )
          break;
        if ( (unsigned int)++v724 >= *((_DWORD *)v721 + 6) )
          sub_1D0F314(v713);
      }
    }
    v726 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v726 )
      sub_1D0F30C(0, v714);
    v727 = v726->fields._items;
    v728 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v726->fields._version;
    if ( !v727 )
      sub_1D0F30C(v726, v714);
    v729 = v726->fields._size;
    if ( (unsigned int)v729 >= LODWORD(v727->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v726,
        (Il2CppObject *)v661,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v728[4] + 192LL) + 112LL));
    }
    else
    {
      v730 = &v727->obj.klass + v729;
      v726->fields._size = v729 + 1;
      v730[4] = (Il2CppClass *)v661;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v730 + 4), (int32_t)v661, v715, v716, v717, v718, v719, v720);
    }
    v8 = v817;
    v207 = v817->fields._mapCount_5__13;
    if ( v207 && !(v207 % v817->fields._breakInterval_5__22) )
    {
      v817->fields.__2__current = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, 0, v731, v732, v733, v734, v735, v736);
      v279 = v817;
      v280 = 4;
      goto LABEL_329;
    }
LABEL_467:
    mapIdx_5__12 = (unsigned int)v8->fields._mapIdx_5__12;
    mapCount_5__13 = v207 + 1;
    v8->fields._mapCount_5__13 = mapCount_5__13;
  }
  if ( !_4__this )
    sub_1D0F30C(mapIdx_5__12, method);
  v737 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v738 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v738 = QuestTree___c_TypeInfo;
  }
  _9__48_11 = (System_Comparison_T__o *)v738->static_fields->__9__48_11;
  if ( !_9__48_11 )
  {
    if ( !v738->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v738);
      v738 = QuestTree___c_TypeInfo;
    }
    v740 = (Il2CppObject *)v738->static_fields->__9;
    _9__48_11 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(_9__48_11, v740, Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__48_11__, 0);
    v741 = QuestTree___c_TypeInfo->static_fields;
    v741->__9__48_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__48_11;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&v741->__9__48_11,
      (int32_t)_9__48_11,
      v742,
      v743,
      v744,
      v745,
      v746,
      v747);
  }
  if ( !v737 )
    sub_1D0F30C(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_60153556(
    v737,
    _9__48_11,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v748 = v817;
  v817->fields.__8__3 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v748->fields.__8__3, 0, v749, v750, v751, v752, v753, v754);
  v755 = v817;
  v817->fields._warInfo_5__14 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v755->fields._warInfo_5__14, 0, v756, v757, v758, v759, v760, v761);
  v762 = v817;
  v817->fields._mapInfo_5__16 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v762->fields._mapInfo_5__16, 0, v763, v764, v765, v766, v767, v768);
  v769 = v817;
  v817->fields._spotInfo_5__17 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v769->fields._spotInfo_5__17, 0, v770, v771, v772, v773, v774, v775);
  v776 = v817;
  v817->fields._warEnt_5__18 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v776->fields._warEnt_5__18, 0, v777, v778, v779, v780, v781, v782);
  v783 = v817;
  v817->fields._userQuestMaster_5__19 = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v783->fields._userQuestMaster_5__19,
    0,
    v784,
    v785,
    v786,
    v787,
    v788,
    v789);
  v790 = v817;
  v817->fields._questList_5__24 = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v790->fields._questList_5__24, 0, v791, v792, v793, v794, v795, v796);
  v797 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v797 )
    sub_1D0F30C(0, v798);
  CommonUI__SetLoadMode((CommonUI_o *)v797, 0, 0);
  _4__this->fields.isInit = 1;
  v805 = v817;
  if ( v817->fields.endCallback )
  {
    v817->fields.__2__current = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v805->fields.__2__current, 0, v799, v800, v801, v802, v803, v804);
    v279 = v817;
    v280 = 5;
    goto LABEL_329;
  }
LABEL_480:
  result = 0;
  _4__this->fields.isQuestTreeUpdateFinished = 1;
  return result;
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48____m__Finally1(this, method);
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__48_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E7455E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_4E7455E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}