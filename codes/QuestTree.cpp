void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  MapControl_RootInfo_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_object__o *v54; // x20
  int32_t v55; // w2
  int32_t v56; // w3

  if ( (byte_49F952A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v16);
    sub_1B640C8(&MapControl_RootInfo_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree___ctor__, v18);
    byte_49F952A = 1;
  }
  v19 = (MapControl_RootInfo_o *)sub_1B64314(MapControl_RootInfo_TypeInfo, method, v2);
  MapControl_RootInfo___ctor(v19, 0LL);
  this->fields.mapControlRootInfo = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v19, v20, v21);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allQuestInfoList, (int32_t)v24, v25, v26);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allSpotInfoList, (int32_t)v29, v30, v31);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v34, v35, v36);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v39, v40, v41);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_MapInfo__TypeInfo,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allMapInfoList, (int32_t)v44, v45, v46);
  v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.allWarInfoList, (int32_t)v49, v50, v51);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v54 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       v52,
                                                       v53);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questReleaseEntList, (int32_t)v54, v55, v56);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36EC554 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_33831220(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_33828248(
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
  int64_t v11; // x20
  MapGimmickEntity_o *v12; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v14; // x1
  __int64 v15; // x8
  int64_t *v16; // x9
  int64_t v17; // x10

  if ( (byte_49F9527 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_1B640C8(&long___TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v8);
    byte_49F9527 = 1;
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
    v11 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v12 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1B64170(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v15 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v15 || (*(_QWORD *)(Time + 32) = v12->fields.startedAt, (_DWORD)v15 == 1) )
      sub_1B6432C(Time, v14);
    *(_QWORD *)(Time + 40) = v12->fields.endedAt;
    if ( (int)v15 >= 1 )
    {
      v15 = (unsigned int)v15;
      v16 = (int64_t *)(Time + 32);
      do
      {
        v17 = *v16;
        if ( *v16 > v11 && this->fields.forceUpdateTime > v17 )
          this->fields.forceUpdateTime = v17;
        --v15;
        ++v16;
      }
      while ( v15 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_1B64324(Time);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v12, 0LL)
                && MapGimmickEntity__IsEnableTime(v12, v11, 0LL);
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
  bool v18; // w24
  int64_t Time; // x23
  __int64 v20; // x25
  __int64 v21; // x1
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
  if ( (byte_49F9523 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, questEnt);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1B640C8(&DataManager_TypeInfo, v11);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&long___TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    this = (QuestTree_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, v16);
    byte_49F9523 = 1;
  }
  questReleaseNG = 0LL;
  v45 = 0LL;
  entity = 0LL;
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !NoticeAt )
    goto LABEL_73;
  v18 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)NoticeAt,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v20 = sub_1B64170(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v20 )
    goto LABEL_73;
  if ( !*(_DWORD *)(v20 + 24)
    || (*(_QWORD *)(v20 + 32) = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL),
                                          *(_DWORD *)(v20 + 24) <= 1u)
    || (*(_QWORD *)(v20 + 40) = NoticeAt,
        NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL),
        v22 = *(_QWORD *)(v20 + 24),
        (unsigned int)v22 <= 2) )
  {
    sub_1B6432C(NoticeAt, v21);
  }
  *(_QWORD *)(v20 + 48) = NoticeAt;
  if ( (int)v22 >= 1 )
  {
    v22 = (unsigned int)v22;
    v23 = (int64_t *)(v20 + 32);
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
  if ( v18 || HasFlag )
  {
    v26 = !HasFlag;
    goto LABEL_55;
  }
  if ( !questReleaseNG
    || !questReleaseNG->fields.closedMessageId
    || QuestEntity__getClosedAt(questEnt, 0LL) <= Time
    || QuestEntity__getNoticeAt(questEnt, 0LL) > Time )
  {
    NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_73;
    NoticeAt = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_73;
    IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)NoticeAt,
                               &entity,
                               warId,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_73;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)NoticeAt,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
  NoticeAt = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
    sub_1B64324(NoticeAt);
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

  return QuestTree__CheckSpotCond_33831220(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_33831220(
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
  const MethodInfo *v41; // x1
  __int64 v42; // x8
  int64_t v43; // x20
  int32_t v44; // w23
  unsigned __int64 v45; // x24
  int32_t v46; // w21
  __int64 v47; // x8
  int64_t v48; // x20
  int32_t v49; // w23
  unsigned __int64 v50; // x24
  int32_t v51; // w21
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  __int64 v54; // x8
  int64_t v55; // x20
  unsigned __int64 v56; // x24
  int32_t v57; // w21
  int v58; // w21
  int v59; // w20
  int64_t v60; // x2
  int32_t v61; // w0
  int32_t v62; // w0
  int32_t v63; // w8
  bool v64; // cc
  int32_t v65; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F9526 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v21);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v22);
    byte_49F9526 = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v23);
    byte_49F76BD = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v27);
    byte_49F76BD = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v27);
    byte_49F76BD = 1;
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
      v34 = sub_1BB5FA4(v34);
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1BB5FA4(v35);
    v36 = **(UnityEngine_Object_o ***)(v35 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      v32 = 0;
      IsExistCommand = 1;
      goto LABEL_44;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v32 = 0;
      goto LABEL_44;
    }
LABEL_176:
    sub_1B64324(Instance);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v42 = *(_QWORD *)(Instance + 24);
      v43 = Instance;
      if ( (int)v42 >= 1 )
      {
        v44 = 0;
        v45 = 0LL;
        while ( v45 < (unsigned int)v42 )
        {
          v46 = *(_DWORD *)(v43 + 32 + 4 * v45);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v41);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v46, IsExistCommand, 0LL);
          LODWORD(v42) = *(_DWORD *)(v43 + 24);
          ++v45;
          v44 += Instance & 1;
          if ( (__int64)v45 >= (int)v42 )
            goto LABEL_167;
        }
        goto LABEL_177;
      }
      v44 = 0;
LABEL_167:
      if ( targetValue <= 1 )
        v65 = 1;
      else
        v65 = targetValue;
      LOBYTE(v24) = v44 < v65;
      return (unsigned __int8)v24 & 1;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v47 = *(_QWORD *)(Instance + 24);
      v48 = Instance;
      if ( (int)v47 < 1 )
        goto LABEL_150;
      v49 = 0;
      v50 = 0LL;
      while ( v50 < (unsigned int)v47 )
      {
        v51 = *(_DWORD *)(v48 + 32 + 4 * v50);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v41);
        if ( !Instance )
          goto LABEL_176;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v51, IsExistCommand, 0LL);
        LODWORD(v47) = *(_DWORD *)(v48 + 24);
        ++v50;
        v49 += Instance & 1;
        if ( (__int64)v50 >= (int)v47 )
          goto LABEL_151;
      }
      goto LABEL_177;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
      v64 = num < targetValue;
LABEL_160:
      LOBYTE(v24) = !v64;
      return (unsigned __int8)v24 & 1;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_176;
      LOBYTE(v24) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v24 & 1;
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v54 = *(_QWORD *)(Instance + 24);
      v55 = Instance;
      if ( (int)v54 >= 1 )
      {
        v49 = 0;
        v56 = 0LL;
        while ( v56 < (unsigned int)v54 )
        {
          v57 = *(_DWORD *)(v55 + 32 + 4 * v56);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v41);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v57, IsExistCommand, 0LL);
          LODWORD(v54) = *(_DWORD *)(v55 + 24);
          ++v56;
          v49 += Instance & 1;
          if ( (__int64)v56 >= (int)v54 )
            goto LABEL_151;
        }
LABEL_177:
        sub_1B6432C(Instance, v41);
      }
LABEL_150:
      v49 = 0;
LABEL_151:
      if ( targetValue <= 1 )
        v63 = 1;
      else
        v63 = targetValue;
      v64 = v49 < v63;
      goto LABEL_160;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v24 & 1;
    case 13:
      v58 = targetId / 100;
      v59 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsEventRaceGoalScriptPlayed(v58, v59, targetValue, 0LL);
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
      v60 = targetValue;
      v61 = 83;
      goto LABEL_174;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 84;
      goto LABEL_174;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 85;
      goto LABEL_174;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 86;
      goto LABEL_174;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 87;
      goto LABEL_174;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 88;
      goto LABEL_174;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 89;
      goto LABEL_174;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 90;
      goto LABEL_174;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 91;
      goto LABEL_174;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 23;
      goto LABEL_174;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 76;
      goto LABEL_174;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v24) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v24 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v60 = targetValue;
      v61 = 97;
      goto LABEL_174;
    case 31:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v24, v27);
      if ( !Instance )
        goto LABEL_176;
      v62 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v62 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v60 = targetValue;
        v61 = 113;
LABEL_174:
        LOBYTE(v24) = CondType__IsOpen(v61, targetId, v60, 0, 0LL);
      }
      else
      {
        LOBYTE(v24) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v62, 1, 0LL);
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

  return QuestTree__CheckSpotCond_33831220(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F9521 & 1) == 0 )
  {
    sub_1B640C8(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, mapInfo);
    byte_49F9521 = 1;
  }
  v7 = sub_1B64314(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, mapInfo, blankEarthSpotMaster);
  QuestTree__EnumerateBlankEarthSpotInfo_d__43___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 72) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)mapInfo, v11, v12);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v13, v14);
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
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  EventEntity_o *Entity; // x0
  EventEntity_o *v23; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  QuestEntity_o *Mine; // x0
  QuestEntity_o *v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_49F9524 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_1B640C8(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_49F9524 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_39200912((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1B64324(this);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v17 = 0LL;
  v31 = v30;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1B64324(v18);
    klass_high = HIDWORD(v31.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1B64324(v18);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_1B64324(FirstEntityFromQuestId);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v23 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v23, 1, 0LL);
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
          sub_1B64324(0LL);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v28 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v28 )
          sub_1B64324(0LL);
        EndTime = QuestEntity__GetEndTime(v28, 1, 0LL);
        goto LABEL_27;
      case 166:
        v25 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v25, v25, (QuestReleaseEntity_o *)current, v26);
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
    &v31,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t v8; // x22
  int64_t v9; // x21
  int64_t Time_38161648; // x0
  int64_t value; // x22
  int64_t v12; // x21
  int64_t NextDayStartTime; // x0
  int64_t v14; // x11
  int64_t v15; // x22
  int64_t v16; // x26
  int v17; // w27
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8

  if ( (byte_49F9525 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, questEnt);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_49F9525 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !questEnt )
    goto LABEL_29;
  v8 = Time;
  v9 = 0LL;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0LL) )
    return v9;
  Time = QuestEntity__getClosedAt(questEnt, 0LL);
  v9 = 0LL;
  if ( v8 > Time )
    return v9;
  if ( !questReleaseEnt )
LABEL_29:
    sub_1B64324(Time);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v20.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_38161648 = NetworkManager__getTime_38161648(v20, 0LL);
  value = questReleaseEnt->fields.value;
  v12 = Time_38161648;
  dateData = NetworkManager__getDateTime_38073412(Time_38161648 - 3600 * value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v21.fields._dateData = (uint64_t)&dateData;
  if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v21, 0LL) + 1)) & 1) == 0 )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
  v14 = v12 + 86400;
  v9 = NextDayStartTime + 3600 * questReleaseEnt->fields.value;
  v15 = v14 - 3600 * value;
  v16 = v9 + 518400;
  v17 = 6;
  while ( 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getDateTime_38073412(v15, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v22.fields._dateData = (uint64_t)&dateData;
    if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v22, 0LL) + 1)) & 1) == 0 )
      break;
    v9 += 86400LL;
    --v17;
    v15 += 86400LL;
    if ( !v17 )
    {
      v9 = v16;
      break;
    }
  }
  if ( QuestEntity__getClosedAt(questEnt, 0LL) < v9 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  return v9;
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
  __int64 v13; // x1
  __int64 v14; // x2
  QuestTree___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__int__o *_9__36_0; // x21
  Il2CppObject *v18; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F951B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1B640C8(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1B640C8(&Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, v9);
    sub_1B640C8(&QuestTree___c_TypeInfo, v10);
    byte_49F951B = 1;
  }
  memset(&v27, 0, sizeof(v27));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0LL);
  v15 = QuestTree___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v15 = QuestTree___c_TypeInfo;
  }
  _9__36_0 = (System_Func_object__int__o *)v15->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = QuestTree___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__36_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_MapControl_WarInfo__int__TypeInfo, v13, v14);
    System_Func_object__int____ctor(_9__36_0, v18, Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__36_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__36_0,
                                                               (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v22,
                                                  (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1B64324(mapControlRootInfo);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v23 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1B64324(v23);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v27.fields._current[1].klass), v24) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49F9511 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_1B640C8(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v5);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__, v6);
    sub_1B640C8(&QuestTree___c__DisplayClass22_0_TypeInfo, v7);
    byte_49F9511 = 1;
  }
  v8 = (QuestTree___c__DisplayClass22_0_o *)sub_1B64314(
                                              QuestTree___c__DisplayClass22_0_TypeInfo,
                                              *(_QWORD *)&mapGimmickId,
                                              method);
  QuestTree___c__DisplayClass22_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.mapGimmickId = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1B64324(v9);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v13,
                                          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
}


