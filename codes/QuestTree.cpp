void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  MapControl_RootInfo_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A58227 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    sub_1B885B0(&MapControl_RootInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree___ctor__);
    byte_4A58227 = 1;
  }
  v3 = (MapControl_RootInfo_o *)sub_1B887FC(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v3, 0LL);
  this->fields.mapControlRootInfo = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allQuestInfoList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allSpotInfoList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allSpotRoadInfoList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allMapGimmickInfoList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allMapInfoList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.allWarInfoList, (int32_t)v21, v22, v23);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questReleaseEntList, (int32_t)v24, v25, v26);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3739C30 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_34121164(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_34118192(
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

  if ( (byte_4A58224 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58224 = 1;
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
    v8 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v9 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1B88658(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v11 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v11 || (*(_QWORD *)(Time + 32) = v9->fields.startedAt, (_DWORD)v11 == 1) )
      sub_1B88814(Time, v7);
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
      sub_1B8880C(Time, v7);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v9, 0LL)
                && MapGimmickEntity__IsEnableTime(v9, v8, 0LL);
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
  int64_t NoticeAt; // x0
  __int64 v10; // x1
  bool v11; // w24
  int64_t Time; // x23
  __int64 v13; // x25
  __int64 v14; // x8
  int64_t *v15; // x9
  int64_t v16; // x10
  int v17; // w25
  _BOOL4 v18; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *MasterData_object; // x21
  ServantLimitImageMaster_o *v23; // x21
  int32_t id; // w22
  bool IsCommonReleaseMultiClear; // w0
  int32_t forceOperation; // w20
  int v27; // w22
  int32_t v28; // w20
  int32_t closedMessageId; // w5
  int64_t value; // x4
  int32_t type; // w2
  int32_t targetId; // w3
  int32_t v33; // w1
  MapControl_QuestInfo_o *v34; // x0
  _BOOL4 v35; // w8
  UserQuestEntity_o *v37; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4A58220 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestTree_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58220 = 1;
  }
  questReleaseNG = 0LL;
  v37 = 0LL;
  entity = 0LL;
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !NoticeAt )
    goto LABEL_73;
  v11 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)NoticeAt,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v13 = sub_1B88658(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v13 )
    goto LABEL_73;
  if ( !*(_DWORD *)(v13 + 24)
    || (*(_QWORD *)(v13 + 32) = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL),
                                          *(_DWORD *)(v13 + 24) <= 1u)
    || (*(_QWORD *)(v13 + 40) = NoticeAt,
        NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL),
        v14 = *(_QWORD *)(v13 + 24),
        (unsigned int)v14 <= 2) )
  {
    sub_1B88814(NoticeAt, v10);
  }
  *(_QWORD *)(v13 + 48) = NoticeAt;
  if ( (int)v14 >= 1 )
  {
    v14 = (unsigned int)v14;
    v15 = (int64_t *)(v13 + 32);
    do
    {
      v16 = *v15;
      if ( *v15 > Time && v8->fields.forceUpdateTime > v16 )
        v8->fields.forceUpdateTime = v16;
      --v14;
      ++v15;
    }
    while ( v14 );
  }
  v17 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
    goto LABEL_18;
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v17 = 3;
  else
    v17 = 1;
  if ( v11 || HasFlag )
  {
    v18 = !HasFlag;
    goto LABEL_55;
  }
  if ( !questReleaseNG
    || !questReleaseNG->fields.closedMessageId
    || QuestEntity__getClosedAt(questEnt, 0LL) <= Time
    || QuestEntity__getNoticeAt(questEnt, 0LL) > Time )
  {
    NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !NoticeAt )
      goto LABEL_73;
    NoticeAt = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)NoticeAt,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !NoticeAt )
      goto LABEL_73;
    IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)NoticeAt,
                               &entity,
                               warId,
                               (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
            NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !NoticeAt )
              goto LABEL_73;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)NoticeAt,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NoticeAt = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              goto LABEL_73;
            if ( UserQuestMaster__TryGetEntity(
                   (UserQuestMaster_o *)MasterData_object,
                   &v37,
                   NoticeAt,
                   questEnt->fields.id,
                   0LL) )
            {
              NoticeAt = (int64_t)v37;
              if ( !v37 )
                goto LABEL_73;
              if ( UserQuestEntity__HasStatus(v37, 8, 0LL) )
                goto LABEL_54;
            }
LABEL_45:
            v18 = 0;
            v17 = 0;
            goto LABEL_55;
          }
        }
      }
    }
    NoticeAt = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v21);
    if ( !NoticeAt )
      goto LABEL_73;
    if ( !clsQuestCheck__IsQuestClear((clsQuestCheck_o *)NoticeAt, questEnt->fields.id, 0, 0LL)
      || questEnt->fields.afterClear != 5 )
    {
      goto LABEL_45;
    }
LABEL_54:
    v18 = 0;
    v17 = 2;
    goto LABEL_55;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NoticeAt = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( questEnt->fields.type != 3 )
    goto LABEL_54;
  v23 = (ServantLimitImageMaster_o *)NoticeAt;
  if ( !NoticeAt )
    goto LABEL_73;
  id = questEnt->fields.id;
  v17 = 2;
  if ( !ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)NoticeAt, id, 0LL) )
  {
LABEL_18:
    v18 = 0;
    goto LABEL_55;
  }
  IsCommonReleaseMultiClear = ServantLimitImageMaster__IsCommonReleaseMultiClear(v23, id, 0LL);
  v18 = 0;
  if ( IsCommonReleaseMultiClear )
    v17 = 0;
  else
    v17 = 2;
LABEL_55:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  NoticeAt = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (NoticeAt & 1) != 0 )
    v27 = 1;
  else
    v27 = forceOperation;
  if ( v27 )
    v28 = v27 != 2;
  else
    v28 = v17;
  if ( questReleaseNG && v28 == 2 )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v33 = 2;
      v34 = questInfo;
      goto LABEL_69;
    }
LABEL_73:
    sub_1B8880C(NoticeAt, v10);
  }
  if ( !questInfo )
    goto LABEL_73;
  v34 = questInfo;
  v33 = v28;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_69:
  MapControl_QuestInfo__SetDispType(v34, v33, type, targetId, value, closedMessageId, 0LL);
  if ( v27 )
    v35 = v27 != 2;
  else
    v35 = v18;
  questInfo->fields.touchType = v35;
  return v28;
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

  return QuestTree__CheckSpotCond_34121164(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckSpotCond_34121164(
        QuestTree_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  QuestTree_o *v13; // x0
  TerminalSceneComponent_c *v14; // x0
  UnityEngine_Object_o *mInstance; // x25
  const MethodInfo *v16; // x1
  int64_t Instance; // x0
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  int v21; // w8
  bool IsExistCommand; // w22
  __int64 v23; // x0
  __int64 v24; // x0
  UnityEngine_Object_o *v25; // x25
  bool IsMissionAchive; // w0
  QuestEntity_o *v27; // x19
  int32_t WarId; // w0
  const MethodInfo *v29; // x4
  __int64 v30; // x8
  int64_t v31; // x20
  int32_t v32; // w23
  unsigned __int64 v33; // x24
  int32_t v34; // w21
  __int64 v35; // x8
  int64_t v36; // x20
  int32_t v37; // w23
  unsigned __int64 v38; // x24
  int32_t v39; // w21
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  __int64 v42; // x8
  int64_t v43; // x20
  unsigned __int64 v44; // x24
  int32_t v45; // w21
  int v46; // w21
  int v47; // w20
  int64_t v48; // x2
  int32_t v49; // w0
  int32_t v50; // w0
  int32_t v51; // w8
  bool v52; // cc
  int32_t v53; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A58223 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A58223 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
LABEL_6:
    LOBYTE(v13) = 1;
    return (unsigned __int8)v13 & 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_34;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v18 = **(_QWORD **)(Instance + 184);
  if ( !v18 )
    goto LABEL_176;
  if ( !*(_QWORD *)(v18 + 456) )
    goto LABEL_34;
  if ( !*(_DWORD *)(Instance + 224) )
    j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v19 = **(_QWORD **)(Instance + 184);
  if ( !v19 )
    goto LABEL_176;
  v20 = *(_QWORD *)(v19 + 456);
  if ( !v20 )
    goto LABEL_176;
  v21 = *(_DWORD *)(v20 + 16);
  if ( !v21 )
  {
LABEL_34:
    v23 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1BDA48C(v23);
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1BDA48C(v24);
    v25 = **(UnityEngine_Object_o ***)(v24 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      v21 = 0;
      IsExistCommand = 1;
      goto LABEL_44;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v21 = 0;
      goto LABEL_44;
    }
LABEL_176:
    sub_1B8880C(Instance, v16);
  }
  IsExistCommand = 0;
LABEL_44:
  v13 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v13 & 1;
    case 2:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_176;
      if ( targetValue )
        LOBYTE(v13) = clsQuestCheck__IsQuestPhaseClear(
                        (clsQuestCheck_o *)Instance,
                        targetId,
                        targetValue,
                        IsExistCommand,
                        0LL);
      else
        LOBYTE(v13) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v13 & 1;
    case 3:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
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
      if ( v21 == targetId )
        goto LABEL_52;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 6:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_176;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL) )
        goto LABEL_6;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v27 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0LL);
      LOBYTE(v13) = QuestTree__CheckQuestOpen(this, v27, 0LL, WarId, v29) == 1;
      return (unsigned __int8)v13 & 1;
    case 7:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v30 = *(_QWORD *)(Instance + 24);
      v31 = Instance;
      if ( (int)v30 >= 1 )
      {
        v32 = 0;
        v33 = 0LL;
        while ( v33 < (unsigned int)v30 )
        {
          v34 = *(_DWORD *)(v31 + 32 + 4 * v33);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v34, IsExistCommand, 0LL);
          LODWORD(v30) = *(_DWORD *)(v31 + 24);
          ++v33;
          v32 += Instance & 1;
          if ( (__int64)v33 >= (int)v30 )
            goto LABEL_167;
        }
        goto LABEL_177;
      }
      v32 = 0;
LABEL_167:
      if ( targetValue <= 1 )
        v53 = 1;
      else
        v53 = targetValue;
      LOBYTE(v13) = v32 < v53;
      return (unsigned __int8)v13 & 1;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v35 = *(_QWORD *)(Instance + 24);
      v36 = Instance;
      if ( (int)v35 < 1 )
        goto LABEL_150;
      v37 = 0;
      v38 = 0LL;
      while ( v38 < (unsigned int)v35 )
      {
        v39 = *(_DWORD *)(v36 + 32 + 4 * v38);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
        if ( !Instance )
          goto LABEL_176;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v39, IsExistCommand, 0LL);
        LODWORD(v35) = *(_DWORD *)(v36 + 24);
        ++v38;
        v37 += Instance & 1;
        if ( (__int64)v38 >= (int)v35 )
          goto LABEL_151;
      }
      goto LABEL_177;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
      v52 = num < targetValue;
LABEL_160:
      LOBYTE(v13) = !v52;
      return (unsigned __int8)v13 & 1;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_176;
      LOBYTE(v13) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v13 & 1;
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v42 = *(_QWORD *)(Instance + 24);
      v43 = Instance;
      if ( (int)v42 >= 1 )
      {
        v37 = 0;
        v44 = 0LL;
        while ( v44 < (unsigned int)v42 )
        {
          v45 = *(_DWORD *)(v43 + 32 + 4 * v44);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v16);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v45, IsExistCommand, 0LL);
          LODWORD(v42) = *(_DWORD *)(v43 + 24);
          ++v44;
          v37 += Instance & 1;
          if ( (__int64)v44 >= (int)v42 )
            goto LABEL_151;
        }
LABEL_177:
        sub_1B88814(Instance, v16);
      }
LABEL_150:
      v37 = 0;
LABEL_151:
      if ( targetValue <= 1 )
        v51 = 1;
      else
        v51 = targetValue;
      v52 = v37 < v51;
      goto LABEL_160;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v13 & 1;
    case 13:
      v46 = targetId / 100;
      v47 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsEventRaceGoalScriptPlayed(v46, v47, targetValue, 0LL);
      return (unsigned __int8)v13 & 1;
    case 16:
      if ( v21 == targetId )
        goto LABEL_6;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0LL);
LABEL_165:
      LOBYTE(v13) = !IsMissionAchive;
      return (unsigned __int8)v13 & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsQuestAvailable(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 18:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 83;
      goto LABEL_174;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 84;
      goto LABEL_174;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 85;
      goto LABEL_174;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 86;
      goto LABEL_174;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 87;
      goto LABEL_174;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 88;
      goto LABEL_174;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 89;
      goto LABEL_174;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 90;
      goto LABEL_174;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 91;
      goto LABEL_174;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 23;
      goto LABEL_174;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 76;
      goto LABEL_174;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v13) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v13 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v48 = targetValue;
      v49 = 97;
      goto LABEL_174;
    case 31:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v13, v16);
      if ( !Instance )
        goto LABEL_176;
      v50 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v50 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v48 = targetValue;
        v49 = 113;
LABEL_174:
        LOBYTE(v13) = CondType__IsOpen(v49, targetId, v48, 0, 0LL, 0LL);
      }
      else
      {
        LOBYTE(v13) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v50, 1, 0LL);
      }
      return (unsigned __int8)v13 & 1;
    default:
LABEL_52:
      LOBYTE(v13) = 0;
      return (unsigned __int8)v13 & 1;
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

  return QuestTree__CheckSpotCond_34121164(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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

  if ( (byte_4A5821E & 1) == 0 )
  {
    sub_1B885B0(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
    byte_4A5821E = 1;
  }
  v7 = sub_1B887FC(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 72) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)mapInfo, v10, v11);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)blankEarthSpotMaster, v12, v13);
  return (System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *)v7;
}


int64_t __fastcall QuestTree__GetEndTime(
        QuestTree_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
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
  if ( (byte_4A58221 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    this = (QuestTree_o *)sub_1B885B0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    byte_4A58221 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_39525884((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1B8880C(this, questInfo);
  }
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v9 = 0LL;
  v27 = v26;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1B8880C(v10, v11);
    klass_high = HIDWORD(v27.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1B8880C(v10, v11);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v8 )
            sub_1B8880C(FirstEntityFromQuestId, v15);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v17 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v17, 1, 0LL);
LABEL_27:
              v9 = EndTime;
              goto LABEL_28;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !Mine )
          sub_1B8880C(0LL, v22);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v23 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v23 )
          sub_1B8880C(0LL, v24);
        EndTime = QuestEntity__GetEndTime(v23, 1, 0LL);
        goto LABEL_27;
      case 166:
        v19 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v9;
}


