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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_List_object__o *v46; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_object__o *v60; // x20
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_List_object__o *v67; // x20
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7

  if ( (byte_4B3416E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v9);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v11);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v12);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v13);
    sub_1BD3458(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v15);
    sub_1BD3458(&MapControl_RootInfo_TypeInfo, v16);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree___ctor__, v17);
    byte_4B3416E = 1;
  }
  v18 = (MapControl_RootInfo_o *)sub_1BD36A4(MapControl_RootInfo_TypeInfo);
  MapControl_RootInfo___ctor(v18, 0LL);
  this->fields.mapControlRootInfo = v18;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v25;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.allQuestInfoList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v32;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.allSpotInfoList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v39;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.allSpotRoadInfoList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v46;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.allMapGimmickInfoList,
    (int64_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_MapInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v53;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.allMapInfoList, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v60;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.allWarInfoList, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v67 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v67,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v67;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questReleaseEntList,
    (int64_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37FE160 *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_34786200(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_34783256(
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

  if ( (byte_4B3416B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo);
    sub_1BD3458(&long___TypeInfo, v5);
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v8);
    byte_4B3416B = 1;
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
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1BD3500(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v15 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v15 || (*(_QWORD *)(Time + 32) = v13->fields.startedAt, (_DWORD)v15 == 1) )
      sub_1BD36BC(Time, v11);
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
      sub_1BD36B4(Time, v11);
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
  __int64 v26; // x8
  int64_t *v27; // x9
  int64_t v28; // x10
  int v29; // w22
  _BOOL4 v30; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v33; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v36; // w23
  int32_t v37; // w20
  int32_t closedMessageId; // w5
  int64_t value; // x4
  int32_t type; // w2
  int32_t targetId; // w3
  int32_t v42; // w1
  MapControl_QuestInfo_o *v43; // x0
  _BOOL4 v44; // w8
  UserQuestEntity_o *v46; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4B34167 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestAddMaster___, questEnt);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMasterData_WarMaster___, v10);
    sub_1BD3458(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11);
    sub_1BD3458(&long___TypeInfo, v12);
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    this = (QuestTree_o *)sub_1BD3458(&TerminalPramsManager_TypeInfo, v15);
    byte_4B34167 = 1;
  }
  entity = 0LL;
  questReleaseNG = 0LL;
  v46 = 0LL;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestAddMaster___);
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
  v25 = (_QWORD *)sub_1BD3500(long___TypeInfo, 3LL);
  Instance = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v25 )
    goto LABEL_75;
  v26 = v25[3];
  if ( !(_DWORD)v26 || (v25[4] = Instance, (_DWORD)v26 == 1) || (v25[5] = v23, (unsigned int)v26 <= 2) )
    sub_1BD36BC(Instance, v17);
  v25[6] = v24;
  if ( (int)v26 >= 1 )
  {
    v26 = (unsigned int)v26;
    v27 = v25 + 4;
    do
    {
      v28 = *v27;
      if ( *v27 > Time && v8->fields.forceUpdateTime > v28 )
        v8->fields.forceUpdateTime = v28;
      --v26;
      ++v27;
    }
    while ( v26 );
  }
  v29 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
  {
    v30 = 0;
    goto LABEL_57;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v29 = 3;
  else
    v29 = 1;
  if ( v18 || HasFlag )
  {
    v30 = !HasFlag;
    goto LABEL_57;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0LL) > Time
    && QuestEntity__getNoticeAt(questEnt, 0LL) <= Time )
  {
    goto LABEL_55;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_75;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             warId,
                             (const MethodInfo_31D1F44 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_75;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B31D77 )
          {
            sub_1BD3458(&NetworkManager_TypeInfo, v17);
            byte_4B31D77 = 1;
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
                  &v46,
                  *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                  questEnt->fields.id,
                  0LL) )
            goto LABEL_56;
          Instance = (int64_t)v46;
          if ( !v46 )
            goto LABEL_75;
          if ( !UserQuestEntity__HasStatus(v46, 8, 0LL) )
            goto LABEL_56;
LABEL_55:
          v30 = 0;
          v29 = 2;
          goto LABEL_57;
        }
      }
    }
  }
  Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v33);
  if ( !Instance )
    goto LABEL_75;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, questEnt->fields.id, 0, 0LL)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_55;
  }
LABEL_56:
  v30 = 0;
  v29 = 0;
LABEL_57:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  Instance = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (Instance & 1) != 0 )
    v36 = 1;
  else
    v36 = forceOperation;
  if ( v36 )
    v37 = v36 != 2;
  else
    v37 = v29;
  if ( questReleaseNG && v37 == 2 )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v42 = 2;
      v43 = questInfo;
      goto LABEL_71;
    }
LABEL_75:
    sub_1BD36B4(Instance, v17);
  }
  if ( !questInfo )
    goto LABEL_75;
  v43 = questInfo;
  v42 = v37;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_71:
  MapControl_QuestInfo__SetDispType(v43, v42, type, targetId, value, closedMessageId, 0LL);
  if ( v36 )
    v44 = v36 != 2;
  else
    v44 = v30;
  questInfo->fields.touchType = v44;
  return v37;
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

  return QuestTree__CheckSpotCond_34786200(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_34786200(
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
  struct System_Threading_CancellationTokenSource_o *v58; // x8
  QuestAfterAction_o *v59; // x20
  int32_t v60; // w23
  unsigned __int64 v61; // x24
  int32_t v62; // w22
  int v63; // w21
  int v64; // w20
  int64_t v65; // x2
  int32_t v66; // w0
  int32_t v67; // w0
  bool v68; // cc
  int32_t v69; // w8
  bool v70; // cc
  int32_t v71; // w8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  QuestAfterAction_o *v73; // x20
  int32_t v74; // w23
  unsigned __int64 v75; // x24
  int32_t v76; // w22
  struct System_Threading_CancellationTokenSource_o *v77; // x8
  QuestAfterAction_o *v78; // x20
  unsigned __int64 v79; // x24
  int32_t v80; // w22
  int32_t v81; // w8
  int32_t v83; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B3416A & 1) == 0 )
  {
    sub_1BD3458(&CondType_TypeInfo, *(_QWORD *)&commandType);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserItemMaster___, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Count__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__, v17);
    sub_1BD3458(&NetworkManager_TypeInfo, v18);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v19);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v20);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v21);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v23);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v24);
    byte_4B3416A = 1;
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
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v25);
    byte_4B31F06 = 1;
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
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v29);
    byte_4B31F06 = 1;
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
  if ( !LODWORD(Instance[1].monitor) )
    inited = j_il2cpp_runtime_class_init_0(Instance);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v29);
    byte_4B31F06 = 1;
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
      v37 = sub_1C25334(inited);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C25334(inited);
    v39 = **(UnityEngine_Object_o ***)(v38 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
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
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                       (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
          v69 = 1;
        else
          v69 = targetValue;
        v70 = v46 < v69;
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
      v73 = Instance;
      if ( (int)m_CancellationTokenSource < 1 )
      {
        v74 = 0;
LABEL_202:
        if ( targetValue <= 1 )
          v83 = 1;
        else
          v83 = targetValue;
        v70 = v74 < v83;
LABEL_206:
        LOBYTE(v26) = v70;
        return (unsigned __int8)v26 & 1;
      }
      v74 = 0;
      v75 = 0LL;
      while ( v75 < (unsigned int)m_CancellationTokenSource )
      {
        v76 = *((_DWORD *)&v73->fields.invalidMapGimmickIdList + v75);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                           (clsQuestCheck_o *)Instance,
                                           v76,
                                           IsExistCommand,
                                           0LL);
        LODWORD(m_CancellationTokenSource) = v73->fields.m_CancellationTokenSource;
        ++v75;
        v74 += (unsigned __int8)Instance & 1;
        if ( (__int64)v75 >= (int)m_CancellationTokenSource )
          goto LABEL_202;
      }
      goto LABEL_210;
    case 8:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                      (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestGroupEntity__get_Item__);
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
            sub_1BD36B4(Instance, v29);
          }
        }
        v52 = 0;
LABEL_167:
        if ( targetValue <= 1 )
          v71 = 1;
        else
          v71 = targetValue;
        v68 = v52 < v71;
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
        v77 = Instance->fields.m_CancellationTokenSource;
        v78 = Instance;
        if ( (int)v77 >= 1 )
        {
          v60 = 0;
          v79 = 0LL;
          while ( v79 < (unsigned int)v77 )
          {
            v80 = *((_DWORD *)&v78->fields.invalidMapGimmickIdList + v79);
            Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
            if ( !Instance )
              goto LABEL_209;
            Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClear(
                                               (clsQuestCheck_o *)Instance,
                                               v80,
                                               IsExistCommand,
                                               0LL);
            LODWORD(v77) = v78->fields.m_CancellationTokenSource;
            ++v79;
            v60 += (unsigned __int8)Instance & 1;
            if ( (__int64)v79 >= (int)v77 )
              goto LABEL_189;
          }
LABEL_210:
          sub_1BD36BC(Instance, v29);
        }
LABEL_188:
        v60 = 0;
LABEL_189:
        if ( targetValue <= 1 )
          v81 = 1;
        else
          v81 = targetValue;
        v68 = v60 < v81;
      }
LABEL_193:
      LOBYTE(v26) = !v68;
      return (unsigned __int8)v26 & 1;
    case 9:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v29);
        byte_4B31D77 = 1;
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
      v68 = num < targetValue;
      goto LABEL_193;
    case 10:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      LOBYTE(v26) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v26 & 1;
    case 11:
      Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_209;
      Instance = (QuestAfterAction_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                         (QuestGroupMaster_o *)Instance,
                                         targetId,
                                         2,
                                         0LL);
      if ( !Instance )
        goto LABEL_209;
      v58 = Instance->fields.m_CancellationTokenSource;
      v59 = Instance;
      if ( (int)v58 < 1 )
        goto LABEL_188;
      v60 = 0;
      v61 = 0LL;
      while ( v61 < (unsigned int)v58 )
      {
        v62 = *((_DWORD *)&v59->fields.invalidMapGimmickIdList + v61);
        Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v29);
        if ( !Instance )
          goto LABEL_209;
        Instance = (QuestAfterAction_o *)clsQuestCheck__IsQuestClearRaw(
                                           (clsQuestCheck_o *)Instance,
                                           v62,
                                           IsExistCommand,
                                           0LL);
        LODWORD(v58) = v59->fields.m_CancellationTokenSource;
        ++v61;
        v60 += (unsigned __int8)Instance & 1;
        if ( (__int64)v61 >= (int)v58 )
          goto LABEL_189;
      }
      goto LABEL_210;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v26 & 1;
    case 13:
      v63 = targetId / 100;
      v64 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsEventRaceGoalScriptPlayed(v63, v64, targetValue, 0LL);
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
      v65 = targetValue;
      v66 = 83;
      goto LABEL_199;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 84;
      goto LABEL_199;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 85;
      goto LABEL_199;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 86;
      goto LABEL_199;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 87;
      goto LABEL_199;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 88;
      goto LABEL_199;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 89;
      goto LABEL_199;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 90;
      goto LABEL_199;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 91;
      goto LABEL_199;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 23;
      goto LABEL_199;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 76;
      goto LABEL_199;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      LOBYTE(v26) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v26 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v65 = targetValue;
      v66 = 97;
      goto LABEL_199;
    case 31:
      Instance = (QuestAfterAction_o *)QuestTree__get_QuestCheckInst(v26, v29);
      if ( !Instance )
        goto LABEL_209;
      v67 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v67 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v65 = targetValue;
        v66 = 113;