int32_t __fastcall QuestTree__GetMapIdByQuestId(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  MapControl_QuestInfo_o *QuestInfo; // x0
  int32_t SpotID; // w0
  const MethodInfo *v6; // x2

  QuestInfo = QuestTree__GetQuestInfo(this, questId, method);
  if ( !QuestInfo
    || (SpotID = MapControl_QuestInfo__GetSpotID(QuestInfo, 0LL),
        (QuestInfo = (MapControl_QuestInfo_o *)QuestTree__GetSpotInfo(this, SpotID, v6)) == 0LL) )
  {
    sub_1B64324(QuestInfo);
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
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x20
  __int64 v30; // x0
  System_Collections_Generic_List_object__o *SpotList; // x0
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v33; // w19
  QuestTree_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_int__o *v39; // x21
  System_Collections_Generic_List_object__o *v40; // x0
  _BOOL8 v41; // x0
  MapControl_SpotInfo_o *current; // x23
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_int__o *v44; // x0
  int v45; // w19
  _BOOL8 v46; // x0
  __int64 Item; // x0
  int32_t v48; // w22
  _BOOL8 v49; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  int32_t v54; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_49F9514 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_49F9514 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  memset(&v56, 0, sizeof(v56));
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
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1B64324(v30);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    UserReachableMapList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v58 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v58.fields._current )
      sub_1B64324(0LL);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v58.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      SpotList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v57 = v55;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v57.fields._current )
        sub_1B64324(0LL);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v57.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v29 )
        sub_1B64324(AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v29,
        AvailableQuestIdList,
        (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v34, v29, v35);
  v39 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v37, v38);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    UserReachableMapList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v33 = 0;
  v58 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v58.fields._current )
      sub_1B64324(0LL);
    v40 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v58.fields._current,
                                                         0LL);
    if ( !v40 )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      v40,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v57 = v55;
    while ( 1 )
    {
      v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v41 )
        break;
      current = (MapControl_SpotInfo_o *)v57.fields._current;
      if ( !v57.fields._current )
        sub_1B64324(v41);
      if ( HIDWORD(v57.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B64324(0LL);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v44 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v44 )
        sub_1B64324(0LL);
      v54 = v33;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v55,
        v44,
        (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v45 = 0;
      v56 = v55;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v56,
                (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v46 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1B64324(v46);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v56.fields._current,
                 (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v48 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v39 )
            sub_1B64324(Item);
          v49 = System_Collections_Generic_List_int___Contains(
                  v39,
                  Item,
                  (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v49 )
          {
            ++v45;
          }
          else
          {
            items = v39->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v39->fields._version;
            if ( !items )
              sub_1B64324(v49);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                v48,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v39->fields._size = size + 1;
              items->m_Items[size + 1] = v48;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v56,
        (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v33 = v54 - v45 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return v33;
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
  __int64 v22; // x1
  __int64 v23; // x2
  MapControl_MapInfo_o *v24; // x23
  System_Collections_Generic_List_int__o *v25; // x21
  System_Collections_Generic_List_object__o *SpotList; // x0
  _BOOL8 v27; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_int__o *v35; // x22
  _BOOL8 v36; // x0
  MapControl_SpotInfo_o *v37; // x23
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_int__o *v39; // x0
  int v40; // w25
  _BOOL8 v41; // x0
  __int64 Item; // x0
  int32_t v43; // w24
  _BOOL8 v44; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  int v49; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_49F9517 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_49F9517 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&v51, 0, sizeof(v51));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v24 = MapInfoByMapID;
    v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v22, v23);
    System_Collections_Generic_List_int____ctor(
      v25,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v24, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      SpotList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v52 = v50;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v27 )
        break;
      current = v52.fields._current;
      if ( layer < 1 )
      {
        if ( !v52.fields._current )
          sub_1B64324(v27);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v25 )
          sub_1B64324(AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v25,
          AvailableQuestIdList,
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v52.fields._current )
          sub_1B64324(v27);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v52.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v25, v31);
    v35 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v33, v34);
    System_Collections_Generic_List_int____ctor(
      v35,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v24, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1B64324(SpotList);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      SpotList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v49 = 0;
    v52 = v50;
    while ( 1 )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v36 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v52,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v49;
        return (int)MapInfoByMapID;
      }
      v37 = (MapControl_SpotInfo_o *)v52.fields._current;
      if ( layer < 1 )
      {
        if ( !v52.fields._current )
          sub_1B64324(v36);
LABEL_22:
        if ( v37->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B64324(0LL);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v37->fields.spotId, 0LL) )
        {
LABEL_25:
          v39 = MapControl_SpotInfo__GetAvailableQuestIdList(v37, 1, 0LL);
          if ( !v39 )
            sub_1B64324(0LL);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v50,
            v39,
            (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v40 = 0;
          v51 = v50;
          while ( 1 )
          {
            v41 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v51,
                    (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v41 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1B64324(v41);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v51.fields._current,
                     (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v43 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v35 )
                sub_1B64324(Item);
              v44 = System_Collections_Generic_List_int___Contains(
                      v35,
                      Item,
                      (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( v44 )
              {
                ++v40;
              }
              else
              {
                items = v35->fields._items;
                v46 = Method_System_Collections_Generic_List_int__Add__;
                ++v35->fields._version;
                if ( !items )
                  sub_1B64324(v44);
                size = v35->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v35,
                    v43,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                }
                else
                {
                  v35->fields._size = size + 1;
                  items->m_Items[size + 1] = v43;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v51,
            (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v49 = v49 - v40 + v37->fields.questCount;
        }
      }
      else
      {
        if ( !v52.fields._current )
          sub_1B64324(v36);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v52.fields._current, 0LL) == layer )
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49F9512 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B640C8(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__, v6);
    sub_1B640C8(&QuestTree___c__DisplayClass23_0_TypeInfo, v7);
    byte_49F9512 = 1;
  }
  v8 = (QuestTree___c__DisplayClass23_0_o *)sub_1B64314(
                                              QuestTree___c__DisplayClass23_0_TypeInfo,
                                              *(_QWORD *)&questId,
                                              method);
  QuestTree___c__DisplayClass23_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.questId = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_QuestInfo__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B64324(v9);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v13,
                                     (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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
  System_Collections_Generic_List_object__o *allQuestInfoList; // x0
  _BOOL8 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F9528 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_49F9528 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    allQuestInfoList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v13 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1B64324(v13);
    if ( LODWORD(v23.fields._current[4].klass) == warId )
    {
      if ( !v11 )
        sub_1B64324(v13);
      items = v11->fields._items;
      v18 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64324(v13);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v20[4] = (Il2CppClass *)current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)current, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v11;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49F9516 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49F9516 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49F9510 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_1B640C8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v5);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__, v6);
    sub_1B640C8(&QuestTree___c__DisplayClass21_0_TypeInfo, v7);
    byte_49F9510 = 1;
  }
  v8 = (QuestTree___c__DisplayClass21_0_o *)sub_1B64314(
                                              QuestTree___c__DisplayClass21_0_TypeInfo,
                                              *(_QWORD *)&spotId,
                                              method);
  QuestTree___c__DisplayClass21_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.spotId = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_SpotInfo__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1B64324(v9);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_int__o *v30; // x21
  QuestTree___c_c *v31; // x0
  System_Func_object__int__o *_9__29_0; // x23
  Il2CppObject *v33; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 mapId; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  System_Predicate_object__o *v42; // x21

  if ( (byte_49F9515 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_1B640C8(&System_Func_MapButtonEntity__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&System_Predicate_MapControl_MapInfo__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__, v13);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__, v14);
    sub_1B640C8(&QuestTree___c__DisplayClass29_0_TypeInfo, v15);
    sub_1B640C8(&QuestTree___c_TypeInfo, v16);
    byte_49F9515 = 1;
  }
  v17 = sub_1B64314(QuestTree___c__DisplayClass29_0_TypeInfo, warInfo, method);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v25, v26, v27);
  if ( !OpenedButtons )
    goto LABEL_28;
  v30 = *(System_Collections_Generic_List_int__o **)(v17 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v31 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
      v31 = QuestTree___c_TypeInfo;
    }
    _9__29_0 = (System_Func_object__int__o *)v31->static_fields->__9__29_0;
    if ( !_9__29_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = QuestTree___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__29_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_MapButtonEntity__int__TypeInfo, v28, v29);
      System_Func_object__int____ctor(_9__29_0, v33, Method_QuestTree___c__GetUserReachableMapList_b__29_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v35, v36);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__29_0,
                            (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v30 )
    {
      System_Collections_Generic_List_int___AddRange(
        v30,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1B64324(Mine);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v30 )
    goto LABEL_28;
  mapId = (unsigned int)Map->fields.mapId;
  items = v30->fields._items;
  v40 = Method_System_Collections_Generic_List_int__Add__;
  ++v30->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v30->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v30,
      mapId,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v30->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v42 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_MapInfo__TypeInfo, mapId, v29);
  System_Predicate_object____ctor(
    v42,
    (Il2CppObject *)v17,
    Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v42,
                                                                    (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v13; // x20
  Il2CppObject *v14; // x0

  if ( (byte_49F9519 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1B640C8(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__, v6);
    sub_1B640C8(&QuestTree___c__DisplayClass33_0_TypeInfo, v7);
    byte_49F9519 = 1;
  }
  v8 = (QuestTree___c__DisplayClass33_0_o *)sub_1B64314(
                                              QuestTree___c__DisplayClass33_0_TypeInfo,
                                              *(_QWORD *)&questId,
                                              method);
  QuestTree___c__DisplayClass33_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.questId = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_QuestInfo__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B64324(v9);
  }
  v14 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v14 )
    LODWORD(v14) = v14[4].klass;
  return (int)v14;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x0

  if ( (byte_49F950C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75680768, v4);
    sub_1B640C8(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v5);
    byte_49F950C = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor_55234504(
    v7,
    allWarInfoList,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___75680768);
  if ( !v7 )
    sub_1B64324(v8);
  System_Collections_Generic_List_object___Reverse(
    v7,
    (const MethodInfo_34AF0A0 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v7;
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F950D & 1) == 0 )
  {
    sub_1B640C8(&QuestTree__Init_d__15_TypeInfo, endCallback);
    byte_49F950D = 1;
  }
  v5 = sub_1B64314(QuestTree__Init_d__15_TypeInfo, endCallback, method);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)endCallback, v9, v10);
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

  if ( (byte_49F9522 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_49F9522 = 1;
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
    sub_1B64324(mapControlRootInfo);
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
  const MethodInfo *v8; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F951C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F951C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_33825952(this, (WarEntity_o *)entity, v8);
}


bool __fastcall QuestTree__IsActiveEventWar_33825952(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  __int64 v13; // x1
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v15; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v17; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49F951D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, warEnt);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&long___TypeInfo, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    this = (QuestTree_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49F951D = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_24;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (QuestTree_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_24;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  this = (QuestTree_o *)sub_1B64170(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_24:
    sub_1B64324(this);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1B6432C(this, v13);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v15 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v17 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v17 )
        v4->fields.forceUpdateTime = (int64_t)v17;
      --v15;
      ++p_allSpotInfoList;
    }
    while ( v15 );
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
        && ((v8 = Mine, !WarEntity__IsEvent(Mine, 0LL)) || QuestTree__IsActiveEventWar_33825952(this, v8, v9))
        && QuestTree__IsWarOpen(this, v8->fields.id, v9);
  return result;
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  int64_t forceUpdateTime; // x19

  if ( (byte_49F950E & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49F950E = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  _BOOL8 v12; // x0
  bool v13; // w21
  Il2CppObject *current; // x22
  SpotEntity_o *Mine; // x1
  const MethodInfo *v16; // x3
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F9518 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_49F9518 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    SpotList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v13 = v12;
    if ( !v12 )
      break;
    current = v20.fields._current;
    if ( layer < 1 )
    {
      if ( !v20.fields._current )
        sub_1B64324(v12);
      goto LABEL_12;
    }
    if ( !v20.fields._current )
      sub_1B64324(v12);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v20.fields._current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v16)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
      {
        v17 = 6;
        goto LABEL_16;
      }
    }
  }
  v17 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v13 && v17 == 6;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1B64324(this);
  return QuestTree__CheckSpotCond_33831220(
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
    sub_1B64324(this);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_33831220(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_33831220(
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
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x21
  clsQuestCheck_o *v12; // x0
  int v13; // w20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F9529 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_49F9529 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    QuestInfoByWarId,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v9 )
      break;
    current = v15.fields._current;
    v12 = QuestTree__get_QuestCheckInst((QuestTree_o *)v9, v10);
    if ( !current )
      sub_1B64324(v12);
    if ( !v12 )
      sub_1B64324(0LL);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v12, (int32_t)current[1].klass, 0LL) )
    {
      v13 = 4;
      goto LABEL_11;
    }
  }
  v13 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v13 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  clsQuestCheck_o *QuestInfoByWarId; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  _BOOL8 v12; // x0
  bool v13; // w19
  int v14; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_49F951A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_49F951A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v9 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0LL);
  if ( v9 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v9, v10);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_1B64324(QuestInfoByWarId);
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
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v11);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v13 = v12;
    if ( !v12 )
      break;
    if ( !v18.fields._current )
      sub_1B64324(v12);
    if ( LODWORD(v18.fields._current[2].klass) == 1 )
    {
      v14 = 6;
      goto LABEL_15;
    }
  }
  v14 = 7;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v13 && v14 == 6;
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_o *name; // x1
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x22
  bool IsExistCommand; // w21
  int32_t v19; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_49F951E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1B640C8(&SpotEntity_TypeInfo, v9);
    byte_49F951E = 1;
  }
  v10 = sub_1B64314(SpotEntity_TypeInfo, blankEarthSpotEnt, spotInfo);
  SpotEntity___ctor((SpotEntity_o *)v10, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v10 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v10 + 32) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)name, v12, v13);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v10, 0LL);
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4(v16);
  v17 = **(UnityEngine_Object_o ***)(v16 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v10 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1B64324(Instance);
  v19 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v19, 0, 0LL);
  spotInfo->fields.dispType = IsOpenForQAA;
  spotInfo->fields.touchType = IsOpenForQAA;
}


