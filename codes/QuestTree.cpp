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

  if ( (byte_4A05D4E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v9);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v10);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v11);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v12);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v13);
    sub_1B686D4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v15);
    sub_1B686D4(&MapControl_RootInfo_TypeInfo, v16);
    sub_1B686D4(&Method_SingletonTemplate_QuestTree___ctor__, v17);
    byte_4A05D4E = 1;
  }
  v18 = (MapControl_RootInfo_o *)sub_1B68920(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v18, 0LL);
  this->fields.mapControlRootInfo = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v21;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.allQuestInfoList, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v24;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.allSpotInfoList, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v27;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v30;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v33;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.allMapInfoList, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v36;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.allWarInfoList, (int32_t)v36, v37, v38);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v39 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v39;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.questReleaseEntList, (int32_t)v39, v40, v41);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36F7BB4 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_33879604(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_33876632(
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

  if ( (byte_4A05D4B & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_1B686D4(&long___TypeInfo, v5);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v8);
    byte_4A05D4B = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1B6877C(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v15 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v15 || (*(_QWORD *)(Time + 32) = v13->fields.startedAt, (_DWORD)v15 == 1) )
      sub_1B68938(Time, v11);
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
      sub_1B68930(Time, v11);
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
  if ( (byte_4A05D47 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserQuestMaster___, questEnt);
    sub_1B686D4(&Method_DataManager_GetMasterData_WarMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1B686D4(&DataManager_TypeInfo, v11);
    sub_1B686D4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1B686D4(&long___TypeInfo, v13);
    sub_1B686D4(&NetworkManager_TypeInfo, v14);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    this = (QuestTree_o *)sub_1B686D4(&TerminalPramsManager_TypeInfo, v16);
    byte_4A05D47 = 1;
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
  v21 = sub_1B6877C(long___TypeInfo, 3LL);
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
    sub_1B68938(NoticeAt, v18);
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
    NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_73;
    NoticeAt = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_73;
    IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)NoticeAt,
                               &entity,
                               warId,
                               (const MethodInfo_30E4514 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_73;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)NoticeAt,
                                  (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
  NoticeAt = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    sub_1B68930(NoticeAt, v18);
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

  return QuestTree__CheckSpotCond_33879604(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_33879604(
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

  if ( (byte_4A05D4A & 1) == 0 )
  {
    sub_1B686D4(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1B686D4(&NetworkManager_TypeInfo, v16);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v17);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v19);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B686D4(&TerminalPramsManager_TypeInfo, v21);
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v22);
    byte_4A05D4A = 1;
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
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v23);
    byte_4A03EAD = 1;
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
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v27);
    byte_4A03EAD = 1;
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
  if ( !byte_4A03EAD )
  {
    sub_1B686D4(&TerminalSceneComponent_TypeInfo, v27);
    byte_4A03EAD = 1;
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
      v34 = sub_1BBA5B0(v34);
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BBA5B0(v35);
    v36 = **(UnityEngine_Object_o ***)(v35 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      v32 = 0;
      IsExistCommand = 1;
      goto LABEL_44;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v32 = 0;
      goto LABEL_44;
    }
LABEL_176:
    sub_1B68930(Instance, v27);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
        sub_1B68938(Instance, v27);
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
        LOBYTE(v24) = CondType__IsOpen(v60, targetId, v59, 0, 0LL, 0LL);
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

  return QuestTree__CheckSpotCond_33879604(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A05D45 & 1) == 0 )
  {
    sub_1B686D4(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, mapInfo);
    byte_4A05D45 = 1;
  }
  v7 = sub_1B68920(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 72) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)mapInfo, v10, v11);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v12, v13);
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
  if ( (byte_4A05D48 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_1B686D4(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    sub_1B686D4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_1B686D4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_4A05D48 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_39267540((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1B68930(this, questInfo);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v17 = 0LL;
  v35 = v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B68930(v18, v19);
    klass_high = HIDWORD(v35.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1B68930(v18, v19);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_1B68930(FirstEntityFromQuestId, v23);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_30E44C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1B68930(0LL, v30);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v31 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v31 )
          sub_1B68930(0LL, v32);
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
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_38223372; // x0
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

  if ( (byte_4A05D49 & 1) == 0 )
  {
    sub_1B686D4(&System_DateTime_TypeInfo, questEnt);
    sub_1B686D4(&NetworkManager_TypeInfo, v6);
    byte_4A05D49 = 1;
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
    sub_1B68930(Time, v8);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v21.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_38223372 = NetworkManager__getTime_38223372(v21, 0LL);
  value = questReleaseEnt->fields.value;
  v13 = Time_38223372;
  dateData = NetworkManager__getDateTime_38135136(Time_38223372 - 3600 * value, 0LL).fields._dateData;
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
    dateData = NetworkManager__getDateTime_38135136(v16, 0LL).fields._dateData;
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

  if ( (byte_4A05D3F & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1B686D4(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1B686D4(&Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, v9);
    sub_1B686D4(&QuestTree___c_TypeInfo, v10);
    byte_4A05D3F = 1;
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
    _9__36_0 = (System_Func_object__int__o *)sub_1B68920(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__36_0, v16, Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__36_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__36_0,
                                                               (const MethodInfo_2E74214 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v20,
                                                  (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1B68930(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v21 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B68930(v21, v22);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v26.fields._current[1].klass), v23) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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

  if ( (byte_4A05D35 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_1B686D4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v5);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__, v6);
    sub_1B686D4(&QuestTree___c__DisplayClass22_0_TypeInfo, v7);
    byte_4A05D35 = 1;
  }
  v8 = sub_1B68920(QuestTree___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1B68930(v9, v10);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1B68930(QuestInfo, v5);
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

  if ( (byte_4A05D38 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_4A05D38 = 1;
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
  v27 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1B68930(v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1B68930(0LL, v30);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v66.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1B68930(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      SpotList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v65.fields._current )
        sub_1B68930(0LL, v33);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v65.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v27 )
        sub_1B68930(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v36, v27, v37);
  v39 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v35 = 0;
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1B68930(0LL, v40);
    v41 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v66.fields._current,
                                                         0LL);
    if ( !v41 )
      sub_1B68930(0LL, v42);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      v41,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v43 )
        break;
      current = (MapControl_SpotInfo_o *)v65.fields._current;
      if ( !v65.fields._current )
        sub_1B68930(v43, v44);
      if ( HIDWORD(v65.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B68930(0LL, v47);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v48 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v48 )
        sub_1B68930(0LL, v49);
      v62 = v35;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v48,
        (const MethodInfo_349FD28 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = 0;
      v64 = v63;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v64,
                (const MethodInfo_3236754 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v51 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1B68930(v51, v52);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v64.fields._current,
                 (const MethodInfo_312B434 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v39 )
            sub_1B68930(Item, v54);
          v56 = System_Collections_Generic_List_int___Contains(
                  v39,
                  Item,
                  (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1B68930(v56, v57);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                v55,
                *(const MethodInfo_349F254 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
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
        (const MethodInfo_3236750 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v35 = v62 - v50 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_4A05D3B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_4A05D3B = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v22 = MapInfoByMapID;
    v23 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v56 = v54;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1B68930(v26, v27);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v23 )
          sub_1B68930(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v23,
          AvailableQuestIdList,
          (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v56.fields._current )
          sub_1B68930(v26, v27);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v23, v31);
    v33 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1B68930(SpotList, v25);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = 0;
    v56 = v54;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v34 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v56,
          (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v53;
        return (int)MapInfoByMapID;
      }
      v36 = (MapControl_SpotInfo_o *)v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1B68930(v34, v35);
LABEL_22:
        if ( v36->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B68930(0LL, v38);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v36->fields.spotId, 0LL) )
        {
LABEL_25:
          v39 = MapControl_SpotInfo__GetAvailableQuestIdList(v36, 1, 0LL);
          if ( !v39 )
            sub_1B68930(0LL, v40);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v54,
            v39,
            (const MethodInfo_349FD28 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v41 = 0;
          v55 = v54;
          while ( 1 )
          {
            v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v55,
                    (const MethodInfo_3236754 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1B68930(v42, v43);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v55.fields._current,
                     (const MethodInfo_312B434 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v46 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v33 )
                sub_1B68930(Item, v45);
              v47 = System_Collections_Generic_List_int___Contains(
                      v33,
                      Item,
                      (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1B68930(v47, v48);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    v46,
                    *(const MethodInfo_349F254 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
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
            (const MethodInfo_3236750 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v53 = v53 - v41 + v36->fields.questCount;
        }
      }
      else
      {
        if ( !v56.fields._current )
          sub_1B68930(v34, v35);
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

  if ( (byte_4A05D36 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B686D4(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__, v6);
    sub_1B686D4(&QuestTree___c__DisplayClass23_0_TypeInfo, v7);
    byte_4A05D36 = 1;
  }
  v8 = sub_1B68920(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B68930(v9, v10);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v12,
                                     (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4A05D4C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_4A05D4C = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    allQuestInfoList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v14 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1B68930(v14, v15);
    if ( LODWORD(v25.fields._current[4].klass) == warId )
    {
      if ( !v11 )
        sub_1B68930(v14, v15);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B68930(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)current;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)current, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_4A05D3A & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A05D3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v6);
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

  if ( (byte_4A05D34 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_1B686D4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v5);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__, v6);
    sub_1B686D4(&QuestTree___c__DisplayClass21_0_TypeInfo, v7);
    byte_4A05D34 = 1;
  }
  v8 = sub_1B68920(QuestTree___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1B68930(v9, v10);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v12,
                                    (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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

  if ( (byte_4A05D39 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_1B686D4(&System_Func_MapButtonEntity__int__TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B686D4(&System_Predicate_MapControl_MapInfo__TypeInfo, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B686D4(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__, v13);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__, v14);
    sub_1B686D4(&QuestTree___c__DisplayClass29_0_TypeInfo, v15);
    sub_1B686D4(&QuestTree___c_TypeInfo, v16);
    byte_4A05D39 = 1;
  }
  v17 = sub_1B68920(QuestTree___c__DisplayClass29_0_TypeInfo);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = v24;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v24, v25, v26);
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
      _9__29_0 = (System_Func_object__int__o *)sub_1B68920(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__29_0, v30, Method_QuestTree___c__GetUserReachableMapList_b__29_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v32, v33);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__29_0,
                            (const MethodInfo_2E79760 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v27 )
    {
      System_Collections_Generic_List_int___AddRange(
        v27,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_349F460 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1B68930(Mine, mapId);
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
      *(const MethodInfo_349F254 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v38 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_MapInfo__TypeInfo);
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
                                                                    (const MethodInfo_34BC988 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
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

  if ( (byte_4A05D3D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B686D4(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__, v6);
    sub_1B686D4(&QuestTree___c__DisplayClass33_0_TypeInfo, v7);
    byte_4A05D3D = 1;
  }
  v8 = sub_1B68920(QuestTree___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B68930(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4A05D30 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75729984, v3);
    sub_1B686D4(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_4A05D30 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_55294828(
    v6,
    allWarInfoList,
    (const MethodInfo_34BBB6C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75729984);
  if ( !v6 )
    sub_1B68930(v7, v8);
  System_Collections_Generic_List_object___Reverse(
    v6,
    (const MethodInfo_34BDBA4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A05D31 & 1) == 0 )
  {
    sub_1B686D4(&QuestTree__Init_d__15_TypeInfo, endCallback);
    byte_4A05D31 = 1;
  }
  v5 = sub_1B68920(QuestTree__Init_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)endCallback, v8, v9);
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

  if ( (byte_4A05D46 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_4A05D46 = 1;
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
    sub_1B68930(mapControlRootInfo, method);
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

  if ( (byte_4A05D40 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_1B686D4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A05D40 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B68930(Instance, v8);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_30E4514 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_33874212(this, (WarEntity_o *)entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_33874212(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_4A05D41 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, warEnt);
    sub_1B686D4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&long___TypeInfo, v6);
    sub_1B686D4(&NetworkManager_TypeInfo, v7);
    this = (QuestTree_o *)sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A05D41 = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_24;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (QuestTree_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_24;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_30E4514 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  this = (QuestTree_o *)sub_1B6877C(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_24:
    sub_1B68930(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1B68938(this, warEnt);
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
        && ((v8 = Mine, !WarEntity__IsEvent(Mine, 0LL)) || QuestTree__IsActiveEventWar_33874212(this, v8, v9))
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

  if ( (byte_4A05D32 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A05D32 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v6);
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

  if ( (byte_4A05D3C & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_4A05D3C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    SpotList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( layer < 1 )
    {
      if ( !v22.fields._current )
        sub_1B68930(v13, v14);
      goto LABEL_12;
    }
    if ( !v22.fields._current )
      sub_1B68930(v13, v14);
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
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_1B68930(this, 0LL);
  return QuestTree__CheckSpotCond_33879604(
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
    sub_1B68930(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_33879604(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_33879604(
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

  if ( (byte_4A05D4D & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4A05D4D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1B68930(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    QuestInfoByWarId,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    v13 = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
    if ( !current )
      sub_1B68930(v13, v14);
    if ( !v13 )
      sub_1B68930(0LL, v14);
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
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_4A05D3E & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4A05D3E = 1;
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
    sub_1B68930(QuestInfoByWarId, v9);
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
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    if ( !v20.fields._current )
      sub_1B68930(v13, v14);
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
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_4A05D42 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1B686D4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1B686D4(&SpotEntity_TypeInfo, v9);
    byte_4A05D42 = 1;
  }
  v10 = sub_1B68920(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v10, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v10 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v10 + 32) = name;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)name, v13, v14);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v10, 0LL);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BBA5B0(v16);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BBA5B0(v17);
  v18 = **(UnityEngine_Object_o ***)(v17 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v10 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1B68930(Instance, v12);
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

  v4 = QuestTree__CheckMapGimmickCond_33876632(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1B68930(v4, v5);
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
    sub_1B68930(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_33879604(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_33879604(
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
    sub_1B68930(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_33879604(
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
    sub_1B68930(this, nowTime);
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

  if ( (byte_4A05D33 & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_4A05D33 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B68930(0LL, v4);
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
  if ( (byte_4A05D2F & 1) == 0 )
  {
    sub_1B686D4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_4A05D2F = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A05D43 & 1) == 0 )
  {
    sub_1B686D4(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo, endCallback);
    byte_4A05D43 = 1;
  }
  v5 = sub_1B68920(QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)endCallback, v8, v9);
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A05D44 & 1) == 0 )
  {
    sub_1B686D4(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo, *(_QWORD *)&targetWarId);
    byte_4A05D44 = 1;
  }
  v7 = sub_1B68920(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)endCallback, v10, v11);
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

  if ( (byte_4A05D37 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_1B686D4(&System_Predicate_MapControl_MapInfo__TypeInfo, v5);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__, v6);
    sub_1B686D4(&QuestTree___c__DisplayClass27_0_TypeInfo, v7);
    byte_4A05D37 = 1;
  }
  v8 = sub_1B68920(QuestTree___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B68930(v9, v10);
  *(_DWORD *)(v8 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v12,
                                   (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  struct QuestTree_o *_4__this; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w20
  BlankEarthSpotEntity_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  BlankEarthSpotEntity_o *v16; // x20
  const MethodInfo *v17; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v18; // x21
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  bool result; // w0

  v4 = this;
  if ( (byte_4A05D53 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B686D4(&BlankEarthSpotMaster_TypeInfo, method);
    byte_4A05D53 = 1;
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
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
      sub_1B68938(this, method);
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
          v18 = this;
          QuestTree__SetupBlankEarthSpotInfo((QuestTree_o *)this, v16, (MapControl_SpotInfo_o *)this, v17);
          v4->fields.__2__current = (struct MapControl_SpotInfo_o *)v18;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B68678(p__2__current, (int32_t)v18, v20, v21);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1B68930(this, method);
  }
  this->klass = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
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

  if ( (byte_4A05D54 & 1) == 0 )
  {
    sub_1B686D4(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, method);
    byte_4A05D54 = 1;
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
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B68920(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1B68678(
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *v16; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  bool result; // w0
  __int64 v21; // x0
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4A05D55 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5);
    this = (QuestTree__Init_d__15_o *)sub_1B686D4(&TerminalPramsManager_TypeInfo, v6);
    byte_4A05D55 = 1;
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
        if ( !byte_4A05D59 )
        {
          sub_1B686D4(&TerminalPramsManager_TypeInfo, method);
          byte_4A05D59 = 1;
        }
        v9 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v9 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v9->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v11 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
            v11 = sub_1BBA5B0(v11);
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
          if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
            v12 = sub_1BBA5B0(v12);
          v13 = **(UnityEngine_Object_o ***)(v12 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, v14);
              v16 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, v15);
              v2->fields.__2__current = (Il2CppObject *)v16;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B68678(p__2__current, (int32_t)v16, v18, v19);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1B68930(this, method);
      }
      v21 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
        v21 = sub_1BBA5B0(v21);
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
      if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
        v22 = sub_1BBA5B0(v22);
      v23 = **(UnityEngine_Object_o ***)(v22 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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

  if ( (byte_4A05D4F & 1) == 0 )
  {
    sub_1B686D4(&QuestTree___c_TypeInfo, v1);
    byte_4A05D4F = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(QuestTree___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v2;
  sub_1B68678((ServantStatusBattleListViewItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B68930(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__29_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, a);
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
    sub_1B68930(this, a);
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
    sub_1B68930(this, a);
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
    sub_1B68930(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__42_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
  if ( (byte_4A05D50 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4A05D50 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1B68930(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B68930(this, x);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
  if ( (byte_4A05D51 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_3_o *)sub_1B686D4(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_4A05D51 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1B68930(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_33751E0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1B68930(this, 0LL);
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
    sub_1B68930(this, 0LL);
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
  if ( (byte_4A05D52 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_6_o *)sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4A05D52 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1B68930(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B68930(this, 0LL);
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
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v2; // x27
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
  MapControl_WarInfo_o *v108; // x21
  int32_t v109; // w2
  int32_t v110; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v117; // x23
  int64_t v118; // x19
  Il2CppObject *v119; // x8
  Il2CppObject *_2__current; // x9
  __int64 v121; // x8
  struct QuestTree_o **p__4__this; // x9
  struct QuestTree_o *v123; // x10
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 _2__current_low; // x10
  __int64 v127; // x8
  int32_t v128; // w2
  int32_t v129; // w3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v130; // x22
  unsigned int v131; // w9
  __int64 v132; // x8
  int32_t v133; // w24
  int32_t v134; // w2
  int32_t v135; // w3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v138; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v140; // x23
  Il2CppClass **v141; // x0
  const MethodInfo *v142; // x3
  Il2CppObject *v143; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v144; // x25
  int v145; // w27
  unsigned int i; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v147; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v148; // x8
  SpotEntity_o **v149; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v150; // t1
  const MethodInfo *v151; // x3
  Il2CppObject *v152; // x26
  int32_t v153; // w2
  int32_t v154; // w3
  __int64 v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  __int64 v158; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v160; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v161; // x25
  int v162; // w27
  unsigned int v163; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v164; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v165; // x8
  SpotRoadEntity_o **v166; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v167; // t1
  const MethodInfo *v168; // x3
  Il2CppObject *v169; // x26
  int32_t v170; // w2
  int32_t v171; // w3
  __int64 v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  __int64 v175; // x8
  Il2CppObject *v176; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v177; // x24
  int v178; // w26
  int v179; // w22
  __int64 v180; // x8
  MapControl_MapGimmickInfo_o *v181; // x25
  const MethodInfo *v182; // x2
  int32_t v183; // w2
  int32_t v184; // w3
  __int64 v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  __int64 v188; // x8
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v190; // x22
  Il2CppObject *v191; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v193; // w2
  int32_t v194; // w3
  Il2CppObject *v195; // x22
  struct QuestTree___c__DisplayClass41_0_o **p__8__1; // x21
  int32_t v197; // w2
  int32_t v198; // w3
  int64_t v199; // x22
  MapControl_WarInfo_o *v200; // x23
  int32_t v201; // w2
  int32_t v202; // w3
  MapControl_MapInfo_o *v203; // x22
  int32_t v204; // w2
  int32_t v205; // w3
  MapControl_SpotInfo_o *v206; // x22
  int32_t v207; // w2
  int32_t v208; // w3
  WarEntity_o *v209; // x22
  int32_t v210; // w2
  int32_t v211; // w3
  Il2CppObject *v212; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  bool v215; // zf
  int v216; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x27
  bool result; // w0
  QuestEntity_o *v219; // x23
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x22
  int32_t QuestPhase; // w22
  struct QuestTree___c__DisplayClass41_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v224; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v226; // w2
  int32_t v227; // w3
  Il2CppObject *v228; // x0
  int32_t v229; // w2
  int32_t v230; // w3
  int32_t MapID; // w0
  const MethodInfo *v232; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v234; // w2
  int32_t v235; // w3
  int32_t v236; // w2
  int32_t v237; // w3
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x1
  WarEntity_o *Mine; // x0
  int32_t v241; // w2
  int32_t v242; // w3
  int v243; // w25
  int32_t v244; // w2
  int32_t v245; // w3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v246; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v248; // w2
  int32_t v249; // w3
  const MethodInfo *v250; // x2
  struct WarEntity_o *warEnt_5__23; // x8
  const MethodInfo *v252; // x4
  int v253; // w19
  struct MapControl_SpotInfo_o *v254; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v256; // x9
  struct MapControl_MapInfo_o *v257; // x9
  bool v258; // w8
  int32_t v259; // w2
  int32_t v260; // w3
  Il2CppObject *v261; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v262; // x21
  int v263; // w19
  int v264; // w22
  __int64 v265; // x8
  __int64 v266; // x8
  _QWORD *v267; // x9
  __int64 v268; // x10
  __int64 v269; // x8
  int32_t v270; // w2
  int32_t v271; // w3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v273; // x22
  Il2CppObject *v274; // x23
  struct QuestTree___c_StaticFields *v275; // x0
  int32_t v276; // w2
  int32_t v277; // w3
  int32_t v278; // w2
  int32_t v279; // w3
  int32_t v280; // w2
  int32_t v281; // w3
  int32_t v282; // w2
  int32_t v283; // w3
  int32_t v284; // w2
  int32_t v285; // w3
  int32_t v286; // w2
  int32_t v287; // w3
  int32_t v288; // w2
  int32_t v289; // w3
  int32_t v290; // w2
  int32_t v291; // w3
  ServantStatusBattleListViewItem_o *v292; // x27
  int v293; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v294; // [xsp+0h] [xbp-C0h]
  Il2CppObject *v295; // [xsp+10h] [xbp-B0h]
  unsigned int v296; // [xsp+1Ch] [xbp-A4h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v297; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v299; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v303; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4A05D56 & 1) == 0 )
  {
    sub_1B686D4(&System_Comparison_MapControl_QuestInfo__TypeInfo, method);
    sub_1B686D4(&System_Comparison_MapControl_WarInfo__TypeInfo, v3);
    sub_1B686D4(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v4);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventStatusMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMasterData_MapGimmickMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMasterData_MapMaster___, v10);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v12);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestPickupMaster___, v13);
    sub_1B686D4(&Method_DataManager_GetMasterData_SpotMaster___, v14);
    sub_1B686D4(&Method_DataManager_GetMasterData_SpotRoadMaster___, v15);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserQuestMaster___, v16);
    sub_1B686D4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v17);
    sub_1B686D4(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v18);
    sub_1B686D4(&DataManager_TypeInfo, v19);
    sub_1B686D4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20);
    sub_1B686D4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v22);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v23);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v24);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v25);
    sub_1B686D4(&long___TypeInfo, v26);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v27);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v28);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v29);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v30);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v31);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v32);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v33);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v34);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v35);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v36);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v37);
    sub_1B686D4(&MapControl_MapInfo_TypeInfo, v38);
    sub_1B686D4(&NetworkManager_TypeInfo, v39);
    sub_1B686D4(&OptionManager_TypeInfo, v40);
    sub_1B686D4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v41);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B686D4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v44);
    sub_1B686D4(&MapControl_SpotInfo_TypeInfo, v45);
    sub_1B686D4(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, v46);
    sub_1B686D4(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, v47);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__, v48);
    sub_1B686D4(&QuestTree___c__DisplayClass41_0_TypeInfo, v49);
    sub_1B686D4(&QuestTree___c_TypeInfo, v50);
    sub_1B686D4(&WarEntity_TypeInfo, v51);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B686D4(&MapControl_WarInfo_TypeInfo, v52);
    byte_4A05D56 = 1;
  }
  v303 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v299 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  v297 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_269;
      QuestTree__InitInfo(_4__this, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._dataManager_5__2, (int32_t)Instance, v55, v56);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&v2->fields._mapMaster_5__3,
        (int32_t)MasterData_object,
        v58,
        v59);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v60 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v60;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._spotMaster_5__4, (int32_t)v60, v61, v62);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v63 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v63;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._blankEarthSpotMaster_5__5, (int32_t)v63, v64, v65);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v66 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v66;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._questMaster_5__6, (int32_t)v66, v67, v68);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v69 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v69;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._questPhaseMaster_5__7, (int32_t)v69, v70, v71);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v72 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v72;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._eventMaster_5__8, (int32_t)v72, v73, v74);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v75 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v75;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._eventDetailMaster_5__9, (int32_t)v75, v76, v77);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v78 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v78;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusMaster_5__10, (int32_t)v78, v79, v80);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v81 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v81;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int32_t)v81,
        v82,
        v83);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v84 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v84;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._spotRoadMaster_5__12, (int32_t)v84, v85, v86);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v87;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._mapGimmickMaster_5__13, (int32_t)v87, v88, v89);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v90 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v90;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._questPickupMaster_5__14, (int32_t)v90, v91, v92);
      v93 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v93,
        (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v93;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v93,
        v94,
        v95);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      Entitys_object__object = DataManager__getEntitys_object__object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E49FB0 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys_object__object;
      sub_1B68678(
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
        goto LABEL_269;
      max_length = warList_5__16->max_length;
      v101 = 0;
      v2->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      goto LABEL_126;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v2->fields.__1__state = -1;
      goto LABEL_253;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_269;
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
      goto LABEL_269;
    if ( v101 >= v105->max_length )
      goto LABEL_148;
    v106 = v105->m_Items[v101];
    if ( !v106 )
      goto LABEL_269;
    if ( !_4__this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_269;
    id = v106->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_269;
    v108 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_269;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_30E4514 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_269;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v108, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_269;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v303,
               (int32_t)this,
               (const MethodInfo_30E4514 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v303;
          if ( !v303 )
            goto LABEL_269;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v303, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)entity;
            if ( !entity )
              goto LABEL_269;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_269;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v117 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v108, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_269;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v117->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_269;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_3133FA0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v118 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B6877C(long___TypeInfo, 3LL);
        v119 = entity;
        if ( !entity || !this )
          goto LABEL_269;
        _2__current = this->fields.__2__current;
        if ( !(_DWORD)_2__current )
          goto LABEL_148;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( (_DWORD)_2__current == 1 )
          goto LABEL_148;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v119[5].monitor;
        if ( (unsigned int)_2__current <= 2 )
          goto LABEL_148;
        this->fields.endCallback = (struct System_Action_o *)v119[6].monitor;
        if ( (int)_2__current >= 1 )
        {
          v121 = (unsigned int)_2__current;
          p__4__this = &this->fields.__4__this;
          do
          {
            v123 = *p__4__this;
            if ( (__int64)*p__4__this > v118 && _4__this->fields.forceUpdateTime > (__int64)v123 )
              _4__this->fields.forceUpdateTime = (int64_t)v123;
            --v121;
            ++p__4__this;
          }
          while ( v121 );
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_269;
    v124 = *(_QWORD *)&this->fields.__1__state;
    v125 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v124 )
      goto LABEL_269;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v124 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v108,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    }
    else
    {
      v127 = v124 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v127 + 32) = v108;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v127 + 32), (int32_t)v108, v109, v110);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_269;
    v130 = this;
    v295 = this->fields.__2__current;
    if ( (int)v295 >= 1 )
    {
      v131 = 0;
      v294 = this;
      while ( 1 )
      {
        v132 = *((_QWORD *)&v130->fields.__4__this + (int)v131);
        v296 = v131;
        if ( !v132 )
          goto LABEL_269;
        v133 = *(_DWORD *)(v132 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__AddChild(v108, v133, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_269;
        items = allMapInfoList->fields._items;
        v138 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_269;
        size = allMapInfoList->fields._size;
        v140 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
        }
        else
        {
          v141 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v141[4] = (Il2CppClass *)v140;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v141 + 4), (int32_t)v140, v134, v135);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotMaster__getList((SpotMaster_o *)this, v133, 0LL);
        if ( !this )
          goto LABEL_269;
        v143 = this->fields.__2__current;
        v144 = this;
        v145 = (_DWORD)v143 - 1;
        if ( (int)v143 >= 1 )
          break;
LABEL_91:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v140,
                                                                   v297->fields._blankEarthSpotMaster_5__5,
                                                                   v142);
        if ( !allSpotInfoList )
          goto LABEL_269;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v297->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v133,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
        v160 = this->fields.__2__current;
        v161 = this;
        v162 = (_DWORD)v160 - 1;
        if ( (int)v160 >= 1 )
        {
          v163 = 0;
          while ( 1 )
          {
            v164 = &v161->klass + (int)v163;
            v167 = v164[4];
            v166 = (SpotRoadEntity_o **)(v164 + 4);
            v165 = v167;
            if ( !v167 || !v140 )
              goto LABEL_269;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v140,
                                                                       (int32_t)v165->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v163 >= LODWORD(v161->fields.__2__current) )
              goto LABEL_148;
            v169 = (Il2CppObject *)this;
            QuestTree__SetupSpotRoadInfo(_4__this, *v166, &spotRoadInfo, v168);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_269;
            v172 = *(_QWORD *)&this->fields.__1__state;
            v173 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v172 )
              goto LABEL_269;
            v174 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v174 >= *(_DWORD *)(v172 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v169,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
            }
            else
            {
              v175 = v172 + 8 * v174;
              LODWORD(this->fields.__2__current) = v174 + 1;
              *(_QWORD *)(v175 + 32) = v169;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v175 + 32), (int32_t)v169, v170, v171);
            }
            if ( v162 == v163 )
              break;
            if ( ++v163 >= LODWORD(v161->fields.__2__current) )
              goto LABEL_148;
          }
        }
        v2 = v297;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v297->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v133,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
        v176 = this->fields.__2__current;
        v177 = this;
        v178 = (_DWORD)v176 - 1;
        if ( (int)v176 >= 1 )
        {
          v179 = 0;
          while ( 1 )
          {
            v180 = *((_QWORD *)&v177->fields.__4__this + v179);
            if ( !v180 )
              goto LABEL_269;
            if ( !v140 )
              goto LABEL_269;
            v181 = MapControl_MapInfo__AddMapGimmick(v140, *(_DWORD *)(v180 + 16), 0LL);
            mapGimmickInfo = v181;
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v182);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_269;
            v185 = *(_QWORD *)&this->fields.__1__state;
            v186 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v185 )
              goto LABEL_269;
            v187 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v187 >= *(_DWORD *)(v185 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v181,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
            }
            else
            {
              v188 = v185 + 8 * v187;
              LODWORD(this->fields.__2__current) = v187 + 1;
              *(_QWORD *)(v188 + 32) = v181;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v188 + 32), (int32_t)v181, v183, v184);
            }
            if ( v178 == v179 )
              break;
            if ( (unsigned int)++v179 >= LODWORD(v177->fields.__2__current) )
              goto LABEL_148;
          }
        }
        v130 = v294;
        v131 = v296 + 1;
        if ( v296 + 1 == (_DWORD)v295 )
          goto LABEL_124;
        if ( v131 >= LODWORD(v294->fields.__2__current) )
          goto LABEL_148;
      }
      for ( i = 0; i < LODWORD(v144->fields.__2__current); ++i )
      {
        v147 = &v144->klass + (int)i;
        v150 = v147[4];
        v149 = (SpotEntity_o **)(v147 + 4);
        v148 = v150;
        if ( !v150 || !v140 )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddChild(
                                                                   v140,
                                                                   (int32_t)v148->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v144->fields.__2__current) )
          break;
        v152 = (Il2CppObject *)this;
        QuestTree__SetupSpotInfo(_4__this, *v149, &spotInfo, v151);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_269;
        v155 = *(_QWORD *)&this->fields.__1__state;
        v156 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v155 )
          goto LABEL_269;
        v157 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v157 >= *(_DWORD *)(v155 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v152,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
        }
        else
        {
          v158 = v155 + 8 * v157;
          LODWORD(this->fields.__2__current) = v157 + 1;
          *(_QWORD *)(v158 + 32) = v152;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v158 + 32), (int32_t)v152, v153, v154);
        }
        if ( v145 == i )
          goto LABEL_91;
      }
LABEL_148:
      sub_1B68938(this, method);
    }
LABEL_124:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B68678(p__2__current, 0, v128, v129);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_126:
    max_length = v2->fields._warCount_5__19;
    v101 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v101;
  }
  if ( !_4__this )
    goto LABEL_269;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  }
  v190 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v190 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v191 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v190 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v190, v191, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Comparison_MapControl_WarInfo__o *)v190;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)v190, v193, v194);
  }
  if ( !allWarInfoList )
    goto LABEL_269;
  System_Collections_Generic_List_object___Sort_55303484(
    allWarInfoList,
    v190,
    (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v195 = (Il2CppObject *)sub_1B68920(QuestTree___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor(v195, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v195;
  p__8__1 = &v2->fields.__8__1;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v195, v197, v198);
  v199 = v2->fields._nowTime_5__17;
  v200 = (MapControl_WarInfo_o *)sub_1B68920(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v200, v199, 0LL);
  v2->fields._warInfo_5__20 = v200;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._warInfo_5__20, (int32_t)v200, v201, v202);
  v203 = (MapControl_MapInfo_o *)sub_1B68920(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v203, 0LL);
  v2->fields._mapInfo_5__21 = v203;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._mapInfo_5__21, (int32_t)v203, v204, v205);
  v206 = (MapControl_SpotInfo_o *)sub_1B68920(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v206, 0LL);
  v2->fields._spotInfo_5__22 = v206;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._spotInfo_5__22, (int32_t)v206, v207, v208);
  v209 = (WarEntity_o *)sub_1B68920(WarEntity_TypeInfo);
  WarEntity___ctor(v209, 0LL);
  v2->fields._warEnt_5__23 = v209;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._warEnt_5__23, (int32_t)v209, v210, v211);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_269;
  v212 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v212;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._userQuestMaster_5__24, (int32_t)v212, v213, v214);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_269;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v215 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questMaster_5__6;
  v216 = v215 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v216;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_269;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_269;
    v219 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v299 = 0LL;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_269;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v299, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v299;
      if ( !v299 )
        goto LABEL_269;
      QuestPhase = UserQuestEntity__getQuestPhase(v299, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__getSpotId_39212064(v219, QuestPhase + 1, 0LL);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_269;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_269;
      v224 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v226, v227);
      }
      if ( !v224 )
        goto LABEL_269;
      v228 = System_Collections_Generic_List_object___Find(
               v224,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v297;
      v297->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v228;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v297->fields._spotInfo_5__22, (int32_t)v228, v229, v230);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v297->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_269;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v297->fields._mapInfoNow_5__27 != MapID )
      {
        v297->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, v232);
        v297->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&v297->fields._mapInfo_5__21,
          (int32_t)MapInfoByMapID,
          v234,
          v235);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v297->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v297->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v297->fields._warInfoNow_5__28 = (int)method;
          mapControlRootInfo = _4__this->fields.mapControlRootInfo;
          if ( mapControlRootInfo )
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, (int32_t)method, 0LL);
          else
            ChildByWarID = 0LL;
          v297->fields._warInfo_5__20 = ChildByWarID;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&v297->fields._warInfo_5__20,
            (int32_t)ChildByWarID,
            v236,
            v237);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v297->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_269;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v297->fields._warEnt_5__23 = Mine;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v297->fields._warEnt_5__23, (int32_t)Mine, v241, v242);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_269;
    if ( !v299 )
      goto LABEL_192;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v299;
    if ( !v299 )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v299, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_180;
    if ( !v299 )
      goto LABEL_269;
    if ( v299->fields.challengeNum >= 1 )
    {
LABEL_180:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_269;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v299;
    if ( !v299 )
      goto LABEL_269;
    if ( UserQuestEntity__getClearNum(v299, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_269;
LABEL_192:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v243 = 0;
      goto LABEL_193;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v299 )
      goto LABEL_269;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v299->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_269;
    v243 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_269;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_269;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_193:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_269;
    v246 = this;
    if ( !this )
      goto LABEL_269;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._eventMaster_5__8, (int32_t)method, v244, v245);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v246->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&v246->fields._questPhaseMaster_5__7,
      (int32_t)spotInfo_5__22,
      v248,
      v249);
    if ( !_4__this )
      goto LABEL_269;
    v246->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v246,
                                                                          v250);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_269;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_207;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_269;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_313572C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)value;
      if ( !value )
        goto LABEL_269;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_207:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v246, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v246->fields.__4__this) = 0;
LABEL_211:
        v253 = 1;
        goto LABEL_212;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v219, (MapControl_QuestInfo_o *)v246, v2->fields._warInfoNow_5__28, v252) != 1 )
      goto LABEL_211;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_269;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v253 = 0;