LABEL_199:
        LOBYTE(v26) = CondType__IsOpen(v66, targetId, v65, 0, 0LL, 0LL);
      }
      else
      {
        LOBYTE(v26) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v67, 1, 0LL);
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

  return QuestTree__CheckSpotCond_34786200(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B34165 & 1) == 0 )
  {
    sub_1BD3458(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo, mapInfo);
    byte_4B34165 = 1;
  }
  v7 = sub_1BD36A4(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
  QuestTree__EnumerateBlankEarthSpotInfo_d__45___ctor((QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v7, -2, 0LL);
  if ( !v7 )
    sub_1BD36B4(v8, v9);
  *(_QWORD *)(v7 + 72) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)mapInfo, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)blankEarthSpotMaster, v22, v23, v24, v25, v26, v27);
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
  if ( (byte_4B34168 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_EventMaster___, questInfo);
    sub_1BD3458(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestReleaseMaster___, v6);
    sub_1BD3458(&DataManager_TypeInfo, v7);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11);
    this = (QuestTree_o *)sub_1BD3458(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v12);
    byte_4B34168 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_40336608((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1BD36B4(this, questInfo);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v17 = 0LL;
  v35 = v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1BD36B4(v18, v19);
    klass_high = HIDWORD(v35.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1BD36B4(v18, v19);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v16 )
            sub_1BD36B4(FirstEntityFromQuestId, v23);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          sub_1BD36B4(0LL, v30);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v31 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v31 )
          sub_1BD36B4(0LL, v32);
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
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  int64_t Time_39340712; // x0
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

  if ( (byte_4B34169 & 1) == 0 )
  {
    sub_1BD3458(&System_DateTime_TypeInfo, questEnt);
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    byte_4B34169 = 1;
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
    sub_1BD36B4(Time, v8);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v21.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_39340712 = NetworkManager__getTime_39340712(v21, 0LL);
  value = questReleaseEnt->fields.value;
  v13 = Time_39340712;
  dateData = NetworkManager__getDateTime_39341492(Time_39340712 - 3600 * value, 0LL).fields._dateData;
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
    dateData = NetworkManager__getDateTime_39341492(v16, 0LL).fields._dateData;
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
  System_Func_object__int__o *_9__38_0; // x21
  Il2CppObject *v16; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B3415E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v6);
    sub_1BD3458(&System_Func_MapControl_WarInfo__int__TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v8);
    sub_1BD3458(&Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, v9);
    sub_1BD3458(&QuestTree___c_TypeInfo, v10);
    byte_4B3415E = 1;
  }
  memset(&v30, 0, sizeof(v30));
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
  _9__38_0 = (System_Func_object__int__o *)v13->static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestTree___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__38_0 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__38_0, v16, Method_QuestTree___c__GetLatestProgressWarInfo_b__38_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__38_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__38_0,
      (int64_t)_9__38_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TKey__o *)_9__38_0,
                                                               (const MethodInfo_2F5AC70 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v24,
                                                  (const MethodInfo_2F6EB10 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1BD36B4(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v25 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1BD36B4(v25, v26);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v30.fields._current[1].klass), v27) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
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

  if ( (byte_4B34154 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__, *(_QWORD *)&mapGimmickId);
    sub_1BD3458(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v5);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__, v6);
    sub_1BD3458(&QuestTree___c__DisplayClass24_0_TypeInfo, v7);
    byte_4B34154 = 1;
  }
  v8 = sub_1BD36A4(QuestTree___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v12 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_MapGimmickInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass24_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1BD36B4(v9, v10);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1BD36B4(QuestInfo, v5);
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

  if ( (byte_4B34157 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v22);
    byte_4B34157 = 1;
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
  v27 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1BD36B4(v28, v29);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1BD36B4(0LL, v30);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v66.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1BD36B4(0LL, v32);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      SpotList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v65.fields._current )
        sub_1BD36B4(0LL, v33);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v65.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v27 )
        sub_1BD36B4(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v27,
        AvailableQuestIdList,
        (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v36, v27, v37);
  v39 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    UserReachableMapList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v35 = 0;
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1BD36B4(0LL, v40);
    v41 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v66.fields._current,
                                                         0LL);
    if ( !v41 )
      sub_1BD36B4(0LL, v42);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v63,
      v41,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v65 = v63;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v43 )
        break;
      current = (MapControl_SpotInfo_o *)v65.fields._current;
      if ( !v65.fields._current )
        sub_1BD36B4(v43, v44);
      if ( HIDWORD(v65.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1BD36B4(0LL, v47);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v48 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v48 )
        sub_1BD36B4(0LL, v49);
      v62 = v35;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v63,
        v48,
        (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v50 = 0;
      v64 = v63;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v64,
                (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v51 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1BD36B4(v51, v52);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v64.fields._current,
                 (const MethodInfo_321C288 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v55 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v39 )
            sub_1BD36B4(Item, v54);
          v56 = System_Collections_Generic_List_int___Contains(
                  v39,
                  Item,
                  (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
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
              sub_1BD36B4(v56, v57);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v39,
                v55,
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
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
        (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v35 = v62 - v50 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
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

  if ( (byte_4B3415A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&mapId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__AddRange__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v20);
    byte_4B3415A = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v22 = MapInfoByMapID;
    v23 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v56 = v54;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v26 )
        break;
      current = v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1BD36B4(v26, v27);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v23 )
          sub_1BD36B4(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v23,
          AvailableQuestIdList,
          (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v56.fields._current )
          sub_1BD36B4(v26, v27);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v56.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v30, v23, v31);
    v33 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v22, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1BD36B4(SpotList, v25);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SpotList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v53 = 0;
    v56 = v54;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v34 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v56,
          (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v53;
        return (int)MapInfoByMapID;
      }
      v36 = (MapControl_SpotInfo_o *)v56.fields._current;
      if ( layer < 1 )
      {
        if ( !v56.fields._current )
          sub_1BD36B4(v34, v35);
LABEL_22:
        if ( v36->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1BD36B4(0LL, v38);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v36->fields.spotId, 0LL) )
        {
LABEL_25:
          v39 = MapControl_SpotInfo__GetAvailableQuestIdList(v36, 1, 0LL);
          if ( !v39 )
            sub_1BD36B4(0LL, v40);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v54,
            v39,
            (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v41 = 0;
          v55 = v54;
          while ( 1 )
          {
            v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v55,
                    (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1BD36B4(v42, v43);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v55.fields._current,
                     (const MethodInfo_321C288 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v46 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v33 )
                sub_1BD36B4(Item, v45);
              v47 = System_Collections_Generic_List_int___Contains(
                      v33,
                      Item,
                      (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
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
                  sub_1BD36B4(v47, v48);
                size = v33->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v33,
                    v46,
                    *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
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
            (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v53 = v53 - v41 + v36->fields.questCount;
        }
      }
      else
      {
        if ( !v56.fields._current )
          sub_1BD36B4(v34, v35);
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

  if ( (byte_4B34155 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1BD3458(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__, v6);
    sub_1BD3458(&QuestTree___c__DisplayClass25_0_TypeInfo, v7);
    byte_4B34155 = 1;
  }
  v8 = sub_1BD36A4(QuestTree___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass25_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1BD36B4(v9, v10);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v12,
                                     (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B3416C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v10);
    byte_4B3416C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1BD36B4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    allQuestInfoList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v14 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1BD36B4(v14, v15);
    if ( LODWORD(v29.fields._current[4].klass) == warId )
    {
      if ( !v11 )
        sub_1BD36B4(v14, v15);
      items = v11->fields._items;
      v24 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BD36B4(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          current,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v26[4] = (Il2CppClass *)current;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)current, v16, v17, v18, v19, v20, v21);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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

  if ( (byte_4B34159 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B34159 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1BD36B4(Instance, v6);
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

  if ( (byte_4B34153 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId);
    sub_1BD3458(&System_Predicate_MapControl_SpotInfo__TypeInfo, v5);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__, v6);
    sub_1BD3458(&QuestTree___c__DisplayClass23_0_TypeInfo, v7);
    byte_4B34153 = 1;
  }
  v8 = sub_1BD36A4(QuestTree___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v12 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_SpotInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass23_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1BD36B4(v9, v10);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v12,
                                    (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x21
  QuestTree___c_c *v32; // x0
  System_Func_object__int__o *_9__31_0; // x23
  Il2CppObject *v34; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  System_Predicate_object__o *v46; // x21

  if ( (byte_4B34158 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v4);
    sub_1BD3458(&System_Func_MapButtonEntity__int__TypeInfo, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BD3458(&System_Predicate_MapControl_MapInfo__TypeInfo, v11);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BD3458(&Method_QuestTree___c__GetUserReachableMapList_b__31_0__, v13);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__, v14);
    sub_1BD3458(&QuestTree___c__DisplayClass31_0_TypeInfo, v15);
    sub_1BD3458(&QuestTree___c_TypeInfo, v16);
    byte_4B34158 = 1;
  }
  v17 = sub_1BD36A4(QuestTree___c__DisplayClass31_0_TypeInfo);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = v24;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v24, v25, v26, v27, v28, v29, v30);
  if ( !OpenedButtons )
    goto LABEL_28;
  v31 = *(System_Collections_Generic_List_int__o **)(v17 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v32 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
      v32 = QuestTree___c_TypeInfo;
    }
    _9__31_0 = (System_Func_object__int__o *)v32->static_fields->__9__31_0;
    if ( !_9__31_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = QuestTree___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__31_0 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_MapButtonEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__31_0, v34, Method_QuestTree___c__GetUserReachableMapList_b__31_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = (struct System_Func_MapButtonEntity__int__o *)_9__31_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
        (int64_t)_9__31_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__31_0,
                            (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v31 )
    {
      System_Collections_Generic_List_int___AddRange(
        v31,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_35A3F78 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1BD36B4(Mine, mapId);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v31 )
    goto LABEL_28;
  mapId = (unsigned int)Map->fields.mapId;
  items = v31->fields._items;
  v44 = Method_System_Collections_Generic_List_int__Add__;
  ++v31->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v31->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v31,
      mapId,
      *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v31->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v46 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v46,
    (Il2CppObject *)v17,
    Method_QuestTree___c__DisplayClass31_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v46,
                                                                    (const MethodInfo_35C14A0 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
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

  if ( (byte_4B3415C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId);
    sub_1BD3458(&System_Predicate_MapControl_QuestInfo__TypeInfo, v5);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__, v6);
    sub_1BD3458(&QuestTree___c__DisplayClass35_0_TypeInfo, v7);
    byte_4B3415C = 1;
  }
  v8 = sub_1BD36A4(QuestTree___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v12 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_QuestInfo__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_QuestTree___c__DisplayClass35_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1BD36B4(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
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

  if ( (byte_4B3414F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76943552, v3);
    sub_1BD3458(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v4);
    byte_4B3414F = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_MapControl_WarInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56362628(
    v6,
    allWarInfoList,
    (const MethodInfo_35C0684 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76943552);
  if ( !v6 )
    sub_1BD36B4(v7, v8);
  System_Collections_Generic_List_object___Reverse(
    v6,
    (const MethodInfo_35C26BC *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B34150 & 1) == 0 )
  {
    sub_1BD3458(&QuestTree__Init_d__17_TypeInfo, endCallback);
    byte_4B34150 = 1;
  }
  v5 = sub_1BD36A4(QuestTree__Init_d__17_TypeInfo);
  QuestTree__Init_d__17___ctor((QuestTree__Init_d__17_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BD36B4(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4B34166 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v7);
    byte_4B34166 = 1;
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
    sub_1BD36B4(mapControlRootInfo, method);
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

  if ( (byte_4B34160 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId);
    sub_1BD3458(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B34160 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BD36B4(Instance, v8);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_31D1F44 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_34780960(this, (WarEntity_o *)entity, v9);
}


bool __fastcall QuestTree__IsActiveEventWar_34780960(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
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
  if ( (byte_4B34161 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, warEnt);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_1BD3458(&long___TypeInfo, v6);
    sub_1BD3458(&NetworkManager_TypeInfo, v7);
    this = (QuestTree_o *)sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B34161 = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_24;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (QuestTree_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_24;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
  this = (QuestTree_o *)sub_1BD3500(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_24:
    sub_1BD36B4(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1BD36BC(this, warEnt);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  MapControl_WarInfo_o *v8; // x20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v12; // x21
  WarEntity_o *Mine; // x0
  WarEntity_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4B3415F & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_WarReleaseMaster___, *(_QWORD *)&warId);
    sub_1BD3458(&DataManager_TypeInfo, v5);
    byte_4B3415F = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  v8 = ChildByWarID;
  if ( !MapControl_WarInfo__GetStatus(ChildByWarID, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_1BD36B4(0LL, v10);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, warId, 0LL);
  if ( OpenEntity )
  {
    v12 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0LL) || WarReleaseEntity__IsClose(v12, 0LL) )
      return 0;
  }
  if ( MapControl_WarInfo__IsClosedWar(v8, 0LL) )
    return 0;
  Mine = MapControl_WarInfo__GetMine(v8, 0LL);
  if ( !Mine )
    return 0;
  v14 = Mine;
  return (!WarEntity__IsEvent(Mine, 0LL) || QuestTree__IsActiveEventWar_34780960(this, v14, v15))
      && QuestTree__IsWarOpen(this, v14->fields.id, v15);
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4B34151 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B34151 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v6);
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

  if ( (byte_4B3415B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, *(_QWORD *)&mapId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v9);
    byte_4B3415B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1BD36B4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    SpotList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    current = v22.fields._current;
    if ( layer < 1 )
    {
      if ( !v22.fields._current )
        sub_1BD36B4(v13, v14);
      goto LABEL_12;
    }
    if ( !v22.fields._current )
      sub_1BD36B4(v13, v14);
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
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
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
    sub_1BD36B4(this, 0LL);
  return QuestTree__CheckSpotCond_34786200(
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
    sub_1BD36B4(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_34786200(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_34786200(
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

  if ( (byte_4B3416D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4B3416D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1BD36B4(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    QuestInfoByWarId,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields._current;
    v13 = QuestTree__get_QuestCheckInst((QuestTree_o *)v10, v11);
    if ( !current )
      sub_1BD36B4(v13, v14);
    if ( !v13 )
      sub_1BD36B4(0LL, v14);
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
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  if ( (byte_4B3415D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, *(_QWORD *)&warId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v6);
    this = (QuestTree_o *)sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v7);
    byte_4B3415D = 1;
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
    sub_1BD36B4(QuestInfoByWarId, v9);
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
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v15 = v13;
    if ( !v13 )
      break;
    if ( !v20.fields._current )
      sub_1BD36B4(v13, v14);
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
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_o *name; // x1
  long double v20; // q0
  __int64 v21; // x0
  __int64 v22; // x0
  UnityEngine_Object_o *v23; // x22
  bool IsExistCommand; // w21
  int32_t v25; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4B34162 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v7);
    sub_1BD3458(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_1BD3458(&SpotEntity_TypeInfo, v9);
    byte_4B34162 = 1;
  }
  v10 = sub_1BD36A4(SpotEntity_TypeInfo);
  SpotEntity___ctor((SpotEntity_o *)v10, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v10 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v10 + 32) = name;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)name, v13, v14, v15, v16, v17, v18);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v10, 0LL);
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C25334(v20);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C25334(v20);
  v23 = **(UnityEngine_Object_o ***)(v22 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v10 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1BD36B4(Instance, v12);
  v25 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v25, 0, 0LL);
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

  v4 = QuestTree__CheckMapGimmickCond_34783256(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1BD36B4(v4, v5);
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
    sub_1BD36B4(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34786200(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_34786200(
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
    sub_1BD36B4(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34786200(
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
    sub_1BD36B4(this, nowTime);
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

  if ( (byte_4B34152 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method);
    byte_4B34152 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
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
  if ( (byte_4B3414E & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    byte_4B3414E = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B34163 & 1) == 0 )
  {
    sub_1BD3458(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo, endCallback);
    byte_4B34163 = 1;
  }
  v5 = sub_1BD36A4(QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_TypeInfo);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BD36B4(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = endCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)endCallback, v14, v15, v16, v17, v18, v19);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B34164 & 1) == 0 )
  {
    sub_1BD3458(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo, *(_QWORD *)&targetWarId);
    byte_4B34164 = 1;
  }
  v7 = sub_1BD36A4(QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_TypeInfo);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1BD36B4(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)endCallback, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4B34156 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId);
    sub_1BD3458(&System_Predicate_MapControl_MapInfo__TypeInfo, v5);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__, v6);
    sub_1BD3458(&QuestTree___c__DisplayClass29_0_TypeInfo, v7);
    byte_4B34156 = 1;
  }
  v8 = sub_1BD36A4(QuestTree___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BD36B4(v9, v10);
  *(_DWORD *)(v8 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v12 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_MapInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_QuestTree___c__DisplayClass29_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v12,
                                   (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45___ctor(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__MoveNext(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v8; // x19
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w21
  BlankEarthSpotEntity_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t v20; // w8
  int32_t _7__wrap2; // w8
  struct BlankEarthSpotEntity_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  BlankEarthSpotEntity_o *v24; // x21
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v25; // x22
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4B34336 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1BD3458(&BlankEarthSpotMaster_TypeInfo, method);
    byte_4B34336 = 1;
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
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0LL) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v8->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v13 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v8->fields.__7__wrap1 = v13;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)&v8->fields.__7__wrap1;
  _7__wrap1 = v8->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v20 < (int)max_length )
  {
    if ( v20 >= max_length )
      sub_1BD36BC(this, method);
    v24 = _7__wrap1->m_Items[v20];
    if ( v24 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)v8->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v24->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v25 = this;
          QuestTree__SetupBlankEarthSpotInfo(_4__this, v24, (MapControl_SpotInfo_o *)this, 0LL);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v25;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BD33FC(p__2__current, (int64_t)v25, v27, v28, v29, v30, v31, v32);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1BD36B4(this, method);
  }
  this->klass = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *v10; // x20
  struct QuestTree_o *_4__this; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct MapControl_MapInfo_o *_3__mapInfo; // x1
  struct BlankEarthSpotMaster_o *_3__blankEarthSpotMaster; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B34337 & 1) == 0 )
  {
    sub_1BD3458(&QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo, method);
    byte_4B34337 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *)sub_1BD36A4(QuestTree__EnumerateBlankEarthSpotInfo_d__45_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v10->fields.mapInfo = _3__mapInfo;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v10->fields.mapInfo, (int64_t)_3__mapInfo, v4, v5, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v10->fields.blankEarthSpotMaster,
    (int64_t)_3__blankEarthSpotMaster,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  return (System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *)v10;
}


MapControl_SpotInfo_o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_Generic_IEnumerator_MapControl_SpotInfo__get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_IEnumerator_Reset(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__45_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
}


Il2CppObject *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_Collections_IEnumerator_get_Current(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__45__System_IDisposable_Dispose(
        QuestTree__EnumerateBlankEarthSpotInfo_d__45_o *this,
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
  System_Collections_IEnumerator_o *v16; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool result; // w0
  __int64 v25; // x0
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x20
  struct System_Action_o *endCallback; // x8

  v2 = this;
  if ( (byte_4B34338 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v5);
    this = (QuestTree__Init_d__17_o *)sub_1BD3458(&TerminalPramsManager_TypeInfo, v6);
    byte_4B34338 = 1;
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
        if ( !byte_4B343CC )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
          byte_4B343CC = 1;
        }
        v10 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v10 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v10->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v13 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
            v13 = sub_1C25334(v12);
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
          if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
            v14 = sub_1C25334(v12);
          v15 = **(UnityEngine_Object_o ***)(v14 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0LL);
              v16 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v2->fields.endCallback, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v16;
              p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1BD33FC(p__2__current, (int64_t)v16, v18, v19, v20, v21, v22, v23);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1BD36B4(this, method);
      }
      v25 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
        v25 = sub_1C25334(v9);
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
      if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
        v26 = sub_1C25334(v9);
      v27 = **(UnityEngine_Object_o ***)(v26 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__17_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_QuestTree__Init_d__17_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3416F & 1) == 0 )
  {
    sub_1BD3458(&QuestTree___c_TypeInfo, v1);
    byte_4B3416F = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(QuestTree___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v2;
  sub_1BD33FC((PartyOrganizationUtility_o *)QuestTree___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestTree___c___ctor(QuestTree___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestTree___c___GetLatestProgressWarInfo_b__38_0(
        QuestTree___c_o *this,
        MapControl_WarInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1BD36B4(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__31_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.targetMapId;
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__43_0(
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
    sub_1BD36B4(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeMakeWithOpenCheck_b__43_1(
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
    sub_1BD36B4(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_11(
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
    sub_1BD36B4(this, a);
  }
  return v5 - QuestEntity__getPriority((QuestEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_2(
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
    sub_1BD36B4(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__44_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
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
  if ( (byte_4B34170 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass31_0_o *)sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4B34170 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass31_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1BD36B4(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1BD36B4(this, x);
  return this->fields.questId == v3->fields.questId;
}


void __fastcall QuestTree___c__DisplayClass43_0___ctor(
        QuestTree___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass43_0___mfBaseTreeMakeWithOpenCheck_b__2(
        QuestTree___c__DisplayClass43_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.spotId == this->fields.spotInfoNow;
}


void __fastcall QuestTree___c__DisplayClass44_0___ctor(
        QuestTree___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_0___mfBaseTreeUpdateWithOpenCheck_b__0(
        QuestTree___c__DisplayClass44_0_o *this,
        WarEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.id == this->fields.targetWarId;
}


void __fastcall QuestTree___c__DisplayClass44_1___ctor(
        QuestTree___c__DisplayClass44_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__1(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_WarInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass44_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass44_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


void __fastcall QuestTree___c__DisplayClass44_2___ctor(
        QuestTree___c__DisplayClass44_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_2___mfBaseTreeUpdateWithOpenCheck_b__5(
        QuestTree___c__DisplayClass44_2_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.spotId == this->fields.spotId;
}


void __fastcall QuestTree___c__DisplayClass44_3___ctor(
        QuestTree___c__DisplayClass44_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_3___mfBaseTreeUpdateWithOpenCheck_b__7(
        QuestTree___c__DisplayClass44_3_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass44_3_o *v4; // x20

  v4 = this;
  if ( (byte_4B34334 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_3_o *)sub_1BD3458(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x);
    byte_4B34334 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1BD36B4(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_34743CC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall QuestTree___c__DisplayClass44_4___ctor(
        QuestTree___c__DisplayClass44_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_4___mfBaseTreeUpdateWithOpenCheck_b__8(
        QuestTree___c__DisplayClass44_4_o *this,
        MapControl_SpotRoadInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.spotRoadId == this->fields.spotRoadId;
}


void __fastcall QuestTree___c__DisplayClass44_5___ctor(
        QuestTree___c__DisplayClass44_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_5___mfBaseTreeUpdateWithOpenCheck_b__9(
        QuestTree___c__DisplayClass44_5_o *this,
        MapControl_MapGimmickInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.mapGimmickId == this->fields.mapGimmickId;
}


void __fastcall QuestTree___c__DisplayClass44_6___ctor(
        QuestTree___c__DisplayClass44_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__10(
        QuestTree___c__DisplayClass44_6_o *this,
        QuestEntity_o *x,
        const MethodInfo *method)
{
  QuestTree___c__DisplayClass44_6_o *v4; // x20

  v4 = this;
  if ( (byte_4B34335 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass44_6_o *)sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, x);
    byte_4B34335 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass44_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1BD36B4(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass44_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass44_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43___ctor(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__MoveNext(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v2; // x26
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
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *MasterData_object; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  Il2CppObject *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  Il2CppObject *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  Il2CppObject *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  Il2CppObject *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  Il2CppObject *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  Il2CppObject *v115; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  Il2CppObject *v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  Il2CppObject *v129; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  Il2CppObject *v136; // x0
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  Il2CppObject *v143; // x0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  System_Collections_Generic_Dictionary_int__object__o *v150; // x21
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  System_Object_array *Entitys_object__object; // x0
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v166; // w8
  bool result; // w0
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v171; // x9
  WarEntity_o *v172; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v174; // x19
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v187; // x23
  int64_t v188; // x23
  Il2CppObject *v189; // x8
  unsigned int _2__current; // w9
  __int64 v191; // x8
  _QWORD *v192; // x9
  __int64 _2__current_low; // x10
  __int64 v194; // x8
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v201; // x22
  unsigned int v202; // w27
  __int64 v203; // x8
  int32_t v204; // w24
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v213; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v215; // x23
  Il2CppClass **v216; // x0
  Il2CppObject *v217; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v218; // x25
  int v219; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v221; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v222; // x8
  SpotEntity_o **v223; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v224; // t1
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  __int64 v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  __int64 v234; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v236; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v237; // x25
  int v238; // w19
  unsigned int v239; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c **v240; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v241; // x8
  SpotRoadEntity_o **v242; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_c *v243; // t1
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  __int64 v250; // x8
  _QWORD *v251; // x9
  __int64 v252; // x10
  __int64 v253; // x8
  Il2CppObject *v254; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v255; // x24
  int v256; // w19
  int v257; // w25
  __int64 v258; // x8
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  __int64 v265; // x8
  _QWORD *v266; // x9
  __int64 v267; // x10
  __int64 v268; // x8
  PartyOrganizationUtility_o *p__2__current; // x26
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v271; // x22
  Il2CppObject *v272; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v274; // x2
  int32_t v275; // w3
  System_String_o *v276; // x4
  BattleSetupInfo_o *v277; // x5
  FollowerInfo_o *v278; // x6
  PartyListViewItem_o *v279; // x7
  QuestTree___c__DisplayClass43_0_o *v280; // x22
  struct QuestTree___c__DisplayClass43_0_o **p__8__1; // x21
  int64_t v282; // x2
  int32_t v283; // w3
  System_String_o *v284; // x4
  BattleSetupInfo_o *v285; // x5
  FollowerInfo_o *v286; // x6
  PartyListViewItem_o *v287; // x7
  int64_t v288; // x22
  MapControl_WarInfo_o *v289; // x23
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  MapControl_MapInfo_o *v296; // x22
  int64_t v297; // x2
  int32_t v298; // w3
  System_String_o *v299; // x4
  BattleSetupInfo_o *v300; // x5
  FollowerInfo_o *v301; // x6
  PartyListViewItem_o *v302; // x7
  MapControl_SpotInfo_o *v303; // x22
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  WarEntity_o *v310; // x22
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  Il2CppObject *v317; // x0
  int64_t v318; // x2
  int32_t v319; // w3
  System_String_o *v320; // x4
  BattleSetupInfo_o *v321; // x5
  FollowerInfo_o *v322; // x6
  PartyListViewItem_o *v323; // x7
  bool v324; // zf
  int v325; // w8
  QuestEntity_o *v326; // x22
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x23
  int32_t QuestPhase; // w23
  struct QuestTree___c__DisplayClass43_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v331; // x25
  System_Predicate_object__o *_9__2; // x26
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  Il2CppObject *v339; // x0
  int64_t v340; // x2
  int32_t v341; // w3
  System_String_o *v342; // x4
  BattleSetupInfo_o *v343; // x5
  FollowerInfo_o *v344; // x6
  PartyListViewItem_o *v345; // x7
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int64_t v348; // x2
  int32_t v349; // w3
  System_String_o *v350; // x4
  BattleSetupInfo_o *v351; // x5
  FollowerInfo_o *v352; // x6
  PartyListViewItem_o *v353; // x7
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int64_t v355; // x2
  int32_t v356; // w3
  System_String_o *v357; // x4
  BattleSetupInfo_o *v358; // x5
  FollowerInfo_o *v359; // x6
  PartyListViewItem_o *v360; // x7
  WarEntity_o *Mine; // x0
  int64_t v362; // x2
  int32_t v363; // w3
  System_String_o *v364; // x4
  BattleSetupInfo_o *v365; // x5
  FollowerInfo_o *v366; // x6
  PartyListViewItem_o *v367; // x7
  int v368; // w25
  int64_t v369; // x2
  int32_t v370; // w3
  System_String_o *v371; // x4
  BattleSetupInfo_o *v372; // x5
  FollowerInfo_o *v373; // x6
  PartyListViewItem_o *v374; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v375; // x24
  int64_t spotInfo_5__22; // x1
  int64_t v377; // x2
  int32_t v378; // w3
  System_String_o *v379; // x4
  BattleSetupInfo_o *v380; // x5
  FollowerInfo_o *v381; // x6
  PartyListViewItem_o *v382; // x7
  struct WarEntity_o *warEnt_5__23; // x8
  int v384; // w19
  struct MapControl_SpotInfo_o *v385; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v387; // x9
  struct MapControl_MapInfo_o *v388; // x9
  bool v389; // w8
  int64_t v390; // x2
  int32_t v391; // w3
  System_String_o *v392; // x4
  BattleSetupInfo_o *v393; // x5
  FollowerInfo_o *v394; // x6
  PartyListViewItem_o *v395; // x7
  Il2CppObject *v396; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v397; // x21
  int v398; // w19
  int v399; // w22
  __int64 v400; // x8
  __int64 v401; // x8
  _QWORD *v402; // x9
  __int64 v403; // x10
  __int64 v404; // x8
  int64_t v405; // x2
  int32_t v406; // w3
  System_String_o *v407; // x4
  BattleSetupInfo_o *v408; // x5
  FollowerInfo_o *v409; // x6
  PartyListViewItem_o *v410; // x7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v412; // x22
  Il2CppObject *v413; // x23
  struct QuestTree___c_StaticFields *v414; // x0
  int64_t v415; // x2
  int32_t v416; // w3
  System_String_o *v417; // x4
  BattleSetupInfo_o *v418; // x5
  FollowerInfo_o *v419; // x6
  PartyListViewItem_o *v420; // x7
  int64_t v421; // x2
  int32_t v422; // w3
  System_String_o *v423; // x4
  BattleSetupInfo_o *v424; // x5
  FollowerInfo_o *v425; // x6
  PartyListViewItem_o *v426; // x7
  int64_t v427; // x2
  int32_t v428; // w3
  System_String_o *v429; // x4
  BattleSetupInfo_o *v430; // x5
  FollowerInfo_o *v431; // x6
  PartyListViewItem_o *v432; // x7
  int64_t v433; // x2
  int32_t v434; // w3
  System_String_o *v435; // x4
  BattleSetupInfo_o *v436; // x5
  FollowerInfo_o *v437; // x6
  PartyListViewItem_o *v438; // x7
  int64_t v439; // x2
  int32_t v440; // w3
  System_String_o *v441; // x4
  BattleSetupInfo_o *v442; // x5
  FollowerInfo_o *v443; // x6
  PartyListViewItem_o *v444; // x7
  int64_t v445; // x2
  int32_t v446; // w3
  System_String_o *v447; // x4
  BattleSetupInfo_o *v448; // x5
  FollowerInfo_o *v449; // x6
  PartyListViewItem_o *v450; // x7
  int64_t v451; // x2
  int32_t v452; // w3
  System_String_o *v453; // x4
  BattleSetupInfo_o *v454; // x5
  FollowerInfo_o *v455; // x6
  PartyListViewItem_o *v456; // x7
  int64_t v457; // x2
  int32_t v458; // w3
  System_String_o *v459; // x4
  BattleSetupInfo_o *v460; // x5
  FollowerInfo_o *v461; // x6
  PartyListViewItem_o *v462; // x7
  PartyOrganizationUtility_o *v463; // x26
  int v464; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v465; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v466; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v467; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *v468; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v470; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v474; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4B34339 & 1) == 0 )
  {
    sub_1BD3458(&System_Comparison_MapControl_QuestInfo__TypeInfo, method);
    sub_1BD3458(&System_Comparison_MapControl_WarInfo__TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v4);
    sub_1BD3458(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventStatusMaster___, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMasterData_MapGimmickMaster___, v10);
    sub_1BD3458(&Method_DataManager_GetMasterData_MapMaster___, v11);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestAddMaster___, v12);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, v14);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestPickupMaster___, v16);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v17);
    sub_1BD3458(&Method_DataManager_GetMasterData_SpotMaster___, v18);
    sub_1BD3458(&Method_DataManager_GetMasterData_SpotRoadMaster___, v19);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v20);
    sub_1BD3458(&Method_DataManager_GetMasterData_WarAddMaster___, v21);
    sub_1BD3458(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v22);
    sub_1BD3458(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v23);
    sub_1BD3458(&DataManager_TypeInfo, v24);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v25);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v26);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v27);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v28);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v29);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v30);
    sub_1BD3458(&long___TypeInfo, v31);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v32);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v33);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v34);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v35);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v36);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v37);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v38);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v39);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v40);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v41);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v42);
    sub_1BD3458(&MapControl_MapInfo_TypeInfo, v43);
    sub_1BD3458(&NetworkManager_TypeInfo, v44);
    sub_1BD3458(&OptionManager_TypeInfo, v45);
    sub_1BD3458(&System_Predicate_MapControl_SpotInfo__TypeInfo, v46);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v47);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_1BD3458(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v49);
    sub_1BD3458(&MapControl_SpotInfo_TypeInfo, v50);
    sub_1BD3458(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__, v51);
    sub_1BD3458(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__, v52);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__, v53);
    sub_1BD3458(&QuestTree___c__DisplayClass43_0_TypeInfo, v54);
    sub_1BD3458(&QuestTree___c_TypeInfo, v55);
    sub_1BD3458(&WarEntity_TypeInfo, v56);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1BD3458(&MapControl_WarInfo_TypeInfo, v57);
    byte_4B34339 = 1;
  }
  v474 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v470 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v2->fields.__4__this;
  v468 = v2;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_283;
      QuestTree__InitInfo(_4__this, 0LL);
      _4__this->fields.isUseCache = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v2->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._dataManager_5__2,
        (int64_t)Instance,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MapMaster___);
      v2->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._mapMaster_5__3,
        (int64_t)MasterData_object,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v73 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SpotMaster___);
      v2->fields._spotMaster_5__4 = (struct SpotMaster_o *)v73;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._spotMaster_5__4,
        (int64_t)v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v80 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v2->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v80;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._blankEarthSpotMaster_5__5,
        (int64_t)v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v87 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
      v2->fields._questMaster_5__6 = (struct QuestMaster_o *)v87;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._questMaster_5__6,
        (int64_t)v87,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v94 = DataManager__GetMasterData_object_(
              (DataManager_o *)this,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v2->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v94;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._questPhaseMaster_5__7,
        (int64_t)v94,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v101 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
      v2->fields._eventMaster_5__8 = (struct EventMaster_o *)v101;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._eventMaster_5__8,
        (int64_t)v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v108 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v2->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v108;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._eventDetailMaster_5__9,
        (int64_t)v108,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v115 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v2->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v115;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusMaster_5__10,
        (int64_t)v115,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v122 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v2->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v122;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusQuestMaster_5__11,
        (int64_t)v122,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v129 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v2->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v129;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._spotRoadMaster_5__12,
        (int64_t)v129,
        v130,
        v131,
        v132,
        v133,
        v134,
        v135);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v136 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v2->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v136;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._mapGimmickMaster_5__13,
        (int64_t)v136,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      v143 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v2->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v143;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._questPickupMaster_5__14,
        (int64_t)v143,
        v144,
        v145,
        v146,
        v147,
        v148,
        v149);
      v150 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v150,
        (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v2->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v150;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._eventStatusQuestMismatchDictionary_5__15,
        (int64_t)v150,
        v151,
        v152,
        v153,
        v154,
        v155,
        v156);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_283;
      Entitys_object__object = DataManager__getEntitys_object__object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F318E4 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v2->fields._warList_5__16 = (struct WarEntity_array *)Entitys_object__object;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v2->fields._warList_5__16,
        (int64_t)Entitys_object__object,
        v158,
        v159,
        v160,
        v161,
        v162,
        v163);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v2->fields._warList_5__16;
      v2->fields._nowTime_5__17 = (int64_t)this;
      v2->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_283;
      max_length = warList_5__16->max_length;
      v166 = 0;
      v2->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v2->fields._warIdx_5__18;
      v2->fields.__1__state = -1;
      goto LABEL_124;
    case 2:
      questIdx_5__25 = v2->fields._questIdx_5__25;
      v2->fields.__1__state = -1;
      goto LABEL_253;
    case 3:
      endCallback = v2->fields.endCallback;
      v2->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_283;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      goto LABEL_266;
    default:
      return 0;
  }
  while ( v166 < max_length )
  {
    v171 = v2->fields._warList_5__16;
    if ( !v171 )
      goto LABEL_283;
    if ( v166 >= v171->max_length )
      goto LABEL_145;
    v172 = v171->m_Items[v166];
    if ( !v172 )
      goto LABEL_283;
    if ( !_4__this )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_283;
    id = v172->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v2->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_283;
    v174 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v174, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_283;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_283;
        nowTime_5__17 = v2->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v174, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v2->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v174, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_283;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v474,
               (int32_t)this,
               (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v474;
          if ( !v474 )
            goto LABEL_283;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v474, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)entity;
            if ( !entity )
              goto LABEL_283;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v2->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v2->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v174, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_283;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v2->fields._eventStatusQuestMaster_5__11;
                v187 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetEventId(v174, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_283;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v187->fields.statusId,
                                                                           0LL);
                if ( !v2->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_283;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v2->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_3224F94 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v188 = v2->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)sub_1BD3500(long___TypeInfo, 3LL);
        v189 = entity;
        if ( !entity || !this )
          goto LABEL_283;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_145;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_145;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass43_0_o *)v189[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_145;
        this->fields.endCallback = (struct System_Action_o *)v189[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v188, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_283;
    v191 = *(_QWORD *)&this->fields.__1__state;
    v192 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v191 )
      goto LABEL_283;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v191 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v174,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    }
    else
    {
      v194 = v191 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v194 + 32) = v174;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v194 + 32), (int64_t)v174, v175, v176, v177, v178, v179, v180);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_283;
    v201 = this;
    v467 = this->fields.__2__current;
    if ( (int)v467 >= 1 )
    {
      if ( !(_DWORD)v467 )
        goto LABEL_145;
      v202 = 0;
      v465 = this;
      v466 = v174;
      while ( 1 )
      {
        v203 = *((_QWORD *)&v201->fields.__4__this + (int)v202);
        if ( !v203 )
          goto LABEL_283;
        v204 = *(_DWORD *)(v203 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__AddChild(v174, v204, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_283;
        items = allMapInfoList->fields._items;
        v213 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_283;
        size = allMapInfoList->fields._size;
        v215 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
        }
        else
        {
          v216 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v216[4] = (Il2CppClass *)v215;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v216 + 4), (int64_t)v215, v205, v206, v207, v208, v209, v210);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_283;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotMaster__getList((SpotMaster_o *)this, v204, 0LL);
        if ( !this )
          goto LABEL_283;
        v217 = this->fields.__2__current;
        v218 = this;
        v219 = (_DWORD)v217 - 1;
        if ( (int)v217 >= 1 )
          break;
LABEL_88:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v215,
                                                                   v468->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_283;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v468->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_283;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v204,
                                                                   0LL);
        if ( !this )
          goto LABEL_283;
        v236 = this->fields.__2__current;
        v237 = this;
        v238 = (_DWORD)v236 - 1;
        if ( (int)v236 >= 1 )
        {
          v239 = 0;
          while ( 1 )
          {
            v240 = &v237->klass + (int)v239;
            v243 = v240[4];
            v242 = (SpotRoadEntity_o **)(v240 + 4);
            v241 = v243;
            if ( !v243 || !v215 )
              goto LABEL_283;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v215,
                                                                       (int32_t)v241->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v239 >= LODWORD(v237->fields.__2__current) )
              goto LABEL_145;
            QuestTree__SetupSpotRoadInfo(_4__this, *v242, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_283;
            method = (const MethodInfo *)spotRoadInfo;
            v250 = *(_QWORD *)&this->fields.__1__state;
            v251 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v250 )
              goto LABEL_283;
            v252 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v252 >= *(_DWORD *)(v250 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
            }
            else
            {
              v253 = v250 + 8 * v252;
              LODWORD(this->fields.__2__current) = v252 + 1;
              *(_QWORD *)(v253 + 32) = method;
              sub_1BD33FC(
                (PartyOrganizationUtility_o *)(v253 + 32),
                (int64_t)method,
                v244,
                v245,
                v246,
                v247,
                v248,
                v249);
            }
            if ( v238 == v239 )
              break;
            if ( ++v239 >= LODWORD(v237->fields.__2__current) )
              goto LABEL_145;
          }
        }
        v2 = v468;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v468->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_283;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v204,
                                                                   0LL);
        if ( !this )
          goto LABEL_283;
        v254 = this->fields.__2__current;
        v255 = this;
        v256 = (_DWORD)v254 - 1;
        if ( (int)v254 >= 1 )
        {
          v257 = 0;
          while ( 1 )
          {
            v258 = *((_QWORD *)&v255->fields.__4__this + v257);
            if ( !v258 )
              goto LABEL_283;
            if ( !v215 )
              goto LABEL_283;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v215, *(_DWORD *)(v258 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_283;
            method = (const MethodInfo *)mapGimmickInfo;
            v265 = *(_QWORD *)&this->fields.__1__state;
            v266 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v265 )
              goto LABEL_283;
            v267 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v267 >= *(_DWORD *)(v265 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v266[4] + 192LL) + 112LL));
            }
            else
            {
              v268 = v265 + 8 * v267;
              LODWORD(this->fields.__2__current) = v267 + 1;
              *(_QWORD *)(v268 + 32) = method;
              sub_1BD33FC(
                (PartyOrganizationUtility_o *)(v268 + 32),
                (int64_t)method,
                v259,
                v260,
                v261,
                v262,
                v263,
                v264);
            }
            if ( v256 == v257 )
              break;
            if ( (unsigned int)++v257 >= LODWORD(v255->fields.__2__current) )
              goto LABEL_145;
          }
        }
        v174 = v466;
        v201 = v465;
        if ( ++v202 == (_DWORD)v467 )
          goto LABEL_121;
        if ( v202 >= LODWORD(v465->fields.__2__current) )
          goto LABEL_145;
      }
      for ( i = 0; i < LODWORD(v218->fields.__2__current); ++i )
      {
        v221 = &v218->klass + (int)i;
        v224 = v221[4];
        v223 = (SpotEntity_o **)(v221 + 4);
        v222 = v224;
        if ( !v224 || !v215 )
          goto LABEL_283;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__AddChild(
                                                                   v215,
                                                                   (int32_t)v222->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v218->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v223, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_283;
        method = (const MethodInfo *)spotInfo;
        v231 = *(_QWORD *)&this->fields.__1__state;
        v232 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v231 )
          goto LABEL_283;
        v233 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v233 >= *(_DWORD *)(v231 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
        }
        else
        {
          v234 = v231 + 8 * v233;
          LODWORD(this->fields.__2__current) = v233 + 1;
          *(_QWORD *)(v234 + 32) = method;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v234 + 32), (int64_t)method, v225, v226, v227, v228, v229, v230);
        }
        if ( v219 == i )
          goto LABEL_88;
      }
LABEL_145:
      sub_1BD36BC(this, method);
    }
LABEL_121:
    warIdx_5__18 = v2->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1BD33FC(p__2__current, 0LL, v195, v196, v197, v198, v199, v200);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_124:
    max_length = v2->fields._warCount_5__19;
    v166 = warIdx_5__18 + 1;
    v2->fields._warIdx_5__18 = v166;
  }
  if ( !_4__this )
    goto LABEL_283;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  }
  v271 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v271 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v272 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v271 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_MapControl_WarInfo__TypeInfo);
    System_Comparison_object____ctor(v271, v272, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Comparison_MapControl_WarInfo__o *)v271;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)v271,
      v274,
      v275,
      v276,
      v277,
      v278,
      v279);
  }
  if ( !allWarInfoList )
    goto LABEL_283;
  System_Collections_Generic_List_object___Sort_56371284(
    allWarInfoList,
    v271,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v280 = (QuestTree___c__DisplayClass43_0_o *)sub_1BD36A4(QuestTree___c__DisplayClass43_0_TypeInfo);
  QuestTree___c__DisplayClass43_0___ctor(v280, 0LL);
  v2->fields.__8__1 = v280;
  p__8__1 = &v2->fields.__8__1;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v280, v282, v283, v284, v285, v286, v287);
  v288 = v2->fields._nowTime_5__17;
  v289 = (MapControl_WarInfo_o *)sub_1BD36A4(MapControl_WarInfo_TypeInfo);
  MapControl_WarInfo___ctor(v289, v288, 0LL);
  v2->fields._warInfo_5__20 = v289;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields._warInfo_5__20,
    (int64_t)v289,
    v290,
    v291,
    v292,
    v293,
    v294,
    v295);
  v296 = (MapControl_MapInfo_o *)sub_1BD36A4(MapControl_MapInfo_TypeInfo);
  MapControl_MapInfo___ctor(v296, 0LL);
  v2->fields._mapInfo_5__21 = v296;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields._mapInfo_5__21,
    (int64_t)v296,
    v297,
    v298,
    v299,
    v300,
    v301,
    v302);
  v303 = (MapControl_SpotInfo_o *)sub_1BD36A4(MapControl_SpotInfo_TypeInfo);
  MapControl_SpotInfo___ctor(v303, 0LL);
  v2->fields._spotInfo_5__22 = v303;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields._spotInfo_5__22,
    (int64_t)v303,
    v304,
    v305,
    v306,
    v307,
    v308,
    v309);
  v310 = (WarEntity_o *)sub_1BD36A4(WarEntity_TypeInfo);
  WarEntity___ctor(v310, 0LL);
  v2->fields._warEnt_5__23 = v310;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields._warEnt_5__23,
    (int64_t)v310,
    v311,
    v312,
    v313,
    v314,
    v315,
    v316);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_283;
  v317 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v2->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v317;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields._userQuestMaster_5__24,
    (int64_t)v317,
    v318,
    v319,
    v320,
    v321,
    v322,
    v323);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_283;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v2->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  v324 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questMaster_5__6;
  v325 = v324 ? 5000 : 500;
  v2->fields._breakInterval_5__29 = v325;
  v2->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_283;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v2->fields._questIdx_5__25;
  v2->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_283;
    v326 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v470 = 0LL;
    userQuestMaster_5__24 = v2->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B31D77 )
    {
      sub_1BD3458(&NetworkManager_TypeInfo, method);
      byte_4B31D77 = 1;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)NetworkManager_TypeInfo;
    }
    if ( !userQuestMaster_5__24 )
      goto LABEL_283;
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__24,
           &v470,
           *(_QWORD *)(*(_QWORD *)&this->fields._warIdx_5__18 + 64LL),
           (int32_t)_1__state,
           0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v470;
      if ( !v470 )
        goto LABEL_283;
      QuestPhase = UserQuestEntity__getQuestPhase(v470, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__getSpotId_40278904(v326, QuestPhase + 1, 0LL);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_283;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_283;
      v331 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass43_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&_8__1->fields.__9__2,
          (int64_t)_9__2,
          v333,
          v334,
          v335,
          v336,
          v337,
          v338);
      }
      if ( !v331 )
        goto LABEL_283;
      v339 = System_Collections_Generic_List_object___Find(
               v331,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v2 = v468;
      v468->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v339;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v468->fields._spotInfo_5__22,
        (int64_t)v339,
        v340,
        v341,
        v342,
        v343,
        v344,
        v345);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v468->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_283;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v468->fields._mapInfoNow_5__27 != MapID )
      {
        v468->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v468->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v468->fields._mapInfo_5__21,
          (int64_t)MapInfoByMapID,
          v348,
          v349,
          v350,
          v351,
          v352,
          v353);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v468->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_283;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_283;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v468->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v468->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v468->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v468->fields._warInfo_5__20,
            (int64_t)WarInfoByWarID,
            v355,
            v356,
            v357,
            v358,
            v359,
            v360);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v468->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_283;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v468->fields._warEnt_5__23 = Mine;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v468->fields._warEnt_5__23,
            (int64_t)Mine,
            v362,
            v363,
            v364,
            v365,
            v366,
            v367);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_283;
    if ( !v470 )
      goto LABEL_190;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v470;
    if ( !v470 )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v470, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_178;
    if ( !v470 )
      goto LABEL_283;
    if ( v470->fields.challengeNum >= 1 )
    {
LABEL_178:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_283;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v470;
    if ( !v470 )
      goto LABEL_283;
    if ( UserQuestEntity__getClearNum(v470, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_283;
LABEL_190:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v368 = 0;
      goto LABEL_191;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v470 )
      goto LABEL_283;
    if ( !this )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v470->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v2->fields._warInfo_5__20 )
      goto LABEL_283;
    v368 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_WarInfo__GetMine(v2->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_283;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_283;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_191:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    method = (const MethodInfo *)v2->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_283;
    v375 = this;
    if ( !this )
      goto LABEL_283;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields._eventMaster_5__8,
      (int64_t)method,
      v369,
      v370,
      v371,
      v372,
      v373,
      v374);
    spotInfo_5__22 = (int64_t)v2->fields._spotInfo_5__22;
    v375->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)spotInfo_5__22;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v375->fields._questPhaseMaster_5__7,
      spotInfo_5__22,
      v377,
      v378,
      v379,
      v380,
      v381,
      v382);
    if ( !_4__this )
      goto LABEL_283;
    v375->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v375,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_283;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_205;
      }
    }
    warEnt_5__23 = v2->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_283;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)value;
      if ( !value )
        goto LABEL_283;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_205:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v375, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v375->fields.__4__this) = 0;