void __fastcall QuestTree__SetupMapGimmickInfo(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o **mapGimmickInfo,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  v4 = QuestTree__CheckMapGimmickCond_33828248(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1B64324(v4);
  (*mapGimmickInfo)->fields.dispType = v4;
}


void __fastcall QuestTree__SetupSpotInfo(
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
    sub_1B64324(IsSpotSatisfyingDisplayCond);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_33831220(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_33831220(
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
    sub_1B64324(this);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_33831220(
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
    sub_1B64324(this);
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

  if ( (byte_49F950F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_49F950F = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  if ( (byte_49F950B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_49F950B = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F951F & 1) == 0 )
  {
    sub_1B640C8(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo, endCallback);
    byte_49F951F = 1;
  }
  v5 = sub_1B64314(QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo, endCallback, method);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)endCallback, v9, v10);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49F9520 & 1) == 0 )
  {
    sub_1B640C8(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo, *(_QWORD *)&targetWarId);
    byte_49F9520 = 1;
  }
  v7 = sub_1B64314(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo, *(_QWORD *)&targetWarId, endCallback);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)endCallback, v11, v12);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49F9513 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_1B640C8(&System_Predicate_MapControl_MapInfo__TypeInfo, v5);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__, v6);
    sub_1B640C8(&QuestTree___c__DisplayClass27_0_TypeInfo, v7);
    byte_49F9513 = 1;
  }
  v8 = (QuestTree___c__DisplayClass27_0_o *)sub_1B64314(
                                              QuestTree___c__DisplayClass27_0_TypeInfo,
                                              *(_QWORD *)&mapId,
                                              method);
  QuestTree___c__DisplayClass27_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.mapId = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_MapInfo__TypeInfo, v10, v11);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v13,
                                   (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  if ( (byte_49F968A & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B640C8(&BlankEarthSpotMaster_TypeInfo, method);
    byte_49F968A = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
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
      sub_1B6432C(this, method);
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
          sub_1B6406C(p__2__current, (int32_t)v17, v19, v20);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1B64324(this);
  }
  this->klass = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  int32_t v5; // w3
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v6; // x20
  struct QuestTree_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F968B & 1) == 0 )
  {
    sub_1B640C8(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, method);
    byte_49F968B = 1;
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
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B64314(
                                                             QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo,
                                                             method,
                                                             v2);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v2, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1B6406C(
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49F968C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5);
    this = (QuestTree__Init_d__15_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F968C = 1;
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
        if ( !byte_49F971C )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
          byte_49F971C = 1;
        }
        v9 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v9 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v9->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v11 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
            v11 = sub_1BB5FA4(v11);
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
          if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
            v12 = sub_1BB5FA4(v12);
          v13 = **(UnityEngine_Object_o ***)(v12 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0LL);
              v14 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B6406C(p__2__current, (int32_t)v14, v16, v17);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1B64324(this);
      }
      v19 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1BB5FA4(v19);
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
      if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
        v20 = sub_1BB5FA4(v20);
      v21 = **(UnityEngine_Object_o ***)(v20 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9686 & 1) == 0 )
  {
    sub_1B640C8(&QuestTree___c_TypeInfo, v1);
    byte_49F9686 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestTree___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__29_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__42_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49F9687 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_49F9687 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49F9688 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_3_o *)sub_1B640C8(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_49F9688 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49F9689 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_6_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_49F9689 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
  __int64 v2; // x2
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v3; // x26
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
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *MasterData_object; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  Il2CppObject *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  Il2CppObject *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  Il2CppObject *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  __int64 v94; // x1
  __int64 v95; // x2
  System_Collections_Generic_Dictionary_int__object__o *v96; // x21
  int32_t v97; // w2
  int32_t v98; // w3
  System_Object_array *Entitys_object__object; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v104; // w8
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v108; // x9
  WarEntity_o *v109; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v111; // x19
  int32_t v112; // w2
  int32_t v113; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v120; // x23
  int64_t v121; // x23
  Il2CppObject *v122; // x8
  unsigned int _2__current; // w9
  __int64 v124; // x8
  _QWORD *v125; // x9
  __int64 _2__current_low; // x10
  __int64 v127; // x8
  int32_t v128; // w3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v129; // x22
  unsigned int v130; // w27
  __int64 v131; // x8
  int32_t v132; // w24
  int32_t v133; // w2
  int32_t v134; // w3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v137; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v139; // x23
  Il2CppClass **v140; // x0
  Il2CppObject *v141; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v142; // x25
  int v143; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v145; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v146; // x8
  SpotEntity_o **v147; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v148; // t1
  int32_t v149; // w2
  int32_t v150; // w3
  Il2CppObject *v151; // x1
  __int64 v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  __int64 v155; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v157; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v158; // x25
  int v159; // w19
  unsigned int v160; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v161; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v162; // x8
  SpotRoadEntity_o **v163; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v164; // t1
  int32_t v165; // w2
  int32_t v166; // w3
  Il2CppObject *v167; // x1
  __int64 v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  __int64 v171; // x8
  Il2CppObject *v172; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v173; // x24
  int v174; // w19
  int v175; // w25
  __int64 v176; // x8
  int32_t v177; // w2
  int32_t v178; // w3
  Il2CppObject *v179; // x1
  __int64 v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  __int64 v183; // x8
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v185; // x22
  Il2CppObject *v186; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v188; // w2
  int32_t v189; // w3
  __int64 v190; // x1
  __int64 v191; // x2
  Il2CppObject *v192; // x22
  struct QuestTree___c__DisplayClass41_0_o **p__8__1; // x21
  int32_t v194; // w2
  int32_t v195; // w3
  int64_t v196; // x22
  __int64 v197; // x1
  __int64 v198; // x2
  MapControl_WarInfo_o *v199; // x23
  int32_t v200; // w2
  int32_t v201; // w3
  __int64 v202; // x1
  __int64 v203; // x2
  MapControl_MapInfo_o *v204; // x22
  int32_t v205; // w2
  int32_t v206; // w3
  __int64 v207; // x1
  __int64 v208; // x2
  MapControl_SpotInfo_o *v209; // x22
  int32_t v210; // w2
  int32_t v211; // w3
  __int64 v212; // x1
  __int64 v213; // x2
  WarEntity_o *v214; // x22
  int32_t v215; // w2
  int32_t v216; // w3
  Il2CppObject *v217; // x0
  int32_t v218; // w2
  int32_t v219; // w3
  bool v220; // zf
  int v221; // w8
  __int64 v222; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x26
  bool result; // w0
  QuestEntity_o *v225; // x23
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x22
  int32_t QuestPhase; // w22
  __int64 v229; // x1
  __int64 v230; // x2
  struct QuestTree___c__DisplayClass41_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v232; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v234; // w2
  int32_t v235; // w3
  Il2CppObject *v236; // x0
  int32_t v237; // w2
  int32_t v238; // w3
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v241; // w2
  int32_t v242; // w3
  int32_t v243; // w1
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int32_t v245; // w2
  int32_t v246; // w3
  WarEntity_o *Mine; // x0
  int32_t v248; // w2
  int32_t v249; // w3
  int v250; // w25
  int32_t v251; // w2
  int32_t v252; // w3
  struct MapControl_WarInfo_o *warInfo_5__20; // x1
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v254; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v256; // w2
  int32_t v257; // w3
  struct WarEntity_o *warEnt_5__23; // x8
  int v259; // w19
  struct MapControl_SpotInfo_o *v260; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v262; // x9
  struct MapControl_MapInfo_o *v263; // x9
  bool v264; // w8
  int32_t v265; // w2
  int32_t v266; // w3
  Il2CppObject *v267; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v268; // x21
  int v269; // w19
  int v270; // w22
  __int64 v271; // x8
  __int64 v272; // x8
  _QWORD *v273; // x9
  __int64 v274; // x10
  __int64 v275; // x8
  int32_t v276; // w3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v278; // x22
  Il2CppObject *v279; // x23
  struct QuestTree___c_StaticFields *v280; // x0
  int32_t v281; // w2
  int32_t v282; // w3
  int32_t v283; // w2
  int32_t v284; // w3
  int32_t v285; // w2
  int32_t v286; // w3
  int32_t v287; // w2
  int32_t v288; // w3
  int32_t v289; // w2
  int32_t v290; // w3
  int32_t v291; // w2
  int32_t v292; // w3
  int32_t v293; // w2
  int32_t v294; // w3
  int32_t v295; // w2
  int32_t v296; // w3
  ServantStatusBattleListViewItem_o *v297; // x26
  int v298; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v299; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v300; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v301; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v302; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v304; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v308; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_49F968D & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_MapControl_QuestInfo__TypeInfo, method);
    sub_1B640C8(&System_Comparison_MapControl_WarInfo__TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventStatusMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_MapGimmickMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_MapMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPickupMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotRoadMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v18);
    sub_1B640C8(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v21);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v25);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v26);
    sub_1B640C8(&long___TypeInfo, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v38);
    sub_1B640C8(&MapControl_MapInfo_TypeInfo, v39);
    sub_1B640C8(&NetworkManager_TypeInfo, v40);
    sub_1B640C8(&OptionManager_TypeInfo, v41);
    sub_1B640C8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v42);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v43);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v45);
    sub_1B640C8(&MapControl_SpotInfo_TypeInfo, v46);
    sub_1B640C8(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, v47);
    sub_1B640C8(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, v48);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__, v49);
    sub_1B640C8(&QuestTree___c__DisplayClass41_0_TypeInfo, v50);
    sub_1B640C8(&QuestTree___c_TypeInfo, v51);
    sub_1B640C8(&WarEntity_TypeInfo, v52);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B640C8(&MapControl_WarInfo_TypeInfo, v53);
    byte_49F968D = 1;
  }
  v308 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v304 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v3->fields.__4__this;
  v302 = v3;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_262;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v3->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._dataManager_5__2, (int32_t)Instance, v56, v57);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapMaster___);
      v3->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v3->fields._mapMaster_5__3,
        (int32_t)MasterData_object,
        v59,
        v60);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v61 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___);
      v3->fields._spotMaster_5__4 = (struct SpotMaster_o *)v61;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._spotMaster_5__4, (int32_t)v61, v62, v63);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v64 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v3->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v64;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._blankEarthSpotMaster_5__5, (int32_t)v64, v65, v66);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v67 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
      v3->fields._questMaster_5__6 = (struct QuestMaster_o *)v67;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._questMaster_5__6, (int32_t)v67, v68, v69);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v70 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v3->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v70;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._questPhaseMaster_5__7, (int32_t)v70, v71, v72);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v73 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
      v3->fields._eventMaster_5__8 = (struct EventMaster_o *)v73;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._eventMaster_5__8, (int32_t)v73, v74, v75);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v76 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v3->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v76;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._eventDetailMaster_5__9, (int32_t)v76, v77, v78);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v79 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v3->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v79;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._eventStatusMaster_5__10, (int32_t)v79, v80, v81);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v82 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v3->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v82;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v3->fields._eventStatusQuestMaster_5__11,
        (int32_t)v82,
        v83,
        v84);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v85 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v3->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v85;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._spotRoadMaster_5__12, (int32_t)v85, v86, v87);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v88 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v3->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v88;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._mapGimmickMaster_5__13, (int32_t)v88, v89, v90);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      v91 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v3->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v91;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._questPickupMaster_5__14, (int32_t)v91, v92, v93);
      v96 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                      System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                      v94,
                                                                      v95);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v96,
        (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v3->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v96;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v3->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v96,
        v97,
        v98);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_262;
      Entitys_object__object = DataManager__getEntitys_object__object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E3964C *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v3->fields._warList_5__16 = (struct WarEntity_array *)Entitys_object__object;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v3->fields._warList_5__16,
        (int32_t)Entitys_object__object,
        v100,
        v101);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v3->fields._warList_5__16;
      v3->fields._nowTime_5__17 = (int64_t)this;
      v3->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_262;
      max_length = warList_5__16->max_length;
      v104 = 0;
      v3->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v3->fields._warIdx_5__18;
      v3->fields.__1__state = -1;
      goto LABEL_122;
    case 2:
      questIdx_5__25 = v3->fields._questIdx_5__25;
      v3->fields.__1__state = -1;
      goto LABEL_246;
    case 3:
      endCallback = v3->fields.endCallback;
      v3->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_262;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v104 < max_length )
  {
    v108 = v3->fields._warList_5__16;
    if ( !v108 )
      goto LABEL_262;
    if ( v104 >= v108->max_length )
      goto LABEL_144;
    v109 = v108->m_Items[v104];
    if ( !v109 )
      goto LABEL_262;
    if ( !_4__this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_262;
    id = v109->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v3->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_262;
    v111 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v3->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v111, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_262;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_262;
        nowTime_5__17 = v3->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v111, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v3->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v111, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_262;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v308,
               (int32_t)this,
               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v308;
          if ( !v308 )
            goto LABEL_262;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v308, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)entity;
            if ( !entity )
              goto LABEL_262;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v3->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v3->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v111, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_262;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v3->fields._eventStatusQuestMaster_5__11;
                v120 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v111, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_262;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v120->fields.statusId,
                                                                           0LL);
                if ( !v3->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_262;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v3->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v121 = v3->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B64170(long___TypeInfo, 3LL);
        v122 = entity;
        if ( !entity || !this )
          goto LABEL_262;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_144;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_144;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v122[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_144;
        this->fields.endCallback = (struct System_Action_o *)v122[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v121, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_262;
    v124 = *(_QWORD *)&this->fields.__1__state;
    v125 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v124 )
      goto LABEL_262;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v124 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v111,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    }
    else
    {
      v127 = v124 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v127 + 32) = v111;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v127 + 32), (int32_t)v111, v112, v113);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_262;
    v129 = this;
    v301 = this->fields.__2__current;
    if ( (int)v301 >= 1 )
    {
      if ( !(_DWORD)v301 )
        goto LABEL_144;
      v130 = 0;
      v299 = this;
      v300 = v111;
      while ( 1 )
      {
        v131 = *((_QWORD *)&v129->fields.__4__this + (int)v130);
        if ( !v131 )
          goto LABEL_262;
        v132 = *(_DWORD *)(v131 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__AddChild(v111, v132, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_262;
        items = allMapInfoList->fields._items;
        v137 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_262;
        size = allMapInfoList->fields._size;
        v139 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
        }
        else
        {
          v140 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v140[4] = (Il2CppClass *)v139;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v140 + 4), (int32_t)v139, v133, v134);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotMaster__getList((SpotMaster_o *)this, v132, 0LL);
        if ( !this )
          goto LABEL_262;
        v141 = this->fields.__2__current;
        v142 = this;
        v143 = (_DWORD)v141 - 1;
        if ( (int)v141 >= 1 )
          break;
LABEL_87:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v139,
                                                                   v302->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_262;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v302->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v132,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        v157 = this->fields.__2__current;
        v158 = this;
        v159 = (_DWORD)v157 - 1;
        if ( (int)v157 >= 1 )
        {
          v160 = 0;
          while ( 1 )
          {
            v161 = &v158->klass + (int)v160;
            v164 = v161[4];
            v163 = (SpotRoadEntity_o **)(v161 + 4);
            v162 = v164;
            if ( !v164 || !v139 )
              goto LABEL_262;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v139,
                                                                       (int32_t)v162->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v160 >= LODWORD(v158->fields.__2__current) )
              goto LABEL_144;
            QuestTree__SetupSpotRoadInfo(_4__this, *v163, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_262;
            v167 = (Il2CppObject *)spotRoadInfo;
            v168 = *(_QWORD *)&this->fields.__1__state;
            v169 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v168 )
              goto LABEL_262;
            v170 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v170 >= *(_DWORD *)(v168 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v167,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
            }
            else
            {
              v171 = v168 + 8 * v170;
              LODWORD(this->fields.__2__current) = v170 + 1;
              *(_QWORD *)(v171 + 32) = v167;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v171 + 32), (int32_t)v167, v165, v166);
            }
            if ( v159 == v160 )
              break;
            if ( ++v160 >= LODWORD(v158->fields.__2__current) )
              goto LABEL_144;
          }
        }
        v3 = v302;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v302->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v132,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        v172 = this->fields.__2__current;
        v173 = this;
        v174 = (_DWORD)v172 - 1;
        if ( (int)v172 >= 1 )
        {
          v175 = 0;
          while ( 1 )
          {
            v176 = *((_QWORD *)&v173->fields.__4__this + v175);
            if ( !v176 )
              goto LABEL_262;
            if ( !v139 )
              goto LABEL_262;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v139, *(_DWORD *)(v176 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_262;
            v179 = (Il2CppObject *)mapGimmickInfo;
            v180 = *(_QWORD *)&this->fields.__1__state;
            v181 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v180 )
              goto LABEL_262;
            v182 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v182 >= *(_DWORD *)(v180 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v179,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
            }
            else
            {
              v183 = v180 + 8 * v182;
              LODWORD(this->fields.__2__current) = v182 + 1;
              *(_QWORD *)(v183 + 32) = v179;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v183 + 32), (int32_t)v179, v177, v178);
            }
            if ( v174 == v175 )
              break;
            if ( (unsigned int)++v175 >= LODWORD(v173->fields.__2__current) )
              goto LABEL_144;
          }
        }
        v111 = v300;
        v129 = v299;
        if ( ++v130 == (_DWORD)v301 )
          goto LABEL_120;
        if ( v130 >= LODWORD(v299->fields.__2__current) )
          goto LABEL_144;
      }
      for ( i = 0; i < LODWORD(v142->fields.__2__current); ++i )
      {
        v145 = &v142->klass + (int)i;
        v148 = v145[4];
        v147 = (SpotEntity_o **)(v145 + 4);
        v146 = v148;
        if ( !v148 || !v139 )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddChild(
                                                                   v139,
                                                                   (int32_t)v146->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v142->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v147, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_262;
        v151 = (Il2CppObject *)spotInfo;
        v152 = *(_QWORD *)&this->fields.__1__state;
        v153 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v152 )
          goto LABEL_262;
        v154 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v154 >= *(_DWORD *)(v152 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v151,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
        }
        else
        {
          v155 = v152 + 8 * v154;
          LODWORD(this->fields.__2__current) = v154 + 1;
          *(_QWORD *)(v155 + 32) = v151;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v155 + 32), (int32_t)v151, v149, v150);
        }
        if ( v143 == i )
          goto LABEL_87;
      }
