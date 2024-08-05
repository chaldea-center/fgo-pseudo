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
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_object__o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3

  if ( (byte_49FB619 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v10);
    sub_1B64870(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v11);
    sub_1B64870(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v12);
    sub_1B64870(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v13);
    sub_1B64870(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_1B64870(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v15);
    sub_1B64870(&MapControl_RootInfo_TypeInfo, v16);
    sub_1B64870(&Method_SingletonTemplate_QuestTree___ctor__, v17);
    byte_49FB619 = 1;
  }
  v18 = (MapControl_RootInfo_o *)sub_1B64ABC(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v18, 0LL);
  this->fields.mapControlRootInfo = v18;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v21;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.allQuestInfoList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v24;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.allSpotInfoList, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v27;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v30;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v33;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.allMapInfoList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v36;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.allWarInfoList, (int32_t)v36, v37, v38);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v39 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v39;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.questReleaseEntList, (int32_t)v39, v40, v41);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36EE830 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_33832456(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_33829484(
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

  if ( (byte_49FB616 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_1B64870(&long___TypeInfo, v5);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v8);
    byte_49FB616 = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1B64918(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v15 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v15 || (*(_QWORD *)(Time + 32) = v13->fields.startedAt, (_DWORD)v15 == 1) )
      sub_1B64AD4(Time, v11);
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
      sub_1B64ACC(Time, v11);
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
  __int64 v16; // x1
  int64_t NoticeAt; // x0
  __int64 v18; // x1
  bool v19; // w24
  int64_t Time; // x23
  __int64 v21; // x25
  __int64 v22; // x8
  int64_t *v23; // x9
  int64_t v24; // x10
  int v25; // w25
  _BOOL4 v26; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *MasterData_object; // x21
  ServantLimitImageMaster_o *v31; // x21
  int32_t id; // w22
  bool IsCommonReleaseMultiClear; // w0
  int32_t forceOperation; // w20
  int v35; // w22
  int32_t v36; // w20
  int32_t closedMessageId; // w5
  int64_t value; // x4
  int32_t type; // w2
  int32_t targetId; // w3
  int32_t v41; // w1
  MapControl_QuestInfo_o *v42; // x0
  _BOOL4 v43; // w8
  UserQuestEntity_o *v45; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_49FB612 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserQuestMaster___, questEnt);
    sub_1B64870(&Method_DataManager_GetMasterData_WarMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1B64870(&DataManager_TypeInfo, v11);
    sub_1B64870(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1B64870(&long___TypeInfo, v13);
    sub_1B64870(&NetworkManager_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    this = (QuestTree_o *)sub_1B64870(&TerminalPramsManager_TypeInfo, v16);
    byte_49FB612 = 1;
  }
  questReleaseNG = 0LL;
  v45 = 0LL;
  entity = 0LL;
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !NoticeAt )
    goto LABEL_73;
  v19 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)NoticeAt,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v21 = sub_1B64918(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v21 )
    goto LABEL_73;
  if ( !*(_DWORD *)(v21 + 24)
    || (*(_QWORD *)(v21 + 32) = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL),
                                          *(_DWORD *)(v21 + 24) <= 1u)
    || (*(_QWORD *)(v21 + 40) = NoticeAt,
        NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL),
        v22 = *(_QWORD *)(v21 + 24),
        (unsigned int)v22 <= 2) )
  {
    sub_1B64AD4(NoticeAt, v18);
  }
  *(_QWORD *)(v21 + 48) = NoticeAt;
  if ( (int)v22 >= 1 )
  {
    v22 = (unsigned int)v22;
    v23 = (int64_t *)(v21 + 32);
    do
    {
      v24 = *v23;
      if ( *v23 > Time && v8->fields.forceUpdateTime > v24 )
        v8->fields.forceUpdateTime = v24;
      --v22;
      ++v23;
    }
    while ( v22 );
  }
  v25 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
    goto LABEL_18;
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v25 = 3;
  else
    v25 = 1;
  if ( v19 || HasFlag )
  {
    v26 = !HasFlag;
    goto LABEL_55;
  }
  if ( !questReleaseNG
    || !questReleaseNG->fields.closedMessageId
    || QuestEntity__getClosedAt(questEnt, 0LL) <= Time
    || QuestEntity__getNoticeAt(questEnt, 0LL) > Time )
  {
    NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_73;
    NoticeAt = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_73;
    IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)NoticeAt,
                               &entity,
                               warId,
                               (const MethodInfo_30D61D4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_73;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)NoticeAt,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NoticeAt = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              goto LABEL_73;
            if ( UserQuestMaster__TryGetEntity(
                   (UserQuestMaster_o *)MasterData_object,
                   &v45,
                   NoticeAt,
                   questEnt->fields.id,
                   0LL) )
            {
              NoticeAt = (int64_t)v45;
              if ( !v45 )
                goto LABEL_73;
              if ( UserQuestEntity__HasStatus(v45, 8, 0LL) )
                goto LABEL_54;
            }
LABEL_45:
            v26 = 0;
            v25 = 0;
            goto LABEL_55;
          }
        }
      }
    }
    NoticeAt = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v29);
    if ( !NoticeAt )
      goto LABEL_73;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)NoticeAt, questEnt->fields.id, 0, 0LL)
      || questEnt->fields.afterClear != 5 )
    {
      goto LABEL_45;
    }
LABEL_54:
    v26 = 0;
    v25 = 2;
    goto LABEL_55;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NoticeAt = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( questEnt->fields.type != 3 )
    goto LABEL_54;
  v31 = (ServantLimitImageMaster_o *)NoticeAt;
  if ( !NoticeAt )
    goto LABEL_73;
  id = questEnt->fields.id;
  v25 = 2;
  if ( !ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)NoticeAt, id, 0LL) )
  {
LABEL_18:
    v26 = 0;
    goto LABEL_55;
  }
  IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v31, id, 0LL);
  v26 = 0;
  if ( IsCommonReleaseMultiClear )
    v25 = 0;
  else
    v25 = 2;
LABEL_55:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  NoticeAt = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (NoticeAt & 1) != 0 )
    v35 = 1;
  else
    v35 = forceOperation;
  if ( v35 )
    v36 = v35 != 2;
  else
    v36 = v25;
  if ( questReleaseNG && v36 == 2 )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v41 = 2;
      v42 = questInfo;
      goto LABEL_69;
    }
LABEL_73:
    sub_1B64ACC(NoticeAt, v18);
  }
  if ( !questInfo )
    goto LABEL_73;
  v42 = questInfo;
  v41 = v36;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_69:
  MapControl_QuestInfo__SetDispType(v42, v41, type, targetId, value, closedMessageId, 0LL);
  if ( v35 )
    v43 = v35 != 2;
  else
    v43 = v26;
  questInfo->fields.touchType = v43;
  return v36;
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

  return QuestTree__CheckSpotCond_33832456(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_33832456(
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
  int64_t Instance; // x0
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  int v32; // w8
  bool IsExistCommand; // w22
  __int64 v34; // x0
  __int64 v35; // x0
  UnityEngine_Object_o *v36; // x25
  bool IsMissionAchive; // w0
  QuestEntity_o *v38; // x19
  int32_t WarId; // w0
  const MethodInfo *v40; // x4
  __int64 v41; // x8
  int64_t v42; // x20
  int32_t v43; // w23
  unsigned __int64 v44; // x24
  int32_t v45; // w21
  __int64 v46; // x8
  int64_t v47; // x20
  int32_t v48; // w23
  unsigned __int64 v49; // x24
  int32_t v50; // w21
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  __int64 v53; // x8
  int64_t v54; // x20
  unsigned __int64 v55; // x24
  int32_t v56; // w21
  int v57; // w21
  int v58; // w20
  int64_t v59; // x2
  int32_t v60; // w0
  int32_t v61; // w0
  int32_t v62; // w8
  bool v63; // cc
  int32_t v64; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FB615 & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B64870(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1B64870(&NetworkManager_TypeInfo, v16);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v18);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v19);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v21);
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v22);
    byte_49FB615 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
LABEL_6:
    LOBYTE(v24) = 1;
    return (unsigned __int8)v24 & 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v23);
    byte_49F97AD = 1;
  }
  v25 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v25 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v25->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_34;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v27);
    byte_49F97AD = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v29 = **(_QWORD **)(Instance + 184);
  if ( !v29 )
    goto LABEL_176;
  if ( !*(_QWORD *)(v29 + 456) )
    goto LABEL_34;
  if ( !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_49F97AD )
  {
    sub_1B64870(&TerminalSceneComponent_TypeInfo, v27);
    byte_49F97AD = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v30 = **(_QWORD **)(Instance + 184);
  if ( !v30 )
    goto LABEL_176;
  v31 = *(_QWORD *)(v30 + 456);
  if ( !v31 )
    goto LABEL_176;
  v32 = *(_DWORD *)(v31 + 16);
  if ( !v32 )
  {
LABEL_34:
    v34 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1BB674C(v34);
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BB674C(v35);
    v36 = **(UnityEngine_Object_o ***)(v35 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      v32 = 0;
      IsExistCommand = 1;
      goto LABEL_44;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v32 = 0;
      goto LABEL_44;
    }
LABEL_176:
    sub_1B64ACC(Instance, v27);
  }
  IsExistCommand = 0;
LABEL_44:
  v24 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v24 & 1;
    case 2:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_176;
      if ( targetValue )
        LOBYTE(v24) = clsQuestCheck__IsQuestPhaseClear(
                        (clsQuestCheck_o *)Instance,
                        targetId,
                        targetValue,
                        IsExistCommand,
                        0LL);
      else
        LOBYTE(v24) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 3:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_176;
      if ( targetValue )
        IsMissionAchive = clsQuestCheck__IsQuestPhaseClear(
                            (clsQuestCheck_o *)Instance,
                            targetId,
                            targetValue,
                            IsExistCommand,
                            0LL);
      else
        IsMissionAchive = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      goto LABEL_165;
    case 5:
      if ( v32 == targetId )
        goto LABEL_52;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 6:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_176;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL) )
        goto LABEL_6;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v38 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0LL);
      LOBYTE(v24) = QuestTree__CheckQuestOpen(this, v38, 0LL, WarId, v40) == 1;
      return (unsigned __int8)v24 & 1;
    case 7:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v41 = *(_QWORD *)(Instance + 24);
      v42 = Instance;
      if ( (int)v41 >= 1 )
      {
        v43 = 0;
        v44 = 0LL;
        while ( v44 < (unsigned int)v41 )
        {
          v45 = *(_DWORD *)(v42 + 32 + 4 * v44);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v27);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v45, IsExistCommand, 0LL);
          LODWORD(v41) = *(_DWORD *)(v42 + 24);
          ++v44;
          v43 += Instance & 1;
          if ( (__int64)v44 >= (int)v41 )
            goto LABEL_167;
        }
        goto LABEL_177;
      }
      v43 = 0;
LABEL_167:
      if ( targetValue <= 1 )
        v64 = 1;
      else
        v64 = targetValue;
      LOBYTE(v24) = v43 < v64;
      return (unsigned __int8)v24 & 1;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v46 = *(_QWORD *)(Instance + 24);
      v47 = Instance;
      if ( (int)v46 < 1 )
        goto LABEL_150;
      v48 = 0;
      v49 = 0LL;
      while ( v49 < (unsigned int)v46 )
      {
        v50 = *(_DWORD *)(v47 + 32 + 4 * v49);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v27);
        if ( !Instance )
          goto LABEL_176;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v50, IsExistCommand, 0LL);
        LODWORD(v46) = *(_DWORD *)(v47 + 24);
        ++v49;
        v48 += Instance & 1;
        if ( (__int64)v49 >= (int)v46 )
          goto LABEL_151;
      }
      goto LABEL_177;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !MasterData_object )
        goto LABEL_176;
      Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, targetId, 0LL);
      if ( (Instance & 1) == 0 )
      {
        num = 0;
        goto LABEL_159;
      }
      if ( !entity )
        goto LABEL_176;
      num = entity->fields.num;
LABEL_159:
      v63 = num < targetValue;
LABEL_160:
      LOBYTE(v24) = !v63;
      return (unsigned __int8)v24 & 1;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_176;
      LOBYTE(v24) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v53 = *(_QWORD *)(Instance + 24);
      v54 = Instance;
      if ( (int)v53 >= 1 )
      {
        v48 = 0;
        v55 = 0LL;
        while ( v55 < (unsigned int)v53 )
        {
          v56 = *(_DWORD *)(v54 + 32 + 4 * v55);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v27);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v56, IsExistCommand, 0LL);
          LODWORD(v53) = *(_DWORD *)(v54 + 24);
          ++v55;
          v48 += Instance & 1;
          if ( (__int64)v55 >= (int)v53 )
            goto LABEL_151;
        }
LABEL_177:
        sub_1B64AD4(Instance, v27);
      }
LABEL_150:
      v48 = 0;
LABEL_151:
      if ( targetValue <= 1 )
        v62 = 1;
      else
        v62 = targetValue;
      v63 = v48 < v62;
      goto LABEL_160;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 13:
      v57 = targetId / 100;
      v58 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventRaceGoalScriptPlayed(v57, v58, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 16:
      if ( v32 == targetId )
        goto LABEL_6;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0LL);
LABEL_165:
      LOBYTE(v24) = !IsMissionAchive;
      return (unsigned __int8)v24 & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsQuestAvailable(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 18:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 83;
      goto LABEL_174;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 84;
      goto LABEL_174;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 85;
      goto LABEL_174;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 86;
      goto LABEL_174;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 87;
      goto LABEL_174;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 88;
      goto LABEL_174;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 89;
      goto LABEL_174;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 90;
      goto LABEL_174;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 91;
      goto LABEL_174;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 23;
      goto LABEL_174;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 76;
      goto LABEL_174;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v59 = targetValue;
      v60 = 97;
      goto LABEL_174;
    case 31:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_176;
      v61 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v61 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v59 = targetValue;
        v60 = 113;
LABEL_174:
        LOBYTE(v24) = CondType__IsOpen(v60, targetId, v59, 0, 0LL);
      }
      else
      {
        LOBYTE(v24) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v61, 1, 0LL);
      }
      return (unsigned __int8)v24 & 1;
    default:
LABEL_52:
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

  return QuestTree__CheckSpotCond_33832456(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FB610 & 1) == 0 )
  {
    sub_1B64870(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, mapInfo);
    byte_49FB610 = 1;
  }
  v7 = sub_1B64ABC(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__43___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_1B64ACC(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)mapInfo, v12, v13);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v14, v15);
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
  if ( (byte_49FB613 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_1B64870(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_1B64870(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_49FB613 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_39205420((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1B64ACC(this, questInfo);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v17 = 0LL;
  v35 = v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B64ACC(v18, v19);
    klass_high = HIDWORD(v35.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1B64ACC(v18, v19);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_1B64ACC(FirstEntityFromQuestId, v23);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_30D6180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1B64ACC(0LL, v30);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v31 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v31 )
          sub_1B64ACC(0LL, v32);
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
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_38166012; // x0
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

  if ( (byte_49FB614 & 1) == 0 )
  {
    sub_1B64870(&System_DateTime_TypeInfo, questEnt);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    byte_49FB614 = 1;
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
    sub_1B64ACC(Time, v8);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v21.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_38166012 = NetworkManager__getTime_38166012(v21, 0LL);
  value = questReleaseEnt->fields.value;
  v13 = Time_38166012;
  dateData = NetworkManager__getDateTime_38077776(Time_38166012 - 3600 * value, 0LL).fields._dateData;
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
    dateData = NetworkManager__getDateTime_38077776(v16, 0LL).fields._dateData;
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
  System_Func_object__int__o *_9__36_0; // x21
  Il2CppObject *v16; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FB60A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1B64870(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1B64870(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1B64870(&Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, v9);
    sub_1B64870(&QuestTree___c_TypeInfo, v10);
    byte_49FB60A = 1;
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
  _9__36_0 = (System_Func_object__int__o *)v13->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestTree___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__36_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__36_0, v16, Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__36_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__36_0,
                                                               (const MethodInfo_2E65860 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v20,
                                                  (const MethodInfo_2E772F8 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1B64ACC(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v21 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B64ACC(v21, v22);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v26.fields._current[1].klass), v23) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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
  QuestTree___c__DisplayClass22_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_49FB600 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_1B64870(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v5);
    sub_1B64870(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__, v6);
    sub_1B64870(&QuestTree___c__DisplayClass22_0_TypeInfo, v7);
    byte_49FB600 = 1;
  }
  v8 = (QuestTree___c__DisplayClass22_0_o *)sub_1B64ABC(QuestTree___c__DisplayClass22_0_TypeInfo);
  QuestTree___c__DisplayClass22_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.mapGimmickId = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1B64ACC(v9, v10);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1B64ACC(QuestInfo, v5);
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

  if ( (byte_49FB603 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v18);
    sub_1B64870(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_49FB603 = 1;
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
  v27 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1B64ACC(v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1B64ACC(0LL, v30);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v66.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1B64ACC(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      SpotList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v65.fields._current )
        sub_1B64ACC(0LL, v33);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v65.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v27 )
        sub_1B64ACC(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v36, v27, v37);
  v39 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v35 = 0;
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1B64ACC(0LL, v40);
    v41 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v66.fields._current,
                                                         0LL);
    if ( !v41 )
      sub_1B64ACC(0LL, v42);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      v41,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v43 )
        break;
      current = (MapControl_SpotInfo_o *)v65.fields._current;
      if ( !v65.fields._current )
        sub_1B64ACC(v43, v44);
      if ( HIDWORD(v65.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B64ACC(0LL, v47);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v48 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v48 )
        sub_1B64ACC(0LL, v49);
      v62 = v35;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v48,
        (const MethodInfo_3492D2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = 0;
      v64 = v63;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v64,
                (const MethodInfo_32282C0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v51 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1B64ACC(v51, v52);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v64.fields._current,
                 (const MethodInfo_311D0F4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v39 )
            sub_1B64ACC(Item, v54);
          v56 = System_Collections_Generic_List_int___Contains(
                  v39,
                  Item,
                  (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1B64ACC(v56, v57);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                v55,
                *(const MethodInfo_34921B8 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
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
        (const MethodInfo_32282BC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v35 = v62 - v50 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_49FB606 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_49FB606 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v22 = MapInfoByMapID;
    v23 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v56 = v54;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1B64ACC(v26, v27);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v23 )
          sub_1B64ACC(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v23,
          AvailableQuestIdList,
          (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v56.fields._current )
          sub_1B64ACC(v26, v27);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v23, v31);
    v33 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1B64ACC(SpotList, v25);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = 0;
    v56 = v54;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v34 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v56,
          (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v53;
        return (int)MapInfoByMapID;
      }
      v36 = (MapControl_SpotInfo_o *)v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1B64ACC(v34, v35);
LABEL_22:
        if ( v36->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B64ACC(0LL, v38);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v36->fields.spotId, 0LL) )
        {
LABEL_25:
          v39 = MapControl_SpotInfo__GetAvailableQuestIdList(v36, 1, 0LL);
          if ( !v39 )
            sub_1B64ACC(0LL, v40);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v54,
            v39,
            (const MethodInfo_3492D2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v41 = 0;
          v55 = v54;
          while ( 1 )
          {
            v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v55,
                    (const MethodInfo_32282C0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1B64ACC(v42, v43);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v55.fields._current,
                     (const MethodInfo_311D0F4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v46 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v33 )
                sub_1B64ACC(Item, v45);
              v47 = System_Collections_Generic_List_int___Contains(
                      v33,
                      Item,
                      (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1B64ACC(v47, v48);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    v46,
                    *(const MethodInfo_34921B8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
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
            (const MethodInfo_32282BC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v53 = v53 - v41 + v36->fields.questCount;
        }
      }
      else
      {
        if ( !v56.fields._current )
          sub_1B64ACC(v34, v35);
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
  QuestTree___c__DisplayClass23_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_49FB601 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B64870(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B64870(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__, v6);
    sub_1B64870(&QuestTree___c__DisplayClass23_0_TypeInfo, v7);
    byte_49FB601 = 1;
  }
  v8 = (QuestTree___c__DisplayClass23_0_o *)sub_1B64ABC(QuestTree___c__DisplayClass23_0_TypeInfo);
  QuestTree___c__DisplayClass23_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.questId = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B64ACC(v9, v10);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v12,
                                     (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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
  int32_t v17; // w3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FB617 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_49FB617 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    allQuestInfoList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v14 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B64ACC(v14, v15);
    if ( LODWORD(v25.fields._current[4].klass) == warId )
    {
      if ( !v11 )
        sub_1B64ACC(v14, v15);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64ACC(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)current;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)current, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_49FB605 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FB605 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v6);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestTree___c__DisplayClass21_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_49FB5FF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_1B64870(&System_Predicate_MapControl_SpotInfo__TypeInfo, v5);
    sub_1B64870(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__, v6);
    sub_1B64870(&QuestTree___c__DisplayClass21_0_TypeInfo, v7);
    byte_49FB5FF = 1;
  }
  v8 = (QuestTree___c__DisplayClass21_0_o *)sub_1B64ABC(QuestTree___c__DisplayClass21_0_TypeInfo);
  QuestTree___c__DisplayClass21_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.spotId = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1B64ACC(v9, v10);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v12,
                                    (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  int32_t v26; // w3
  System_Collections_Generic_List_int__o *v27; // x21
  QuestTree___c_c *v28; // x0
  System_Func_object__int__o *_9__29_0; // x23
  Il2CppObject *v30; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_Predicate_object__o *v38; // x21

  if ( (byte_49FB604 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_1B64870(&System_Func_MapButtonEntity__int__TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B64870(&System_Predicate_MapControl_MapInfo__TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64870(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__, v13);
    sub_1B64870(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__, v14);
    sub_1B64870(&QuestTree___c__DisplayClass29_0_TypeInfo, v15);
    sub_1B64870(&QuestTree___c_TypeInfo, v16);
    byte_49FB604 = 1;
  }
  v17 = sub_1B64ABC(QuestTree___c__DisplayClass29_0_TypeInfo);
  QuestTree___c__DisplayClass29_0___ctor((QuestTree___c__DisplayClass29_0_o *)v17, 0LL);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = v24;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v24, v25, v26);
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
    _9__29_0 = (System_Func_object__int__o *)v28->static_fields->__9__29_0;
    if ( !_9__29_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = QuestTree___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__29_0 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__29_0, v30, Method_QuestTree___c__GetUserReachableMapList_b__29_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v32, v33);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__29_0,
                            (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v27 )
    {
      System_Collections_Generic_List_int___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_34923C4 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1B64ACC(Mine, mapId);
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
      *(const MethodInfo_34921B8 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v38 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v17,
    Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v38,
                                                                    (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestTree___c__DisplayClass33_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v12; // x20
  Il2CppObject *v13; // x0

  if ( (byte_49FB608 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B64870(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B64870(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__, v6);
    sub_1B64870(&QuestTree___c__DisplayClass33_0_TypeInfo, v7);
    byte_49FB608 = 1;
  }
  v8 = (QuestTree___c__DisplayClass33_0_o *)sub_1B64ABC(QuestTree___c__DisplayClass33_0_TypeInfo);
  QuestTree___c__DisplayClass33_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.questId = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B64ACC(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_49FB5FB & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75689256, v3);
    sub_1B64870(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_49FB5FB = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_55243428(
    v6,
    allWarInfoList,
    (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75689256);
  if ( !v6 )
    sub_1B64ACC(v7, v8);
  System_Collections_Generic_List_object___Reverse(
    v6,
    (const MethodInfo_34B137C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB5FC & 1) == 0 )
  {
    sub_1B64870(&QuestTree__Init_d__15_TypeInfo, endCallback);
    byte_49FB5FC = 1;
  }
  v5 = sub_1B64ABC(QuestTree__Init_d__15_TypeInfo);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B64ACC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)endCallback, v10, v11);
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

  if ( (byte_49FB611 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_49FB611 = 1;
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
    sub_1B64ACC(mapControlRootInfo, method);
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

  if ( (byte_49FB60B & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_1B64870(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FB60B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v8);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_30D61D4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_33827188(this, (WarEntity_o *)entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_33827188(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t id; // w21
  int64_t Time; // x20
  const MethodInfo *v11; // x2
  bool v12; // w21
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v14; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v16; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49FB60C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, warEnt);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_1B64870(&long___TypeInfo, v6);
    sub_1B64870(&NetworkManager_TypeInfo, v7);
    this = (QuestTree_o *)sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FB60C = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_24;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (QuestTree_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_24;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v11);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_24;
    v12 = Time < (__int64)entity[6].klass;
  }
  else
  {
    v12 = 0;
  }
  this = (QuestTree_o *)sub_1B64918(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_24:
    sub_1B64ACC(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1B64AD4(this, warEnt);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v14 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v16 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v16 )
        v4->fields.forceUpdateTime = (int64_t)v16;
      --v14;
      ++p_allSpotInfoList;
    }
    while ( v14 );
  }
  return v12;
}


bool __fastcall QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  MapControl_WarInfo_o *v6; // x20
  WarEntity_o *Mine; // x0
  WarEntity_o *v8; // x20
  const MethodInfo *v9; // x2
  bool result; // w0

  mapControlRootInfo = this->fields.mapControlRootInfo;
  result = mapControlRootInfo
        && (ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL)) != 0LL
        && (v6 = ChildByWarID, MapControl_WarInfo__GetStatus(ChildByWarID, 0LL))
        && !MapControl_WarInfo__IsClosedWar(v6, 0LL)
        && (Mine = MapControl_WarInfo__GetMine(v6, 0LL)) != 0LL
        && ((v8 = Mine, !WarEntity__IsEvent(Mine, 0LL)) || QuestTree__IsActiveEventWar_33827188(this, v8, v9))
        && QuestTree__IsWarOpen(this, v8->fields.id, v9);
  return result;
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_49FB5FD & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FB5FD = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v6);
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

  if ( (byte_49FB607 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_49FB607 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1B64ACC(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    SpotList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( layer < 1 )
    {
      if ( !v22.fields._current )
        sub_1B64ACC(v13, v14);
      goto LABEL_12;
    }
    if ( !v22.fields._current )
      sub_1B64ACC(v13, v14);
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
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_1B64ACC(this, 0LL);
  return QuestTree__CheckSpotCond_33832456(
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
    sub_1B64ACC(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_33832456(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_33832456(
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
  System_Collections_Generic_List_object__o *QuestInfoByWarId; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *current; // x21
  clsQuestCheck_o *v13; // x0
  __int64 v14; // x1
  int v15; // w20
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FB618 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_49FB618 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1B64ACC(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    QuestInfoByWarId,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    v13 = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
    if ( !current )
      sub_1B64ACC(v13, v14);
    if ( !v13 )
      sub_1B64ACC(0LL, v14);
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
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_49FB609 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_49FB609 = 1;
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
    sub_1B64ACC(QuestInfoByWarId, v9);
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
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    if ( !v20.fields._current )
      sub_1B64ACC(v13, v14);
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
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  int32_t v14; // w3
  struct System_String_o *name; // x1
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_Object_o *v18; // x22
  bool IsExistCommand; // w21
  int32_t v20; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_49FB60D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1B64870(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1B64870(&SpotEntity_TypeInfo, v9);
    byte_49FB60D = 1;
  }
  v10 = sub_1B64ABC(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v10, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v10 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v10 + 32) = name;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)name, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v10, 0LL);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB674C(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB674C(v17);
  v18 = **(UnityEngine_Object_o ***)(v17 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v10 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1B64ACC(Instance, v12);
  v20 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v20, 0, 0LL);
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

  v4 = QuestTree__CheckMapGimmickCond_33829484(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1B64ACC(v4, v5);
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
    sub_1B64ACC(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_33832456(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_33832456(
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
    sub_1B64ACC(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_33832456(
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
    sub_1B64ACC(this, nowTime);
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

  if ( (byte_49FB5FE & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_49FB5FE = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
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
  if ( (byte_49FB5FA & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_49FB5FA = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FB60E & 1) == 0 )
  {
    sub_1B64870(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo, endCallback);
    byte_49FB60E = 1;
  }
  v5 = sub_1B64ABC(QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B64ACC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)endCallback, v10, v11);
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
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FB60F & 1) == 0 )
  {
    sub_1B64870(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo, *(_QWORD *)&targetWarId);
    byte_49FB60F = 1;
  }
  v7 = sub_1B64ABC(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B64ACC(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)endCallback, v12, v13);
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
  QuestTree___c__DisplayClass27_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_49FB602 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_1B64870(&System_Predicate_MapControl_MapInfo__TypeInfo, v5);
    sub_1B64870(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__, v6);
    sub_1B64870(&QuestTree___c__DisplayClass27_0_TypeInfo, v7);
    byte_49FB602 = 1;
  }
  v8 = (QuestTree___c__DisplayClass27_0_o *)sub_1B64ABC(QuestTree___c__DisplayClass27_0_TypeInfo);
  QuestTree___c__DisplayClass27_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64ACC(v9, v10);
  v8->fields.mapId = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v12,
                                   (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v4; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotEntity_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  BlankEarthSpotEntity_o *v16; // x21
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v17; // x22
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  bool result; // w0

  v4 = this;
  if ( (byte_49FB77B & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B64870(&BlankEarthSpotMaster_TypeInfo, method);
    byte_49FB77B = 1;
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
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)v4->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v9 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v4->fields.__7__wrap1 = v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
    v12 = 0;
    v4->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)&v4->fields.__7__wrap1;
  _7__wrap1 = v4->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v12 < (int)max_length )
  {
    if ( v12 >= max_length )
      sub_1B64AD4(this, method);
    v16 = _7__wrap1->m_Items[v12];
    if ( v16 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)v4->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v16->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v17 = this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v16, (MapControl_SpotInfo_o *)this, 0LL);
          v4->fields.__2__current = (struct MapControl_SpotInfo_o *)v17;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B64814(p__2__current, (int32_t)v17, v19, v20);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1B64ACC(this, method);
  }
  this->klass = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v6; // x20
  struct QuestTree_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FB77C & 1) == 0 )
  {
    sub_1B64870(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, method);
    byte_49FB77C = 1;
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
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B64ABC(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&v6->fields.blankEarthSpotMaster,
    (int32_t)_3__blankEarthSpotMaster,
    v12,
    v13);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v6;
}


MapControl_SpotInfo_o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__43__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
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
  QuestTree__Init_d__15_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  TerminalPramsManager_c *v9; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  __int64 v11; // x0
  __int64 v12; // x0
  UnityEngine_Object_o *v13; // x21
  System_Collections_IEnumerator_o *v14; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  bool result; // w0
  __int64 v19; // x0
  __int64 v20; // x0
  UnityEngine_Object_o *v21; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_49FB77D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5);
    this = (QuestTree__Init_d__15_o *)sub_1B64870(&TerminalPramsManager_TypeInfo, v6);
    byte_49FB77D = 1;
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
        if ( !byte_49FB80D )
        {
          sub_1B64870(&TerminalPramsManager_TypeInfo, method);
          byte_49FB80D = 1;
        }
        v9 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v9 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v9->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v11 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
            v11 = sub_1BB674C(v11);
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
          if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
            v12 = sub_1BB674C(v12);
          v13 = **(UnityEngine_Object_o ***)(v12 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0LL);
              v14 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B64814(p__2__current, (int32_t)v14, v16, v17);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1B64ACC(this, method);
      }
      v19 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1BB674C(v19);
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1BB674C(v20);
      v21 = **(UnityEngine_Object_o ***)(v20 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FB777 & 1) == 0 )
  {
    sub_1B64870(&QuestTree___c_TypeInfo, v1);
    byte_49FB777 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(QuestTree___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestTree___c___GetLatestProgressWarInfo_b__36_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1B64ACC(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__29_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.targetMapId;
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__41_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int klass_high; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || !a
    || (klass_high = HIDWORD(this[3].klass), (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_1B64ACC(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__41_1(
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
    sub_1B64ACC(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__42_11(
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
    sub_1B64ACC(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__42_2(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *a,
        MapControl_WarInfo_o *b,
        const MethodInfo *method)
{
  int klass_high; // w20

  if ( !b
    || (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(b, 0LL)) == 0LL
    || !a
    || (klass_high = HIDWORD(this[3].klass), (this = (QuestTree___c_o *)MapControl_WarInfo__GetMine(a, 0LL)) == 0LL) )
  {
    sub_1B64ACC(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__42_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass22_0___ctor(
        QuestTree___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass22_0___GetMapGimmickInfo_b__0(
        QuestTree___c__DisplayClass22_0_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass23_0___ctor(
        QuestTree___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass23_0___GetQuestInfo_b__0(
        QuestTree___c__DisplayClass23_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass27_0___ctor(
        QuestTree___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass27_0___mfGetMapInfoByMapID_b__0(
        QuestTree___c__DisplayClass27_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass29_0___ctor(
        QuestTree___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass29_0___GetUserReachableMapList_b__1(
        QuestTree___c__DisplayClass29_0_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass29_0_o *v4; // x20

  v4 = this;
  if ( (byte_49FB778 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_49FB778 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1B64ACC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass33_0___ctor(
        QuestTree___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass33_0___GetWarID_ByQuestID_b__0(
        QuestTree___c__DisplayClass33_0_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass33_0_o *v3; // x19

  if ( !x || (v3 = this, (this = (QuestTree___c__DisplayClass33_0_o *)MapControl_QuestInfo__GetMine(x, 0LL)) == 0LL) )
    sub_1B64ACC(this, x);
  return this->fields.questId == v3->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass41_0___ctor(
        QuestTree___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass41_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass41_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void __fastcall QuestTree___c__DisplayClass42_0___ctor(
        QuestTree___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass42_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass42_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.id == this->fields.targetWarId;
}


void __fastcall QuestTree___c__DisplayClass42_1___ctor(
        QuestTree___c__DisplayClass42_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass42_2___ctor(
        QuestTree___c__DisplayClass42_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass42_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass42_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass42_3___ctor(
        QuestTree___c__DisplayClass42_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass42_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass42_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass42_3_o *v4; // x20

  v4 = this;
  if ( (byte_49FB779 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_3_o *)sub_1B64870(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_49FB779 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1B64ACC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_336637C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass42_4___ctor(
        QuestTree___c__DisplayClass42_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass42_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass42_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void __fastcall QuestTree___c__DisplayClass42_5___ctor(
        QuestTree___c__DisplayClass42_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass42_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass42_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass42_6___ctor(
        QuestTree___c__DisplayClass42_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass42_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass42_6_o *v4; // x20

  v4 = this;
  if ( (byte_49FB77A & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_6_o *)sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_49FB77A = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1B64ACC(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__41___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__41__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v2; // x26
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
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *MasterData_object; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppObject *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  Il2CppObject *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  Il2CppObject *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_Collections_Generic_Dictionary_int__object__o *v93; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  System_Object_array *Entitys_object__object; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v101; // w8
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v105; // x9
  WarEntity_o *v106; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v108; // x19
  int32_t v109; // w2
  int32_t v110; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v117; // x23
  int64_t v118; // x23
  Il2CppObject *v119; // x8
  unsigned int _2__current; // w9
  __int64 v121; // x8
  _QWORD *v122; // x9
  __int64 _2__current_low; // x10
  __int64 v124; // x8
  int32_t v125; // w2
  int32_t v126; // w3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v127; // x22
  unsigned int v128; // w27
  __int64 v129; // x8
  int32_t v130; // w24
  int32_t v131; // w2
  int32_t v132; // w3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v135; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v137; // x23
  Il2CppClass **v138; // x0
  Il2CppObject *v139; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v140; // x25
  int v141; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v143; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v144; // x8
  SpotEntity_o **v145; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v146; // t1
  int32_t v147; // w2
  int32_t v148; // w3
  __int64 v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  __int64 v152; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v154; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v155; // x25
  int v156; // w19
  unsigned int v157; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v158; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v159; // x8
  SpotRoadEntity_o **v160; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v161; // t1
  int32_t v162; // w2
  int32_t v163; // w3
  __int64 v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  __int64 v167; // x8
  Il2CppObject *v168; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v169; // x24
  int v170; // w19
  int v171; // w25
  __int64 v172; // x8
  int32_t v173; // w2
  int32_t v174; // w3
  __int64 v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  __int64 v178; // x8
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v180; // x22
  Il2CppObject *v181; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v183; // w2
  int32_t v184; // w3
  Il2CppObject *v185; // x22
  struct QuestTree___c__DisplayClass41_0_o **p__8__1; // x21
  int32_t v187; // w2
  int32_t v188; // w3
  int64_t v189; // x22
  MapControl_WarInfo_o *v190; // x23
  int32_t v191; // w2
  int32_t v192; // w3
  MapControl_MapInfo_o *v193; // x22
  int32_t v194; // w2
  int32_t v195; // w3
  MapControl_SpotInfo_o *v196; // x22
  int32_t v197; // w2
  int32_t v198; // w3
  WarEntity_o *v199; // x22
  int32_t v200; // w2
  int32_t v201; // w3
  Il2CppObject *v202; // x0
  int32_t v203; // w2
  int32_t v204; // w3
  bool v205; // zf
  int v206; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x26
  bool result; // w0
  QuestEntity_o *v209; // x23
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x22
  int32_t QuestPhase; // w22
  struct QuestTree___c__DisplayClass41_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v214; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v216; // w2
  int32_t v217; // w3
  Il2CppObject *v218; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v223; // w2
  int32_t v224; // w3
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int32_t v226; // w2
  int32_t v227; // w3
  WarEntity_o *Mine; // x0
  int32_t v229; // w2
  int32_t v230; // w3
  int v231; // w25
  int32_t v232; // w2
  int32_t v233; // w3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v234; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v236; // w2
  int32_t v237; // w3
  struct WarEntity_o *warEnt_5__23; // x8
  int v239; // w19
  struct MapControl_SpotInfo_o *v240; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v242; // x9
  struct MapControl_MapInfo_o *v243; // x9
  bool v244; // w8
  int32_t v245; // w2
  int32_t v246; // w3
  Il2CppObject *v247; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v248; // x21
  int v249; // w19
  int v250; // w22
  __int64 v251; // x8
  __int64 v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  __int64 v255; // x8
  int32_t v256; // w2
  int32_t v257; // w3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v259; // x22
  Il2CppObject *v260; // x23
  struct QuestTree___c_StaticFields *v261; // x0
  int32_t v262; // w2
  int32_t v263; // w3
  int32_t v264; // w2
  int32_t v265; // w3
  int32_t v266; // w2
  int32_t v267; // w3
  int32_t v268; // w2
  int32_t v269; // w3
  int32_t v270; // w2
  int32_t v271; // w3
  int32_t v272; // w2
  int32_t v273; // w3
  int32_t v274; // w2
  int32_t v275; // w3
  int32_t v276; // w2
  int32_t v277; // w3
  ServantStatusBattleListViewItem_o *v278; // x26
  int v279; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v280; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v281; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v282; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v283; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v285; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v289; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_49FB77E & 1) == 0 )
  {
    sub_1B64870(&System_Comparison_MapControl_QuestInfo__TypeInfo, method);
    sub_1B64870(&System_Comparison_MapControl_WarInfo__TypeInfo, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v4);
    sub_1B64870(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_EventStatusMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_MapGimmickMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_MapMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPickupMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_SpotMaster___, v14);
    sub_1B64870(&Method_DataManager_GetMasterData_SpotRoadMaster___, v15);
    sub_1B64870(&Method_DataManager_GetMasterData_UserQuestMaster___, v16);
    sub_1B64870(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v17);
    sub_1B64870(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v18);
    sub_1B64870(&DataManager_TypeInfo, v19);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20);
    sub_1B64870(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v22);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v23);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v24);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v25);
    sub_1B64870(&long___TypeInfo, v26);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v27);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v28);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v29);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v30);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v31);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v32);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v33);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v34);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v35);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v36);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v37);
    sub_1B64870(&MapControl_MapInfo_TypeInfo, v38);
    sub_1B64870(&NetworkManager_TypeInfo, v39);
    sub_1B64870(&OptionManager_TypeInfo, v40);
    sub_1B64870(&System_Predicate_MapControl_SpotInfo__TypeInfo, v41);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B64870(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v44);
    sub_1B64870(&MapControl_SpotInfo_TypeInfo, v45);
    sub_1B64870(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, v46);
    sub_1B64870(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, v47);
    sub_1B64870(&Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__, v48);
    sub_1B64870(&QuestTree___c__DisplayClass41_0_TypeInfo, v49);
    sub_1B64870(&QuestTree___c_TypeInfo, v50);
    sub_1B64870(&WarEntity_TypeInfo, v51);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B64870(&MapControl_WarInfo_TypeInfo, v52);
    byte_49FB77E = 1;
  }
  v289 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v285 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  v283 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_262;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._dataManager_5__2, (int32_t)Instance, v55, v56);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v2->fields._mapMaster_5__3,
        (int32_t)MasterData_object,
        v58,
        v59);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v60 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v60;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._spotMaster_5__4, (int32_t)v60, v61, v62);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v63 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v63;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._blankEarthSpotMaster_5__5, (int32_t)v63, v64, v65);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v66 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v66;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._questMaster_5__6, (int32_t)v66, v67, v68);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v69 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v69;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._questPhaseMaster_5__7, (int32_t)v69, v70, v71);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v72 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v72;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._eventMaster_5__8, (int32_t)v72, v73, v74);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v75 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v75;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._eventDetailMaster_5__9, (int32_t)v75, v76, v77);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v78 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v78;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusMaster_5__10, (int32_t)v78, v79, v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v81 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v81;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int32_t)v81,
        v82,
        v83);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v84 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v84;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._spotRoadMaster_5__12, (int32_t)v84, v85, v86);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v87;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._mapGimmickMaster_5__13, (int32_t)v87, v88, v89);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v90 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v90;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._questPickupMaster_5__14, (int32_t)v90, v91, v92);
      v93 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v93,
        (const MethodInfo_312528C *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v93;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v93,
        v94,
        v95);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      Entitys_object__object = DataManager__getEntitys_object__object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E3B928 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys_object__object;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v2->fields._warList_5__16,
        (int32_t)Entitys_object__object,
        v97,
        v98);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_262;
      max_length = warList_5__16->max_length;
      v101 = 0;
      v2->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      goto LABEL_122;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v2->fields.__1__state = -1;
      goto LABEL_246;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_262;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v101 < max_length )
  {
    v105 = v2->fields._warList_5__16;
    if ( !v105 )
      goto LABEL_262;
    if ( v101 >= v105->max_length )
      goto LABEL_144;
    v106 = v105->m_Items[v101];
    if ( !v106 )
      goto LABEL_262;
    if ( !_4__this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_262;
    id = v106->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_262;
    v108 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_262;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_262;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v108, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_262;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v289,
               (int32_t)this,
               (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v289;
          if ( !v289 )
            goto LABEL_262;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v289, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)entity;
            if ( !entity )
              goto LABEL_262;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_262;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v117 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_262;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v117->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_262;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_3125C60 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v118 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B64918(long___TypeInfo, 3LL);
        v119 = entity;
        if ( !entity || !this )
          goto LABEL_262;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_144;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_144;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v119[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_144;
        this->fields.endCallback = (struct System_Action_o *)v119[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v118, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_262;
    v121 = *(_QWORD *)&this->fields.__1__state;
    v122 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v121 )
      goto LABEL_262;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v121 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v108,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
    }
    else
    {
      v124 = v121 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v124 + 32) = v108;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v124 + 32), (int32_t)v108, v109, v110);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_262;
    v127 = this;
    v282 = this->fields.__2__current;
    if ( (int)v282 >= 1 )
    {
      if ( !(_DWORD)v282 )
        goto LABEL_144;
      v128 = 0;
      v280 = this;
      v281 = v108;
      while ( 1 )
      {
        v129 = *((_QWORD *)&v127->fields.__4__this + (int)v128);
        if ( !v129 )
          goto LABEL_262;
        v130 = *(_DWORD *)(v129 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__AddChild(v108, v130, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_262;
        items = allMapInfoList->fields._items;
        v135 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_262;
        size = allMapInfoList->fields._size;
        v137 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
        }
        else
        {
          v138 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v138[4] = (Il2CppClass *)v137;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v138 + 4), (int32_t)v137, v131, v132);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotMaster__getList((SpotMaster_o *)this, v130, 0LL);
        if ( !this )
          goto LABEL_262;
        v139 = this->fields.__2__current;
        v140 = this;
        v141 = (_DWORD)v139 - 1;
        if ( (int)v139 >= 1 )
          break;
LABEL_87:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v137,
                                                                   v283->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_262;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v283->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v130,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        v154 = this->fields.__2__current;
        v155 = this;
        v156 = (_DWORD)v154 - 1;
        if ( (int)v154 >= 1 )
        {
          v157 = 0;
          while ( 1 )
          {
            v158 = &v155->klass + (int)v157;
            v161 = v158[4];
            v160 = (SpotRoadEntity_o **)(v158 + 4);
            v159 = v161;
            if ( !v161 || !v137 )
              goto LABEL_262;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v137,
                                                                       (int32_t)v159->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v157 >= LODWORD(v155->fields.__2__current) )
              goto LABEL_144;
            QuestTree__SetupSpotRoadInfo(_4__this, *v160, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_262;
            method = (const MethodInfo *)spotRoadInfo;
            v164 = *(_QWORD *)&this->fields.__1__state;
            v165 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v164 )
              goto LABEL_262;
            v166 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v166 >= *(_DWORD *)(v164 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
            }
            else
            {
              v167 = v164 + 8 * v166;
              LODWORD(this->fields.__2__current) = v166 + 1;
              *(_QWORD *)(v167 + 32) = method;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v167 + 32), (int32_t)method, v162, v163);
            }
            if ( v156 == v157 )
              break;
            if ( ++v157 >= LODWORD(v155->fields.__2__current) )
              goto LABEL_144;
          }
        }
        v2 = v283;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v283->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v130,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        v168 = this->fields.__2__current;
        v169 = this;
        v170 = (_DWORD)v168 - 1;
        if ( (int)v168 >= 1 )
        {
          v171 = 0;
          while ( 1 )
          {
            v172 = *((_QWORD *)&v169->fields.__4__this + v171);
            if ( !v172 )
              goto LABEL_262;
            if ( !v137 )
              goto LABEL_262;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v137, *(_DWORD *)(v172 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_262;
            method = (const MethodInfo *)mapGimmickInfo;
            v175 = *(_QWORD *)&this->fields.__1__state;
            v176 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v175 )
              goto LABEL_262;
            v177 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v177 >= *(_DWORD *)(v175 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
            }
            else
            {
              v178 = v175 + 8 * v177;
              LODWORD(this->fields.__2__current) = v177 + 1;
              *(_QWORD *)(v178 + 32) = method;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v178 + 32), (int32_t)method, v173, v174);
            }
            if ( v170 == v171 )
              break;
            if ( (unsigned int)++v171 >= LODWORD(v169->fields.__2__current) )
              goto LABEL_144;
          }
        }
        v108 = v281;
        v127 = v280;
        if ( ++v128 == (_DWORD)v282 )
          goto LABEL_120;
        if ( v128 >= LODWORD(v280->fields.__2__current) )
          goto LABEL_144;
      }
      for ( i = 0; i < LODWORD(v140->fields.__2__current); ++i )
      {
        v143 = &v140->klass + (int)i;
        v146 = v143[4];
        v145 = (SpotEntity_o **)(v143 + 4);
        v144 = v146;
        if ( !v146 || !v137 )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddChild(
                                                                   v137,
                                                                   (int32_t)v144->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v140->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v145, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_262;
        method = (const MethodInfo *)spotInfo;
        v149 = *(_QWORD *)&this->fields.__1__state;
        v150 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v149 )
          goto LABEL_262;
        v151 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v151 >= *(_DWORD *)(v149 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
        }
        else
        {
          v152 = v149 + 8 * v151;
          LODWORD(this->fields.__2__current) = v151 + 1;
          *(_QWORD *)(v152 + 32) = method;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v152 + 32), (int32_t)method, v147, v148);
        }
        if ( v141 == i )
          goto LABEL_87;
      }
LABEL_144:
      sub_1B64AD4(this, method);
    }
LABEL_120:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B64814(p__2__current, 0, v125, v126);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_122:
    max_length = v2->fields._warCount_5__19;
    v101 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v101;
  }
  if ( !_4__this )
    goto LABEL_262;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  }
  v180 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v180 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v181 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v180 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v180, v181, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Comparison_MapControl_WarInfo__o *)v180;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)v180, v183, v184);
  }
  if ( !allWarInfoList )
    goto LABEL_262;
  System_Collections_Generic_List_object___Sort_55252244(
    allWarInfoList,
    v180,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v185 = (Il2CppObject *)sub_1B64ABC(QuestTree___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor(v185, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v185;
  p__8__1 = &v2->fields.__8__1;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v185, v187, v188);
  v189 = v2->fields._nowTime_5__17;
  v190 = (MapControl_WarInfo_o *)sub_1B64ABC(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v190, v189, 0LL);
  v2->fields._warInfo_5__20 = v190;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._warInfo_5__20, (int32_t)v190, v191, v192);
  v193 = (MapControl_MapInfo_o *)sub_1B64ABC(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v193, 0LL);
  v2->fields._mapInfo_5__21 = v193;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._mapInfo_5__21, (int32_t)v193, v194, v195);
  v196 = (MapControl_SpotInfo_o *)sub_1B64ABC(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v196, 0LL);
  v2->fields._spotInfo_5__22 = v196;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._spotInfo_5__22, (int32_t)v196, v197, v198);
  v199 = (WarEntity_o *)sub_1B64ABC(WarEntity_TypeInfo);
  WarEntity___ctor(v199, 0LL);
  v2->fields._warEnt_5__23 = v199;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._warEnt_5__23, (int32_t)v199, v200, v201);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_262;
  v202 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v202;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._userQuestMaster_5__24, (int32_t)v202, v203, v204);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_262;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v205 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questMaster_5__6;
  v206 = v205 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v206;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_262;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_262;
    v209 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v285 = 0LL;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_262;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v285, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v285;
      if ( !v285 )
        goto LABEL_262;
      QuestPhase = UserQuestEntity__getQuestPhase(v285, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__getSpotId_39150984(v209, QuestPhase + 1, 0LL);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_262;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_262;
      v214 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v216, v217);
      }
      if ( !v214 )
        goto LABEL_262;
      v218 = System_Collections_Generic_List_object___Find(
               v214,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v283;
      v283->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v218;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v283->fields._spotInfo_5__22, (int32_t)v218, v219, v220);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v283->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_262;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v283->fields._mapInfoNow_5__27 != MapID )
      {
        v283->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v283->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&v283->fields._mapInfo_5__21,
          (int32_t)MapInfoByMapID,
          v223,
          v224);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v283->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v283->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v283->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v283->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1B64814(
            (ServantStatusBattleListViewItem_o *)&v283->fields._warInfo_5__20,
            (int32_t)WarInfoByWarID,
            v226,
            v227);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v283->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_262;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v283->fields._warEnt_5__23 = Mine;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v283->fields._warEnt_5__23, (int32_t)Mine, v229, v230);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_262;
    if ( !v285 )
      goto LABEL_185;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v285;
    if ( !v285 )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v285, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_173;
    if ( !v285 )
      goto LABEL_262;
    if ( v285->fields.challengeNum >= 1 )
    {
LABEL_173:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_262;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v285;
    if ( !v285 )
      goto LABEL_262;
    if ( UserQuestEntity__getClearNum(v285, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_262;
LABEL_185:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v231 = 0;
      goto LABEL_186;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v285 )
      goto LABEL_262;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v285->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_262;
    v231 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_262;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_262;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_186:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_262;
    v234 = this;
    if ( !this )
      goto LABEL_262;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields._eventMaster_5__8, (int32_t)method, v232, v233);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v234->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&v234->fields._questPhaseMaster_5__7,
      (int32_t)spotInfo_5__22,
      v236,
      v237);
    if ( !_4__this )
      goto LABEL_262;
    v234->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v234,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_262;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_200;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_262;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_31273EC *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)value;
      if ( !value )
        goto LABEL_262;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_200:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v234, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v234->fields.__4__this) = 0;
LABEL_204:
        v239 = 1;
        goto LABEL_205;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v209, (MapControl_QuestInfo_o *)v234, v2->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_204;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_262;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v239 = 0;
LABEL_205:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v234, 0LL) )
    {
      if ( ((v231 | v239) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_262;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_262;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v234->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v234, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v234,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v240 = v2->fields._spotInfo_5__22;
          if ( !v240 )
            goto LABEL_262;
          v240->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_262;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v234,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v242 = v2->fields._spotInfo_5__22;
        if ( !v242 )
          goto LABEL_262;
        v242->fields._IsNext_k__BackingField = 1;
        v243 = v2->fields._mapInfo_5__21;
        if ( !v243 )
          goto LABEL_262;
        v243->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v209, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_262;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v285 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v285, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v285 )
          goto LABEL_262;
        v244 = v285->fields.challengeNum == 0;
      }
      else
      {
        v244 = 0;
      }
    }
    else
    {
      v244 = 1;
    }
    LOBYTE(v234->fields.__8__1) = v244;
    HIDWORD(v234->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_262;
    LODWORD(v234->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_262;
    v247 = this->fields.__2__current;
    v248 = this;
    v249 = (_DWORD)v247 - 1;
    if ( (int)v247 >= 1 )
    {
      v250 = 0;
      while ( 1 )
      {
        v251 = *((_QWORD *)&v248->fields.__4__this + v250);
        if ( !v251 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v234,
                                                                   *(_DWORD *)(v251 + 16),
                                                                   *(_DWORD *)(v251 + 20),
                                                                   0LL);
        if ( v249 == v250 )
          goto LABEL_239;
        if ( (unsigned int)++v250 >= LODWORD(v248->fields.__2__current) )
          goto LABEL_144;
      }
LABEL_262:
      sub_1B64ACC(this, method);
    }
LABEL_239:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_262;
    v252 = *(_QWORD *)&this->fields.__1__state;
    v253 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v252 )
      goto LABEL_262;
    v254 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v254 >= *(_DWORD *)(v252 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v234,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    }
    else
    {
      v255 = v252 + 8 * v254;
      LODWORD(this->fields.__2__current) = v254 + 1;
      *(_QWORD *)(v255 + 32) = v234;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v255 + 32), (int32_t)v234, v245, v246);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0LL;
      v278 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B64814(v278, 0, v256, v257);
      v279 = 2;
      goto LABEL_261;
    }
LABEL_246:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_262;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  }
  v259 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v259 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v260 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v259 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v259, v260, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, 0LL);
    v261 = QuestTree___c_TypeInfo->static_fields;
    v261->__9__41_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v259;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v261->__9__41_1, (int32_t)v259, v262, v263);
  }
  if ( !allQuestInfoList )
    goto LABEL_262;
  System_Collections_Generic_List_object___Sort_55252244(
    allQuestInfoList,
    v259,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, 0, v264, v265);
  v2->fields._warInfo_5__20 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._warInfo_5__20, 0, v266, v267);
  v2->fields._mapInfo_5__21 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._mapInfo_5__21, 0, v268, v269);
  v2->fields._spotInfo_5__22 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._spotInfo_5__22, 0, v270, v271);
  v2->fields._warEnt_5__23 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._warEnt_5__23, 0, v272, v273);
  v2->fields._userQuestMaster_5__24 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._userQuestMaster_5__24, 0, v274, v275);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_262;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v2->fields.endCallback )
    return 0;
  v2->fields.__2__current = 0LL;
  v278 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B64814(v278, 0, v276, v277);
  v279 = 3;
LABEL_261:
  *(_DWORD *)&v278[-1].fields.isMine = v279;
  return 1;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__41__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__41__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__41__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v4; // x8
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
  QuestTree_o *_4__this; // x19
  Il2CppObject *v109; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x0
  __int64 v114; // x1
  struct QuestTree___c__DisplayClass42_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  __int64 v120; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v122; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v124; // x0
  Il2CppObject *v125; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  __int64 v129; // x1
  DataManager_o *v130; // x0
  Il2CppObject *v131; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  __int64 v135; // x1
  DataManager_o *v136; // x0
  Il2CppObject *v137; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  __int64 v141; // x1
  DataManager_o *v142; // x0
  Il2CppObject *v143; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  __int64 v147; // x1
  DataManager_o *v148; // x0
  __int64 v149; // x1
  Il2CppObject *v150; // x24
  DataManager_o *v151; // x0
  __int64 v152; // x1
  Il2CppObject *v153; // x23
  DataManager_o *v154; // x0
  __int64 v155; // x1
  Il2CppObject *v156; // x22
  DataManager_o *v157; // x0
  __int64 v158; // x1
  Il2CppObject *v159; // x21
  DataManager_o *v160; // x0
  Il2CppObject *v161; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  __int64 v165; // x1
  DataManager_o *v166; // x0
  Il2CppObject *v167; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v168; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  __int64 v171; // x1
  DataManager_o *v172; // x0
  Il2CppObject *v173; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v174; // x0
  int32_t v175; // w2
  int32_t v176; // w3
  System_Collections_Generic_Dictionary_int__object__o *v177; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v178; // x0
  int32_t v179; // w2
  int32_t v180; // w3
  Il2CppObject *v181; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v182; // x0
  int32_t v183; // w2
  int32_t v184; // w3
  __int64 v185; // x1
  DataManager_o *v186; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object__object; // x25
  Il2CppObject *v188; // x27
  System_Func_object__bool__o *v189; // x26
  Il2CppObject *v190; // x0
  __int64 v191; // x1
  struct QuestTree___c__DisplayClass42_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v196; // x27
  System_Predicate_object__o *v197; // x26
  __int64 v198; // x0
  __int64 v199; // x1
  __int64 Index; // x0
  __int64 v201; // x1
  System_Collections_Generic_List_object__o *v202; // x0
  struct QuestTree___c__DisplayClass42_1_o *v203; // x9
  MapControl_RootInfo_o *v204; // x0
  struct MapControl_WarInfo_o *v205; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  __int64 v209; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v211; // x1
  int32_t v212; // w2
  int32_t v213; // w3
  MapControl_WarInfo_o *v214; // x0
  __int64 EventId; // x0
  __int64 v216; // x1
  _BOOL8 v217; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v218; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v220; // x0
  MapControl_WarInfo_o *v221; // x0
  __int64 v222; // x0
  __int64 v223; // x1
  __int64 v224; // x1
  __int64 v225; // x1
  __int64 v226; // x1
  MapControl_WarInfo_o *v227; // x0
  __int64 v228; // x0
  __int64 v229; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v231; // x0
  __int64 v232; // x0
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v234; // x1
  struct QuestTree___c__DisplayClass42_1_o *v235; // x8
  Il2CppObject *v236; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v238; // x21
  System_Int64_array *v239; // x0
  __int64 v240; // x1
  Il2CppObject *v241; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v243; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v245; // x1
  _QWORD *v246; // x9
  __int64 size; // x10
  Il2CppClass **v248; // x8
  __int64 v249; // x0
  __int64 v250; // x1
  int32_t v251; // w9
  struct QuestTree___c__DisplayClass42_1_o *v252; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v254; // x0
  __int64 v255; // x1
  SpotRoadEntity_array *v256; // x20
  int v257; // w25
  il2cpp_array_size_t i; // w26
  __int64 v259; // x21
  __int64 v260; // x0
  __int64 v261; // x1
  SpotRoadEntity_o *v262; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v264; // x24
  __int64 v265; // x0
  __int64 v266; // x1
  unsigned int v267; // w0
  __int64 v268; // x1
  System_Collections_Generic_List_object__o *v269; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v271; // x1
  int32_t v272; // w2
  int32_t v273; // w3
  System_Collections_Generic_List_object__o *v274; // x0
  Il2CppObject *v275; // x1
  struct System_Object_array *v276; // x8
  _QWORD *v277; // x9
  __int64 v278; // x10
  Il2CppClass **v279; // x8
  struct QuestTree___c__DisplayClass42_1_o *v280; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v282; // x0
  __int64 v283; // x1
  int32_t v284; // w2
  int32_t v285; // w3
  MapGimmickEntity_array *v286; // x20
  int v287; // w24
  il2cpp_array_size_t j; // w25
  __int64 v289; // x21
  __int64 v290; // x0
  __int64 v291; // x1
  MapGimmickEntity_o *v292; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v294; // x23
  __int64 v295; // x0
  __int64 v296; // x1
  unsigned int v297; // w0
  __int64 v298; // x1
  System_Collections_Generic_List_object__o *v299; // x0
  MapControl_MapInfo_o *v300; // x0
  __int64 v301; // x1
  int32_t v302; // w2
  int32_t v303; // w3
  System_Collections_Generic_List_object__o *v304; // x0
  Il2CppObject *v305; // x1
  struct System_Object_array *v306; // x8
  _QWORD *v307; // x9
  __int64 v308; // x10
  Il2CppClass **v309; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v310; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v311; // x8
  int v312; // w9
  ServantStatusBattleListViewItem_o *p_mapInfo_5__16; // x8
  __int64 v314; // x0
  __int64 v315; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v316; // x8
  int32_t mapCount_5__13; // w10
  int32_t v318; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v320; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v322; // x0
  int32_t v323; // w2
  int32_t v324; // w3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v326; // x10
  MapEntity_o *v327; // x9
  struct QuestTree___c__DisplayClass42_1_o *v328; // x22
  struct MapControl_WarInfo_o *v329; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v332; // w2
  int32_t v333; // w3
  struct MapControl_WarInfo_o *v334; // x8
  System_Collections_Generic_List_object__o *v335; // x0
  struct QuestTree___c__DisplayClass42_1_o *v336; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v339; // w2
  int32_t v340; // w3
  __int64 v341; // x0
  __int64 v342; // x1
  System_Collections_Generic_List_object__o *v343; // x0
  struct QuestTree___c__DisplayClass42_1_o *v344; // x8
  MapControl_WarInfo_o *v345; // x0
  struct MapControl_MapInfo_o *v346; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v347; // x0
  int32_t v348; // w2
  int32_t v349; // w3
  __int64 v350; // x1
  int32_t v351; // w2
  int32_t v352; // w3
  System_Collections_Generic_List_object__o *v353; // x0
  struct System_Object_array *v354; // x8
  Il2CppObject *v355; // x1
  _QWORD *v356; // x9
  __int64 v357; // x10
  Il2CppClass **v358; // x8
  __int64 v359; // x0
  __int64 v360; // x1
  System_Collections_Generic_List_object__o *v361; // x20
  QuestTree___c_c *v362; // x8
  System_Comparison_T__o *_9__42_2; // x21
  Il2CppObject *v364; // x22
  struct QuestTree___c_StaticFields *v365; // x0
  int32_t v366; // w2
  int32_t v367; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v368; // x0
  int32_t v369; // w2
  int32_t v370; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v371; // x0
  int32_t v372; // w2
  int32_t v373; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v374; // x0
  int32_t v375; // w2
  int32_t v376; // w3
  Il2CppObject *v377; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v378; // x0
  int32_t v379; // w2
  int32_t v380; // w3
  int64_t v381; // x21
  MapControl_WarInfo_o *v382; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v383; // x0
  int32_t v384; // w2
  int32_t v385; // w3
  MapControl_MapInfo_o *v386; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v387; // x0
  int32_t v388; // w2
  int32_t v389; // w3
  MapControl_SpotInfo_o *v390; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v391; // x0
  int32_t v392; // w2
  int32_t v393; // w3
  WarEntity_o *v394; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v395; // x0
  int32_t v396; // w2
  int32_t v397; // w3
  __int64 v398; // x1
  DataManager_o *v399; // x0
  Il2CppObject *v400; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v401; // x0
  int32_t v402; // w2
  int32_t v403; // w3
  Il2CppObject *Master_object; // x0
  __int64 v405; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v406; // x8
  struct QuestTree___c__DisplayClass42_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v409; // x1
  int32_t v410; // w9
  struct QuestTree___c__DisplayClass42_6_o *v411; // x20
  System_Collections_Generic_List_int__o *v412; // x21
  __int64 v413; // x0
  __int64 v414; // x1
  int32_t v415; // w2
  int32_t v416; // w3
  __int64 v417; // x1
  System_Collections_Generic_List_object__o *v418; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v419; // x9
  __int128 v420; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap24; // x0
  int32_t v422; // w2
  int32_t v423; // w3
  const MethodInfo *v424; // x1
  bool v425; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v426; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v429; // x1
  int32_t v430; // w2
  int32_t v431; // w3
  struct QuestTree___c__DisplayClass42_0_o *v432; // x9
  struct QuestTree___c__DisplayClass42_6_o *v433; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v436; // x9
  _QWORD *v437; // x10
  __int64 v438; // x11
  unsigned __int64 v439; // t2
  __int64 v440; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v441; // x8
  DataMasterBase_o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x20
  Il2CppObject *v444; // x22
  System_Func_object__bool__o *v445; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v446; // x0
  System_Object_array *v447; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v448; // x0
  int32_t v449; // w2
  int32_t v450; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v451; // x8
  __int64 mapIdx_5__12; // x0
  int32_t v453; // w9
  struct QuestTree___c__DisplayClass42_1_o *v454; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v456; // x0
  __int64 v457; // x1
  SpotEntity_array *v458; // x20
  int v459; // w25
  il2cpp_array_size_t k; // w26
  __int64 v461; // x21
  __int64 v462; // x0
  __int64 v463; // x1
  SpotEntity_o *v464; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v466; // x24
  __int64 v467; // x0
  __int64 v468; // x1
  unsigned int v469; // w0
  __int64 v470; // x1
  System_Collections_Generic_List_object__o *v471; // x0
  MapControl_MapInfo_o *v472; // x0
  __int64 v473; // x1
  int32_t v474; // w2
  int32_t v475; // w3
  System_Collections_Generic_List_object__o *v476; // x0
  Il2CppObject *v477; // x1
  struct System_Object_array *v478; // x8
  _QWORD *v479; // x9
  __int64 v480; // x10
  Il2CppClass **v481; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v482; // x0
  System_Object_array *v483; // x0
  __int64 v484; // x1
  int32_t v485; // w2
  int32_t v486; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v487; // x20
  __int64 v488; // x21
  QuestTree___c_c *v489; // x8
  System_Func_object__int__o *_9__42_6; // x22
  Il2CppObject *v491; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v493; // w2
  int32_t v494; // w3
  System_Collections_Generic_IEnumerable_T__o *v495; // x23
  System_Collections_Generic_HashSet_int__o *v496; // x22
  __int64 v497; // x0
  __int64 v498; // x1
  int32_t v499; // w2
  int32_t v500; // w3
  System_Collections_Generic_List_T__o *v501; // x22
  System_Func_object__bool__o *v502; // x23
  __int64 v503; // x1
  System_Collections_Generic_List_object__o *v504; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v505; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v508; // x20
  struct QuestTree___c__DisplayClass42_6_o *v509; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  int64_t UserId; // x0
  __int64 v512; // x1
  struct QuestTree___c__DisplayClass42_6_o *v513; // x8
  __int64 v514; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_39150984; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v518; // x22
  struct QuestTree___c__DisplayClass42_6_o *v519; // x25
  System_Collections_Generic_List_object__o *v520; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v522; // w2
  int32_t v523; // w3
  Il2CppObject *v524; // x0
  int32_t v525; // w2
  int32_t v526; // w3
  __int64 v527; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v530; // x0
  int32_t v531; // w2
  int32_t v532; // w3
  __int64 v533; // x1
  MapControl_MapInfo_o *v534; // x0
  __int64 v535; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v537; // x0
  int32_t v538; // w2
  int32_t v539; // w3
  __int64 v540; // x1
  MapControl_WarInfo_o *v541; // x0
  struct WarEntity_o *v542; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v543; // x0
  int32_t v544; // w2
  int32_t v545; // w3
  struct QuestTree___c__DisplayClass42_6_o *v546; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v549; // w2
  int32_t v550; // w3
  unsigned int v551; // w0
  __int64 v552; // x1
  System_Collections_Generic_List_object__o *v553; // x0
  MapControl_WarInfo_o *v554; // x0
  __int64 v555; // x1
  _BOOL8 HasStatus; // x0
  __int64 v557; // x1
  MapControl_WarInfo_o *v558; // x0
  WarEntity_o *v559; // x0
  __int64 v560; // x1
  int v561; // w23
  bool v562; // cc
  __int64 v563; // x1
  struct QuestTree___c__DisplayClass42_6_o *v564; // x9
  MapControl_WarInfo_o *v565; // x0
  struct QuestTree___c__DisplayClass42_6_o *v566; // x8
  MapControl_SpotInfo_o *v567; // x0
  MapControl_QuestInfo_o *v568; // x0
  int32_t v569; // w2
  int32_t v570; // w3
  struct MapControl_WarInfo_o *v571; // x1
  MapControl_QuestInfo_o *v572; // x22
  int32_t v573; // w8
  struct MapControl_SpotInfo_o *v574; // x1
  int32_t v575; // w2
  int32_t v576; // w3
  __int64 v577; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v580; // x1
  struct WarEntity_o *v581; // x8
  struct QuestTree___c__DisplayClass42_6_o *v582; // x9
  struct WarEntity_o *v583; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v584; // x0
  _BOOL8 v585; // x0
  __int64 v586; // x1
  struct QuestTree___c__DisplayClass42_6_o *v587; // x8
  __int64 v588; // x1
  MapControl_WarInfo_o *v589; // x0
  int v590; // w24
  __int64 v591; // x1
  MapControl_SpotInfo_o *v592; // x0
  __int64 v593; // x1
  MapControl_SpotInfo_o *v594; // x0
  QuestEntity_o *v595; // x0
  __int64 v596; // x1
  _BOOL8 HasFlag; // x0
  __int64 v598; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v599; // x8
  struct MapControl_SpotInfo_o *v600; // x9
  struct MapControl_MapInfo_o *v601; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v603; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v604; // x8
  struct MapControl_SpotInfo_o *v605; // x9
  struct MapControl_MapInfo_o *v606; // x8
  MapControl_SpotInfo_o *v607; // x0
  UserQuestEntity_o *v608; // x0
  bool v609; // w8
  struct QuestTree___c__DisplayClass42_6_o *v610; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v613; // x1
  struct QuestTree___c__DisplayClass42_6_o *v614; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v616; // x0
  __int64 v617; // x1
  int32_t v618; // w2
  int32_t v619; // w3
  _QWORD *v620; // x20
  __int64 v621; // x8
  int v622; // w21
  int v623; // w23
  __int64 v624; // x8
  System_Collections_Generic_List_object__o *v625; // x0
  struct System_Object_array *v626; // x8
  _QWORD *v627; // x9
  __int64 v628; // x10
  Il2CppClass **v629; // x8
  int32_t v630; // w2
  int32_t v631; // w3
  System_Collections_Generic_List_object__o *v632; // x20
  QuestTree___c_c *v633; // x8
  System_Comparison_T__o *_9__42_11; // x21
  Il2CppObject *v635; // x22
  struct QuestTree___c_StaticFields *v636; // x0
  int32_t v637; // w2
  int32_t v638; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v639; // x0
  int32_t v640; // w2
  int32_t v641; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v642; // x0
  int32_t v643; // w2
  int32_t v644; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v645; // x0
  int32_t v646; // w2
  int32_t v647; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v648; // x0
  int32_t v649; // w2
  int32_t v650; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v651; // x0
  int32_t v652; // w2
  int32_t v653; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v654; // x0
  int32_t v655; // w2
  int32_t v656; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v657; // x0
  int32_t v658; // w2
  int32_t v659; // w3
  Il2CppObject *v660; // x0
  __int64 v661; // x1
  int32_t v662; // w2
  int32_t v663; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v664; // x0
  System_Collections_Generic_List_Enumerator_T__o v665[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v666; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o **v667; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v669; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v673; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v675; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v675 = this;
  if ( (byte_49FB77F & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_1B64870(&System_Comparison_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B64870(&System_Comparison_MapControl_WarInfo__TypeInfo, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_EventStatusMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_MapGimmickMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1B64870(&Method_DataManager_GetMasterData_SpotMaster___, v17);
    sub_1B64870(&Method_DataManager_GetMasterData_SpotRoadMaster___, v18);
    sub_1B64870(&Method_DataManager_GetMasterData_UserQuestMaster___, v19);
    sub_1B64870(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v20);
    sub_1B64870(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v21);
    sub_1B64870(&DataManager_TypeInfo, v22);
    sub_1B64870(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v23);
    sub_1B64870(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_1B64870(&Method_DataMasterBase_getEntitys_QuestEntity___, v25);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v26);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v27);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v28);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v29);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_QuestEntity___, v30);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v31);
    sub_1B64870(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v32);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v33);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v34);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_QuestEntity___, v35);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v36);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v37);
    sub_1B64870(&System_Func_MapControl_SpotInfo__int__TypeInfo, v38);
    sub_1B64870(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v39);
    sub_1B64870(&System_Func_WarEntity__bool__TypeInfo, v40);
    sub_1B64870(&System_Func_QuestEntity__bool__TypeInfo, v41);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int___ctor___75645664, v42);
    sub_1B64870(&System_Collections_Generic_HashSet_int__TypeInfo, v43);
    sub_1B64870(&long___TypeInfo, v44);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v45);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v46);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v47);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v48);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v49);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v50);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v51);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v52);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v53);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v54);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v55);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v56);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v57);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v58);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v59);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v60);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v61);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v62);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v63);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v64);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v65);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v66);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v67);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v68);
    sub_1B64870(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v69);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v70);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v71);
    sub_1B64870(&MapControl_MapInfo_TypeInfo, v72);
    sub_1B64870(&NetworkManager_TypeInfo, v73);
    sub_1B64870(&OptionManager_TypeInfo, v74);
    sub_1B64870(&System_Predicate_MapControl_WarInfo__TypeInfo, v75);
    sub_1B64870(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v76);
    sub_1B64870(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v77);
    sub_1B64870(&System_Predicate_MapControl_MapInfo__TypeInfo, v78);
    sub_1B64870(&System_Predicate_MapControl_SpotInfo__TypeInfo, v79);
    sub_1B64870(&System_Predicate_MapControl_QuestInfo__TypeInfo, v80);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v81);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v82);
    sub_1B64870(&MapControl_SpotInfo_TypeInfo, v83);
    sub_1B64870(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__, v84);
    sub_1B64870(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__, v85);
    sub_1B64870(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__, v86);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v87);
    sub_1B64870(&QuestTree___c__DisplayClass42_0_TypeInfo, v88);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v89);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v90);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v91);
    sub_1B64870(&QuestTree___c__DisplayClass42_1_TypeInfo, v92);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v93);
    sub_1B64870(&QuestTree___c__DisplayClass42_2_TypeInfo, v94);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v95);
    sub_1B64870(&QuestTree___c__DisplayClass42_3_TypeInfo, v96);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v97);
    sub_1B64870(&QuestTree___c__DisplayClass42_4_TypeInfo, v98);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v99);
    sub_1B64870(&QuestTree___c__DisplayClass42_5_TypeInfo, v100);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v101);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v102);
    sub_1B64870(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v103);
    sub_1B64870(&QuestTree___c__DisplayClass42_6_TypeInfo, v104);
    sub_1B64870(&QuestTree___c_TypeInfo, v105);
    sub_1B64870(&WarEntity_TypeInfo, v106);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)sub_1B64870(&MapControl_WarInfo_TypeInfo, v107);
    v4 = v675;
    byte_49FB77F = 1;
  }
  v673 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v669 = 0LL;
  mapGimmickInfo = 0LL;
  v666 = 0LL;
  v667 = &v675;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v109 = (Il2CppObject *)sub_1B64ABC(QuestTree___c__DisplayClass42_0_TypeInfo);
      System_Object___ctor(v109, 0LL);
      v110 = v675;
      v675->fields.__8__2 = (struct QuestTree___c__DisplayClass42_0_o *)v109;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v110->fields.__8__2, (int32_t)v109, v111, v112);
      _8__2 = v675->fields.__8__2;
      if ( !_8__2 )
        sub_1B64ACC(v113, v114);
      _8__2->fields.targetWarId = v675->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v117 = v675;
      v675->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v117->fields._dataManager_5__2, (int32_t)Instance, v118, v119);
      dataManager_5__2 = v675->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1B64ACC(0LL, v120);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapMaster___);
      v124 = v675->fields._dataManager_5__2;
      if ( !v124 )
        sub_1B64ACC(0LL, v122);
      v125 = DataManager__GetMasterData_object_(
               v124,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SpotMaster___);
      v126 = v675;
      v675->fields._spotMaster_5__3 = (struct SpotMaster_o *)v125;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v126->fields._spotMaster_5__3, (int32_t)v125, v127, v128);
      v130 = v675->fields._dataManager_5__2;
      if ( !v130 )
        sub_1B64ACC(0LL, v129);
      v131 = DataManager__GetMasterData_object_(
               v130,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v132 = v675;
      v675->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v131;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v132->fields._blankEarthSpotMaster_5__4,
        (int32_t)v131,
        v133,
        v134);
      v136 = v675->fields._dataManager_5__2;
      if ( !v136 )
        sub_1B64ACC(0LL, v135);
      v137 = DataManager__GetMasterData_object_(
               v136,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
      v138 = v675;
      v675->fields._questMaster_5__5 = (struct QuestMaster_o *)v137;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v138->fields._questMaster_5__5, (int32_t)v137, v139, v140);
      v142 = v675->fields._dataManager_5__2;
      if ( !v142 )
        sub_1B64ACC(0LL, v141);
      v143 = DataManager__GetMasterData_object_(
               v142,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v144 = v675;
      v675->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v143;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v144->fields._questPhaseMaster_5__6, (int32_t)v143, v145, v146);
      v148 = v675->fields._dataManager_5__2;
      if ( !v148 )
        sub_1B64ACC(0LL, v147);
      v150 = DataManager__GetMasterData_object_(
               v148,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
      v151 = v675->fields._dataManager_5__2;
      if ( !v151 )
        sub_1B64ACC(0LL, v149);
      v153 = DataManager__GetMasterData_object_(
               v151,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v154 = v675->fields._dataManager_5__2;
      if ( !v154 )
        sub_1B64ACC(0LL, v152);
      v156 = DataManager__GetMasterData_object_(
               v154,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v157 = v675->fields._dataManager_5__2;
      if ( !v157 )
        sub_1B64ACC(0LL, v155);
      v159 = DataManager__GetMasterData_object_(
               v157,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v160 = v675->fields._dataManager_5__2;
      if ( !v160 )
        sub_1B64ACC(0LL, v158);
      v161 = DataManager__GetMasterData_object_(
               v160,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v162 = v675;
      v675->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v161;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v162->fields._spotRoadMaster_5__7, (int32_t)v161, v163, v164);
      v166 = v675->fields._dataManager_5__2;
      if ( !v166 )
        sub_1B64ACC(0LL, v165);
      v167 = DataManager__GetMasterData_object_(
               v166,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v168 = v675;
      v675->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v167;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v168->fields._mapGimmickMaster_5__8, (int32_t)v167, v169, v170);
      v172 = v675->fields._dataManager_5__2;
      if ( !v172 )
        sub_1B64ACC(0LL, v171);
      v173 = DataManager__GetMasterData_object_(
               v172,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v174 = v675;
      v675->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v173;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v174->fields._questPickupMaster_5__9, (int32_t)v173, v175, v176);
      v177 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v177,
        (const MethodInfo_312528C *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v178 = v675;
      v675->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v177;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&v178->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v177,
        v179,
        v180);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v675->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v181 = (Il2CppObject *)sub_1B64ABC(QuestTree___c__DisplayClass42_1_TypeInfo);
      System_Object___ctor(v181, 0LL);
      v182 = v675;
      v675->fields.__8__1 = (struct QuestTree___c__DisplayClass42_1_o *)v181;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v182->fields.__8__1, (int32_t)v181, v183, v184);
      v186 = v675->fields._dataManager_5__2;
      if ( !v186 )
        sub_1B64ACC(0LL, v185);
      Entitys_object__object = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__getEntitys_object__object_(
                                                                                      v186,
                                                                                      (const MethodInfo_2E3B928 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v188 = (Il2CppObject *)v675->fields.__8__2;
      v189 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v189,
        v188,
        Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v190 = System_Linq_Enumerable__SingleOrDefault_object__48698420(
               Entitys_object__object,
               (System_Func_TSource__bool__o *)v189,
               (const MethodInfo_2E71434 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v190 )
        sub_1B64ACC(0LL, v191);
      _8__1 = v675->fields.__8__1;
      if ( !_8__1 )
        sub_1B64ACC(v190, v191);
      klass_low = LODWORD(v190[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1B64ACC(v190, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1B64ACC(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v196 = (Il2CppObject *)v675->fields.__8__1;
      v197 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v197,
        v196,
        Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1B64ACC(v198, v199);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v197,
                (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v201 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v202 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v202 )
          sub_1B64ACC(0LL, v201);
        System_Collections_Generic_List_object___RemoveAt(
          v202,
          v201,
          (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v203 = v675->fields.__8__1;
      if ( !v203 )
        sub_1B64ACC(Index, v201);
      v204 = _4__this->fields.mapControlRootInfo;
      if ( !v204 )
        sub_1B64ACC(0LL, v201);
      v205 = MapControl_RootInfo__AddChild(v204, v203->fields.warId, v675->fields._nowTime_5__11, 0LL);
      v206 = v675;
      v675->fields._warInfo_5__14 = v205;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v206->fields._warInfo_5__14, (int32_t)v205, v207, v208);
      warInfo_5__14 = v675->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1B64ACC(0LL, v209);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v214 = v675->fields._warInfo_5__14;
        if ( !v214 )
          sub_1B64ACC(0LL, v211);
        EventId = MapControl_WarInfo__GetEventId(v214, 0LL);
        if ( !v150 )
          sub_1B64ACC(EventId, v216);
        v217 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v150,
                 &entity,
                 EventId,
                 (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v217 )
        {
          if ( !entity )
            sub_1B64ACC(v217, v211);
          v218 = v675;
          nowTime_5__11 = v675->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v220 = v675->fields._warInfo_5__14;
            if ( !v220 )
              sub_1B64ACC(0LL, v211);
            MapControl_WarInfo__SetStatusCheckFlag(v220, 1, 0, 0LL);
            v218 = v675;
          }
          v221 = v218->fields._warInfo_5__14;
          if ( !v221 )
            sub_1B64ACC(0LL, v211);
          v222 = MapControl_WarInfo__GetEventId(v221, 0LL);
          if ( !v153 )
            sub_1B64ACC(v222, v223);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v153,
                 &v673,
                 v222,
                 (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v673 )
              sub_1B64ACC(0LL, v224);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v673, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1B64ACC(0LL, v225);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v675->fields._nowTime_5__11, 0LL) )
              {
                v227 = v675->fields._warInfo_5__14;
                if ( !v227 )
                  sub_1B64ACC(0LL, v226);
                v228 = MapControl_WarInfo__GetEventId(v227, 0LL);
                if ( !v156 )
                  sub_1B64ACC(v228, (unsigned int)v228);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v156, v228, 0LL);
                if ( NowEntity )
                {
                  v231 = v675->fields._warInfo_5__14;
                  if ( !v231 )
                    sub_1B64ACC(0LL, v229);
                  v232 = MapControl_WarInfo__GetEventId(v231, 0LL);
                  if ( !v159 )
                    sub_1B64ACC(v232, (unsigned int)v232);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v159,
                                        v232,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v235 = v675->fields.__8__1;
                  if ( !v235 )
                    sub_1B64ACC(MismatchQuestList, v234);
                  v236 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v675->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1B64ACC(0LL, v234);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v235->fields.warId,
                    v236,
                    (const MethodInfo_3125C60 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v238 = v675->fields._nowTime_5__11;
          v239 = (System_Int64_array *)sub_1B64918(long___TypeInfo, 3LL);
          v241 = entity;
          if ( !entity )
            sub_1B64ACC(v239, v240);
          if ( !v239 )
            sub_1B64ACC(0LL, v240);
          max_length = v239->max_length;
          if ( !max_length )
            sub_1B64AD4(v239, v240);
          v239->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1B64AD4(v239, v240);
          v239->m_Items[1] = (int64_t)v241[5].monitor;
          if ( max_length <= 2 )
            sub_1B64AD4(v239, v240);
          v239->m_Items[2] = (int64_t)v241[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v238, v239, 0LL);
        }
      }
      v243 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v243 )
        sub_1B64ACC(0LL, v211);
      items = v243->fields._items;
      v245 = (Il2CppObject *)v675->fields._warInfo_5__14;
      v246 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v243->fields._version;
      if ( !items )
        sub_1B64ACC(v243, v245);
      size = v243->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v243,
          v245,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v246[4] + 192LL) + 112LL));
      }
      else
      {
        v248 = &items->obj.klass + size;
        v243->fields._size = size + 1;
        v248[4] = (Il2CppClass *)v245;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v248 + 4), (int32_t)v245, v212, v213);
      }
      v320 = v675->fields._warInfo_5__14;
      if ( !v320 )
        sub_1B64ACC(v249, v250);
      if ( !MasterData_object )
        sub_1B64ACC(v249, v250);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v320->fields.warId, 0LL);
      v322 = v675;
      v675->fields._mapList_5__15 = List;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v322->fields._mapList_5__15, (int32_t)List, v323, v324);
      v316 = v675;
      mapList_5__15 = v675->fields._mapList_5__15;
      v675->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1B64ACC(v314, v315);
      mapCount_5__13 = mapList_5__15->max_length;
      v318 = 0;
      v316->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_115;
    case 1:
      v252 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v252 )
        sub_1B64ACC(this, method);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1B64ACC(0LL, method);
      v254 = SpotRoadMaster__getList(spotRoadMaster_5__7, v252->fields.mapId, 0LL);
      v256 = v254;
      if ( !v254 )
        sub_1B64ACC(0LL, v255);
      v257 = v254->max_length;
      if ( v257 >= 1 )
      {
        for ( i = 0; i != v257; ++i )
        {
          v259 = sub_1B64ABC(QuestTree___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v259, 0LL);
          if ( i >= v256->max_length )
            sub_1B64AD4(v260, v261);
          v262 = v256->m_Items[i];
          if ( !v262 )
            sub_1B64ACC(v260, v261);
          if ( !v259 )
            sub_1B64ACC(v260, v261);
          *(_DWORD *)(v259 + 16) = v262->fields.id;
          if ( !_4__this )
            sub_1B64ACC(v260, v261);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v264 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v264,
            (Il2CppObject *)v259,
            Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1B64ACC(v265, v266);
          v267 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v264,
                   (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v268 = v267;
          if ( v267 != -1 )
          {
            v269 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v269 )
              sub_1B64ACC(0LL, v268);
            System_Collections_Generic_List_object___RemoveAt(
              v269,
              v268,
              (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v675->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1B64ACC(0LL, v268);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v259 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v262, &spotRoadInfo, 0LL);
          v274 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v274 )
            sub_1B64ACC(0LL, v271);
          v275 = (Il2CppObject *)spotRoadInfo;
          v276 = v274->fields._items;
          v277 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v274->fields._version;
          if ( !v276 )
            sub_1B64ACC(v274, v275);
          v278 = v274->fields._size;
          if ( (unsigned int)v278 >= v276->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v274,
              v275,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
          }
          else
          {
            v279 = &v276->obj.klass + v278;
            v274->fields._size = v278 + 1;
            v279[4] = (Il2CppClass *)v275;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v279 + 4), (int32_t)v275, v272, v273);
          }
        }
      }
      v280 = v675->fields.__8__1;
      if ( !v280 )
        sub_1B64ACC(v254, v255);
      mapGimmickMaster_5__8 = v675->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1B64ACC(0LL, v255);
      v282 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v280->fields.mapId, 0LL);
      v286 = v282;
      if ( !v282 )
        sub_1B64ACC(0LL, v283);
      v287 = v282->max_length;
      if ( v287 >= 1 )
      {
        for ( j = 0; j != v287; ++j )
        {
          v289 = sub_1B64ABC(QuestTree___c__DisplayClass42_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v289, 0LL);
          if ( j >= v286->max_length )
            sub_1B64AD4(v290, v291);
          v292 = v286->m_Items[j];
          if ( !v292 )
            sub_1B64ACC(v290, v291);
          if ( !v289 )
            sub_1B64ACC(v290, v291);
          *(_DWORD *)(v289 + 16) = v292->fields.id;
          if ( !_4__this )
            sub_1B64ACC(v290, v291);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v294 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v294,
            (Il2CppObject *)v289,
            Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1B64ACC(v295, v296);
          v297 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v294,
                   (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v298 = v297;
          if ( v297 != -1 )
          {
            v299 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v299 )
              sub_1B64ACC(0LL, v298);
            System_Collections_Generic_List_object___RemoveAt(
              v299,
              v298,
              (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v300 = v675->fields._mapInfo_5__16;
          if ( !v300 )
            sub_1B64ACC(0LL, v298);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v300, *(_DWORD *)(v289 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v304 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v304 )
            sub_1B64ACC(0LL, v301);
          v305 = (Il2CppObject *)mapGimmickInfo;
          v306 = v304->fields._items;
          v307 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v304->fields._version;
          if ( !v306 )
            sub_1B64ACC(v304, v305);
          v308 = v304->fields._size;
          if ( (unsigned int)v308 >= v306->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v304,
              v305,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v307[4] + 192LL) + 112LL));
          }
          else
          {
            v309 = &v306->obj.klass + v308;
            v304->fields._size = v308 + 1;
            v309[4] = (Il2CppClass *)v305;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v309 + 4), (int32_t)v305, v302, v303);
          }
        }
      }
      v310 = v675;
      v675->fields.__2__current = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v310->fields.__2__current, 0, v284, v285);
      v311 = v675;
      v312 = 2;
      goto LABEL_326;
    case 2:
      v4->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (ServantStatusBattleListViewItem_o *)&v4->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-1].klass) = -1;
      sub_1B64814(p_mapInfo_5__16, 0, v2, v3);
      v316 = v675;
      mapCount_5__13 = v675->fields._mapCount_5__13;
      v318 = v675->fields._mapIdx_5__12 + 1;
      v675->fields._mapIdx_5__12 = v318;