LABEL_209:
        v384 = 1;
        goto LABEL_210;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v326, (MapControl_QuestInfo_o *)v375, v2->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_209;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_283;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v384 = 0;
LABEL_210:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v375, 0LL) )
    {
      if ( ((v368 | v384) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v375, 0LL) != 8 )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
          if ( !this )
            goto LABEL_283;
          MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_283;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v375->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v375, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v375,
                                                                   0LL);
        if ( !this )
          goto LABEL_283;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v385 = v2->fields._spotInfo_5__22;
          if ( !v385 )
            goto LABEL_283;
          v385->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v2->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_283;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v375,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v387 = v2->fields._spotInfo_5__22;
        if ( !v387 )
          goto LABEL_283;
        v387->fields._IsNext_k__BackingField = 1;
        v388 = v2->fields._mapInfo_5__21;
        if ( !v388 )
          goto LABEL_283;
        v388->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v326, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_283;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v470 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)UserQuestEntity__HasStatus(v470, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v470 )
          goto LABEL_283;
        v389 = v470->fields.challengeNum == 0;
      }
      else
      {
        v389 = 0;
      }
    }
    else
    {
      v389 = 1;
    }
    LOBYTE(v375->fields.__8__1) = v389;
    HIDWORD(v375->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_283;
    LODWORD(v375->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_283;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_283;
    v396 = this->fields.__2__current;
    v397 = this;
    v398 = (_DWORD)v396 - 1;
    if ( (int)v396 >= 1 )
    {
      v399 = 0;
      while ( 1 )
      {
        v400 = *((_QWORD *)&v397->fields.__4__this + v399);
        if ( !v400 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v375,
                                                                   *(_DWORD *)(v400 + 16),
                                                                   *(_DWORD *)(v400 + 20),
                                                                   0LL);
        if ( v398 == v399 )
          goto LABEL_246;
        if ( (unsigned int)++v399 >= LODWORD(v397->fields.__2__current) )
          goto LABEL_145;
      }
LABEL_283:
      sub_1BD36B4(this, method);
    }
LABEL_246:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_283;
    v401 = *(_QWORD *)&this->fields.__1__state;
    v402 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v401 )
      goto LABEL_283;
    v403 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v403 >= *(_DWORD *)(v401 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v375,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v402[4] + 192LL) + 112LL));
    }
    else
    {
      v404 = v401 + 8 * v403;
      LODWORD(this->fields.__2__current) = v403 + 1;
      *(_QWORD *)(v404 + 32) = v375;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v404 + 32), (int64_t)v375, v390, v391, v392, v393, v394, v395);
    }
    questIdx_5__25 = v2->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v2->fields._breakInterval_5__29) )
    {
      v2->fields.__2__current = 0LL;
      v463 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1BD33FC(v463, 0LL, v405, v406, v407, v408, v409, v410);
      v464 = 2;
      goto LABEL_281;
    }