int64_t __fastcall QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  int64_t v9; // x21
  int64_t Time_38478060; // x0
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

  if ( (byte_4A58222 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A58222 = 1;
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
    sub_1B8880C(Time, v7);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v20.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_38478060 = NetworkManager__getTime_38478060(v20, 0LL);
  value = questReleaseEnt->fields.value;
  v12 = Time_38478060;
  dateData = NetworkManager__getDateTime_38478840(Time_38478060 - 3600 * value, 0LL).fields._dateData;
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
    dateData = NetworkManager__getDateTime_38478840(v15, 0LL).fields._dateData;
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
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  QuestTree___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__36_0; // x21
  Il2CppObject *v8; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A58218 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__);
    sub_1B885B0(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
    sub_1B885B0(&Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__);
    sub_1B885B0(&QuestTree___c_TypeInfo);
    byte_4A58218 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0LL);
  v5 = QuestTree___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v5 = QuestTree___c_TypeInfo;
  }
  _9__36_0 = (System_Func_object__int__o *)v5->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestTree___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__36_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__36_0, v8, Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__36_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TKey__o *)_9__36_0,
                                                               (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v12,
                                                  (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1B8880C(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v13 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1B8880C(v13, v14);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v18.fields._current[1].klass), v15) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


MapControl_MapGimmickInfo_o *__fastcall QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5820E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
    sub_1B885B0(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__);
    sub_1B885B0(&QuestTree___c__DisplayClass22_0_TypeInfo);
    byte_4A5820E = 1;
  }
  v5 = sub_1B887FC(QuestTree___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v9,
                                          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1B8880C(QuestInfo, v5);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0LL);
}


