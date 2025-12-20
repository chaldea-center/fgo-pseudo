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

  if ( (byte_4D2955A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1C94098(&MapControl_RootInfo_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_4D2955A = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_1C942E4(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0);
  this->fields.mapControlRootInfo = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.allQuestInfoList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.allSpotInfoList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v24;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.allSpotRoadInfoList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v31;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.allMapGimmickInfoList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v38;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.allMapInfoList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v45;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.allWarInfoList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v52 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v52;
  sub_1C9403C(
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
    (const MethodInfo_3ABAB5C *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_37256964(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckMapGimmickCond_37254052(
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

  if ( (byte_4D29557 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29557 = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1C94140(long___TypeInfo, 2);
    if ( !Time )
      goto LABEL_26;
    v11 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v11 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, (_DWORD)v11 == 1) )
      sub_1C942F8(Time);
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
      sub_1C942F0(Time, v7);
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
  if ( (byte_4D29553 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29553 = 1;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
  v18 = (_QWORD *)sub_1C94140(long___TypeInfo, 3);
  Instance = QuestEntity__getNoticeAt(questEnt, 0);
  if ( !v18 )
    goto LABEL_73;
  v19 = v18[3];
  if ( !(_DWORD)v19 || (v18[4] = Instance, (_DWORD)v19 == 1) || (v18[5] = v16, (unsigned int)v19 <= 2) )
    sub_1C942F8(Instance);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_73;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_73;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2633A )
          {
            sub_1C94098(&NetworkManager_TypeInfo);
            byte_4D2633A = 1;
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
      MapControl_QuestInfo__SetDispType_36844528(questInfo, 2, questReleaseNG, 0);
      goto LABEL_69;
    }
LABEL_73:
    sub_1C942F0(Instance, v10);
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

  return QuestTree__CheckSpotCond_37256964(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool QuestTree__CheckSpotCond_37256964(
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
  System_Action_c *klass; // x8
  System_Action_c *v20; // x8
  const MethodInfo *v21; // x8
  int invoker_method; // w8
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

  if ( (byte_4D29556 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D29556 = 1;
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
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
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
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.endAct->klass;
  if ( !klass )
    goto LABEL_209;
  if ( !klass->vtable._9_GetInvocationList.method )
    goto LABEL_34;
  if ( !*(_DWORD *)&Instance->fields._IsAfterFadeInPlay_k__BackingField )
    inited = j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4D264E4 )
  {
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D264E4 = 1;
  }
  Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (QuestAfterAction_o *)TerminalSceneComponent_TypeInfo;
  }
  v20 = Instance->fields.endAct->klass;
  if ( !v20 )
    goto LABEL_209;
  v21 = v20->vtable._9_GetInvocationList.method;
  if ( !v21 )
    goto LABEL_209;
  invoker_method = (int)v21->invoker_method;
  if ( invoker_method )
  {
    IsExistCommand = 0;
  }
  else
  {
LABEL_34:
    v24 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C6A12C(inited);
    v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C6A12C(inited);
    v26 = **(UnityEngine_Object_o ***)(v25 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      IsExistCommand = QuestAfterAction__IsExistCommand(Instance, commandType, commandTypeId, 0);
      invoker_method = 0;
    }
    else
    {
      invoker_method = 0;
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
      if ( invoker_method == targetId )
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                       (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
              Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)v41, v42);
              if ( !v41 || !Instance )
                break;
              ++v40;
              v39 += clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, (int32_t)v41[1].klass, IsExistCommand, 0);
              if ( v40 >= v38->fields._size )
                goto LABEL_167;
            }
LABEL_209:
            sub_1C942F0(Instance, v16);
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
          sub_1C942F8(Instance);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2633A )
      {
        sub_1C94098(&NetworkManager_TypeInfo);
        byte_4D2633A = 1;
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
                                         Instance->fields.endAct->fields.method_code,
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
      if ( invoker_method == targetId )
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

  return QuestTree__CheckSpotCond_37256964(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D29551 & 1) == 0 )
  {
    sub_1C94098(&QuestTree__EnumerateBlankEarthSpotInfo_d__48_TypeInfo);
    byte_4D29551 = 1;
  }
  v7 = sub_1C942E4(QuestTree__EnumerateBlankEarthSpotInfo_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 72) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 72), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)mapInfo, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v20, v21, v22, v23, v24, v25);
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
  if ( (byte_4D29554 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_1C94098(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4D29554 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_43306872((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1C942F0(this, questInfo);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v9 = 0;
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C942F0(v10, v11);
    klass_high = HIDWORD(v27.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1C942F0(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_1C942F0(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1C942F0(0, v22);
        EndTime = QuestEntity__getClosedAt(Mine, 0);
        goto LABEL_27;
      case 13:
        v23 = MapControl_QuestInfo__GetMine(questInfo, 0);
        if ( !v23 )
          sub_1C942F0(0, v24);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_42128268; // x0
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

  if ( (byte_4D29555 & 1) == 0 )
  {
    sub_1C94098(&System_DateTime_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D29555 = 1;
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
    sub_1C942F0(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v10.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Time_42128268 = NetworkManager__getTime_42128268(v10, 0);
  value = questReleaseEnt->fields.value;
  v13 = Time_42128268;
  dateData = NetworkManager__getDateTime_42129048(Time_42128268 - 3600 * value, 0).fields._dateData;
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
    dateData = NetworkManager__getDateTime_42129048(v17, 0).fields._dateData;
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
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  MapControl_WarInfo_o *current; // x21
  BalanceConfig_c *v22; // x0
  int32_t warId; // w22
  QuestTree___c_c *v24; // x8
  System_Func_object__bool__o *_9__41_1; // x21
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

  if ( (byte_4D2954A & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C94098(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C94098(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C94098(&Method_QuestTree___c__GetLatestGrandWarInfo_b__41_0__);
    sub_1C94098(&Method_QuestTree___c__GetLatestGrandWarInfo_b__41_1__);
    sub_1C94098(&QuestTree___c_TypeInfo);
    byte_4D2954A = 1;
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
  _9__41_0 = (System_Func_object__int__o *)v5->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestTree___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__41_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__41_0, v8, Method_QuestTree___c__GetLatestGrandWarInfo_b__41_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__41_0;
    sub_1C9403C(
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
                                                               (const MethodInfo_31CC684 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v16,
                                                  (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_32:
    sub_1C942F0(mapControlRootInfo, method);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)mapControlRootInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v18 )
      break;
    current = (MapControl_WarInfo_o *)v38.fields._current;
    if ( !v38.fields._current )
      sub_1C942F0(v18, v19);
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
      _9__41_1 = (System_Func_object__bool__o *)v24->static_fields->__9__41_1;
      if ( !_9__41_1 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = QuestTree___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__41_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_MapControl_WarInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__41_1, v26, Method_QuestTree___c__GetLatestGrandWarInfo_b__41_1__, 0);
        v27 = QuestTree___c_TypeInfo->static_fields;
        v27->__9__41_1 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__41_1;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v27->__9__41_1, (int32_t)_9__41_1, v28, v29, v30, v31, v32, v33);
      }
      current = (MapControl_WarInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__52191056(
                                          v17,
                                          (System_Func_TSource__bool__o *)_9__41_1,
                                          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_MapControl_WarInfo___);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return current;
}


MapControl_WarInfo_o *QuestTree__GetLatestProgressWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  QuestTree___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__40_0; // x21
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

  if ( (byte_4D29549 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1C94098(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1C94098(&Method_QuestTree___c__GetLatestProgressWarInfo_b__40_0__);
    sub_1C94098(&QuestTree___c_TypeInfo);
    byte_4D29549 = 1;
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
  _9__40_0 = (System_Func_object__int__o *)v5->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestTree___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__40_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__40_0, v8, Method_QuestTree___c__GetLatestProgressWarInfo_b__40_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__40_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_0,
      (int32_t)_9__40_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__40_0,
                                                               (const MethodInfo_31CC684 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v16,
                                                  (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1C942F0(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v17 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C942F0(v17, v18);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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

  if ( (byte_4D2953F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_1C94098(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass26_0__GetMapGimmickInfo_b__0__);
    sub_1C94098(&QuestTree___c__DisplayClass26_0_TypeInfo);
    byte_4D2953F = 1;
  }
  v5 = sub_1C942E4(QuestTree___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass26_0__GetMapGimmickInfo_b__0__,
          0),
        !allMapGimmickInfoList) )
  {
    sub_1C942F0(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1C942F0(QuestInfo, v5);
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

  if ( (byte_4D29542 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4D29542 = 1;
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
  v9 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1C942F0(v10, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C942F0(0, v12);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v48.fields._current,
                                                              0);
    if ( !SpotList )
      sub_1C942F0(0, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      SpotList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1C942F0(0, v15);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v47.fields._current,
                                                                              0,
                                                                              0);
      if ( !v9 )
        sub_1C942F0(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v18, v9, v19);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v17 = 0;
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1C942F0(0, v22);
    v23 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v48.fields._current,
                                                         0);
    if ( !v23 )
      sub_1C942F0(0, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      v23,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v25 )
        break;
      current = (MapControl_SpotInfo_o *)v47.fields._current;
      if ( !v47.fields._current )
        sub_1C942F0(v25, v26);
      if ( HIDWORD(v47.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C942F0(0, v29);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0) )
          continue;
      }
      v30 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0);
      if ( !v30 )
        sub_1C942F0(0, v31);
      v44 = v17;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v30,
        (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v32 = 0;
      v46 = v45;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v46,
                (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v33 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1C942F0(v33, v34);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v46.fields._current,
                 (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v37 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v21 )
            sub_1C942F0(Item, v36);
          v38 = System_Collections_Generic_List_int___Contains(
                  v21,
                  Item,
                  (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1C942F0(v38, v39);
            size = v21->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v37,
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
        (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v17 = v44 - v32 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_4D29545 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4D29545 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = v40;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C942F0(v12, v13);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0);
        if ( !v9 )
          sub_1C942F0(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C942F0(v12, v13);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
    v19 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0);
    if ( !SpotList )
LABEL_49:
      sub_1C942F0(SpotList, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v39 = 0;
    v42 = v40;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v20 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v39;
        return (int)MapInfoByMapID;
      }
      v22 = (MapControl_SpotInfo_o *)v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1C942F0(v20, v21);
LABEL_22:
        if ( v22->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1C942F0(0, v24);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v22->fields.spotId, 0) )
        {
LABEL_25:
          v25 = MapControl_SpotInfo__GetAvailableQuestIdList(v22, 1, 0);
          if ( !v25 )
            sub_1C942F0(0, v26);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            v25,
            (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v27 = 0;
          v41 = v40;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v41,
                    (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v28 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1C942F0(v28, v29);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v41.fields._current,
                     (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v32 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v19 )
                sub_1C942F0(Item, v31);
              v33 = System_Collections_Generic_List_int___Contains(
                      v19,
                      Item,
                      (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1C942F0(v33, v34);
                size = v19->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v32,
                    *(const MethodInfo_384DE10 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
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
            (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v39 = v39 - v27 + v22->fields.questCount;
        }
      }
      else
      {
        if ( !v42.fields._current )
          sub_1C942F0(v20, v21);
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

  if ( (byte_4D29540 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C94098(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass27_0__GetQuestInfo_b__0__);
    sub_1C94098(&QuestTree___c__DisplayClass27_0_TypeInfo);
    byte_4D29540 = 1;
  }
  v5 = sub_1C942E4(QuestTree___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass27_0__GetQuestInfo_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C942F0(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4D29558 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4D29558 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1C942F0(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    allQuestInfoList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C942F0(v8, v9);
    if ( LODWORD(v23.fields._current[4].klass) == warId )
    {
      if ( !v5 )
        sub_1C942F0(v8, v9);
      items = v5->fields._items;
      v18 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C942F0(v8, v9);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v20[4] = (Il2CppClass *)current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)current, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D29544 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D29544 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v5);
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

  if ( (byte_4D2953E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C94098(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass25_0__GetSpotInfo_b__0__);
    sub_1C94098(&QuestTree___c__DisplayClass25_0_TypeInfo);
    byte_4D2953E = 1;
  }
  v5 = sub_1C942E4(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass25_0__GetSpotInfo_b__0__,
          0),
        !allSpotInfoList) )
  {
    sub_1C942F0(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  System_Func_object__int__o *_9__33_0; // x23
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

  if ( (byte_4D29543 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_1C94098(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_QuestTree___c__GetUserReachableMapList_b__33_0__);
    sub_1C94098(&Method_QuestTree___c__DisplayClass33_0__GetUserReachableMapList_b__1__);
    sub_1C94098(&QuestTree___c__DisplayClass33_0_TypeInfo);
    sub_1C94098(&QuestTree___c_TypeInfo);
    byte_4D29543 = 1;
  }
  v4 = sub_1C942E4(QuestTree___c__DisplayClass33_0_TypeInfo);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
    _9__33_0 = (System_Func_object__int__o *)v19->static_fields->__9__33_0;
    if ( !_9__33_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = QuestTree___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__33_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__33_0, v21, Method_QuestTree___c__GetUserReachableMapList_b__33_0__, 0);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__33_0 = (struct System_Func_MapButtonEntity__int__o *)_9__33_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__33_0,
        (int32_t)_9__33_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__33_0,
                            (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v18 )
    {
      System_Collections_Generic_List_int___AddRange(
        v18,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1C942F0(Mine, mapId);
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
      *(const MethodInfo_384DE10 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = size + 1;
    items->m_Items[size] = mapId;
  }
LABEL_26:
  v33 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)v4,
    Method_QuestTree___c__DisplayClass33_0__GetUserReachableMapList_b__1__,
    0);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v33,
                                                                    (const MethodInfo_386B544 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4D29547 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1C94098(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass37_0__GetWarID_ByQuestID_b__0__);
    sub_1C94098(&QuestTree___c__DisplayClass37_0_TypeInfo);
    byte_4D29547 = 1;
  }
  v5 = sub_1C942E4(QuestTree___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass37_0__GetWarID_ByQuestID_b__0__,
          0),
        !allQuestInfoList) )
  {
    sub_1C942F0(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4D2953A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___79020376);
    sub_1C94098(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4D2953A = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156264(
    v4,
    allWarInfoList,
    (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___79020376);
  if ( !v4 )
    sub_1C942F0(v5, v6);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_386C760 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2953B & 1) == 0 )
  {
    sub_1C94098(&QuestTree__Init_d__19_TypeInfo);
    byte_4D2953B = 1;
  }
  v5 = sub_1C942E4(QuestTree__Init_d__19_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)endCallback, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D29552 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4D29552 = 1;
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
    sub_1C942F0(mapControlRootInfo, method);
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

  if ( (byte_4D2954C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2954C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v6);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_37251500(this, (WarEntity_o *)entity, v7);
}


bool QuestTree__IsActiveEventWar_37251500(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_4D2954D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C94098(&long___TypeInfo);
    this = (QuestTree_o *)sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2954D = 1;
  }
  entity = 0;
  if ( !warEnt )
    goto LABEL_33;
  id = warEnt->fields.id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_33;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_345B50C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
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
  this = (QuestTree_o *)sub_1C94140(long___TypeInfo, 1);
  if ( !entity || !this )
LABEL_33:
    sub_1C942F0(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1C942F8(this);
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

  if ( (byte_4D2954B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2954B = 1;
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
  Mine = (WarEntity_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Mine )
LABEL_25:
    sub_1C942F0(Mine, v8);
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
  if ( WarEntity__IsEvent((WarEntity_o *)mapControlRootInfo, 0) && !QuestTree__IsActiveEventWar_37251500(this, v11, v12) )
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

  if ( (byte_4D2953C & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2953C = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
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

  if ( (byte_4D29546 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4D29546 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0);
  if ( !SpotList )
    sub_1C942F0(0, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    SpotList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v19.fields._current;
    if ( layer < 1 )
    {
      if ( !v19.fields._current )
        sub_1C942F0(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields._current )
      sub_1C942F0(v10, v11);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_1C942F0(this, 0);
  return QuestTree__CheckSpotCond_37256964(
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
    sub_1C942F0(this, 0);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0))
      && QuestTree__CheckSpotCond_37256964(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_37256964(
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

  if ( (byte_4D29559 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4D29559 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1C942F0(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestInfoByWarId,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields._current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_1C942F0(v10, v11);
    if ( !v10 )
      sub_1C942F0(0, v11);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_4D29548 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4D29548 = 1;
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
    sub_1C942F0(QuestInfoByWarId, v6);
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
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    if ( !v17.fields._current )
      sub_1C942F0(v10, v11);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_4D2954E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&SpotEntity_TypeInfo);
    byte_4D2954E = 1;
  }
  v6 = sub_1C942E4(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)name, v9, v10, v11, v12, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6A12C(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C6A12C(v16);
  v19 = **(UnityEngine_Object_o ***)(v18 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1C942F0(Instance, v8);
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

  v4 = QuestTree__CheckMapGimmickCond_37254052(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1C942F0(v4, v5);
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
    sub_1C942F0(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_37256964(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_37256964(
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
    sub_1C942F0(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_37256964(
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
    sub_1C942F0(this, nowTime);
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

  if ( (byte_4D2953D & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2953D = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
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
  if ( (byte_4D29539 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4D29539 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2954F & 1) == 0 )
  {
    sub_1C94098(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_TypeInfo);
    byte_4D2954F = 1;
  }
  v5 = sub_1C942E4(QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)endCallback, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D29550 & 1) == 0 )
  {
    sub_1C94098(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_TypeInfo);
    byte_4D29550 = 1;
  }
  v7 = sub_1C942E4(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 72), (int32_t)endCallback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4D29541 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_1C94098(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass31_0__mfGetMapInfoByMapID_b__0__);
    sub_1C94098(&QuestTree___c__DisplayClass31_0_TypeInfo);
    byte_4D29541 = 1;
  }
  v5 = sub_1C942E4(QuestTree___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0;
  v9 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass31_0__mfGetMapInfoByMapID_b__0__,
    0);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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


void QuestTree__EnumerateBlankEarthSpotInfo_d__48___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestTree__EnumerateBlankEarthSpotInfo_d__48__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *v8; // x19
  int32_t _1__state; // w8
  struct QuestTree_o *_4__this; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w20
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
  BlankEarthSpotEntity_o *v24; // x20
  const MethodInfo *v25; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *v26; // x21
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4D29560 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *)sub_1C94098(&BlankEarthSpotMaster_TypeInfo);
    byte_4D29560 = 1;
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
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *)v8->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v13 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0);
    v8->fields.__7__wrap1 = v13;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap1, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *)&v8->fields.__7__wrap1;
  _7__wrap1 = v8->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v20 < max_length )
  {
    if ( v20 >= (unsigned int)max_length )
      sub_1C942F8(this);
    v24 = _7__wrap1->m_Items[v20];
    if ( v24 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *)v8->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v24->fields.id,
                                                                   0);
        if ( _4__this )
        {
          v26 = this;
          QuestTree__SetupBlankEarthSpotInfo((QuestTree_o *)this, v24, (MapControl_SpotInfo_o *)this, v25);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v26;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C9403C(p__2__current, (int32_t)v26, v28, v29, v30, v31, v32, v33);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1C942F0(this, method);
  }
  this->klass = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *QuestTree__EnumerateBlankEarthSpotInfo_d__48__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *v10; // x20
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

  if ( (byte_4D29561 & 1) == 0 )
  {
    sub_1C94098(&QuestTree__EnumerateBlankEarthSpotInfo_d__48_TypeInfo);
    byte_4D29561 = 1;
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
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *)sub_1C942E4(QuestTree__EnumerateBlankEarthSpotInfo_d__48_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->fields.__4__this, (int32_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v10->fields.mapInfo = _3__mapInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1C9403C(
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


MapControl_SpotInfo_o *QuestTree__EnumerateBlankEarthSpotInfo_d__48__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__48__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *QuestTree__EnumerateBlankEarthSpotInfo_d__48__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestTree__EnumerateBlankEarthSpotInfo_d__48__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__Init_d__19___ctor(QuestTree__Init_d__19_o *this, int32_t 1__state, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__Init_d__19__MoveNext(QuestTree__Init_d__19_o *this, const MethodInfo *method)
{
  QuestTree__Init_d__19_o *v2; // x19
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
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  bool result; // w0
  __int64 v23; // x0
  __int64 v24; // x0
  UnityEngine_Object_o *v25; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4D29562 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__19_o *)sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29562 = 1;
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
        if ( !byte_4D295E9 )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D295E9 = 1;
        }
        v6 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v6 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v6->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__19_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0);
          v9 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
            v9 = sub_1C6A12C(v8);
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
          if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
            v10 = sub_1C6A12C(v8);
          v11 = **(UnityEngine_Object_o ***)(v10 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
            goto LABEL_25;
          this = (QuestTree__Init_d__19_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
            this = (QuestTree__Init_d__19_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, v12);
              v14 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, v13);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
              sub_1C9403C(p__2__current, (int32_t)v14, v16, v17, v18, v19, v20, v21);
              result = 1;
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1C942F0(this, method);
      }
      v23 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
        v23 = sub_1C6A12C(v5);
      v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
      if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
        v24 = sub_1C6A12C(v5);
      v25 = **(UnityEngine_Object_o ***)(v24 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
      {
        this = (QuestTree__Init_d__19_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0);
        this = (QuestTree__Init_d__19_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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


Il2CppObject *QuestTree__Init_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__Init_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__Init_d__19__System_Collections_IEnumerator_Reset(
        QuestTree__Init_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_QuestTree__Init_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *QuestTree__Init_d__19__System_Collections_IEnumerator_get_Current(
        QuestTree__Init_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__Init_d__19__System_IDisposable_Dispose(QuestTree__Init_d__19_o *this, const MethodInfo *method)
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

  if ( (byte_4D2955B & 1) == 0 )
  {
    sub_1C94098(&QuestTree___c_TypeInfo);
    byte_4D2955B = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestTree___c___GetLatestGrandWarInfo_b__41_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C942F0(this, 0);
  return info->fields.warId;
}


bool QuestTree___c___GetLatestGrandWarInfo_b__41_1(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  int32_t warId; // w19
  BalanceConfig_c *v5; // x0

  if ( (byte_4D2955C & 1) == 0 )
  {
    this = (QuestTree___c_o *)sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2955C = 1;
  }
  if ( !info )
    sub_1C942F0(this, info);
  warId = info->fields.warId;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  return warId == v5->static_fields->GrandExtra1WarId;
}


int32_t QuestTree___c___GetLatestProgressWarInfo_b__40_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C942F0(this, 0);
  return info->fields.warId;
}


int32_t QuestTree___c___GetUserReachableMapList_b__33_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.targetMapId;
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__46_0(
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
    sub_1C942F0(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__46_1(
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
    sub_1C942F0(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__47_11(
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
    sub_1C942F0(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__47_2(
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
    sub_1C942F0(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__47_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.spotId;
}


void QuestTree___c__DisplayClass25_0___ctor(QuestTree___c__DisplayClass25_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass25_0___GetSpotInfo_b__0(
        QuestTree___c__DisplayClass25_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass26_0___ctor(QuestTree___c__DisplayClass26_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass26_0___GetMapGimmickInfo_b__0(
        QuestTree___c__DisplayClass26_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass27_0___ctor(QuestTree___c__DisplayClass27_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass27_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass27_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.questId == this->fields.questId;
}


void QuestTree___c__DisplayClass31_0___ctor(QuestTree___c__DisplayClass31_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass31_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass31_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass33_0___ctor(QuestTree___c__DisplayClass33_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass33_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass33_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass33_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2955D & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass33_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2955D = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass33_0_o *)v4->fields.reachableMapIds) == 0 )
    sub_1C942F0(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
}


void QuestTree___c__DisplayClass37_0___ctor(QuestTree___c__DisplayClass37_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass37_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass37_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass37_0_o *v3; // x19

  if ( !x || (v3 = this, (this = (QuestTree___c__DisplayClass37_0_o *)MapControl_QuestInfo__GetMine(x, 0)) == 0) )
    sub_1C942F0(this, x);
  return this->fields.questId == v3->fields.questId;
}


void QuestTree___c__DisplayClass46_0___ctor(QuestTree___c__DisplayClass46_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass46_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass46_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void QuestTree___c__DisplayClass47_0___ctor(QuestTree___c__DisplayClass47_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass47_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.id == this->fields.targetWarId;
}


void QuestTree___c__DisplayClass47_1___ctor(QuestTree___c__DisplayClass47_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass47_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.warId == this->fields.warId;
}


bool QuestTree___c__DisplayClass47_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass47_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


bool QuestTree___c__DisplayClass47_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass47_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.mapId == this->fields.mapId;
}


void QuestTree___c__DisplayClass47_2___ctor(QuestTree___c__DisplayClass47_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass47_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.spotId == this->fields.spotId;
}


void QuestTree___c__DisplayClass47_3___ctor(QuestTree___c__DisplayClass47_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass47_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass47_3_o *v4; // x20

  v4 = this;
  if ( (byte_4D2955E & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass47_3_o *)sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D2955E = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass47_3_o *)v4->fields.spotIdHashSet) == 0 )
    sub_1C942F0(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3718A78 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void QuestTree___c__DisplayClass47_4___ctor(QuestTree___c__DisplayClass47_4_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass47_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void QuestTree___c__DisplayClass47_5___ctor(QuestTree___c__DisplayClass47_5_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass47_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void QuestTree___c__DisplayClass47_6___ctor(QuestTree___c__DisplayClass47_6_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestTree___c__DisplayClass47_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass47_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass47_6_o *v4; // x20

  v4 = this;
  if ( (byte_4D2955F & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass47_6_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2955F = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass47_6_o *)v4->fields.spotInfoList) == 0 )
    sub_1C942F0(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool QuestTree___c__DisplayClass47_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass47_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool QuestTree___c__DisplayClass47_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass47_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.questId == this->fields.questId;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__46___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeMakeWithOpenCheck_d__46__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v2; // x27
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
  MapControl_WarInfo_o *v119; // x21
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
  int64_t v133; // x19
  Il2CppObject *v134; // x8
  Il2CppObject *_2__current; // x9
  __int64 v136; // x8
  struct QuestTree_o **p__4__this; // x9
  struct QuestTree_o *v138; // x10
  __int64 v139; // x8
  _QWORD *v140; // x9
  __int64 _2__current_low; // x10
  __int64 v142; // x8
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x4
  int32_t v146; // w5
  int64_t v147; // x6
  System_String_o *v148; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v149; // x22
  unsigned int v150; // w9
  __int64 v151; // x8
  int32_t v152; // w24
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v161; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v163; // x23
  Il2CppClass **v164; // x0
  const MethodInfo *v165; // x3
  Il2CppObject *v166; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v167; // x25
  int v168; // w27
  unsigned int i; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_c **v170; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_c *v171; // x8
  SpotEntity_o **v172; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_c *v173; // t1
  const MethodInfo *v174; // x3
  Il2CppObject *v175; // x26
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  __int64 v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  __int64 v185; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v187; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v188; // x25
  int v189; // w27
  unsigned int v190; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_c **v191; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_c *v192; // x8
  SpotRoadEntity_o **v193; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_c *v194; // t1
  const MethodInfo *v195; // x3
  Il2CppObject *v196; // x26
  int32_t v197; // w2
  int32_t v198; // w3
  System_String_o *v199; // x4
  int32_t v200; // w5
  int64_t v201; // x6
  System_String_o *v202; // x7
  __int64 v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  __int64 v206; // x8
  Il2CppObject *v207; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v208; // x24
  int v209; // w26
  int v210; // w22
  __int64 v211; // x8
  MapControl_MapGimmickInfo_o *v212; // x25
  const MethodInfo *v213; // x2
  int32_t v214; // w2
  int32_t v215; // w3
  System_String_o *v216; // x4
  int32_t v217; // w5
  int64_t v218; // x6
  System_String_o *v219; // x7
  __int64 v220; // x8
  _QWORD *v221; // x9
  __int64 v222; // x10
  __int64 v223; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x27
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v226; // x22
  Il2CppObject *v227; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v229; // w2
  int32_t v230; // w3
  System_String_o *v231; // x4
  int32_t v232; // w5
  int64_t v233; // x6
  System_String_o *v234; // x7
  Il2CppObject *v235; // x22
  struct QuestTree___c__DisplayClass46_0_o **p__8__1; // x21
  int32_t v237; // w2
  int32_t v238; // w3
  System_String_o *v239; // x4
  int32_t v240; // w5
  int64_t v241; // x6
  System_String_o *v242; // x7
  int64_t v243; // x22
  MapControl_WarInfo_o *v244; // x23
  int32_t v245; // w2
  int32_t v246; // w3
  System_String_o *v247; // x4
  int32_t v248; // w5
  int64_t v249; // x6
  System_String_o *v250; // x7
  MapControl_MapInfo_o *v251; // x22
  int32_t v252; // w2
  int32_t v253; // w3
  System_String_o *v254; // x4
  int32_t v255; // w5
  int64_t v256; // x6
  System_String_o *v257; // x7
  MapControl_SpotInfo_o *v258; // x22
  int32_t v259; // w2
  int32_t v260; // w3
  System_String_o *v261; // x4
  int32_t v262; // w5
  int64_t v263; // x6
  System_String_o *v264; // x7
  WarEntity_o *v265; // x22
  int32_t v266; // w2
  int32_t v267; // w3
  System_String_o *v268; // x4
  int32_t v269; // w5
  int64_t v270; // x6
  System_String_o *v271; // x7
  Il2CppObject *v272; // x0
  int32_t v273; // w2
  int32_t v274; // w3
  System_String_o *v275; // x4
  int32_t v276; // w5
  int64_t v277; // x6
  System_String_o *v278; // x7
  bool v279; // zf
  int v280; // w8
  QuestEntity_o *v281; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass46_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v286; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v288; // w2
  int32_t v289; // w3
  System_String_o *v290; // x4
  int32_t v291; // w5
  int64_t v292; // x6
  System_String_o *v293; // x7
  Il2CppObject *v294; // x0
  int32_t v295; // w2
  int32_t v296; // w3
  System_String_o *v297; // x4
  int32_t v298; // w5
  int64_t v299; // x6
  System_String_o *v300; // x7
  int32_t MapID; // w0
  const MethodInfo *v302; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v304; // w2
  int32_t v305; // w3
  System_String_o *v306; // x4
  int32_t v307; // w5
  int64_t v308; // x6
  System_String_o *v309; // x7
  int32_t v310; // w2
  int32_t v311; // w3
  System_String_o *v312; // x4
  int32_t v313; // w5
  int64_t v314; // x6
  System_String_o *v315; // x7
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x1
  WarEntity_o *Mine; // x0
  int32_t v319; // w2
  int32_t v320; // w3
  System_String_o *v321; // x4
  int32_t v322; // w5
  int64_t v323; // x6
  System_String_o *v324; // x7
  int v325; // w25
  int32_t v326; // w2
  int32_t v327; // w3
  System_String_o *v328; // x4
  int32_t v329; // w5
  int64_t v330; // x6
  System_String_o *v331; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v332; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v334; // w2
  int32_t v335; // w3
  System_String_o *v336; // x4
  int32_t v337; // w5
  int64_t v338; // x6
  System_String_o *v339; // x7
  const MethodInfo *v340; // x2
  struct WarEntity_o *warEnt_5__23; // x8
  const MethodInfo *v342; // x4
  int v343; // w19
  Il2CppObject *Master_object; // x25
  bool isEntityExistsFromId; // w0
  struct MapControl_SpotInfo_o *v346; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v348; // x9
  struct MapControl_MapInfo_o *v349; // x9
  bool v350; // w8
  int32_t v351; // w2
  int32_t v352; // w3
  System_String_o *v353; // x4
  int32_t v354; // w5
  int64_t v355; // x6
  System_String_o *v356; // x7
  Il2CppObject *v357; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v358; // x21
  int v359; // w19
  int v360; // w22
  __int64 v361; // x8
  __int64 v362; // x8
  _QWORD *v363; // x9
  __int64 v364; // x10
  __int64 v365; // x8
  int32_t v366; // w2
  int32_t v367; // w3
  System_String_o *v368; // x4
  int32_t v369; // w5
  int64_t v370; // x6
  System_String_o *v371; // x7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v373; // x22
  Il2CppObject *v374; // x23
  struct QuestTree___c_StaticFields *v375; // x0
  int32_t v376; // w2
  int32_t v377; // w3
  System_String_o *v378; // x4
  int32_t v379; // w5
  int64_t v380; // x6
  System_String_o *v381; // x7
  int32_t v382; // w2
  int32_t v383; // w3
  System_String_o *v384; // x4
  int32_t v385; // w5
  int64_t v386; // x6
  System_String_o *v387; // x7
  int32_t v388; // w2
  int32_t v389; // w3
  System_String_o *v390; // x4
  int32_t v391; // w5
  int64_t v392; // x6
  System_String_o *v393; // x7
  int32_t v394; // w2
  int32_t v395; // w3
  System_String_o *v396; // x4
  int32_t v397; // w5
  int64_t v398; // x6
  System_String_o *v399; // x7
  int32_t v400; // w2
  int32_t v401; // w3
  System_String_o *v402; // x4
  int32_t v403; // w5
  int64_t v404; // x6
  System_String_o *v405; // x7
  int32_t v406; // w2
  int32_t v407; // w3
  System_String_o *v408; // x4
  int32_t v409; // w5
  int64_t v410; // x6
  System_String_o *v411; // x7
  int32_t v412; // w2
  int32_t v413; // w3
  System_String_o *v414; // x4
  int32_t v415; // w5
  int64_t v416; // x6
  System_String_o *v417; // x7
  int32_t v418; // w2
  int32_t v419; // w3
  System_String_o *v420; // x4
  int32_t v421; // w5
  int64_t v422; // x6
  System_String_o *v423; // x7
  GrandQuestFolderBoardItem_o *v424; // x27
  int v425; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v426; // [xsp+0h] [xbp-C0h]
  Il2CppObject *v427; // [xsp+10h] [xbp-B0h]
  unsigned int v428; // [xsp+1Ch] [xbp-A4h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *v429; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v431; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v435; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4D29563 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C94098(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestAddMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_WarAddMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C94098(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C94098(&MapControl_MapInfo_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&MapControl_SpotInfo_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__46_0__);
    sub_1C94098(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__46_1__);
    sub_1C94098(&Method_QuestTree___c__DisplayClass46_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_1C94098(&QuestTree___c__DisplayClass46_0_TypeInfo);
    sub_1C94098(&QuestTree___c_TypeInfo);
    sub_1C94098(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)sub_1C94098(&MapControl_WarInfo_TypeInfo);
    byte_4D29563 = 1;
  }
  v435 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v431 = 0;
  mapGimmickInfo = 0;
  value = 0;
  _4__this = v2->fields.__4__this;
  v429 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_299;
      QuestTree__InitInfo(_4__this, method);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._dataManager_5__2,
        (int32_t)Instance,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._mapMaster_5__3,
        (int32_t)MasterData_object,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v18;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._spotMaster_5__4,
        (int32_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v25 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v25;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._blankEarthSpotMaster_5__5,
        (int32_t)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v32 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v32;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._questMaster_5__6,
        (int32_t)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v39 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v39;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._questPhaseMaster_5__7,
        (int32_t)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v46 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v46;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventMaster_5__8,
        (int32_t)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v53 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v53;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventDetailMaster_5__9,
        (int32_t)v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v60 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v60;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventStatusMaster_5__10,
        (int32_t)v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v67 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v67;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int32_t)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v74 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v74;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._spotRoadMaster_5__12,
        (int32_t)v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v81 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v81;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._mapGimmickMaster_5__13,
        (int32_t)v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      v88 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v88;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._questPickupMaster_5__14,
        (int32_t)v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      v95 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v95,
        (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v95;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_299;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  (const MethodInfo_345A744 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys;
      sub_1C9403C(
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
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)NetworkManager__getTime(0);
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
      goto LABEL_130;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v2->fields.__1__state = -1;
      goto LABEL_270;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
                                                                 endCallback->fields.method_code,
                                                                 endCallback->fields.method);
      if ( !_4__this )
        goto LABEL_299;
      goto LABEL_283;
    default:
      return 0;
  }
  while ( v111 < max_length )
  {
    v116 = v2->fields._warList_5__16;
    if ( !v116 )
      goto LABEL_299;
    if ( (unsigned int)v111 >= LODWORD(v116->max_length) )
      goto LABEL_151;
    v117 = v116->m_Items[v111];
    if ( !v117 )
      goto LABEL_299;
    if ( !_4__this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_299;
    id = v117->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v119 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_WarInfo__GetEventId(v119, 0);
      if ( !eventMaster_5__8 )
        goto LABEL_299;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_345B50C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_299;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v119, 1, 0, 0);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_WarInfo__GetEventId(v119, 0);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_299;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v435,
               (int32_t)this,
               (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v435;
          if ( !v435 )
            goto LABEL_299;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v435, 0x2000000, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)entity;
            if ( !entity )
              goto LABEL_299;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_WarInfo__GetEventId(v119, 0);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_299;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v132 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_WarInfo__GetEventId(v119, 0);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_299;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v132->fields.statusId,
                                                                           0);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_299;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v133 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)sub_1C94140(long___TypeInfo, 3);
        v134 = entity;
        if ( !entity || !this )
          goto LABEL_299;
        _2__current = this->fields.__2__current;
        if ( !(_DWORD)_2__current )
          goto LABEL_151;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( (_DWORD)_2__current == 1 )
          goto LABEL_151;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass46_0_o *)v134[5].monitor;
        if ( (unsigned int)_2__current <= 2 )
          goto LABEL_151;
        this->fields.endCallback = (struct System_Action_o *)v134[6].monitor;
        if ( (int)_2__current >= 1 )
        {
          v136 = (unsigned int)_2__current;
          p__4__this = &this->fields.__4__this;
          do
          {
            v138 = *p__4__this;
            if ( (__int64)*p__4__this > v133 && _4__this->fields.forceUpdateTime > (__int64)v138 )
              _4__this->fields.forceUpdateTime = (int64_t)v138;
            --v136;
            ++p__4__this;
          }
          while ( v136 );
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_299;
    v139 = *(_QWORD *)&this->fields.__1__state;
    v140 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v139 )
      goto LABEL_299;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v139 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v119,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
    }
    else
    {
      v142 = v139 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v142 + 32) = v119;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v142 + 32), (int32_t)v119, v120, v121, v122, v123, v124, v125);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapMaster__getList((MapMaster_o *)this, id, 0);
    if ( !this )
      goto LABEL_299;
    v149 = this;
    v427 = this->fields.__2__current;
    if ( (int)v427 >= 1 )
    {
      v150 = 0;
      v426 = this;
      while ( 1 )
      {
        v151 = *((_QWORD *)&v149->fields.__4__this + (int)v150);
        v428 = v150;
        if ( !v151 )
          goto LABEL_299;
        v152 = *(_DWORD *)(v151 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_WarInfo__AddChild(v119, v152, 0);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_299;
        items = allMapInfoList->fields._items;
        v161 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_299;
        size = allMapInfoList->fields._size;
        v163 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
        }
        else
        {
          v164 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v164[4] = (Il2CppClass *)v163;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v164 + 4), (int32_t)v163, v153, v154, v155, v156, v157, v158);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)SpotMaster__getList((SpotMaster_o *)this, v152, 0);
        if ( !this )
          goto LABEL_299;
        v166 = this->fields.__2__current;
        v167 = this;
        v168 = (_DWORD)v166 - 1;
        if ( (int)v166 >= 1 )
          break;
LABEL_94:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v163,
                                                                   v429->fields._blankEarthSpotMaster_5__5,
                                                                   v165);
        if ( !allSpotInfoList )
          goto LABEL_299;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v429->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v152,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        v187 = this->fields.__2__current;
        v188 = this;
        v189 = (_DWORD)v187 - 1;
        if ( (int)v187 >= 1 )
        {
          v190 = 0;
          while ( 1 )
          {
            v191 = &v188->klass + (int)v190;
            v194 = v191[4];
            v193 = (SpotRoadEntity_o **)(v191 + 4);
            v192 = v194;
            if ( !v194 || !v163 )
              goto LABEL_299;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v163,
                                                                       (int32_t)v192->_1.name,
                                                                       0);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v190 >= LODWORD(v188->fields.__2__current) )
              goto LABEL_151;
            v196 = (Il2CppObject *)this;
            QuestTree__SetupSpotRoadInfo(_4__this, *v193, &spotRoadInfo, v195);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_299;
            v203 = *(_QWORD *)&this->fields.__1__state;
            v204 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v203 )
              goto LABEL_299;
            v205 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v205 >= *(_DWORD *)(v203 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v196,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
            }
            else
            {
              v206 = v203 + 8 * v205;
              LODWORD(this->fields.__2__current) = v205 + 1;
              *(_QWORD *)(v206 + 32) = v196;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v206 + 32), (int32_t)v196, v197, v198, v199, v200, v201, v202);
            }
            if ( v189 == v190 )
              break;
            if ( ++v190 >= LODWORD(v188->fields.__2__current) )
              goto LABEL_151;
          }
        }
        v2 = v429;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v429->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v152,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        v207 = this->fields.__2__current;
        v208 = this;
        v209 = (_DWORD)v207 - 1;
        if ( (int)v207 >= 1 )
        {
          v210 = 0;
          while ( 1 )
          {
            v211 = *((_QWORD *)&v208->fields.__4__this + v210);
            if ( !v211 )
              goto LABEL_299;
            if ( !v163 )
              goto LABEL_299;
            v212 = MapControl_MapInfo__AddMapGimmick(v163, *(_DWORD *)(v211 + 16), 0);
            mapGimmickInfo = v212;
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v213);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_299;
            v220 = *(_QWORD *)&this->fields.__1__state;
            v221 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v220 )
              goto LABEL_299;
            v222 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v222 >= *(_DWORD *)(v220 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v212,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
            }
            else
            {
              v223 = v220 + 8 * v222;
              LODWORD(this->fields.__2__current) = v222 + 1;
              *(_QWORD *)(v223 + 32) = v212;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v223 + 32), (int32_t)v212, v214, v215, v216, v217, v218, v219);
            }
            if ( v209 == v210 )
              break;
            if ( (unsigned int)++v210 >= LODWORD(v208->fields.__2__current) )
              goto LABEL_151;
          }
        }
        v149 = v426;
        v150 = v428 + 1;
        if ( v428 + 1 == (_DWORD)v427 )
          goto LABEL_127;
        if ( v150 >= LODWORD(v426->fields.__2__current) )
          goto LABEL_151;
      }
      for ( i = 0; i < LODWORD(v167->fields.__2__current); ++i )
      {
        v170 = &v167->klass + (int)i;
        v173 = v170[4];
        v172 = (SpotEntity_o **)(v170 + 4);
        v171 = v173;
        if ( !v173 || !v163 )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_MapInfo__AddChild(
                                                                   v163,
                                                                   (int32_t)v171->_1.name,
                                                                   0);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v167->fields.__2__current) )
          break;
        v175 = (Il2CppObject *)this;
        QuestTree__SetupSpotInfo(_4__this, *v172, &spotInfo, v174);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_299;
        v182 = *(_QWORD *)&this->fields.__1__state;
        v183 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v182 )
          goto LABEL_299;
        v184 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v184 >= *(_DWORD *)(v182 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v175,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
        }
        else
        {
          v185 = v182 + 8 * v184;
          LODWORD(this->fields.__2__current) = v184 + 1;
          *(_QWORD *)(v185 + 32) = v175;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v185 + 32), (int32_t)v175, v176, v177, v178, v179, v180, v181);
        }
        if ( v168 == i )
          goto LABEL_94;
      }
LABEL_151:
      sub_1C942F8(this);
    }
LABEL_127:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C9403C(p__2__current, 0, v143, v144, v145, v146, v147, v148);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
LABEL_130:
    max_length = v2->fields._warCount_5__19;
    v111 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v111;
  }
  if ( !_4__this )
    goto LABEL_299;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestTree___c_TypeInfo;
  }
  v226 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 40LL);
  if ( !v226 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestTree___c_TypeInfo;
    }
    v227 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v226 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v226, v227, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__46_0__, 0);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__46_0 = (struct System_Comparison_MapControl_WarInfo__o *)v226;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__46_0,
      (int32_t)v226,
      v229,
      v230,
      v231,
      v232,
      v233,
      v234);
  }
  if ( !allWarInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_59164920(
    allWarInfoList,
    v226,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v235 = (Il2CppObject *)sub_1C942E4(QuestTree___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor(v235, 0);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass46_0_o *)v235;
  p__8__1 = &v2->fields.__8__1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, (int32_t)v235, v237, v238, v239, v240, v241, v242);
  v243 = v2->fields._nowTime_5__17;
  v244 = (MapControl_WarInfo_o *)sub_1C942E4(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v244, v243, 0);
  v2->fields._warInfo_5__20 = v244;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields._warInfo_5__20,
    (int32_t)v244,
    v245,
    v246,
    v247,
    v248,
    v249,
    v250);
  v251 = (MapControl_MapInfo_o *)sub_1C942E4(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v251, 0);
  v2->fields._mapInfo_5__21 = v251;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields._mapInfo_5__21,
    (int32_t)v251,
    v252,
    v253,
    v254,
    v255,
    v256,
    v257);
  v258 = (MapControl_SpotInfo_o *)sub_1C942E4(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v258, 0);
  v2->fields._spotInfo_5__22 = v258;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields._spotInfo_5__22,
    (int32_t)v258,
    v259,
    v260,
    v261,
    v262,
    v263,
    v264);
  v265 = (WarEntity_o *)sub_1C942E4(WarEntity_TypeInfo);
  WarEntity___ctor(v265, 0);
  v2->fields._warEnt_5__23 = v265;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields._warEnt_5__23,
    (int32_t)v265,
    v266,
    v267,
    v268,
    v269,
    v270,
    v271);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  v272 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v272;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields._userQuestMaster_5__24,
    (int32_t)v272,
    v273,
    v274,
    v275,
    v276,
    v277,
    v278);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_299;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v279 = !OptionManager__isSavedMemoryMode(0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._questMaster_5__6;
  v280 = v279 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v280;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestMaster__Count((QuestMaster_o *)this, 0);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v281 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v431 = 0;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)NetworkManager_TypeInfo;
    }
    if ( !userQuestMaster_5__24 )
      goto LABEL_299;
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__24,
           &v431,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v431;
      if ( !v431 )
        goto LABEL_299;
      QuestPhase = UserQuestEntity__getQuestPhase(v431, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestEntity__getSpotId_43237940(v281, QuestPhase + 1, 0);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_299;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_299;
      v286 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass46_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&_8__1->fields.__9__2,
          (int32_t)_9__2,
          v288,
          v289,
          v290,
          v291,
          v292,
          v293);
      }
      if ( !v286 )
        goto LABEL_299;
      v294 = System_Collections_Generic_List_object___Find(
               v286,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v429;
      v429->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v294;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v429->fields._spotInfo_5__22,
        (int32_t)v294,
        v295,
        v296,
        v297,
        v298,
        v299,
        v300);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v429->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_299;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0);
      if ( v429->fields._mapInfoNow_5__27 != MapID )
      {
        v429->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, v302);
        v429->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v429->fields._mapInfo_5__21,
          (int32_t)MapInfoByMapID,
          v304,
          v305,
          v306,
          v307,
          v308,
          v309);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v429->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v429->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v429->fields._warInfoNow_5__28 = (int)method;
          mapControlRootInfo = _4__this->fields.mapControlRootInfo;
          if ( mapControlRootInfo )
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, (int32_t)method, 0);
          else
            ChildByWarID = 0;
          v429->fields._warInfo_5__20 = ChildByWarID;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v429->fields._warInfo_5__20,
            (int32_t)ChildByWarID,
            v310,
            v311,
            v312,
            v313,
            v314,
            v315);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v429->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_299;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0);
          v429->fields._warEnt_5__23 = Mine;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v429->fields._warEnt_5__23,
            (int32_t)Mine,
            v319,
            v320,
            v321,
            v322,
            v323,
            v324);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    if ( !v431 )
      goto LABEL_199;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v431;
    if ( !v431 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)UserQuestEntity__HasStatus(v431, 8, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_187;
    if ( !v431 )
      goto LABEL_299;
    if ( v431->fields.challengeNum >= 1 )
    {
LABEL_187:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v431;
    if ( !v431 )
      goto LABEL_299;
    if ( UserQuestEntity__getClearNum(v431, 0) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
LABEL_199:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0);
      v325 = 0;
      goto LABEL_200;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v431 )
      goto LABEL_299;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v431->fields.questId,
                                                               0,
                                                               0);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_299;
    v325 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0);
    if ( !this )
      goto LABEL_299;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_299;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0);
    }
LABEL_200:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_299;
    v332 = this;
    if ( !this )
      goto LABEL_299;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._eventMaster_5__8,
      (int32_t)method,
      v326,
      v327,
      v328,
      v329,
      v330,
      v331);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v332->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v332->fields._questPhaseMaster_5__7,
      (int32_t)spotInfo_5__22,
      v334,
      v335,
      v336,
      v337,
      v338,
      v339);
    if ( !_4__this )
      goto LABEL_299;
    v332->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v332,
                                                                          v340);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_299;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_214;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_299;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)value;
      if ( !value )
        goto LABEL_299;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_214:
        v332->fields.__4__this = 0;
LABEL_218:
        v343 = 1;
        goto LABEL_219;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v281, (MapControl_QuestInfo_o *)v332, v2->fields._warInfoNow_5__28, v342) != 1 )
      goto LABEL_218;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_299;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0);
    v343 = 0;
LABEL_219:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v332, 0) )
    {
      if ( ((v325 | v343) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v332, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestResetMaster___);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)sub_1C94140(long___TypeInfo, 1);
          if ( !this )
            goto LABEL_299;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_151;
          this->fields.__4__this = (struct QuestTree_o *)_1__state;
          if ( !Master_object )
            goto LABEL_299;
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   (System_Int64_array *)this,
                                   (const MethodInfo_345AA9C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v431 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v431, 0) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._spotInfo_5__22;
            if ( !this )
              goto LABEL_299;
            MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
          }
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v332->fields.__1__state, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v332, 0) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v332,
                                                                   0);
        if ( !this )
          goto LABEL_299;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v346 = v2->fields._spotInfo_5__22;
          if ( !v346 )
            goto LABEL_299;
          v346->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_299;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v332,
                                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v348 = v2->fields._spotInfo_5__22;
        if ( !v348 )
          goto LABEL_299;
        v348->fields._IsNext_k__BackingField = 1;
        v349 = v2->fields._mapInfo_5__21;
        if ( !v349 )
          goto LABEL_299;
        v349->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v281, 0x8000000000LL, 0) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_299;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0);
      }
    }
    if ( v431 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)UserQuestEntity__HasStatus(v431, 8, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v431 )
          goto LABEL_299;
        v350 = v431->fields.challengeNum == 0;
      }
      else
      {
        v350 = 0;
      }
    }
    else
    {
      v350 = 1;
    }
    LOBYTE(v332->fields.__8__1) = v350;
    HIDWORD(v332->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_299;
    LODWORD(v332->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_299;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0);
    if ( !this )
      goto LABEL_299;
    v357 = this->fields.__2__current;
    v358 = this;
    v359 = (_DWORD)v357 - 1;
    if ( (int)v357 >= 1 )
    {
      v360 = 0;
      while ( 1 )
      {
        v361 = *((_QWORD *)&v358->fields.__4__this + v360);
        if ( !v361 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v332,
                                                                   *(_DWORD *)(v361 + 16),
                                                                   *(_DWORD *)(v361 + 20),
                                                                   0);
        if ( v359 == v360 )
          goto LABEL_263;
        if ( (unsigned int)++v360 >= LODWORD(v358->fields.__2__current) )
          goto LABEL_151;
      }
LABEL_299:
      sub_1C942F0(this, method);
    }
LABEL_263:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_299;
    v362 = *(_QWORD *)&this->fields.__1__state;
    v363 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v362 )
      goto LABEL_299;
    v364 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v364 >= *(_DWORD *)(v362 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v332,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v363[4] + 192LL) + 112LL));
    }
    else
    {
      v365 = v362 + 8 * v364;
      LODWORD(this->fields.__2__current) = v364 + 1;
      *(_QWORD *)(v365 + 32) = v332;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v365 + 32), (int32_t)v332, v351, v352, v353, v354, v355, v356);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0;
      v424 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C9403C(v424, 0, v366, v367, v368, v369, v370, v371);
      v425 = 2;
      goto LABEL_297;
    }
LABEL_270:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_299;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestTree___c_TypeInfo;
  }
  v373 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 48LL);
  if ( !v373 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)QuestTree___c_TypeInfo;
    }
    v374 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v373 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v373, v374, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__46_1__, 0);
    v375 = QuestTree___c_TypeInfo->static_fields;
    v375->__9__46_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v373;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v375->__9__46_1, (int32_t)v373, v376, v377, v378, v379, v380, v381);
  }
  if ( !allQuestInfoList )
    goto LABEL_299;
  System_Collections_Generic_List_object___Sort_59164920(
    allQuestInfoList,
    v373,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.__8__1, 0, v382, v383, v384, v385, v386, v387);
  v2->fields._warInfo_5__20 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._warInfo_5__20, 0, v388, v389, v390, v391, v392, v393);
  v2->fields._mapInfo_5__21 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._mapInfo_5__21, 0, v394, v395, v396, v397, v398, v399);
  v2->fields._spotInfo_5__22 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._spotInfo_5__22, 0, v400, v401, v402, v403, v404, v405);
  v2->fields._warEnt_5__23 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._warEnt_5__23, 0, v406, v407, v408, v409, v410, v411);
  v2->fields._userQuestMaster_5__24 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields._userQuestMaster_5__24, 0, v412, v413, v414, v415, v416, v417);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_299;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0;
    v424 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
    sub_1C9403C(v424, 0, v418, v419, v420, v421, v422, v423);
    v425 = 3;