LABEL_212:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v246, 0LL) )
    {
      if ( ((v243 | v253) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_269;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_269;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v246->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v246, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v246,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v254 = v2->fields._spotInfo_5__22;
          if ( !v254 )
            goto LABEL_269;
          v254->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_269;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v246,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v256 = v2->fields._spotInfo_5__22;
        if ( !v256 )
          goto LABEL_269;
        v256->fields._IsNext_k__BackingField = 1;
        v257 = v2->fields._mapInfo_5__21;
        if ( !v257 )
          goto LABEL_269;
        v257->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v219, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_269;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v299 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v299, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v299 )
          goto LABEL_269;
        v258 = v299->fields.challengeNum == 0;
      }
      else
      {
        v258 = 0;
      }
    }
    else
    {
      v258 = 1;
    }
    LOBYTE(v246->fields.__8__1) = v258;
    HIDWORD(v246->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_269;
    LODWORD(v246->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_269;
    v261 = this->fields.__2__current;
    v262 = this;
    v263 = (_DWORD)v261 - 1;
    if ( (int)v261 >= 1 )
    {
      v264 = 0;
      while ( 1 )
      {
        v265 = *((_QWORD *)&v262->fields.__4__this + v264);
        if ( !v265 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v246,
                                                                   *(_DWORD *)(v265 + 16),
                                                                   *(_DWORD *)(v265 + 20),
                                                                   0LL);
        if ( v263 == v264 )
          goto LABEL_246;
        if ( (unsigned int)++v264 >= LODWORD(v262->fields.__2__current) )
          goto LABEL_148;
      }
LABEL_269:
      sub_1B68930(this, method);
    }
LABEL_246:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_269;
    v266 = *(_QWORD *)&this->fields.__1__state;
    v267 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v266 )
      goto LABEL_269;
    v268 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v268 >= *(_DWORD *)(v266 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v246,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v267[4] + 192LL) + 112LL));
    }
    else
    {
      v269 = v266 + 8 * v268;
      LODWORD(this->fields.__2__current) = v268 + 1;
      *(_QWORD *)(v269 + 32) = v246;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v269 + 32), (int32_t)v246, v259, v260);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0LL;
      v292 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B68678(v292, 0, v270, v271);
      v293 = 2;
      goto LABEL_268;
    }