LABEL_144:
      sub_1B6432C(this, method);
    }
LABEL_120:
    warIdx_5__18 = v3->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v2, v128);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_122:
    max_length = v3->fields._warCount_5__19;
    v104 = warIdx_5__18 + 1;
    v3->fields._warIdx_5__18 = v104;
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
  v185 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v185 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v186 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v185 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_MapControl_WarInfo__TypeInfo, method, v2);
    System_Comparison_object____ctor(v185, v186, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Comparison_MapControl_WarInfo__o *)v185;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)v185, v188, v189);
  }
  if ( !allWarInfoList )
    goto LABEL_262;
  System_Collections_Generic_List_object___Sort_55243320(
    allWarInfoList,
    v185,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v192 = (Il2CppObject *)sub_1B64314(QuestTree___c__DisplayClass41_0_TypeInfo, v190, v191);
  System_Object___ctor(v192, 0LL);
  v3->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v192;
  p__8__1 = &v3->fields.__8__1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, (int32_t)v192, v194, v195);
  v196 = v3->fields._nowTime_5__17;
  v199 = (MapControl_WarInfo_o *)sub_1B64314(MapControl_WarInfo_TypeInfo, v197, v198);
  MapControl_WarInfo___ctor(v199, v196, 0LL);
  v3->fields._warInfo_5__20 = v199;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._warInfo_5__20, (int32_t)v199, v200, v201);
  v204 = (MapControl_MapInfo_o *)sub_1B64314(MapControl_MapInfo_TypeInfo, v202, v203);
  MapControl_MapInfo___ctor(v204, 0LL);
  v3->fields._mapInfo_5__21 = v204;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._mapInfo_5__21, (int32_t)v204, v205, v206);
  v209 = (MapControl_SpotInfo_o *)sub_1B64314(MapControl_SpotInfo_TypeInfo, v207, v208);
  MapControl_SpotInfo___ctor(v209, 0LL);
  v3->fields._spotInfo_5__22 = v209;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._spotInfo_5__22, (int32_t)v209, v210, v211);
  v214 = (WarEntity_o *)sub_1B64314(WarEntity_TypeInfo, v212, v213);
  WarEntity___ctor(v214, 0LL);
  v3->fields._warEnt_5__23 = v214;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._warEnt_5__23, (int32_t)v214, v215, v216);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_262;
  v217 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v3->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v217;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._userQuestMaster_5__24, (int32_t)v217, v218, v219);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_262;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v3->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v220 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._questMaster_5__6;
  v221 = v220 ? 5000 : 500;
  v3->fields._breakInterval_5__29 = v221;
  v3->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_262;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  v222 = (unsigned int)v3->fields._questIdx_5__25;
  v3->fields._questCount_5__26 = (int)this;
  while ( (int)v222 < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               v222,
                                                               0LL);
    if ( !this )
      goto LABEL_262;
    v225 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v304 = 0LL;
    userQuestMaster_5__24 = v3->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_262;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v304, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v304;
      if ( !v304 )
        goto LABEL_262;
      QuestPhase = UserQuestEntity__getQuestPhase(v304, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__getSpotId_39146476(v225, QuestPhase + 1, 0LL);
    _8__1 = v3->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_262;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_262;
      v232 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_SpotInfo__TypeInfo, v229, v230);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v234, v235);
      }
      if ( !v232 )
        goto LABEL_262;
      v236 = System_Collections_Generic_List_object___Find(
               v232,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v3 = v302;
      v302->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v236;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v302->fields._spotInfo_5__22, (int32_t)v236, v237, v238);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v302->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_262;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v302->fields._mapInfoNow_5__27 != MapID )
      {
        v302->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v302->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v302->fields._mapInfo_5__21,
          (int32_t)MapInfoByMapID,
          v241,
          v242);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v302->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        v243 = *(&this->fields.__1__state + 1);
        if ( v302->fields._warInfoNow_5__28 != v243 )
        {
          v302->fields._warInfoNow_5__28 = v243;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, v243, 0LL);
          v302->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v302->fields._warInfo_5__20,
            (int32_t)WarInfoByWarID,
            v245,
            v246);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v302->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_262;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v302->fields._warEnt_5__23 = Mine;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v302->fields._warEnt_5__23, (int32_t)Mine, v248, v249);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_262;
    if ( !v304 )
      goto LABEL_185;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v304;
    if ( !v304 )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v304, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_173;
    if ( !v304 )
      goto LABEL_262;
    if ( v304->fields.challengeNum >= 1 )
    {
LABEL_173:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_262;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v304;
    if ( !v304 )
      goto LABEL_262;
    if ( UserQuestEntity__getClearNum(v304, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_262;
LABEL_185:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v250 = 0;
      goto LABEL_186;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v304 )
      goto LABEL_262;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v304->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v3->fields._warInfo_5__20 )
      goto LABEL_262;
    v250 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetMine(v3->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_262;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_262;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_186:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    warInfo_5__20 = v3->fields._warInfo_5__20;
    if ( !warInfo_5__20 )
      goto LABEL_262;
    v254 = this;
    if ( !this )
      goto LABEL_262;
    LODWORD(this->fields._mapMaster_5__3) = warInfo_5__20->fields.warId;
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)warInfo_5__20;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields._eventMaster_5__8,
      (int32_t)warInfo_5__20,
      v251,
      v252);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v3->fields._spotInfo_5__22;
    v254->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v254->fields._questPhaseMaster_5__7,
      (int32_t)spotInfo_5__22,
      v256,
      v257);
    if ( !_4__this )
      goto LABEL_262;
    v254->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v254,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_262;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_200;
      }
    }
    warEnt_5__23 = v3->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_262;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)value;
      if ( !value )
        goto LABEL_262;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_200:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v254, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v254->fields.__4__this) = 0;
LABEL_204:
        v259 = 1;
        goto LABEL_205;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v225, (MapControl_QuestInfo_o *)v254, v3->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_204;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_262;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v259 = 0;
LABEL_205:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v254, 0LL) )
    {
      if ( ((v250 | v259) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_262;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_262;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v254->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v254, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v254,
                                                                   0LL);
        if ( !this )
          goto LABEL_262;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v260 = v3->fields._spotInfo_5__22;
          if ( !v260 )
            goto LABEL_262;
          v260->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v3->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_262;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v254,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v262 = v3->fields._spotInfo_5__22;
        if ( !v262 )
          goto LABEL_262;
        v262->fields._IsNext_k__BackingField = 1;
        v263 = v3->fields._mapInfo_5__21;
        if ( !v263 )
          goto LABEL_262;
        v263->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v225, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_262;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v304 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v304, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v304 )
          goto LABEL_262;
        v264 = v304->fields.challengeNum == 0;
      }
      else
      {
        v264 = 0;
      }
    }
    else
    {
      v264 = 1;
    }
    LOBYTE(v254->fields.__8__1) = v264;
    HIDWORD(v254->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_262;
    LODWORD(v254->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v3->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_262;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_262;
    v267 = this->fields.__2__current;
    v268 = this;
    v269 = (_DWORD)v267 - 1;
    if ( (int)v267 >= 1 )
    {
      v270 = 0;
      while ( 1 )
      {
        v271 = *((_QWORD *)&v268->fields.__4__this + v270);
        if ( !v271 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v254,
                                                                   *(_DWORD *)(v271 + 16),
                                                                   *(_DWORD *)(v271 + 20),
                                                                   0LL);
        if ( v269 == v270 )
          goto LABEL_239;
        if ( (unsigned int)++v270 >= LODWORD(v268->fields.__2__current) )
          goto LABEL_144;
      }
LABEL_262:
      sub_1B64324(this);
    }
LABEL_239:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_262;
    v272 = *(_QWORD *)&this->fields.__1__state;
    v273 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v272 )
      goto LABEL_262;
    v274 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v274 >= *(_DWORD *)(v272 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v254,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    }
    else
    {
      v275 = v272 + 8 * v274;
      LODWORD(this->fields.__2__current) = v274 + 1;
      *(_QWORD *)(v275 + 32) = v254;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v275 + 32), (int32_t)v254, v265, v266);
    }
    questIdx_5__25 = v3->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v3->fields._breakInterval_5__29) )
    {
      v3->fields.__2__current = 0LL;
      v297 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(v297, 0, v2, v276);
      v298 = 2;
      goto LABEL_261;
    }
LABEL_246:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)(unsigned int)v3->fields._questCount_5__26;
    v222 = (unsigned int)(questIdx_5__25 + 1);
    v3->fields._questIdx_5__25 = v222;
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
  v278 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v278 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v279 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v278 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_MapControl_QuestInfo__TypeInfo, v222, v2);
    System_Comparison_object____ctor(v278, v279, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, 0LL);
    v280 = QuestTree___c_TypeInfo->static_fields;
    v280->__9__41_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v278;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v280->__9__41_1, (int32_t)v278, v281, v282);
  }
  if ( !allQuestInfoList )
    goto LABEL_262;
  System_Collections_Generic_List_object___Sort_55243320(
    allQuestInfoList,
    v278,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v3->fields.__8__1 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, 0, v283, v284);
  v3->fields._warInfo_5__20 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._warInfo_5__20, 0, v285, v286);
  v3->fields._mapInfo_5__21 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._mapInfo_5__21, 0, v287, v288);
  v3->fields._spotInfo_5__22 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._spotInfo_5__22, 0, v289, v290);
  v3->fields._warEnt_5__23 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._warEnt_5__23, 0, v291, v292);
  v3->fields._userQuestMaster_5__24 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._userQuestMaster_5__24, 0, v293, v294);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_262;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v3->fields.endCallback )
    return 0;
  v3->fields.__2__current = 0LL;
  v297 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B6406C(v297, 0, v295, v296);
  v298 = 3;