LABEL_253:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)(unsigned int)v2->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v2->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_283;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
  }
  v412 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v412 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)QuestTree___c_TypeInfo;
    }
    v413 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v412 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(v412, v413, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__43_1__, 0LL);
    v414 = QuestTree___c_TypeInfo->static_fields;
    v414->__9__43_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v412;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v414->__9__43_1, (int64_t)v412, v415, v416, v417, v418, v419, v420);
  }
  if ( !allQuestInfoList )
    goto LABEL_283;
  System_Collections_Generic_List_object___Sort_56371284(
    allQuestInfoList,
    v412,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v2->fields.__8__1 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.__8__1, 0LL, v421, v422, v423, v424, v425, v426);
  v2->fields._warInfo_5__20 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._warInfo_5__20, 0LL, v427, v428, v429, v430, v431, v432);
  v2->fields._mapInfo_5__21 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._mapInfo_5__21, 0LL, v433, v434, v435, v436, v437, v438);
  v2->fields._spotInfo_5__22 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._spotInfo_5__22, 0LL, v439, v440, v441, v442, v443, v444);
  v2->fields._warEnt_5__23 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._warEnt_5__23, 0LL, v445, v446, v447, v448, v449, v450);
  v2->fields._userQuestMaster_5__24 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._userQuestMaster_5__24, 0LL, v451, v452, v453, v454, v455, v456);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_283;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( v2->fields.endCallback )
  {
    v2->fields.__2__current = 0LL;
    v463 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
    sub_1BD33FC(v463, 0LL, v457, v458, v459, v460, v461, v462);
    v464 = 3;
LABEL_281:
    *(_DWORD *)&v463[-1].fields._IsQuestStartMenuMode_k__BackingField = v464;
    return 1;
  }