LABEL_253:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_269;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  }
  v273 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v273 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v274 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v273 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v273, v274, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, 0LL);
    v275 = QuestTree___c_TypeInfo->static_fields;
    v275->__9__41_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v273;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v275->__9__41_1, (int32_t)v273, v276, v277);
  }
  if ( !allQuestInfoList )
    goto LABEL_269;
  System_Collections_Generic_List_object___Sort_55303484(
    allQuestInfoList,
    v273,
    (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, 0, v278, v279);
  v2->fields._warInfo_5__20 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._warInfo_5__20, 0, v280, v281);
  v2->fields._mapInfo_5__21 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._mapInfo_5__21, 0, v282, v283);
  v2->fields._spotInfo_5__22 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._spotInfo_5__22, 0, v284, v285);
  v2->fields._warEnt_5__23 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._warEnt_5__23, 0, v286, v287);
  v2->fields._userQuestMaster_5__24 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields._userQuestMaster_5__24, 0, v288, v289);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_269;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v2->fields.endCallback )
    return 0;
  v2->fields.__2__current = 0LL;
  v292 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B68678(v292, 0, v290, v291);
  v293 = 3;
LABEL_268:
  *(_DWORD *)&v292[-1].fields.isMine = v293;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  _QWORD *v239; // x0
  Il2CppObject *v240; // x8
  __int64 v241; // x9
  __int64 v242; // x8
  int64_t *v243; // x9
  int64_t v244; // x10
  System_Collections_Generic_List_object__o *v245; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v247; // x1
  _QWORD *v248; // x9
  __int64 size; // x10
  Il2CppClass **v250; // x8
  __int64 v251; // x0
  __int64 v252; // x1
  int32_t v253; // w9
  struct QuestTree___c__DisplayClass42_1_o *v254; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v256; // x0
  __int64 v257; // x1
  SpotRoadEntity_array *v258; // x20
  int v259; // w25
  il2cpp_array_size_t i; // w26
  __int64 v261; // x21
  __int64 v262; // x0
  __int64 v263; // x1
  SpotRoadEntity_o *v264; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v266; // x24
  __int64 v267; // x0
  __int64 v268; // x1
  unsigned int v269; // w0
  __int64 v270; // x1
  System_Collections_Generic_List_object__o *v271; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  MapControl_SpotRoadInfo_o *v273; // x21
  const MethodInfo *v274; // x3
  __int64 v275; // x1
  int32_t v276; // w2
  int32_t v277; // w3
  System_Collections_Generic_List_object__o *v278; // x0
  struct System_Object_array *v279; // x8
  _QWORD *v280; // x9
  __int64 v281; // x10
  Il2CppClass **v282; // x8
  struct QuestTree___c__DisplayClass42_1_o *v283; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v285; // x0
  __int64 v286; // x1
  int32_t v287; // w2
  int32_t v288; // w3
  MapGimmickEntity_array *v289; // x20
  int v290; // w24
  il2cpp_array_size_t j; // w25
  __int64 v292; // x21
  __int64 v293; // x0
  __int64 v294; // x1
  MapGimmickEntity_o *v295; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v297; // x23
  __int64 v298; // x0
  __int64 v299; // x1
  unsigned int v300; // w0
  __int64 v301; // x1
  System_Collections_Generic_List_object__o *v302; // x0
  MapControl_MapInfo_o *v303; // x0
  MapControl_MapGimmickInfo_o *v304; // x21
  const MethodInfo *v305; // x2
  __int64 v306; // x1
  int32_t v307; // w2
  int32_t v308; // w3
  System_Collections_Generic_List_object__o *v309; // x0
  struct System_Object_array *v310; // x8
  _QWORD *v311; // x9
  __int64 v312; // x10
  Il2CppClass **v313; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v314; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v315; // x8
  int v316; // w9
  ServantStatusBattleListViewItem_o *p_mapInfo_5__16; // x8
  __int64 v318; // x0
  __int64 v319; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v320; // x8
  int32_t max_length; // w10
  int32_t v322; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v324; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v326; // x0
  int32_t v327; // w2
  int32_t v328; // w3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v330; // x10
  MapEntity_o *v331; // x9
  struct QuestTree___c__DisplayClass42_1_o *v332; // x22
  struct MapControl_WarInfo_o *v333; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v336; // w2
  int32_t v337; // w3
  struct MapControl_WarInfo_o *v338; // x8
  System_Collections_Generic_List_object__o *v339; // x0
  struct QuestTree___c__DisplayClass42_1_o *v340; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v343; // w2
  int32_t v344; // w3
  __int64 v345; // x0
  __int64 v346; // x1
  System_Collections_Generic_List_object__o *v347; // x0
  struct QuestTree___c__DisplayClass42_1_o *v348; // x8
  MapControl_WarInfo_o *v349; // x0
  struct MapControl_MapInfo_o *v350; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v351; // x0
  int32_t v352; // w2
  int32_t v353; // w3
  __int64 v354; // x1
  int32_t v355; // w2
  int32_t v356; // w3
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
  System_Comparison_T__o *_9__42_2; // x21
  Il2CppObject *v368; // x22
  struct QuestTree___c_StaticFields *v369; // x0
  int32_t v370; // w2
  int32_t v371; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v372; // x0
  int32_t v373; // w2
  int32_t v374; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v375; // x0
  int32_t v376; // w2
  int32_t v377; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v378; // x0
  int32_t v379; // w2
  int32_t v380; // w3
  Il2CppObject *v381; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v382; // x0
  int32_t v383; // w2
  int32_t v384; // w3
  int64_t v385; // x21
  MapControl_WarInfo_o *v386; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v387; // x0
  int32_t v388; // w2
  int32_t v389; // w3
  MapControl_MapInfo_o *v390; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v391; // x0
  int32_t v392; // w2
  int32_t v393; // w3
  MapControl_SpotInfo_o *v394; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v395; // x0
  int32_t v396; // w2
  int32_t v397; // w3
  WarEntity_o *v398; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v399; // x0
  int32_t v400; // w2
  int32_t v401; // w3
  __int64 v402; // x1
  DataManager_o *v403; // x0
  Il2CppObject *v404; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v405; // x0
  int32_t v406; // w2
  int32_t v407; // w3
  Il2CppObject *Master_object; // x0
  __int64 v409; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v410; // x8
  struct QuestTree___c__DisplayClass42_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v413; // x1
  int32_t v414; // w9
  struct QuestTree___c__DisplayClass42_6_o *v415; // x20
  System_Collections_Generic_List_int__o *v416; // x21
  __int64 v417; // x0
  __int64 v418; // x1
  int32_t v419; // w2
  int32_t v420; // w3
  __int64 v421; // x1
  System_Collections_Generic_List_object__o *v422; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v423; // x9
  __int128 v424; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap24; // x0
  int32_t v426; // w2
  int32_t v427; // w3
  const MethodInfo *v428; // x1
  bool v429; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v430; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v433; // x1
  int32_t v434; // w2
  int32_t v435; // w3
  struct QuestTree___c__DisplayClass42_0_o *v436; // x9
  struct QuestTree___c__DisplayClass42_6_o *v437; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v440; // x9
  _QWORD *v441; // x10
  __int64 v442; // x11
  unsigned __int64 v443; // t2
  __int64 v444; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v445; // x8
  DataMasterBase_o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x20
  Il2CppObject *v448; // x22
  System_Func_object__bool__o *v449; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v450; // x0
  System_Object_array *v451; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v452; // x0
  int32_t v453; // w2
  int32_t v454; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v455; // x8
  __int64 mapIdx_5__12; // x0
  int32_t mapCount_5__13; // w9
  struct QuestTree___c__DisplayClass42_1_o *v458; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v460; // x0
  __int64 v461; // x1
  const MethodInfo *v462; // x3
  SpotEntity_array *v463; // x20
  int v464; // w25
  il2cpp_array_size_t k; // w26
  __int64 v466; // x21
  __int64 v467; // x0
  __int64 v468; // x1
  SpotEntity_o *v469; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v471; // x24
  __int64 v472; // x0
  __int64 v473; // x1
  unsigned int v474; // w0
  __int64 v475; // x1
  System_Collections_Generic_List_object__o *v476; // x0
  MapControl_MapInfo_o *v477; // x0
  MapControl_SpotInfo_o *v478; // x21
  const MethodInfo *v479; // x3
  __int64 v480; // x1
  int32_t v481; // w2
  int32_t v482; // w3
  System_Collections_Generic_List_object__o *v483; // x0
  struct System_Object_array *v484; // x8
  _QWORD *v485; // x9
  __int64 v486; // x10
  Il2CppClass **v487; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v488; // x0
  System_Object_array *v489; // x0
  __int64 v490; // x1
  int32_t v491; // w2
  int32_t v492; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v493; // x20
  __int64 v494; // x21
  QuestTree___c_c *v495; // x8
  System_Func_object__int__o *_9__42_6; // x22
  Il2CppObject *v497; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v499; // w2
  int32_t v500; // w3
  System_Collections_Generic_IEnumerable_T__o *v501; // x23
  System_Collections_Generic_HashSet_int__o *v502; // x22
  __int64 v503; // x0
  __int64 v504; // x1
  int32_t v505; // w2
  int32_t v506; // w3
  System_Collections_Generic_List_T__o *v507; // x22
  System_Func_object__bool__o *v508; // x23
  __int64 v509; // x1
  System_Collections_Generic_List_object__o *v510; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v511; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v514; // x20
  struct QuestTree___c__DisplayClass42_6_o *v515; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  int64_t UserId; // x0
  __int64 v518; // x1
  struct QuestTree___c__DisplayClass42_6_o *v519; // x8
  __int64 v520; // x1
  int32_t QuestPhase; // w21
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *SpotId_39212064; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v524; // x22
  struct QuestTree___c__DisplayClass42_6_o *v525; // x25
  System_Collections_Generic_List_object__o *v526; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v528; // w2
  int32_t v529; // w3
  Il2CppObject *v530; // x0
  int32_t v531; // w2
  int32_t v532; // w3
  __int64 v533; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  const MethodInfo *v535; // x2
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v537; // x0
  int32_t v538; // w2
  int32_t v539; // w3
  __int64 v540; // x1
  MapControl_MapInfo_o *v541; // x0
  __int64 v542; // x1
  int32_t v543; // w2
  int32_t v544; // w3
  MapEntity_o *v545; // x8
  MapControl_WarInfo_o *ChildByWarID; // x1
  __int64 v547; // x1
  MapControl_WarInfo_o *v548; // x0
  struct WarEntity_o *v549; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v550; // x0
  int32_t v551; // w2
  int32_t v552; // w3
  struct QuestTree___c__DisplayClass42_6_o *v553; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v556; // w2
  int32_t v557; // w3
  unsigned int v558; // w0
  __int64 v559; // x1
  System_Collections_Generic_List_object__o *v560; // x0
  MapControl_WarInfo_o *v561; // x0
  __int64 v562; // x1
  _BOOL8 HasStatus; // x0
  __int64 v564; // x1
  MapControl_WarInfo_o *v565; // x0
  WarEntity_o *v566; // x0
  __int64 v567; // x1
  int v568; // w23
  bool v569; // cc
  __int64 v570; // x1
  struct QuestTree___c__DisplayClass42_6_o *v571; // x9
  MapControl_WarInfo_o *v572; // x0
  struct QuestTree___c__DisplayClass42_6_o *v573; // x8
  MapControl_SpotInfo_o *v574; // x0
  MapControl_QuestInfo_o *v575; // x0
  int32_t v576; // w2
  int32_t v577; // w3
  struct MapControl_WarInfo_o *v578; // x1
  MapControl_QuestInfo_o *v579; // x22
  int32_t v580; // w8
  struct MapControl_SpotInfo_o *v581; // x1
  int32_t v582; // w2
  int32_t v583; // w3
  const MethodInfo *v584; // x2
  __int64 v585; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v588; // x1
  struct WarEntity_o *v589; // x8
  struct QuestTree___c__DisplayClass42_6_o *v590; // x9
  struct WarEntity_o *v591; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v592; // x0
  _BOOL8 v593; // x0
  __int64 v594; // x1
  const MethodInfo *v595; // x4
  struct QuestTree___c__DisplayClass42_6_o *v596; // x8
  __int64 v597; // x1
  MapControl_WarInfo_o *v598; // x0
  int v599; // w24
  __int64 v600; // x1
  MapControl_SpotInfo_o *v601; // x0
  __int64 v602; // x1
  MapControl_SpotInfo_o *v603; // x0
  QuestEntity_o *v604; // x0
  __int64 v605; // x1
  _BOOL8 HasFlag; // x0
  __int64 v607; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v608; // x8
  struct MapControl_SpotInfo_o *v609; // x9
  struct MapControl_MapInfo_o *v610; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v612; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v613; // x8
  struct MapControl_SpotInfo_o *v614; // x9
  struct MapControl_MapInfo_o *v615; // x8
  MapControl_SpotInfo_o *v616; // x0
  UserQuestEntity_o *v617; // x0
  bool v618; // w8
  struct QuestTree___c__DisplayClass42_6_o *v619; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v622; // x1
  struct QuestTree___c__DisplayClass42_6_o *v623; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v625; // x0
  __int64 v626; // x1
  int32_t v627; // w2
  int32_t v628; // w3
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
  int32_t v640; // w3
  System_Collections_Generic_List_object__o *v641; // x20
  QuestTree___c_c *v642; // x8
  System_Comparison_T__o *_9__42_11; // x21
  Il2CppObject *v644; // x22
  struct QuestTree___c_StaticFields *v645; // x0
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
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v660; // x0
  int32_t v661; // w2
  int32_t v662; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v663; // x0
  int32_t v664; // w2
  int32_t v665; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v666; // x0
  int32_t v667; // w2
  int32_t v668; // w3
  Il2CppObject *v669; // x0
  __int64 v670; // x1
  int32_t v671; // w2
  int32_t v672; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v673; // x0
  System_Collections_Generic_List_Enumerator_T__o v674[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v675; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o **v676; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v678; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v682; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v684; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v684 = this;
  if ( (byte_4A05D57 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_1B686D4(&System_Comparison_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B686D4(&System_Comparison_MapControl_WarInfo__TypeInfo, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventStatusMaster___, v10);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v11);
    sub_1B686D4(&Method_DataManager_GetMasterData_MapGimmickMaster___, v12);
    sub_1B686D4(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1B686D4(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1B686D4(&Method_DataManager_GetMasterData_SpotMaster___, v17);
    sub_1B686D4(&Method_DataManager_GetMasterData_SpotRoadMaster___, v18);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserQuestMaster___, v19);
    sub_1B686D4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v20);
    sub_1B686D4(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v21);
    sub_1B686D4(&DataManager_TypeInfo, v22);
    sub_1B686D4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v23);
    sub_1B686D4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_1B686D4(&Method_DataMasterBase_getEntitys_QuestEntity___, v25);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v26);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v27);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v28);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v29);
    sub_1B686D4(&Method_System_Linq_Enumerable_Count_QuestEntity___, v30);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v31);
    sub_1B686D4(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v32);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v33);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v34);
    sub_1B686D4(&Method_System_Linq_Enumerable_Where_QuestEntity___, v35);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v36);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v37);
    sub_1B686D4(&System_Func_MapControl_SpotInfo__int__TypeInfo, v38);
    sub_1B686D4(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v39);
    sub_1B686D4(&System_Func_WarEntity__bool__TypeInfo, v40);
    sub_1B686D4(&System_Func_QuestEntity__bool__TypeInfo, v41);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int___ctor___75686384, v42);
    sub_1B686D4(&System_Collections_Generic_HashSet_int__TypeInfo, v43);
    sub_1B686D4(&long___TypeInfo, v44);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v45);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v46);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v47);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v48);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v49);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v50);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v51);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v52);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v53);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v54);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v55);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v56);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v57);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v58);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v59);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v60);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v61);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v62);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v63);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v64);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v65);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v66);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v67);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v68);
    sub_1B686D4(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v69);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v70);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v71);
    sub_1B686D4(&MapControl_MapInfo_TypeInfo, v72);
    sub_1B686D4(&NetworkManager_TypeInfo, v73);
    sub_1B686D4(&OptionManager_TypeInfo, v74);
    sub_1B686D4(&System_Predicate_MapControl_WarInfo__TypeInfo, v75);
    sub_1B686D4(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v76);
    sub_1B686D4(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v77);
    sub_1B686D4(&System_Predicate_MapControl_MapInfo__TypeInfo, v78);
    sub_1B686D4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v79);
    sub_1B686D4(&System_Predicate_MapControl_QuestInfo__TypeInfo, v80);
    sub_1B686D4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v81);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v82);
    sub_1B686D4(&MapControl_SpotInfo_TypeInfo, v83);
    sub_1B686D4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__, v84);
    sub_1B686D4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__, v85);
    sub_1B686D4(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__, v86);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v87);
    sub_1B686D4(&QuestTree___c__DisplayClass42_0_TypeInfo, v88);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v89);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v90);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v91);
    sub_1B686D4(&QuestTree___c__DisplayClass42_1_TypeInfo, v92);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v93);
    sub_1B686D4(&QuestTree___c__DisplayClass42_2_TypeInfo, v94);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v95);
    sub_1B686D4(&QuestTree___c__DisplayClass42_3_TypeInfo, v96);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v97);
    sub_1B686D4(&QuestTree___c__DisplayClass42_4_TypeInfo, v98);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v99);
    sub_1B686D4(&QuestTree___c__DisplayClass42_5_TypeInfo, v100);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v101);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v102);
    sub_1B686D4(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v103);
    sub_1B686D4(&QuestTree___c__DisplayClass42_6_TypeInfo, v104);
    sub_1B686D4(&QuestTree___c_TypeInfo, v105);
    sub_1B686D4(&WarEntity_TypeInfo, v106);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)sub_1B686D4(&MapControl_WarInfo_TypeInfo, v107);
    v4 = v684;
    byte_4A05D57 = 1;
  }
  v682 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v678 = 0LL;
  mapGimmickInfo = 0LL;
  v675 = 0LL;
  v676 = &v684;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v109 = (Il2CppObject *)sub_1B68920(QuestTree___c__DisplayClass42_0_TypeInfo);
      System_Object___ctor(v109, 0LL);
      v110 = v684;
      v684->fields.__8__2 = (struct QuestTree___c__DisplayClass42_0_o *)v109;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v110->fields.__8__2, (int32_t)v109, v111, v112);
      _8__2 = v684->fields.__8__2;
      if ( !_8__2 )
        sub_1B68930(v113, v114);
      _8__2->fields.targetWarId = v684->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v117 = v684;
      v684->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v117->fields._dataManager_5__2, (int32_t)Instance, v118, v119);
      dataManager_5__2 = v684->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1B68930(0LL, v120);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MapMaster___);
      v124 = v684->fields._dataManager_5__2;
      if ( !v124 )
        sub_1B68930(0LL, v122);
      v125 = DataManager__GetMasterData_object_(
               v124,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SpotMaster___);
      v126 = v684;
      v684->fields._spotMaster_5__3 = (struct SpotMaster_o *)v125;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v126->fields._spotMaster_5__3, (int32_t)v125, v127, v128);
      v130 = v684->fields._dataManager_5__2;
      if ( !v130 )
        sub_1B68930(0LL, v129);
      v131 = DataManager__GetMasterData_object_(
               v130,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v132 = v684;
      v684->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v131;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&v132->fields._blankEarthSpotMaster_5__4,
        (int32_t)v131,
        v133,
        v134);
      v136 = v684->fields._dataManager_5__2;
      if ( !v136 )
        sub_1B68930(0LL, v135);
      v137 = DataManager__GetMasterData_object_(
               v136,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestMaster___);
      v138 = v684;
      v684->fields._questMaster_5__5 = (struct QuestMaster_o *)v137;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v138->fields._questMaster_5__5, (int32_t)v137, v139, v140);
      v142 = v684->fields._dataManager_5__2;
      if ( !v142 )
        sub_1B68930(0LL, v141);
      v143 = DataManager__GetMasterData_object_(
               v142,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v144 = v684;
      v684->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v143;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v144->fields._questPhaseMaster_5__6, (int32_t)v143, v145, v146);
      v148 = v684->fields._dataManager_5__2;
      if ( !v148 )
        sub_1B68930(0LL, v147);
      v150 = DataManager__GetMasterData_object_(
               v148,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventMaster___);
      v151 = v684->fields._dataManager_5__2;
      if ( !v151 )
        sub_1B68930(0LL, v149);
      v153 = DataManager__GetMasterData_object_(
               v151,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v154 = v684->fields._dataManager_5__2;
      if ( !v154 )
        sub_1B68930(0LL, v152);
      v156 = DataManager__GetMasterData_object_(
               v154,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v157 = v684->fields._dataManager_5__2;
      if ( !v157 )
        sub_1B68930(0LL, v155);
      v159 = DataManager__GetMasterData_object_(
               v157,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v160 = v684->fields._dataManager_5__2;
      if ( !v160 )
        sub_1B68930(0LL, v158);
      v161 = DataManager__GetMasterData_object_(
               v160,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v162 = v684;
      v684->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v161;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v162->fields._spotRoadMaster_5__7, (int32_t)v161, v163, v164);
      v166 = v684->fields._dataManager_5__2;
      if ( !v166 )
        sub_1B68930(0LL, v165);
      v167 = DataManager__GetMasterData_object_(
               v166,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v168 = v684;
      v684->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v167;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v168->fields._mapGimmickMaster_5__8, (int32_t)v167, v169, v170);
      v172 = v684->fields._dataManager_5__2;
      if ( !v172 )
        sub_1B68930(0LL, v171);
      v173 = DataManager__GetMasterData_object_(
               v172,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v174 = v684;
      v684->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v173;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v174->fields._questPickupMaster_5__9, (int32_t)v173, v175, v176);
      v177 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v177,
        (const MethodInfo_31335CC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v178 = v684;
      v684->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v177;
      sub_1B68678(
        (ServantStatusBattleListViewItem_o *)&v178->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v177,
        v179,
        v180);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v684->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v181 = (Il2CppObject *)sub_1B68920(QuestTree___c__DisplayClass42_1_TypeInfo);
      System_Object___ctor(v181, 0LL);
      v182 = v684;
      v684->fields.__8__1 = (struct QuestTree___c__DisplayClass42_1_o *)v181;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v182->fields.__8__1, (int32_t)v181, v183, v184);
      v186 = v684->fields._dataManager_5__2;
      if ( !v186 )
        sub_1B68930(0LL, v185);
      Entitys_object__object = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__getEntitys_object__object_(
                                                                                      v186,
                                                                                      (const MethodInfo_2E49FB0 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v188 = (Il2CppObject *)v684->fields.__8__2;
      v189 = (System_Func_object__bool__o *)sub_1B68920(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v189,
        v188,
        Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v190 = System_Linq_Enumerable__SingleOrDefault_object__48758248(
               Entitys_object__object,
               (System_Func_TSource__bool__o *)v189,
               (const MethodInfo_2E7FDE8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v190 )
        sub_1B68930(0LL, v191);
      _8__1 = v684->fields.__8__1;
      if ( !_8__1 )
        sub_1B68930(v190, v191);
      klass_low = LODWORD(v190[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1B68930(v190, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1B68930(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v196 = (Il2CppObject *)v684->fields.__8__1;
      v197 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v197,
        v196,
        Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1B68930(v198, v199);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v197,
                (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v201 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v202 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v202 )
          sub_1B68930(0LL, v201);
        System_Collections_Generic_List_object___RemoveAt(
          v202,
          v201,
          (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v203 = v684->fields.__8__1;
      if ( !v203 )
        sub_1B68930(Index, v201);
      v204 = _4__this->fields.mapControlRootInfo;
      if ( !v204 )
        sub_1B68930(0LL, v201);
      v205 = MapControl_RootInfo__AddChild(v204, v203->fields.warId, v684->fields._nowTime_5__11, 0LL);
      v206 = v684;
      v684->fields._warInfo_5__14 = v205;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v206->fields._warInfo_5__14, (int32_t)v205, v207, v208);
      warInfo_5__14 = v684->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1B68930(0LL, v209);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v214 = v684->fields._warInfo_5__14;
        if ( !v214 )
          sub_1B68930(0LL, v211);
        EventId = MapControl_WarInfo__GetEventId(v214, 0LL);
        if ( !v150 )
          sub_1B68930(EventId, v216);
        v217 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v150,
                 &entity,
                 EventId,
                 (const MethodInfo_30E4514 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v217 )
        {
          if ( !entity )
            sub_1B68930(v217, v211);
          v218 = v684;
          nowTime_5__11 = v684->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v220 = v684->fields._warInfo_5__14;
            if ( !v220 )
              sub_1B68930(0LL, v211);
            MapControl_WarInfo__SetStatusCheckFlag(v220, 1, 0, 0LL);
            v218 = v684;
          }
          v221 = v218->fields._warInfo_5__14;
          if ( !v221 )
            sub_1B68930(0LL, v211);
          v222 = MapControl_WarInfo__GetEventId(v221, 0LL);
          if ( !v153 )
            sub_1B68930(v222, v223);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v153,
                 &v682,
                 v222,
                 (const MethodInfo_30E4514 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v682 )
              sub_1B68930(0LL, v224);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v682, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1B68930(0LL, v225);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v684->fields._nowTime_5__11, 0LL) )
              {
                v227 = v684->fields._warInfo_5__14;
                if ( !v227 )
                  sub_1B68930(0LL, v226);
                v228 = MapControl_WarInfo__GetEventId(v227, 0LL);
                if ( !v156 )
                  sub_1B68930(v228, (unsigned int)v228);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v156, v228, 0LL);
                if ( NowEntity )
                {
                  v231 = v684->fields._warInfo_5__14;
                  if ( !v231 )
                    sub_1B68930(0LL, v229);
                  v232 = MapControl_WarInfo__GetEventId(v231, 0LL);
                  if ( !v159 )
                    sub_1B68930(v232, (unsigned int)v232);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v159,
                                        v232,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v235 = v684->fields.__8__1;
                  if ( !v235 )
                    sub_1B68930(MismatchQuestList, v234);
                  v236 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v684->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1B68930(0LL, v234);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v235->fields.warId,
                    v236,
                    (const MethodInfo_3133FA0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v238 = v684->fields._nowTime_5__11;
          v239 = (_QWORD *)sub_1B6877C(long___TypeInfo, 3LL);
          v240 = entity;
          if ( !entity )
            sub_1B68930(v239, v211);
          if ( !v239 )
            sub_1B68930(0LL, v211);
          v241 = v239[3];
          if ( !(_DWORD)v241 )
            sub_1B68938(v239, v211);
          v239[4] = entity[5].klass;
          if ( (_DWORD)v241 == 1 )
            sub_1B68938(v239, v211);
          v239[5] = v240[5].monitor;
          if ( (unsigned int)v241 <= 2 )
            sub_1B68938(v239, v211);
          v239[6] = v240[6].monitor;
          if ( (int)v241 >= 1 )
          {
            v242 = (unsigned int)v241;
            v243 = v239 + 4;
            do
            {
              v244 = *v243;
              if ( *v243 > v238 && _4__this->fields.forceUpdateTime > v244 )
                _4__this->fields.forceUpdateTime = v244;
              --v242;
              ++v243;
            }
            while ( v242 );
          }
        }
      }
      v245 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v245 )
        sub_1B68930(0LL, v211);
      items = v245->fields._items;
      v247 = (Il2CppObject *)v684->fields._warInfo_5__14;
      v248 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v245->fields._version;
      if ( !items )
        sub_1B68930(v245, v247);
      size = v245->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v245,
          v247,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
      }
      else
      {
        v250 = &items->obj.klass + size;
        v245->fields._size = size + 1;
        v250[4] = (Il2CppClass *)v247;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v250 + 4), (int32_t)v247, v212, v213);
      }
      v324 = v684->fields._warInfo_5__14;
      if ( !v324 )
        sub_1B68930(v251, v252);
      if ( !MasterData_object )
        sub_1B68930(v251, v252);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v324->fields.warId, 0LL);
      v326 = v684;
      v684->fields._mapList_5__15 = List;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v326->fields._mapList_5__15, (int32_t)List, v327, v328);
      v320 = v684;
      mapList_5__15 = v684->fields._mapList_5__15;
      v684->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1B68930(v318, v319);
      max_length = mapList_5__15->max_length;
      v322 = 0;
      v320->fields._mapCount_5__13 = max_length;
      goto LABEL_120;
    case 1:
      v254 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v254 )
        sub_1B68930(this, method);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1B68930(0LL, method);
      v256 = SpotRoadMaster__getList(spotRoadMaster_5__7, v254->fields.mapId, 0LL);
      v258 = v256;
      if ( !v256 )
        sub_1B68930(0LL, v257);
      v259 = v256->max_length;
      if ( v259 >= 1 )
      {
        for ( i = 0; i != v259; ++i )
        {
          v261 = sub_1B68920(QuestTree___c__DisplayClass42_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v261, 0LL);
          if ( i >= v258->max_length )
            sub_1B68938(v262, v263);
          v264 = v258->m_Items[i];
          if ( !v264 )
            sub_1B68930(v262, v263);
          if ( !v261 )
            sub_1B68930(v262, v263);
          *(_DWORD *)(v261 + 16) = v264->fields.id;
          if ( !_4__this )
            sub_1B68930(v262, v263);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v266 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v266,
            (Il2CppObject *)v261,
            Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1B68930(v267, v268);
          v269 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v266,
                   (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v270 = v269;
          if ( v269 != -1 )
          {
            v271 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v271 )
              sub_1B68930(0LL, v270);
            System_Collections_Generic_List_object___RemoveAt(
              v271,
              v270,
              (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v684->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1B68930(0LL, v270);
          v273 = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v261 + 16), 0LL);
          spotRoadInfo = v273;
          QuestTree__SetupSpotRoadInfo(_4__this, v264, &spotRoadInfo, v274);
          v278 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v278 )
            sub_1B68930(0LL, v275);
          v279 = v278->fields._items;
          v280 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v278->fields._version;
          if ( !v279 )
            sub_1B68930(v278, v275);
          v281 = v278->fields._size;
          if ( (unsigned int)v281 >= v279->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v278,
              (Il2CppObject *)v273,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
          }
          else
          {
            v282 = &v279->obj.klass + v281;
            v278->fields._size = v281 + 1;
            v282[4] = (Il2CppClass *)v273;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v282 + 4), (int32_t)v273, v276, v277);
          }
        }
      }
      v283 = v684->fields.__8__1;
      if ( !v283 )
        sub_1B68930(v256, v257);
      mapGimmickMaster_5__8 = v684->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1B68930(0LL, v257);
      v285 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v283->fields.mapId, 0LL);
      v289 = v285;
      if ( !v285 )
        sub_1B68930(0LL, v286);
      v290 = v285->max_length;
      if ( v290 >= 1 )
      {
        for ( j = 0; j != v290; ++j )
        {
          v292 = sub_1B68920(QuestTree___c__DisplayClass42_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v292, 0LL);
          if ( j >= v289->max_length )
            sub_1B68938(v293, v294);
          v295 = v289->m_Items[j];
          if ( !v295 )
            sub_1B68930(v293, v294);
          if ( !v292 )
            sub_1B68930(v293, v294);
          *(_DWORD *)(v292 + 16) = v295->fields.id;
          if ( !_4__this )
            sub_1B68930(v293, v294);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v297 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v297,
            (Il2CppObject *)v292,
            Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1B68930(v298, v299);
          v300 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v297,
                   (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v301 = v300;
          if ( v300 != -1 )
          {
            v302 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v302 )
              sub_1B68930(0LL, v301);
            System_Collections_Generic_List_object___RemoveAt(
              v302,
              v301,
              (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v303 = v684->fields._mapInfo_5__16;
          if ( !v303 )
            sub_1B68930(0LL, v301);
          v304 = MapControl_MapInfo__AddMapGimmick(v303, *(_DWORD *)(v292 + 16), 0LL);
          mapGimmickInfo = v304;
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v305);
          v309 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v309 )
            sub_1B68930(0LL, v306);
          v310 = v309->fields._items;
          v311 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v309->fields._version;
          if ( !v310 )
            sub_1B68930(v309, v306);
          v312 = v309->fields._size;
          if ( (unsigned int)v312 >= v310->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v309,
              (Il2CppObject *)v304,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v311[4] + 192LL) + 112LL));
          }
          else
          {
            v313 = &v310->obj.klass + v312;
            v309->fields._size = v312 + 1;
            v313[4] = (Il2CppClass *)v304;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v313 + 4), (int32_t)v304, v307, v308);
          }
        }
      }
      v314 = v684;
      v684->fields.__2__current = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v314->fields.__2__current, 0, v287, v288);
      v315 = v684;
      v316 = 2;
      goto LABEL_331;
    case 2:
      v4->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (ServantStatusBattleListViewItem_o *)&v4->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-1].klass) = -1;
      sub_1B68678(p_mapInfo_5__16, 0, v2, v3);
      v320 = v684;
      max_length = v684->fields._mapCount_5__13;
      v322 = v684->fields._mapIdx_5__12 + 1;
      v684->fields._mapIdx_5__12 = v322;