LABEL_297:
    LODWORD(v424[-1].fields._ClosedMessage_k__BackingField) = v425;
    return 1;
  }
LABEL_283:
  _4__this->fields.isQuestTreeUpdateFinished = 1;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_299;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_299;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_299;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_299;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_299;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_299;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarAddMaster___);
  if ( !this )
    goto LABEL_299;
  WarAddMaster__DeleteCache((WarAddMaster_o *)this, 0);
  result = 0;
  _4__this->fields.isUseCache = 0;
  return result;
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__46__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeMakeWithOpenCheck_d__46__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeMakeWithOpenCheck_d__46__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v8; // x8
  QuestTree_o *_4__this; // x19
  Il2CppObject *v10; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  struct QuestTree___c__DisplayClass47_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v22; // x0
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
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x1
  DataManager_o *v43; // x0
  Il2CppObject *v44; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x1
  DataManager_o *v53; // x0
  Il2CppObject *v54; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  __int64 v62; // x1
  DataManager_o *v63; // x0
  Il2CppObject *v64; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v65; // x0
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
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  __int64 v93; // x1
  DataManager_o *v94; // x0
  Il2CppObject *v95; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  __int64 v103; // x1
  DataManager_o *v104; // x0
  Il2CppObject *v105; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  __int64 v113; // x0
  __int64 v114; // x1
  System_Collections_Generic_Dictionary_int__object__o *v115; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  Il2CppObject *v123; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v124; // x0
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
  struct QuestTree___c__DisplayClass47_1_o *_8__1; // x8
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
  struct QuestTree___c__DisplayClass47_1_o *v151; // x9
  MapControl_RootInfo_o *v152; // x0
  struct MapControl_WarInfo_o *v153; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v154; // x0
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
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v174; // x8
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
  struct QuestTree___c__DisplayClass47_1_o *v191; // x8
  Il2CppObject *v192; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v194; // x21
  _QWORD *v195; // x0
  Il2CppObject *v196; // x8
  __int64 v197; // x9
  __int64 v198; // x8
  int64_t *v199; // x9
  int64_t v200; // x10
  System_Collections_Generic_List_object__o *v201; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v203; // x1
  _QWORD *v204; // x9
  __int64 size; // x10
  Il2CppClass **v206; // x8
  __int64 v207; // x0
  __int64 v208; // x1
  int32_t v209; // w9
  struct QuestTree___c__DisplayClass47_1_o *v210; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v212; // x0
  __int64 v213; // x1
  SpotRoadEntity_array *v214; // x20
  int v215; // w25
  unsigned int i; // w26
  __int64 v217; // x21
  __int64 v218; // x0
  __int64 v219; // x1
  SpotRoadEntity_o *v220; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v222; // x24
  __int64 v223; // x0
  __int64 v224; // x1
  unsigned int v225; // w0
  __int64 v226; // x1
  System_Collections_Generic_List_object__o *v227; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  MapControl_SpotRoadInfo_o *v229; // x21
  const MethodInfo *v230; // x3
  __int64 v231; // x1
  int32_t v232; // w2
  int32_t v233; // w3
  System_String_o *v234; // x4
  int32_t v235; // w5
  int64_t v236; // x6
  System_String_o *v237; // x7
  System_Collections_Generic_List_object__o *v238; // x0
  struct System_Object_array *v239; // x8
  _QWORD *v240; // x9
  __int64 v241; // x10
  Il2CppClass **v242; // x8
  struct QuestTree___c__DisplayClass47_1_o *v243; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v245; // x0
  __int64 v246; // x1
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  MapGimmickEntity_array *v253; // x20
  int v254; // w24
  unsigned int j; // w25
  __int64 v256; // x21
  __int64 v257; // x0
  __int64 v258; // x1
  MapGimmickEntity_o *v259; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v261; // x23
  __int64 v262; // x0
  __int64 v263; // x1
  unsigned int v264; // w0
  __int64 v265; // x1
  System_Collections_Generic_List_object__o *v266; // x0
  MapControl_MapInfo_o *v267; // x0
  MapControl_MapGimmickInfo_o *v268; // x21
  const MethodInfo *v269; // x2
  __int64 v270; // x1
  int32_t v271; // w2
  int32_t v272; // w3
  System_String_o *v273; // x4
  int32_t v274; // w5
  int64_t v275; // x6
  System_String_o *v276; // x7
  System_Collections_Generic_List_object__o *v277; // x0
  struct System_Object_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  Il2CppClass **v281; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v282; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v283; // x8
  int v284; // w9
  GrandQuestFolderBoardItem_o *p_mapInfo_5__16; // x8
  __int64 v286; // x0
  __int64 v287; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v288; // x8
  int32_t max_length; // w10
  int32_t v290; // w9
  struct System_Action_o *endCallback; // x9
  __int64 v292; // x0
  __int64 v293; // x1
  struct MapControl_WarInfo_o *v294; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v296; // x0
  int32_t v297; // w2
  int32_t v298; // w3
  System_String_o *v299; // x4
  int32_t v300; // w5
  int64_t v301; // x6
  System_String_o *v302; // x7
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v304; // x10
  MapEntity_o *v305; // x9
  struct QuestTree___c__DisplayClass47_1_o *v306; // x22
  struct MapControl_WarInfo_o *v307; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v310; // w2
  int32_t v311; // w3
  System_String_o *v312; // x4
  int32_t v313; // w5
  int64_t v314; // x6
  System_String_o *v315; // x7
  struct MapControl_WarInfo_o *v316; // x8
  System_Collections_Generic_List_object__o *v317; // x0
  struct QuestTree___c__DisplayClass47_1_o *v318; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v321; // w2
  int32_t v322; // w3
  System_String_o *v323; // x4
  int32_t v324; // w5
  int64_t v325; // x6
  System_String_o *v326; // x7
  __int64 v327; // x0
  __int64 v328; // x1
  System_Collections_Generic_List_object__o *v329; // x0
  struct QuestTree___c__DisplayClass47_1_o *v330; // x8
  MapControl_WarInfo_o *v331; // x0
  struct MapControl_MapInfo_o *v332; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v333; // x0
  int32_t v334; // w2
  int32_t v335; // w3
  System_String_o *v336; // x4
  int32_t v337; // w5
  int64_t v338; // x6
  System_String_o *v339; // x7
  __int64 v340; // x1
  int32_t v341; // w2
  int32_t v342; // w3
  System_String_o *v343; // x4
  int32_t v344; // w5
  int64_t v345; // x6
  System_String_o *v346; // x7
  System_Collections_Generic_List_object__o *v347; // x0
  struct System_Object_array *v348; // x8
  Il2CppObject *v349; // x1
  _QWORD *v350; // x9
  __int64 v351; // x10
  Il2CppClass **v352; // x8
  __int64 v353; // x0
  __int64 v354; // x1
  System_Collections_Generic_List_object__o *v355; // x20
  QuestTree___c_c *v356; // x8
  System_Comparison_T__o *_9__47_2; // x21
  Il2CppObject *v358; // x22
  struct QuestTree___c_StaticFields *v359; // x0
  int32_t v360; // w2
  int32_t v361; // w3
  System_String_o *v362; // x4
  int32_t v363; // w5
  int64_t v364; // x6
  System_String_o *v365; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v366; // x0
  int32_t v367; // w2
  int32_t v368; // w3
  System_String_o *v369; // x4
  int32_t v370; // w5
  int64_t v371; // x6
  System_String_o *v372; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v373; // x0
  int32_t v374; // w2
  int32_t v375; // w3
  System_String_o *v376; // x4
  int32_t v377; // w5
  int64_t v378; // x6
  System_String_o *v379; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v380; // x0
  int32_t v381; // w2
  int32_t v382; // w3
  System_String_o *v383; // x4
  int32_t v384; // w5
  int64_t v385; // x6
  System_String_o *v386; // x7
  Il2CppObject *v387; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v388; // x0
  int32_t v389; // w2
  int32_t v390; // w3
  System_String_o *v391; // x4
  int32_t v392; // w5
  int64_t v393; // x6
  System_String_o *v394; // x7
  int64_t v395; // x21
  MapControl_WarInfo_o *v396; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v397; // x0
  int32_t v398; // w2
  int32_t v399; // w3
  System_String_o *v400; // x4
  int32_t v401; // w5
  int64_t v402; // x6
  System_String_o *v403; // x7
  MapControl_MapInfo_o *v404; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v405; // x0
  int32_t v406; // w2
  int32_t v407; // w3
  System_String_o *v408; // x4
  int32_t v409; // w5
  int64_t v410; // x6
  System_String_o *v411; // x7
  MapControl_SpotInfo_o *v412; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v413; // x0
  int32_t v414; // w2
  int32_t v415; // w3
  System_String_o *v416; // x4
  int32_t v417; // w5
  int64_t v418; // x6
  System_String_o *v419; // x7
  WarEntity_o *v420; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v421; // x0
  int32_t v422; // w2
  int32_t v423; // w3
  System_String_o *v424; // x4
  int32_t v425; // w5
  int64_t v426; // x6
  System_String_o *v427; // x7
  __int64 v428; // x1
  DataManager_o *v429; // x0
  Il2CppObject *v430; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v431; // x0
  int32_t v432; // w2
  int32_t v433; // w3
  System_String_o *v434; // x4
  int32_t v435; // w5
  int64_t v436; // x6
  System_String_o *v437; // x7
  Il2CppObject *Master_object; // x0
  __int64 v439; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v440; // x8
  struct QuestTree___c__DisplayClass47_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v443; // x1
  int32_t v444; // w9
  struct QuestTree___c__DisplayClass47_6_o *v445; // x20
  System_Collections_Generic_List_int__o *v446; // x21
  __int64 v447; // x0
  __int64 v448; // x1
  int32_t v449; // w2
  int32_t v450; // w3
  System_String_o *v451; // x4
  int32_t v452; // w5
  int64_t v453; // x6
  System_String_o *v454; // x7
  __int64 v455; // x1
  System_Collections_Generic_List_object__o *v456; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v457; // x9
  __int128 v458; // q0
  GrandQuestFolderBoardItem_o *p__7__wrap24; // x0
  int32_t v460; // w2
  int32_t v461; // w3
  System_String_o *v462; // x4
  int32_t v463; // w5
  int64_t v464; // x6
  System_String_o *v465; // x7
  const MethodInfo *v466; // x1
  bool v467; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v468; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v471; // x1
  int32_t v472; // w2
  int32_t v473; // w3
  System_String_o *v474; // x4
  int32_t v475; // w5
  int64_t v476; // x6
  System_String_o *v477; // x7
  struct QuestTree___c__DisplayClass47_0_o *v478; // x9
  struct QuestTree___c__DisplayClass47_6_o *v479; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v482; // x9
  _QWORD *v483; // x10
  __int64 v484; // x11
  unsigned __int64 v485; // t2
  __int64 v486; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v487; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v489; // x20
  Il2CppObject *v490; // x22
  System_Func_object__bool__o *v491; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v492; // x0
  System_Object_array *v493; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v494; // x0
  int32_t v495; // w2
  int32_t v496; // w3
  System_String_o *v497; // x4
  int32_t v498; // w5
  int64_t v499; // x6
  System_String_o *v500; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v501; // x8
  __int64 mapIdx_5__12; // x0
  int32_t mapCount_5__13; // w9
  struct QuestTree___c__DisplayClass47_1_o *v504; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v506; // x0
  __int64 v507; // x1
  const MethodInfo *v508; // x3
  SpotEntity_array *v509; // x20
  int v510; // w25
  unsigned int k; // w26
  __int64 v512; // x21
  __int64 v513; // x0
  __int64 v514; // x1
  SpotEntity_o *v515; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v517; // x24
  __int64 v518; // x0
  __int64 v519; // x1
  unsigned int v520; // w0
  __int64 v521; // x1
  System_Collections_Generic_List_object__o *v522; // x0
  MapControl_MapInfo_o *v523; // x0
  MapControl_SpotInfo_o *v524; // x21
  const MethodInfo *v525; // x3
  __int64 v526; // x1
  int32_t v527; // w2
  int32_t v528; // w3
  System_String_o *v529; // x4
  int32_t v530; // w5
  int64_t v531; // x6
  System_String_o *v532; // x7
  System_Collections_Generic_List_object__o *v533; // x0
  struct System_Object_array *v534; // x8
  _QWORD *v535; // x9
  __int64 v536; // x10
  Il2CppClass **v537; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v538; // x0
  System_Object_array *v539; // x0
  __int64 v540; // x1
  int32_t v541; // w2
  int32_t v542; // w3
  System_String_o *v543; // x4
  int32_t v544; // w5
  int64_t v545; // x6
  System_String_o *v546; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v547; // x20
  __int64 v548; // x21
  QuestTree___c_c *v549; // x8
  System_Func_object__int__o *_9__47_6; // x22
  Il2CppObject *v551; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v553; // w2
  int32_t v554; // w3
  System_String_o *v555; // x4
  int32_t v556; // w5
  int64_t v557; // x6
  System_String_o *v558; // x7
  System_Collections_Generic_IEnumerable_T__o *v559; // x23
  System_Collections_Generic_HashSet_int__o *v560; // x22
  __int64 v561; // x0
  __int64 v562; // x1
  int32_t v563; // w2
  int32_t v564; // w3
  System_String_o *v565; // x4
  int32_t v566; // w5
  int64_t v567; // x6
  System_String_o *v568; // x7
  System_Collections_Generic_List_T__o *v569; // x22
  System_Func_object__bool__o *v570; // x23
  __int64 v571; // x1
  System_Collections_Generic_List_object__o *v572; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v573; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v576; // x20
  struct QuestTree___c__DisplayClass47_6_o *v577; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v579; // x0
  struct QuestTree___c__DisplayClass47_6_o *v580; // x8
  __int64 v581; // x1
  int32_t QuestPhase; // w21
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *SpotId_43237940; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v585; // x22
  struct QuestTree___c__DisplayClass47_6_o *v586; // x25
  System_Collections_Generic_List_object__o *v587; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v589; // w2
  int32_t v590; // w3
  System_String_o *v591; // x4
  int32_t v592; // w5
  int64_t v593; // x6
  System_String_o *v594; // x7
  Il2CppObject *v595; // x0
  int32_t v596; // w2
  int32_t v597; // w3
  System_String_o *v598; // x4
  int32_t v599; // w5
  int64_t v600; // x6
  System_String_o *v601; // x7
  __int64 v602; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  const MethodInfo *v604; // x2
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v606; // x0
  int32_t v607; // w2
  int32_t v608; // w3
  System_String_o *v609; // x4
  int32_t v610; // w5
  int64_t v611; // x6
  System_String_o *v612; // x7
  __int64 v613; // x1
  MapControl_MapInfo_o *v614; // x0
  __int64 v615; // x1
  int32_t v616; // w2
  int32_t v617; // w3
  System_String_o *v618; // x4
  int32_t v619; // w5
  int64_t v620; // x6
  System_String_o *v621; // x7
  MapEntity_o *v622; // x8
  MapControl_WarInfo_o *ChildByWarID; // x1
  __int64 v624; // x1
  MapControl_WarInfo_o *v625; // x0
  struct WarEntity_o *v626; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v627; // x0
  int32_t v628; // w2
  int32_t v629; // w3
  System_String_o *v630; // x4
  int32_t v631; // w5
  int64_t v632; // x6
  System_String_o *v633; // x7
  struct QuestTree___c__DisplayClass47_6_o *v634; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v637; // w2
  int32_t v638; // w3
  System_String_o *v639; // x4
  int32_t v640; // w5
  int64_t v641; // x6
  System_String_o *v642; // x7
  unsigned int v643; // w0
  __int64 v644; // x1
  System_Collections_Generic_List_object__o *v645; // x0
  MapControl_WarInfo_o *v646; // x0
  __int64 v647; // x1
  _BOOL8 HasStatus; // x0
  __int64 v649; // x1
  MapControl_WarInfo_o *v650; // x0
  WarEntity_o *v651; // x0
  __int64 v652; // x1
  int v653; // w23
  bool v654; // cc
  __int64 v655; // x1
  struct QuestTree___c__DisplayClass47_6_o *v656; // x9
  MapControl_WarInfo_o *v657; // x0
  struct QuestTree___c__DisplayClass47_6_o *v658; // x8
  MapControl_SpotInfo_o *v659; // x0
  MapControl_QuestInfo_o *v660; // x0
  int32_t v661; // w2
  int32_t v662; // w3
  System_String_o *v663; // x4
  int32_t v664; // w5
  int64_t v665; // x6
  System_String_o *v666; // x7
  struct MapControl_WarInfo_o *v667; // x1
  MapControl_QuestInfo_o *v668; // x22
  int32_t v669; // w8
  struct MapControl_SpotInfo_o *v670; // x1
  int32_t v671; // w2
  int32_t v672; // w3
  System_String_o *v673; // x4
  int32_t v674; // w5
  int64_t v675; // x6
  System_String_o *v676; // x7
  const MethodInfo *v677; // x2
  __int64 v678; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v681; // x1
  struct WarEntity_o *v682; // x8
  struct QuestTree___c__DisplayClass47_6_o *v683; // x9
  struct WarEntity_o *v684; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v685; // x0
  _BOOL8 v686; // x0
  __int64 v687; // x1
  const MethodInfo *v688; // x4
  struct QuestTree___c__DisplayClass47_6_o *v689; // x8
  __int64 v690; // x1
  MapControl_WarInfo_o *v691; // x0
  int v692; // w24
  __int64 v693; // x1
  __int64 v694; // x1
  Il2CppObject *v695; // x23
  __int64 v696; // x0
  struct QuestTree___c__DisplayClass47_6_o *v697; // x8
  _BOOL4 isEntityExistsFromId; // w8
  MapControl_SpotInfo_o *v699; // x0
  MapControl_SpotInfo_o *v700; // x0
  QuestEntity_o *v701; // x0
  __int64 v702; // x1
  _BOOL8 HasFlag; // x0
  __int64 v704; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v705; // x8
  struct MapControl_SpotInfo_o *v706; // x9
  struct MapControl_MapInfo_o *v707; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v709; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v710; // x8
  struct MapControl_SpotInfo_o *v711; // x9
  struct MapControl_MapInfo_o *v712; // x8
  MapControl_SpotInfo_o *v713; // x0
  UserQuestEntity_o *v714; // x0
  bool v715; // w8
  struct QuestTree___c__DisplayClass47_6_o *v716; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v719; // x1
  struct QuestTree___c__DisplayClass47_6_o *v720; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v722; // x0
  __int64 v723; // x1
  int32_t v724; // w2
  int32_t v725; // w3
  System_String_o *v726; // x4
  int32_t v727; // w5
  int64_t v728; // x6
  System_String_o *v729; // x7
  _QWORD *v730; // x20
  __int64 v731; // x8
  int v732; // w21
  int v733; // w23
  __int64 v734; // x8
  System_Collections_Generic_List_object__o *v735; // x0
  struct System_Object_array *v736; // x8
  _QWORD *v737; // x9
  __int64 v738; // x10
  Il2CppClass **v739; // x8
  int32_t v740; // w2
  int32_t v741; // w3
  System_String_o *v742; // x4
  int32_t v743; // w5
  int64_t v744; // x6
  System_String_o *v745; // x7
  System_Collections_Generic_List_object__o *v746; // x20
  QuestTree___c_c *v747; // x8
  System_Comparison_T__o *_9__47_11; // x21
  Il2CppObject *v749; // x22
  struct QuestTree___c_StaticFields *v750; // x0
  int32_t v751; // w2
  int32_t v752; // w3
  System_String_o *v753; // x4
  int32_t v754; // w5
  int64_t v755; // x6
  System_String_o *v756; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v757; // x0
  int32_t v758; // w2
  int32_t v759; // w3
  System_String_o *v760; // x4
  int32_t v761; // w5
  int64_t v762; // x6
  System_String_o *v763; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v764; // x0
  int32_t v765; // w2
  int32_t v766; // w3
  System_String_o *v767; // x4
  int32_t v768; // w5
  int64_t v769; // x6
  System_String_o *v770; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v771; // x0
  int32_t v772; // w2
  int32_t v773; // w3
  System_String_o *v774; // x4
  int32_t v775; // w5
  int64_t v776; // x6
  System_String_o *v777; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v778; // x0
  int32_t v779; // w2
  int32_t v780; // w3
  System_String_o *v781; // x4
  int32_t v782; // w5
  int64_t v783; // x6
  System_String_o *v784; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v785; // x0
  int32_t v786; // w2
  int32_t v787; // w3
  System_String_o *v788; // x4
  int32_t v789; // w5
  int64_t v790; // x6
  System_String_o *v791; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v792; // x0
  int32_t v793; // w2
  int32_t v794; // w3
  System_String_o *v795; // x4
  int32_t v796; // w5
  int64_t v797; // x6
  System_String_o *v798; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v799; // x0
  int32_t v800; // w2
  int32_t v801; // w3
  System_String_o *v802; // x4
  int32_t v803; // w5
  int64_t v804; // x6
  System_String_o *v805; // x7
  Il2CppObject *v806; // x0
  __int64 v807; // x1
  int32_t v808; // w2
  int32_t v809; // w3
  System_String_o *v810; // x4
  int32_t v811; // w5
  int64_t v812; // x6
  System_String_o *v813; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v814; // x0
  EventStatusQuestMaster_o *v815; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_T__o v816[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v817; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o **v818; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v820; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v824; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *v826; // [xsp+88h] [xbp-68h] BYREF

  v8 = this;
  v826 = this;
  if ( (byte_4D29564 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_1C94098(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1C94098(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestResetMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
    sub_1C94098(&Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1C94098(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_1C94098(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_1C94098(&System_Func_WarEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor___78973968);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&MapControl_MapInfo_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C94098(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&MapControl_SpotInfo_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__47_11__);
    sub_1C94098(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__47_2__);
    sub_1C94098(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__47_6__);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_1C94098(&QuestTree___c__DisplayClass47_0_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_1C94098(&QuestTree___c__DisplayClass47_1_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_1C94098(&QuestTree___c__DisplayClass47_2_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_1C94098(&QuestTree___c__DisplayClass47_3_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_1C94098(&QuestTree___c__DisplayClass47_4_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_1C94098(&QuestTree___c__DisplayClass47_5_TypeInfo);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_1C94098(&Method_QuestTree___c__DisplayClass47_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_1C94098(&QuestTree___c__DisplayClass47_6_TypeInfo);
    sub_1C94098(&QuestTree___c_TypeInfo);
    sub_1C94098(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *)sub_1C94098(&MapControl_WarInfo_TypeInfo);
    v8 = v826;
    byte_4D29564 = 1;
  }
  v824 = 0;
  entity = 0;
  spotRoadInfo = 0;
  spotInfo = 0;
  v820 = 0;
  mapGimmickInfo = 0;
  v817 = 0;
  v818 = &v826;
  value = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C942E4(QuestTree___c__DisplayClass47_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v11 = v826;
      v826->fields.__8__2 = (struct QuestTree___c__DisplayClass47_0_o *)v10;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v11->fields.__8__2, (int32_t)v10, v12, v13, v14, v15, v16, v17);
      _8__2 = v826->fields.__8__2;
      if ( !_8__2 )
        sub_1C942F0(v18, v19);
      _8__2->fields.targetWarId = v826->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v22 = v826;
      v826->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v22->fields._dataManager_5__2,
        (int32_t)Instance,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      dataManager_5__2 = v826->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1C942F0(0, v29);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapMaster___);
      v33 = v826->fields._dataManager_5__2;
      if ( !v33 )
        sub_1C942F0(0, v31);
      v34 = DataManager__GetMasterData_object_(
              v33,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotMaster___);
      v35 = v826;
      v826->fields._spotMaster_5__3 = (struct SpotMaster_o *)v34;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v35->fields._spotMaster_5__3,
        (int32_t)v34,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v43 = v826->fields._dataManager_5__2;
      if ( !v43 )
        sub_1C942F0(0, v42);
      v44 = DataManager__GetMasterData_object_(
              v43,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v45 = v826;
      v826->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v44;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v45->fields._blankEarthSpotMaster_5__4,
        (int32_t)v44,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      v53 = v826->fields._dataManager_5__2;
      if ( !v53 )
        sub_1C942F0(0, v52);
      v54 = DataManager__GetMasterData_object_(
              v53,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
      v55 = v826;
      v826->fields._questMaster_5__5 = (struct QuestMaster_o *)v54;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v55->fields._questMaster_5__5,
        (int32_t)v54,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      v63 = v826->fields._dataManager_5__2;
      if ( !v63 )
        sub_1C942F0(0, v62);
      v64 = DataManager__GetMasterData_object_(
              v63,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v65 = v826;
      v826->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v64;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v65->fields._questPhaseMaster_5__6,
        (int32_t)v64,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      v73 = v826->fields._dataManager_5__2;
      if ( !v73 )
        sub_1C942F0(0, v72);
      v75 = DataManager__GetMasterData_object_(
              v73,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
      v76 = v826->fields._dataManager_5__2;
      if ( !v76 )
        sub_1C942F0(0, v74);
      v78 = DataManager__GetMasterData_object_(
              v76,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v79 = v826->fields._dataManager_5__2;
      if ( !v79 )
        sub_1C942F0(0, v77);
      v81 = DataManager__GetMasterData_object_(
              v79,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v82 = v826->fields._dataManager_5__2;
      if ( !v82 )
        sub_1C942F0(0, v80);
      v815 = (EventStatusQuestMaster_o *)DataManager__GetMasterData_object_(
                                           v82,
                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v84 = v826->fields._dataManager_5__2;
      if ( !v84 )
        sub_1C942F0(0, v83);
      v85 = DataManager__GetMasterData_object_(
              v84,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v86 = v826;
      v826->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v85;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v86->fields._spotRoadMaster_5__7,
        (int32_t)v85,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      v94 = v826->fields._dataManager_5__2;
      if ( !v94 )
        sub_1C942F0(0, v93);
      v95 = DataManager__GetMasterData_object_(
              v94,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v96 = v826;
      v826->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v95;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v96->fields._mapGimmickMaster_5__8,
        (int32_t)v95,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
      v104 = v826->fields._dataManager_5__2;
      if ( !v104 )
        sub_1C942F0(0, v103);
      v105 = DataManager__GetMasterData_object_(
               v104,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v106 = v826;
      v826->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v105;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v106->fields._questPickupMaster_5__9,
        (int32_t)v105,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      if ( !_4__this )
        sub_1C942F0(v113, v114);
      _4__this->fields.isQuestTreeUpdateFinished = 0;
      v115 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v115,
        (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v116 = v826;
      v826->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v115;
      sub_1C9403C(
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
      v826->fields._nowTime_5__11 = NetworkManager__getTime(0);
      v123 = (Il2CppObject *)sub_1C942E4(QuestTree___c__DisplayClass47_1_TypeInfo);
      System_Object___ctor(v123, 0);
      v124 = v826;
      v826->fields.__8__1 = (struct QuestTree___c__DisplayClass47_1_o *)v123;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v124->fields.__8__1,
        (int32_t)v123,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      v132 = v826->fields._dataManager_5__2;
      if ( !v132 )
        sub_1C942F0(0, v131);
      v133 = DataManager__GetMasterData_object_(
               v132,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v133 )
        sub_1C942F0(0, v134);
      Entitys = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v133,
                                                                       (const MethodInfo_345A744 *)Method_DataMasterBase_WarMaster__WarEntity__int__getEntitys__);
      v136 = (Il2CppObject *)v826->fields.__8__2;
      v137 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v137,
        v136,
        Method_QuestTree___c__DisplayClass47_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0);
      v138 = System_Linq_Enumerable__SingleOrDefault_object__52273584(
               Entitys,
               (System_Func_TSource__bool__o *)v137,
               (const MethodInfo_31DA1B0 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v138 )
        sub_1C942F0(0, v139);
      _8__1 = v826->fields.__8__1;
      if ( !_8__1 )
        sub_1C942F0(v138, v139);
      klass_low = LODWORD(v138[1].klass);
      _8__1->fields.warId = klass_low;
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1C942F0(0, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v144 = (Il2CppObject *)v826->fields.__8__1;
      v145 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v145,
        v144,
        Method_QuestTree___c__DisplayClass47_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0);
      if ( !allWarInfoList )
        sub_1C942F0(v146, v147);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v145,
                (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v149 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v150 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v150 )
          sub_1C942F0(0, v149);
        System_Collections_Generic_List_object___RemoveAt(
          v150,
          v149,
          (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v151 = v826->fields.__8__1;
      if ( !v151 )
        sub_1C942F0(Index, v149);
      v152 = _4__this->fields.mapControlRootInfo;
      if ( !v152 )
        sub_1C942F0(0, v149);
      v153 = MapControl_RootInfo__AddChild(v152, v151->fields.warId, v826->fields._nowTime_5__11, 0);
      v154 = v826;
      v826->fields._warInfo_5__14 = v153;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v154->fields._warInfo_5__14,
        (int32_t)v153,
        v155,
        v156,
        v157,
        v158,
        v159,
        v160);
      warInfo_5__14 = v826->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1C942F0(0, v161);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0) )
      {
        v170 = v826->fields._warInfo_5__14;
        if ( !v170 )
          sub_1C942F0(0, v163);
        EventId = MapControl_WarInfo__GetEventId(v170, 0);
        if ( !v75 )
          sub_1C942F0(EventId, v172);
        v173 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v75,
                 &entity,
                 EventId,
                 (const MethodInfo_345B50C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v173 )
        {
          if ( !entity )
            sub_1C942F0(v173, v163);
          v174 = v826;
          nowTime_5__11 = v826->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v176 = v826->fields._warInfo_5__14;
            if ( !v176 )
              sub_1C942F0(0, v163);
            MapControl_WarInfo__SetStatusCheckFlag(v176, 1, 0, 0);
            v174 = v826;
          }
          v177 = v174->fields._warInfo_5__14;
          if ( !v177 )
            sub_1C942F0(0, v163);
          v178 = MapControl_WarInfo__GetEventId(v177, 0);
          if ( !v78 )
            sub_1C942F0(v178, v179);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v78,
                 &v824,
                 v178,
                 (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v824 )
              sub_1C942F0(0, v180);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v824, 0x2000000, 0) )
            {
              if ( !entity )
                sub_1C942F0(0, v181);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v826->fields._nowTime_5__11, 0) )
              {
                v183 = v826->fields._warInfo_5__14;
                if ( !v183 )
                  sub_1C942F0(0, v182);
                v184 = MapControl_WarInfo__GetEventId(v183, 0);
                if ( !v81 )
                  sub_1C942F0(v184, (unsigned int)v184);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v81, v184, 0);
                if ( NowEntity )
                {
                  v187 = v826->fields._warInfo_5__14;
                  if ( !v187 )
                    sub_1C942F0(0, v185);
                  v188 = (unsigned int)MapControl_WarInfo__GetEventId(v187, 0);
                  if ( !v815 )
                    sub_1C942F0(0, v188);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        v815,
                                        v188,
                                        NowEntity->fields.statusId,
                                        0);
                  v191 = v826->fields.__8__1;
                  if ( !v191 )
                    sub_1C942F0(MismatchQuestList, v190);
                  v192 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v826->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1C942F0(0, v190);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v191->fields.warId,
                    v192,
                    (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v194 = v826->fields._nowTime_5__11;
          v195 = (_QWORD *)sub_1C94140(long___TypeInfo, 3);
          v196 = entity;
          if ( !entity )
            sub_1C942F0(v195, v163);
          if ( !v195 )
            sub_1C942F0(0, v163);
          v197 = v195[3];
          if ( !(_DWORD)v197 )
            sub_1C942F8(v195);
          v195[4] = entity[5].klass;
          if ( (_DWORD)v197 == 1 )
            sub_1C942F8(v195);
          v195[5] = v196[5].monitor;
          if ( (unsigned int)v197 <= 2 )
            sub_1C942F8(v195);
          v195[6] = v196[6].monitor;
          if ( (int)v197 >= 1 )
          {
            v198 = (unsigned int)v197;
            v199 = v195 + 4;
            do
            {
              v200 = *v199;
              if ( *v199 > v194 && _4__this->fields.forceUpdateTime > v200 )
                _4__this->fields.forceUpdateTime = v200;
              --v198;
              ++v199;
            }
            while ( v198 );
          }
        }
      }
      v201 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v201 )
        sub_1C942F0(0, v163);
      items = v201->fields._items;
      v203 = (Il2CppObject *)v826->fields._warInfo_5__14;
      v204 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v201->fields._version;
      if ( !items )
        sub_1C942F0(v201, v203);
      size = v201->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v201,
          v203,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
      }
      else
      {
        v206 = &items->obj.klass + size;
        v201->fields._size = size + 1;
        v206[4] = (Il2CppClass *)v203;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v206 + 4), (int32_t)v203, v164, v165, v166, v167, v168, v169);
      }
      v294 = v826->fields._warInfo_5__14;
      if ( !v294 )
        sub_1C942F0(v207, v208);
      if ( !MasterData_object )
        sub_1C942F0(v207, v208);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v294->fields.warId, 0);
      v296 = v826;
      v826->fields._mapList_5__15 = List;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v296->fields._mapList_5__15,
        (int32_t)List,
        v297,
        v298,
        v299,
        v300,
        v301,
        v302);
      v288 = v826;
      mapList_5__15 = v826->fields._mapList_5__15;
      v826->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1C942F0(v286, v287);
      max_length = mapList_5__15->max_length;
      v290 = 0;
      v288->fields._mapCount_5__13 = max_length;
      goto LABEL_122;
    case 1:
      v210 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v210 )
        sub_1C942F0(this, method);
      spotRoadMaster_5__7 = v8->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1C942F0(0, method);
      v212 = SpotRoadMaster__getList(spotRoadMaster_5__7, v210->fields.mapId, 0);
      v214 = v212;
      if ( !v212 )
        sub_1C942F0(0, v213);
      v215 = v212->max_length;
      if ( v215 >= 1 )
      {
        for ( i = 0; i != v215; ++i )
        {
          v217 = sub_1C942E4(QuestTree___c__DisplayClass47_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v217, 0);
          if ( i >= LODWORD(v214->max_length) )
            sub_1C942F8(v218);
          v220 = v214->m_Items[i];
          if ( !v220 )
            sub_1C942F0(v218, v219);
          if ( !v217 )
            sub_1C942F0(v218, v219);
          *(_DWORD *)(v217 + 16) = v220->fields.id;
          if ( !_4__this )
            sub_1C942F0(v218, v219);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v222 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v222,
            (Il2CppObject *)v217,
            Method_QuestTree___c__DisplayClass47_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0);
          if ( !allSpotRoadInfoList )
            sub_1C942F0(v223, v224);
          v225 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v222,
                   (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v226 = v225;
          if ( v225 != -1 )
          {
            v227 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v227 )
              sub_1C942F0(0, v226);
            System_Collections_Generic_List_object___RemoveAt(
              v227,
              v226,
              (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v826->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1C942F0(0, v226);
          v229 = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v217 + 16), 0);
          spotRoadInfo = v229;
          QuestTree__SetupSpotRoadInfo(_4__this, v220, &spotRoadInfo, v230);
          v238 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v238 )
            sub_1C942F0(0, v231);
          v239 = v238->fields._items;
          v240 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v238->fields._version;
          if ( !v239 )
            sub_1C942F0(v238, v231);
          v241 = v238->fields._size;
          if ( (unsigned int)v241 >= LODWORD(v239->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v238,
              (Il2CppObject *)v229,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
          }
          else
          {
            v242 = &v239->obj.klass + v241;
            v238->fields._size = v241 + 1;
            v242[4] = (Il2CppClass *)v229;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v242 + 4), (int32_t)v229, v232, v233, v234, v235, v236, v237);
          }
        }
      }
      v243 = v826->fields.__8__1;
      if ( !v243 )
        sub_1C942F0(v212, v213);
      mapGimmickMaster_5__8 = v826->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1C942F0(0, v213);
      v245 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v243->fields.mapId, 0);
      v253 = v245;
      if ( !v245 )
        sub_1C942F0(0, v246);
      v254 = v245->max_length;
      if ( v254 >= 1 )
      {
        for ( j = 0; j != v254; ++j )
        {
          v256 = sub_1C942E4(QuestTree___c__DisplayClass47_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v256, 0);
          if ( j >= LODWORD(v253->max_length) )
            sub_1C942F8(v257);
          v259 = v253->m_Items[j];
          if ( !v259 )
            sub_1C942F0(v257, v258);
          if ( !v256 )
            sub_1C942F0(v257, v258);
          *(_DWORD *)(v256 + 16) = v259->fields.id;
          if ( !_4__this )
            sub_1C942F0(v257, v258);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v261 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v261,
            (Il2CppObject *)v256,
            Method_QuestTree___c__DisplayClass47_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0);
          if ( !allMapGimmickInfoList )
            sub_1C942F0(v262, v263);
          v264 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v261,
                   (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v265 = v264;
          if ( v264 != -1 )
          {
            v266 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v266 )
              sub_1C942F0(0, v265);
            System_Collections_Generic_List_object___RemoveAt(
              v266,
              v265,
              (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v267 = v826->fields._mapInfo_5__16;
          if ( !v267 )
            sub_1C942F0(0, v265);
          v268 = MapControl_MapInfo__AddMapGimmick(v267, *(_DWORD *)(v256 + 16), 0);
          mapGimmickInfo = v268;
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v269);
          v277 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v277 )
            sub_1C942F0(0, v270);
          v278 = v277->fields._items;
          v279 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v277->fields._version;
          if ( !v278 )
            sub_1C942F0(v277, v270);
          v280 = v277->fields._size;
          if ( (unsigned int)v280 >= LODWORD(v278->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v277,
              (Il2CppObject *)v268,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
          }
          else
          {
            v281 = &v278->obj.klass + v280;
            v277->fields._size = v280 + 1;
            v281[4] = (Il2CppClass *)v268;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v281 + 4), (int32_t)v268, v271, v272, v273, v274, v275, v276);
          }
        }
      }
      v282 = v826;
      v826->fields.__2__current = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v282->fields.__2__current, 0, v247, v248, v249, v250, v251, v252);
      v283 = v826;
      v284 = 2;
      goto LABEL_334;
    case 2:
      v8->fields._mapInfo_5__16 = 0;
      p_mapInfo_5__16 = (GrandQuestFolderBoardItem_o *)&v8->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-2].fields._ClosedMessage_k__BackingField) = -1;
      sub_1C9403C(p_mapInfo_5__16, 0, v2, v3, v4, v5, v6, v7);
      v288 = v826;
      max_length = v826->fields._mapCount_5__13;
      v290 = v826->fields._mapIdx_5__12 + 1;
      v826->fields._mapIdx_5__12 = v290;
LABEL_122:
      if ( v290 < max_length )
      {
        v304 = v288->fields._mapList_5__15;
        if ( !v304 )
          sub_1C942F0(v286, v287);
        if ( (unsigned int)v290 >= LODWORD(v304->max_length) )
          sub_1C942F8(v286);
        v305 = v304->m_Items[v290];
        if ( !v305 )
          sub_1C942F0(v286, v287);
        v306 = v288->fields.__8__1;
        if ( !v306 )
          sub_1C942F0(v286, v287);
        v306->fields.mapId = v305->fields.id;
        v307 = v288->fields._warInfo_5__14;
        if ( !v307 )
          sub_1C942F0(v286, v287);
        mapInfoList = (System_Collections_Generic_List_object__o *)v307->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v306->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v306,
              Method_QuestTree___c__DisplayClass47_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0);
            v306->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v306->fields.__9__3,
              (int32_t)_9__3,
              v310,
              v311,
              v312,
              v313,
              v314,
              v315);
          }
          v286 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v287 = (unsigned int)v286;
          if ( (_DWORD)v286 != -1 )
          {
            v316 = v826->fields._warInfo_5__14;
            if ( !v316 )
              sub_1C942F0(v286, (unsigned int)v286);
            v317 = (System_Collections_Generic_List_object__o *)v316->fields.mapInfoList;
            if ( !v317 )
              sub_1C942F0(0, v287);
            System_Collections_Generic_List_object___RemoveAt(
              v317,
              v287,
              (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1C942F0(v286, v287);
        v318 = v826->fields.__8__1;
        if ( !v318 )
          sub_1C942F0(v286, v287);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v318->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v318,
            Method_QuestTree___c__DisplayClass47_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0);
          v318->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v318->fields.__9__4,
            (int32_t)_9__4,
            v321,
            v322,
            v323,
            v324,
            v325,
            v326);
        }
        if ( !allMapInfoList )
          sub_1C942F0(v286, v287);
        v327 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v328 = (unsigned int)v327;
        if ( (_DWORD)v327 != -1 )
        {
          v329 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v329 )
            sub_1C942F0(0, v328);
          System_Collections_Generic_List_object___RemoveAt(
            v329,
            v328,
            (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v330 = v826->fields.__8__1;
        if ( !v330 )
          sub_1C942F0(v327, v328);
        v331 = v826->fields._warInfo_5__14;
        if ( !v331 )
          sub_1C942F0(0, v328);
        v332 = MapControl_WarInfo__AddChild(v331, v330->fields.mapId, 0);
        v333 = v826;
        v826->fields._mapInfo_5__16 = v332;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v333->fields._mapInfo_5__16,
          (int32_t)v332,
          v334,
          v335,
          v336,
          v337,
          v338,
          v339);
        v347 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v347 )
          sub_1C942F0(0, v340);
        v348 = v347->fields._items;
        v349 = (Il2CppObject *)v826->fields._mapInfo_5__16;
        v350 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v347->fields._version;
        if ( !v348 )
          sub_1C942F0(v347, v349);
        v351 = v347->fields._size;
        if ( (unsigned int)v351 >= LODWORD(v348->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v347,
            v349,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v350[4] + 192LL) + 112LL));
        }
        else
        {
          v352 = &v348->obj.klass + v351;
          v347->fields._size = v351 + 1;
          v352[4] = (Il2CppClass *)v349;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v352 + 4), (int32_t)v349, v341, v342, v343, v344, v345, v346);
        }
        v504 = v826->fields.__8__1;
        if ( !v504 )
          sub_1C942F0(v353, v354);
        spotMaster_5__3 = v826->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1C942F0(0, v354);
        v506 = SpotMaster__getList(spotMaster_5__3, v504->fields.mapId, 0);
        v509 = v506;
        if ( !v506 )
          sub_1C942F0(0, v507);
        v510 = v506->max_length;
        if ( v510 >= 1 )
        {
          for ( k = 0; k != v510; ++k )
          {
            v512 = sub_1C942E4(QuestTree___c__DisplayClass47_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v512, 0);
            if ( k >= LODWORD(v509->max_length) )
              sub_1C942F8(v513);
            v515 = v509->m_Items[k];
            if ( !v515 )
              sub_1C942F0(v513, v514);
            if ( !v512 )
              sub_1C942F0(v513, v514);
            *(_DWORD *)(v512 + 16) = v515->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v517 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v517,
              (Il2CppObject *)v512,
              Method_QuestTree___c__DisplayClass47_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0);
            if ( !allSpotInfoList )
              sub_1C942F0(v518, v519);
            v520 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v517,
                     (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v521 = v520;
            if ( v520 != -1 )
            {
              v522 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v522 )
                sub_1C942F0(0, v521);
              System_Collections_Generic_List_object___RemoveAt(
                v522,
                v521,
                (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v523 = v826->fields._mapInfo_5__16;
            if ( !v523 )
              sub_1C942F0(0, v521);
            v524 = MapControl_MapInfo__AddChild(v523, *(_DWORD *)(v512 + 16), 0);
            spotInfo = v524;
            QuestTree__SetupSpotInfo(_4__this, v515, &spotInfo, v525);
            v533 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v533 )
              sub_1C942F0(0, v526);
            v534 = v533->fields._items;
            v535 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v533->fields._version;
            if ( !v534 )
              sub_1C942F0(v533, v526);
            v536 = v533->fields._size;
            if ( (unsigned int)v536 >= LODWORD(v534->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v533,
                (Il2CppObject *)v524,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v535[4] + 192LL) + 112LL));
            }
            else
            {
              v537 = &v534->obj.klass + v536;
              v533->fields._size = v536 + 1;
              v537[4] = (Il2CppClass *)v524;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v537 + 4), (int32_t)v524, v527, v528, v529, v530, v531, v532);
            }
          }
        }
        v538 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v826->fields._mapInfo_5__16,
                 v826->fields._blankEarthSpotMaster_5__4,
                 v508);
        v539 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v538,
                 (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v547 = (System_Collections_Generic_IEnumerable_TSource__o *)v539;
        if ( !v539 )
          sub_1C942F0(0, v540);
        if ( v539->max_length )
        {
          v548 = sub_1C942E4(QuestTree___c__DisplayClass47_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v548, 0);
          v549 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v549 = QuestTree___c_TypeInfo;
          }
          _9__47_6 = (System_Func_object__int__o *)v549->static_fields->__9__47_6;
          if ( !_9__47_6 )
          {
            if ( !v549->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v549);
              v549 = QuestTree___c_TypeInfo;
            }
            v551 = (Il2CppObject *)v549->static_fields->__9;
            _9__47_6 = (System_Func_object__int__o *)sub_1C942E4(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__47_6,
              v551,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__47_6__,
              0);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__47_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__47_6;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__47_6,
              (int32_t)_9__47_6,
              v553,
              v554,
              v555,
              v556,
              v557,
              v558);
          }
          v559 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v547,
                                                                  (System_Func_TSource__TResult__o *)_9__47_6,
                                                                  (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v560 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_57771124(
            v560,
            v559,
            (const MethodInfo_3718474 *)Method_System_Collections_Generic_HashSet_int___ctor___78973968);
          if ( !v548 )
            sub_1C942F0(v561, v562);
          *(_QWORD *)(v548 + 16) = v560;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v548 + 16), (int32_t)v560, v563, v564, v565, v566, v567, v568);
          v569 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v570 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v570,
            (Il2CppObject *)v548,
            Method_QuestTree___c__DisplayClass47_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0);
          BasicHelper__RemoveElements_object_(
            v569,
            (System_Func_T__bool__o *)v570,
            (const MethodInfo_318B31C *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v572 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v572 )
            sub_1C942F0(0, v571);
          System_Collections_Generic_List_object___AddRange(
            v572,
            (System_Collections_Generic_IEnumerable_T__o *)v547,
            (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v573 = v826;
        v826->fields.__2__current = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v573->fields.__2__current, 0, v541, v542, v543, v544, v545, v546);
        result = 1;
        v826->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1C942F0(v286, v287);
      v355 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v356 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v356 = QuestTree___c_TypeInfo;
      }
      _9__47_2 = (System_Comparison_T__o *)v356->static_fields->__9__47_2;
      if ( !_9__47_2 )
      {
        if ( !v356->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v356);
          v356 = QuestTree___c_TypeInfo;
        }
        v358 = (Il2CppObject *)v356->static_fields->__9;
        _9__47_2 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__47_2,
          v358,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__47_2__,
          0);
        v359 = QuestTree___c_TypeInfo->static_fields;
        v359->__9__47_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__47_2;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v359->__9__47_2,
          (int32_t)_9__47_2,
          v360,
          v361,
          v362,
          v363,
          v364,
          v365);
      }
      if ( !v355 )
        sub_1C942F0(v286, v287);
      System_Collections_Generic_List_object___Sort_59164920(
        v355,
        _9__47_2,
        (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v366 = v826;
      v826->fields.__8__1 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v366->fields.__8__1, 0, v367, v368, v369, v370, v371, v372);
      v373 = v826;
      v826->fields._warInfo_5__14 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v373->fields._warInfo_5__14, 0, v374, v375, v376, v377, v378, v379);
      v380 = v826;
      v826->fields._mapList_5__15 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v380->fields._mapList_5__15, 0, v381, v382, v383, v384, v385, v386);
      v387 = (Il2CppObject *)sub_1C942E4(QuestTree___c__DisplayClass47_6_TypeInfo);
      System_Object___ctor(v387, 0);
      v388 = v826;
      v826->fields.__8__3 = (struct QuestTree___c__DisplayClass47_6_o *)v387;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v388->fields.__8__3,
        (int32_t)v387,
        v389,
        v390,
        v391,
        v392,
        v393,
        v394);
      v395 = v826->fields._nowTime_5__11;
      v396 = (MapControl_WarInfo_o *)sub_1C942E4(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v396, v395, 0);
      v397 = v826;
      v826->fields._warInfo_5__14 = v396;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v397->fields._warInfo_5__14,
        (int32_t)v396,
        v398,
        v399,
        v400,
        v401,
        v402,
        v403);
      v404 = (MapControl_MapInfo_o *)sub_1C942E4(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v404, 0);
      v405 = v826;
      v826->fields._mapInfo_5__16 = v404;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v405->fields._mapInfo_5__16,
        (int32_t)v404,
        v406,
        v407,
        v408,
        v409,
        v410,
        v411);
      v412 = (MapControl_SpotInfo_o *)sub_1C942E4(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v412, 0);
      v413 = v826;
      v826->fields._spotInfo_5__17 = v412;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v413->fields._spotInfo_5__17,
        (int32_t)v412,
        v414,
        v415,
        v416,
        v417,
        v418,
        v419);
      v420 = (WarEntity_o *)sub_1C942E4(WarEntity_TypeInfo);
      WarEntity___ctor(v420, 0);
      v421 = v826;
      v826->fields._warEnt_5__18 = v420;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v421->fields._warEnt_5__18,
        (int32_t)v420,
        v422,
        v423,
        v424,
        v425,
        v426,
        v427);
      v429 = v826->fields._dataManager_5__2;
      if ( !v429 )
        sub_1C942F0(0, v428);
      v430 = DataManager__GetMasterData_object_(
               v429,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v431 = v826;
      v826->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v430;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v431->fields._userQuestMaster_5__19,
        (int32_t)v430,
        v432,
        v433,
        v434,
        v435,
        v436,
        v437);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v440 = v826;
      _8__3 = v826->fields.__8__3;
      if ( !_8__3 )
        sub_1C942F0(Master_object, v439);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v440->fields._nowMapId_5__20 = -1;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
      if ( !v826 )
        sub_1C942F0(isSavedMemoryMode, v443);
      if ( isSavedMemoryMode )
        v444 = 500;
      else
        v444 = 5000;
      v445 = v826->fields.__8__3;
      v826->fields._breakInterval_5__22 = v444;
      v446 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v446,
        (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v445 )
        sub_1C942F0(v447, v448);
      v445->fields.spotInfoList = v446;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v445->fields, (int32_t)v446, v449, v450, v451, v452, v453, v454);
      v826->fields._cnt_5__23 = 0;
      v456 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v456 )
        sub_1C942F0(0, v455);
      System_Collections_Generic_List_object___GetEnumerator(
        v816,
        v456,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v457 = v826;
      v458 = *(_OWORD *)&v816[0].fields._list;
      p__7__wrap24 = (GrandQuestFolderBoardItem_o *)&v826->fields.__7__wrap24;
      v816[1] = v816[0];
      v826->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v816[0].fields._current;
      *(_OWORD *)&v457->fields.__7__wrap24.fields._list = v458;
      sub_1C9403C(p__7__wrap24, 0, v460, v461, v462, v463, v464, v465);
      v8 = v826;
LABEL_170:
      v8->fields.__1__state = -3;
      while ( 1 )
      {
        v467 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap24,
                 (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v468 = v826;
        if ( !v467 )
          break;
        current = v826->fields.__7__wrap24.fields._current;
        ++v826->fields._cnt_5__23;
        if ( !current )
          sub_1C942F0(v468, v466);
        Mine = MapControl_SpotInfo__GetMine(current, 0);
        if ( !Mine )
          sub_1C942F0(0, v471);
        v8 = v826;
        v478 = v826->fields.__8__2;
        if ( !v478 )
          sub_1C942F0(Mine, v471);
        if ( Mine->fields.warId == v478->fields.targetWarId )
        {
          v479 = v826->fields.__8__3;
          if ( !v479 )
            sub_1C942F0(Mine, v471);
          spotInfoList = v479->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1C942F0(0, v471);
          spotId = (unsigned int)current->fields.spotId;
          v482 = spotInfoList->fields._items;
          v483 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v482 )
            sub_1C942F0(spotInfoList, spotId);
          v484 = spotInfoList->fields._size;
          if ( (unsigned int)v484 >= LODWORD(v482->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v483[4] + 192LL) + 112LL));
            v8 = v826;
          }
          else
          {
            spotInfoList->fields._size = v484 + 1;
            v482->m_Items[v484] = spotId;
          }
        }
        HIDWORD(v485) = 28633112 - 1775253149 * v8->fields._cnt_5__23;
        LODWORD(v485) = HIDWORD(v485);
        if ( (unsigned int)(v485 >> 2) < 0xDA740D )
        {
          v8->fields.__2__current = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, 0, v472, v473, v474, v475, v476, v477);
          v283 = v826;
          v284 = 3;