LABEL_115:
      if ( v318 < mapCount_5__13 )
      {
        v326 = v316->fields._mapList_5__15;
        if ( !v326 )
          sub_1B64ACC(v314, v315);
        if ( v318 >= v326->max_length )
          sub_1B64AD4(v314, v315);
        v327 = v326->m_Items[v318];
        if ( !v327 )
          sub_1B64ACC(v314, v315);
        v328 = v316->fields.__8__1;
        if ( !v328 )
          sub_1B64ACC(v314, v315);
        v328->fields.mapId = v327->fields.id;
        v329 = v316->fields._warInfo_5__14;
        if ( !v329 )
          sub_1B64ACC(v314, v315);
        mapInfoList = (System_Collections_Generic_List_object__o *)v329->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v328->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v328,
              Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v328->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1B64814((ServantStatusBattleListViewItem_o *)&v328->fields.__9__3, (int32_t)_9__3, v332, v333);
          }
          v314 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v315 = (unsigned int)v314;
          if ( (_DWORD)v314 != -1 )
          {
            v334 = v675->fields._warInfo_5__14;
            if ( !v334 )
              sub_1B64ACC(v314, (unsigned int)v314);
            v335 = (System_Collections_Generic_List_object__o *)v334->fields.mapInfoList;
            if ( !v335 )
              sub_1B64ACC(0LL, v315);
            System_Collections_Generic_List_object___RemoveAt(
              v335,
              v315,
              (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1B64ACC(v314, v315);
        v336 = v675->fields.__8__1;
        if ( !v336 )
          sub_1B64ACC(v314, v315);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v336->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v336,
            Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v336->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v336->fields.__9__4, (int32_t)_9__4, v339, v340);
        }
        if ( !allMapInfoList )
          sub_1B64ACC(v314, v315);
        v341 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v342 = (unsigned int)v341;
        if ( (_DWORD)v341 != -1 )
        {
          v343 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v343 )
            sub_1B64ACC(0LL, v342);
          System_Collections_Generic_List_object___RemoveAt(
            v343,
            v342,
            (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v344 = v675->fields.__8__1;
        if ( !v344 )
          sub_1B64ACC(v341, v342);
        v345 = v675->fields._warInfo_5__14;
        if ( !v345 )
          sub_1B64ACC(0LL, v342);
        v346 = MapControl_WarInfo__AddChild(v345, v344->fields.mapId, 0LL);
        v347 = v675;
        v675->fields._mapInfo_5__16 = v346;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v347->fields._mapInfo_5__16, (int32_t)v346, v348, v349);
        v353 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v353 )
          sub_1B64ACC(0LL, v350);
        v354 = v353->fields._items;
        v355 = (Il2CppObject *)v675->fields._mapInfo_5__16;
        v356 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v353->fields._version;
        if ( !v354 )
          sub_1B64ACC(v353, v355);
        v357 = v353->fields._size;
        if ( (unsigned int)v357 >= v354->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v353,
            v355,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v356[4] + 192LL) + 112LL));
        }
        else
        {
          v358 = &v354->obj.klass + v357;
          v353->fields._size = v357 + 1;
          v358[4] = (Il2CppClass *)v355;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v358 + 4), (int32_t)v355, v351, v352);
        }
        v454 = v675->fields.__8__1;
        if ( !v454 )
          sub_1B64ACC(v359, v360);
        spotMaster_5__3 = v675->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1B64ACC(0LL, v360);
        v456 = SpotMaster__getList(spotMaster_5__3, v454->fields.mapId, 0LL);
        v458 = v456;
        if ( !v456 )
          sub_1B64ACC(0LL, v457);
        v459 = v456->max_length;
        if ( v459 >= 1 )
        {
          for ( k = 0; k != v459; ++k )
          {
            v461 = sub_1B64ABC(QuestTree___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v461, 0LL);
            if ( k >= v458->max_length )
              sub_1B64AD4(v462, v463);
            v464 = v458->m_Items[k];
            if ( !v464 )
              sub_1B64ACC(v462, v463);
            if ( !v461 )
              sub_1B64ACC(v462, v463);
            *(_DWORD *)(v461 + 16) = v464->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v466 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v466,
              (Il2CppObject *)v461,
              Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1B64ACC(v467, v468);
            v469 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v466,
                     (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v470 = v469;
            if ( v469 != -1 )
            {
              v471 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v471 )
                sub_1B64ACC(0LL, v470);
              System_Collections_Generic_List_object___RemoveAt(
                v471,
                v470,
                (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v472 = v675->fields._mapInfo_5__16;
            if ( !v472 )
              sub_1B64ACC(0LL, v470);
            spotInfo = MapControl_MapInfo__AddChild(v472, *(_DWORD *)(v461 + 16), 0LL);
            QuestTree__SetupSpotInfo(_4__this, v464, &spotInfo, 0LL);
            v476 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v476 )
              sub_1B64ACC(0LL, v473);
            v477 = (Il2CppObject *)spotInfo;
            v478 = v476->fields._items;
            v479 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v476->fields._version;
            if ( !v478 )
              sub_1B64ACC(v476, v477);
            v480 = v476->fields._size;
            if ( (unsigned int)v480 >= v478->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v476,
                v477,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v479[4] + 192LL) + 112LL));
            }
            else
            {
              v481 = &v478->obj.klass + v480;
              v476->fields._size = v480 + 1;
              v481[4] = (Il2CppClass *)v477;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v481 + 4), (int32_t)v477, v474, v475);
            }
          }
        }
        v482 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v675->fields._mapInfo_5__16,
                 v675->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v483 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v482,
                 (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v487 = (System_Collections_Generic_IEnumerable_TSource__o *)v483;
        if ( !v483 )
          sub_1B64ACC(0LL, v484);
        if ( *(_QWORD *)&v483->max_length )
        {
          v488 = sub_1B64ABC(QuestTree___c__DisplayClass42_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v488, 0LL);
          v489 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v489 = QuestTree___c_TypeInfo;
          }
          _9__42_6 = (System_Func_object__int__o *)v489->static_fields->__9__42_6;
          if ( !_9__42_6 )
          {
            if ( !v489->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v489);
              v489 = QuestTree___c_TypeInfo;
            }
            v491 = (Il2CppObject *)v489->static_fields->__9;
            _9__42_6 = (System_Func_object__int__o *)sub_1B64ABC(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__42_6,
              v491,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__42_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__42_6;
            sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_6, (int32_t)_9__42_6, v493, v494);
          }
          v495 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v487,
                                                                  (System_Func_TSource__TResult__o *)_9__42_6,
                                                                  (const MethodInfo_2E6ADAC *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v496 = (System_Collections_Generic_HashSet_int__o *)sub_1B64ABC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_53894520(
            v496,
            v495,
            (const MethodInfo_3365D78 *)Method_System_Collections_Generic_HashSet_int___ctor___75645664);
          if ( !v488 )
            sub_1B64ACC(v497, v498);
          *(_QWORD *)(v488 + 16) = v496;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v488 + 16), (int32_t)v496, v499, v500);
          v501 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v502 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v502,
            (Il2CppObject *)v488,
            Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v501,
            (System_Func_T__bool__o *)v502,
            (const MethodInfo_2E2AFF8 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v504 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v504 )
            sub_1B64ACC(0LL, v503);
          System_Collections_Generic_List_object___AddRange(
            v504,
            (System_Collections_Generic_IEnumerable_T__o *)v487,
            (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v505 = v675;
        v675->fields.__2__current = 0LL;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v505->fields.__2__current, 0, v485, v486);
        result = 1;
        v675->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1B64ACC(v314, v315);
      v361 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v362 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v362 = QuestTree___c_TypeInfo;
      }
      _9__42_2 = (System_Comparison_T__o *)v362->static_fields->__9__42_2;
      if ( !_9__42_2 )
      {
        if ( !v362->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v362);
          v362 = QuestTree___c_TypeInfo;
        }
        v364 = (Il2CppObject *)v362->static_fields->__9;
        _9__42_2 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__42_2,
          v364,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__,
          0LL);
        v365 = QuestTree___c_TypeInfo->static_fields;
        v365->__9__42_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__42_2;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v365->__9__42_2, (int32_t)_9__42_2, v366, v367);
      }
      if ( !v361 )
        sub_1B64ACC(v314, v315);
      System_Collections_Generic_List_object___Sort_55252244(
        v361,
        _9__42_2,
        (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v368 = v675;
      v675->fields.__8__1 = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v368->fields.__8__1, 0, v369, v370);
      v371 = v675;
      v675->fields._warInfo_5__14 = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v371->fields._warInfo_5__14, 0, v372, v373);
      v374 = v675;
      v675->fields._mapList_5__15 = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v374->fields._mapList_5__15, 0, v375, v376);
      v377 = (Il2CppObject *)sub_1B64ABC(QuestTree___c__DisplayClass42_6_TypeInfo);
      System_Object___ctor(v377, 0LL);
      v378 = v675;
      v675->fields.__8__3 = (struct QuestTree___c__DisplayClass42_6_o *)v377;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v378->fields.__8__3, (int32_t)v377, v379, v380);
      v381 = v675->fields._nowTime_5__11;
      v382 = (MapControl_WarInfo_o *)sub_1B64ABC(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v382, v381, 0LL);
      v383 = v675;
      v675->fields._warInfo_5__14 = v382;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v383->fields._warInfo_5__14, (int32_t)v382, v384, v385);
      v386 = (MapControl_MapInfo_o *)sub_1B64ABC(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v386, 0LL);
      v387 = v675;
      v675->fields._mapInfo_5__16 = v386;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v387->fields._mapInfo_5__16, (int32_t)v386, v388, v389);
      v390 = (MapControl_SpotInfo_o *)sub_1B64ABC(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v390, 0LL);
      v391 = v675;
      v675->fields._spotInfo_5__17 = v390;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v391->fields._spotInfo_5__17, (int32_t)v390, v392, v393);
      v394 = (WarEntity_o *)sub_1B64ABC(WarEntity_TypeInfo);
      WarEntity___ctor(v394, 0LL);
      v395 = v675;
      v675->fields._warEnt_5__18 = v394;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v395->fields._warEnt_5__18, (int32_t)v394, v396, v397);
      v399 = v675->fields._dataManager_5__2;
      if ( !v399 )
        sub_1B64ACC(0LL, v398);
      v400 = DataManager__GetMasterData_object_(
               v399,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v401 = v675;
      v675->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v400;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v401->fields._userQuestMaster_5__19, (int32_t)v400, v402, v403);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v406 = v675;
      _8__3 = v675->fields.__8__3;
      if ( !_8__3 )
        sub_1B64ACC(Master_object, v405);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v406->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v675 )
        sub_1B64ACC(isSavedMemoryMode, v409);
      if ( isSavedMemoryMode )
        v410 = 500;
      else
        v410 = 5000;
      v411 = v675->fields.__8__3;
      v675->fields._breakInterval_5__22 = v410;
      v412 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v412,
        (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v411 )
        sub_1B64ACC(v413, v414);
      v411->fields.spotInfoList = v412;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v411->fields, (int32_t)v412, v415, v416);
      v675->fields._cnt_5__23 = 0;
      v418 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v418 )
        sub_1B64ACC(0LL, v417);
      System_Collections_Generic_List_object___GetEnumerator(
        v665,
        v418,
        (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v419 = v675;
      v420 = *(_OWORD *)&v665[0].fields._list;
      p__7__wrap24 = (ServantStatusBattleListViewItem_o *)&v675->fields.__7__wrap24;
      v665[1] = v665[0];
      v675->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v665[0].fields._current;
      *(_OWORD *)&v419->fields.__7__wrap24.fields._list = v420;
      sub_1B64814(p__7__wrap24, 0, v422, v423);
      v4 = v675;
LABEL_163:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v425 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v426 = v675;
        if ( !v425 )
          break;
        current = v675->fields.__7__wrap24.fields._current;
        ++v675->fields._cnt_5__23;
        if ( !current )
          sub_1B64ACC(v426, v424);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1B64ACC(0LL, v429);
        v4 = v675;
        v432 = v675->fields.__8__2;
        if ( !v432 )
          sub_1B64ACC(Mine, v429);
        if ( Mine->fields.warId == v432->fields.targetWarId )
        {
          v433 = v675->fields.__8__3;
          if ( !v433 )
            sub_1B64ACC(Mine, v429);
          spotInfoList = v433->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1B64ACC(0LL, v429);
          spotId = (unsigned int)current->fields.spotId;
          v436 = spotInfoList->fields._items;
          v437 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v436 )
            sub_1B64ACC(spotInfoList, spotId);
          v438 = spotInfoList->fields._size;
          if ( (unsigned int)v438 >= v436->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_34921B8 **)(*(_QWORD *)(v437[4] + 192LL) + 112LL));
            v4 = v675;
          }
          else
          {
            spotInfoList->fields._size = v438 + 1;
            v436->m_Items[v438 + 1] = spotId;
          }
        }
        HIDWORD(v439) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v439) = HIDWORD(v439);
        if ( (unsigned int)(v439 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0LL;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v430, v431);
          v311 = v675;
          v312 = 3;
LABEL_326:
          v311->fields.__1__state = v312;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42____m__Finally1(v675, v424);
      v441 = v675;
      questMaster_5__5 = (DataMasterBase_o *)v675->fields._questMaster_5__5;
      v675->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v441->fields.__7__wrap24.fields._index = 0LL;
      v441->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1B64ACC(0LL, v440);
      Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                              questMaster_5__5,
                                                                              (const MethodInfo_2E3BF5C *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v444 = (Il2CppObject *)v675->fields.__8__3;
      v445 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v445,
        v444,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v446 = System_Linq_Enumerable__Where_object_(
               Entitys_object,
               (System_Func_TSource__bool__o *)v445,
               (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v447 = System_Linq_Enumerable__ToArray_object_(
               v446,
               (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v448 = v675;
      v675->fields._questList_5__24 = (struct QuestEntity_array *)v447;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v448->fields._questList_5__24, (int32_t)v447, v449, v450);
      v451 = v675;
      v675->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v451->fields._questList_5__24,
                       (const MethodInfo_2E57F90 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v675;
      v453 = v675->fields._mapCount_5__13;
      v675->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_163;
    case 4:
      v251 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_449;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1B64ACC(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v453 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v4->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1B64ACC(mapIdx_5__12, method);
    if ( v453 >= questList_5__24->max_length )
      sub_1B64AD4(mapIdx_5__12, method);
    v508 = questList_5__24->m_Items[v453];
    if ( !v508 )
      sub_1B64ACC(mapIdx_5__12, method);
    v509 = v4->fields.__8__3;
    if ( !v509 )
      sub_1B64ACC(mapIdx_5__12, method);
    v509->fields.questId = v508->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v513 = v675->fields.__8__3;
    if ( !v513 )
      sub_1B64ACC(UserId, v512);
    if ( !userQuestMaster_5__19 )
      sub_1B64ACC(UserId, v512);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__19, &v669, UserId, v513->fields.questId, 0LL) )
    {
      if ( !v669 )
        sub_1B64ACC(0LL, v514);
      QuestPhase = UserQuestEntity__getQuestPhase(v669, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_39150984 = (MapEntity_o *)QuestEntity__getSpotId_39150984(v508, QuestPhase + 1, 0LL);
    v518 = v675;
    v519 = v675->fields.__8__3;
    if ( !v519 )
      sub_1B64ACC(SpotId_39150984, warId);
    if ( v519->fields.nowSpotId == (_DWORD)SpotId_39150984 )
    {
      if ( !_4__this )
        sub_1B64ACC(SpotId_39150984, warId);
    }
    else
    {
      v519->fields.nowSpotId = (int)SpotId_39150984;
      if ( !_4__this )
        sub_1B64ACC(SpotId_39150984, warId);
      v520 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v519->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v519,
          Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v519->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v519->fields.__9__12, (int32_t)_9__12, v522, v523);
      }
      if ( !v520 )
        sub_1B64ACC(SpotId_39150984, warId);
      v524 = System_Collections_Generic_List_object___Find(
               v520,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v518->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v524;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v518->fields._spotInfo_5__17, (int32_t)v524, v525, v526);
      spotInfo_5__17 = v675->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1B64ACC(0LL, v527);
      SpotId_39150984 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_39150984;
      if ( v675->fields._nowMapId_5__20 != (_DWORD)SpotId_39150984 )
      {
        v675->fields._nowMapId_5__20 = (int)SpotId_39150984;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_39150984, 0LL);
        v530 = v675;
        v675->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&v530->fields._mapInfo_5__16,
          (int32_t)MapInfoByMapID,
          v531,
          v532);
        v534 = v675->fields._mapInfo_5__16;
        if ( !v534 )
          sub_1B64ACC(0LL, v533);
        SpotId_39150984 = MapControl_MapInfo__GetMine(v534, 0LL);
        if ( !SpotId_39150984 )
          sub_1B64ACC(0LL, v535);
        warId = (unsigned int)SpotId_39150984->fields.warId;
        if ( v675->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v675->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v537 = v675;
          v675->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1B64814(
            (ServantStatusBattleListViewItem_o *)&v537->fields._warInfo_5__14,
            (int32_t)WarInfoByWarID,
            v538,
            v539);
          v541 = v675->fields._warInfo_5__14;
          if ( !v541 )
            sub_1B64ACC(0LL, v540);
          v542 = MapControl_WarInfo__GetMine(v541, 0LL);
          v543 = v675;
          v675->fields._warEnt_5__18 = v542;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&v543->fields._warEnt_5__18, (int32_t)v542, v544, v545);
        }
      }
    }
    v546 = v675->fields.__8__3;
    if ( !v546 )
      sub_1B64ACC(SpotId_39150984, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v546->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v546,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v546->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v546->fields.__9__13, (int32_t)_9__13, v549, v550);
    }
    if ( !allQuestInfoList )
      sub_1B64ACC(SpotId_39150984, warId);
    v551 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_34B0208 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v552 = v551;
    if ( v551 != -1 )
    {
      v553 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v553 )
        sub_1B64ACC(0LL, v552);
      System_Collections_Generic_List_object___RemoveAt(
        v553,
        v552,
        (const MethodInfo_34B1224 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v554 = v675->fields._warInfo_5__14;
    if ( !v669 )
    {
      if ( !v554 )
        sub_1B64ACC(0LL, v552);
      goto LABEL_371;
    }
    if ( !v554 )
      sub_1B64ACC(0LL, v552);
    MapControl_WarInfo__SetStatusCheckFlag(v554, 1, 0, 0LL);
    if ( !v669 )
      sub_1B64ACC(0LL, v555);
    HasStatus = UserQuestEntity__HasStatus(v669, 8, 0LL);
    if ( !HasStatus )
    {
      v558 = v675->fields._warInfo_5__14;
      if ( !v558 )
        sub_1B64ACC(0LL, v557);
      goto LABEL_373;
    }
    if ( !v669 )
      sub_1B64ACC(HasStatus, v557);
    if ( v669->fields.challengeNum >= 1 )
    {
      v558 = v675->fields._warInfo_5__14;
      if ( !v558 )
        sub_1B64ACC(0LL, v557);
LABEL_373:
      MapControl_WarInfo__SetStatusCheckFlag(v558, 4, 0, 0LL);
    }
    if ( !v669 )
      sub_1B64ACC(0LL, v557);
    v562 = UserQuestEntity__getClearNum(v669, 0LL) < 1;
    v554 = v675->fields._warInfo_5__14;
    if ( v562 )
    {
      if ( !v554 )
        sub_1B64ACC(0LL, v563);
LABEL_371:
      MapControl_WarInfo__SetStatusCheckFlag(v554, 2, 0, 0LL);
      v561 = 0;
      goto LABEL_385;
    }
    if ( !v554 )
      sub_1B64ACC(0LL, v563);
    v559 = MapControl_WarInfo__GetMine(v554, 0LL);
    if ( !v559 )
      sub_1B64ACC(0LL, v560);
    v564 = v675->fields.__8__3;
    if ( !v564 )
      sub_1B64ACC(v559, v560);
    if ( v559->fields.lastQuestId == v564->fields.questId )
    {
      v565 = v675->fields._warInfo_5__14;
      if ( !v565 )
        sub_1B64ACC(0LL, v560);
      v561 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v565, 8, 1, 0LL);
    }
    else
    {
      v561 = 1;
    }
LABEL_385:
    v566 = v675->fields.__8__3;
    if ( !v566 )
      sub_1B64ACC(v559, v560);
    v567 = v675->fields._spotInfo_5__17;
    if ( !v567 )
      sub_1B64ACC(0LL, v560);
    v568 = MapControl_SpotInfo__AddChild(v567, v566->fields.questId, 0LL);
    v571 = v675->fields._warInfo_5__14;
    if ( !v571 )
      sub_1B64ACC(v568, 0LL);
    v572 = v568;
    if ( !v568 )
      sub_1B64ACC(0LL, v571);
    v573 = v571->fields.warId;
    v568->fields._WarInfo_k__BackingField = v571;
    v568->fields.warId = v573;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v568->fields._WarInfo_k__BackingField, (int32_t)v571, v569, v570);
    v574 = v675->fields._spotInfo_5__17;
    v572->fields._SpotInfo_k__BackingField = v574;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v572->fields._SpotInfo_k__BackingField, (int32_t)v574, v575, v576);
    v572->fields.endTime = QuestTree__GetEndTime(_4__this, v572, 0LL);
    warEnt_5__18 = v675->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1B64ACC(0LL, v577);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v581 = v675->fields._warEnt_5__18;
      if ( !v581 )
        sub_1B64ACC(IsStartTypeQuest, v580);
      v582 = v675->fields.__8__3;
      if ( !v582 )
        sub_1B64ACC(IsStartTypeQuest, v580);
      if ( v581->fields.targetId == v582->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v675->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_404;
      }
    }
    v583 = v675->fields._warEnt_5__18;
    if ( !v583 )
      sub_1B64ACC(IsStartTypeQuest, v580);
    v584 = v675->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v584 )
      sub_1B64ACC(0LL, v580);
    v585 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v584,
             v583->fields.id,
             &value,
             (const MethodInfo_31273EC *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v585 )
    {
      v587 = v675->fields.__8__3;
      if ( !v587 )
        sub_1B64ACC(v585, v586);
      if ( !value )
        sub_1B64ACC(0LL, v586);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v587->fields.questId,
             (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_404:
        MapControl_QuestInfo__SetDispType(v572, 0, 0, 0, 0LL, 0, 0LL);
        v572->fields.touchType = 0;
LABEL_405:
        v590 = 1;
        goto LABEL_406;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v508, v572, v675->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_405;
    v589 = v675->fields._warInfo_5__14;
    if ( !v589 )
      sub_1B64ACC(0LL, v588);
    MapControl_WarInfo__SetStatusCheckFlag(v589, 1, 0, 0LL);
    v590 = 0;
LABEL_406:
    if ( MapControl_QuestInfo__IsDisaplayable(v572, 0LL) )
    {
      if ( ((v561 | v590) & 1) == 0 )
      {
        v592 = v675->fields._spotInfo_5__17;
        if ( !v592 )
          sub_1B64ACC(0LL, v591);
        MapControl_SpotInfo__AddQuestCount(v592, 1, 0LL);
        v594 = v675->fields._spotInfo_5__17;
        if ( !v594 )
          sub_1B64ACC(0LL, v593);
        MapControl_SpotInfo__AddAvailableQuestId(v594, v572->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v572, 0LL) == 1 )
      {
        v595 = MapControl_QuestInfo__GetMine(v572, 0LL);
        if ( !v595 )
          sub_1B64ACC(0LL, v596);
        HasFlag = QuestEntity__HasFlag(v595, 0x400000000000LL, 0LL);
        v599 = v675;
        if ( !HasFlag )
        {
          v600 = v675->fields._spotInfo_5__17;
          if ( !v600 )
            sub_1B64ACC(HasFlag, v598);
          v600->fields._IsNext_k__BackingField = 1;
        }
        v601 = v599->fields._mapInfo_5__16;
        if ( !v601 )
          sub_1B64ACC(HasFlag, v598);
        v601->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v572, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v604 = v675;
        v605 = v675->fields._spotInfo_5__17;
        if ( !v605 )
          sub_1B64ACC(IsDisplayQuestNextIcon, v603);
        v605->fields._IsNext_k__BackingField = 1;
        v606 = v604->fields._mapInfo_5__16;
        if ( !v606 )
          sub_1B64ACC(IsDisplayQuestNextIcon, v603);
        v606->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v508, 0x8000000000LL, 0LL) )
      {
        v607 = v675->fields._spotInfo_5__17;
        if ( !v607 )
          sub_1B64ACC(0LL, v591);
        MapControl_SpotInfo__AddFreeQuestCount(v607, 1, 0LL);
      }
    }
    v608 = v669;
    if ( v669 )
    {
      v608 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v669, 8, 0LL);
      if ( ((unsigned __int8)v608 & 1) != 0 )
      {
        if ( !v669 )
          sub_1B64ACC(v608, v591);
        v609 = v669->fields.challengeNum == 0;
      }
      else
      {
        v609 = 0;
      }
    }
    else
    {
      v609 = 1;
    }
    v572->fields.isNew = v609;
    v572->fields.questPhase = QuestPhase;
    v610 = v675->fields.__8__3;
    if ( !v610 )
      sub_1B64ACC(v608, v591);
    questPickupMaster_5__9 = v675->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1B64ACC(0LL, v591);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v610->fields.questId, 0LL);
    v572->fields.pickupPriority = Priority;
    v614 = v675->fields.__8__3;
    if ( !v614 )
      sub_1B64ACC(Priority, v613);
    questPhaseMaster_5__6 = v675->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1B64ACC(0LL, v613);
    v616 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v614->fields.questId, 0LL);
    v620 = v616;
    if ( !v616 )
      sub_1B64ACC(0LL, v617);
    v621 = v616[3];
    v622 = v621 - 1;
    if ( (int)v621 >= 1 )
    {
      v623 = 0;
      while ( 1 )
      {
        v624 = v620[v623 + 4];
        if ( !v624 )
          sub_1B64ACC(v616, v617);
        v616 = MapControl_QuestInfo__AddChild(v572, *(_DWORD *)(v624 + 16), *(_DWORD *)(v624 + 20), 0LL);
        if ( v622 == v623 )
          break;
        if ( (unsigned int)++v623 >= *((_DWORD *)v620 + 6) )
          sub_1B64AD4(v616, v617);
      }
    }
    v625 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v625 )
      sub_1B64ACC(0LL, v617);
    v626 = v625->fields._items;
    v627 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v625->fields._version;
    if ( !v626 )
      sub_1B64ACC(v625, v617);
    v628 = v625->fields._size;
    if ( (unsigned int)v628 >= v626->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v625,
        (Il2CppObject *)v572,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v627[4] + 192LL) + 112LL));
    }
    else
    {
      v629 = &v626->obj.klass + v628;
      v625->fields._size = v628 + 1;
      v629[4] = (Il2CppClass *)v572;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v629 + 4), (int32_t)v572, v618, v619);
    }
    v4 = v675;
    v251 = v675->fields._mapCount_5__13;
    if ( v251 && !(v251 % v675->fields._breakInterval_5__22) )
    {
      v675->fields.__2__current = 0LL;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v630, v631);
      v311 = v675;
      v312 = 4;
      goto LABEL_326;
    }