LABEL_120:
      if ( v322 < max_length )
      {
        v330 = v320->fields._mapList_5__15;
        if ( !v330 )
          sub_1B68930(v318, v319);
        if ( v322 >= v330->max_length )
          sub_1B68938(v318, v319);
        v331 = v330->m_Items[v322];
        if ( !v331 )
          sub_1B68930(v318, v319);
        v332 = v320->fields.__8__1;
        if ( !v332 )
          sub_1B68930(v318, v319);
        v332->fields.mapId = v331->fields.id;
        v333 = v320->fields._warInfo_5__14;
        if ( !v333 )
          sub_1B68930(v318, v319);
        mapInfoList = (System_Collections_Generic_List_object__o *)v333->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v332->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v332,
              Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v332->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&v332->fields.__9__3, (int32_t)_9__3, v336, v337);
          }
          v318 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v319 = (unsigned int)v318;
          if ( (_DWORD)v318 != -1 )
          {
            v338 = v684->fields._warInfo_5__14;
            if ( !v338 )
              sub_1B68930(v318, (unsigned int)v318);
            v339 = (System_Collections_Generic_List_object__o *)v338->fields.mapInfoList;
            if ( !v339 )
              sub_1B68930(0LL, v319);
            System_Collections_Generic_List_object___RemoveAt(
              v339,
              v319,
              (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1B68930(v318, v319);
        v340 = v684->fields.__8__1;
        if ( !v340 )
          sub_1B68930(v318, v319);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v340->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v340,
            Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v340->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v340->fields.__9__4, (int32_t)_9__4, v343, v344);
        }
        if ( !allMapInfoList )
          sub_1B68930(v318, v319);
        v345 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v346 = (unsigned int)v345;
        if ( (_DWORD)v345 != -1 )
        {
          v347 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v347 )
            sub_1B68930(0LL, v346);
          System_Collections_Generic_List_object___RemoveAt(
            v347,
            v346,
            (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v348 = v684->fields.__8__1;
        if ( !v348 )
          sub_1B68930(v345, v346);
        v349 = v684->fields._warInfo_5__14;
        if ( !v349 )
          sub_1B68930(0LL, v346);
        v350 = MapControl_WarInfo__AddChild(v349, v348->fields.mapId, 0LL);
        v351 = v684;
        v684->fields._mapInfo_5__16 = v350;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v351->fields._mapInfo_5__16, (int32_t)v350, v352, v353);
        v357 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v357 )
          sub_1B68930(0LL, v354);
        v358 = v357->fields._items;
        v359 = (Il2CppObject *)v684->fields._mapInfo_5__16;
        v360 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v357->fields._version;
        if ( !v358 )
          sub_1B68930(v357, v359);
        v361 = v357->fields._size;
        if ( (unsigned int)v361 >= v358->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v357,
            v359,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v360[4] + 192LL) + 112LL));
        }
        else
        {
          v362 = &v358->obj.klass + v361;
          v357->fields._size = v361 + 1;
          v362[4] = (Il2CppClass *)v359;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v362 + 4), (int32_t)v359, v355, v356);
        }
        v458 = v684->fields.__8__1;
        if ( !v458 )
          sub_1B68930(v363, v364);
        spotMaster_5__3 = v684->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1B68930(0LL, v364);
        v460 = SpotMaster__getList(spotMaster_5__3, v458->fields.mapId, 0LL);
        v463 = v460;
        if ( !v460 )
          sub_1B68930(0LL, v461);
        v464 = v460->max_length;
        if ( v464 >= 1 )
        {
          for ( k = 0; k != v464; ++k )
          {
            v466 = sub_1B68920(QuestTree___c__DisplayClass42_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v466, 0LL);
            if ( k >= v463->max_length )
              sub_1B68938(v467, v468);
            v469 = v463->m_Items[k];
            if ( !v469 )
              sub_1B68930(v467, v468);
            if ( !v466 )
              sub_1B68930(v467, v468);
            *(_DWORD *)(v466 + 16) = v469->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v471 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v471,
              (Il2CppObject *)v466,
              Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1B68930(v472, v473);
            v474 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v471,
                     (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v475 = v474;
            if ( v474 != -1 )
            {
              v476 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v476 )
                sub_1B68930(0LL, v475);
              System_Collections_Generic_List_object___RemoveAt(
                v476,
                v475,
                (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v477 = v684->fields._mapInfo_5__16;
            if ( !v477 )
              sub_1B68930(0LL, v475);
            v478 = MapControl_MapInfo__AddChild(v477, *(_DWORD *)(v466 + 16), 0LL);
            spotInfo = v478;
            QuestTree__SetupSpotInfo(_4__this, v469, &spotInfo, v479);
            v483 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v483 )
              sub_1B68930(0LL, v480);
            v484 = v483->fields._items;
            v485 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v483->fields._version;
            if ( !v484 )
              sub_1B68930(v483, v480);
            v486 = v483->fields._size;
            if ( (unsigned int)v486 >= v484->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v483,
                (Il2CppObject *)v478,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v485[4] + 192LL) + 112LL));
            }
            else
            {
              v487 = &v484->obj.klass + v486;
              v483->fields._size = v486 + 1;
              v487[4] = (Il2CppClass *)v478;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v487 + 4), (int32_t)v478, v481, v482);
            }
          }
        }
        v488 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v684->fields._mapInfo_5__16,
                 v684->fields._blankEarthSpotMaster_5__4,
                 v462);
        v489 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v488,
                 (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v493 = (System_Collections_Generic_IEnumerable_TSource__o *)v489;
        if ( !v489 )
          sub_1B68930(0LL, v490);
        if ( *(_QWORD *)&v489->max_length )
        {
          v494 = sub_1B68920(QuestTree___c__DisplayClass42_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v494, 0LL);
          v495 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v495 = QuestTree___c_TypeInfo;
          }
          _9__42_6 = (System_Func_object__int__o *)v495->static_fields->__9__42_6;
          if ( !_9__42_6 )
          {
            if ( !v495->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v495);
              v495 = QuestTree___c_TypeInfo;
            }
            v497 = (Il2CppObject *)v495->static_fields->__9;
            _9__42_6 = (System_Func_object__int__o *)sub_1B68920(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__42_6,
              v497,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__42_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__42_6;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_6, (int32_t)_9__42_6, v499, v500);
          }
          v501 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v493,
                                                                  (System_Func_TSource__TResult__o *)_9__42_6,
                                                                  (const MethodInfo_2E79760 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v502 = (System_Collections_Generic_HashSet_int__o *)sub_1B68920(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_53955548(
            v502,
            v501,
            (const MethodInfo_3374BDC *)Method_System_Collections_Generic_HashSet_int___ctor___75686384);
          if ( !v494 )
            sub_1B68930(v503, v504);
          *(_QWORD *)(v494 + 16) = v502;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v494 + 16), (int32_t)v502, v505, v506);
          v507 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v508 = (System_Func_object__bool__o *)sub_1B68920(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v508,
            (Il2CppObject *)v494,
            Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v507,
            (System_Func_T__bool__o *)v508,
            (const MethodInfo_2E39680 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v510 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v510 )
            sub_1B68930(0LL, v509);
          System_Collections_Generic_List_object___AddRange(
            v510,
            (System_Collections_Generic_IEnumerable_T__o *)v493,
            (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v511 = v684;
        v684->fields.__2__current = 0LL;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v511->fields.__2__current, 0, v491, v492);
        result = 1;
        v684->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1B68930(v318, v319);
      v365 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v366 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v366 = QuestTree___c_TypeInfo;
      }
      _9__42_2 = (System_Comparison_T__o *)v366->static_fields->__9__42_2;
      if ( !_9__42_2 )
      {
        if ( !v366->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v366);
          v366 = QuestTree___c_TypeInfo;
        }
        v368 = (Il2CppObject *)v366->static_fields->__9;
        _9__42_2 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__42_2,
          v368,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__,
          0LL);
        v369 = QuestTree___c_TypeInfo->static_fields;
        v369->__9__42_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__42_2;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v369->__9__42_2, (int32_t)_9__42_2, v370, v371);
      }
      if ( !v365 )
        sub_1B68930(v318, v319);
      System_Collections_Generic_List_object___Sort_55303484(
        v365,
        _9__42_2,
        (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v372 = v684;
      v684->fields.__8__1 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v372->fields.__8__1, 0, v373, v374);
      v375 = v684;
      v684->fields._warInfo_5__14 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v375->fields._warInfo_5__14, 0, v376, v377);
      v378 = v684;
      v684->fields._mapList_5__15 = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v378->fields._mapList_5__15, 0, v379, v380);
      v381 = (Il2CppObject *)sub_1B68920(QuestTree___c__DisplayClass42_6_TypeInfo);
      System_Object___ctor(v381, 0LL);
      v382 = v684;
      v684->fields.__8__3 = (struct QuestTree___c__DisplayClass42_6_o *)v381;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v382->fields.__8__3, (int32_t)v381, v383, v384);
      v385 = v684->fields._nowTime_5__11;
      v386 = (MapControl_WarInfo_o *)sub_1B68920(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v386, v385, 0LL);
      v387 = v684;
      v684->fields._warInfo_5__14 = v386;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v387->fields._warInfo_5__14, (int32_t)v386, v388, v389);
      v390 = (MapControl_MapInfo_o *)sub_1B68920(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v390, 0LL);
      v391 = v684;
      v684->fields._mapInfo_5__16 = v390;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v391->fields._mapInfo_5__16, (int32_t)v390, v392, v393);
      v394 = (MapControl_SpotInfo_o *)sub_1B68920(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v394, 0LL);
      v395 = v684;
      v684->fields._spotInfo_5__17 = v394;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v395->fields._spotInfo_5__17, (int32_t)v394, v396, v397);
      v398 = (WarEntity_o *)sub_1B68920(WarEntity_TypeInfo);
      WarEntity___ctor(v398, 0LL);
      v399 = v684;
      v684->fields._warEnt_5__18 = v398;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v399->fields._warEnt_5__18, (int32_t)v398, v400, v401);
      v403 = v684->fields._dataManager_5__2;
      if ( !v403 )
        sub_1B68930(0LL, v402);
      v404 = DataManager__GetMasterData_object_(
               v403,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v405 = v684;
      v684->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v404;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v405->fields._userQuestMaster_5__19, (int32_t)v404, v406, v407);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v410 = v684;
      _8__3 = v684->fields.__8__3;
      if ( !_8__3 )
        sub_1B68930(Master_object, v409);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v410->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v684 )
        sub_1B68930(isSavedMemoryMode, v413);
      if ( isSavedMemoryMode )
        v414 = 500;
      else
        v414 = 5000;
      v415 = v684->fields.__8__3;
      v684->fields._breakInterval_5__22 = v414;
      v416 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v416,
        (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v415 )
        sub_1B68930(v417, v418);
      v415->fields.spotInfoList = v416;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v415->fields, (int32_t)v416, v419, v420);
      v684->fields._cnt_5__23 = 0;
      v422 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v422 )
        sub_1B68930(0LL, v421);
      System_Collections_Generic_List_object___GetEnumerator(
        v674,
        v422,
        (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v423 = v684;
      v424 = *(_OWORD *)&v674[0].fields._list;
      p__7__wrap24 = (ServantStatusBattleListViewItem_o *)&v684->fields.__7__wrap24;
      v674[1] = v674[0];
      v684->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v674[0].fields._current;
      *(_OWORD *)&v423->fields.__7__wrap24.fields._list = v424;
      sub_1B68678(p__7__wrap24, 0, v426, v427);
      v4 = v684;
LABEL_168:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v429 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v430 = v684;
        if ( !v429 )
          break;
        current = v684->fields.__7__wrap24.fields._current;
        ++v684->fields._cnt_5__23;
        if ( !current )
          sub_1B68930(v430, v428);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1B68930(0LL, v433);
        v4 = v684;
        v436 = v684->fields.__8__2;
        if ( !v436 )
          sub_1B68930(Mine, v433);
        if ( Mine->fields.warId == v436->fields.targetWarId )
        {
          v437 = v684->fields.__8__3;
          if ( !v437 )
            sub_1B68930(Mine, v433);
          spotInfoList = v437->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1B68930(0LL, v433);
          spotId = (unsigned int)current->fields.spotId;
          v440 = spotInfoList->fields._items;
          v441 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v440 )
            sub_1B68930(spotInfoList, spotId);
          v442 = spotInfoList->fields._size;
          if ( (unsigned int)v442 >= v440->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_349F254 **)(*(_QWORD *)(v441[4] + 192LL) + 112LL));
            v4 = v684;
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
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v434, v435);
          v315 = v684;
          v316 = 3;