LABEL_334:
          v283->fields.__1__state = v284;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47____m__Finally1(v826, v466);
      v487 = v826;
      questMaster_5__5 = (DataMasterBase_TMaster__TEntity__PKType__o *)v826->fields._questMaster_5__5;
      v826->fields.__7__wrap24.fields._list = 0;
      *(_QWORD *)&v487->fields.__7__wrap24.fields._index = 0;
      v487->fields.__7__wrap24.fields._current = 0;
      if ( !questMaster_5__5 )
        sub_1C942F0(0, v486);
      v489 = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase_object__object__int___getEntitys(
                                                                    questMaster_5__5,
                                                                    (const MethodInfo_345A744 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__getEntitys__);
      v490 = (Il2CppObject *)v826->fields.__8__3;
      v491 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v491,
        v490,
        Method_QuestTree___c__DisplayClass47_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0);
      v492 = System_Linq_Enumerable__Where_object_(
               v489,
               (System_Func_TSource__bool__o *)v491,
               (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v493 = System_Linq_Enumerable__ToArray_object_(
               v492,
               (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v494 = v826;
      v826->fields._questList_5__24 = (struct QuestEntity_array *)v493;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v494->fields._questList_5__24,
        (int32_t)v493,
        v495,
        v496,
        v497,
        v498,
        v499,
        v500);
      v501 = v826;
      v826->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v501->fields._questList_5__24,
                       (const MethodInfo_31BC830 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v8 = v826;
      mapCount_5__13 = v826->fields._mapCount_5__13;
      v826->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_170;
    case 4:
      v209 = v8->fields._mapCount_5__13;
      v8->fields.__1__state = -1;
      goto LABEL_475;
    case 5:
      endCallback = v8->fields.endCallback;
      v8->fields.__1__state = -1;
      if ( !endCallback )
        sub_1C942F0(this, method);
      v292 = ((__int64 (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
               endCallback->fields.method_code,
               endCallback->fields.method);
      if ( !_4__this )
        sub_1C942F0(v292, v293);
      goto LABEL_488;
    default:
      return 0;
  }
  while ( mapCount_5__13 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v8->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1C942F0(mapIdx_5__12, method);
    if ( (unsigned int)mapCount_5__13 >= LODWORD(questList_5__24->max_length) )
      sub_1C942F8(mapIdx_5__12);
    v576 = questList_5__24->m_Items[mapCount_5__13];
    if ( !v576 )
      sub_1C942F0(mapIdx_5__12, method);
    v577 = v8->fields.__8__3;
    if ( !v577 )
      sub_1C942F0(mapIdx_5__12, method);
    v577->fields.questId = v576->fields.id;
    userQuestMaster_5__19 = v8->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    v579 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v579 = NetworkManager_TypeInfo;
    }
    v580 = v826->fields.__8__3;
    if ( !v580 )
      sub_1C942F0(v579, method);
    if ( !userQuestMaster_5__19 )
      sub_1C942F0(v579, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v820,
           v579->static_fields->userIdNumber,
           v580->fields.questId,
           0) )
    {
      if ( !v820 )
        sub_1C942F0(0, v581);
      QuestPhase = UserQuestEntity__getQuestPhase(v820, 0);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_43237940 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *)QuestEntity__getSpotId_43237940(
                                                                            v576,
                                                                            QuestPhase + 1,
                                                                            0);
    v585 = v826;
    v586 = v826->fields.__8__3;
    if ( !v586 )
      sub_1C942F0(SpotId_43237940, warId);
    if ( v586->fields.nowSpotId == (_DWORD)SpotId_43237940 )
    {
      if ( !_4__this )
        sub_1C942F0(SpotId_43237940, warId);
    }
    else
    {
      v586->fields.nowSpotId = (int)SpotId_43237940;
      if ( !_4__this )
        sub_1C942F0(SpotId_43237940, warId);
      v587 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v586->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v586,
          Method_QuestTree___c__DisplayClass47_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0);
        v586->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v586->fields.__9__12,
          (int32_t)_9__12,
          v589,
          v590,
          v591,
          v592,
          v593,
          v594);
      }
      if ( !v587 )
        sub_1C942F0(SpotId_43237940, warId);
      v595 = System_Collections_Generic_List_object___Find(
               v587,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v585->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v595;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v585->fields._spotInfo_5__17,
        (int32_t)v595,
        v596,
        v597,
        v598,
        v599,
        v600,
        v601);
      spotInfo_5__17 = v826->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1C942F0(0, v602);
      SpotId_43237940 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *)MapControl_SpotInfo__GetMapID(
                                                                              spotInfo_5__17,
                                                                              0);
      warId = (unsigned int)SpotId_43237940;
      if ( v826->fields._nowMapId_5__20 != (_DWORD)SpotId_43237940 )
      {
        v826->fields._nowMapId_5__20 = (int)SpotId_43237940;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_43237940, v604);
        v606 = v826;
        v826->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v606->fields._mapInfo_5__16,
          (int32_t)MapInfoByMapID,
          v607,
          v608,
          v609,
          v610,
          v611,
          v612);
        v614 = v826->fields._mapInfo_5__16;
        if ( !v614 )
          sub_1C942F0(0, v613);
        v622 = MapControl_MapInfo__GetMine(v614, 0);
        if ( !v622 )
          sub_1C942F0(0, v615);
        SpotId_43237940 = v826;
        warId = (unsigned int)v622->fields.warId;
        if ( v826->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v826->fields._nowWarId_5__21 = warId;
          if ( _4__this->fields.mapControlRootInfo )
          {
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(_4__this->fields.mapControlRootInfo, warId, 0);
            SpotId_43237940 = v826;
          }
          else
          {
            ChildByWarID = 0;
          }
          SpotId_43237940->fields._warInfo_5__14 = ChildByWarID;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&SpotId_43237940->fields._warInfo_5__14,
            (int32_t)ChildByWarID,
            v616,
            v617,
            v618,
            v619,
            v620,
            v621);
          v625 = v826->fields._warInfo_5__14;
          if ( !v625 )
            sub_1C942F0(0, v624);
          v626 = MapControl_WarInfo__GetMine(v625, 0);
          v627 = v826;
          v826->fields._warEnt_5__18 = v626;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v627->fields._warEnt_5__18,
            (int32_t)v626,
            v628,
            v629,
            v630,
            v631,
            v632,
            v633);
        }
      }
    }
    v634 = v826->fields.__8__3;
    if ( !v634 )
      sub_1C942F0(SpotId_43237940, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v634->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v634,
        Method_QuestTree___c__DisplayClass47_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0);
      v634->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v634->fields.__9__13,
        (int32_t)_9__13,
        v637,
        v638,
        v639,
        v640,
        v641,
        v642);
    }
    if ( !allQuestInfoList )
      sub_1C942F0(SpotId_43237940, warId);
    v643 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v644 = v643;
    if ( v643 != -1 )
    {
      v645 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v645 )
        sub_1C942F0(0, v644);
      System_Collections_Generic_List_object___RemoveAt(
        v645,
        v644,
        (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v646 = v826->fields._warInfo_5__14;
    if ( !v820 )
    {
      if ( !v646 )
        sub_1C942F0(0, v644);
      goto LABEL_386;
    }
    if ( !v646 )
      sub_1C942F0(0, v644);
    MapControl_WarInfo__SetStatusCheckFlag(v646, 1, 0, 0);
    if ( !v820 )
      sub_1C942F0(0, v647);
    HasStatus = UserQuestEntity__HasStatus(v820, 8, 0);
    if ( !HasStatus )
    {
      v650 = v826->fields._warInfo_5__14;
      if ( !v650 )
        sub_1C942F0(0, v649);
      goto LABEL_388;
    }
    if ( !v820 )
      sub_1C942F0(HasStatus, v649);
    if ( v820->fields.challengeNum >= 1 )
    {
      v650 = v826->fields._warInfo_5__14;
      if ( !v650 )
        sub_1C942F0(0, v649);
LABEL_388:
      MapControl_WarInfo__SetStatusCheckFlag(v650, 4, 0, 0);
    }
    if ( !v820 )
      sub_1C942F0(0, v649);
    v654 = UserQuestEntity__getClearNum(v820, 0) < 1;
    v646 = v826->fields._warInfo_5__14;
    if ( v654 )
    {
      if ( !v646 )
        sub_1C942F0(0, v655);
LABEL_386:
      MapControl_WarInfo__SetStatusCheckFlag(v646, 2, 0, 0);
      v653 = 0;
      goto LABEL_400;
    }
    if ( !v646 )
      sub_1C942F0(0, v655);
    v651 = MapControl_WarInfo__GetMine(v646, 0);
    if ( !v651 )
      sub_1C942F0(0, v652);
    v656 = v826->fields.__8__3;
    if ( !v656 )
      sub_1C942F0(v651, v652);
    if ( v651->fields.lastQuestId == v656->fields.questId )
    {
      v657 = v826->fields._warInfo_5__14;
      if ( !v657 )
        sub_1C942F0(0, v652);
      v653 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v657, 8, 1, 0);
    }
    else
    {
      v653 = 1;
    }
LABEL_400:
    v658 = v826->fields.__8__3;
    if ( !v658 )
      sub_1C942F0(v651, v652);
    v659 = v826->fields._spotInfo_5__17;
    if ( !v659 )
      sub_1C942F0(0, v652);
    v660 = MapControl_SpotInfo__AddChild(v659, v658->fields.questId, 0);
    v667 = v826->fields._warInfo_5__14;
    if ( !v667 )
      sub_1C942F0(v660, 0);
    v668 = v660;
    if ( !v660 )
      sub_1C942F0(0, v667);
    v669 = v667->fields.warId;
    v660->fields._WarInfo_k__BackingField = v667;
    v660->fields.warId = v669;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v660->fields._WarInfo_k__BackingField,
      (int32_t)v667,
      v661,
      v662,
      v663,
      v664,
      v665,
      v666);
    v670 = v826->fields._spotInfo_5__17;
    v668->fields._SpotInfo_k__BackingField = v670;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v668->fields._SpotInfo_k__BackingField,
      (int32_t)v670,
      v671,
      v672,
      v673,
      v674,
      v675,
      v676);
    v668->fields.endTime = QuestTree__GetEndTime(_4__this, v668, v677);
    warEnt_5__18 = v826->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1C942F0(0, v678);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0);
    if ( IsStartTypeQuest )
    {
      v682 = v826->fields._warEnt_5__18;
      if ( !v682 )
        sub_1C942F0(IsStartTypeQuest, v681);
      v683 = v826->fields.__8__3;
      if ( !v683 )
        sub_1C942F0(IsStartTypeQuest, v681);
      if ( v682->fields.targetId == v683->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v826->fields._warEnt_5__18, 0x8000, 0);
        if ( !IsStartTypeQuest )
          goto LABEL_416;
      }
    }
    v684 = v826->fields._warEnt_5__18;
    if ( !v684 )
      sub_1C942F0(IsStartTypeQuest, v681);
    v685 = v826->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v685 )
      sub_1C942F0(0, v681);
    v686 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v685,
             v684->fields.id,
             &value,
             (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v686 )
    {
      v689 = v826->fields.__8__3;
      if ( !v689 )
        sub_1C942F0(v686, v687);
      if ( !value )
        sub_1C942F0(0, v687);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v689->fields.questId,
             (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_416:
        *(_QWORD *)&v668->fields.dispType = 0;
LABEL_420:
        v692 = 1;
        goto LABEL_421;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v576, v668, v826->fields._nowWarId_5__21, v688) != 1 )
      goto LABEL_420;
    v691 = v826->fields._warInfo_5__14;
    if ( !v691 )
      sub_1C942F0(0, v690);
    MapControl_WarInfo__SetStatusCheckFlag(v691, 1, 0, 0);
    v692 = 0;