int32_t __fastcall QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
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

  if ( (byte_4A58211 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4A58211 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  memset(&v47, 0, sizeof(v47));
  memset(&v46, 0, sizeof(v46));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = (System_Collections_Generic_List_object__o *)QuestTree__GetUserReachableMapList(
                                                                        (QuestTree_o *)ChildByWarID,
                                                                        ChildByWarID,
                                                                        v7);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1B8880C(v10, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1B8880C(0LL, v12);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v48.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1B8880C(0LL, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      SpotList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1B8880C(0LL, v15);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v47.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v9 )
        sub_1B8880C(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v9,
        AvailableQuestIdList,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v18, v9, v19);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    UserReachableMapList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v17 = 0;
  v48 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v48.fields._current )
      sub_1B8880C(0LL, v22);
    v23 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v48.fields._current,
                                                         0LL);
    if ( !v23 )
      sub_1B8880C(0LL, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      v23,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v47 = v45;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v25 )
        break;
      current = (MapControl_SpotInfo_o *)v47.fields._current;
      if ( !v47.fields._current )
        sub_1B8880C(v25, v26);
      if ( HIDWORD(v47.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B8880C(0LL, v29);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v30 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v30 )
        sub_1B8880C(0LL, v31);
      v44 = v17;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v30,
        (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v32 = 0;
      v46 = v45;
      while ( 1 )
      {
        v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v46,
                (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v33 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1B8880C(v33, v34);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v46.fields._current,
                 (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v37 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v21 )
            sub_1B8880C(Item, v36);
          v38 = System_Collections_Generic_List_int___Contains(
                  v21,
                  Item,
                  (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1B8880C(v38, v39);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v37,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
              items->m_Items[size + 1] = v37;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v46,
        (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v17 = v44 - v32 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return v17;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetQuestCountForMap(
        QuestTree_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
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

  if ( (byte_4A58214 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4A58214 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v8 = MapInfoByMapID;
    v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v42 = v40;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v12 )
        break;
      current = v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1B8880C(v12, v13);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v9 )
          sub_1B8880C(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v9,
          AvailableQuestIdList,
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v42.fields._current )
          sub_1B8880C(v12, v13);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v16, v9, v17);
    v19 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v8, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1B8880C(SpotList, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      SpotList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v39 = 0;
    v42 = v40;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v20 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v39;
        return (int)MapInfoByMapID;
      }
      v22 = (MapControl_SpotInfo_o *)v42.fields._current;
      if ( layer < 1 )
      {
        if ( !v42.fields._current )
          sub_1B8880C(v20, v21);
LABEL_22:
        if ( v22->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1B8880C(0LL, v24);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v22->fields.spotId, 0LL) )
        {
LABEL_25:
          v25 = MapControl_SpotInfo__GetAvailableQuestIdList(v22, 1, 0LL);
          if ( !v25 )
            sub_1B8880C(0LL, v26);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            v25,
            (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v27 = 0;
          v41 = v40;
          while ( 1 )
          {
            v28 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v41,
                    (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v28 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1B8880C(v28, v29);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v41.fields._current,
                     (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v32 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v19 )
                sub_1B8880C(Item, v31);
              v33 = System_Collections_Generic_List_int___Contains(
                      v19,
                      Item,
                      (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1B8880C(v33, v34);
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v32,
                    *(const MethodInfo_34E0810 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v19->fields._size = size + 1;
                  items->m_Items[size + 1] = v32;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v41,
            (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v39 = v39 - v27 + v22->fields.questCount;
        }
      }
      else
      {
        if ( !v42.fields._current )
          sub_1B8880C(v20, v21);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v42.fields._current, 0LL) == layer )
          goto LABEL_22;
      }
    }
  }
  return (int)MapInfoByMapID;
}


MapControl_QuestInfo_o *__fastcall QuestTree__GetQuestInfo(
        QuestTree_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5820F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1B885B0(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__);
    sub_1B885B0(&QuestTree___c__DisplayClass23_0_TypeInfo);
    byte_4A5820F = 1;
  }
  v5 = sub_1B887FC(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v9,
                                     (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


System_Collections_Generic_List_MapControl_QuestInfo__o *__fastcall QuestTree__GetQuestInfoByWarId(
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
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A58225 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    byte_4A58225 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    allQuestInfoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B8880C(v8, v9);
    if ( LODWORD(v19.fields._current[4].klass) == warId )
    {
      if ( !v5 )
        sub_1B8880C(v8, v9);
      items = v5->fields._items;
      v14 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v8, v9);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          current,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v16[4] = (Il2CppClass *)current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)current, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v5;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A58213 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58213 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0LL);
}


MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5820D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1B885B0(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__);
    sub_1B885B0(&QuestTree___c__DisplayClass21_0_TypeInfo);
    byte_4A5820D = 1;
  }
  v5 = sub_1B887FC(QuestTree___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall QuestTree__GetUserReachableMapList(
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
  System_Collections_Generic_List_int__o *v14; // x21
  QuestTree___c_c *v15; // x0
  System_Func_object__int__o *_9__29_0; // x23
  Il2CppObject *v17; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Predicate_object__o *v25; // x21

  if ( (byte_4A58212 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MapButtonMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    sub_1B885B0(&System_Func_MapButtonEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__);
    sub_1B885B0(&QuestTree___c__DisplayClass29_0_TypeInfo);
    sub_1B885B0(&QuestTree___c_TypeInfo);
    byte_4A58212 = 1;
  }
  v4 = sub_1B887FC(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 16) = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)v11, v12, v13);
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
    _9__29_0 = (System_Func_object__int__o *)v15->static_fields->__9__29_0;
    if ( !_9__29_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = QuestTree___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__29_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__29_0, v17, Method_QuestTree___c__GetUserReachableMapList_b__29_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v19, v20);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__29_0,
                            (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v14 )
    {
      System_Collections_Generic_List_int___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1B8880C(Mine, mapId);
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
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v14,
      mapId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v14->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v25 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)v4,
    Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v25,
                                                                    (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4A58216 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
    sub_1B885B0(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__);
    sub_1B885B0(&QuestTree___c__DisplayClass33_0_TypeInfo);
    byte_4A58216 = 1;
  }
  v5 = sub_1B887FC(QuestTree___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1B8880C(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v10 )
    LODWORD(v10) = v10[4].klass;
  return (int)v10;
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
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A58209 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76060144);
    sub_1B885B0(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
    byte_4A58209 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v4,
    allWarInfoList,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76060144);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  System_Collections_Generic_List_object___Reverse(
    v4,
    (const MethodInfo_34FF160 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v4;
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

  if ( (byte_4A5820A & 1) == 0 )
  {
    sub_1B885B0(&QuestTree__Init_d__15_TypeInfo);
    byte_4A5820A = 1;
  }
  v5 = sub_1B887FC(QuestTree__Init_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)endCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestTree__InitInfo(QuestTree_o *this, const MethodInfo *method)
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

  if ( (byte_4A5821F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__);
    byte_4A5821F = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_23;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0LL);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    goto LABEL_23;
  size = allQuestInfoList->fields._size;
  v6 = allQuestInfoList->fields._version + 1;
  allQuestInfoList->fields._size = 0;
  allQuestInfoList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allQuestInfoList->fields._items, 0, size, 0LL);
  allSpotInfoList = this->fields.allSpotInfoList;
  if ( !allSpotInfoList )
    goto LABEL_23;
  v8 = allSpotInfoList->fields._size;
  v9 = allSpotInfoList->fields._version + 1;
  allSpotInfoList->fields._size = 0;
  allSpotInfoList->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotInfoList->fields._items, 0, v8, 0LL);
  allSpotRoadInfoList = this->fields.allSpotRoadInfoList;
  if ( !allSpotRoadInfoList )
    goto LABEL_23;
  v11 = allSpotRoadInfoList->fields._size;
  v12 = allSpotRoadInfoList->fields._version + 1;
  allSpotRoadInfoList->fields._size = 0;
  allSpotRoadInfoList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotRoadInfoList->fields._items, 0, v11, 0LL);
  allMapGimmickInfoList = this->fields.allMapGimmickInfoList;
  if ( !allMapGimmickInfoList )
    goto LABEL_23;
  v14 = allMapGimmickInfoList->fields._size;
  v15 = allMapGimmickInfoList->fields._version + 1;
  allMapGimmickInfoList->fields._size = 0;
  allMapGimmickInfoList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)allMapGimmickInfoList->fields._items, 0, v14, 0LL);
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    goto LABEL_23;
  v17 = allMapInfoList->fields._size;
  v18 = allMapInfoList->fields._version + 1;
  allMapInfoList->fields._size = 0;
  allMapInfoList->fields._version = v18;
  if ( v17 >= 1 )
    System_Array__Clear((System_Array_o *)allMapInfoList->fields._items, 0, v17, 0LL);
  allWarInfoList = this->fields.allWarInfoList;
  if ( !allWarInfoList )
LABEL_23:
    sub_1B8880C(mapControlRootInfo, method);
  v20 = allWarInfoList->fields._size;
  v21 = allWarInfoList->fields._version + 1;
  allWarInfoList->fields._size = 0;
  allWarInfoList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)allWarInfoList->fields._items, 0, v20, 0LL);
}


bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58219 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A58219 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_34115804(this, (WarEntity_o *)entity, v7);
}


bool __fastcall QuestTree__IsActiveEventWar_34115804(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  int32_t id; // w21
  int64_t Time; // x20
  const MethodInfo *v7; // x2
  bool v8; // w21
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v10; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v12; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A5821A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (QuestTree_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5821A = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_24;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (QuestTree_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_24;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v7);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_24;
    v8 = Time < (__int64)entity[6].klass;
  }
  else
  {
    v8 = 0;
  }
  this = (QuestTree_o *)sub_1B88658(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_24:
    sub_1B8880C(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1B88814(this, warEnt);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v10 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v12 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v12 )
        v4->fields.forceUpdateTime = (int64_t)v12;
      --v10;
      ++p_allSpotInfoList;
    }
    while ( v10 );
  }
  return v8;
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
        && ((v8 = Mine, !WarEntity__IsEvent(Mine, 0LL)) || QuestTree__IsActiveEventWar_34115804(this, v8, v9))
        && QuestTree__IsWarOpen(this, v8->fields.id, v9);
  return result;
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4A5820B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5820B = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
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

  if ( (byte_4A58215 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    byte_4A58215 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1B8880C(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    SpotList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    current = v19.fields._current;
    if ( layer < 1 )
    {
      if ( !v19.fields._current )
        sub_1B8880C(v10, v11);
      goto LABEL_12;
    }
    if ( !v19.fields._current )
      sub_1B8880C(v10, v11);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v19.fields._current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v15)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v12 && v16 == 6;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1B8880C(this, 0LL);
  return QuestTree__CheckSpotCond_34121164(
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
    sub_1B8880C(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_34121164(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_34121164(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType2,
           spotEnt->fields.dispTargetId2,
           spotEnt->fields.dispTargetValue2,
           v8);
}


bool __fastcall QuestTree__IsWarNew(QuestTree_o *this, int32_t warId, const MethodInfo *method)
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

  if ( (byte_4A58226 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4A58226 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    QuestInfoByWarId,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v14.fields._current;
    v10 = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
    if ( !current )
      sub_1B8880C(v10, v11);
    if ( !v10 )
      sub_1B8880C(0LL, v11);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v10, (int32_t)current[1].klass, 0LL) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
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
  if ( (byte_4A58217 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    this = (QuestTree_o *)sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4A58217 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v7 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0LL);
  if ( v7 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v7, v8);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_1B8880C(QuestInfoByWarId, v6);
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
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v9);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v12 = v10;
    if ( !v10 )
      break;
    if ( !v17.fields._current )
      sub_1B8880C(v10, v11);
    if ( LODWORD(v17.fields._current[2].klass) == 1 )
    {
      v13 = 6;
      goto LABEL_15;
    }
  }
  v13 = 7;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v12 && v13 == 6;
}


void __fastcall QuestTree__SetupBlankEarthSpotInfo(
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
  struct System_String_o *name; // x1
  __int64 v12; // x0
  __int64 v13; // x0
  UnityEngine_Object_o *v14; // x22
  bool IsExistCommand; // w21
  int32_t v16; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4A5821B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&SpotEntity_TypeInfo);
    byte_4A5821B = 1;
  }
  v6 = sub_1B887FC(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v6, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v6 + 32) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)name, v9, v10);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v6, 0LL);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BDA48C(v12);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BDA48C(v13);
  v14 = **(UnityEngine_Object_o ***)(v13 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v6 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1B8880C(Instance, v8);
  v16 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v16, 0, 0LL);
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

  v4 = QuestTree__CheckMapGimmickCond_34118192(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1B8880C(v4, v5);
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
    sub_1B8880C(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34121164(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_34121164(
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
    sub_1B8880C(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34121164(
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
    sub_1B8880C(this, nowTime);
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

  if ( (byte_4A5820C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5820C = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
  if ( (byte_4A58208 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A58208 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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

  if ( (byte_4A5821C & 1) == 0 )
  {
    sub_1B885B0(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo);
    byte_4A5821C = 1;
  }
  v5 = sub_1B887FC(QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)endCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


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

  if ( (byte_4A5821D & 1) == 0 )
  {
    sub_1B885B0(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo);
    byte_4A5821D = 1;
  }
  v7 = sub_1B887FC(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 72), (int32_t)endCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


MapControl_RootInfo_o *__fastcall QuestTree__mfGetMapCtrlP(QuestTree_o *this, const MethodInfo *method)
{
  return this->fields.mapControlRootInfo;
}


MapControl_MapInfo_o *__fastcall QuestTree__mfGetMapInfoByMapID(
        QuestTree_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A58210 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
    sub_1B885B0(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__);
    sub_1B885B0(&QuestTree___c__DisplayClass27_0_TypeInfo);
    byte_4A58210 = 1;
  }
  v5 = sub_1B887FC(QuestTree___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v9,
                                   (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  if ( (byte_4A5822C & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B885B0(&BlankEarthSpotMaster_TypeInfo);
    byte_4A5822C = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)v9, v10, v11);
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
      sub_1B88814(this, method);
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
          sub_1B88554(p__2__current, (int32_t)v18, v20, v21);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1B8880C(this, method);
  }
  this->klass = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
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

  if ( (byte_4A5822D & 1) == 0 )
  {
    sub_1B885B0(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
    byte_4A5822D = 1;
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
    v6 = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1B887FC(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v6->fields.mapInfo = _3__mapInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.mapInfo, (int32_t)_3__mapInfo, v4, v5);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v6->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1B88554(
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__43_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  __int64 v7; // x0
  __int64 v8; // x0
  UnityEngine_Object_o *v9; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  bool result; // w0
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4A5822E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    this = (QuestTree__Init_d__15_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5822E = 1;
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
        if ( !byte_4A58230 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A58230 = 1;
        }
        v5 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v5 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v5->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v7 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
            v7 = sub_1BDA48C(v7);
          v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
          if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
            v8 = sub_1BDA48C(v8);
          v9 = **(UnityEngine_Object_o ***)(v8 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, v10);
              v12 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, v11);
              v2->fields.__2__current = (Il2CppObject *)v12;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B88554(p__2__current, (int32_t)v12, v14, v15);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1B8880C(this, method);
      }
      v17 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1BDA48C(v17);
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
        v18 = sub_1BDA48C(v18);
      v19 = **(UnityEngine_Object_o ***)(v18 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58228 & 1) == 0 )
  {
    sub_1B885B0(&QuestTree___c_TypeInfo);
    byte_4A58228 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestTree___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)QuestTree___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__29_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__42_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A58229 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A58229 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1B8880C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5822A & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_3_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4A5822A = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1B8880C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5822B & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_6_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5822B = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1B8880C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_Dictionary_int__object__o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_Object_array *Entitys_object__object; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v51; // w8
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v55; // x9
  WarEntity_o *v56; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v67; // x23
  int64_t v68; // x19
  Il2CppObject *v69; // x8
  Il2CppObject *_2__current; // x9
  __int64 v71; // x8
  struct QuestTree_o **p__4__this; // x9
  struct QuestTree_o *v73; // x10
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 _2__current_low; // x10
  __int64 v77; // x8
  int32_t v78; // w2
  int32_t v79; // w3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v80; // x22
  unsigned int v81; // w9
  __int64 v82; // x8
  int32_t v83; // w24
  int32_t v84; // w2
  int32_t v85; // w3
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v88; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v90; // x23
  Il2CppClass **v91; // x0
  const MethodInfo *v92; // x3
  Il2CppObject *v93; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v94; // x25
  int v95; // w27
  unsigned int i; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v97; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v98; // x8
  SpotEntity_o **v99; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v100; // t1
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x26
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v110; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v111; // x25
  int v112; // w27
  unsigned int v113; // w22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v114; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v115; // x8
  SpotRoadEntity_o **v116; // x29
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v117; // t1
  const MethodInfo *v118; // x3
  Il2CppObject *v119; // x26
  int32_t v120; // w2
  int32_t v121; // w3
  __int64 v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  __int64 v125; // x8
  Il2CppObject *v126; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v127; // x24
  int v128; // w26
  int v129; // w22
  __int64 v130; // x8
  MapControl_MapGimmickInfo_o *v131; // x25
  const MethodInfo *v132; // x2
  int32_t v133; // w2
  int32_t v134; // w3
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v140; // x22
  Il2CppObject *v141; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  Il2CppObject *v145; // x22
  struct QuestTree___c__DisplayClass41_0_o **p__8__1; // x21
  int32_t v147; // w2
  int32_t v148; // w3
  int64_t v149; // x22
  MapControl_WarInfo_o *v150; // x23
  int32_t v151; // w2
  int32_t v152; // w3
  MapControl_MapInfo_o *v153; // x22
  int32_t v154; // w2
  int32_t v155; // w3
  MapControl_SpotInfo_o *v156; // x22
  int32_t v157; // w2
  int32_t v158; // w3
  WarEntity_o *v159; // x22
  int32_t v160; // w2
  int32_t v161; // w3
  Il2CppObject *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  bool v165; // zf
  int v166; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x27
  bool result; // w0
  QuestEntity_o *v169; // x23
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x22
  int32_t QuestPhase; // w22
  struct QuestTree___c__DisplayClass41_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v174; // x25
  System_Predicate_object__o *_9__2; // x26
  int32_t v176; // w2
  int32_t v177; // w3
  Il2CppObject *v178; // x0
  int32_t v179; // w2
  int32_t v180; // w3
  int32_t MapID; // w0
  const MethodInfo *v182; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  int32_t v186; // w2
  int32_t v187; // w3
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x1
  WarEntity_o *Mine; // x0
  int32_t v191; // w2
  int32_t v192; // w3
  int v193; // w25
  int32_t v194; // w2
  int32_t v195; // w3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v196; // x24
  struct QuestPhaseMaster_o *spotInfo_5__22; // x1
  int32_t v198; // w2
  int32_t v199; // w3
  const MethodInfo *v200; // x2
  struct WarEntity_o *warEnt_5__23; // x8
  const MethodInfo *v202; // x4
  int v203; // w19
  struct MapControl_SpotInfo_o *v204; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v206; // x9
  struct MapControl_MapInfo_o *v207; // x9
  bool v208; // w8
  int32_t v209; // w2
  int32_t v210; // w3
  Il2CppObject *v211; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v212; // x21
  int v213; // w19
  int v214; // w22
  __int64 v215; // x8
  __int64 v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  __int64 v219; // x8
  int32_t v220; // w2
  int32_t v221; // w3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v223; // x22
  Il2CppObject *v224; // x23
  struct QuestTree___c_StaticFields *v225; // x0
  int32_t v226; // w2
  int32_t v227; // w3
  int32_t v228; // w2
  int32_t v229; // w3
  int32_t v230; // w2
  int32_t v231; // w3
  int32_t v232; // w2
  int32_t v233; // w3
  int32_t v234; // w2
  int32_t v235; // w3
  int32_t v236; // w2
  int32_t v237; // w3
  int32_t v238; // w2
  int32_t v239; // w3
  int32_t v240; // w2
  int32_t v241; // w3
  ServantStatusBattleListViewItem_o *v242; // x27
  int v243; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v244; // [xsp+0h] [xbp-C0h]
  Il2CppObject *v245; // [xsp+10h] [xbp-B0h]
  unsigned int v246; // [xsp+1Ch] [xbp-A4h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v247; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v249; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v253; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4A5822F & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1B885B0(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_getEntitys_WarMaster__WarEntity___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1B885B0(&MapControl_MapInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&MapControl_SpotInfo_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__);
    sub_1B885B0(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__);
    sub_1B885B0(&QuestTree___c__DisplayClass41_0_TypeInfo);
    sub_1B885B0(&QuestTree___c_TypeInfo);
    sub_1B885B0(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B885B0(&MapControl_WarInfo_TypeInfo);
    byte_4A5822F = 1;
  }
  v253 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v249 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  v247 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_269;
      QuestTree__InitInfo(_4__this, method);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._dataManager_5__2, (int32_t)Instance, v5, v6);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._mapMaster_5__3, (int32_t)MasterData_object, v8, v9);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v10 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._spotMaster_5__4, (int32_t)v10, v11, v12);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v13 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._blankEarthSpotMaster_5__5, (int32_t)v13, v14, v15);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v16 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._questMaster_5__6, (int32_t)v16, v17, v18);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v19 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._questPhaseMaster_5__7, (int32_t)v19, v20, v21);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v22 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._eventMaster_5__8, (int32_t)v22, v23, v24);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v25 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v25;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._eventDetailMaster_5__9, (int32_t)v25, v26, v27);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v28 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusMaster_5__10, (int32_t)v28, v29, v30);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v31 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v31;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int32_t)v31,
        v32,
        v33);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v34;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._spotRoadMaster_5__12, (int32_t)v34, v35, v36);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v37 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v37;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._mapGimmickMaster_5__13, (int32_t)v37, v38, v39);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      v40 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._questPickupMaster_5__14, (int32_t)v40, v41, v42);
      v43 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v43,
        (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v43;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int32_t)v43,
        v44,
        v45);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_269;
      Entitys_object__object = DataManager__getEntitys_object__object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2E7FB68 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys_object__object;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v2->fields._warList_5__16,
        (int32_t)Entitys_object__object,
        v47,
        v48);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_269;
      max_length = warList_5__16->max_length;
      v51 = 0;
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
  while ( v51 < max_length )
  {
    v55 = v2->fields._warList_5__16;
    if ( !v55 )
      goto LABEL_269;
    if ( v51 >= v55->max_length )
      goto LABEL_148;
    v56 = v55->m_Items[v51];
    if ( !v56 )
      goto LABEL_269;
    if ( !_4__this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_269;
    id = v56->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_269;
    v58 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v58, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_269;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_269;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v58, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v58, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_269;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v253,
               (int32_t)this,
               (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v253;
          if ( !v253 )
            goto LABEL_269;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v253, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)entity;
            if ( !entity )
              goto LABEL_269;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v58, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_269;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v67 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v58, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_269;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v67->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_269;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v68 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1B88658(long___TypeInfo, 3LL);
        v69 = entity;
        if ( !entity || !this )
          goto LABEL_269;
        _2__current = this->fields.__2__current;
        if ( !(_DWORD)_2__current )
          goto LABEL_148;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( (_DWORD)_2__current == 1 )
          goto LABEL_148;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v69[5].monitor;
        if ( (unsigned int)_2__current <= 2 )
          goto LABEL_148;
        this->fields.endCallback = (struct System_Action_o *)v69[6].monitor;
        if ( (int)_2__current >= 1 )
        {
          v71 = (unsigned int)_2__current;
          p__4__this = &this->fields.__4__this;
          do
          {
            v73 = *p__4__this;
            if ( (__int64)*p__4__this > v68 && _4__this->fields.forceUpdateTime > (__int64)v73 )
              _4__this->fields.forceUpdateTime = (int64_t)v73;
            --v71;
            ++p__4__this;
          }
          while ( v71 );
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_269;
    v74 = *(_QWORD *)&this->fields.__1__state;
    v75 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v74 )
      goto LABEL_269;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v74 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v58,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = v74 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v77 + 32) = v58;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v77 + 32), (int32_t)v58, v59, v60);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_269;
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
          goto LABEL_269;
        v83 = *(_DWORD *)(v82 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__AddChild(v58, v83, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_269;
        items = allMapInfoList->fields._items;
        v88 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_269;
        size = allMapInfoList->fields._size;
        v90 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v91[4] = (Il2CppClass *)v90;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v91 + 4), (int32_t)v90, v84, v85);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotMaster__getList((SpotMaster_o *)this, v83, 0LL);
        if ( !this )
          goto LABEL_269;
        v93 = this->fields.__2__current;
        v94 = this;
        v95 = (_DWORD)v93 - 1;
        if ( (int)v93 >= 1 )
          break;