LABEL_331:
          v315->fields.__1__state = v316;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42____m__Finally1(v684, v428);
      v445 = v684;
      questMaster_5__5 = (DataMasterBase_o *)v684->fields._questMaster_5__5;
      v684->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v445->fields.__7__wrap24.fields._index = 0LL;
      v445->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1B68930(0LL, v444);
      Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                              questMaster_5__5,
                                                                              (const MethodInfo_2E4A5E4 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v448 = (Il2CppObject *)v684->fields.__8__3;
      v449 = (System_Func_object__bool__o *)sub_1B68920(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v449,
        v448,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v450 = System_Linq_Enumerable__Where_object_(
               Entitys_object,
               (System_Func_TSource__bool__o *)v449,
               (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v451 = System_Linq_Enumerable__ToArray_object_(
               v450,
               (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v452 = v684;
      v684->fields._questList_5__24 = (struct QuestEntity_array *)v451;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v452->fields._questList_5__24, (int32_t)v451, v453, v454);
      v455 = v684;
      v684->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v455->fields._questList_5__24,
                       (const MethodInfo_2E66944 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v684;
      mapCount_5__13 = v684->fields._mapCount_5__13;
      v684->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_168;
    case 4:
      v253 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_457;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1B68930(this, method);
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
      sub_1B68930(mapIdx_5__12, method);
    if ( mapCount_5__13 >= questList_5__24->max_length )
      sub_1B68938(mapIdx_5__12, method);
    v514 = questList_5__24->m_Items[mapCount_5__13];
    if ( !v514 )
      sub_1B68930(mapIdx_5__12, method);
    v515 = v4->fields.__8__3;
    if ( !v515 )
      sub_1B68930(mapIdx_5__12, method);
    v515->fields.questId = v514->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v519 = v684->fields.__8__3;
    if ( !v519 )
      sub_1B68930(UserId, v518);
    if ( !userQuestMaster_5__19 )
      sub_1B68930(UserId, v518);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__19, &v678, UserId, v519->fields.questId, 0LL) )
    {
      if ( !v678 )
        sub_1B68930(0LL, v520);
      QuestPhase = UserQuestEntity__getQuestPhase(v678, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_39212064 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)QuestEntity__getSpotId_39212064(
                                                                            v514,
                                                                            QuestPhase + 1,
                                                                            0LL);
    v524 = v684;
    v525 = v684->fields.__8__3;
    if ( !v525 )
      sub_1B68930(SpotId_39212064, warId);
    if ( v525->fields.nowSpotId == (_DWORD)SpotId_39212064 )
    {
      if ( !_4__this )
        sub_1B68930(SpotId_39212064, warId);
    }
    else
    {
      v525->fields.nowSpotId = (int)SpotId_39212064;
      if ( !_4__this )
        sub_1B68930(SpotId_39212064, warId);
      v526 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v525->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v525,
          Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v525->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v525->fields.__9__12, (int32_t)_9__12, v528, v529);
      }
      if ( !v526 )
        sub_1B68930(SpotId_39212064, warId);
      v530 = System_Collections_Generic_List_object___Find(
               v526,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_34BC8E0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v524->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v530;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v524->fields._spotInfo_5__17, (int32_t)v530, v531, v532);
      spotInfo_5__17 = v684->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1B68930(0LL, v533);
      SpotId_39212064 = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)MapControl_SpotInfo__GetMapID(
                                                                              spotInfo_5__17,
                                                                              0LL);
      warId = (unsigned int)SpotId_39212064;
      if ( v684->fields._nowMapId_5__20 != (_DWORD)SpotId_39212064 )
      {
        v684->fields._nowMapId_5__20 = (int)SpotId_39212064;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_39212064, v535);
        v537 = v684;
        v684->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&v537->fields._mapInfo_5__16,
          (int32_t)MapInfoByMapID,
          v538,
          v539);
        v541 = v684->fields._mapInfo_5__16;
        if ( !v541 )
          sub_1B68930(0LL, v540);
        v545 = MapControl_MapInfo__GetMine(v541, 0LL);
        if ( !v545 )
          sub_1B68930(0LL, v542);
        SpotId_39212064 = v684;
        warId = (unsigned int)v545->fields.warId;
        if ( v684->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v684->fields._nowWarId_5__21 = warId;
          if ( _4__this->fields.mapControlRootInfo )
          {
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(_4__this->fields.mapControlRootInfo, warId, 0LL);
            SpotId_39212064 = v684;
          }
          else
          {
            ChildByWarID = 0LL;
          }
          SpotId_39212064->fields._warInfo_5__14 = ChildByWarID;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&SpotId_39212064->fields._warInfo_5__14,
            (int32_t)ChildByWarID,
            v543,
            v544);
          v548 = v684->fields._warInfo_5__14;
          if ( !v548 )
            sub_1B68930(0LL, v547);
          v549 = MapControl_WarInfo__GetMine(v548, 0LL);
          v550 = v684;
          v684->fields._warEnt_5__18 = v549;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v550->fields._warEnt_5__18, (int32_t)v549, v551, v552);
        }
      }
    }
    v553 = v684->fields.__8__3;
    if ( !v553 )
      sub_1B68930(SpotId_39212064, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v553->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v553,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v553->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v553->fields.__9__13, (int32_t)_9__13, v556, v557);
    }
    if ( !allQuestInfoList )
      sub_1B68930(SpotId_39212064, warId);
    v558 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v559 = v558;
    if ( v558 != -1 )
    {
      v560 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v560 )
        sub_1B68930(0LL, v559);
      System_Collections_Generic_List_object___RemoveAt(
        v560,
        v559,
        (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v561 = v684->fields._warInfo_5__14;
    if ( !v678 )
    {
      if ( !v561 )
        sub_1B68930(0LL, v559);
      goto LABEL_379;
    }
    if ( !v561 )
      sub_1B68930(0LL, v559);
    MapControl_WarInfo__SetStatusCheckFlag(v561, 1, 0, 0LL);
    if ( !v678 )
      sub_1B68930(0LL, v562);
    HasStatus = UserQuestEntity__HasStatus(v678, 8, 0LL);
    if ( !HasStatus )
    {
      v565 = v684->fields._warInfo_5__14;
      if ( !v565 )
        sub_1B68930(0LL, v564);
      goto LABEL_381;
    }
    if ( !v678 )
      sub_1B68930(HasStatus, v564);
    if ( v678->fields.challengeNum >= 1 )
    {
      v565 = v684->fields._warInfo_5__14;
      if ( !v565 )
        sub_1B68930(0LL, v564);
LABEL_381:
      MapControl_WarInfo__SetStatusCheckFlag(v565, 4, 0, 0LL);
    }
    if ( !v678 )
      sub_1B68930(0LL, v564);
    v569 = UserQuestEntity__getClearNum(v678, 0LL) < 1;
    v561 = v684->fields._warInfo_5__14;
    if ( v569 )
    {
      if ( !v561 )
        sub_1B68930(0LL, v570);
LABEL_379:
      MapControl_WarInfo__SetStatusCheckFlag(v561, 2, 0, 0LL);
      v568 = 0;
      goto LABEL_393;
    }
    if ( !v561 )
      sub_1B68930(0LL, v570);
    v566 = MapControl_WarInfo__GetMine(v561, 0LL);
    if ( !v566 )
      sub_1B68930(0LL, v567);
    v571 = v684->fields.__8__3;
    if ( !v571 )
      sub_1B68930(v566, v567);
    if ( v566->fields.lastQuestId == v571->fields.questId )
    {
      v572 = v684->fields._warInfo_5__14;
      if ( !v572 )
        sub_1B68930(0LL, v567);
      v568 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v572, 8, 1, 0LL);
    }
    else
    {
      v568 = 1;
    }
LABEL_393:
    v573 = v684->fields.__8__3;
    if ( !v573 )
      sub_1B68930(v566, v567);
    v574 = v684->fields._spotInfo_5__17;
    if ( !v574 )
      sub_1B68930(0LL, v567);
    v575 = MapControl_SpotInfo__AddChild(v574, v573->fields.questId, 0LL);
    v578 = v684->fields._warInfo_5__14;
    if ( !v578 )
      sub_1B68930(v575, 0LL);
    v579 = v575;
    if ( !v575 )
      sub_1B68930(0LL, v578);
    v580 = v578->fields.warId;
    v575->fields._WarInfo_k__BackingField = v578;
    v575->fields.warId = v580;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v575->fields._WarInfo_k__BackingField, (int32_t)v578, v576, v577);
    v581 = v684->fields._spotInfo_5__17;
    v579->fields._SpotInfo_k__BackingField = v581;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v579->fields._SpotInfo_k__BackingField, (int32_t)v581, v582, v583);
    v579->fields.endTime = QuestTree__GetEndTime(_4__this, v579, v584);
    warEnt_5__18 = v684->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1B68930(0LL, v585);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v589 = v684->fields._warEnt_5__18;
      if ( !v589 )
        sub_1B68930(IsStartTypeQuest, v588);
      v590 = v684->fields.__8__3;
      if ( !v590 )
        sub_1B68930(IsStartTypeQuest, v588);
      if ( v589->fields.targetId == v590->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v684->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_412;
      }
    }
    v591 = v684->fields._warEnt_5__18;
    if ( !v591 )
      sub_1B68930(IsStartTypeQuest, v588);
    v592 = v684->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v592 )
      sub_1B68930(0LL, v588);
    v593 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v592,
             v591->fields.id,
             &value,
             (const MethodInfo_313572C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v593 )
    {
      v596 = v684->fields.__8__3;
      if ( !v596 )
        sub_1B68930(v593, v594);
      if ( !value )
        sub_1B68930(0LL, v594);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v596->fields.questId,
             (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_412:
        MapControl_QuestInfo__SetDispType(v579, 0, 0, 0, 0LL, 0, 0LL);
        v579->fields.touchType = 0;
LABEL_413:
        v599 = 1;
        goto LABEL_414;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v514, v579, v684->fields._nowWarId_5__21, v595) != 1 )
      goto LABEL_413;
    v598 = v684->fields._warInfo_5__14;
    if ( !v598 )
      sub_1B68930(0LL, v597);
    MapControl_WarInfo__SetStatusCheckFlag(v598, 1, 0, 0LL);
    v599 = 0;