LABEL_421:
    if ( MapControl_QuestInfo__IsDisaplayable(v668, 0) )
    {
      if ( ((v653 | v692) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType(v668, 0) != 8 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v695 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestResetMaster___);
          v696 = sub_1C94140(long___TypeInfo, 1);
          v697 = v826->fields.__8__3;
          if ( !v697 )
            sub_1C942F0(v696, v696);
          if ( !v696 )
            sub_1C942F0(0, 0);
          if ( !*(_DWORD *)(v696 + 24) )
            sub_1C942F8(v696);
          *(_QWORD *)(v696 + 32) = v697->fields.questId;
          if ( !v695 )
            sub_1C942F0(v696, v696);
          isEntityExistsFromId = DataMasterBase_object__object__int___isEntityExistsFromId(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)v695,
                                   (System_Int64_array *)v696,
                                   (const MethodInfo_345AA9C *)Method_DataMasterBase_QuestResetMaster__QuestResetEntity__int__isEntityExistsFromId__);
          if ( !v820 || !isEntityExistsFromId || !UserQuestEntity__IsResetStatus(v820, 0) )
          {
            v699 = v826->fields._spotInfo_5__17;
            if ( !v699 )
              sub_1C942F0(0, v694);
            MapControl_SpotInfo__AddQuestCount(v699, 1, 0);
          }
        }
        v700 = v826->fields._spotInfo_5__17;
        if ( !v700 )
          sub_1C942F0(0, v694);
        MapControl_SpotInfo__AddAvailableQuestId(v700, v668->fields.questId, 0);
      }
      if ( MapControl_QuestInfo__GetQuestType(v668, 0) == 1 )
      {
        v701 = MapControl_QuestInfo__GetMine(v668, 0);
        if ( !v701 )
          sub_1C942F0(0, v702);
        HasFlag = QuestEntity__HasFlag(v701, 0x400000000000LL, 0);
        v705 = v826;
        if ( !HasFlag )
        {
          v706 = v826->fields._spotInfo_5__17;
          if ( !v706 )
            sub_1C942F0(HasFlag, v704);
          v706->fields._IsNext_k__BackingField = 1;
        }
        v707 = v705->fields._mapInfo_5__16;
        if ( !v707 )
          sub_1C942F0(HasFlag, v704);
        v707->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v668, 0);
      if ( IsDisplayQuestNextIcon )
      {
        v710 = v826;
        v711 = v826->fields._spotInfo_5__17;
        if ( !v711 )
          sub_1C942F0(IsDisplayQuestNextIcon, v709);
        v711->fields._IsNext_k__BackingField = 1;
        v712 = v710->fields._mapInfo_5__16;
        if ( !v712 )
          sub_1C942F0(IsDisplayQuestNextIcon, v709);
        v712->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v576, 0x8000000000LL, 0) )
      {
        v713 = v826->fields._spotInfo_5__17;
        if ( !v713 )
          sub_1C942F0(0, v693);
        MapControl_SpotInfo__AddFreeQuestCount(v713, 1, 0);
      }
    }
    v714 = v820;
    if ( v820 )
    {
      v714 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v820, 8, 0);
      if ( ((unsigned __int8)v714 & 1) != 0 )
      {
        if ( !v820 )
          sub_1C942F0(v714, v693);
        v715 = v820->fields.challengeNum == 0;
      }
      else
      {
        v715 = 0;
      }
    }
    else
    {
      v715 = 1;
    }
    v668->fields.isNew = v715;
    v668->fields.questPhase = QuestPhase;
    v716 = v826->fields.__8__3;
    if ( !v716 )
      sub_1C942F0(v714, v693);
    questPickupMaster_5__9 = v826->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1C942F0(0, v693);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v716->fields.questId, 0);
    v668->fields.pickupPriority = Priority;
    v720 = v826->fields.__8__3;
    if ( !v720 )
      sub_1C942F0(Priority, v719);
    questPhaseMaster_5__6 = v826->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1C942F0(0, v719);
    v722 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v720->fields.questId, 0);
    v730 = v722;
    if ( !v722 )
      sub_1C942F0(0, v723);
    v731 = v722[3];
    v732 = v731 - 1;
    if ( (int)v731 >= 1 )
    {
      v733 = 0;
      while ( 1 )
      {
        v734 = v730[v733 + 4];
        if ( !v734 )
          sub_1C942F0(v722, v723);
        v722 = MapControl_QuestInfo__AddChild(v668, *(_DWORD *)(v734 + 16), *(_DWORD *)(v734 + 20), 0);
        if ( v732 == v733 )
          break;
        if ( (unsigned int)++v733 >= *((_DWORD *)v730 + 6) )
          sub_1C942F8(v722);
      }
    }
    v735 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v735 )
      sub_1C942F0(0, v723);
    v736 = v735->fields._items;
    v737 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v735->fields._version;
    if ( !v736 )
      sub_1C942F0(v735, v723);
    v738 = v735->fields._size;
    if ( (unsigned int)v738 >= LODWORD(v736->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v735,
        (Il2CppObject *)v668,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v737[4] + 192LL) + 112LL));
    }
    else
    {
      v739 = &v736->obj.klass + v738;
      v735->fields._size = v738 + 1;
      v739[4] = (Il2CppClass *)v668;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v739 + 4), (int32_t)v668, v724, v725, v726, v727, v728, v729);
    }
    v8 = v826;
    v209 = v826->fields._mapCount_5__13;
    if ( v209 && !(v209 % v826->fields._breakInterval_5__22) )
    {
      v826->fields.__2__current = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields.__2__current, 0, v740, v741, v742, v743, v744, v745);
      v283 = v826;
      v284 = 4;
      goto LABEL_334;
    }