LABEL_91:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v90,
                                                                   v247->fields._blankEarthSpotMaster_5__5,
                                                                   v92);
        if ( !allSpotInfoList )
          goto LABEL_269;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v247->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v83,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
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
              goto LABEL_269;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v90,
                                                                       (int32_t)v115->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v113 >= LODWORD(v111->fields.__2__current) )
              goto LABEL_148;
            v119 = (Il2CppObject *)this;
            QuestTree__SetupSpotRoadInfo(_4__this, *v116, &spotRoadInfo, v118);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_269;
            v122 = *(_QWORD *)&this->fields.__1__state;
            v123 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v122 )
              goto LABEL_269;
            v124 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v124 >= *(_DWORD *)(v122 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                v119,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
            }
            else
            {
              v125 = v122 + 8 * v124;
              LODWORD(this->fields.__2__current) = v124 + 1;
              *(_QWORD *)(v125 + 32) = v119;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v125 + 32), (int32_t)v119, v120, v121);
            }
            if ( v112 == v113 )
              break;
            if ( ++v113 >= LODWORD(v111->fields.__2__current) )
              goto LABEL_148;
          }
        }
        v2 = v247;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v247->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v83,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
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
              goto LABEL_269;
            if ( !v90 )
              goto LABEL_269;
            v131 = MapControl_MapInfo__AddMapGimmick(v90, *(_DWORD *)(v130 + 16), 0LL);
            mapGimmickInfo = v131;
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, v132);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_269;
            v135 = *(_QWORD *)&this->fields.__1__state;
            v136 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v135 )
              goto LABEL_269;
            v137 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v131,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
            }
            else
            {
              v138 = v135 + 8 * v137;
              LODWORD(this->fields.__2__current) = v137 + 1;
              *(_QWORD *)(v138 + 32) = v131;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v138 + 32), (int32_t)v131, v133, v134);
            }
            if ( v128 == v129 )
              break;
            if ( (unsigned int)++v129 >= LODWORD(v127->fields.__2__current) )
              goto LABEL_148;
          }
        }
        v80 = v244;
        v81 = v246 + 1;
        if ( v246 + 1 == (_DWORD)v245 )
          goto LABEL_124;
        if ( v81 >= LODWORD(v244->fields.__2__current) )
          goto LABEL_148;
      }
      for ( i = 0; i < LODWORD(v94->fields.__2__current); ++i )
      {
        v97 = &v94->klass + (int)i;
        v100 = v97[4];
        v99 = (SpotEntity_o **)(v97 + 4);
        v98 = v100;
        if ( !v100 || !v90 )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddChild(
                                                                   v90,
                                                                   (int32_t)v98->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v94->fields.__2__current) )
          break;
        v102 = (Il2CppObject *)this;
        QuestTree__SetupSpotInfo(_4__this, *v99, &spotInfo, v101);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_269;
        v105 = *(_QWORD *)&this->fields.__1__state;
        v106 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v105 )
          goto LABEL_269;
        v107 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v107 >= *(_DWORD *)(v105 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v102,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
        }
        else
        {
          v108 = v105 + 8 * v107;
          LODWORD(this->fields.__2__current) = v107 + 1;
          *(_QWORD *)(v108 + 32) = v102;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v108 + 32), (int32_t)v102, v103, v104);
        }
        if ( v95 == i )
          goto LABEL_91;
      }
LABEL_148:
      sub_1B88814(this, method);
    }
LABEL_124:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, 0, v78, v79);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_126:
    max_length = v2->fields._warCount_5__19;
    v51 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v51;
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
  v140 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v140 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v141 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v140 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v140, v141, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Comparison_MapControl_WarInfo__o *)v140;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)v140, v143, v144);
  }
  if ( !allWarInfoList )
    goto LABEL_269;
  System_Collections_Generic_List_object___Sort_55571192(
    allWarInfoList,
    v140,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v145 = (Il2CppObject *)sub_1B887FC(QuestTree___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor(v145, 0LL);
  v2->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v145;
  p__8__1 = &v2->fields.__8__1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, (int32_t)v145, v147, v148);
  v149 = v2->fields._nowTime_5__17;
  v150 = (MapControl_WarInfo_o *)sub_1B887FC(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v150, v149, 0LL);
  v2->fields._warInfo_5__20 = v150;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._warInfo_5__20, (int32_t)v150, v151, v152);
  v153 = (MapControl_MapInfo_o *)sub_1B887FC(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v153, 0LL);
  v2->fields._mapInfo_5__21 = v153;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._mapInfo_5__21, (int32_t)v153, v154, v155);
  v156 = (MapControl_SpotInfo_o *)sub_1B887FC(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v156, 0LL);
  v2->fields._spotInfo_5__22 = v156;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._spotInfo_5__22, (int32_t)v156, v157, v158);
  v159 = (WarEntity_o *)sub_1B887FC(WarEntity_TypeInfo);
  WarEntity___ctor(v159, 0LL);
  v2->fields._warEnt_5__23 = v159;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._warEnt_5__23, (int32_t)v159, v160, v161);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_269;
  v162 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v162;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._userQuestMaster_5__24, (int32_t)v162, v163, v164);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_269;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v165 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questMaster_5__6;
  v166 = v165 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v166;
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
    v169 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v249 = 0LL;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_269;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v249, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v249;
      if ( !v249 )
        goto LABEL_269;
      QuestPhase = UserQuestEntity__getQuestPhase(v249, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__getSpotId_39470408(v169, QuestPhase + 1, 0LL);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_269;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_269;
      v174 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_8__1->fields.__9__2, (int32_t)_9__2, v176, v177);
      }
      if ( !v174 )
        goto LABEL_269;
      v178 = System_Collections_Generic_List_object___Find(
               v174,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v247;
      v247->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v178;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v247->fields._spotInfo_5__22, (int32_t)v178, v179, v180);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v247->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_269;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v247->fields._mapInfoNow_5__27 != MapID )
      {
        v247->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, v182);
        v247->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v247->fields._mapInfo_5__21,
          (int32_t)MapInfoByMapID,
          v184,
          v185);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v247->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v247->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v247->fields._warInfoNow_5__28 = (int)method;
          mapControlRootInfo = _4__this->fields.mapControlRootInfo;
          if ( mapControlRootInfo )
            ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, (int32_t)method, 0LL);
          else
            ChildByWarID = 0LL;
          v247->fields._warInfo_5__20 = ChildByWarID;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v247->fields._warInfo_5__20,
            (int32_t)ChildByWarID,
            v186,
            v187);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v247->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_269;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v247->fields._warEnt_5__23 = Mine;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v247->fields._warEnt_5__23, (int32_t)Mine, v191, v192);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_269;
    if ( !v249 )
      goto LABEL_192;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v249;
    if ( !v249 )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v249, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_180;
    if ( !v249 )
      goto LABEL_269;
    if ( v249->fields.challengeNum >= 1 )
    {
LABEL_180:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_269;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v249;
    if ( !v249 )
      goto LABEL_269;
    if ( UserQuestEntity__getClearNum(v249, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_269;
LABEL_192:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v193 = 0;
      goto LABEL_193;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v249 )
      goto LABEL_269;
    if ( !this )
      goto LABEL_269;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v249->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_269;
    v193 = (int)this;
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
    v196 = this;
    if ( !this )
      goto LABEL_269;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._eventMaster_5__8, (int32_t)method, v194, v195);
    spotInfo_5__22 = (struct QuestPhaseMaster_o *)v2->fields._spotInfo_5__22;
    v196->fields._questPhaseMaster_5__7 = spotInfo_5__22;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v196->fields._questPhaseMaster_5__7,
      (int32_t)spotInfo_5__22,
      v198,
      v199);
    if ( !_4__this )
      goto LABEL_269;
    v196->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v196,
                                                                          v200);
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
           (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)value;
      if ( !value )
        goto LABEL_269;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_207:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v196, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v196->fields.__4__this) = 0;
LABEL_211:
        v203 = 1;
        goto LABEL_212;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v169, (MapControl_QuestInfo_o *)v196, v2->fields._warInfoNow_5__28, v202) != 1 )
      goto LABEL_211;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_269;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v203 = 0;
LABEL_212:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v196, 0LL) )
    {
      if ( ((v193 | v203) & 1) == 0 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_269;
        MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_269;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v196->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v196, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v196,
                                                                   0LL);
        if ( !this )
          goto LABEL_269;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v204 = v2->fields._spotInfo_5__22;
          if ( !v204 )
            goto LABEL_269;
          v204->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_269;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v196,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v206 = v2->fields._spotInfo_5__22;
        if ( !v206 )
          goto LABEL_269;
        v206->fields._IsNext_k__BackingField = 1;
        v207 = v2->fields._mapInfo_5__21;
        if ( !v207 )
          goto LABEL_269;
        v207->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v169, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_269;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v249 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v249, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v249 )
          goto LABEL_269;
        v208 = v249->fields.challengeNum == 0;
      }
      else
      {
        v208 = 0;
      }
    }
    else
    {
      v208 = 1;
    }
    LOBYTE(v196->fields.__8__1) = v208;
    HIDWORD(v196->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_269;
    LODWORD(v196->fields.endCallback) = QuestPickupMaster__GetPriority(
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
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v196,
                                                                   *(_DWORD *)(v215 + 16),
                                                                   *(_DWORD *)(v215 + 20),
                                                                   0LL);
        if ( v213 == v214 )
          goto LABEL_246;
        if ( (unsigned int)++v214 >= LODWORD(v212->fields.__2__current) )
          goto LABEL_148;
      }
LABEL_269:
      sub_1B8880C(this, method);
    }
LABEL_246:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_269;
    v216 = *(_QWORD *)&this->fields.__1__state;
    v217 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v216 )
      goto LABEL_269;
    v218 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v218 >= *(_DWORD *)(v216 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v196,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
    }
    else
    {
      v219 = v216 + 8 * v218;
      LODWORD(this->fields.__2__current) = v218 + 1;
      *(_QWORD *)(v219 + 32) = v196;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v219 + 32), (int32_t)v196, v209, v210);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0LL;
      v242 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v242, 0, v220, v221);
      v243 = 2;
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
  v223 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v223 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v224 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v223 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v223, v224, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, 0LL);
    v225 = QuestTree___c_TypeInfo->static_fields;
    v225->__9__41_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v223;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v225->__9__41_1, (int32_t)v223, v226, v227);
  }
  if ( !allQuestInfoList )
    goto LABEL_269;
  System_Collections_Generic_List_object___Sort_55571192(
    allQuestInfoList,
    v223,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__8__1, 0, v228, v229);
  v2->fields._warInfo_5__20 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._warInfo_5__20, 0, v230, v231);
  v2->fields._mapInfo_5__21 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._mapInfo_5__21, 0, v232, v233);
  v2->fields._spotInfo_5__22 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._spotInfo_5__22, 0, v234, v235);
  v2->fields._warEnt_5__23 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._warEnt_5__23, 0, v236, v237);
  v2->fields._userQuestMaster_5__24 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._userQuestMaster_5__24, 0, v238, v239);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_269;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v2->fields.endCallback )
    return 0;
  v2->fields.__2__current = 0LL;
  v242 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(v242, 0, v240, v241);
  v243 = 3;