LABEL_414:
    if ( MapControl_QuestInfo__IsDisaplayable(v579, 0LL) )
    {
      if ( ((v568 | v599) & 1) == 0 )
      {
        v601 = v684->fields._spotInfo_5__17;
        if ( !v601 )
          sub_1B68930(0LL, v600);
        MapControl_SpotInfo__AddQuestCount(v601, 1, 0LL);
        v603 = v684->fields._spotInfo_5__17;
        if ( !v603 )
          sub_1B68930(0LL, v602);
        MapControl_SpotInfo__AddAvailableQuestId(v603, v579->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v579, 0LL) == 1 )
      {
        v604 = MapControl_QuestInfo__GetMine(v579, 0LL);
        if ( !v604 )
          sub_1B68930(0LL, v605);
        HasFlag = QuestEntity__HasFlag(v604, 0x400000000000LL, 0LL);
        v608 = v684;
        if ( !HasFlag )
        {
          v609 = v684->fields._spotInfo_5__17;
          if ( !v609 )
            sub_1B68930(HasFlag, v607);
          v609->fields._IsNext_k__BackingField = 1;
        }
        v610 = v608->fields._mapInfo_5__16;
        if ( !v610 )
          sub_1B68930(HasFlag, v607);
        v610->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v579, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v613 = v684;
        v614 = v684->fields._spotInfo_5__17;
        if ( !v614 )
          sub_1B68930(IsDisplayQuestNextIcon, v612);
        v614->fields._IsNext_k__BackingField = 1;
        v615 = v613->fields._mapInfo_5__16;
        if ( !v615 )
          sub_1B68930(IsDisplayQuestNextIcon, v612);
        v615->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v514, 0x8000000000LL, 0LL) )
      {
        v616 = v684->fields._spotInfo_5__17;
        if ( !v616 )
          sub_1B68930(0LL, v600);
        MapControl_SpotInfo__AddFreeQuestCount(v616, 1, 0LL);
      }
    }
    v617 = v678;
    if ( v678 )
    {
      v617 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v678, 8, 0LL);
      if ( ((unsigned __int8)v617 & 1) != 0 )
      {
        if ( !v678 )
          sub_1B68930(v617, v600);
        v618 = v678->fields.challengeNum == 0;
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
    v579->fields.isNew = v618;
    v579->fields.questPhase = QuestPhase;
    v619 = v684->fields.__8__3;
    if ( !v619 )
      sub_1B68930(v617, v600);
    questPickupMaster_5__9 = v684->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1B68930(0LL, v600);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v619->fields.questId, 0LL);
    v579->fields.pickupPriority = Priority;
    v623 = v684->fields.__8__3;
    if ( !v623 )
      sub_1B68930(Priority, v622);
    questPhaseMaster_5__6 = v684->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1B68930(0LL, v622);
    v625 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v623->fields.questId, 0LL);
    v629 = v625;
    if ( !v625 )
      sub_1B68930(0LL, v626);
    v630 = v625[3];
    v631 = v630 - 1;
    if ( (int)v630 >= 1 )
    {
      v632 = 0;
      while ( 1 )
      {
        v633 = v629[v632 + 4];
        if ( !v633 )
          sub_1B68930(v625, v626);
        v625 = MapControl_QuestInfo__AddChild(v579, *(_DWORD *)(v633 + 16), *(_DWORD *)(v633 + 20), 0LL);
        if ( v631 == v632 )
          break;
        if ( (unsigned int)++v632 >= *((_DWORD *)v629 + 6) )
          sub_1B68938(v625, v626);
      }
    }
    v634 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v634 )
      sub_1B68930(0LL, v626);
    v635 = v634->fields._items;
    v636 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v634->fields._version;
    if ( !v635 )
      sub_1B68930(v634, v626);
    v637 = v634->fields._size;
    if ( (unsigned int)v637 >= v635->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v634,
        (Il2CppObject *)v579,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v636[4] + 192LL) + 112LL));
    }
    else
    {
      v638 = &v635->obj.klass + v637;
      v634->fields._size = v637 + 1;
      v638[4] = (Il2CppClass *)v579;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v638 + 4), (int32_t)v579, v627, v628);
    }
    v4 = v684;
    v253 = v684->fields._mapCount_5__13;
    if ( v253 && !(v253 % v684->fields._breakInterval_5__22) )
    {
      v684->fields.__2__current = 0LL;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v639, v640);
      v315 = v684;
      v316 = 4;
      goto LABEL_331;
    }