LABEL_449:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    v453 = v251 + 1;
    v4->fields._mapCount_5__13 = v453;
  }
  if ( !_4__this )
    sub_1B64ACC(mapIdx_5__12, method);
  v632 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v633 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v633 = QuestTree___c_TypeInfo;
  }
  _9__42_11 = (System_Comparison_T__o *)v633->static_fields->__9__42_11;
  if ( !_9__42_11 )
  {
    if ( !v633->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v633);
      v633 = QuestTree___c_TypeInfo;
    }
    v635 = (Il2CppObject *)v633->static_fields->__9;
    _9__42_11 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__42_11,
      v635,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__,
      0LL);
    v636 = QuestTree___c_TypeInfo->static_fields;
    v636->__9__42_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__42_11;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v636->__9__42_11, (int32_t)_9__42_11, v637, v638);
  }
  if ( !v632 )
    sub_1B64ACC(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_55252244(
    v632,
    _9__42_11,
    (const MethodInfo_34B1514 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v639 = v675;
  v675->fields.__8__3 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v639->fields.__8__3, 0, v640, v641);
  v642 = v675;
  v675->fields._warInfo_5__14 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v642->fields._warInfo_5__14, 0, v643, v644);
  v645 = v675;
  v675->fields._mapInfo_5__16 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v645->fields._mapInfo_5__16, 0, v646, v647);
  v648 = v675;
  v675->fields._spotInfo_5__17 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v648->fields._spotInfo_5__17, 0, v649, v650);
  v651 = v675;
  v675->fields._warEnt_5__18 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v651->fields._warEnt_5__18, 0, v652, v653);
  v654 = v675;
  v675->fields._userQuestMaster_5__19 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v654->fields._userQuestMaster_5__19, 0, v655, v656);
  v657 = v675;
  v675->fields._questList_5__24 = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v657->fields._questList_5__24, 0, v658, v659);
  v660 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v660 )
    sub_1B64ACC(0LL, v661);
  CommonUI__SetLoadMode((CommonUI_o *)v660, 0, 0LL);
  _4__this->fields.isInit = 1;
  v664 = v675;
  if ( v675->fields.endCallback )
  {
    v675->fields.__2__current = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v664->fields.__2__current, 0, v662, v663);
    v311 = v675;
    v312 = 5;
    goto LABEL_326;
  }
  return 0;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42____m__Finally1(this, method);
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB780 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_49FB780 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}