LABEL_268:
  *(_DWORD *)&v242[-1].fields.isMine = v243;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  QuestTree_o *_4__this; // x19
  QuestTree___c__DisplayClass42_0_o *v6; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0
  __int64 v11; // x1
  struct QuestTree___c__DisplayClass42_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v21; // x0
  Il2CppObject *v22; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  DataManager_o *v27; // x0
  Il2CppObject *v28; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  DataManager_o *v33; // x0
  Il2CppObject *v34; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  DataManager_o *v39; // x0
  Il2CppObject *v40; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
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
  Il2CppObject *v56; // x21
  DataManager_o *v57; // x0
  Il2CppObject *v58; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x1
  DataManager_o *v63; // x0
  Il2CppObject *v64; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x1
  DataManager_o *v69; // x0
  Il2CppObject *v70; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_Collections_Generic_Dictionary_int__object__o *v74; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  QuestTree___c__DisplayClass42_1_o *v78; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x1
  DataManager_o *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object__object; // x25
  Il2CppObject *v85; // x27
  System_Func_object__bool__o *v86; // x26
  Il2CppObject *v87; // x0
  __int64 v88; // x1
  struct QuestTree___c__DisplayClass42_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v93; // x27
  System_Predicate_object__o *v94; // x26
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 Index; // x0
  __int64 v98; // x1
  System_Collections_Generic_List_object__o *v99; // x0
  struct QuestTree___c__DisplayClass42_1_o *v100; // x9
  MapControl_RootInfo_o *v101; // x0
  struct MapControl_WarInfo_o *v102; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  __int64 v106; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v108; // x1
  int32_t v109; // w2
  int32_t v110; // w3
  MapControl_WarInfo_o *v111; // x0
  __int64 EventId; // x0
  __int64 v113; // x1
  _BOOL8 v114; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v115; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v117; // x0
  MapControl_WarInfo_o *v118; // x0
  __int64 v119; // x0
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  MapControl_WarInfo_o *v124; // x0
  __int64 v125; // x0
  __int64 v126; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v128; // x0
  __int64 v129; // x0
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v131; // x1
  struct QuestTree___c__DisplayClass42_1_o *v132; // x8
  Il2CppObject *v133; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v135; // x21
  System_Int64_array *v136; // x0
  __int64 v137; // x1
  Il2CppObject *v138; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v140; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v142; // x1
  _QWORD *v143; // x9
  __int64 size; // x10
  Il2CppClass **v145; // x8
  __int64 v146; // x0
  __int64 v147; // x1
  int32_t v148; // w9
  struct QuestTree___c__DisplayClass42_1_o *v149; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v151; // x0
  __int64 v152; // x1
  SpotRoadEntity_array *v153; // x20
  int v154; // w25
  il2cpp_array_size_t i; // w26
  QuestTree___c__DisplayClass42_4_o *v156; // x21
  __int64 v157; // x0
  __int64 v158; // x1
  SpotRoadEntity_o *v159; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v161; // x24
  __int64 v162; // x0
  __int64 v163; // x1
  unsigned int v164; // w0
  __int64 v165; // x1
  System_Collections_Generic_List_object__o *v166; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v168; // x1
  int32_t v169; // w2
  int32_t v170; // w3
  System_Collections_Generic_List_object__o *v171; // x0
  Il2CppObject *v172; // x1
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  Il2CppClass **v176; // x8
  struct QuestTree___c__DisplayClass42_1_o *v177; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v179; // x0
  __int64 v180; // x1
  int32_t v181; // w2
  int32_t v182; // w3
  MapGimmickEntity_array *v183; // x20
  int v184; // w24
  il2cpp_array_size_t j; // w25
  QuestTree___c__DisplayClass42_5_o *v186; // x21
  __int64 v187; // x0
  __int64 v188; // x1
  MapGimmickEntity_o *v189; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v191; // x23
  __int64 v192; // x0
  __int64 v193; // x1
  unsigned int v194; // w0
  __int64 v195; // x1
  System_Collections_Generic_List_object__o *v196; // x0
  MapControl_MapInfo_o *v197; // x0
  __int64 v198; // x1
  int32_t v199; // w2
  int32_t v200; // w3
  System_Collections_Generic_List_object__o *v201; // x0
  Il2CppObject *v202; // x1
  struct System_Object_array *v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  Il2CppClass **v206; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v207; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v208; // x8
  int v209; // w9
  ServantStatusBattleListViewItem_o *p_mapInfo_5__16; // x8
  __int64 v211; // x0
  __int64 v212; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v213; // x8
  int32_t mapCount_5__13; // w10
  int32_t v215; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v217; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v219; // x0
  int32_t v220; // w2
  int32_t v221; // w3
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v223; // x10
  MapEntity_o *v224; // x9
  struct QuestTree___c__DisplayClass42_1_o *v225; // x22
  struct MapControl_WarInfo_o *v226; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int32_t v229; // w2
  int32_t v230; // w3
  struct MapControl_WarInfo_o *v231; // x8
  System_Collections_Generic_List_object__o *v232; // x0
  struct QuestTree___c__DisplayClass42_1_o *v233; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int32_t v236; // w2
  int32_t v237; // w3
  __int64 v238; // x0
  __int64 v239; // x1
  System_Collections_Generic_List_object__o *v240; // x0
  struct QuestTree___c__DisplayClass42_1_o *v241; // x8
  MapControl_WarInfo_o *v242; // x0
  struct MapControl_MapInfo_o *v243; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v244; // x0
  int32_t v245; // w2
  int32_t v246; // w3
  __int64 v247; // x1
  int32_t v248; // w2
  int32_t v249; // w3
  System_Collections_Generic_List_object__o *v250; // x0
  struct System_Object_array *v251; // x8
  Il2CppObject *v252; // x1
  _QWORD *v253; // x9
  __int64 v254; // x10
  Il2CppClass **v255; // x8
  __int64 v256; // x0
  __int64 v257; // x1
  System_Collections_Generic_List_object__o *v258; // x20
  QuestTree___c_c *v259; // x8
  System_Comparison_T__o *_9__42_2; // x21
  Il2CppObject *v261; // x22
  struct QuestTree___c_StaticFields *v262; // x0
  int32_t v263; // w2
  int32_t v264; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v265; // x0
  int32_t v266; // w2
  int32_t v267; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v268; // x0
  int32_t v269; // w2
  int32_t v270; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v271; // x0
  int32_t v272; // w2
  int32_t v273; // w3
  QuestTree___c__DisplayClass42_6_o *v274; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v275; // x0
  int32_t v276; // w2
  int32_t v277; // w3
  int64_t v278; // x21
  MapControl_WarInfo_o *v279; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v280; // x0
  int32_t v281; // w2
  int32_t v282; // w3
  MapControl_MapInfo_o *v283; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v284; // x0
  int32_t v285; // w2
  int32_t v286; // w3
  MapControl_SpotInfo_o *v287; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v288; // x0
  int32_t v289; // w2
  int32_t v290; // w3
  WarEntity_o *v291; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v292; // x0
  int32_t v293; // w2
  int32_t v294; // w3
  __int64 v295; // x1
  DataManager_o *v296; // x0
  Il2CppObject *v297; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v298; // x0
  int32_t v299; // w2
  int32_t v300; // w3
  Il2CppObject *Master_object; // x0
  __int64 v302; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v303; // x8
  struct QuestTree___c__DisplayClass42_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v306; // x1
  int32_t v307; // w9
  struct QuestTree___c__DisplayClass42_6_o *v308; // x20
  System_Collections_Generic_List_int__o *v309; // x21
  __int64 v310; // x0
  __int64 v311; // x1
  int32_t v312; // w2
  int32_t v313; // w3
  __int64 v314; // x1
  System_Collections_Generic_List_object__o *v315; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v316; // x9
  __int128 v317; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap24; // x0
  int32_t v319; // w2
  int32_t v320; // w3
  const MethodInfo *v321; // x1
  bool v322; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v323; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v326; // x1
  int32_t v327; // w2
  int32_t v328; // w3
  struct QuestTree___c__DisplayClass42_0_o *v329; // x9
  struct QuestTree___c__DisplayClass42_6_o *v330; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v333; // x9
  _QWORD *v334; // x10
  __int64 v335; // x11
  unsigned __int64 v336; // t2
  __int64 v337; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v338; // x8
  DataMasterBase_o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x20
  Il2CppObject *v341; // x22
  System_Func_object__bool__o *v342; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v343; // x0
  System_Object_array *v344; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v345; // x0
  int32_t v346; // w2
  int32_t v347; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v348; // x8
  __int64 mapIdx_5__12; // x0
  int32_t v350; // w9
  struct QuestTree___c__DisplayClass42_1_o *v351; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v353; // x0
  __int64 v354; // x1
  SpotEntity_array *v355; // x20
  int v356; // w25
  il2cpp_array_size_t k; // w26
  QuestTree___c__DisplayClass42_2_o *v358; // x21
  __int64 v359; // x0
  __int64 v360; // x1
  SpotEntity_o *v361; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v363; // x24
  __int64 v364; // x0
  __int64 v365; // x1
  unsigned int v366; // w0
  __int64 v367; // x1
  System_Collections_Generic_List_object__o *v368; // x0
  MapControl_MapInfo_o *v369; // x0
  __int64 v370; // x1
  int32_t v371; // w2
  int32_t v372; // w3
  System_Collections_Generic_List_object__o *v373; // x0
  Il2CppObject *v374; // x1
  struct System_Object_array *v375; // x8
  _QWORD *v376; // x9
  __int64 v377; // x10
  Il2CppClass **v378; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v379; // x0
  System_Object_array *v380; // x0
  __int64 v381; // x1
  int32_t v382; // w2
  int32_t v383; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v384; // x20
  __int64 v385; // x21
  QuestTree___c_c *v386; // x8
  System_Func_object__int__o *_9__42_6; // x22
  Il2CppObject *v388; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int32_t v390; // w2
  int32_t v391; // w3
  System_Collections_Generic_IEnumerable_T__o *v392; // x23
  System_Collections_Generic_HashSet_int__o *v393; // x22
  __int64 v394; // x0
  __int64 v395; // x1
  int32_t v396; // w2
  int32_t v397; // w3
  System_Collections_Generic_List_T__o *v398; // x22
  System_Func_object__bool__o *v399; // x23
  __int64 v400; // x1
  System_Collections_Generic_List_object__o *v401; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v402; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v405; // x20
  struct QuestTree___c__DisplayClass42_6_o *v406; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  int64_t UserId; // x0
  __int64 v409; // x1
  struct QuestTree___c__DisplayClass42_6_o *v410; // x8
  __int64 v411; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_39470408; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v415; // x22
  struct QuestTree___c__DisplayClass42_6_o *v416; // x25
  System_Collections_Generic_List_object__o *v417; // x23
  System_Predicate_object__o *_9__12; // x24
  int32_t v419; // w2
  int32_t v420; // w3
  Il2CppObject *v421; // x0
  int32_t v422; // w2
  int32_t v423; // w3
  __int64 v424; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v427; // x0
  int32_t v428; // w2
  int32_t v429; // w3
  __int64 v430; // x1
  MapControl_MapInfo_o *v431; // x0
  __int64 v432; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v434; // x0
  int32_t v435; // w2
  int32_t v436; // w3
  __int64 v437; // x1
  MapControl_WarInfo_o *v438; // x0
  struct WarEntity_o *v439; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v440; // x0
  int32_t v441; // w2
  int32_t v442; // w3
  struct QuestTree___c__DisplayClass42_6_o *v443; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int32_t v446; // w2
  int32_t v447; // w3
  unsigned int v448; // w0
  __int64 v449; // x1
  System_Collections_Generic_List_object__o *v450; // x0
  MapControl_WarInfo_o *v451; // x0
  __int64 v452; // x1
  _BOOL8 HasStatus; // x0
  __int64 v454; // x1
  MapControl_WarInfo_o *v455; // x0
  WarEntity_o *v456; // x0
  __int64 v457; // x1
  int v458; // w23
  bool v459; // cc
  __int64 v460; // x1
  struct QuestTree___c__DisplayClass42_6_o *v461; // x9
  MapControl_WarInfo_o *v462; // x0
  struct QuestTree___c__DisplayClass42_6_o *v463; // x8
  MapControl_SpotInfo_o *v464; // x0
  MapControl_QuestInfo_o *v465; // x0
  int32_t v466; // w2
  int32_t v467; // w3
  struct MapControl_WarInfo_o *v468; // x1
  MapControl_QuestInfo_o *v469; // x22
  int32_t v470; // w8
  struct MapControl_SpotInfo_o *v471; // x1
  int32_t v472; // w2
  int32_t v473; // w3
  __int64 v474; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v477; // x1
  struct WarEntity_o *v478; // x8
  struct QuestTree___c__DisplayClass42_6_o *v479; // x9
  struct WarEntity_o *v480; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v481; // x0
  _BOOL8 v482; // x0
  __int64 v483; // x1
  struct QuestTree___c__DisplayClass42_6_o *v484; // x8
  __int64 v485; // x1
  MapControl_WarInfo_o *v486; // x0
  int v487; // w24
  __int64 v488; // x1
  MapControl_SpotInfo_o *v489; // x0
  __int64 v490; // x1
  MapControl_SpotInfo_o *v491; // x0
  QuestEntity_o *v492; // x0
  __int64 v493; // x1
  _BOOL8 HasFlag; // x0
  __int64 v495; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v496; // x8
  struct MapControl_SpotInfo_o *v497; // x9
  struct MapControl_MapInfo_o *v498; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v500; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v501; // x8
  struct MapControl_SpotInfo_o *v502; // x9
  struct MapControl_MapInfo_o *v503; // x8
  MapControl_SpotInfo_o *v504; // x0
  UserQuestEntity_o *v505; // x0
  bool v506; // w8
  struct QuestTree___c__DisplayClass42_6_o *v507; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v510; // x1
  struct QuestTree___c__DisplayClass42_6_o *v511; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v513; // x0
  __int64 v514; // x1
  int32_t v515; // w2
  int32_t v516; // w3
  _QWORD *v517; // x20
  __int64 v518; // x8
  int v519; // w21
  int v520; // w23
  __int64 v521; // x8
  System_Collections_Generic_List_object__o *v522; // x0
  struct System_Object_array *v523; // x8
  _QWORD *v524; // x9
  __int64 v525; // x10
  Il2CppClass **v526; // x8
  int32_t v527; // w2
  int32_t v528; // w3
  System_Collections_Generic_List_object__o *v529; // x20
  QuestTree___c_c *v530; // x8
  System_Comparison_T__o *_9__42_11; // x21
  Il2CppObject *v532; // x22
  struct QuestTree___c_StaticFields *v533; // x0
  int32_t v534; // w2
  int32_t v535; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v536; // x0
  int32_t v537; // w2
  int32_t v538; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v539; // x0
  int32_t v540; // w2
  int32_t v541; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v542; // x0
  int32_t v543; // w2
  int32_t v544; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v545; // x0
  int32_t v546; // w2
  int32_t v547; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v548; // x0
  int32_t v549; // w2
  int32_t v550; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v551; // x0
  int32_t v552; // w2
  int32_t v553; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v554; // x0
  int32_t v555; // w2
  int32_t v556; // w3
  Il2CppObject *v557; // x0
  __int64 v558; // x1
  int32_t v559; // w2
  int32_t v560; // w3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v561; // x0
  System_Collections_Generic_List_Enumerator_T__o v562[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v563; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o **v564; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v566; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v570; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v572; // [xsp+88h] [xbp-68h] BYREF

  v4 = this;
  v572 = this;
  if ( (byte_4A58397 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
    sub_1B885B0(&System_Comparison_MapControl_QuestInfo__TypeInfo);
    sub_1B885B0(&System_Comparison_MapControl_WarInfo__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventStatusQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MapMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPickupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotRoadMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1B885B0(&Method_DataManager_getEntitys_WarMaster__WarEntity___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_QuestEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_QuestEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_QuestEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__);
    sub_1B885B0(&System_Func_MapControl_SpotInfo__int__TypeInfo);
    sub_1B885B0(&System_Func_MapControl_SpotInfo__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_QuestEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&MapControl_MapInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_WarInfo__TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_MapInfo__TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_QuestInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&MapControl_SpotInfo_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__);
    sub_1B885B0(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__);
    sub_1B885B0(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__);
    sub_1B885B0(&QuestTree___c__DisplayClass42_0_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__);
    sub_1B885B0(&QuestTree___c__DisplayClass42_1_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__);
    sub_1B885B0(&QuestTree___c__DisplayClass42_2_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__);
    sub_1B885B0(&QuestTree___c__DisplayClass42_3_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__);
    sub_1B885B0(&QuestTree___c__DisplayClass42_4_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__);
    sub_1B885B0(&QuestTree___c__DisplayClass42_5_TypeInfo);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__);
    sub_1B885B0(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__);
    sub_1B885B0(&QuestTree___c__DisplayClass42_6_TypeInfo);
    sub_1B885B0(&QuestTree___c_TypeInfo);
    sub_1B885B0(&WarEntity_TypeInfo);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)sub_1B885B0(&MapControl_WarInfo_TypeInfo);
    v4 = v572;
    byte_4A58397 = 1;
  }
  v570 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v566 = 0LL;
  mapGimmickInfo = 0LL;
  v563 = 0LL;
  v564 = &v572;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (QuestTree___c__DisplayClass42_0_o *)sub_1B887FC(QuestTree___c__DisplayClass42_0_TypeInfo);
      QuestTree___c__DisplayClass42_0___ctor(v6, 0LL);
      v7 = v572;
      v572->fields.__8__2 = v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.__8__2, (int32_t)v6, v8, v9);
      _8__2 = v572->fields.__8__2;
      if ( !_8__2 )
        sub_1B8880C(v10, v11);
      _8__2->fields.targetWarId = v572->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v14 = v572;
      v572->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields._dataManager_5__2, (int32_t)Instance, v15, v16);
      dataManager_5__2 = v572->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1B8880C(0LL, v17);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapMaster___);
      v21 = v572->fields._dataManager_5__2;
      if ( !v21 )
        sub_1B8880C(0LL, v19);
      v22 = DataManager__GetMasterData_object_(
              v21,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
      v23 = v572;
      v572->fields._spotMaster_5__3 = (struct SpotMaster_o *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->fields._spotMaster_5__3, (int32_t)v22, v24, v25);
      v27 = v572->fields._dataManager_5__2;
      if ( !v27 )
        sub_1B8880C(0LL, v26);
      v28 = DataManager__GetMasterData_object_(
              v27,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v29 = v572;
      v572->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v28;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->fields._blankEarthSpotMaster_5__4, (int32_t)v28, v30, v31);
      v33 = v572->fields._dataManager_5__2;
      if ( !v33 )
        sub_1B8880C(0LL, v32);
      v34 = DataManager__GetMasterData_object_(
              v33,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
      v35 = v572;
      v572->fields._questMaster_5__5 = (struct QuestMaster_o *)v34;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->fields._questMaster_5__5, (int32_t)v34, v36, v37);
      v39 = v572->fields._dataManager_5__2;
      if ( !v39 )
        sub_1B8880C(0LL, v38);
      v40 = DataManager__GetMasterData_object_(
              v39,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v41 = v572;
      v572->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->fields._questPhaseMaster_5__6, (int32_t)v40, v42, v43);
      v45 = v572->fields._dataManager_5__2;
      if ( !v45 )
        sub_1B8880C(0LL, v44);
      v47 = DataManager__GetMasterData_object_(
              v45,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      v48 = v572->fields._dataManager_5__2;
      if ( !v48 )
        sub_1B8880C(0LL, v46);
      v50 = DataManager__GetMasterData_object_(
              v48,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v51 = v572->fields._dataManager_5__2;
      if ( !v51 )
        sub_1B8880C(0LL, v49);
      v53 = DataManager__GetMasterData_object_(
              v51,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v54 = v572->fields._dataManager_5__2;
      if ( !v54 )
        sub_1B8880C(0LL, v52);
      v56 = DataManager__GetMasterData_object_(
              v54,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v57 = v572->fields._dataManager_5__2;
      if ( !v57 )
        sub_1B8880C(0LL, v55);
      v58 = DataManager__GetMasterData_object_(
              v57,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v59 = v572;
      v572->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v58;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v59->fields._spotRoadMaster_5__7, (int32_t)v58, v60, v61);
      v63 = v572->fields._dataManager_5__2;
      if ( !v63 )
        sub_1B8880C(0LL, v62);
      v64 = DataManager__GetMasterData_object_(
              v63,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v65 = v572;
      v572->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v64;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v65->fields._mapGimmickMaster_5__8, (int32_t)v64, v66, v67);
      v69 = v572->fields._dataManager_5__2;
      if ( !v69 )
        sub_1B8880C(0LL, v68);
      v70 = DataManager__GetMasterData_object_(
              v69,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v71 = v572;
      v572->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v70;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v71->fields._questPickupMaster_5__9, (int32_t)v70, v72, v73);
      v74 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v74,
        (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v75 = v572;
      v572->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v74;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v75->fields._eventStatusQuestMismatchDictionary_5__10,
        (int32_t)v74,
        v76,
        v77);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v572->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v78 = (QuestTree___c__DisplayClass42_1_o *)sub_1B887FC(QuestTree___c__DisplayClass42_1_TypeInfo);
      QuestTree___c__DisplayClass42_1___ctor(v78, 0LL);
      v79 = v572;
      v572->fields.__8__1 = v78;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v79->fields.__8__1, (int32_t)v78, v80, v81);
      v83 = v572->fields._dataManager_5__2;
      if ( !v83 )
        sub_1B8880C(0LL, v82);
      Entitys_object__object = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__getEntitys_object__object_(
                                                                                      v83,
                                                                                      (const MethodInfo_2E7FB68 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v85 = (Il2CppObject *)v572->fields.__8__2;
      v86 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v86,
        v85,
        Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v87 = System_Linq_Enumerable__SingleOrDefault_object__48981240(
              Entitys_object__object,
              (System_Func_TSource__bool__o *)v86,
              (const MethodInfo_2EB64F8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v87 )
        sub_1B8880C(0LL, v88);
      _8__1 = v572->fields.__8__1;
      if ( !_8__1 )
        sub_1B8880C(v87, v88);
      klass_low = LODWORD(v87[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1B8880C(v87, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1B8880C(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v93 = (Il2CppObject *)v572->fields.__8__1;
      v94 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v94,
        v93,
        Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1B8880C(v95, v96);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v94,
                (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v98 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v99 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v99 )
          sub_1B8880C(0LL, v98);
        System_Collections_Generic_List_object___RemoveAt(
          v99,
          v98,
          (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v100 = v572->fields.__8__1;
      if ( !v100 )
        sub_1B8880C(Index, v98);
      v101 = _4__this->fields.mapControlRootInfo;
      if ( !v101 )
        sub_1B8880C(0LL, v98);
      v102 = MapControl_RootInfo__AddChild(v101, v100->fields.warId, v572->fields._nowTime_5__11, 0LL);
      v103 = v572;
      v572->fields._warInfo_5__14 = v102;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v103->fields._warInfo_5__14, (int32_t)v102, v104, v105);
      warInfo_5__14 = v572->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1B8880C(0LL, v106);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v111 = v572->fields._warInfo_5__14;
        if ( !v111 )
          sub_1B8880C(0LL, v108);
        EventId = MapControl_WarInfo__GetEventId(v111, 0LL);
        if ( !v47 )
          sub_1B8880C(EventId, v113);
        v114 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v47,
                 &entity,
                 EventId,
                 (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v114 )
        {
          if ( !entity )
            sub_1B8880C(v114, v108);
          v115 = v572;
          nowTime_5__11 = v572->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v117 = v572->fields._warInfo_5__14;
            if ( !v117 )
              sub_1B8880C(0LL, v108);
            MapControl_WarInfo__SetStatusCheckFlag(v117, 1, 0, 0LL);
            v115 = v572;
          }
          v118 = v115->fields._warInfo_5__14;
          if ( !v118 )
            sub_1B8880C(0LL, v108);
          v119 = MapControl_WarInfo__GetEventId(v118, 0LL);
          if ( !v50 )
            sub_1B8880C(v119, v120);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v50,
                 &v570,
                 v119,
                 (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v570 )
              sub_1B8880C(0LL, v121);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v570, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1B8880C(0LL, v122);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v572->fields._nowTime_5__11, 0LL) )
              {
                v124 = v572->fields._warInfo_5__14;
                if ( !v124 )
                  sub_1B8880C(0LL, v123);
                v125 = MapControl_WarInfo__GetEventId(v124, 0LL);
                if ( !v53 )
                  sub_1B8880C(v125, (unsigned int)v125);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v53, v125, 0LL);
                if ( NowEntity )
                {
                  v128 = v572->fields._warInfo_5__14;
                  if ( !v128 )
                    sub_1B8880C(0LL, v126);
                  v129 = MapControl_WarInfo__GetEventId(v128, 0LL);
                  if ( !v56 )
                    sub_1B8880C(v129, (unsigned int)v129);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v56,
                                        v129,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v132 = v572->fields.__8__1;
                  if ( !v132 )
                    sub_1B8880C(MismatchQuestList, v131);
                  v133 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v572->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1B8880C(0LL, v131);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v132->fields.warId,
                    v133,
                    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v135 = v572->fields._nowTime_5__11;
          v136 = (System_Int64_array *)sub_1B88658(long___TypeInfo, 3LL);
          v138 = entity;
          if ( !entity )
            sub_1B8880C(v136, v137);
          if ( !v136 )
            sub_1B8880C(0LL, v137);
          max_length = v136->max_length;
          if ( !max_length )
            sub_1B88814(v136, v137);
          v136->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1B88814(v136, v137);
          v136->m_Items[1] = (int64_t)v138[5].monitor;
          if ( max_length <= 2 )
            sub_1B88814(v136, v137);
          v136->m_Items[2] = (int64_t)v138[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v135, v136, 0LL);
        }
      }
      v140 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v140 )
        sub_1B8880C(0LL, v108);
      items = v140->fields._items;
      v142 = (Il2CppObject *)v572->fields._warInfo_5__14;
      v143 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v140->fields._version;
      if ( !items )
        sub_1B8880C(v140, v142);
      size = v140->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v140,
          v142,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
      }
      else
      {
        v145 = &items->obj.klass + size;
        v140->fields._size = size + 1;
        v145[4] = (Il2CppClass *)v142;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v145 + 4), (int32_t)v142, v109, v110);
      }
      v217 = v572->fields._warInfo_5__14;
      if ( !v217 )
        sub_1B8880C(v146, v147);
      if ( !MasterData_object )
        sub_1B8880C(v146, v147);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v217->fields.warId, 0LL);
      v219 = v572;
      v572->fields._mapList_5__15 = List;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v219->fields._mapList_5__15, (int32_t)List, v220, v221);
      v213 = v572;
      mapList_5__15 = v572->fields._mapList_5__15;
      v572->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1B8880C(v211, v212);
      mapCount_5__13 = mapList_5__15->max_length;
      v215 = 0;
      v213->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_115;
    case 1:
      v149 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v149 )
        sub_1B8880C(this, method);
      spotRoadMaster_5__7 = v4->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1B8880C(0LL, method);
      v151 = SpotRoadMaster__getList(spotRoadMaster_5__7, v149->fields.mapId, 0LL);
      v153 = v151;
      if ( !v151 )
        sub_1B8880C(0LL, v152);
      v154 = v151->max_length;
      if ( v154 >= 1 )
      {
        for ( i = 0; i != v154; ++i )
        {
          v156 = (QuestTree___c__DisplayClass42_4_o *)sub_1B887FC(QuestTree___c__DisplayClass42_4_TypeInfo);
          QuestTree___c__DisplayClass42_4___ctor(v156, 0LL);
          if ( i >= v153->max_length )
            sub_1B88814(v157, v158);
          v159 = v153->m_Items[i];
          if ( !v159 )
            sub_1B8880C(v157, v158);
          if ( !v156 )
            sub_1B8880C(v157, v158);
          v156->fields.spotRoadId = v159->fields.id;
          if ( !_4__this )
            sub_1B8880C(v157, v158);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v161 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v161,
            (Il2CppObject *)v156,
            Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1B8880C(v162, v163);
          v164 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v161,
                   (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v165 = v164;
          if ( v164 != -1 )
          {
            v166 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v166 )
              sub_1B8880C(0LL, v165);
            System_Collections_Generic_List_object___RemoveAt(
              v166,
              v165,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v572->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1B8880C(0LL, v165);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, v156->fields.spotRoadId, 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v159, &spotRoadInfo, 0LL);
          v171 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v171 )
            sub_1B8880C(0LL, v168);
          v172 = (Il2CppObject *)spotRoadInfo;
          v173 = v171->fields._items;
          v174 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v171->fields._version;
          if ( !v173 )
            sub_1B8880C(v171, v172);
          v175 = v171->fields._size;
          if ( (unsigned int)v175 >= v173->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v171,
              v172,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
          }
          else
          {
            v176 = &v173->obj.klass + v175;
            v171->fields._size = v175 + 1;
            v176[4] = (Il2CppClass *)v172;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v176 + 4), (int32_t)v172, v169, v170);
          }
        }
      }
      v177 = v572->fields.__8__1;
      if ( !v177 )
        sub_1B8880C(v151, v152);
      mapGimmickMaster_5__8 = v572->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1B8880C(0LL, v152);
      v179 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v177->fields.mapId, 0LL);
      v183 = v179;
      if ( !v179 )
        sub_1B8880C(0LL, v180);
      v184 = v179->max_length;
      if ( v184 >= 1 )
      {
        for ( j = 0; j != v184; ++j )
        {
          v186 = (QuestTree___c__DisplayClass42_5_o *)sub_1B887FC(QuestTree___c__DisplayClass42_5_TypeInfo);
          QuestTree___c__DisplayClass42_5___ctor(v186, 0LL);
          if ( j >= v183->max_length )
            sub_1B88814(v187, v188);
          v189 = v183->m_Items[j];
          if ( !v189 )
            sub_1B8880C(v187, v188);
          if ( !v186 )
            sub_1B8880C(v187, v188);
          v186->fields.mapGimmickId = v189->fields.id;
          if ( !_4__this )
            sub_1B8880C(v187, v188);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v191 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v191,
            (Il2CppObject *)v186,
            Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1B8880C(v192, v193);
          v194 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v191,
                   (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v195 = v194;
          if ( v194 != -1 )
          {
            v196 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v196 )
              sub_1B8880C(0LL, v195);
            System_Collections_Generic_List_object___RemoveAt(
              v196,
              v195,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v197 = v572->fields._mapInfo_5__16;
          if ( !v197 )
            sub_1B8880C(0LL, v195);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v197, v186->fields.mapGimmickId, 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v201 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v201 )
            sub_1B8880C(0LL, v198);
          v202 = (Il2CppObject *)mapGimmickInfo;
          v203 = v201->fields._items;
          v204 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v201->fields._version;
          if ( !v203 )
            sub_1B8880C(v201, v202);
          v205 = v201->fields._size;
          if ( (unsigned int)v205 >= v203->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v201,
              v202,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
          }
          else
          {
            v206 = &v203->obj.klass + v205;
            v201->fields._size = v205 + 1;
            v206[4] = (Il2CppClass *)v202;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v206 + 4), (int32_t)v202, v199, v200);
          }
        }
      }
      v207 = v572;
      v572->fields.__2__current = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v207->fields.__2__current, 0, v181, v182);
      v208 = v572;
      v209 = 2;
      goto LABEL_326;
    case 2:
      v4->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (ServantStatusBattleListViewItem_o *)&v4->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-1].klass) = -1;
      sub_1B88554(p_mapInfo_5__16, 0, v2, v3);
      v213 = v572;
      mapCount_5__13 = v572->fields._mapCount_5__13;
      v215 = v572->fields._mapIdx_5__12 + 1;
      v572->fields._mapIdx_5__12 = v215;