LABEL_457:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    mapCount_5__13 = v253 + 1;
    v4->fields._mapCount_5__13 = mapCount_5__13;
  }
  if ( !_4__this )
    sub_1B68930(mapIdx_5__12, method);
  v641 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v642 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v642 = QuestTree___c_TypeInfo;
  }
  _9__42_11 = (System_Comparison_T__o *)v642->static_fields->__9__42_11;
  if ( !_9__42_11 )
  {
    if ( !v642->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v642);
      v642 = QuestTree___c_TypeInfo;
    }
    v644 = (Il2CppObject *)v642->static_fields->__9;
    _9__42_11 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__42_11,
      v644,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__,
      0LL);
    v645 = QuestTree___c_TypeInfo->static_fields;
    v645->__9__42_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__42_11;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v645->__9__42_11, (int32_t)_9__42_11, v646, v647);
  }
  if ( !v641 )
    sub_1B68930(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_55303484(
    v641,
    _9__42_11,
    (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v648 = v684;
  v684->fields.__8__3 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v648->fields.__8__3, 0, v649, v650);
  v651 = v684;
  v684->fields._warInfo_5__14 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v651->fields._warInfo_5__14, 0, v652, v653);
  v654 = v684;
  v684->fields._mapInfo_5__16 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v654->fields._mapInfo_5__16, 0, v655, v656);
  v657 = v684;
  v684->fields._spotInfo_5__17 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v657->fields._spotInfo_5__17, 0, v658, v659);
  v660 = v684;
  v684->fields._warEnt_5__18 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v660->fields._warEnt_5__18, 0, v661, v662);
  v663 = v684;
  v684->fields._userQuestMaster_5__19 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v663->fields._userQuestMaster_5__19, 0, v664, v665);
  v666 = v684;
  v684->fields._questList_5__24 = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v666->fields._questList_5__24, 0, v667, v668);
  v669 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v669 )
    sub_1B68930(0LL, v670);
  CommonUI__SetLoadMode((CommonUI_o *)v669, 0, 0LL);
  _4__this->fields.isInit = 1;
  v673 = v684;
  if ( v684->fields.endCallback )
  {
    v684->fields.__2__current = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v673->fields.__2__current, 0, v671, v672);
    v315 = v684;
    v316 = 5;
    goto LABEL_331;
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

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
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
  if ( (byte_4A05D58 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_4A05D58 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}