LABEL_261:
  *(_DWORD *)&v297[-1].fields.isMine = v298;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
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
  struct QuestTree___c__DisplayClass42_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  DataManager_o *dataManager_5__2; // x0
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v121; // x0
  Il2CppObject *v122; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  DataManager_o *v126; // x0
  Il2CppObject *v127; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  DataManager_o *v131; // x0
  Il2CppObject *v132; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  DataManager_o *v136; // x0
  Il2CppObject *v137; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  DataManager_o *v141; // x0
  Il2CppObject *v142; // x24
  DataManager_o *v143; // x0
  Il2CppObject *v144; // x23
  DataManager_o *v145; // x0
  Il2CppObject *v146; // x22
  DataManager_o *v147; // x0
  Il2CppObject *v148; // x21
  DataManager_o *v149; // x0
  Il2CppObject *v150; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v151; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  DataManager_o *v154; // x0
  Il2CppObject *v155; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v156; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  DataManager_o *v159; // x0
  Il2CppObject *v160; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v161; // x0
  int32_t v162; // w2
  int32_t v163; // w3
  __int64 v164; // x1
  __int64 v165; // x2
  System_Collections_Generic_Dictionary_int__object__o *v166; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v167; // x0
  int32_t v168; // w2
  int32_t v169; // w3
  __int64 v170; // x1
  __int64 v171; // x2
  Il2CppObject *v172; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v173; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  DataManager_o *v176; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object__object; // x25
  Il2CppObject *v178; // x27
  __int64 v179; // x1
  __int64 v180; // x2
  System_Func_object__bool__o *v181; // x26
  Il2CppObject *v182; // x0
  struct QuestTree___c__DisplayClass42_1_o *_8__1; // x8
  int32_t klass; // w1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v187; // x27
  __int64 v188; // x1
  __int64 v189; // x2
  System_Predicate_object__o *v190; // x26
  __int64 v191; // x0
  __int64 Index; // x0
  int32_t v193; // w1
  System_Collections_Generic_List_object__o *v194; // x0
  struct QuestTree___c__DisplayClass42_1_o *v195; // x9
  MapControl_RootInfo_o *v196; // x0
  struct MapControl_WarInfo_o *v197; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v198; // x0
  int32_t v199; // w2
  int32_t v200; // w3
  MapControl_WarInfo_o *warInfo_5__14; // x0
  int32_t v202; // w2
  int32_t v203; // w3
  MapControl_WarInfo_o *v204; // x0
  __int64 EventId; // x0
  _BOOL8 v206; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v207; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v209; // x0
  MapControl_WarInfo_o *v210; // x0
  __int64 v211; // x0
  MapControl_WarInfo_o *v212; // x0
  __int64 v213; // x0
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v215; // x0
  __int64 v216; // x0
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  struct QuestTree___c__DisplayClass42_1_o *v218; // x8
  Il2CppObject *v219; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v221; // x21
  System_Int64_array *v222; // x0
  __int64 v223; // x1
  Il2CppObject *v224; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v226; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v228; // x1
  _QWORD *v229; // x9
  __int64 size; // x10
  Il2CppClass **v231; // x8
  __int64 v232; // x0
  int32_t v233; // w9
  struct QuestTree___c__DisplayClass42_1_o *v234; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v236; // x0
  __int64 v237; // x1
  __int64 v238; // x2
  SpotRoadEntity_array *v239; // x20
  int v240; // w25
  il2cpp_array_size_t i; // w26
  __int64 v242; // x21
  __int64 v243; // x0
  __int64 v244; // x1
  __int64 v245; // x2
  SpotRoadEntity_o *v246; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v248; // x24
  __int64 v249; // x0
  int32_t v250; // w1
  System_Collections_Generic_List_object__o *v251; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  int32_t v253; // w2
  int32_t v254; // w3
  System_Collections_Generic_List_object__o *v255; // x0
  Il2CppObject *v256; // x1
  struct System_Object_array *v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  Il2CppClass **v260; // x8
  struct QuestTree___c__DisplayClass42_1_o *v261; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v263; // x0
  __int64 v264; // x1
  __int64 v265; // x2
  int32_t v266; // w3
  MapGimmickEntity_array *v267; // x20
  int v268; // w24
  il2cpp_array_size_t j; // w25
  __int64 v270; // x21
  __int64 v271; // x0
  __int64 v272; // x1
  __int64 v273; // x2
  MapGimmickEntity_o *v274; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v276; // x23
  __int64 v277; // x0
  int32_t v278; // w1
  System_Collections_Generic_List_object__o *v279; // x0
  MapControl_MapInfo_o *v280; // x0
  int32_t v281; // w2
  int32_t v282; // w3
  System_Collections_Generic_List_object__o *v283; // x0
  Il2CppObject *v284; // x1
  struct System_Object_array *v285; // x8
  _QWORD *v286; // x9
  __int64 v287; // x10
  Il2CppClass **v288; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v289; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v290; // x8
  int v291; // w9
  ServantStatusBattleListViewItem_o *p_mapInfo_5__16; // x8
  __int64 v293; // x0
  __int64 v294; // x1
  __int64 v295; // x2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v296; // x8
  int32_t mapCount_5__13; // w10
  int32_t v298; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v300; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v302; // x0
  int32_t v303; // w2
  int32_t v304; // w3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v306; // x10
  MapEntity_o *v307; // x9
  struct QuestTree___c__DisplayClass42_1_o *v308; // x22
  struct MapControl_WarInfo_o *v309; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v312; // w2
  int32_t v313; // w3
  struct MapControl_WarInfo_o *v314; // x8
  System_Collections_Generic_List_object__o *v315; // x0
  struct QuestTree___c__DisplayClass42_1_o *v316; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v319; // w2
  int32_t v320; // w3
  __int64 v321; // x0
  int32_t v322; // w1
  System_Collections_Generic_List_object__o *v323; // x0
  struct QuestTree___c__DisplayClass42_1_o *v324; // x8
  MapControl_WarInfo_o *v325; // x0
  struct MapControl_MapInfo_o *v326; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v327; // x0
  int32_t v328; // w2
  int32_t v329; // w3
  int32_t v330; // w2
  int32_t v331; // w3
  System_Collections_Generic_List_object__o *v332; // x0
  struct System_Object_array *v333; // x8
  Il2CppObject *v334; // x1
  _QWORD *v335; // x9
  __int64 v336; // x10
  Il2CppClass **v337; // x8
  __int64 v338; // x0
  System_Collections_Generic_List_object__o *v339; // x20
  QuestTree___c_c *v340; // x8
  System_Comparison_T__o *_9__42_2; // x21
  Il2CppObject *v342; // x22
  struct QuestTree___c_StaticFields *v343; // x0
  int32_t v344; // w2
  int32_t v345; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v346; // x0
  int32_t v347; // w2
  int32_t v348; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v349; // x0
  int32_t v350; // w2
  int32_t v351; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v352; // x0
  int32_t v353; // w2
  int32_t v354; // w3
  __int64 v355; // x1
  __int64 v356; // x2
  Il2CppObject *v357; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v358; // x0
  int32_t v359; // w2
  int32_t v360; // w3
  int64_t v361; // x21
  __int64 v362; // x1
  __int64 v363; // x2
  MapControl_WarInfo_o *v364; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v365; // x0
  int32_t v366; // w2
  int32_t v367; // w3
  __int64 v368; // x1
  __int64 v369; // x2
  MapControl_MapInfo_o *v370; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v371; // x0
  int32_t v372; // w2
  int32_t v373; // w3
  __int64 v374; // x1
  __int64 v375; // x2
  MapControl_SpotInfo_o *v376; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v377; // x0
  int32_t v378; // w2
  int32_t v379; // w3
  __int64 v380; // x1
  __int64 v381; // x2
  WarEntity_o *v382; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v383; // x0
  int32_t v384; // w2
  int32_t v385; // w3
  DataManager_o *v386; // x0
  Il2CppObject *v387; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v388; // x0
  int32_t v389; // w2
  int32_t v390; // w3
  Il2CppObject *Master_object; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v392; // x8
  struct QuestTree___c__DisplayClass42_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v395; // x1
  __int64 v396; // x2
  int32_t v397; // w9
  struct QuestTree___c__DisplayClass42_6_o *v398; // x20
  System_Collections_Generic_List_int__o *v399; // x21
  __int64 v400; // x0
  int32_t v401; // w2
  int32_t v402; // w3
  System_Collections_Generic_List_object__o *v403; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v404; // x9
  __int128 v405; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap24; // x0
  int32_t v407; // w2
  int32_t v408; // w3
  const MethodInfo *v409; // x1
  bool v410; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v411; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  int32_t v414; // w2
  int32_t v415; // w3
  struct QuestTree___c__DisplayClass42_0_o *v416; // x9
  struct QuestTree___c__DisplayClass42_6_o *v417; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  int32_t spotId; // w1
  struct System_Int32_array *v420; // x9
  _QWORD *v421; // x10
  __int64 v422; // x11
  unsigned __int64 v423; // t2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v424; // x8
  DataMasterBase_o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x20
  Il2CppObject *v427; // x22
  __int64 v428; // x1
  __int64 v429; // x2
  System_Func_object__bool__o *v430; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v431; // x0
  System_Object_array *v432; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v433; // x0
  int32_t v434; // w2
  int32_t v435; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v436; // x8
  __int64 mapIdx_5__12; // x0
  int32_t v438; // w9
  struct QuestTree___c__DisplayClass42_1_o *v439; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v441; // x0
  __int64 v442; // x1
  __int64 v443; // x2
  SpotEntity_array *v444; // x20
  int v445; // w25
  il2cpp_array_size_t k; // w26
  __int64 v447; // x21
  __int64 v448; // x0
  __int64 v449; // x1
  __int64 v450; // x2
  SpotEntity_o *v451; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v453; // x24
  __int64 v454; // x0
  int32_t v455; // w1
  System_Collections_Generic_List_object__o *v456; // x0
  MapControl_MapInfo_o *v457; // x0
  int32_t v458; // w2
  int32_t v459; // w3
  System_Collections_Generic_List_object__o *v460; // x0
  Il2CppObject *v461; // x1
  struct System_Object_array *v462; // x8
  _QWORD *v463; // x9
  __int64 v464; // x10
  Il2CppClass **v465; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v466; // x0
  System_Object_array *v467; // x0
  __int64 v468; // x1
  __int64 v469; // x2
  int32_t v470; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v471; // x20
  __int64 v472; // x21
  __int64 v473; // x1
  __int64 v474; // x2
  QuestTree___c_c *v475; // x8
  System_Func_object__int__o *_9__42_6; // x22
  Il2CppObject *v477; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v479; // w2
  int32_t v480; // w3
  System_Collections_Generic_IEnumerable_T__o *v481; // x23
  __int64 v482; // x1
  __int64 v483; // x2
  System_Collections_Generic_HashSet_int__o *v484; // x22
  __int64 v485; // x0
  int32_t v486; // w2
  int32_t v487; // w3
  System_Collections_Generic_List_T__o *v488; // x22
  __int64 v489; // x1
  __int64 v490; // x2
  System_Func_object__bool__o *v491; // x23
  System_Collections_Generic_List_object__o *v492; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v493; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v496; // x20
  struct QuestTree___c__DisplayClass42_6_o *v497; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  int64_t UserId; // x0
  struct QuestTree___c__DisplayClass42_6_o *v500; // x8
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_39146476; // x0
  __int64 warId; // x1
  __int64 v504; // x2
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v505; // x22
  struct QuestTree___c__DisplayClass42_6_o *v506; // x25
  System_Collections_Generic_List_object__o *v507; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v509; // w2
  int32_t v510; // w3
  Il2CppObject *v511; // x0
  int32_t v512; // w2
  int32_t v513; // w3
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v516; // x0
  int32_t v517; // w2
  int32_t v518; // w3
  MapControl_MapInfo_o *v519; // x0
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v521; // x0
  int32_t v522; // w2
  int32_t v523; // w3
  MapControl_WarInfo_o *v524; // x0
  struct WarEntity_o *v525; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v526; // x0
  int32_t v527; // w2
  int32_t v528; // w3
  struct QuestTree___c__DisplayClass42_6_o *v529; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v532; // w2
  int32_t v533; // w3
  int32_t v534; // w1
  System_Collections_Generic_List_object__o *v535; // x0
  MapControl_WarInfo_o *v536; // x0
  _BOOL8 HasStatus; // x0
  MapControl_WarInfo_o *v538; // x0
  WarEntity_o *v539; // x0
  int v540; // w23
  bool v541; // cc
  struct QuestTree___c__DisplayClass42_6_o *v542; // x9
  MapControl_WarInfo_o *v543; // x0
  struct QuestTree___c__DisplayClass42_6_o *v544; // x8
  MapControl_SpotInfo_o *v545; // x0
  MapControl_QuestInfo_o *v546; // x0
  int32_t v547; // w2
  int32_t v548; // w3
  struct MapControl_WarInfo_o *v549; // x1
  MapControl_QuestInfo_o *v550; // x22
  int32_t v551; // w8
  struct MapControl_SpotInfo_o *v552; // x1
  int32_t v553; // w2
  int32_t v554; // w3
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  struct WarEntity_o *v557; // x8
  struct QuestTree___c__DisplayClass42_6_o *v558; // x9
  struct WarEntity_o *v559; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v560; // x0
  _BOOL8 v561; // x0
  struct QuestTree___c__DisplayClass42_6_o *v562; // x8
  MapControl_WarInfo_o *v563; // x0
  int v564; // w24
  MapControl_SpotInfo_o *v565; // x0
  MapControl_SpotInfo_o *v566; // x0
  QuestEntity_o *v567; // x0
  _BOOL8 HasFlag; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v569; // x8
  struct MapControl_SpotInfo_o *v570; // x9
  struct MapControl_MapInfo_o *v571; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v573; // x8
  struct MapControl_SpotInfo_o *v574; // x9
  struct MapControl_MapInfo_o *v575; // x8
  MapControl_SpotInfo_o *v576; // x0
  UserQuestEntity_o *v577; // x0
  bool v578; // w8
  struct QuestTree___c__DisplayClass42_6_o *v579; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  struct QuestTree___c__DisplayClass42_6_o *v582; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v584; // x0
  int32_t v585; // w2
  int32_t v586; // w3
  _QWORD *v587; // x20
  __int64 v588; // x8
  int v589; // w21
  int v590; // w23
  __int64 v591; // x8
  __int64 v592; // x1
  System_Collections_Generic_List_object__o *v593; // x0
  struct System_Object_array *v594; // x8
  _QWORD *v595; // x9
  __int64 v596; // x10
  Il2CppClass **v597; // x8
  int32_t v598; // w3
  System_Collections_Generic_List_object__o *v599; // x20
  QuestTree___c_c *v600; // x8
  System_Comparison_T__o *_9__42_11; // x21
  Il2CppObject *v602; // x22
  struct QuestTree___c_StaticFields *v603; // x0
  int32_t v604; // w2
  int32_t v605; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v606; // x0
  int32_t v607; // w2
  int32_t v608; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v609; // x0
  int32_t v610; // w2
  int32_t v611; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v612; // x0
  int32_t v613; // w2
  int32_t v614; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v615; // x0
  int32_t v616; // w2
  int32_t v617; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v618; // x0
  int32_t v619; // w2
  int32_t v620; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v621; // x0
  int32_t v622; // w2
  int32_t v623; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v624; // x0
  int32_t v625; // w2
  int32_t v626; // w3
  Il2CppObject *v627; // x0
  int32_t v628; // w2
  int32_t v629; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v630; // x0
  System_Collections_Generic_List_Enumerator_T__o v631[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v632; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o **v633; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v635; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v639; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v641; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v641 = this;
  if ( (byte_49F968E & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_1B640C8(&System_Comparison_MapControl_QuestInfo__TypeInfo, v5);
    sub_1B640C8(&System_Comparison_MapControl_WarInfo__TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventStatusMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_MapGimmickMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_MapMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotRoadMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v20);
    sub_1B640C8(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v21);
    sub_1B640C8(&DataManager_TypeInfo, v22);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v23);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_QuestEntity___, v25);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v28);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v29);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_QuestEntity___, v30);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v31);
    sub_1B640C8(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v32);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v33);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v34);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_QuestEntity___, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v37);
    sub_1B640C8(&System_Func_MapControl_SpotInfo__int__TypeInfo, v38);
    sub_1B640C8(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v39);
    sub_1B640C8(&System_Func_WarEntity__bool__TypeInfo, v40);
    sub_1B640C8(&System_Func_QuestEntity__bool__TypeInfo, v41);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v42);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v43);
    sub_1B640C8(&long___TypeInfo, v44);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v45);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v46);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v47);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v48);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v49);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v50);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v51);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v52);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v53);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v54);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v55);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v56);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v57);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v58);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v59);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v60);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v61);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v62);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v63);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v64);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v65);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v66);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v67);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v68);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v69);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v70);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v71);
    sub_1B640C8(&MapControl_MapInfo_TypeInfo, v72);
    sub_1B640C8(&NetworkManager_TypeInfo, v73);
    sub_1B640C8(&OptionManager_TypeInfo, v74);
    sub_1B640C8(&System_Predicate_MapControl_WarInfo__TypeInfo, v75);
    sub_1B640C8(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v76);
    sub_1B640C8(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v77);
    sub_1B640C8(&System_Predicate_MapControl_MapInfo__TypeInfo, v78);
    sub_1B640C8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v79);
    sub_1B640C8(&System_Predicate_MapControl_QuestInfo__TypeInfo, v80);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v81);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v82);
    sub_1B640C8(&MapControl_SpotInfo_TypeInfo, v83);
    sub_1B640C8(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__, v84);
    sub_1B640C8(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__, v85);
    sub_1B640C8(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__, v86);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v87);
    sub_1B640C8(&QuestTree___c__DisplayClass42_0_TypeInfo, v88);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v89);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v90);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v91);
    sub_1B640C8(&QuestTree___c__DisplayClass42_1_TypeInfo, v92);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v93);
    sub_1B640C8(&QuestTree___c__DisplayClass42_2_TypeInfo, v94);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v95);
    sub_1B640C8(&QuestTree___c__DisplayClass42_3_TypeInfo, v96);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v97);
    sub_1B640C8(&QuestTree___c__DisplayClass42_4_TypeInfo, v98);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v99);
    sub_1B640C8(&QuestTree___c__DisplayClass42_5_TypeInfo, v100);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v101);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v102);
    sub_1B640C8(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v103);
    sub_1B640C8(&QuestTree___c__DisplayClass42_6_TypeInfo, v104);
    sub_1B640C8(&QuestTree___c_TypeInfo, v105);
    sub_1B640C8(&WarEntity_TypeInfo, v106);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)sub_1B640C8(&MapControl_WarInfo_TypeInfo, v107);
    v4 = v641;
    byte_49F968E = 1;
  }
  v639 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v635 = 0LL;
  mapGimmickInfo = 0LL;
  v632 = 0LL;
  v633 = &v641;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v109 = (Il2CppObject *)sub_1B64314(QuestTree___c__DisplayClass42_0_TypeInfo, method, v2);
      System_Object___ctor(v109, 0LL);
      v110 = v641;
      v641->fields.__8__2 = (struct QuestTree___c__DisplayClass42_0_o *)v109;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v110->fields.__8__2, (int32_t)v109, v111, v112);
      _8__2 = v641->fields.__8__2;
      if ( !_8__2 )
        sub_1B64324(v113);
      _8__2->fields.targetWarId = v641->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v116 = v641;
      v641->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v116->fields._dataManager_5__2, (int32_t)Instance, v117, v118);
      dataManager_5__2 = v641->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1B64324(0LL);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapMaster___);
      v121 = v641->fields._dataManager_5__2;
      if ( !v121 )
        sub_1B64324(0LL);
      v122 = DataManager__GetMasterData_object_(
               v121,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___);
      v123 = v641;
      v641->fields._spotMaster_5__3 = (struct SpotMaster_o *)v122;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v123->fields._spotMaster_5__3, (int32_t)v122, v124, v125);
      v126 = v641->fields._dataManager_5__2;
      if ( !v126 )
        sub_1B64324(0LL);
      v127 = DataManager__GetMasterData_object_(
               v126,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v128 = v641;
      v641->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v127;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v128->fields._blankEarthSpotMaster_5__4,
        (int32_t)v127,
        v129,
        v130);
      v131 = v641->fields._dataManager_5__2;
      if ( !v131 )
        sub_1B64324(0LL);
      v132 = DataManager__GetMasterData_object_(
               v131,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
      v133 = v641;
      v641->fields._questMaster_5__5 = (struct QuestMaster_o *)v132;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v133->fields._questMaster_5__5, (int32_t)v132, v134, v135);
      v136 = v641->fields._dataManager_5__2;
      if ( !v136 )
        sub_1B64324(0LL);
      v137 = DataManager__GetMasterData_object_(
               v136,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v138 = v641;
      v641->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v137;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v138->fields._questPhaseMaster_5__6, (int32_t)v137, v139, v140);
      v141 = v641->fields._dataManager_5__2;
      if ( !v141 )
        sub_1B64324(0LL);
      v142 = DataManager__GetMasterData_object_(
               v141,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
      v143 = v641->fields._dataManager_5__2;
      if ( !v143 )
        sub_1B64324(0LL);
      v144 = DataManager__GetMasterData_object_(
               v143,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v145 = v641->fields._dataManager_5__2;
      if ( !v145 )
        sub_1B64324(0LL);
      v146 = DataManager__GetMasterData_object_(
               v145,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v147 = v641->fields._dataManager_5__2;
      if ( !v147 )
        sub_1B64324(0LL);
      v148 = DataManager__GetMasterData_object_(
               v147,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v149 = v641->fields._dataManager_5__2;
      if ( !v149 )
        sub_1B64324(0LL);
      v150 = DataManager__GetMasterData_object_(
               v149,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v151 = v641;
      v641->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v150;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v151->fields._spotRoadMaster_5__7, (int32_t)v150, v152, v153);
      v154 = v641->fields._dataManager_5__2;
      if ( !v154 )
        sub_1B64324(0LL);
      v155 = DataManager__GetMasterData_object_(
               v154,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v156 = v641;
      v641->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v155;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v156->fields._mapGimmickMaster_5__8, (int32_t)v155, v157, v158);
      v159 = v641->fields._dataManager_5__2;
      if ( !v159 )
        sub_1B64324(0LL);
      v160 = DataManager__GetMasterData_object_(
               v159,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v161 = v641;
      v641->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v160;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v161->fields._questPickupMaster_5__9, (int32_t)v160, v162, v163);
      v166 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                       System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                       v164,
                                                                       v165);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v166,
        (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v167 = v641;
      v641->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v166;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v167->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v166,
        v168,
        v169);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v641->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v172 = (Il2CppObject *)sub_1B64314(QuestTree___c__DisplayClass42_1_TypeInfo, v170, v171);
      System_Object___ctor(v172, 0LL);
      v173 = v641;
      v641->fields.__8__1 = (struct QuestTree___c__DisplayClass42_1_o *)v172;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v173->fields.__8__1, (int32_t)v172, v174, v175);
      v176 = v641->fields._dataManager_5__2;
      if ( !v176 )
        sub_1B64324(0LL);
      Entitys_object__object = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__getEntitys_object__object_(
                                                                                      v176,
                                                                                      (const MethodInfo_2E3964C *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v178 = (Il2CppObject *)v641->fields.__8__2;
      v181 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarEntity__bool__TypeInfo, v179, v180);
      System_Func_object__bool____ctor(
        v181,
        v178,
        Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v182 = System_Linq_Enumerable__SingleOrDefault_object__48689496(
               Entitys_object__object,
               (System_Func_TSource__bool__o *)v181,
               (const MethodInfo_2E6F158 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v182 )
        sub_1B64324(0LL);
      _8__1 = v641->fields.__8__1;
      if ( !_8__1 )
        sub_1B64324(v182);
      klass = (int32_t)v182[1].klass;
      _8__1->fields.warId = klass;
      if ( !_4__this )
        sub_1B64324(v182);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1B64324(0LL);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v187 = (Il2CppObject *)v641->fields.__8__1;
      v190 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_WarInfo__TypeInfo, v188, v189);
      System_Predicate_object____ctor(
        v190,
        v187,
        Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1B64324(v191);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v190,
                (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v193 = Index;
      if ( (_DWORD)Index != -1 )
      {
        v194 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v194 )
          sub_1B64324(0LL);
        System_Collections_Generic_List_object___RemoveAt(
          v194,
          v193,
          (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v195 = v641->fields.__8__1;
      if ( !v195 )
        sub_1B64324(Index);
      v196 = _4__this->fields.mapControlRootInfo;
      if ( !v196 )
        sub_1B64324(0LL);
      v197 = MapControl_RootInfo__AddChild(v196, v195->fields.warId, v641->fields._nowTime_5__11, 0LL);
      v198 = v641;
      v641->fields._warInfo_5__14 = v197;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v198->fields._warInfo_5__14, (int32_t)v197, v199, v200);
      warInfo_5__14 = v641->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1B64324(0LL);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v204 = v641->fields._warInfo_5__14;
        if ( !v204 )
          sub_1B64324(0LL);
        EventId = MapControl_WarInfo__GetEventId(v204, 0LL);
        if ( !v142 )
          sub_1B64324(EventId);
        v206 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v142,
                 &entity,
                 EventId,
                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v206 )
        {
          if ( !entity )
            sub_1B64324(v206);
          v207 = v641;
          nowTime_5__11 = v641->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v209 = v641->fields._warInfo_5__14;
            if ( !v209 )
              sub_1B64324(0LL);
            MapControl_WarInfo__SetStatusCheckFlag(v209, 1, 0, 0LL);
            v207 = v641;
          }
          v210 = v207->fields._warInfo_5__14;
          if ( !v210 )
            sub_1B64324(0LL);
          v211 = MapControl_WarInfo__GetEventId(v210, 0LL);
          if ( !v144 )
            sub_1B64324(v211);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v144,
                 &v639,
                 v211,
                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v639 )
              sub_1B64324(0LL);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v639, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1B64324(0LL);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v641->fields._nowTime_5__11, 0LL) )
              {
                v212 = v641->fields._warInfo_5__14;
                if ( !v212 )
                  sub_1B64324(0LL);
                v213 = MapControl_WarInfo__GetEventId(v212, 0LL);
                if ( !v146 )
                  sub_1B64324(v213);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v146, v213, 0LL);
                if ( NowEntity )
                {
                  v215 = v641->fields._warInfo_5__14;
                  if ( !v215 )
                    sub_1B64324(0LL);
                  v216 = MapControl_WarInfo__GetEventId(v215, 0LL);
                  if ( !v148 )
                    sub_1B64324(v216);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v148,
                                        v216,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v218 = v641->fields.__8__1;
                  if ( !v218 )
                    sub_1B64324(MismatchQuestList);
                  v219 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v641->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1B64324(0LL);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v218->fields.warId,
                    v219,
                    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v221 = v641->fields._nowTime_5__11;
          v222 = (System_Int64_array *)sub_1B64170(long___TypeInfo, 3LL);
          v224 = entity;
          if ( !entity )
            sub_1B64324(v222);
          if ( !v222 )
            sub_1B64324(0LL);
          max_length = v222->max_length;
          if ( !max_length )
            sub_1B6432C(v222, v223);
          v222->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1B6432C(v222, v223);
          v222->m_Items[1] = (int64_t)v224[5].monitor;
          if ( max_length <= 2 )
            sub_1B6432C(v222, v223);
          v222->m_Items[2] = (int64_t)v224[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v221, v222, 0LL);
        }
      }
      v226 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v226 )
        sub_1B64324(0LL);
      items = v226->fields._items;
      v228 = (Il2CppObject *)v641->fields._warInfo_5__14;
      v229 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v226->fields._version;
      if ( !items )
        sub_1B64324(v226);
      size = v226->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v226,
          v228,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
      }
      else
      {
        v231 = &items->obj.klass + size;
        v226->fields._size = size + 1;
        v231[4] = (Il2CppClass *)v228;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v231 + 4), (int32_t)v228, v202, v203);
      }
      v300 = v641->fields._warInfo_5__14;
      if ( !v300 )
        sub_1B64324(v232);
      if ( !MasterData_object )
        sub_1B64324(v232);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v300->fields.warId, 0LL);
      v302 = v641;
      v641->fields._mapList_5__15 = List;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v302->fields._mapList_5__15, (int32_t)List, v303, v304);
      v296 = v641;
      mapList_5__15 = v641->fields._mapList_5__15;
      v641->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1B64324(v293);
      mapCount_5__13 = mapList_5__15->max_length;
      v298 = 0;
      v296->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_115;
    case 1:
      v234 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v234 )
        sub_1B64324(this);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1B64324(0LL);
      v236 = SpotRoadMaster__getList(spotRoadMaster_5__7, v234->fields.mapId, 0LL);
      v239 = v236;
      if ( !v236 )
        sub_1B64324(0LL);
      v240 = v236->max_length;
      if ( v240 >= 1 )
      {
        for ( i = 0; i != v240; ++i )
        {
          v242 = sub_1B64314(QuestTree___c__DisplayClass42_4_TypeInfo, v237, v238);
          System_Object___ctor((Il2CppObject *)v242, 0LL);
          if ( i >= v239->max_length )
            sub_1B6432C(v243, v244);
          v246 = v239->m_Items[i];
          if ( !v246 )
            sub_1B64324(v243);
          if ( !v242 )
            sub_1B64324(v243);
          *(_DWORD *)(v242 + 16) = v246->fields.id;
          if ( !_4__this )
            sub_1B64324(v243);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v248 = (System_Predicate_object__o *)sub_1B64314(
                                                 System_Predicate_MapControl_SpotRoadInfo__TypeInfo,
                                                 v244,
                                                 v245);
          System_Predicate_object____ctor(
            v248,
            (Il2CppObject *)v242,
            Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1B64324(v249);
          v250 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v248,
                   (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          if ( v250 != -1 )
          {
            v251 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v251 )
              sub_1B64324(0LL);
            System_Collections_Generic_List_object___RemoveAt(
              v251,
              v250,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v641->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1B64324(0LL);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v242 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v246, &spotRoadInfo, 0LL);
          v255 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v255 )
            sub_1B64324(0LL);
          v256 = (Il2CppObject *)spotRoadInfo;
          v257 = v255->fields._items;
          v258 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v255->fields._version;
          if ( !v257 )
            sub_1B64324(v255);
          v259 = v255->fields._size;
          if ( (unsigned int)v259 >= v257->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v255,
              v256,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
          }
          else
          {
            v260 = &v257->obj.klass + v259;
            v255->fields._size = v259 + 1;
            v260[4] = (Il2CppClass *)v256;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v260 + 4), (int32_t)v256, v253, v254);
          }
        }
      }
      v261 = v641->fields.__8__1;
      if ( !v261 )
        sub_1B64324(v236);
      mapGimmickMaster_5__8 = v641->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1B64324(0LL);
      v263 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v261->fields.mapId, 0LL);
      v267 = v263;
      if ( !v263 )
        sub_1B64324(0LL);
      v268 = v263->max_length;
      if ( v268 >= 1 )
      {
        for ( j = 0; j != v268; ++j )
        {
          v270 = sub_1B64314(QuestTree___c__DisplayClass42_5_TypeInfo, v264, v265);
          System_Object___ctor((Il2CppObject *)v270, 0LL);
          if ( j >= v267->max_length )
            sub_1B6432C(v271, v272);
          v274 = v267->m_Items[j];
          if ( !v274 )
            sub_1B64324(v271);
          if ( !v270 )
            sub_1B64324(v271);
          *(_DWORD *)(v270 + 16) = v274->fields.id;
          if ( !_4__this )
            sub_1B64324(v271);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v276 = (System_Predicate_object__o *)sub_1B64314(
                                                 System_Predicate_MapControl_MapGimmickInfo__TypeInfo,
                                                 v272,
                                                 v273);
          System_Predicate_object____ctor(
            v276,
            (Il2CppObject *)v270,
            Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1B64324(v277);
          v278 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v276,
                   (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          if ( v278 != -1 )
          {
            v279 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v279 )
              sub_1B64324(0LL);
            System_Collections_Generic_List_object___RemoveAt(
              v279,
              v278,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v280 = v641->fields._mapInfo_5__16;
          if ( !v280 )
            sub_1B64324(0LL);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v280, *(_DWORD *)(v270 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v283 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v283 )
            sub_1B64324(0LL);
          v284 = (Il2CppObject *)mapGimmickInfo;
          v285 = v283->fields._items;
          v286 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v283->fields._version;
          if ( !v285 )
            sub_1B64324(v283);
          v287 = v283->fields._size;
          if ( (unsigned int)v287 >= v285->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v283,
              v284,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
          }
          else
          {
            v288 = &v285->obj.klass + v287;
            v283->fields._size = v287 + 1;
            v288[4] = (Il2CppClass *)v284;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v288 + 4), (int32_t)v284, v281, v282);
          }
        }
      }
      v289 = v641;
      v641->fields.__2__current = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v289->fields.__2__current, 0, v265, v266);
      v290 = v641;
      v291 = 2;
      goto LABEL_326;
    case 2:
      v4->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (ServantStatusBattleListViewItem_o *)&v4->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-1].klass) = -1;
      sub_1B6406C(p_mapInfo_5__16, 0, v2, v3);
      v296 = v641;
      mapCount_5__13 = v641->fields._mapCount_5__13;
      v298 = v641->fields._mapIdx_5__12 + 1;
      v641->fields._mapIdx_5__12 = v298;