LABEL_115:
      if ( v215 < mapCount_5__13 )
      {
        v223 = v213->fields._mapList_5__15;
        if ( !v223 )
          sub_1B8880C(v211, v212);
        if ( v215 >= v223->max_length )
          sub_1B88814(v211, v212);
        v224 = v223->m_Items[v215];
        if ( !v224 )
          sub_1B8880C(v211, v212);
        v225 = v213->fields.__8__1;
        if ( !v225 )
          sub_1B8880C(v211, v212);
        v225->fields.mapId = v224->fields.id;
        v226 = v213->fields._warInfo_5__14;
        if ( !v226 )
          sub_1B8880C(v211, v212);
        mapInfoList = (System_Collections_Generic_List_object__o *)v226->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v225->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v225,
              Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v225->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v225->fields.__9__3, (int32_t)_9__3, v229, v230);
          }
          v211 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v212 = (unsigned int)v211;
          if ( (_DWORD)v211 != -1 )
          {
            v231 = v572->fields._warInfo_5__14;
            if ( !v231 )
              sub_1B8880C(v211, (unsigned int)v211);
            v232 = (System_Collections_Generic_List_object__o *)v231->fields.mapInfoList;
            if ( !v232 )
              sub_1B8880C(0LL, v212);
            System_Collections_Generic_List_object___RemoveAt(
              v232,
              v212,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1B8880C(v211, v212);
        v233 = v572->fields.__8__1;
        if ( !v233 )
          sub_1B8880C(v211, v212);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v233->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v233,
            Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v233->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v233->fields.__9__4, (int32_t)_9__4, v236, v237);
        }
        if ( !allMapInfoList )
          sub_1B8880C(v211, v212);
        v238 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v239 = (unsigned int)v238;
        if ( (_DWORD)v238 != -1 )
        {
          v240 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v240 )
            sub_1B8880C(0LL, v239);
          System_Collections_Generic_List_object___RemoveAt(
            v240,
            v239,
            (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v241 = v572->fields.__8__1;
        if ( !v241 )
          sub_1B8880C(v238, v239);
        v242 = v572->fields._warInfo_5__14;
        if ( !v242 )
          sub_1B8880C(0LL, v239);
        v243 = MapControl_WarInfo__AddChild(v242, v241->fields.mapId, 0LL);
        v244 = v572;
        v572->fields._mapInfo_5__16 = v243;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v244->fields._mapInfo_5__16, (int32_t)v243, v245, v246);
        v250 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v250 )
          sub_1B8880C(0LL, v247);
        v251 = v250->fields._items;
        v252 = (Il2CppObject *)v572->fields._mapInfo_5__16;
        v253 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v250->fields._version;
        if ( !v251 )
          sub_1B8880C(v250, v252);
        v254 = v250->fields._size;
        if ( (unsigned int)v254 >= v251->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v250,
            v252,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
        }
        else
        {
          v255 = &v251->obj.klass + v254;
          v250->fields._size = v254 + 1;
          v255[4] = (Il2CppClass *)v252;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v255 + 4), (int32_t)v252, v248, v249);
        }
        v351 = v572->fields.__8__1;
        if ( !v351 )
          sub_1B8880C(v256, v257);
        spotMaster_5__3 = v572->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1B8880C(0LL, v257);
        v353 = SpotMaster__getList(spotMaster_5__3, v351->fields.mapId, 0LL);
        v355 = v353;
        if ( !v353 )
          sub_1B8880C(0LL, v354);
        v356 = v353->max_length;
        if ( v356 >= 1 )
        {
          for ( k = 0; k != v356; ++k )
          {
            v358 = (QuestTree___c__DisplayClass42_2_o *)sub_1B887FC(QuestTree___c__DisplayClass42_2_TypeInfo);
            QuestTree___c__DisplayClass42_2___ctor(v358, 0LL);
            if ( k >= v355->max_length )
              sub_1B88814(v359, v360);
            v361 = v355->m_Items[k];
            if ( !v361 )
              sub_1B8880C(v359, v360);
            if ( !v358 )
              sub_1B8880C(v359, v360);
            v358->fields.spotId = v361->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v363 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v363,
              (Il2CppObject *)v358,
              Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1B8880C(v364, v365);
            v366 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v363,
                     (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v367 = v366;
            if ( v366 != -1 )
            {
              v368 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v368 )
                sub_1B8880C(0LL, v367);
              System_Collections_Generic_List_object___RemoveAt(
                v368,
                v367,
                (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v369 = v572->fields._mapInfo_5__16;
            if ( !v369 )
              sub_1B8880C(0LL, v367);
            spotInfo = MapControl_MapInfo__AddChild(v369, v358->fields.spotId, 0LL);
            QuestTree__SetupSpotInfo(_4__this, v361, &spotInfo, 0LL);
            v373 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v373 )
              sub_1B8880C(0LL, v370);
            v374 = (Il2CppObject *)spotInfo;
            v375 = v373->fields._items;
            v376 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v373->fields._version;
            if ( !v375 )
              sub_1B8880C(v373, v374);
            v377 = v373->fields._size;
            if ( (unsigned int)v377 >= v375->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v373,
                v374,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v376[4] + 192LL) + 112LL));
            }
            else
            {
              v378 = &v375->obj.klass + v377;
              v373->fields._size = v377 + 1;
              v378[4] = (Il2CppClass *)v374;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v378 + 4), (int32_t)v374, v371, v372);
            }
          }
        }
        v379 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v572->fields._mapInfo_5__16,
                 v572->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v380 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v379,
                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v384 = (System_Collections_Generic_IEnumerable_TSource__o *)v380;
        if ( !v380 )
          sub_1B8880C(0LL, v381);
        if ( *(_QWORD *)&v380->max_length )
        {
          v385 = sub_1B887FC(QuestTree___c__DisplayClass42_3_TypeInfo);
          QuestTree___c__DisplayClass42_3___ctor((QuestTree___c__DisplayClass42_3_o *)v385, 0LL);
          v386 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v386 = QuestTree___c_TypeInfo;
          }
          _9__42_6 = (System_Func_object__int__o *)v386->static_fields->__9__42_6;
          if ( !_9__42_6 )
          {
            if ( !v386->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v386);
              v386 = QuestTree___c_TypeInfo;
            }
            v388 = (Il2CppObject *)v386->static_fields->__9;
            _9__42_6 = (System_Func_object__int__o *)sub_1B887FC(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__42_6,
              v388,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__42_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__42_6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_6, (int32_t)_9__42_6, v390, v391);
          }
          v392 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v384,
                                                                  (System_Func_TSource__TResult__o *)_9__42_6,
                                                                  (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v393 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_54209644(
            v393,
            v392,
            (const MethodInfo_33B2C6C *)Method_System_Collections_Generic_HashSet_int___ctor___76016464);
          if ( !v385 )
            sub_1B8880C(v394, v395);
          *(_QWORD *)(v385 + 16) = v393;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v385 + 16), (int32_t)v393, v396, v397);
          v398 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v399 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v399,
            (Il2CppObject *)v385,
            Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v398,
            (System_Func_T__bool__o *)v399,
            (const MethodInfo_2E6F238 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v401 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v401 )
            sub_1B8880C(0LL, v400);
          System_Collections_Generic_List_object___AddRange(
            v401,
            (System_Collections_Generic_IEnumerable_T__o *)v384,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v402 = v572;
        v572->fields.__2__current = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v402->fields.__2__current, 0, v382, v383);
        result = 1;
        v572->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1B8880C(v211, v212);
      v258 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v259 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v259 = QuestTree___c_TypeInfo;
      }
      _9__42_2 = (System_Comparison_T__o *)v259->static_fields->__9__42_2;
      if ( !_9__42_2 )
      {
        if ( !v259->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v259);
          v259 = QuestTree___c_TypeInfo;
        }
        v261 = (Il2CppObject *)v259->static_fields->__9;
        _9__42_2 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__42_2,
          v261,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__,
          0LL);
        v262 = QuestTree___c_TypeInfo->static_fields;
        v262->__9__42_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__42_2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v262->__9__42_2, (int32_t)_9__42_2, v263, v264);
      }
      if ( !v258 )
        sub_1B8880C(v211, v212);
      System_Collections_Generic_List_object___Sort_55571192(
        v258,
        _9__42_2,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v265 = v572;
      v572->fields.__8__1 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v265->fields.__8__1, 0, v266, v267);
      v268 = v572;
      v572->fields._warInfo_5__14 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v268->fields._warInfo_5__14, 0, v269, v270);
      v271 = v572;
      v572->fields._mapList_5__15 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v271->fields._mapList_5__15, 0, v272, v273);
      v274 = (QuestTree___c__DisplayClass42_6_o *)sub_1B887FC(QuestTree___c__DisplayClass42_6_TypeInfo);
      QuestTree___c__DisplayClass42_6___ctor(v274, 0LL);
      v275 = v572;
      v572->fields.__8__3 = v274;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v275->fields.__8__3, (int32_t)v274, v276, v277);
      v278 = v572->fields._nowTime_5__11;
      v279 = (MapControl_WarInfo_o *)sub_1B887FC(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v279, v278, 0LL);
      v280 = v572;
      v572->fields._warInfo_5__14 = v279;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v280->fields._warInfo_5__14, (int32_t)v279, v281, v282);
      v283 = (MapControl_MapInfo_o *)sub_1B887FC(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v283, 0LL);
      v284 = v572;
      v572->fields._mapInfo_5__16 = v283;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v284->fields._mapInfo_5__16, (int32_t)v283, v285, v286);
      v287 = (MapControl_SpotInfo_o *)sub_1B887FC(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v287, 0LL);
      v288 = v572;
      v572->fields._spotInfo_5__17 = v287;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v288->fields._spotInfo_5__17, (int32_t)v287, v289, v290);
      v291 = (WarEntity_o *)sub_1B887FC(WarEntity_TypeInfo);
      WarEntity___ctor(v291, 0LL);
      v292 = v572;
      v572->fields._warEnt_5__18 = v291;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v292->fields._warEnt_5__18, (int32_t)v291, v293, v294);
      v296 = v572->fields._dataManager_5__2;
      if ( !v296 )
        sub_1B8880C(0LL, v295);
      v297 = DataManager__GetMasterData_object_(
               v296,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v298 = v572;
      v572->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v297;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v298->fields._userQuestMaster_5__19, (int32_t)v297, v299, v300);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v303 = v572;
      _8__3 = v572->fields.__8__3;
      if ( !_8__3 )
        sub_1B8880C(Master_object, v302);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v303->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v572 )
        sub_1B8880C(isSavedMemoryMode, v306);
      if ( isSavedMemoryMode )
        v307 = 500;
      else
        v307 = 5000;
      v308 = v572->fields.__8__3;
      v572->fields._breakInterval_5__22 = v307;
      v309 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v309,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v308 )
        sub_1B8880C(v310, v311);
      v308->fields.spotInfoList = v309;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v308->fields, (int32_t)v309, v312, v313);
      v572->fields._cnt_5__23 = 0;
      v315 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v315 )
        sub_1B8880C(0LL, v314);
      System_Collections_Generic_List_object___GetEnumerator(
        v562,
        v315,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v316 = v572;
      v317 = *(_OWORD *)&v562[0].fields._list;
      p__7__wrap24 = (ServantStatusBattleListViewItem_o *)&v572->fields.__7__wrap24;
      v562[1] = v562[0];
      v572->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v562[0].fields._current;
      *(_OWORD *)&v316->fields.__7__wrap24.fields._list = v317;
      sub_1B88554(p__7__wrap24, 0, v319, v320);
      v4 = v572;
LABEL_163:
      v4->fields.__1__state = -3;
      while ( 1 )
      {
        v322 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap24,
                 (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v323 = v572;
        if ( !v322 )
          break;
        current = v572->fields.__7__wrap24.fields._current;
        ++v572->fields._cnt_5__23;
        if ( !current )
          sub_1B8880C(v323, v321);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1B8880C(0LL, v326);
        v4 = v572;
        v329 = v572->fields.__8__2;
        if ( !v329 )
          sub_1B8880C(Mine, v326);
        if ( Mine->fields.warId == v329->fields.targetWarId )
        {
          v330 = v572->fields.__8__3;
          if ( !v330 )
            sub_1B8880C(Mine, v326);
          spotInfoList = v330->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1B8880C(0LL, v326);
          spotId = (unsigned int)current->fields.spotId;
          v333 = spotInfoList->fields._items;
          v334 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v333 )
            sub_1B8880C(spotInfoList, spotId);
          v335 = spotInfoList->fields._size;
          if ( (unsigned int)v335 >= v333->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v334[4] + 192LL) + 112LL));
            v4 = v572;
          }
          else
          {
            spotInfoList->fields._size = v335 + 1;
            v333->m_Items[v335 + 1] = spotId;
          }
        }
        HIDWORD(v336) = 28633112 - 1775253149 * v4->fields._cnt_5__23;
        LODWORD(v336) = HIDWORD(v336);
        if ( (unsigned int)(v336 >> 2) < 0xDA740D )
        {
          v4->fields.__2__current = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v327, v328);
          v208 = v572;
          v209 = 3;