LABEL_266:
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_283;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this )
    goto LABEL_283;
  CommonReleaseMaster__DeleteCache((CommonReleaseMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_283;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestAddMaster___);
  if ( !this )
    goto LABEL_283;
  QuestAddMaster__DeleteCache((QuestAddMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_283;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !this )
    goto LABEL_283;
  QuestGroupMaster__DeleteCache((QuestGroupMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_283;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
  if ( !this )
    goto LABEL_283;
  QuestReleaseOverwriteMaster__DeleteCache((QuestReleaseOverwriteMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_283;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !this )
    goto LABEL_283;
  UserQuestMaster__DeleteCache((UserQuestMaster_o *)this, 0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)v2->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_283;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_WarAddMaster___);
  if ( !this )
    goto LABEL_283;
  WarAddMaster__DeleteCache((WarAddMaster_o *)this, 0LL);
  if ( !_4__this )
    goto LABEL_283;
  result = 0;
  _4__this->fields.isUseCache = 0;
  return result;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeMakeWithOpenCheck_d__43__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeMakeWithOpenCheck_d__43_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44___ctor(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__MoveNext(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v8; // x8
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
  __int64 v111; // x1
  QuestTree_o *_4__this; // x19
  QuestTree___c__DisplayClass44_0_o *v113; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x0
  __int64 v122; // x1
  struct QuestTree___c__DisplayClass44_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  __int64 v132; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v134; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v136; // x0
  Il2CppObject *v137; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  __int64 v145; // x1
  DataManager_o *v146; // x0
  Il2CppObject *v147; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  __int64 v155; // x1
  DataManager_o *v156; // x0
  Il2CppObject *v157; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v158; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  __int64 v165; // x1
  DataManager_o *v166; // x0
  Il2CppObject *v167; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v168; // x0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  __int64 v175; // x1
  DataManager_o *v176; // x0
  __int64 v177; // x1
  Il2CppObject *v178; // x24
  DataManager_o *v179; // x0
  __int64 v180; // x1
  Il2CppObject *v181; // x23
  DataManager_o *v182; // x0
  __int64 v183; // x1
  Il2CppObject *v184; // x22
  DataManager_o *v185; // x0
  __int64 v186; // x1
  Il2CppObject *v187; // x21
  DataManager_o *v188; // x0
  Il2CppObject *v189; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v190; // x0
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  __int64 v197; // x1
  DataManager_o *v198; // x0
  Il2CppObject *v199; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v200; // x0
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  __int64 v207; // x1
  DataManager_o *v208; // x0
  Il2CppObject *v209; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v210; // x0
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  System_Collections_Generic_Dictionary_int__object__o *v217; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v218; // x0
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  QuestTree___c__DisplayClass44_1_o *v225; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v226; // x0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  __int64 v233; // x1
  DataManager_o *v234; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object__object; // x25
  Il2CppObject *v236; // x27
  System_Func_object__bool__o *v237; // x26
  Il2CppObject *v238; // x0
  __int64 v239; // x1
  struct QuestTree___c__DisplayClass44_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v244; // x27
  System_Predicate_object__o *v245; // x26
  __int64 v246; // x0
  __int64 v247; // x1
  __int64 Index; // x0
  __int64 v249; // x1
  System_Collections_Generic_List_object__o *v250; // x0
  struct QuestTree___c__DisplayClass44_1_o *v251; // x9
  MapControl_RootInfo_o *v252; // x0
  struct MapControl_WarInfo_o *v253; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v254; // x0
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  __int64 v261; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v263; // x1
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  MapControl_WarInfo_o *v270; // x0
  __int64 EventId; // x0
  __int64 v272; // x1
  _BOOL8 v273; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v274; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v276; // x0
  MapControl_WarInfo_o *v277; // x0
  __int64 v278; // x0
  __int64 v279; // x1
  __int64 v280; // x1
  __int64 v281; // x1
  __int64 v282; // x1
  MapControl_WarInfo_o *v283; // x0
  __int64 v284; // x0
  __int64 v285; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v287; // x0
  __int64 v288; // x0
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v290; // x1
  struct QuestTree___c__DisplayClass44_1_o *v291; // x8
  Il2CppObject *v292; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v294; // x21
  System_Int64_array *v295; // x0
  __int64 v296; // x1
  Il2CppObject *v297; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v299; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v301; // x1
  _QWORD *v302; // x9
  __int64 size; // x10
  Il2CppClass **v304; // x8
  __int64 v305; // x0
  __int64 v306; // x1
  int32_t v307; // w9
  struct QuestTree___c__DisplayClass44_1_o *v308; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v310; // x0
  __int64 v311; // x1
  SpotRoadEntity_array *v312; // x20
  int v313; // w25
  il2cpp_array_size_t i; // w26
  __int64 v315; // x21
  __int64 v316; // x0
  __int64 v317; // x1
  SpotRoadEntity_o *v318; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v320; // x24
  __int64 v321; // x0
  __int64 v322; // x1
  unsigned int v323; // w0
  __int64 v324; // x1
  System_Collections_Generic_List_object__o *v325; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v327; // x1
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  System_Collections_Generic_List_object__o *v334; // x0
  Il2CppObject *v335; // x1
  struct System_Object_array *v336; // x8
  _QWORD *v337; // x9
  __int64 v338; // x10
  Il2CppClass **v339; // x8
  struct QuestTree___c__DisplayClass44_1_o *v340; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v342; // x0
  __int64 v343; // x1
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  MapGimmickEntity_array *v350; // x20
  int v351; // w24
  il2cpp_array_size_t j; // w25
  __int64 v353; // x21
  __int64 v354; // x0
  __int64 v355; // x1
  MapGimmickEntity_o *v356; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v358; // x23
  __int64 v359; // x0
  __int64 v360; // x1
  unsigned int v361; // w0
  __int64 v362; // x1
  System_Collections_Generic_List_object__o *v363; // x0
  MapControl_MapInfo_o *v364; // x0
  __int64 v365; // x1
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  System_Collections_Generic_List_object__o *v372; // x0
  Il2CppObject *v373; // x1
  struct System_Object_array *v374; // x8
  _QWORD *v375; // x9
  __int64 v376; // x10
  Il2CppClass **v377; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v378; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v379; // x8
  int v380; // w9
  PartyOrganizationUtility_o *p_mapInfo_5__16; // x8
  __int64 v382; // x0
  __int64 v383; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v384; // x8
  int32_t mapCount_5__13; // w10
  int32_t v386; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v388; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v390; // x0
  int64_t v391; // x2
  int32_t v392; // w3
  System_String_o *v393; // x4
  BattleSetupInfo_o *v394; // x5
  FollowerInfo_o *v395; // x6
  PartyListViewItem_o *v396; // x7
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v398; // x10
  MapEntity_o *v399; // x9
  struct QuestTree___c__DisplayClass44_1_o *v400; // x22
  struct MapControl_WarInfo_o *v401; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int64_t v404; // x2
  int32_t v405; // w3
  System_String_o *v406; // x4
  BattleSetupInfo_o *v407; // x5
  FollowerInfo_o *v408; // x6
  PartyListViewItem_o *v409; // x7
  struct MapControl_WarInfo_o *v410; // x8
  System_Collections_Generic_List_object__o *v411; // x0
  struct QuestTree___c__DisplayClass44_1_o *v412; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int64_t v415; // x2
  int32_t v416; // w3
  System_String_o *v417; // x4
  BattleSetupInfo_o *v418; // x5
  FollowerInfo_o *v419; // x6
  PartyListViewItem_o *v420; // x7
  __int64 v421; // x0
  __int64 v422; // x1
  System_Collections_Generic_List_object__o *v423; // x0
  struct QuestTree___c__DisplayClass44_1_o *v424; // x8
  MapControl_WarInfo_o *v425; // x0
  struct MapControl_MapInfo_o *v426; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v427; // x0
  int64_t v428; // x2
  int32_t v429; // w3
  System_String_o *v430; // x4
  BattleSetupInfo_o *v431; // x5
  FollowerInfo_o *v432; // x6
  PartyListViewItem_o *v433; // x7
  __int64 v434; // x1
  int64_t v435; // x2
  int32_t v436; // w3
  System_String_o *v437; // x4
  BattleSetupInfo_o *v438; // x5
  FollowerInfo_o *v439; // x6
  PartyListViewItem_o *v440; // x7
  System_Collections_Generic_List_object__o *v441; // x0
  struct System_Object_array *v442; // x8
  Il2CppObject *v443; // x1
  _QWORD *v444; // x9
  __int64 v445; // x10
  Il2CppClass **v446; // x8
  __int64 v447; // x0
  __int64 v448; // x1
  System_Collections_Generic_List_object__o *v449; // x20
  QuestTree___c_c *v450; // x8
  System_Comparison_T__o *_9__44_2; // x21
  Il2CppObject *v452; // x22
  struct QuestTree___c_StaticFields *v453; // x0
  int64_t v454; // x2
  int32_t v455; // w3
  System_String_o *v456; // x4
  BattleSetupInfo_o *v457; // x5
  FollowerInfo_o *v458; // x6
  PartyListViewItem_o *v459; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v460; // x0
  int64_t v461; // x2
  int32_t v462; // w3
  System_String_o *v463; // x4
  BattleSetupInfo_o *v464; // x5
  FollowerInfo_o *v465; // x6
  PartyListViewItem_o *v466; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v467; // x0
  int64_t v468; // x2
  int32_t v469; // w3
  System_String_o *v470; // x4
  BattleSetupInfo_o *v471; // x5
  FollowerInfo_o *v472; // x6
  PartyListViewItem_o *v473; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v474; // x0
  int64_t v475; // x2
  int32_t v476; // w3
  System_String_o *v477; // x4
  BattleSetupInfo_o *v478; // x5
  FollowerInfo_o *v479; // x6
  PartyListViewItem_o *v480; // x7
  Il2CppObject *v481; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v482; // x0
  int64_t v483; // x2
  int32_t v484; // w3
  System_String_o *v485; // x4
  BattleSetupInfo_o *v486; // x5
  FollowerInfo_o *v487; // x6
  PartyListViewItem_o *v488; // x7
  int64_t v489; // x21
  MapControl_WarInfo_o *v490; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v491; // x0
  int64_t v492; // x2
  int32_t v493; // w3
  System_String_o *v494; // x4
  BattleSetupInfo_o *v495; // x5
  FollowerInfo_o *v496; // x6
  PartyListViewItem_o *v497; // x7
  MapControl_MapInfo_o *v498; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v499; // x0
  int64_t v500; // x2
  int32_t v501; // w3
  System_String_o *v502; // x4
  BattleSetupInfo_o *v503; // x5
  FollowerInfo_o *v504; // x6
  PartyListViewItem_o *v505; // x7
  MapControl_SpotInfo_o *v506; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v507; // x0
  int64_t v508; // x2
  int32_t v509; // w3
  System_String_o *v510; // x4
  BattleSetupInfo_o *v511; // x5
  FollowerInfo_o *v512; // x6
  PartyListViewItem_o *v513; // x7
  WarEntity_o *v514; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v515; // x0
  int64_t v516; // x2
  int32_t v517; // w3
  System_String_o *v518; // x4
  BattleSetupInfo_o *v519; // x5
  FollowerInfo_o *v520; // x6
  PartyListViewItem_o *v521; // x7
  __int64 v522; // x1
  DataManager_o *v523; // x0
  Il2CppObject *v524; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v525; // x0
  int64_t v526; // x2
  int32_t v527; // w3
  System_String_o *v528; // x4
  BattleSetupInfo_o *v529; // x5
  FollowerInfo_o *v530; // x6
  PartyListViewItem_o *v531; // x7
  Il2CppObject *Master_object; // x0
  __int64 v533; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v534; // x8
  struct QuestTree___c__DisplayClass44_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v537; // x1
  int32_t v538; // w9
  struct QuestTree___c__DisplayClass44_6_o *v539; // x20
  System_Collections_Generic_List_int__o *v540; // x21
  __int64 v541; // x0
  __int64 v542; // x1
  int64_t v543; // x2
  int32_t v544; // w3
  System_String_o *v545; // x4
  BattleSetupInfo_o *v546; // x5
  FollowerInfo_o *v547; // x6
  PartyListViewItem_o *v548; // x7
  __int64 v549; // x1
  System_Collections_Generic_List_object__o *v550; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v551; // x9
  __int128 v552; // q0
  PartyOrganizationUtility_o *p__7__wrap24; // x0
  int64_t v554; // x2
  int32_t v555; // w3
  System_String_o *v556; // x4
  BattleSetupInfo_o *v557; // x5
  FollowerInfo_o *v558; // x6
  PartyListViewItem_o *v559; // x7
  const MethodInfo *v560; // x1
  bool v561; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v562; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v565; // x1
  int64_t v566; // x2
  int32_t v567; // w3
  System_String_o *v568; // x4
  BattleSetupInfo_o *v569; // x5
  FollowerInfo_o *v570; // x6
  PartyListViewItem_o *v571; // x7
  struct QuestTree___c__DisplayClass44_0_o *v572; // x9
  struct QuestTree___c__DisplayClass44_6_o *v573; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v576; // x9
  _QWORD *v577; // x10
  __int64 v578; // x11
  unsigned __int64 v579; // t2
  __int64 v580; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v581; // x8
  DataMasterBase_o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x20
  Il2CppObject *v584; // x22
  System_Func_object__bool__o *v585; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v586; // x0
  System_Object_array *v587; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v588; // x0
  int64_t v589; // x2
  int32_t v590; // w3
  System_String_o *v591; // x4
  BattleSetupInfo_o *v592; // x5
  FollowerInfo_o *v593; // x6
  PartyListViewItem_o *v594; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v595; // x8
  __int64 mapIdx_5__12; // x0
  int32_t v597; // w9
  struct QuestTree___c__DisplayClass44_1_o *v598; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v600; // x0
  __int64 v601; // x1
  SpotEntity_array *v602; // x20
  int v603; // w25
  il2cpp_array_size_t k; // w26
  __int64 v605; // x21
  __int64 v606; // x0
  __int64 v607; // x1
  SpotEntity_o *v608; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v610; // x24
  __int64 v611; // x0
  __int64 v612; // x1
  unsigned int v613; // w0
  __int64 v614; // x1
  System_Collections_Generic_List_object__o *v615; // x0
  MapControl_MapInfo_o *v616; // x0
  __int64 v617; // x1
  int64_t v618; // x2
  int32_t v619; // w3
  System_String_o *v620; // x4
  BattleSetupInfo_o *v621; // x5
  FollowerInfo_o *v622; // x6
  PartyListViewItem_o *v623; // x7
  System_Collections_Generic_List_object__o *v624; // x0
  Il2CppObject *v625; // x1
  struct System_Object_array *v626; // x8
  _QWORD *v627; // x9
  __int64 v628; // x10
  Il2CppClass **v629; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v630; // x0
  System_Object_array *v631; // x0
  __int64 v632; // x1
  int64_t v633; // x2
  int32_t v634; // w3
  System_String_o *v635; // x4
  BattleSetupInfo_o *v636; // x5
  FollowerInfo_o *v637; // x6
  PartyListViewItem_o *v638; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v639; // x20
  __int64 v640; // x21
  QuestTree___c_c *v641; // x8
  System_Func_object__int__o *_9__44_6; // x22
  Il2CppObject *v643; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v645; // x2
  int32_t v646; // w3
  System_String_o *v647; // x4
  BattleSetupInfo_o *v648; // x5
  FollowerInfo_o *v649; // x6
  PartyListViewItem_o *v650; // x7
  System_Collections_Generic_IEnumerable_T__o *v651; // x23
  System_Collections_Generic_HashSet_int__o *v652; // x22
  __int64 v653; // x0
  __int64 v654; // x1
  int64_t v655; // x2
  int32_t v656; // w3
  System_String_o *v657; // x4
  BattleSetupInfo_o *v658; // x5
  FollowerInfo_o *v659; // x6
  PartyListViewItem_o *v660; // x7
  System_Collections_Generic_List_T__o *v661; // x22
  System_Func_object__bool__o *v662; // x23
  __int64 v663; // x1
  System_Collections_Generic_List_object__o *v664; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v665; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v668; // x20
  struct QuestTree___c__DisplayClass44_6_o *v669; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  NetworkManager_c *v671; // x0
  struct QuestTree___c__DisplayClass44_6_o *v672; // x8
  __int64 v673; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_40278904; // x0
  __int64 warId; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v677; // x22
  struct QuestTree___c__DisplayClass44_6_o *v678; // x25
  System_Collections_Generic_List_object__o *v679; // x23
  System_Predicate_object__o *_9__12; // x24
  int64_t v681; // x2
  int32_t v682; // w3
  System_String_o *v683; // x4
  BattleSetupInfo_o *v684; // x5
  FollowerInfo_o *v685; // x6
  PartyListViewItem_o *v686; // x7
  Il2CppObject *v687; // x0
  int64_t v688; // x2
  int32_t v689; // w3
  System_String_o *v690; // x4
  BattleSetupInfo_o *v691; // x5
  FollowerInfo_o *v692; // x6
  PartyListViewItem_o *v693; // x7
  __int64 v694; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v697; // x0
  int64_t v698; // x2
  int32_t v699; // w3
  System_String_o *v700; // x4
  BattleSetupInfo_o *v701; // x5
  FollowerInfo_o *v702; // x6
  PartyListViewItem_o *v703; // x7
  __int64 v704; // x1
  MapControl_MapInfo_o *v705; // x0
  __int64 v706; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v708; // x0
  int64_t v709; // x2
  int32_t v710; // w3
  System_String_o *v711; // x4
  BattleSetupInfo_o *v712; // x5
  FollowerInfo_o *v713; // x6
  PartyListViewItem_o *v714; // x7
  __int64 v715; // x1
  MapControl_WarInfo_o *v716; // x0
  struct WarEntity_o *v717; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v718; // x0
  int64_t v719; // x2
  int32_t v720; // w3
  System_String_o *v721; // x4
  BattleSetupInfo_o *v722; // x5
  FollowerInfo_o *v723; // x6
  PartyListViewItem_o *v724; // x7
  struct QuestTree___c__DisplayClass44_6_o *v725; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int64_t v728; // x2
  int32_t v729; // w3
  System_String_o *v730; // x4
  BattleSetupInfo_o *v731; // x5
  FollowerInfo_o *v732; // x6
  PartyListViewItem_o *v733; // x7
  unsigned int v734; // w0
  __int64 v735; // x1
  System_Collections_Generic_List_object__o *v736; // x0
  MapControl_WarInfo_o *v737; // x0
  __int64 v738; // x1
  _BOOL8 HasStatus; // x0
  __int64 v740; // x1
  MapControl_WarInfo_o *v741; // x0
  WarEntity_o *v742; // x0
  __int64 v743; // x1
  int v744; // w23
  bool v745; // cc
  __int64 v746; // x1
  struct QuestTree___c__DisplayClass44_6_o *v747; // x9
  MapControl_WarInfo_o *v748; // x0
  struct QuestTree___c__DisplayClass44_6_o *v749; // x8
  MapControl_SpotInfo_o *v750; // x0
  MapControl_QuestInfo_o *v751; // x0
  int64_t v752; // x2
  int32_t v753; // w3
  System_String_o *v754; // x4
  BattleSetupInfo_o *v755; // x5
  FollowerInfo_o *v756; // x6
  PartyListViewItem_o *v757; // x7
  struct MapControl_WarInfo_o *v758; // x1
  int64_t v759; // x22
  int32_t v760; // w8
  struct MapControl_SpotInfo_o *v761; // x1
  int64_t v762; // x2
  int32_t v763; // w3
  System_String_o *v764; // x4
  BattleSetupInfo_o *v765; // x5
  FollowerInfo_o *v766; // x6
  PartyListViewItem_o *v767; // x7
  __int64 v768; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v771; // x1
  struct WarEntity_o *v772; // x8
  struct QuestTree___c__DisplayClass44_6_o *v773; // x9
  struct WarEntity_o *v774; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v775; // x0
  _BOOL8 v776; // x0
  __int64 v777; // x1
  struct QuestTree___c__DisplayClass44_6_o *v778; // x8
  __int64 v779; // x1
  MapControl_WarInfo_o *v780; // x0
  int v781; // w24
  __int64 v782; // x1
  __int64 v783; // x1
  MapControl_SpotInfo_o *v784; // x0
  MapControl_SpotInfo_o *v785; // x0
  QuestEntity_o *v786; // x0
  __int64 v787; // x1
  _BOOL8 HasFlag; // x0
  __int64 v789; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v790; // x8
  struct MapControl_SpotInfo_o *v791; // x9
  struct MapControl_MapInfo_o *v792; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v794; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v795; // x8
  struct MapControl_SpotInfo_o *v796; // x9
  struct MapControl_MapInfo_o *v797; // x8
  MapControl_SpotInfo_o *v798; // x0
  UserQuestEntity_o *v799; // x0
  bool v800; // w8
  struct QuestTree___c__DisplayClass44_6_o *v801; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v804; // x1
  struct QuestTree___c__DisplayClass44_6_o *v805; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v807; // x0
  __int64 v808; // x1
  int64_t v809; // x2
  int32_t v810; // w3
  System_String_o *v811; // x4
  BattleSetupInfo_o *v812; // x5
  FollowerInfo_o *v813; // x6
  PartyListViewItem_o *v814; // x7
  _QWORD *v815; // x20
  __int64 v816; // x8
  int v817; // w21
  int v818; // w23
  __int64 v819; // x8
  System_Collections_Generic_List_object__o *v820; // x0
  struct System_Object_array *v821; // x8
  _QWORD *v822; // x9
  __int64 v823; // x10
  Il2CppClass **v824; // x8
  int64_t v825; // x2
  int32_t v826; // w3
  System_String_o *v827; // x4
  BattleSetupInfo_o *v828; // x5
  FollowerInfo_o *v829; // x6
  PartyListViewItem_o *v830; // x7
  System_Collections_Generic_List_object__o *v831; // x20
  QuestTree___c_c *v832; // x8
  System_Comparison_T__o *_9__44_11; // x21
  Il2CppObject *v834; // x22
  struct QuestTree___c_StaticFields *v835; // x0
  int64_t v836; // x2
  int32_t v837; // w3
  System_String_o *v838; // x4
  BattleSetupInfo_o *v839; // x5
  FollowerInfo_o *v840; // x6
  PartyListViewItem_o *v841; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v842; // x0
  int64_t v843; // x2
  int32_t v844; // w3
  System_String_o *v845; // x4
  BattleSetupInfo_o *v846; // x5
  FollowerInfo_o *v847; // x6
  PartyListViewItem_o *v848; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v849; // x0
  int64_t v850; // x2
  int32_t v851; // w3
  System_String_o *v852; // x4
  BattleSetupInfo_o *v853; // x5
  FollowerInfo_o *v854; // x6
  PartyListViewItem_o *v855; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v856; // x0
  int64_t v857; // x2
  int32_t v858; // w3
  System_String_o *v859; // x4
  BattleSetupInfo_o *v860; // x5
  FollowerInfo_o *v861; // x6
  PartyListViewItem_o *v862; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v863; // x0
  int64_t v864; // x2
  int32_t v865; // w3
  System_String_o *v866; // x4
  BattleSetupInfo_o *v867; // x5
  FollowerInfo_o *v868; // x6
  PartyListViewItem_o *v869; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v870; // x0
  int64_t v871; // x2
  int32_t v872; // w3
  System_String_o *v873; // x4
  BattleSetupInfo_o *v874; // x5
  FollowerInfo_o *v875; // x6
  PartyListViewItem_o *v876; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v877; // x0
  int64_t v878; // x2
  int32_t v879; // w3
  System_String_o *v880; // x4
  BattleSetupInfo_o *v881; // x5
  FollowerInfo_o *v882; // x6
  PartyListViewItem_o *v883; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v884; // x0
  int64_t v885; // x2
  int32_t v886; // w3
  System_String_o *v887; // x4
  BattleSetupInfo_o *v888; // x5
  FollowerInfo_o *v889; // x6
  PartyListViewItem_o *v890; // x7
  Il2CppObject *v891; // x0
  __int64 v892; // x1
  int64_t v893; // x2
  int32_t v894; // w3
  System_String_o *v895; // x4
  BattleSetupInfo_o *v896; // x5
  FollowerInfo_o *v897; // x6
  PartyListViewItem_o *v898; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v899; // x0
  System_Collections_Generic_List_Enumerator_T__o v900[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v901; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o **v902; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v904; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v908; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *v910; // [xsp+88h] [xbp-68h] BYREF

  v8 = this;
  v910 = this;
  if ( (byte_4B3433A & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method);
    sub_1BD3458(&System_Comparison_MapControl_QuestInfo__TypeInfo, v9);
    sub_1BD3458(&System_Comparison_MapControl_WarInfo__TypeInfo, v10);
    sub_1BD3458(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v11);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, v12);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, v13);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventStatusMaster___, v14);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v15);
    sub_1BD3458(&Method_DataManager_GetMasterData_MapGimmickMaster___, v16);
    sub_1BD3458(&Method_DataManager_GetMasterData_MapMaster___, v17);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, v18);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v19);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestPickupMaster___, v20);
    sub_1BD3458(&Method_DataManager_GetMasterData_SpotMaster___, v21);
    sub_1BD3458(&Method_DataManager_GetMasterData_SpotRoadMaster___, v22);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserQuestMaster___, v23);
    sub_1BD3458(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v24);
    sub_1BD3458(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v25);
    sub_1BD3458(&DataManager_TypeInfo, v26);
    sub_1BD3458(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v27);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v28);
    sub_1BD3458(&Method_DataMasterBase_getEntitys_QuestEntity___, v29);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v30);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v31);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v32);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v33);
    sub_1BD3458(&Method_System_Linq_Enumerable_Count_QuestEntity___, v34);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v35);
    sub_1BD3458(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v36);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v37);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v38);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_QuestEntity___, v39);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v40);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v41);
    sub_1BD3458(&System_Func_MapControl_SpotInfo__int__TypeInfo, v42);
    sub_1BD3458(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v43);
    sub_1BD3458(&System_Func_WarEntity__bool__TypeInfo, v44);
    sub_1BD3458(&System_Func_QuestEntity__bool__TypeInfo, v45);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor___76899480, v46);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v47);
    sub_1BD3458(&long___TypeInfo, v48);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v49);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v50);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v51);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v52);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v53);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v54);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v55);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v56);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v57);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v58);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v59);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v60);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v61);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v62);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v63);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v64);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v65);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v66);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v67);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v68);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v69);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v70);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v71);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v72);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v73);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v74);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v75);
    sub_1BD3458(&MapControl_MapInfo_TypeInfo, v76);
    sub_1BD3458(&NetworkManager_TypeInfo, v77);
    sub_1BD3458(&OptionManager_TypeInfo, v78);
    sub_1BD3458(&System_Predicate_MapControl_WarInfo__TypeInfo, v79);
    sub_1BD3458(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v80);
    sub_1BD3458(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v81);
    sub_1BD3458(&System_Predicate_MapControl_MapInfo__TypeInfo, v82);
    sub_1BD3458(&System_Predicate_MapControl_SpotInfo__TypeInfo, v83);
    sub_1BD3458(&System_Predicate_MapControl_QuestInfo__TypeInfo, v84);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v85);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v86);
    sub_1BD3458(&MapControl_SpotInfo_TypeInfo, v87);
    sub_1BD3458(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__, v88);
    sub_1BD3458(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__, v89);
    sub_1BD3458(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__, v90);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v91);
    sub_1BD3458(&QuestTree___c__DisplayClass44_0_TypeInfo, v92);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v93);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v94);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v95);
    sub_1BD3458(&QuestTree___c__DisplayClass44_1_TypeInfo, v96);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v97);
    sub_1BD3458(&QuestTree___c__DisplayClass44_2_TypeInfo, v98);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v99);
    sub_1BD3458(&QuestTree___c__DisplayClass44_3_TypeInfo, v100);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v101);
    sub_1BD3458(&QuestTree___c__DisplayClass44_4_TypeInfo, v102);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v103);
    sub_1BD3458(&QuestTree___c__DisplayClass44_5_TypeInfo, v104);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v105);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v106);
    sub_1BD3458(&Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v107);
    sub_1BD3458(&QuestTree___c__DisplayClass44_6_TypeInfo, v108);
    sub_1BD3458(&QuestTree___c_TypeInfo, v109);
    sub_1BD3458(&WarEntity_TypeInfo, v110);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *)sub_1BD3458(&MapControl_WarInfo_TypeInfo, v111);
    v8 = v910;
    byte_4B3433A = 1;
  }
  v908 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v904 = 0LL;
  mapGimmickInfo = 0LL;
  v901 = 0LL;
  v902 = &v910;
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v113 = (QuestTree___c__DisplayClass44_0_o *)sub_1BD36A4(QuestTree___c__DisplayClass44_0_TypeInfo);
      QuestTree___c__DisplayClass44_0___ctor(v113, 0LL);
      v114 = v910;
      v910->fields.__8__2 = v113;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v114->fields.__8__2, (int64_t)v113, v115, v116, v117, v118, v119, v120);
      _8__2 = v910->fields.__8__2;
      if ( !_8__2 )
        sub_1BD36B4(v121, v122);
      _8__2->fields.targetWarId = v910->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v125 = v910;
      v910->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v125->fields._dataManager_5__2,
        (int64_t)Instance,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      dataManager_5__2 = v910->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1BD36B4(0LL, v132);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MapMaster___);
      v136 = v910->fields._dataManager_5__2;
      if ( !v136 )
        sub_1BD36B4(0LL, v134);
      v137 = DataManager__GetMasterData_object_(
               v136,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SpotMaster___);
      v138 = v910;
      v910->fields._spotMaster_5__3 = (struct SpotMaster_o *)v137;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v138->fields._spotMaster_5__3,
        (int64_t)v137,
        v139,
        v140,
        v141,
        v142,
        v143,
        v144);
      v146 = v910->fields._dataManager_5__2;
      if ( !v146 )
        sub_1BD36B4(0LL, v145);
      v147 = DataManager__GetMasterData_object_(
               v146,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v148 = v910;
      v910->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v147;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v148->fields._blankEarthSpotMaster_5__4,
        (int64_t)v147,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
      v156 = v910->fields._dataManager_5__2;
      if ( !v156 )
        sub_1BD36B4(0LL, v155);
      v157 = DataManager__GetMasterData_object_(
               v156,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
      v158 = v910;
      v910->fields._questMaster_5__5 = (struct QuestMaster_o *)v157;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v158->fields._questMaster_5__5,
        (int64_t)v157,
        v159,
        v160,
        v161,
        v162,
        v163,
        v164);
      v166 = v910->fields._dataManager_5__2;
      if ( !v166 )
        sub_1BD36B4(0LL, v165);
      v167 = DataManager__GetMasterData_object_(
               v166,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v168 = v910;
      v910->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v167;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v168->fields._questPhaseMaster_5__6,
        (int64_t)v167,
        v169,
        v170,
        v171,
        v172,
        v173,
        v174);
      v176 = v910->fields._dataManager_5__2;
      if ( !v176 )
        sub_1BD36B4(0LL, v175);
      v178 = DataManager__GetMasterData_object_(
               v176,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___);
      v179 = v910->fields._dataManager_5__2;
      if ( !v179 )
        sub_1BD36B4(0LL, v177);
      v181 = DataManager__GetMasterData_object_(
               v179,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v182 = v910->fields._dataManager_5__2;
      if ( !v182 )
        sub_1BD36B4(0LL, v180);
      v184 = DataManager__GetMasterData_object_(
               v182,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v185 = v910->fields._dataManager_5__2;
      if ( !v185 )
        sub_1BD36B4(0LL, v183);
      v187 = DataManager__GetMasterData_object_(
               v185,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v188 = v910->fields._dataManager_5__2;
      if ( !v188 )
        sub_1BD36B4(0LL, v186);
      v189 = DataManager__GetMasterData_object_(
               v188,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v190 = v910;
      v910->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v189;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v190->fields._spotRoadMaster_5__7,
        (int64_t)v189,
        v191,
        v192,
        v193,
        v194,
        v195,
        v196);
      v198 = v910->fields._dataManager_5__2;
      if ( !v198 )
        sub_1BD36B4(0LL, v197);
      v199 = DataManager__GetMasterData_object_(
               v198,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v200 = v910;
      v910->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v199;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v200->fields._mapGimmickMaster_5__8,
        (int64_t)v199,
        v201,
        v202,
        v203,
        v204,
        v205,
        v206);
      v208 = v910->fields._dataManager_5__2;
      if ( !v208 )
        sub_1BD36B4(0LL, v207);
      v209 = DataManager__GetMasterData_object_(
               v208,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v210 = v910;
      v910->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v209;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v210->fields._questPickupMaster_5__9,
        (int64_t)v209,
        v211,
        v212,
        v213,
        v214,
        v215,
        v216);
      v217 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v217,
        (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v218 = v910;
      v910->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v217;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v218->fields._eventStatusQuestMismatchDictionary_5__10,
        (int64_t)v217,
        v219,
        v220,
        v221,
        v222,
        v223,
        v224);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v910->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v225 = (QuestTree___c__DisplayClass44_1_o *)sub_1BD36A4(QuestTree___c__DisplayClass44_1_TypeInfo);
      QuestTree___c__DisplayClass44_1___ctor(v225, 0LL);
      v226 = v910;
      v910->fields.__8__1 = v225;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v226->fields.__8__1, (int64_t)v225, v227, v228, v229, v230, v231, v232);
      v234 = v910->fields._dataManager_5__2;
      if ( !v234 )
        sub_1BD36B4(0LL, v233);
      Entitys_object__object = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__getEntitys_object__object_(
                                                                                      v234,
                                                                                      (const MethodInfo_2F318E4 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v236 = (Il2CppObject *)v910->fields.__8__2;
      v237 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_WarEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v237,
        v236,
        Method_QuestTree___c__DisplayClass44_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v238 = System_Linq_Enumerable__SingleOrDefault_object__49712072(
               Entitys_object__object,
               (System_Func_TSource__bool__o *)v237,
               (const MethodInfo_2F68BC8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v238 )
        sub_1BD36B4(0LL, v239);
      _8__1 = v910->fields.__8__1;
      if ( !_8__1 )
        sub_1BD36B4(v238, v239);
      klass_low = LODWORD(v238[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1BD36B4(v238, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1BD36B4(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v244 = (Il2CppObject *)v910->fields.__8__1;
      v245 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_WarInfo__TypeInfo);
      System_Predicate_object____ctor(
        v245,
        v244,
        Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1BD36B4(v246, v247);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v245,
                (const MethodInfo_35C15E8 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v249 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v250 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v250 )
          sub_1BD36B4(0LL, v249);
        System_Collections_Generic_List_object___RemoveAt(
          v250,
          v249,
          (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v251 = v910->fields.__8__1;
      if ( !v251 )
        sub_1BD36B4(Index, v249);
      v252 = _4__this->fields.mapControlRootInfo;
      if ( !v252 )
        sub_1BD36B4(0LL, v249);
      v253 = MapControl_RootInfo__AddChild(v252, v251->fields.warId, v910->fields._nowTime_5__11, 0LL);
      v254 = v910;
      v910->fields._warInfo_5__14 = v253;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v254->fields._warInfo_5__14,
        (int64_t)v253,
        v255,
        v256,
        v257,
        v258,
        v259,
        v260);
      warInfo_5__14 = v910->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1BD36B4(0LL, v261);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v270 = v910->fields._warInfo_5__14;
        if ( !v270 )
          sub_1BD36B4(0LL, v263);
        EventId = MapControl_WarInfo__GetEventId(v270, 0LL);
        if ( !v178 )
          sub_1BD36B4(EventId, v272);
        v273 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v178,
                 &entity,
                 EventId,
                 (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v273 )
        {
          if ( !entity )
            sub_1BD36B4(v273, v263);
          v274 = v910;
          nowTime_5__11 = v910->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v276 = v910->fields._warInfo_5__14;
            if ( !v276 )
              sub_1BD36B4(0LL, v263);
            MapControl_WarInfo__SetStatusCheckFlag(v276, 1, 0, 0LL);
            v274 = v910;
          }
          v277 = v274->fields._warInfo_5__14;
          if ( !v277 )
            sub_1BD36B4(0LL, v263);
          v278 = MapControl_WarInfo__GetEventId(v277, 0LL);
          if ( !v181 )
            sub_1BD36B4(v278, v279);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v181,
                 &v908,
                 v278,
                 (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v908 )
              sub_1BD36B4(0LL, v280);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v908, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1BD36B4(0LL, v281);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v910->fields._nowTime_5__11, 0LL) )
              {
                v283 = v910->fields._warInfo_5__14;
                if ( !v283 )
                  sub_1BD36B4(0LL, v282);
                v284 = MapControl_WarInfo__GetEventId(v283, 0LL);
                if ( !v184 )
                  sub_1BD36B4(v284, (unsigned int)v284);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v184, v284, 0LL);
                if ( NowEntity )
                {
                  v287 = v910->fields._warInfo_5__14;
                  if ( !v287 )
                    sub_1BD36B4(0LL, v285);
                  v288 = MapControl_WarInfo__GetEventId(v287, 0LL);
                  if ( !v187 )
                    sub_1BD36B4(v288, (unsigned int)v288);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v187,
                                        v288,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v291 = v910->fields.__8__1;
                  if ( !v291 )
                    sub_1BD36B4(MismatchQuestList, v290);
                  v292 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v910->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1BD36B4(0LL, v290);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v291->fields.warId,
                    v292,
                    (const MethodInfo_3224F94 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v294 = v910->fields._nowTime_5__11;
          v295 = (System_Int64_array *)sub_1BD3500(long___TypeInfo, 3LL);
          v297 = entity;
          if ( !entity )
            sub_1BD36B4(v295, v296);
          if ( !v295 )
            sub_1BD36B4(0LL, v296);
          max_length = v295->max_length;
          if ( !max_length )
            sub_1BD36BC(v295, v296);
          v295->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1BD36BC(v295, v296);
          v295->m_Items[1] = (int64_t)v297[5].monitor;
          if ( max_length <= 2 )
            sub_1BD36BC(v295, v296);
          v295->m_Items[2] = (int64_t)v297[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v294, v295, 0LL);
        }
      }
      v299 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v299 )
        sub_1BD36B4(0LL, v263);
      items = v299->fields._items;
      v301 = (Il2CppObject *)v910->fields._warInfo_5__14;
      v302 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v299->fields._version;
      if ( !items )
        sub_1BD36B4(v299, v301);
      size = v299->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v299,
          v301,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v302[4] + 192LL) + 112LL));
      }
      else
      {
        v304 = &items->obj.klass + size;
        v299->fields._size = size + 1;
        v304[4] = (Il2CppClass *)v301;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v304 + 4), (int64_t)v301, v264, v265, v266, v267, v268, v269);
      }
      v388 = v910->fields._warInfo_5__14;
      if ( !v388 )
        sub_1BD36B4(v305, v306);
      if ( !MasterData_object )
        sub_1BD36B4(v305, v306);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v388->fields.warId, 0LL);
      v390 = v910;
      v910->fields._mapList_5__15 = List;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v390->fields._mapList_5__15,
        (int64_t)List,
        v391,
        v392,
        v393,
        v394,
        v395,
        v396);
      v384 = v910;
      mapList_5__15 = v910->fields._mapList_5__15;
      v910->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1BD36B4(v382, v383);
      mapCount_5__13 = mapList_5__15->max_length;
      v386 = 0;
      v384->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_115;
    case 1:
      v308 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v308 )
        sub_1BD36B4(this, method);
      spotRoadMaster_5__7 = v8->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1BD36B4(0LL, method);
      v310 = SpotRoadMaster__getList(spotRoadMaster_5__7, v308->fields.mapId, 0LL);
      v312 = v310;
      if ( !v310 )
        sub_1BD36B4(0LL, v311);
      v313 = v310->max_length;
      if ( v313 >= 1 )
      {
        for ( i = 0; i != v313; ++i )
        {
          v315 = sub_1BD36A4(QuestTree___c__DisplayClass44_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v315, 0LL);
          if ( i >= v312->max_length )
            sub_1BD36BC(v316, v317);
          v318 = v312->m_Items[i];
          if ( !v318 )
            sub_1BD36B4(v316, v317);
          if ( !v315 )
            sub_1BD36B4(v316, v317);
          *(_DWORD *)(v315 + 16) = v318->fields.id;
          if ( !_4__this )
            sub_1BD36B4(v316, v317);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v320 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_SpotRoadInfo__TypeInfo);
          System_Predicate_object____ctor(
            v320,
            (Il2CppObject *)v315,
            Method_QuestTree___c__DisplayClass44_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1BD36B4(v321, v322);
          v323 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v320,
                   (const MethodInfo_35C15E8 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v324 = v323;
          if ( v323 != -1 )
          {
            v325 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v325 )
              sub_1BD36B4(0LL, v324);
            System_Collections_Generic_List_object___RemoveAt(
              v325,
              v324,
              (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v910->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1BD36B4(0LL, v324);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, *(_DWORD *)(v315 + 16), 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v318, &spotRoadInfo, 0LL);
          v334 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v334 )
            sub_1BD36B4(0LL, v327);
          v335 = (Il2CppObject *)spotRoadInfo;
          v336 = v334->fields._items;
          v337 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v334->fields._version;
          if ( !v336 )
            sub_1BD36B4(v334, v335);
          v338 = v334->fields._size;
          if ( (unsigned int)v338 >= v336->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v334,
              v335,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v337[4] + 192LL) + 112LL));
          }
          else
          {
            v339 = &v336->obj.klass + v338;
            v334->fields._size = v338 + 1;
            v339[4] = (Il2CppClass *)v335;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v339 + 4), (int64_t)v335, v328, v329, v330, v331, v332, v333);
          }
        }
      }
      v340 = v910->fields.__8__1;
      if ( !v340 )
        sub_1BD36B4(v310, v311);
      mapGimmickMaster_5__8 = v910->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1BD36B4(0LL, v311);
      v342 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v340->fields.mapId, 0LL);
      v350 = v342;
      if ( !v342 )
        sub_1BD36B4(0LL, v343);
      v351 = v342->max_length;
      if ( v351 >= 1 )
      {
        for ( j = 0; j != v351; ++j )
        {
          v353 = sub_1BD36A4(QuestTree___c__DisplayClass44_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v353, 0LL);
          if ( j >= v350->max_length )
            sub_1BD36BC(v354, v355);
          v356 = v350->m_Items[j];
          if ( !v356 )
            sub_1BD36B4(v354, v355);
          if ( !v353 )
            sub_1BD36B4(v354, v355);
          *(_DWORD *)(v353 + 16) = v356->fields.id;
          if ( !_4__this )
            sub_1BD36B4(v354, v355);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v358 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_MapGimmickInfo__TypeInfo);
          System_Predicate_object____ctor(
            v358,
            (Il2CppObject *)v353,
            Method_QuestTree___c__DisplayClass44_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1BD36B4(v359, v360);
          v361 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v358,
                   (const MethodInfo_35C15E8 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v362 = v361;
          if ( v361 != -1 )
          {
            v363 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v363 )
              sub_1BD36B4(0LL, v362);
            System_Collections_Generic_List_object___RemoveAt(
              v363,
              v362,
              (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v364 = v910->fields._mapInfo_5__16;
          if ( !v364 )
            sub_1BD36B4(0LL, v362);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v364, *(_DWORD *)(v353 + 16), 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v372 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v372 )
            sub_1BD36B4(0LL, v365);
          v373 = (Il2CppObject *)mapGimmickInfo;
          v374 = v372->fields._items;
          v375 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v372->fields._version;
          if ( !v374 )
            sub_1BD36B4(v372, v373);
          v376 = v372->fields._size;
          if ( (unsigned int)v376 >= v374->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v372,
              v373,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v375[4] + 192LL) + 112LL));
          }
          else
          {
            v377 = &v374->obj.klass + v376;
            v372->fields._size = v376 + 1;
            v377[4] = (Il2CppClass *)v373;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v377 + 4), (int64_t)v373, v366, v367, v368, v369, v370, v371);
          }
        }
      }
      v378 = v910;
      v910->fields.__2__current = 0LL;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v378->fields.__2__current, 0LL, v344, v345, v346, v347, v348, v349);
      v379 = v910;
      v380 = 2;
      goto LABEL_326;
    case 2:
      v8->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (PartyOrganizationUtility_o *)&v8->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-2].fields.temporaryPartyInfo) = -1;
      sub_1BD33FC(p_mapInfo_5__16, 0LL, v2, v3, v4, v5, v6, v7);
      v384 = v910;
      mapCount_5__13 = v910->fields._mapCount_5__13;
      v386 = v910->fields._mapIdx_5__12 + 1;
      v910->fields._mapIdx_5__12 = v386;