LABEL_115:
      if ( v298 < mapCount_5__13 )
      {
        v306 = v296->fields._mapList_5__15;
        if ( !v306 )
          sub_1B64324(v293);
        if ( v298 >= v306->max_length )
          sub_1B6432C(v293, v294);
        v307 = v306->m_Items[v298];
        if ( !v307 )
          sub_1B64324(v293);
        v308 = v296->fields.__8__1;
        if ( !v308 )
          sub_1B64324(v293);
        v308->fields.mapId = v307->fields.id;
        v309 = v296->fields._warInfo_5__14;
        if ( !v309 )
          sub_1B64324(v293);
        mapInfoList = (System_Collections_Generic_List_object__o *)v309->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v308->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_MapInfo__TypeInfo, v294, v295);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v308,
              Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v308->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v308->fields.__9__3, (int32_t)_9__3, v312, v313);
          }
          v293 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v294 = (unsigned int)v293;
          if ( (_DWORD)v293 != -1 )
          {
            v314 = v641->fields._warInfo_5__14;
            if ( !v314 )
              sub_1B64324(v293);
            v315 = (System_Collections_Generic_List_object__o *)v314->fields.mapInfoList;
            if ( !v315 )
              sub_1B64324(0LL);
            System_Collections_Generic_List_object___RemoveAt(
              v315,
              v294,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1B64324(v293);
        v316 = v641->fields.__8__1;
        if ( !v316 )
          sub_1B64324(v293);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v316->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_MapInfo__TypeInfo, v294, v295);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v316,
            Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v316->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v316->fields.__9__4, (int32_t)_9__4, v319, v320);
        }
        if ( !allMapInfoList )
          sub_1B64324(v293);
        v321 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v322 = v321;
        if ( (_DWORD)v321 != -1 )
        {
          v323 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v323 )
            sub_1B64324(0LL);
          System_Collections_Generic_List_object___RemoveAt(
            v323,
            v322,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v324 = v641->fields.__8__1;
        if ( !v324 )
          sub_1B64324(v321);
        v325 = v641->fields._warInfo_5__14;
        if ( !v325 )
          sub_1B64324(0LL);
        v326 = MapControl_WarInfo__AddChild(v325, v324->fields.mapId, 0LL);
        v327 = v641;
        v641->fields._mapInfo_5__16 = v326;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v327->fields._mapInfo_5__16, (int32_t)v326, v328, v329);
        v332 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v332 )
          sub_1B64324(0LL);
        v333 = v332->fields._items;
        v334 = (Il2CppObject *)v641->fields._mapInfo_5__16;
        v335 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v332->fields._version;
        if ( !v333 )
          sub_1B64324(v332);
        v336 = v332->fields._size;
        if ( (unsigned int)v336 >= v333->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v332,
            v334,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v335[4] + 192LL) + 112LL));
        }
        else
        {
          v337 = &v333->obj.klass + v336;
          v332->fields._size = v336 + 1;
          v337[4] = (Il2CppClass *)v334;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v337 + 4), (int32_t)v334, v330, v331);
        }
        v439 = v641->fields.__8__1;
        if ( !v439 )
          sub_1B64324(v338);
        spotMaster_5__3 = v641->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1B64324(0LL);
        v441 = SpotMaster__getList(spotMaster_5__3, v439->fields.mapId, 0LL);
        v444 = v441;
        if ( !v441 )
          sub_1B64324(0LL);
        v445 = v441->max_length;
        if ( v445 >= 1 )
        {
          for ( k = 0; k != v445; ++k )
          {
            v447 = sub_1B64314(QuestTree___c__DisplayClass42_2_TypeInfo, v442, v443);
            System_Object___ctor((Il2CppObject *)v447, 0LL);
            if ( k >= v444->max_length )
              sub_1B6432C(v448, v449);
            v451 = v444->m_Items[k];
            if ( !v451 )
              sub_1B64324(v448);
            if ( !v447 )
              sub_1B64324(v448);
            *(_DWORD *)(v447 + 16) = v451->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v453 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_SpotInfo__TypeInfo, v449, v450);
            System_Predicate_object____ctor(
              v453,
              (Il2CppObject *)v447,
              Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1B64324(v454);
            v455 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v453,
                     (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            if ( v455 != -1 )
            {
              v456 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v456 )
                sub_1B64324(0LL);
              System_Collections_Generic_List_object___RemoveAt(
                v456,
                v455,
                (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v457 = v641->fields._mapInfo_5__16;
            if ( !v457 )
              sub_1B64324(0LL);
            spotInfo = MapControl_MapInfo__AddChild(v457, *(_DWORD *)(v447 + 16), 0LL);
            QuestTree__SetupSpotInfo(_4__this, v451, &spotInfo, 0LL);
            v460 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v460 )
              sub_1B64324(0LL);
            v461 = (Il2CppObject *)spotInfo;
            v462 = v460->fields._items;
            v463 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v460->fields._version;
            if ( !v462 )
              sub_1B64324(v460);
            v464 = v460->fields._size;
            if ( (unsigned int)v464 >= v462->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v460,
                v461,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v463[4] + 192LL) + 112LL));
            }
            else
            {
              v465 = &v462->obj.klass + v464;
              v460->fields._size = v464 + 1;
              v465[4] = (Il2CppClass *)v461;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v465 + 4), (int32_t)v461, v458, v459);
            }
          }
        }
        v466 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v641->fields._mapInfo_5__16,
                 v641->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v467 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v466,
                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v471 = (System_Collections_Generic_IEnumerable_TSource__o *)v467;
        if ( !v467 )
          sub_1B64324(0LL);
        if ( *(_QWORD *)&v467->max_length )
        {
          v472 = sub_1B64314(QuestTree___c__DisplayClass42_3_TypeInfo, v468, v469);
          System_Object___ctor((Il2CppObject *)v472, 0LL);
          v475 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v475 = QuestTree___c_TypeInfo;
          }
          _9__42_6 = (System_Func_object__int__o *)v475->static_fields->__9__42_6;
          if ( !_9__42_6 )
          {
            if ( !v475->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v475);
              v475 = QuestTree___c_TypeInfo;
            }
            v477 = (Il2CppObject *)v475->static_fields->__9;
            _9__42_6 = (System_Func_object__int__o *)sub_1B64314(
                                                       System_Func_MapControl_SpotInfo__int__TypeInfo,
                                                       v473,
                                                       v474);
            System_Func_object__int____ctor(
              _9__42_6,
              v477,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__42_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__42_6;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_6, (int32_t)_9__42_6, v479, v480);
          }
          v481 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v471,
                                                                  (System_Func_TSource__TResult__o *)_9__42_6,
                                                                  (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v484 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v482,
                                                                v483);
          System_Collections_Generic_HashSet_int____ctor_53885596(
            v484,
            v481,
            (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
          if ( !v472 )
            sub_1B64324(v485);
          *(_QWORD *)(v472 + 16) = v484;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v472 + 16), (int32_t)v484, v486, v487);
          v488 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v491 = (System_Func_object__bool__o *)sub_1B64314(System_Func_MapControl_SpotInfo__bool__TypeInfo, v489, v490);
          System_Func_object__bool____ctor(
            v491,
            (Il2CppObject *)v472,
            Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v488,
            (System_Func_T__bool__o *)v491,
            (const MethodInfo_2E28D1C *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v492 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v492 )
            sub_1B64324(0LL);
          System_Collections_Generic_List_object___AddRange(
            v492,
            (System_Collections_Generic_IEnumerable_T__o *)v471,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v493 = v641;
        v641->fields.__2__current = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v493->fields.__2__current, 0, v469, v470);
        result = 1;
        v641->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1B64324(v293);
      v339 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v340 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v340 = QuestTree___c_TypeInfo;
      }
      _9__42_2 = (System_Comparison_T__o *)v340->static_fields->__9__42_2;
      if ( !_9__42_2 )
      {
        if ( !v340->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v340);
          v340 = QuestTree___c_TypeInfo;
        }
        v342 = (Il2CppObject *)v340->static_fields->__9;
        _9__42_2 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_MapControl_WarInfo__TypeInfo, v294, v295);
        System_Comparison_object____ctor(
          _9__42_2,
          v342,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__,
          0LL);
        v343 = QuestTree___c_TypeInfo->static_fields;
        v343->__9__42_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__42_2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v343->__9__42_2, (int32_t)_9__42_2, v344, v345);
      }
      if ( !v339 )
        sub_1B64324(v293);
      System_Collections_Generic_List_object___Sort_55243320(
        v339,
        _9__42_2,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v346 = v641;
      v641->fields.__8__1 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v346->fields.__8__1, 0, v347, v348);
      v349 = v641;
      v641->fields._warInfo_5__14 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v349->fields._warInfo_5__14, 0, v350, v351);
      v352 = v641;
      v641->fields._mapList_5__15 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v352->fields._mapList_5__15, 0, v353, v354);
      v357 = (Il2CppObject *)sub_1B64314(QuestTree___c__DisplayClass42_6_TypeInfo, v355, v356);
      System_Object___ctor(v357, 0LL);
      v358 = v641;
      v641->fields.__8__3 = (struct QuestTree___c__DisplayClass42_6_o *)v357;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v358->fields.__8__3, (int32_t)v357, v359, v360);
      v361 = v641->fields._nowTime_5__11;
      v364 = (MapControl_WarInfo_o *)sub_1B64314(MapControl_WarInfo_TypeInfo, v362, v363);
      MapControl_WarInfo___ctor(v364, v361, 0LL);
      v365 = v641;
      v641->fields._warInfo_5__14 = v364;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v365->fields._warInfo_5__14, (int32_t)v364, v366, v367);
      v370 = (MapControl_MapInfo_o *)sub_1B64314(MapControl_MapInfo_TypeInfo, v368, v369);
      MapControl_MapInfo___ctor(v370, 0LL);
      v371 = v641;
      v641->fields._mapInfo_5__16 = v370;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v371->fields._mapInfo_5__16, (int32_t)v370, v372, v373);
      v376 = (MapControl_SpotInfo_o *)sub_1B64314(MapControl_SpotInfo_TypeInfo, v374, v375);
      MapControl_SpotInfo___ctor(v376, 0LL);
      v377 = v641;
      v641->fields._spotInfo_5__17 = v376;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v377->fields._spotInfo_5__17, (int32_t)v376, v378, v379);
      v382 = (WarEntity_o *)sub_1B64314(WarEntity_TypeInfo, v380, v381);
      WarEntity___ctor(v382, 0LL);
      v383 = v641;
      v641->fields._warEnt_5__18 = v382;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v383->fields._warEnt_5__18, (int32_t)v382, v384, v385);
      v386 = v641->fields._dataManager_5__2;
      if ( !v386 )
        sub_1B64324(0LL);
      v387 = DataManager__GetMasterData_object_(
               v386,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v388 = v641;
      v641->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v387;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v388->fields._userQuestMaster_5__19, (int32_t)v387, v389, v390);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v392 = v641;
      _8__3 = v641->fields.__8__3;
      if ( !_8__3 )
        sub_1B64324(Master_object);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v392->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v641 )
        sub_1B64324(isSavedMemoryMode);
      if ( isSavedMemoryMode )
        v397 = 500;
      else
        v397 = 5000;
      v398 = v641->fields.__8__3;
      v641->fields._breakInterval_5__22 = v397;
      v399 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v395,
                                                         v396);
      System_Collections_Generic_List_int____ctor(
        v399,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v398 )
        sub_1B64324(v400);
      v398->fields.spotInfoList = v399;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v398->fields, (int32_t)v399, v401, v402);
      v641->fields._cnt_5__23 = 0;
      v403 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v403 )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        v631,
        v403,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v404 = v641;
      v405 = *(_OWORD *)&v631[0].fields._list;
      p__7__wrap24 = (ServantStatusBattleListViewItem_o *)&v641->fields.__7__wrap24;
      v631[1] = v631[0];
      v641->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v631[0].fields._current;
      *(_OWORD *)&v404->fields.__7__wrap24.fields._list = v405;
      sub_1B6406C(p__7__wrap24, 0, v407, v408);
      v4 = v641;