LABEL_326:
          v208->fields.__1__state = v209;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42____m__Finally1(v572, v321);
      v338 = v572;
      questMaster_5__5 = (DataMasterBase_o *)v572->fields._questMaster_5__5;
      v572->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v338->fields.__7__wrap24.fields._index = 0LL;
      v338->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1B8880C(0LL, v337);
      Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                              questMaster_5__5,
                                                                              (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v341 = (Il2CppObject *)v572->fields.__8__3;
      v342 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v342,
        v341,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v343 = System_Linq_Enumerable__Where_object_(
               Entitys_object,
               (System_Func_TSource__bool__o *)v342,
               (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v344 = System_Linq_Enumerable__ToArray_object_(
               v343,
               (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v345 = v572;
      v572->fields._questList_5__24 = (struct QuestEntity_array *)v344;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v345->fields._questList_5__24, (int32_t)v344, v346, v347);
      v348 = v572;
      v572->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v348->fields._questList_5__24,
                       (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v4 = v572;
      v350 = v572->fields._mapCount_5__13;
      v572->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_163;
    case 4:
      v148 = v4->fields._mapCount_5__13;
      v4->fields.__1__state = -1;
      goto LABEL_449;
    case 5:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        sub_1B8880C(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v350 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v4->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1B8880C(mapIdx_5__12, method);
    if ( v350 >= questList_5__24->max_length )
      sub_1B88814(mapIdx_5__12, method);
    v405 = questList_5__24->m_Items[v350];
    if ( !v405 )
      sub_1B8880C(mapIdx_5__12, method);
    v406 = v4->fields.__8__3;
    if ( !v406 )
      sub_1B8880C(mapIdx_5__12, method);
    v406->fields.questId = v405->fields.id;
    userQuestMaster_5__19 = v4->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v410 = v572->fields.__8__3;
    if ( !v410 )
      sub_1B8880C(UserId, v409);
    if ( !userQuestMaster_5__19 )
      sub_1B8880C(UserId, v409);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__19, &v566, UserId, v410->fields.questId, 0LL) )
    {
      if ( !v566 )
        sub_1B8880C(0LL, v411);
      QuestPhase = UserQuestEntity__getQuestPhase(v566, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_39470408 = (MapEntity_o *)QuestEntity__getSpotId_39470408(v405, QuestPhase + 1, 0LL);
    v415 = v572;
    v416 = v572->fields.__8__3;
    if ( !v416 )
      sub_1B8880C(SpotId_39470408, warId);
    if ( v416->fields.nowSpotId == (_DWORD)SpotId_39470408 )
    {
      if ( !_4__this )
        sub_1B8880C(SpotId_39470408, warId);
    }
    else
    {
      v416->fields.nowSpotId = (int)SpotId_39470408;
      if ( !_4__this )
        sub_1B8880C(SpotId_39470408, warId);
      v417 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v416->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v416,
          Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v416->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v416->fields.__9__12, (int32_t)_9__12, v419, v420);
      }
      if ( !v417 )
        sub_1B8880C(SpotId_39470408, warId);
      v421 = System_Collections_Generic_List_object___Find(
               v417,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v415->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v421;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v415->fields._spotInfo_5__17, (int32_t)v421, v422, v423);
      spotInfo_5__17 = v572->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1B8880C(0LL, v424);
      SpotId_39470408 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_39470408;
      if ( v572->fields._nowMapId_5__20 != (_DWORD)SpotId_39470408 )
      {
        v572->fields._nowMapId_5__20 = (int)SpotId_39470408;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_39470408, 0LL);
        v427 = v572;
        v572->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v427->fields._mapInfo_5__16,
          (int32_t)MapInfoByMapID,
          v428,
          v429);
        v431 = v572->fields._mapInfo_5__16;
        if ( !v431 )
          sub_1B8880C(0LL, v430);
        SpotId_39470408 = MapControl_MapInfo__GetMine(v431, 0LL);
        if ( !SpotId_39470408 )
          sub_1B8880C(0LL, v432);
        warId = (unsigned int)SpotId_39470408->fields.warId;
        if ( v572->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v572->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v434 = v572;
          v572->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v434->fields._warInfo_5__14,
            (int32_t)WarInfoByWarID,
            v435,
            v436);
          v438 = v572->fields._warInfo_5__14;
          if ( !v438 )
            sub_1B8880C(0LL, v437);
          v439 = MapControl_WarInfo__GetMine(v438, 0LL);
          v440 = v572;
          v572->fields._warEnt_5__18 = v439;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v440->fields._warEnt_5__18, (int32_t)v439, v441, v442);
        }
      }
    }
    v443 = v572->fields.__8__3;
    if ( !v443 )
      sub_1B8880C(SpotId_39470408, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v443->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v443,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v443->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v443->fields.__9__13, (int32_t)_9__13, v446, v447);
    }
    if ( !allQuestInfoList )
      sub_1B8880C(SpotId_39470408, warId);
    v448 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v449 = v448;
    if ( v448 != -1 )
    {
      v450 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v450 )
        sub_1B8880C(0LL, v449);
      System_Collections_Generic_List_object___RemoveAt(
        v450,
        v449,
        (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v451 = v572->fields._warInfo_5__14;
    if ( !v566 )
    {
      if ( !v451 )
        sub_1B8880C(0LL, v449);
      goto LABEL_371;
    }
    if ( !v451 )
      sub_1B8880C(0LL, v449);
    MapControl_WarInfo__SetStatusCheckFlag(v451, 1, 0, 0LL);
    if ( !v566 )
      sub_1B8880C(0LL, v452);
    HasStatus = UserQuestEntity__HasStatus(v566, 8, 0LL);
    if ( !HasStatus )
    {
      v455 = v572->fields._warInfo_5__14;
      if ( !v455 )
        sub_1B8880C(0LL, v454);
      goto LABEL_373;
    }
    if ( !v566 )
      sub_1B8880C(HasStatus, v454);
    if ( v566->fields.challengeNum >= 1 )
    {
      v455 = v572->fields._warInfo_5__14;
      if ( !v455 )
        sub_1B8880C(0LL, v454);
LABEL_373:
      MapControl_WarInfo__SetStatusCheckFlag(v455, 4, 0, 0LL);
    }
    if ( !v566 )
      sub_1B8880C(0LL, v454);
    v459 = UserQuestEntity__getClearNum(v566, 0LL) < 1;
    v451 = v572->fields._warInfo_5__14;
    if ( v459 )
    {
      if ( !v451 )
        sub_1B8880C(0LL, v460);
LABEL_371:
      MapControl_WarInfo__SetStatusCheckFlag(v451, 2, 0, 0LL);
      v458 = 0;
      goto LABEL_385;
    }
    if ( !v451 )
      sub_1B8880C(0LL, v460);
    v456 = MapControl_WarInfo__GetMine(v451, 0LL);
    if ( !v456 )
      sub_1B8880C(0LL, v457);
    v461 = v572->fields.__8__3;
    if ( !v461 )
      sub_1B8880C(v456, v457);
    if ( v456->fields.lastQuestId == v461->fields.questId )
    {
      v462 = v572->fields._warInfo_5__14;
      if ( !v462 )
        sub_1B8880C(0LL, v457);
      v458 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v462, 8, 1, 0LL);
    }
    else
    {
      v458 = 1;
    }
LABEL_385:
    v463 = v572->fields.__8__3;
    if ( !v463 )
      sub_1B8880C(v456, v457);
    v464 = v572->fields._spotInfo_5__17;
    if ( !v464 )
      sub_1B8880C(0LL, v457);
    v465 = MapControl_SpotInfo__AddChild(v464, v463->fields.questId, 0LL);
    v468 = v572->fields._warInfo_5__14;
    if ( !v468 )
      sub_1B8880C(v465, 0LL);
    v469 = v465;
    if ( !v465 )
      sub_1B8880C(0LL, v468);
    v470 = v468->fields.warId;
    v465->fields._WarInfo_k__BackingField = v468;
    v465->fields.warId = v470;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v465->fields._WarInfo_k__BackingField, (int32_t)v468, v466, v467);
    v471 = v572->fields._spotInfo_5__17;
    v469->fields._SpotInfo_k__BackingField = v471;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v469->fields._SpotInfo_k__BackingField, (int32_t)v471, v472, v473);
    v469->fields.endTime = QuestTree__GetEndTime(_4__this, v469, 0LL);
    warEnt_5__18 = v572->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1B8880C(0LL, v474);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v478 = v572->fields._warEnt_5__18;
      if ( !v478 )
        sub_1B8880C(IsStartTypeQuest, v477);
      v479 = v572->fields.__8__3;
      if ( !v479 )
        sub_1B8880C(IsStartTypeQuest, v477);
      if ( v478->fields.targetId == v479->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v572->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_404;
      }
    }
    v480 = v572->fields._warEnt_5__18;
    if ( !v480 )
      sub_1B8880C(IsStartTypeQuest, v477);
    v481 = v572->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v481 )
      sub_1B8880C(0LL, v477);
    v482 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v481,
             v480->fields.id,
             &value,
             (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v482 )
    {
      v484 = v572->fields.__8__3;
      if ( !v484 )
        sub_1B8880C(v482, v483);
      if ( !value )
        sub_1B8880C(0LL, v483);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v484->fields.questId,
             (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_404:
        MapControl_QuestInfo__SetDispType(v469, 0, 0, 0, 0LL, 0, 0LL);
        v469->fields.touchType = 0;
LABEL_405:
        v487 = 1;
        goto LABEL_406;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v405, v469, v572->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_405;
    v486 = v572->fields._warInfo_5__14;
    if ( !v486 )
      sub_1B8880C(0LL, v485);
    MapControl_WarInfo__SetStatusCheckFlag(v486, 1, 0, 0LL);
    v487 = 0;
LABEL_406:
    if ( MapControl_QuestInfo__IsDisaplayable(v469, 0LL) )
    {
      if ( ((v458 | v487) & 1) == 0 )
      {
        v489 = v572->fields._spotInfo_5__17;
        if ( !v489 )
          sub_1B8880C(0LL, v488);
        MapControl_SpotInfo__AddQuestCount(v489, 1, 0LL);
        v491 = v572->fields._spotInfo_5__17;
        if ( !v491 )
          sub_1B8880C(0LL, v490);
        MapControl_SpotInfo__AddAvailableQuestId(v491, v469->fields.questId, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType(v469, 0LL) == 1 )
      {
        v492 = MapControl_QuestInfo__GetMine(v469, 0LL);
        if ( !v492 )
          sub_1B8880C(0LL, v493);
        HasFlag = QuestEntity__HasFlag(v492, 0x400000000000LL, 0LL);
        v496 = v572;
        if ( !HasFlag )
        {
          v497 = v572->fields._spotInfo_5__17;
          if ( !v497 )
            sub_1B8880C(HasFlag, v495);
          v497->fields._IsNext_k__BackingField = 1;
        }
        v498 = v496->fields._mapInfo_5__16;
        if ( !v498 )
          sub_1B8880C(HasFlag, v495);
        v498->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon(v469, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v501 = v572;
        v502 = v572->fields._spotInfo_5__17;
        if ( !v502 )
          sub_1B8880C(IsDisplayQuestNextIcon, v500);
        v502->fields._IsNext_k__BackingField = 1;
        v503 = v501->fields._mapInfo_5__16;
        if ( !v503 )
          sub_1B8880C(IsDisplayQuestNextIcon, v500);
        v503->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v405, 0x8000000000LL, 0LL) )
      {
        v504 = v572->fields._spotInfo_5__17;
        if ( !v504 )
          sub_1B8880C(0LL, v488);
        MapControl_SpotInfo__AddFreeQuestCount(v504, 1, 0LL);
      }
    }
    v505 = v566;
    if ( v566 )
    {
      v505 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v566, 8, 0LL);
      if ( ((unsigned __int8)v505 & 1) != 0 )
      {
        if ( !v566 )
          sub_1B8880C(v505, v488);
        v506 = v566->fields.challengeNum == 0;
      }
      else
      {
        v506 = 0;
      }
    }
    else
    {
      v506 = 1;
    }
    v469->fields.isNew = v506;
    v469->fields.questPhase = QuestPhase;
    v507 = v572->fields.__8__3;
    if ( !v507 )
      sub_1B8880C(v505, v488);
    questPickupMaster_5__9 = v572->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1B8880C(0LL, v488);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v507->fields.questId, 0LL);
    v469->fields.pickupPriority = Priority;
    v511 = v572->fields.__8__3;
    if ( !v511 )
      sub_1B8880C(Priority, v510);
    questPhaseMaster_5__6 = v572->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1B8880C(0LL, v510);
    v513 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v511->fields.questId, 0LL);
    v517 = v513;
    if ( !v513 )
      sub_1B8880C(0LL, v514);
    v518 = v513[3];
    v519 = v518 - 1;
    if ( (int)v518 >= 1 )
    {
      v520 = 0;
      while ( 1 )
      {
        v521 = v517[v520 + 4];
        if ( !v521 )
          sub_1B8880C(v513, v514);
        v513 = MapControl_QuestInfo__AddChild(v469, *(_DWORD *)(v521 + 16), *(_DWORD *)(v521 + 20), 0LL);
        if ( v519 == v520 )
          break;
        if ( (unsigned int)++v520 >= *((_DWORD *)v517 + 6) )
          sub_1B88814(v513, v514);
      }
    }
    v522 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v522 )
      sub_1B8880C(0LL, v514);
    v523 = v522->fields._items;
    v524 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v522->fields._version;
    if ( !v523 )
      sub_1B8880C(v522, v514);
    v525 = v522->fields._size;
    if ( (unsigned int)v525 >= v523->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v522,
        (Il2CppObject *)v469,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v524[4] + 192LL) + 112LL));
    }
    else
    {
      v526 = &v523->obj.klass + v525;
      v522->fields._size = v525 + 1;
      v526[4] = (Il2CppClass *)v469;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v526 + 4), (int32_t)v469, v515, v516);
    }
    v4 = v572;
    v148 = v572->fields._mapCount_5__13;
    if ( v148 && !(v148 % v572->fields._breakInterval_5__22) )
    {
      v572->fields.__2__current = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v527, v528);
      v208 = v572;
      v209 = 4;
      goto LABEL_326;
    }