LABEL_115:
      if ( v386 < mapCount_5__13 )
      {
        v398 = v384->fields._mapList_5__15;
        if ( !v398 )
          sub_1BD36B4(v382, v383);
        if ( v386 >= v398->max_length )
          sub_1BD36BC(v382, v383);
        v399 = v398->m_Items[v386];
        if ( !v399 )
          sub_1BD36B4(v382, v383);
        v400 = v384->fields.__8__1;
        if ( !v400 )
          sub_1BD36B4(v382, v383);
        v400->fields.mapId = v399->fields.id;
        v401 = v384->fields._warInfo_5__14;
        if ( !v401 )
          sub_1BD36B4(v382, v383);
        mapInfoList = (System_Collections_Generic_List_object__o *)v401->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v400->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_MapInfo__TypeInfo);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v400,
              Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v400->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&v400->fields.__9__3,
              (int64_t)_9__3,
              v404,
              v405,
              v406,
              v407,
              v408,
              v409);
          }
          v382 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_35C15E8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v383 = (unsigned int)v382;
          if ( (_DWORD)v382 != -1 )
          {
            v410 = v910->fields._warInfo_5__14;
            if ( !v410 )
              sub_1BD36B4(v382, (unsigned int)v382);
            v411 = (System_Collections_Generic_List_object__o *)v410->fields.mapInfoList;
            if ( !v411 )
              sub_1BD36B4(0LL, v383);
            System_Collections_Generic_List_object___RemoveAt(
              v411,
              v383,
              (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1BD36B4(v382, v383);
        v412 = v910->fields.__8__1;
        if ( !v412 )
          sub_1BD36B4(v382, v383);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v412->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_MapInfo__TypeInfo);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v412,
            Method_QuestTree___c__DisplayClass44_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v412->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v412->fields.__9__4,
            (int64_t)_9__4,
            v415,
            v416,
            v417,
            v418,
            v419,
            v420);
        }
        if ( !allMapInfoList )
          sub_1BD36B4(v382, v383);
        v421 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_35C15E8 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v422 = (unsigned int)v421;
        if ( (_DWORD)v421 != -1 )
        {
          v423 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v423 )
            sub_1BD36B4(0LL, v422);
          System_Collections_Generic_List_object___RemoveAt(
            v423,
            v422,
            (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v424 = v910->fields.__8__1;
        if ( !v424 )
          sub_1BD36B4(v421, v422);
        v425 = v910->fields._warInfo_5__14;
        if ( !v425 )
          sub_1BD36B4(0LL, v422);
        v426 = MapControl_WarInfo__AddChild(v425, v424->fields.mapId, 0LL);
        v427 = v910;
        v910->fields._mapInfo_5__16 = v426;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v427->fields._mapInfo_5__16,
          (int64_t)v426,
          v428,
          v429,
          v430,
          v431,
          v432,
          v433);
        v441 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v441 )
          sub_1BD36B4(0LL, v434);
        v442 = v441->fields._items;
        v443 = (Il2CppObject *)v910->fields._mapInfo_5__16;
        v444 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v441->fields._version;
        if ( !v442 )
          sub_1BD36B4(v441, v443);
        v445 = v441->fields._size;
        if ( (unsigned int)v445 >= v442->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v441,
            v443,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v444[4] + 192LL) + 112LL));
        }
        else
        {
          v446 = &v442->obj.klass + v445;
          v441->fields._size = v445 + 1;
          v446[4] = (Il2CppClass *)v443;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v446 + 4), (int64_t)v443, v435, v436, v437, v438, v439, v440);
        }
        v598 = v910->fields.__8__1;
        if ( !v598 )
          sub_1BD36B4(v447, v448);
        spotMaster_5__3 = v910->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1BD36B4(0LL, v448);
        v600 = SpotMaster__getList(spotMaster_5__3, v598->fields.mapId, 0LL);
        v602 = v600;
        if ( !v600 )
          sub_1BD36B4(0LL, v601);
        v603 = v600->max_length;
        if ( v603 >= 1 )
        {
          for ( k = 0; k != v603; ++k )
          {
            v605 = sub_1BD36A4(QuestTree___c__DisplayClass44_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v605, 0LL);
            if ( k >= v602->max_length )
              sub_1BD36BC(v606, v607);
            v608 = v602->m_Items[k];
            if ( !v608 )
              sub_1BD36B4(v606, v607);
            if ( !v605 )
              sub_1BD36B4(v606, v607);
            *(_DWORD *)(v605 + 16) = v608->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v610 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_SpotInfo__TypeInfo);
            System_Predicate_object____ctor(
              v610,
              (Il2CppObject *)v605,
              Method_QuestTree___c__DisplayClass44_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1BD36B4(v611, v612);
            v613 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v610,
                     (const MethodInfo_35C15E8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v614 = v613;
            if ( v613 != -1 )
            {
              v615 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v615 )
                sub_1BD36B4(0LL, v614);
              System_Collections_Generic_List_object___RemoveAt(
                v615,
                v614,
                (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v616 = v910->fields._mapInfo_5__16;
            if ( !v616 )
              sub_1BD36B4(0LL, v614);
            spotInfo = MapControl_MapInfo__AddChild(v616, *(_DWORD *)(v605 + 16), 0LL);
            QuestTree__SetupSpotInfo(_4__this, v608, &spotInfo, 0LL);
            v624 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v624 )
              sub_1BD36B4(0LL, v617);
            v625 = (Il2CppObject *)spotInfo;
            v626 = v624->fields._items;
            v627 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v624->fields._version;
            if ( !v626 )
              sub_1BD36B4(v624, v625);
            v628 = v624->fields._size;
            if ( (unsigned int)v628 >= v626->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v624,
                v625,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v627[4] + 192LL) + 112LL));
            }
            else
            {
              v629 = &v626->obj.klass + v628;
              v624->fields._size = v628 + 1;
              v629[4] = (Il2CppClass *)v625;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v629 + 4), (int64_t)v625, v618, v619, v620, v621, v622, v623);
            }
          }
        }
        v630 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v910->fields._mapInfo_5__16,
                 v910->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v631 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v630,
                 (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v639 = (System_Collections_Generic_IEnumerable_TSource__o *)v631;
        if ( !v631 )
          sub_1BD36B4(0LL, v632);
        if ( *(_QWORD *)&v631->max_length )
        {
          v640 = sub_1BD36A4(QuestTree___c__DisplayClass44_3_TypeInfo);
          System_Object___ctor((Il2CppObject *)v640, 0LL);
          v641 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
            v641 = QuestTree___c_TypeInfo;
          }
          _9__44_6 = (System_Func_object__int__o *)v641->static_fields->__9__44_6;
          if ( !_9__44_6 )
          {
            if ( !v641->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v641);
              v641 = QuestTree___c_TypeInfo;
            }
            v643 = (Il2CppObject *)v641->static_fields->__9;
            _9__44_6 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_MapControl_SpotInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__44_6,
              v643,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__44_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__44_6;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&static_fields->__9__44_6,
              (int64_t)_9__44_6,
              v645,
              v646,
              v647,
              v648,
              v649,
              v650);
          }
          v651 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v639,
                                                                  (System_Func_TSource__TResult__o *)_9__44_6,
                                                                  (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v652 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
          System_Collections_Generic_HashSet_int____ctor_55000520(
            v652,
            v651,
            (const MethodInfo_3473DC8 *)Method_System_Collections_Generic_HashSet_int___ctor___76899480);
          if ( !v640 )
            sub_1BD36B4(v653, v654);
          *(_QWORD *)(v640 + 16) = v652;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v640 + 16), (int64_t)v652, v655, v656, v657, v658, v659, v660);
          v661 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v662 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_MapControl_SpotInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v662,
            (Il2CppObject *)v640,
            Method_QuestTree___c__DisplayClass44_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v661,
            (System_Func_T__bool__o *)v662,
            (const MethodInfo_2F20D30 *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v664 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v664 )
            sub_1BD36B4(0LL, v663);
          System_Collections_Generic_List_object___AddRange(
            v664,
            (System_Collections_Generic_IEnumerable_T__o *)v639,
            (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v665 = v910;
        v910->fields.__2__current = 0LL;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v665->fields.__2__current, 0LL, v633, v634, v635, v636, v637, v638);
        result = 1;
        v910->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1BD36B4(v382, v383);
      v449 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v450 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
        v450 = QuestTree___c_TypeInfo;
      }
      _9__44_2 = (System_Comparison_T__o *)v450->static_fields->__9__44_2;
      if ( !_9__44_2 )
      {
        if ( !v450->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v450);
          v450 = QuestTree___c_TypeInfo;
        }
        v452 = (Il2CppObject *)v450->static_fields->__9;
        _9__44_2 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_MapControl_WarInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__44_2,
          v452,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_2__,
          0LL);
        v453 = QuestTree___c_TypeInfo->static_fields;
        v453->__9__44_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__44_2;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v453->__9__44_2,
          (int64_t)_9__44_2,
          v454,
          v455,
          v456,
          v457,
          v458,
          v459);
      }
      if ( !v449 )
        sub_1BD36B4(v382, v383);
      System_Collections_Generic_List_object___Sort_56371284(
        v449,
        _9__44_2,
        (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v460 = v910;
      v910->fields.__8__1 = 0LL;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v460->fields.__8__1, 0LL, v461, v462, v463, v464, v465, v466);
      v467 = v910;
      v910->fields._warInfo_5__14 = 0LL;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v467->fields._warInfo_5__14, 0LL, v468, v469, v470, v471, v472, v473);
      v474 = v910;
      v910->fields._mapList_5__15 = 0LL;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v474->fields._mapList_5__15, 0LL, v475, v476, v477, v478, v479, v480);
      v481 = (Il2CppObject *)sub_1BD36A4(QuestTree___c__DisplayClass44_6_TypeInfo);
      System_Object___ctor(v481, 0LL);
      v482 = v910;
      v910->fields.__8__3 = (struct QuestTree___c__DisplayClass44_6_o *)v481;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v482->fields.__8__3, (int64_t)v481, v483, v484, v485, v486, v487, v488);
      v489 = v910->fields._nowTime_5__11;
      v490 = (MapControl_WarInfo_o *)sub_1BD36A4(MapControl_WarInfo_TypeInfo);
      MapControl_WarInfo___ctor(v490, v489, 0LL);
      v491 = v910;
      v910->fields._warInfo_5__14 = v490;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v491->fields._warInfo_5__14,
        (int64_t)v490,
        v492,
        v493,
        v494,
        v495,
        v496,
        v497);
      v498 = (MapControl_MapInfo_o *)sub_1BD36A4(MapControl_MapInfo_TypeInfo);
      MapControl_MapInfo___ctor(v498, 0LL);
      v499 = v910;
      v910->fields._mapInfo_5__16 = v498;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v499->fields._mapInfo_5__16,
        (int64_t)v498,
        v500,
        v501,
        v502,
        v503,
        v504,
        v505);
      v506 = (MapControl_SpotInfo_o *)sub_1BD36A4(MapControl_SpotInfo_TypeInfo);
      MapControl_SpotInfo___ctor(v506, 0LL);
      v507 = v910;
      v910->fields._spotInfo_5__17 = v506;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v507->fields._spotInfo_5__17,
        (int64_t)v506,
        v508,
        v509,
        v510,
        v511,
        v512,
        v513);
      v514 = (WarEntity_o *)sub_1BD36A4(WarEntity_TypeInfo);
      WarEntity___ctor(v514, 0LL);
      v515 = v910;
      v910->fields._warEnt_5__18 = v514;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v515->fields._warEnt_5__18,
        (int64_t)v514,
        v516,
        v517,
        v518,
        v519,
        v520,
        v521);
      v523 = v910->fields._dataManager_5__2;
      if ( !v523 )
        sub_1BD36B4(0LL, v522);
      v524 = DataManager__GetMasterData_object_(
               v523,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v525 = v910;
      v910->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v524;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v525->fields._userQuestMaster_5__19,
        (int64_t)v524,
        v526,
        v527,
        v528,
        v529,
        v530,
        v531);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v534 = v910;
      _8__3 = v910->fields.__8__3;
      if ( !_8__3 )
        sub_1BD36B4(Master_object, v533);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v534->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v910 )
        sub_1BD36B4(isSavedMemoryMode, v537);
      if ( isSavedMemoryMode )
        v538 = 500;
      else
        v538 = 5000;
      v539 = v910->fields.__8__3;
      v910->fields._breakInterval_5__22 = v538;
      v540 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v540,
        (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v539 )
        sub_1BD36B4(v541, v542);
      v539->fields.spotInfoList = v540;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v539->fields, (int64_t)v540, v543, v544, v545, v546, v547, v548);
      v910->fields._cnt_5__23 = 0;
      v550 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v550 )
        sub_1BD36B4(0LL, v549);
      System_Collections_Generic_List_object___GetEnumerator(
        v900,
        v550,
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v551 = v910;
      v552 = *(_OWORD *)&v900[0].fields._list;
      p__7__wrap24 = (PartyOrganizationUtility_o *)&v910->fields.__7__wrap24;
      v900[1] = v900[0];
      v910->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v900[0].fields._current;
      *(_OWORD *)&v551->fields.__7__wrap24.fields._list = v552;
      sub_1BD33FC(p__7__wrap24, 0LL, v554, v555, v556, v557, v558, v559);
      v8 = v910;
LABEL_163:
      v8->fields.__1__state = -3;
      while ( 1 )
      {
        v561 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap24,
                 (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v562 = v910;
        if ( !v561 )
          break;
        current = v910->fields.__7__wrap24.fields._current;
        ++v910->fields._cnt_5__23;
        if ( !current )
          sub_1BD36B4(v562, v560);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1BD36B4(0LL, v565);
        v8 = v910;
        v572 = v910->fields.__8__2;
        if ( !v572 )
          sub_1BD36B4(Mine, v565);
        if ( Mine->fields.warId == v572->fields.targetWarId )
        {
          v573 = v910->fields.__8__3;
          if ( !v573 )
            sub_1BD36B4(Mine, v565);
          spotInfoList = v573->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1BD36B4(0LL, v565);
          spotId = (unsigned int)current->fields.spotId;
          v576 = spotInfoList->fields._items;
          v577 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v576 )
            sub_1BD36B4(spotInfoList, spotId);
          v578 = spotInfoList->fields._size;
          if ( (unsigned int)v578 >= v576->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v577[4] + 192LL) + 112LL));
            v8 = v910;
          }
          else
          {
            spotInfoList->fields._size = v578 + 1;
            v576->m_Items[v578 + 1] = spotId;
          }
        }
        HIDWORD(v579) = 28633112 - 1775253149 * v8->fields._cnt_5__23;
        LODWORD(v579) = HIDWORD(v579);
        if ( (unsigned int)(v579 >> 2) < 0xDA740D )
        {
          v8->fields.__2__current = 0LL;
          sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v566, v567, v568, v569, v570, v571);
          v379 = v910;
          v380 = 3;