LABEL_163:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v410 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v411 = v641;
        if ( !v410 )
          break;
        current = v641->fields.__7__wrap24.fields._current;
        ++v641->fields._cnt_5__23;
        if ( !current )
          sub_1B64324(v411);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1B64324(0LL);
        v4 = v641;
        v416 = v641->fields.__8__2;
        if ( !v416 )
          sub_1B64324(Mine);
        if ( Mine->fields.warId == v416->fields.targetWarId )
        {
          v417 = v641->fields.__8__3;
          if ( !v417 )
            sub_1B64324(Mine);
          spotInfoList = v417->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1B64324(0LL);
          spotId = current->fields.spotId;
          v420 = spotInfoList->fields._items;
          v421 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v420 )
            sub_1B64324(spotInfoList);
          v422 = spotInfoList->fields._size;
          if ( (unsigned int)v422 >= v420->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v421[4] + 192LL) + 112LL));
            v4 = v641;
          }
          else
          {
            spotInfoList->fields._size = v422 + 1;
            v420->m_Items[v422 + 1] = spotId;
          }
        }
        HIDWORD(v423) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v423) = HIDWORD(v423);
        if ( (unsigned int)(v423 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v414, v415);
          v290 = v641;
          v291 = 3;
LABEL_326:
          v290->fields.__1__state = v291;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42____m__Finally1(v641, v409);
      v424 = v641;
      questMaster_5__5 = (DataMasterBase_o *)v641->fields._questMaster_5__5;
      v641->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v424->fields.__7__wrap24.fields._index = 0LL;
      v424->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1B64324(0LL);
      Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                              questMaster_5__5,
                                                                              (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v427 = (Il2CppObject *)v641->fields.__8__3;
      v430 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestEntity__bool__TypeInfo, v428, v429);
      System_Func_object__bool____ctor(
        v430,
        v427,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v431 = System_Linq_Enumerable__Where_object_(
               Entitys_object,
               (System_Func_TSource__bool__o *)v430,
               (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v432 = System_Linq_Enumerable__ToArray_object_(
               v431,
               (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v433 = v641;
      v641->fields._questList_5__24 = (struct QuestEntity_array *)v432;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v433->fields._questList_5__24, (int32_t)v432, v434, v435);
      v436 = v641;
      v641->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v436->fields._questList_5__24,
                       (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v641;
      v438 = v641->fields._mapCount_5__13;
      v641->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_163;
    case 4:
      v233 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_449;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1B64324(this);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v438 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v4->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1B64324(mapIdx_5__12);
    if ( v438 >= questList_5__24->max_length )
      sub_1B6432C(mapIdx_5__12, method);
    v496 = questList_5__24->m_Items[v438];
    if ( !v496 )
      sub_1B64324(mapIdx_5__12);
    v497 = v4->fields.__8__3;
    if ( !v497 )
      sub_1B64324(mapIdx_5__12);
    v497->fields.questId = v496->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v500 = v641->fields.__8__3;
    if ( !v500 )
      sub_1B64324(UserId);
    if ( !userQuestMaster_5__19 )
      sub_1B64324(UserId);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__19, &v635, UserId, v500->fields.questId, 0LL) )
    {
      if ( !v635 )
        sub_1B64324(0LL);
      QuestPhase = UserQuestEntity__getQuestPhase(v635, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_39146476 = (MapEntity_o *)QuestEntity__getSpotId_39146476(v496, QuestPhase + 1, 0LL);
    v505 = v641;
    v506 = v641->fields.__8__3;
    if ( !v506 )
      sub_1B64324(SpotId_39146476);
    if ( v506->fields.nowSpotId == (_DWORD)SpotId_39146476 )
    {
      if ( !_4__this )
        sub_1B64324(SpotId_39146476);
    }
    else
    {
      v506->fields.nowSpotId = (int)SpotId_39146476;
      if ( !_4__this )
        sub_1B64324(SpotId_39146476);
      v507 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v506->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_SpotInfo__TypeInfo, warId, v504);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v506,
          Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v506->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v506->fields.__9__12, (int32_t)_9__12, v509, v510);
      }
      if ( !v507 )
        sub_1B64324(SpotId_39146476);
      v511 = System_Collections_Generic_List_object___Find(
               v507,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v505->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v511;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v505->fields._spotInfo_5__17, (int32_t)v511, v512, v513);
      spotInfo_5__17 = v641->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1B64324(0LL);
      SpotId_39146476 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_39146476;
      if ( v641->fields._nowMapId_5__20 != (_DWORD)SpotId_39146476 )
      {
        v641->fields._nowMapId_5__20 = (int)SpotId_39146476;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_39146476, 0LL);
        v516 = v641;
        v641->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v516->fields._mapInfo_5__16,
          (int32_t)MapInfoByMapID,
          v517,
          v518);
        v519 = v641->fields._mapInfo_5__16;
        if ( !v519 )
          sub_1B64324(0LL);
        SpotId_39146476 = MapControl_MapInfo__GetMine(v519, 0LL);
        if ( !SpotId_39146476 )
          sub_1B64324(0LL);
        warId = (unsigned int)SpotId_39146476->fields.warId;
        if ( v641->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v641->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v521 = v641;
          v641->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v521->fields._warInfo_5__14,
            (int32_t)WarInfoByWarID,
            v522,
            v523);
          v524 = v641->fields._warInfo_5__14;
          if ( !v524 )
            sub_1B64324(0LL);
          v525 = MapControl_WarInfo__GetMine(v524, 0LL);
          v526 = v641;
          v641->fields._warEnt_5__18 = v525;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v526->fields._warEnt_5__18, (int32_t)v525, v527, v528);
        }
      }
    }
    v529 = v641->fields.__8__3;
    if ( !v529 )
      sub_1B64324(SpotId_39146476);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v529->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_QuestInfo__TypeInfo, warId, v504);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v529,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v529->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v529->fields.__9__13, (int32_t)_9__13, v532, v533);
    }
    if ( !allQuestInfoList )
      sub_1B64324(SpotId_39146476);
    v534 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    if ( v534 != -1 )
    {
      v535 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v535 )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___RemoveAt(
        v535,
        v534,
        (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v536 = v641->fields._warInfo_5__14;
    if ( !v635 )
    {
      if ( !v536 )
        sub_1B64324(0LL);
      goto LABEL_371;
    }
    if ( !v536 )
      sub_1B64324(0LL);
    MapControl_WarInfo__SetStatusCheckFlag(v536, 1, 0, 0LL);
    if ( !v635 )
      sub_1B64324(0LL);
    HasStatus = UserQuestEntity__HasStatus(v635, 8, 0LL);
    if ( !HasStatus )
    {
      v538 = v641->fields._warInfo_5__14;
      if ( !v538 )
        sub_1B64324(0LL);
      goto LABEL_373;
    }
    if ( !v635 )
      sub_1B64324(HasStatus);
    if ( v635->fields.challengeNum >= 1 )
    {
      v538 = v641->fields._warInfo_5__14;
      if ( !v538 )
        sub_1B64324(0LL);
LABEL_373:
      MapControl_WarInfo__SetStatusCheckFlag(v538, 4, 0, 0LL);
    }
    if ( !v635 )
      sub_1B64324(0LL);
    v541 = UserQuestEntity__getClearNum(v635, 0LL) < 1;
    v536 = v641->fields._warInfo_5__14;
    if ( v541 )
    {
      if ( !v536 )
        sub_1B64324(0LL);
LABEL_371:
      MapControl_WarInfo__SetStatusCheckFlag(v536, 2, 0, 0LL);
      v540 = 0;
      goto LABEL_385;
    }
    if ( !v536 )
      sub_1B64324(0LL);
    v539 = MapControl_WarInfo__GetMine(v536, 0LL);
    if ( !v539 )
      sub_1B64324(0LL);
    v542 = v641->fields.__8__3;
    if ( !v542 )
      sub_1B64324(v539);
    if ( v539->fields.lastQuestId == v542->fields.questId )
    {
      v543 = v641->fields._warInfo_5__14;
      if ( !v543 )
        sub_1B64324(0LL);
      v540 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v543, 8, 1, 0LL);
    }
    else
    {
      v540 = 1;
    }
LABEL_385:
    v544 = v641->fields.__8__3;
    if ( !v544 )
      sub_1B64324(v539);
    v545 = v641->fields._spotInfo_5__17;
    if ( !v545 )
      sub_1B64324(0LL);
    v546 = MapControl_SpotInfo__AddChild(v545, v544->fields.questId, 0LL);
    v549 = v641->fields._warInfo_5__14;
    if ( !v549 )
      sub_1B64324(v546);
    v550 = v546;
    if ( !v546 )
      sub_1B64324(0LL);
    v551 = v549->fields.warId;
    v546->fields._WarInfo_k__BackingField = v549;
    v546->fields.warId = v551;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v546->fields._WarInfo_k__BackingField, (int32_t)v549, v547, v548);
    v552 = v641->fields._spotInfo_5__17;
    v550->fields._SpotInfo_k__BackingField = v552;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v550->fields._SpotInfo_k__BackingField, (int32_t)v552, v553, v554);
    v550->fields.endTime = QuestTree__GetEndTime(_4__this, v550, 0LL);
    warEnt_5__18 = v641->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1B64324(0LL);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v557 = v641->fields._warEnt_5__18;
      if ( !v557 )
        sub_1B64324(IsStartTypeQuest);
      v558 = v641->fields.__8__3;
      if ( !v558 )
        sub_1B64324(IsStartTypeQuest);
      if ( v557->fields.targetId == v558->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v641->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_404;
      }
    }
    v559 = v641->fields._warEnt_5__18;
    if ( !v559 )
      sub_1B64324(IsStartTypeQuest);
    v560 = v641->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v560 )
      sub_1B64324(0LL);
    v561 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v560,
             v559->fields.id,
             &value,
             (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v561 )
    {
      v562 = v641->fields.__8__3;
      if ( !v562 )
        sub_1B64324(v561);
      if ( !value )
        sub_1B64324(0LL);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v562->fields.questId,
             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_404:
        MapControl_QuestInfo__SetDispType(v550, 0, 0, 0, 0LL, 0, 0LL);
        v550->fields.touchType = 0;
LABEL_405:
        v564 = 1;
        goto LABEL_406;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v496, v550, v641->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_405;
    v563 = v641->fields._warInfo_5__14;
    if ( !v563 )
      sub_1B64324(0LL);
    MapControl_WarInfo__SetStatusCheckFlag(v563, 1, 0, 0LL);
    v564 = 0;
LABEL_406:
    if ( MapControl_QuestInfo__IsDisaplayable(v550, 0LL) )
    {
      if ( ((v540 | v564) & 1) == 0 )
      {
        v565 = v641->fields._spotInfo_5__17;
        if ( !v565 )
          sub_1B64324(0LL);
        MapControl_SpotInfo__AddQuestCount(v565, 1, 0LL);
        v566 = v641->fields._spotInfo_5__17;
        if ( !v566 )
          sub_1B64324(0LL);
        MapControl_SpotInfo__AddAvailableQuestId(v566, v550->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v550, 0LL) == 1 )
      {
        v567 = MapControl_QuestInfo__GetMine(v550, 0LL);
        if ( !v567 )
          sub_1B64324(0LL);
        HasFlag = QuestEntity__HasFlag(v567, 0x400000000000LL, 0LL);
        v569 = v641;
        if ( !HasFlag )
        {
          v570 = v641->fields._spotInfo_5__17;
          if ( !v570 )
            sub_1B64324(HasFlag);
          v570->fields._IsNext_k__BackingField = 1;
        }
        v571 = v569->fields._mapInfo_5__16;
        if ( !v571 )
          sub_1B64324(HasFlag);
        v571->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v550, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v573 = v641;
        v574 = v641->fields._spotInfo_5__17;
        if ( !v574 )
          sub_1B64324(IsDisplayQuestNextIcon);
        v574->fields._IsNext_k__BackingField = 1;
        v575 = v573->fields._mapInfo_5__16;
        if ( !v575 )
          sub_1B64324(IsDisplayQuestNextIcon);
        v575->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v496, 0x8000000000LL, 0LL) )
      {
        v576 = v641->fields._spotInfo_5__17;
        if ( !v576 )
          sub_1B64324(0LL);
        MapControl_SpotInfo__AddFreeQuestCount(v576, 1, 0LL);
      }
    }
    v577 = v635;
    if ( v635 )
    {
      v577 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v635, 8, 0LL);
      if ( ((unsigned __int8)v577 & 1) != 0 )
      {
        if ( !v635 )
          sub_1B64324(v577);
        v578 = v635->fields.challengeNum == 0;
      }
      else
      {
        v578 = 0;
      }
    }
    else
    {
      v578 = 1;
    }
    v550->fields.isNew = v578;
    v550->fields.questPhase = QuestPhase;
    v579 = v641->fields.__8__3;
    if ( !v579 )
      sub_1B64324(v577);
    questPickupMaster_5__9 = v641->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1B64324(0LL);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v579->fields.questId, 0LL);
    v550->fields.pickupPriority = Priority;
    v582 = v641->fields.__8__3;
    if ( !v582 )
      sub_1B64324(Priority);
    questPhaseMaster_5__6 = v641->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1B64324(0LL);
    v584 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v582->fields.questId, 0LL);
    v587 = v584;
    if ( !v584 )
      sub_1B64324(0LL);
    v588 = v584[3];
    v589 = v588 - 1;
    if ( (int)v588 >= 1 )
    {
      v590 = 0;
      while ( 1 )
      {
        v591 = v587[v590 + 4];
        if ( !v591 )
          sub_1B64324(v584);
        v584 = MapControl_QuestInfo__AddChild(v550, *(_DWORD *)(v591 + 16), *(_DWORD *)(v591 + 20), 0LL);
        if ( v589 == v590 )
          break;
        if ( (unsigned int)++v590 >= *((_DWORD *)v587 + 6) )
          sub_1B6432C(v584, v592);
      }
    }
    v593 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v593 )
      sub_1B64324(0LL);
    v594 = v593->fields._items;
    v595 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v593->fields._version;
    if ( !v594 )
      sub_1B64324(v593);
    v596 = v593->fields._size;
    if ( (unsigned int)v596 >= v594->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v593,
        (Il2CppObject *)v550,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v595[4] + 192LL) + 112LL));
    }
    else
    {
      v597 = &v594->obj.klass + v596;
      v593->fields._size = v596 + 1;
      v597[4] = (Il2CppClass *)v550;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v597 + 4), (int32_t)v550, v585, v586);
    }
    v4 = v641;
    v233 = v641->fields._mapCount_5__13;
    if ( v233 && !(v233 % v641->fields._breakInterval_5__22) )
    {
      v641->fields.__2__current = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v2, v598);
      v290 = v641;
      v291 = 4;
      goto LABEL_326;
    }