LABEL_449:
    mapIdx_5__12 = (unsigned int)v4->fields._mapIdx_5__12;
    v350 = v148 + 1;
    v4->fields._mapCount_5__13 = v350;
  }
  if ( !_4__this )
    sub_1B8880C(mapIdx_5__12, method);
  v529 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v530 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v530 = QuestTree___c_TypeInfo;
  }
  _9__42_11 = (System_Comparison_T__o *)v530->static_fields->__9__42_11;
  if ( !_9__42_11 )
  {
    if ( !v530->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v530);
      v530 = QuestTree___c_TypeInfo;
    }
    v532 = (Il2CppObject *)v530->static_fields->__9;
    _9__42_11 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__42_11,
      v532,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__,
      0LL);
    v533 = QuestTree___c_TypeInfo->static_fields;
    v533->__9__42_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__42_11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v533->__9__42_11, (int32_t)_9__42_11, v534, v535);
  }
  if ( !v529 )
    sub_1B8880C(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_55571192(
    v529,
    _9__42_11,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v536 = v572;
  v572->fields.__8__3 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v536->fields.__8__3, 0, v537, v538);
  v539 = v572;
  v572->fields._warInfo_5__14 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v539->fields._warInfo_5__14, 0, v540, v541);
  v542 = v572;
  v572->fields._mapInfo_5__16 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v542->fields._mapInfo_5__16, 0, v543, v544);
  v545 = v572;
  v572->fields._spotInfo_5__17 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v545->fields._spotInfo_5__17, 0, v546, v547);
  v548 = v572;
  v572->fields._warEnt_5__18 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v548->fields._warEnt_5__18, 0, v549, v550);
  v551 = v572;
  v572->fields._userQuestMaster_5__19 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v551->fields._userQuestMaster_5__19, 0, v552, v553);
  v554 = v572;
  v572->fields._questList_5__24 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v554->fields._questList_5__24, 0, v555, v556);
  v557 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v557 )
    sub_1B8880C(0LL, v558);
  CommonUI__SetLoadMode((CommonUI_o *)v557, 0, 0LL);
  _4__this->fields.isInit = 1;
  v561 = v572;
  if ( v572->fields.endCallback )
  {
    v572->fields.__2__current = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v561->fields.__2__current, 0, v559, v560);
    v208 = v572;
    v209 = 5;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  if ( (byte_4A58398 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    byte_4A58398 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}