LABEL_326:
          v379->fields.__1__state = v380;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(v910, v560);
      v581 = v910;
      questMaster_5__5 = (DataMasterBase_o *)v910->fields._questMaster_5__5;
      v910->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v581->fields.__7__wrap24.fields._index = 0LL;
      v581->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1BD36B4(0LL, v580);
      Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                              questMaster_5__5,
                                                                              (const MethodInfo_2F31F18 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v584 = (Il2CppObject *)v910->fields.__8__3;
      v585 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v585,
        v584,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v586 = System_Linq_Enumerable__Where_object_(
               Entitys_object,
               (System_Func_TSource__bool__o *)v585,
               (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v587 = System_Linq_Enumerable__ToArray_object_(
               v586,
               (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v588 = v910;
      v910->fields._questList_5__24 = (struct QuestEntity_array *)v587;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v588->fields._questList_5__24,
        (int64_t)v587,
        v589,
        v590,
        v591,
        v592,
        v593,
        v594);
      v595 = v910;
      v910->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v595->fields._questList_5__24,
                       (const MethodInfo_2F4C97C *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v8 = v910;
      v597 = v910->fields._mapCount_5__13;
      v910->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_163;
    case 4:
      v307 = v8->fields._mapCount_5__13;
      v8->fields.__1__state = -1;
      goto LABEL_455;
    case 5:
      endCallback = v8->fields.endCallback;
      v8->fields.__1__state = -1;
      if ( !endCallback )
        sub_1BD36B4(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v597 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v8->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1BD36B4(mapIdx_5__12, method);
    if ( v597 >= questList_5__24->max_length )
      sub_1BD36BC(mapIdx_5__12, method);
    v668 = questList_5__24->m_Items[v597];
    if ( !v668 )
      sub_1BD36B4(mapIdx_5__12, method);
    v669 = v8->fields.__8__3;
    if ( !v669 )
      sub_1BD36B4(mapIdx_5__12, method);
    v669->fields.questId = v668->fields.id;
    userQuestMaster_5__19 = v8->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B31D77 )
    {
      sub_1BD3458(&NetworkManager_TypeInfo, method);
      byte_4B31D77 = 1;
    }
    v671 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v671 = NetworkManager_TypeInfo;
    }
    v672 = v910->fields.__8__3;
    if ( !v672 )
      sub_1BD36B4(v671, method);
    if ( !userQuestMaster_5__19 )
      sub_1BD36B4(v671, method);
    if ( UserQuestMaster__TryGetEntity(
           userQuestMaster_5__19,
           &v904,
           v671->static_fields->userIdNumber,
           v672->fields.questId,
           0LL) )
    {
      if ( !v904 )
        sub_1BD36B4(0LL, v673);
      QuestPhase = UserQuestEntity__getQuestPhase(v904, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_40278904 = (MapEntity_o *)QuestEntity__getSpotId_40278904(v668, QuestPhase + 1, 0LL);
    v677 = v910;
    v678 = v910->fields.__8__3;
    if ( !v678 )
      sub_1BD36B4(SpotId_40278904, warId);
    if ( v678->fields.nowSpotId == (_DWORD)SpotId_40278904 )
    {
      if ( !_4__this )
        sub_1BD36B4(SpotId_40278904, warId);
    }
    else
    {
      v678->fields.nowSpotId = (int)SpotId_40278904;
      if ( !_4__this )
        sub_1BD36B4(SpotId_40278904, warId);
      v679 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v678->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_SpotInfo__TypeInfo);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v678,
          Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v678->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v678->fields.__9__12,
          (int64_t)_9__12,
          v681,
          v682,
          v683,
          v684,
          v685,
          v686);
      }
      if ( !v679 )
        sub_1BD36B4(SpotId_40278904, warId);
      v687 = System_Collections_Generic_List_object___Find(
               v679,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v677->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v687;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v677->fields._spotInfo_5__17,
        (int64_t)v687,
        v688,
        v689,
        v690,
        v691,
        v692,
        v693);
      spotInfo_5__17 = v910->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1BD36B4(0LL, v694);
      SpotId_40278904 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_40278904;
      if ( v910->fields._nowMapId_5__20 != (_DWORD)SpotId_40278904 )
      {
        v910->fields._nowMapId_5__20 = (int)SpotId_40278904;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_40278904, 0LL);
        v697 = v910;
        v910->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v697->fields._mapInfo_5__16,
          (int64_t)MapInfoByMapID,
          v698,
          v699,
          v700,
          v701,
          v702,
          v703);
        v705 = v910->fields._mapInfo_5__16;
        if ( !v705 )
          sub_1BD36B4(0LL, v704);
        SpotId_40278904 = MapControl_MapInfo__GetMine(v705, 0LL);
        if ( !SpotId_40278904 )
          sub_1BD36B4(0LL, v706);
        warId = (unsigned int)SpotId_40278904->fields.warId;
        if ( v910->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v910->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v708 = v910;
          v910->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v708->fields._warInfo_5__14,
            (int64_t)WarInfoByWarID,
            v709,
            v710,
            v711,
            v712,
            v713,
            v714);
          v716 = v910->fields._warInfo_5__14;
          if ( !v716 )
            sub_1BD36B4(0LL, v715);
          v717 = MapControl_WarInfo__GetMine(v716, 0LL);
          v718 = v910;
          v910->fields._warEnt_5__18 = v717;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v718->fields._warEnt_5__18,
            (int64_t)v717,
            v719,
            v720,
            v721,
            v722,
            v723,
            v724);
        }
      }
    }
    v725 = v910->fields.__8__3;
    if ( !v725 )
      sub_1BD36B4(SpotId_40278904, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v725->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_MapControl_QuestInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v725,
        Method_QuestTree___c__DisplayClass44_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v725->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v725->fields.__9__13,
        (int64_t)_9__13,
        v728,
        v729,
        v730,
        v731,
        v732,
        v733);
    }
    if ( !allQuestInfoList )
      sub_1BD36B4(SpotId_40278904, warId);
    v734 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_35C15E8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v735 = v734;
    if ( v734 != -1 )
    {
      v736 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v736 )
        sub_1BD36B4(0LL, v735);
      System_Collections_Generic_List_object___RemoveAt(
        v736,
        v735,
        (const MethodInfo_35C2564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v737 = v910->fields._warInfo_5__14;
    if ( !v904 )
    {
      if ( !v737 )
        sub_1BD36B4(0LL, v735);
      goto LABEL_375;
    }
    if ( !v737 )
      sub_1BD36B4(0LL, v735);
    MapControl_WarInfo__SetStatusCheckFlag(v737, 1, 0, 0LL);
    if ( !v904 )
      sub_1BD36B4(0LL, v738);
    HasStatus = UserQuestEntity__HasStatus(v904, 8, 0LL);
    if ( !HasStatus )
    {
      v741 = v910->fields._warInfo_5__14;
      if ( !v741 )
        sub_1BD36B4(0LL, v740);
      goto LABEL_377;
    }
    if ( !v904 )
      sub_1BD36B4(HasStatus, v740);
    if ( v904->fields.challengeNum >= 1 )
    {
      v741 = v910->fields._warInfo_5__14;
      if ( !v741 )
        sub_1BD36B4(0LL, v740);
LABEL_377:
      MapControl_WarInfo__SetStatusCheckFlag(v741, 4, 0, 0LL);
    }
    if ( !v904 )
      sub_1BD36B4(0LL, v740);
    v745 = UserQuestEntity__getClearNum(v904, 0LL) < 1;
    v737 = v910->fields._warInfo_5__14;
    if ( v745 )
    {
      if ( !v737 )
        sub_1BD36B4(0LL, v746);
LABEL_375:
      MapControl_WarInfo__SetStatusCheckFlag(v737, 2, 0, 0LL);
      v744 = 0;
      goto LABEL_389;
    }
    if ( !v737 )
      sub_1BD36B4(0LL, v746);
    v742 = MapControl_WarInfo__GetMine(v737, 0LL);
    if ( !v742 )
      sub_1BD36B4(0LL, v743);
    v747 = v910->fields.__8__3;
    if ( !v747 )
      sub_1BD36B4(v742, v743);
    if ( v742->fields.lastQuestId == v747->fields.questId )
    {
      v748 = v910->fields._warInfo_5__14;
      if ( !v748 )
        sub_1BD36B4(0LL, v743);
      v744 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v748, 8, 1, 0LL);
    }
    else
    {
      v744 = 1;
    }
LABEL_389:
    v749 = v910->fields.__8__3;
    if ( !v749 )
      sub_1BD36B4(v742, v743);
    v750 = v910->fields._spotInfo_5__17;
    if ( !v750 )
      sub_1BD36B4(0LL, v743);
    v751 = MapControl_SpotInfo__AddChild(v750, v749->fields.questId, 0LL);
    v758 = v910->fields._warInfo_5__14;
    if ( !v758 )
      sub_1BD36B4(v751, 0LL);
    v759 = (int64_t)v751;
    if ( !v751 )
      sub_1BD36B4(0LL, v758);
    v760 = v758->fields.warId;
    v751->fields._WarInfo_k__BackingField = v758;
    v751->fields.warId = v760;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v751->fields._WarInfo_k__BackingField,
      (int64_t)v758,
      v752,
      v753,
      v754,
      v755,
      v756,
      v757);
    v761 = v910->fields._spotInfo_5__17;
    *(_QWORD *)(v759 + 96) = v761;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v759 + 96), (int64_t)v761, v762, v763, v764, v765, v766, v767);
    *(_QWORD *)(v759 + 144) = QuestTree__GetEndTime(_4__this, (MapControl_QuestInfo_o *)v759, 0LL);
    warEnt_5__18 = v910->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1BD36B4(0LL, v768);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v772 = v910->fields._warEnt_5__18;
      if ( !v772 )
        sub_1BD36B4(IsStartTypeQuest, v771);
      v773 = v910->fields.__8__3;
      if ( !v773 )
        sub_1BD36B4(IsStartTypeQuest, v771);
      if ( v772->fields.targetId == v773->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v910->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_408;
      }
    }
    v774 = v910->fields._warEnt_5__18;
    if ( !v774 )
      sub_1BD36B4(IsStartTypeQuest, v771);
    v775 = v910->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v775 )
      sub_1BD36B4(0LL, v771);
    v776 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v775,
             v774->fields.id,
             &value,
             (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v776 )
    {
      v778 = v910->fields.__8__3;
      if ( !v778 )
        sub_1BD36B4(v776, v777);
      if ( !value )
        sub_1BD36B4(0LL, v777);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v778->fields.questId,
             (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_408:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v759, 0, 0, 0, 0LL, 0, 0LL);
        *(_DWORD *)(v759 + 36) = 0;
LABEL_409:
        v781 = 1;
        goto LABEL_410;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v668, (MapControl_QuestInfo_o *)v759, v910->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_409;
    v780 = v910->fields._warInfo_5__14;
    if ( !v780 )
      sub_1BD36B4(0LL, v779);
    MapControl_WarInfo__SetStatusCheckFlag(v780, 1, 0, 0LL);
    v781 = 0;
LABEL_410:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v759, 0LL) )
    {
      if ( ((v744 | v781) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v759, 0LL) != 8 )
        {
          v784 = v910->fields._spotInfo_5__17;
          if ( !v784 )
            sub_1BD36B4(0LL, v783);
          MapControl_SpotInfo__AddQuestCount(v784, 1, 0LL);
        }
        v785 = v910->fields._spotInfo_5__17;
        if ( !v785 )
          sub_1BD36B4(0LL, v783);
        MapControl_SpotInfo__AddAvailableQuestId(v785, *(_DWORD *)(v759 + 16), 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v759, 0LL) == 1 )
      {
        v786 = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)v759, 0LL);
        if ( !v786 )
          sub_1BD36B4(0LL, v787);
        HasFlag = QuestEntity__HasFlag(v786, 0x400000000000LL, 0LL);
        v790 = v910;
        if ( !HasFlag )
        {
          v791 = v910->fields._spotInfo_5__17;
          if ( !v791 )
            sub_1BD36B4(HasFlag, v789);
          v791->fields._IsNext_k__BackingField = 1;
        }
        v792 = v790->fields._mapInfo_5__16;
        if ( !v792 )
          sub_1BD36B4(HasFlag, v789);
        v792->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon((MapControl_QuestInfo_o *)v759, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v795 = v910;
        v796 = v910->fields._spotInfo_5__17;
        if ( !v796 )
          sub_1BD36B4(IsDisplayQuestNextIcon, v794);
        v796->fields._IsNext_k__BackingField = 1;
        v797 = v795->fields._mapInfo_5__16;
        if ( !v797 )
          sub_1BD36B4(IsDisplayQuestNextIcon, v794);
        v797->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v668, 0x8000000000LL, 0LL) )
      {
        v798 = v910->fields._spotInfo_5__17;
        if ( !v798 )
          sub_1BD36B4(0LL, v782);
        MapControl_SpotInfo__AddFreeQuestCount(v798, 1, 0LL);
      }
    }
    v799 = v904;
    if ( v904 )
    {
      v799 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v904, 8, 0LL);
      if ( ((unsigned __int8)v799 & 1) != 0 )
      {
        if ( !v904 )
          sub_1BD36B4(v799, v782);
        v800 = v904->fields.challengeNum == 0;
      }
      else
      {
        v800 = 0;
      }
    }
    else
    {
      v800 = 1;
    }
    *(_BYTE *)(v759 + 40) = v800;
    *(_DWORD *)(v759 + 44) = QuestPhase;
    v801 = v910->fields.__8__3;
    if ( !v801 )
      sub_1BD36B4(v799, v782);
    questPickupMaster_5__9 = v910->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1BD36B4(0LL, v782);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v801->fields.questId, 0LL);
    *(_DWORD *)(v759 + 48) = Priority;
    v805 = v910->fields.__8__3;
    if ( !v805 )
      sub_1BD36B4(Priority, v804);
    questPhaseMaster_5__6 = v910->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1BD36B4(0LL, v804);
    v807 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v805->fields.questId, 0LL);
    v815 = v807;
    if ( !v807 )
      sub_1BD36B4(0LL, v808);
    v816 = v807[3];
    v817 = v816 - 1;
    if ( (int)v816 >= 1 )
    {
      v818 = 0;
      while ( 1 )
      {
        v819 = v815[v818 + 4];
        if ( !v819 )
          sub_1BD36B4(v807, v808);
        v807 = MapControl_QuestInfo__AddChild(
                 (MapControl_QuestInfo_o *)v759,
                 *(_DWORD *)(v819 + 16),
                 *(_DWORD *)(v819 + 20),
                 0LL);
        if ( v817 == v818 )
          break;
        if ( (unsigned int)++v818 >= *((_DWORD *)v815 + 6) )
          sub_1BD36BC(v807, v808);
      }
    }
    v820 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v820 )
      sub_1BD36B4(0LL, v808);
    v821 = v820->fields._items;
    v822 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v820->fields._version;
    if ( !v821 )
      sub_1BD36B4(v820, v808);
    v823 = v820->fields._size;
    if ( (unsigned int)v823 >= v821->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v820,
        (Il2CppObject *)v759,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v822[4] + 192LL) + 112LL));
    }
    else
    {
      v824 = &v821->obj.klass + v823;
      v820->fields._size = v823 + 1;
      v824[4] = (Il2CppClass *)v759;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v824 + 4), v759, v809, v810, v811, v812, v813, v814);
    }
    v8 = v910;
    v307 = v910->fields._mapCount_5__13;
    if ( v307 && !(v307 % v910->fields._breakInterval_5__22) )
    {
      v910->fields.__2__current = 0LL;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v825, v826, v827, v828, v829, v830);
      v379 = v910;
      v380 = 4;
      goto LABEL_326;
    }