LABEL_449:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    v438 = v233 + 1;
    v4->fields._mapCount_5__13 = v438;
  }
  if ( !_4__this )
    sub_1B64324(mapIdx_5__12);
  v599 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v600 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v600 = QuestTree___c_TypeInfo;
  }
  _9__42_11 = (System_Comparison_T__o *)v600->static_fields->__9__42_11;
  if ( !_9__42_11 )
  {
    if ( !v600->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v600);
      v600 = QuestTree___c_TypeInfo;
    }
    v602 = (Il2CppObject *)v600->static_fields->__9;
    _9__42_11 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_MapControl_QuestInfo__TypeInfo, method, v2);
    System_Comparison_object____ctor(
      _9__42_11,
      v602,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__,
      0LL);
    v603 = QuestTree___c_TypeInfo->static_fields;
    v603->__9__42_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__42_11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v603->__9__42_11, (int32_t)_9__42_11, v604, v605);
  }
  if ( !v599 )
    sub_1B64324(mapIdx_5__12);
  System_Collections_Generic_List_object___Sort_55243320(
    v599,
    _9__42_11,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v606 = v641;
  v641->fields.__8__3 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v606->fields.__8__3, 0, v607, v608);
  v609 = v641;
  v641->fields._warInfo_5__14 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v609->fields._warInfo_5__14, 0, v610, v611);
  v612 = v641;
  v641->fields._mapInfo_5__16 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v612->fields._mapInfo_5__16, 0, v613, v614);
  v615 = v641;
  v641->fields._spotInfo_5__17 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v615->fields._spotInfo_5__17, 0, v616, v617);
  v618 = v641;
  v641->fields._warEnt_5__18 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v618->fields._warEnt_5__18, 0, v619, v620);
  v621 = v641;
  v641->fields._userQuestMaster_5__19 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v621->fields._userQuestMaster_5__19, 0, v622, v623);
  v624 = v641;
  v641->fields._questList_5__24 = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v624->fields._questList_5__24, 0, v625, v626);
  v627 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v627 )
    sub_1B64324(0LL);
  CommonUI__SetLoadMode((CommonUI_o *)v627, 0, 0LL);
  _4__this->fields.isInit = 1;
  v630 = v641;
  if ( v641->fields.endCallback )
  {
    v641->fields.__2__current = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v630->fields.__2__current, 0, v628, v629);
    v290 = v641;
    v291 = 5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  if ( (byte_49F968F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_49F968F = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}