LABEL_475:
    mapIdx_5__12 = (unsigned int)v8->fields._mapIdx_5__12;
    mapCount_5__13 = v209 + 1;
    v8->fields._mapCount_5__13 = mapCount_5__13;
  }
  if ( !_4__this )
    sub_1C942F0(mapIdx_5__12, method);
  v746 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v747 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v747 = QuestTree___c_TypeInfo;
  }
  _9__47_11 = (System_Comparison_T__o *)v747->static_fields->__9__47_11;
  if ( !_9__47_11 )
  {
    if ( !v747->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v747);
      v747 = QuestTree___c_TypeInfo;
    }
    v749 = (Il2CppObject *)v747->static_fields->__9;
    _9__47_11 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(_9__47_11, v749, Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__47_11__, 0);
    v750 = QuestTree___c_TypeInfo->static_fields;
    v750->__9__47_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__47_11;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v750->__9__47_11,
      (int32_t)_9__47_11,
      v751,
      v752,
      v753,
      v754,
      v755,
      v756);
  }
  if ( !v746 )
    sub_1C942F0(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_59164920(
    v746,
    _9__47_11,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v757 = v826;
  v826->fields.__8__3 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v757->fields.__8__3, 0, v758, v759, v760, v761, v762, v763);
  v764 = v826;
  v826->fields._warInfo_5__14 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v764->fields._warInfo_5__14, 0, v765, v766, v767, v768, v769, v770);
  v771 = v826;
  v826->fields._mapInfo_5__16 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v771->fields._mapInfo_5__16, 0, v772, v773, v774, v775, v776, v777);
  v778 = v826;
  v826->fields._spotInfo_5__17 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v778->fields._spotInfo_5__17, 0, v779, v780, v781, v782, v783, v784);
  v785 = v826;
  v826->fields._warEnt_5__18 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v785->fields._warEnt_5__18, 0, v786, v787, v788, v789, v790, v791);
  v792 = v826;
  v826->fields._userQuestMaster_5__19 = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v792->fields._userQuestMaster_5__19,
    0,
    v793,
    v794,
    v795,
    v796,
    v797,
    v798);
  v799 = v826;
  v826->fields._questList_5__24 = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v799->fields._questList_5__24, 0, v800, v801, v802, v803, v804, v805);
  v806 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v806 )
    sub_1C942F0(0, v807);
  CommonUI__SetLoadMode((CommonUI_o *)v806, 0, 0);
  _4__this->fields.isInit = 1;
  v814 = v826;
  if ( v826->fields.endCallback )
  {
    v826->fields.__2__current = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v814->fields.__2__current, 0, v808, v809, v810, v811, v812, v813);
    v283 = v826;
    v284 = 5;
    goto LABEL_334;
  }
LABEL_488:
  result = 0;
  _4__this->fields.isQuestTreeUpdateFinished = 1;
  return result;
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47____m__Finally1(this, method);
}


void QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__47_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D29565 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_4D29565 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}