LABEL_455:
    mapIdx_5__12 = (unsigned int)v8->fields._mapIdx_5__12;
    v597 = v307 + 1;
    v8->fields._mapCount_5__13 = v597;
  }
  if ( !_4__this )
    sub_1BD36B4(mapIdx_5__12, method);
  v831 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v832 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo);
    v832 = QuestTree___c_TypeInfo;
  }
  _9__44_11 = (System_Comparison_T__o *)v832->static_fields->__9__44_11;
  if ( !_9__44_11 )
  {
    if ( !v832->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v832);
      v832 = QuestTree___c_TypeInfo;
    }
    v834 = (Il2CppObject *)v832->static_fields->__9;
    _9__44_11 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_MapControl_QuestInfo__TypeInfo);
    System_Comparison_object____ctor(
      _9__44_11,
      v834,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__44_11__,
      0LL);
    v835 = QuestTree___c_TypeInfo->static_fields;
    v835->__9__44_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__44_11;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v835->__9__44_11, (int64_t)_9__44_11, v836, v837, v838, v839, v840, v841);
  }
  if ( !v831 )
    sub_1BD36B4(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_56371284(
    v831,
    _9__44_11,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v842 = v910;
  v910->fields.__8__3 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v842->fields.__8__3, 0LL, v843, v844, v845, v846, v847, v848);
  v849 = v910;
  v910->fields._warInfo_5__14 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v849->fields._warInfo_5__14, 0LL, v850, v851, v852, v853, v854, v855);
  v856 = v910;
  v910->fields._mapInfo_5__16 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v856->fields._mapInfo_5__16, 0LL, v857, v858, v859, v860, v861, v862);
  v863 = v910;
  v910->fields._spotInfo_5__17 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v863->fields._spotInfo_5__17, 0LL, v864, v865, v866, v867, v868, v869);
  v870 = v910;
  v910->fields._warEnt_5__18 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v870->fields._warEnt_5__18, 0LL, v871, v872, v873, v874, v875, v876);
  v877 = v910;
  v910->fields._userQuestMaster_5__19 = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v877->fields._userQuestMaster_5__19,
    0LL,
    v878,
    v879,
    v880,
    v881,
    v882,
    v883);
  v884 = v910;
  v910->fields._questList_5__24 = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v884->fields._questList_5__24, 0LL, v885, v886, v887, v888, v889, v890);
  v891 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v891 )
    sub_1BD36B4(0LL, v892);
  CommonUI__SetLoadMode((CommonUI_o *)v891, 0, 0LL);
  _4__this->fields.isInit = 1;
  v899 = v910;
  if ( v910->fields.endCallback )
  {
    v910->fields.__2__current = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v899->fields.__2__current, 0LL, v893, v894, v895, v896, v897, v898);
    v379 = v910;
    v380 = 5;
    goto LABEL_326;
  }
  return 0;
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_Collections_IEnumerator_Reset(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
}


Il2CppObject *__fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_Collections_IEnumerator_get_Current(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44__System_IDisposable_Dispose(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 3 || _1__state == -3 )
    QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(this, method);
}


void __fastcall QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44____m__Finally1(
        QuestTree__mfBaseTreeUpdateWithOpenCheck_d__44_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3433B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method);
    byte_4B3433B = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}