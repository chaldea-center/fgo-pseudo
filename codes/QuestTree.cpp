void __fastcall QuestTree___ctor(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  MapControl_RootInfo_o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x20
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_List_object__o *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_object__o *v75; // x20
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_object__o *v85; // x20
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Collections_Generic_List_object__o *v95; // x20
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  System_Collections_Generic_List_object__o *v105; // x20
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7

  if ( (byte_4B131E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_MapInfo__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v29, v30);
    sub_1BCA7E0(&MapControl_RootInfo_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree___ctor__, v33, v34);
    byte_4B131E0 = 1;
  }
  v35 = (MapControl_RootInfo_o *)sub_1BCAA2C(MapControl_RootInfo_TypeInfo, method, v2, v3);
  MapControl_RootInfo___ctor(v35, 0LL);
  this->fields.mapControlRootInfo = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.allQuestInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.allQuestInfoList, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_SpotInfo__TypeInfo,
                                                       v52,
                                                       v53,
                                                       v54);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_SpotInfo___ctor__);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.allSpotInfoList, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  v65 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_SpotRoadInfo__TypeInfo,
                                                       v62,
                                                       v63,
                                                       v64);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo___ctor__);
  this->fields.allSpotRoadInfoList = (struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v65;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allSpotRoadInfoList,
    (int64_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v75 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_MapGimmickInfo__TypeInfo,
                                                       v72,
                                                       v73,
                                                       v74);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo___ctor__);
  this->fields.allMapGimmickInfoList = (struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *)v75;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allMapGimmickInfoList,
    (int64_t)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_MapInfo__TypeInfo,
                                                       v82,
                                                       v83,
                                                       v84);
  System_Collections_Generic_List_object____ctor(
    v85,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_MapInfo___ctor__);
  this->fields.allMapInfoList = (struct System_Collections_Generic_List_MapControl_MapInfo__o *)v85;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.allMapInfoList, (int64_t)v85, v86, v87, v88, v89, v90, v91);
  v95 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                       v92,
                                                       v93,
                                                       v94);
  System_Collections_Generic_List_object____ctor(
    v95,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor__);
  this->fields.allWarInfoList = (struct System_Collections_Generic_List_MapControl_WarInfo__o *)v95;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.allWarInfoList, (int64_t)v95, v96, v97, v98, v99, v100, v101);
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  v105 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                        v102,
                                                        v103,
                                                        v104);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  this->fields.questReleaseEntList = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)v105;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questReleaseEntList,
    (int64_t)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_QuestTree___ctor__);
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

  return QuestTree__CheckSpotCond_34733380(this, 2, mapGimmickId, spotCondType, targetId, targetValue, v6);
}


bool __fastcall QuestTree__CheckMapGimmickCond_34730552(
        QuestTree_o *this,
        MapControl_MapGimmickInfo_o *mapGimmickInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  MapGimmickEntity_o *Mine; // x0
  __int64 Time; // x0
  __int64 v16; // x1
  int64_t v17; // x20
  MapGimmickEntity_o *v18; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v20; // x8
  int64_t *v21; // x9
  int64_t v22; // x10

  if ( (byte_4B131DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapGimmickReleaseMaster___, mapGimmickInfo, method);
    sub_1BCA7E0(&long___TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    byte_4B131DD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, mapGimmickInfo);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
    LOBYTE(Mine) = 1;
  }
  else
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    Time = NetworkManager__getTime(0LL);
    if ( !mapGimmickInfo )
      goto LABEL_26;
    v17 = Time;
    Mine = MapControl_MapGimmickInfo__GetMine(mapGimmickInfo, 0LL);
    if ( !Mine )
      return (char)Mine;
    v18 = Mine;
    Time = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Time )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapGimmickReleaseMaster___);
    Time = sub_1BCA888(long___TypeInfo, 2LL);
    if ( !Time )
      goto LABEL_26;
    v20 = *(_QWORD *)(Time + 24);
    if ( !(_DWORD)v20 || (*(_QWORD *)(Time + 32) = v18->fields.startedAt, (_DWORD)v20 == 1) )
      sub_1BCAA44(Time, v16);
    *(_QWORD *)(Time + 40) = v18->fields.endedAt;
    if ( (int)v20 >= 1 )
    {
      v20 = (unsigned int)v20;
      v21 = (int64_t *)(Time + 32);
      do
      {
        v22 = *v21;
        if ( *v21 > v17 && this->fields.forceUpdateTime > v22 )
          this->fields.forceUpdateTime = v22;
        --v20;
        ++v21;
      }
      while ( v20 );
    }
    if ( !MasterData_object )
LABEL_26:
      sub_1BCAA3C(Time, v16);
    LOBYTE(Mine) = MapGimmickReleaseMaster__IsOpen((MapGimmickReleaseMaster_o *)MasterData_object, v18, 0LL)
                && MapGimmickEntity__IsEnableTime(v18, v17, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t NoticeAt; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  bool v24; // w24
  int64_t Time; // x23
  __int64 v26; // x25
  __int64 v27; // x8
  int64_t *v28; // x9
  int64_t v29; // x10
  int v30; // w22
  _BOOL4 v31; // w21
  bool HasFlag; // w0
  Il2CppObject *IsShop; // x0
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t forceOperation; // w20
  int v38; // w23
  int32_t v39; // w20
  int32_t closedMessageId; // w5
  int64_t value; // x4
  int32_t type; // w2
  int32_t targetId; // w3
  int32_t v44; // w1
  MapControl_QuestInfo_o *v45; // x0
  _BOOL4 v46; // w8
  UserQuestEntity_o *v48; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  QuestReleaseEntity_o *questReleaseNG; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4B131D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, questEnt, questInfo);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&long___TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    this = (QuestTree_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B131D9 = 1;
  }
  questReleaseNG = 0LL;
  v48 = 0LL;
  entity = 0LL;
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst(this, (const MethodInfo *)questEnt);
  if ( !questEnt || !NoticeAt )
    goto LABEL_65;
  v24 = clsQuestCheck__mfQuestReleaseCheckGetEntityByQuestID(
          (clsQuestCheck_o *)NoticeAt,
          questEnt->fields.id,
          &questReleaseNG,
          questInfo,
          0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  Time = NetworkManager__getTime(0LL);
  v26 = sub_1BCA888(long___TypeInfo, 3LL);
  NoticeAt = QuestEntity__getNoticeAt(questEnt, 0LL);
  if ( !v26 )
    goto LABEL_65;
  if ( !*(_DWORD *)(v26 + 24)
    || (*(_QWORD *)(v26 + 32) = NoticeAt, NoticeAt = QuestEntity__getOpenedAt(questEnt, 0LL),
                                          *(_DWORD *)(v26 + 24) <= 1u)
    || (*(_QWORD *)(v26 + 40) = NoticeAt,
        NoticeAt = QuestEntity__getClosedAt(questEnt, 0LL),
        v27 = *(_QWORD *)(v26 + 24),
        (unsigned int)v27 <= 2) )
  {
    sub_1BCAA44(NoticeAt, v22);
  }
  *(_QWORD *)(v26 + 48) = NoticeAt;
  if ( (int)v27 >= 1 )
  {
    v27 = (unsigned int)v27;
    v28 = (int64_t *)(v26 + 32);
    do
    {
      v29 = *v28;
      if ( *v28 > Time && v8->fields.forceUpdateTime > v29 )
        v8->fields.forceUpdateTime = v29;
      --v27;
      ++v28;
    }
    while ( v27 );
  }
  v30 = 3;
  if ( QuestEntity__HasFlag(questEnt, 0x800000LL, 0LL) )
  {
    v31 = 0;
    goto LABEL_47;
  }
  HasFlag = QuestEntity__HasFlag(questEnt, 0x200000000000LL, 0LL);
  if ( HasFlag )
    v30 = 3;
  else
    v30 = 1;
  if ( v24 || HasFlag )
  {
    v31 = !HasFlag;
    goto LABEL_47;
  }
  if ( questReleaseNG
    && questReleaseNG->fields.closedMessageId
    && QuestEntity__getClosedAt(questEnt, 0LL) > Time
    && QuestEntity__getNoticeAt(questEnt, 0LL) <= Time )
  {
    goto LABEL_45;
  }
  NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NoticeAt )
    goto LABEL_65;
  NoticeAt = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)NoticeAt,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !NoticeAt )
    goto LABEL_65;
  IsShop = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)NoticeAt,
                             &entity,
                             warId,
                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
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
          NoticeAt = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !NoticeAt )
            goto LABEL_65;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)NoticeAt,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
          NoticeAt = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_65;
          if ( !UserQuestMaster__TryGetEntity(
                  (UserQuestMaster_o *)MasterData_object,
                  &v48,
                  NoticeAt,
                  questEnt->fields.id,
                  0LL) )
            goto LABEL_46;
          NoticeAt = (int64_t)v48;
          if ( !v48 )
            goto LABEL_65;
          if ( !UserQuestEntity__HasStatus(v48, 8, 0LL) )
            goto LABEL_46;
LABEL_45:
          v31 = 0;
          v30 = 2;
          goto LABEL_47;
        }
      }
    }
  }
  NoticeAt = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)IsShop, v34);
  if ( !NoticeAt )
    goto LABEL_65;
  if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)NoticeAt, questEnt->fields.id, 0, 0LL)
    && questEnt->fields.afterClear == 5 )
  {
    goto LABEL_45;
  }
LABEL_46:
  v31 = 0;
  v30 = 0;
LABEL_47:
  forceOperation = questEnt->fields.forceOperation;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  NoticeAt = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL);
  if ( (NoticeAt & 1) != 0 )
    v38 = 1;
  else
    v38 = forceOperation;
  if ( v38 )
    v39 = v38 != 2;
  else
    v39 = v30;
  if ( questReleaseNG && v39 == 2 )
  {
    if ( questInfo )
    {
      closedMessageId = questReleaseNG->fields.closedMessageId;
      value = questReleaseNG->fields.value;
      type = questReleaseNG->fields.type;
      targetId = questReleaseNG->fields.targetId;
      v44 = 2;
      v45 = questInfo;
      goto LABEL_61;
    }
LABEL_65:
    sub_1BCAA3C(NoticeAt, v22);
  }
  if ( !questInfo )
    goto LABEL_65;
  v45 = questInfo;
  v44 = v39;
  type = 0;
  targetId = 0;
  value = 0LL;
  closedMessageId = 0;
LABEL_61:
  MapControl_QuestInfo__SetDispType(v45, v44, type, targetId, value, closedMessageId, 0LL);
  if ( v38 )
    v46 = v38 != 2;
  else
    v46 = v31;
  questInfo->fields.touchType = v46;
  return v39;
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

  return QuestTree__CheckSpotCond_34733380(this, 0, spotId, spotCondType, targetId, targetValue, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__CheckSpotCond_34733380(
        QuestTree_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        int32_t spotCondType,
        int32_t targetId,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  QuestTree_o *v35; // x0
  TerminalSceneComponent_c *v36; // x0
  UnityEngine_Object_o *mInstance; // x25
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  long double inited; // q0
  int64_t Instance; // x0
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x8
  int v45; // w8
  bool IsExistCommand; // w22
  __int64 v47; // x0
  __int64 v48; // x0
  UnityEngine_Object_o *v49; // x25
  bool IsMissionAchive; // w0
  QuestEntity_o *v51; // x19
  int32_t WarId; // w0
  const MethodInfo *v53; // x4
  __int64 v54; // x8
  int64_t v55; // x20
  int32_t v56; // w23
  unsigned __int64 v57; // x24
  int32_t v58; // w21
  __int64 v59; // x8
  int64_t v60; // x20
  int32_t v61; // w23
  unsigned __int64 v62; // x24
  int32_t v63; // w21
  __int64 v64; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  __int64 v67; // x8
  int64_t v68; // x20
  unsigned __int64 v69; // x24
  int32_t v70; // w21
  int v71; // w21
  int v72; // w20
  int64_t v73; // x2
  int32_t v74; // w0
  int32_t v75; // w0
  __int64 v76; // x1
  int32_t v77; // w8
  bool v78; // cc
  int32_t v79; // w8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B131DC & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&commandType, *(_QWORD *)&commandTypeId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v31, v32);
    byte_4B131DC = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&commandType);
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
  {
LABEL_6:
    LOBYTE(v35) = 1;
    return (unsigned __int8)v35 & 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v33);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v33, v34);
    byte_4B10F83 = 1;
  }
  v36 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v33);
    v36 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v36->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    goto LABEL_34;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v38);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v38, v39);
    byte_4B10F83 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v38);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v42 = **(_QWORD **)(Instance + 184);
  if ( !v42 )
    goto LABEL_176;
  if ( !*(_QWORD *)(v42 + 464) )
    goto LABEL_34;
  if ( !*(_DWORD *)(Instance + 224) )
    inited = j_il2cpp_runtime_class_init_0(Instance, v38);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v38, v39);
    byte_4B10F83 = 1;
  }
  Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v38);
    Instance = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v43 = **(_QWORD **)(Instance + 184);
  if ( !v43 )
    goto LABEL_176;
  v44 = *(_QWORD *)(v43 + 464);
  if ( !v44 )
    goto LABEL_176;
  v45 = *(_DWORD *)(v44 + 16);
  if ( !v45 )
  {
LABEL_34:
    v47 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
    if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
      v47 = sub_1C1C6BC(inited);
    v48 = *(_QWORD *)(*(_QWORD *)(v47 + 192) + 16LL);
    if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
      v48 = sub_1C1C6BC(inited);
    v49 = **(UnityEngine_Object_o ***)(v48 + 184);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    if ( !UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    {
      v45 = 0;
      IsExistCommand = 1;
      goto LABEL_44;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( Instance )
    {
      IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, commandType, commandTypeId, 0LL);
      v45 = 0;
      goto LABEL_44;
    }
LABEL_176:
    sub_1BCAA3C(Instance, v38);
  }
  IsExistCommand = 0;
LABEL_44:
  v35 = (QuestTree_o *)((unsigned int)&dword_0 + 1);
  switch ( spotCondType )
  {
    case 1:
      return (unsigned __int8)v35 & 1;
    case 2:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v35, v38);
      if ( !Instance )
        goto LABEL_176;
      if ( targetValue )
        LOBYTE(v35) = clsQuestCheck__IsQuestPhaseClear(
                        (clsQuestCheck_o *)Instance,
                        targetId,
                        targetValue,
                        IsExistCommand,
                        0LL);
      else
        LOBYTE(v35) = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v35 & 1;
    case 3:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v35, v38);
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
      if ( v45 == targetId )
        goto LABEL_52;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      LOBYTE(v35) = CondType__IsMissionAchive(targetId, 0LL);
      return (unsigned __int8)v35 & 1;
    case 6:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v35, v38);
      if ( !Instance )
        goto LABEL_176;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL) )
        goto LABEL_6;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestMaster__getQuestEntity((QuestMaster_o *)Instance, targetId, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v51 = (QuestEntity_o *)Instance;
      WarId = QuestEntity__GetWarId((QuestEntity_o *)Instance, 0LL);
      LOBYTE(v35) = QuestTree__CheckQuestOpen(this, v51, 0LL, WarId, v53) == 1;
      return (unsigned __int8)v35 & 1;
    case 7:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v54 = *(_QWORD *)(Instance + 24);
      v55 = Instance;
      if ( (int)v54 >= 1 )
      {
        v56 = 0;
        v57 = 0LL;
        while ( v57 < (unsigned int)v54 )
        {
          v58 = *(_DWORD *)(v55 + 32 + 4 * v57);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v38);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v58, IsExistCommand, 0LL);
          LODWORD(v54) = *(_DWORD *)(v55 + 24);
          ++v57;
          v56 += Instance & 1;
          if ( (__int64)v57 >= (int)v54 )
            goto LABEL_167;
        }
        goto LABEL_177;
      }
      v56 = 0;
LABEL_167:
      if ( targetValue <= 1 )
        v79 = 1;
      else
        v79 = targetValue;
      LOBYTE(v35) = v56 < v79;
      return (unsigned __int8)v35 & 1;
    case 8:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v59 = *(_QWORD *)(Instance + 24);
      v60 = Instance;
      if ( (int)v59 < 1 )
        goto LABEL_150;
      v61 = 0;
      v62 = 0LL;
      while ( v62 < (unsigned int)v59 )
      {
        v63 = *(_DWORD *)(v60 + 32 + 4 * v62);
        Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v38);
        if ( !Instance )
          goto LABEL_176;
        Instance = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, v63, IsExistCommand, 0LL);
        LODWORD(v59) = *(_DWORD *)(v60 + 24);
        ++v62;
        v61 += Instance & 1;
        if ( (__int64)v62 >= (int)v59 )
          goto LABEL_151;
      }
      goto LABEL_177;
    case 9:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v64);
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
      v78 = num < targetValue;
LABEL_160:
      LOBYTE(v35) = !v78;
      return (unsigned __int8)v35 & 1;
    case 10:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v35, v38);
      if ( !Instance )
        goto LABEL_176;
      LOBYTE(v35) = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, targetId, IsExistCommand, 0LL);
      return (unsigned __int8)v35 & 1;
    case 11:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, targetId, 2, 0LL);
      if ( !Instance )
        goto LABEL_176;
      v67 = *(_QWORD *)(Instance + 24);
      v68 = Instance;
      if ( (int)v67 >= 1 )
      {
        v61 = 0;
        v69 = 0LL;
        while ( v69 < (unsigned int)v67 )
        {
          v70 = *(_DWORD *)(v68 + 32 + 4 * v69);
          Instance = (int64_t)QuestTree__get_QuestCheckInst((QuestTree_o *)Instance, v38);
          if ( !Instance )
            goto LABEL_176;
          Instance = clsQuestCheck__IsQuestClearRaw((clsQuestCheck_o *)Instance, v70, IsExistCommand, 0LL);
          LODWORD(v67) = *(_DWORD *)(v68 + 24);
          ++v69;
          v61 += Instance & 1;
          if ( (__int64)v69 >= (int)v67 )
            goto LABEL_151;
        }
LABEL_177:
        sub_1BCAA44(Instance, v38);
      }
LABEL_150:
      v61 = 0;
LABEL_151:
      if ( targetValue <= 1 )
        v77 = 1;
      else
        v77 = targetValue;
      v78 = v61 < v77;
      goto LABEL_160;
    case 12:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      LOBYTE(v35) = CondType__IsEventGroupPointRatioInTerm(targetId, targetValue, 0LL);
      return (unsigned __int8)v35 & 1;
    case 13:
      v71 = targetId / 100;
      v72 = targetId % 100;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      LOBYTE(v35) = CondType__IsEventRaceGoalScriptPlayed(v71, v72, targetValue, 0LL);
      return (unsigned __int8)v35 & 1;
    case 16:
      if ( v45 == targetId )
        goto LABEL_6;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      IsMissionAchive = CondType__IsMissionAchive(targetId, 0LL);
LABEL_165:
      LOBYTE(v35) = !IsMissionAchive;
      return (unsigned __int8)v35 & 1;
    case 17:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      LOBYTE(v35) = CondType__IsQuestAvailable(targetId, 0LL);
      return (unsigned __int8)v35 & 1;
    case 18:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 83;
      goto LABEL_174;
    case 19:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 84;
      goto LABEL_174;
    case 20:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 85;
      goto LABEL_174;
    case 21:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 86;
      goto LABEL_174;
    case 22:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 87;
      goto LABEL_174;
    case 23:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 88;
      goto LABEL_174;
    case 24:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 89;
      goto LABEL_174;
    case 25:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 90;
      goto LABEL_174;
    case 26:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 91;
      goto LABEL_174;
    case 27:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 23;
      goto LABEL_174;
    case 28:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 76;
      goto LABEL_174;
    case 29:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      LOBYTE(v35) = CondType__IsMissionClearOnly(targetId, 0LL);
      return (unsigned __int8)v35 & 1;
    case 30:
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v38);
      v73 = targetValue;
      v74 = 97;
      goto LABEL_174;
    case 31:
      Instance = (int64_t)QuestTree__get_QuestCheckInst(v35, v38);
      if ( !Instance )
        goto LABEL_176;
      v75 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
      if ( (v75 & 0x80000000) != 0 )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v76);
        v73 = targetValue;
        v74 = 113;
LABEL_174:
        LOBYTE(v35) = CondType__IsOpen(v74, targetId, v73, 0, 0LL, 0LL);
      }
      else
      {
        LOBYTE(v35) = CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(targetId, v75, 1, 0LL);
      }
      return (unsigned __int8)v35 & 1;
    default:
LABEL_52:
      LOBYTE(v35) = 0;
      return (unsigned __int8)v35 & 1;
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

  return QuestTree__CheckSpotCond_34733380(this, 1, spoRoadtId, spotCondType, targetId, targetValue, v6);
}


System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo(
        QuestTree_o *this,
        MapControl_MapInfo_o *mapInfo,
        BlankEarthSpotMaster_o *blankEarthSpotMaster,
        const MethodInfo *method)
{
  __int64 v7; // x22
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B131D7 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, mapInfo, blankEarthSpotMaster);
    byte_4B131D7 = 1;
  }
  v7 = sub_1BCAA2C(QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, mapInfo, blankEarthSpotMaster, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v7 + 72) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = mapInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)mapInfo, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 64) = blankEarthSpotMaster;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 64), (int64_t)blankEarthSpotMaster, v20, v21, v22, v23, v24, v25);
  return (System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *)v7;
}


int64_t __fastcall QuestTree__GetEndTime(
        QuestTree_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t questId; // w21
  System_Collections_Generic_List_QuestReleaseEntity__o **p_questReleaseEntList; // x19
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x23
  int64_t v25; // x19
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  EventQuestEntity_o *FirstEntityFromQuestId; // x0
  __int64 v31; // x1
  EventEntity_o *Entity; // x0
  EventEntity_o *v33; // x24
  int64_t EndTime; // x0
  QuestEntity_o *v35; // x0
  const MethodInfo *v36; // x3
  QuestEntity_o *Mine; // x0
  __int64 v38; // x1
  QuestEntity_o *v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4B131DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, questInfo, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventQuestMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v17, v18);
    this = (QuestTree_o *)sub_1BCA7E0(
                            &Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__,
                            v19,
                            v20);
    byte_4B131DA = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !questInfo )
    goto LABEL_33;
  questId = questInfo->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questInfo);
  this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !this
    || (p_questReleaseEntList = &v4->fields.questReleaseEntList,
        QuestReleaseMaster__getListByQuestID_40252920((QuestReleaseMaster_o *)this, questId, p_questReleaseEntList, 0LL),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventQuestMaster___),
        this = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___),
        !*p_questReleaseEntList) )
  {
LABEL_33:
    sub_1BCAA3C(this, questInfo);
  }
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)*p_questReleaseEntList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v25 = 0LL;
  v43 = v42;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v26 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1BCAA3C(v26, v27);
    klass_high = HIDWORD(v43.fields._current[1].klass);
    switch ( klass_high )
    {
      case 11:
        if ( !Master_object )
          sub_1BCAA3C(v26, v27);
        FirstEntityFromQuestId = EventQuestMaster__GetFirstEntityFromQuestId(
                                   (EventQuestMaster_o *)Master_object,
                                   questId,
                                   0LL);
        if ( FirstEntityFromQuestId )
        {
          if ( !v24 )
            sub_1BCAA3C(FirstEntityFromQuestId, v31);
          Entity = (EventEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      v24,
                                      FirstEntityFromQuestId->fields.eventId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          v33 = Entity;
          if ( Entity )
          {
            if ( Entity->fields.type == 7 && EventEntity__IsOpen(Entity, 1, 0LL) )
            {
              EndTime = EventEntity__GetEndTime(v33, 1, 0LL);
LABEL_27:
              v25 = EndTime;
              goto LABEL_28;
            }
          }
        }
        break;
      case 12:
        Mine = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !Mine )
          sub_1BCAA3C(0LL, v38);
        EndTime = QuestEntity__getClosedAt(Mine, 0LL);
        goto LABEL_27;
      case 13:
        v39 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        if ( !v39 )
          sub_1BCAA3C(0LL, v40);
        EndTime = QuestEntity__GetEndTime(v39, 1, 0LL);
        goto LABEL_27;
      case 166:
        v35 = MapControl_QuestInfo__GetMine(questInfo, 0LL);
        EndTime = QuestTree__GetEndTimeWeekDays((QuestTree_o *)v35, v35, (QuestReleaseEntity_o *)current, v36);
        goto LABEL_27;
      default:
LABEL_28:
        if ( v25 >= 1 )
          goto LABEL_29;
        break;
    }
  }
LABEL_29:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v25;
}


int64_t __fastcall QuestTree__GetEndTimeWeekDays(
        QuestTree_o *this,
        QuestEntity_o *questEnt,
        QuestReleaseEntity_o *questReleaseEnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x0
  __int64 v9; // x1
  int64_t v10; // x22
  int64_t v11; // x21
  int64_t Time_39269384; // x0
  int64_t value; // x22
  int64_t v14; // x21
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t NextDayStartTime; // x0
  __int64 v18; // x1
  int64_t v19; // x11
  int64_t v20; // x22
  int64_t v21; // x26
  int v22; // w27
  __int64 v23; // x1
  uint64_t dateData; // [xsp+8h] [xbp-58h] BYREF
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8

  if ( (byte_4B131DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, questEnt, questReleaseEnt);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B131DB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, questEnt);
  Time = NetworkManager__getTime(0LL);
  if ( !questEnt )
    goto LABEL_29;
  v10 = Time;
  v11 = 0LL;
  if ( Time < QuestEntity__getOpenedAt(questEnt, 0LL) )
    return v11;
  Time = QuestEntity__getClosedAt(questEnt, 0LL);
  v11 = 0LL;
  if ( v10 > Time )
    return v11;
  if ( !questReleaseEnt )
LABEL_29:
    sub_1BCAA3C(Time, v9);
  if ( questReleaseEnt->fields.targetId == 254 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  v26.fields._dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Time_39269384 = NetworkManager__getTime_39269384(v26, 0LL);
  value = questReleaseEnt->fields.value;
  v14 = Time_39269384;
  dateData = NetworkManager__getDateTime_39270164(Time_39269384 - 3600 * value, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v15);
  v27.fields._dateData = (uint64_t)&dateData;
  if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v27, 0LL) + 1)) & 1) == 0 )
    return 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
  v19 = v14 + 86400;
  v11 = NextDayStartTime + 3600 * questReleaseEnt->fields.value;
  v20 = v19 - 3600 * value;
  v21 = v11 + 518400;
  v22 = 6;
  while ( 1 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    dateData = NetworkManager__getDateTime_39270164(v20, 0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v23);
    v28.fields._dateData = (uint64_t)&dateData;
    if ( (((unsigned int)questReleaseEnt->fields.targetId >> (System_DateTime__get_DayOfWeek(v28, 0LL) + 1)) & 1) == 0 )
      break;
    v11 += 86400LL;
    --v22;
    v20 += 86400LL;
    if ( !v22 )
    {
      v11 = v21;
      break;
    }
  }
  if ( QuestEntity__getClosedAt(questEnt, 0LL) < v11 )
    return QuestEntity__getClosedAt(questEnt, 0LL);
  return v11;
}


MapControl_WarInfo_o *__fastcall QuestTree__GetLatestProgressWarInfo(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_MapControl_WarInfo__o *OpenedWarInfoList; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  QuestTree___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Func_object__int__o *_9__36_0; // x21
  Il2CppObject *v28; // x22
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B131D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__get_Current__, v10, v11);
    sub_1BCA7E0(&System_Func_MapControl_WarInfo__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, v16, v17);
    sub_1BCA7E0(&QuestTree___c_TypeInfo, v18, v19);
    byte_4B131D0 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_19;
  OpenedWarInfoList = MapControl_RootInfo__GetOpenedWarInfoList(mapControlRootInfo, 1, 0LL);
  v25 = QuestTree___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenedWarInfoList;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, v22);
    v25 = QuestTree___c_TypeInfo;
  }
  _9__36_0 = (System_Func_object__int__o *)v25->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, v22);
      v25 = QuestTree___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__36_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_MapControl_WarInfo__int__TypeInfo, v22, v23, v24);
    System_Func_object__int____ctor(_9__36_0, v28, Method_QuestTree___c__GetLatestProgressWarInfo_b__36_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = (struct System_Func_MapControl_WarInfo__int__o *)_9__36_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
      (int64_t)_9__36_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v26,
                                                               (System_Func_TSource__TKey__o *)_9__36_0,
                                                               (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_MapControl_WarInfo__int___);
  mapControlRootInfo = (MapControl_RootInfo_o *)System_Linq_Enumerable__ToList_object_(
                                                  v36,
                                                  (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_MapControl_WarInfo___);
  if ( !mapControlRootInfo )
LABEL_19:
    sub_1BCAA3C(mapControlRootInfo, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)mapControlRootInfo,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_WarInfo__GetEnumerator__);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__MoveNext__);
    if ( !v37 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1BCAA3C(v37, v38);
    if ( QuestTree__IsActiveWar(this, HIDWORD(v42.fields._current[1].klass), v39) )
      goto LABEL_17;
  }
  current = 0LL;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_WarInfo__Dispose__);
  return (MapControl_WarInfo_o *)current;
}


// local variable allocation has failed, the output may be wrong!
MapControl_MapGimmickInfo_o *__fastcall QuestTree__GetMapGimmickInfo(
        QuestTree_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B131C6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__,
      *(_QWORD *)&mapGimmickId,
      method);
    sub_1BCA7E0(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__, v8, v9);
    sub_1BCA7E0(&QuestTree___c__DisplayClass22_0_TypeInfo, v10, v11);
    byte_4B131C6 = 1;
  }
  v12 = sub_1BCAA2C(QuestTree___c__DisplayClass22_0_TypeInfo, *(_QWORD *)&mapGimmickId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = mapGimmickId,
        allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapGimmickInfoList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_MapControl_MapGimmickInfo__TypeInfo,
                                              v14,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_QuestTree___c__DisplayClass22_0__GetMapGimmickInfo_b__0__,
          0LL),
        !allMapGimmickInfoList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (MapControl_MapGimmickInfo_o *)System_Collections_Generic_List_object___Find(
                                          allMapGimmickInfoList,
                                          (System_Predicate_T__o *)v18,
                                          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Find__);
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
    sub_1BCAA3C(QuestInfo, v5);
  }
  return MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)QuestInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetQuestCount(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_object__o *UserReachableMapList; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_List_int__o *v48; // x20
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v53; // x1
  __int64 v54; // x1
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  int32_t v56; // w19
  QuestTree_o *v57; // x0
  const MethodInfo *v58; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_int__o *v63; // x21
  __int64 v64; // x1
  System_Collections_Generic_List_object__o *v65; // x0
  __int64 v66; // x1
  _BOOL8 v67; // x0
  __int64 v68; // x1
  MapControl_SpotInfo_o *current; // x23
  Il2CppObject *Instance; // x0
  __int64 v71; // x1
  System_Collections_Generic_List_int__o *v72; // x0
  __int64 v73; // x1
  int v74; // w19
  _BOOL8 v75; // x0
  __int64 v76; // x1
  __int64 Item; // x0
  __int64 v78; // x1
  int32_t v79; // w22
  _BOOL8 v80; // x0
  __int64 v81; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  int32_t v86; // [xsp+4h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4B131C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v39, v40);
    byte_4B131C9 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  memset(&v89, 0, sizeof(v89));
  memset(&v88, 0, sizeof(v88));
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  UserReachableMapList = (System_Collections_Generic_List_object__o *)QuestTree__GetUserReachableMapList(
                                                                        (QuestTree_o *)ChildByWarID,
                                                                        ChildByWarID,
                                                                        v43);
  v48 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v45,
                                                    v46,
                                                    v47);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !UserReachableMapList )
    sub_1BCAA3C(v49, v50);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    UserReachableMapList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v90 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v90.fields._current )
      sub_1BCAA3C(0LL, v51);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                              (MapControl_MapInfo_o *)v90.fields._current,
                                                              0LL);
    if ( !SpotList )
      sub_1BCAA3C(0LL, v53);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v87,
      SpotList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v89 = v87;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v89,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__) )
    {
      if ( !v89.fields._current )
        sub_1BCAA3C(0LL, v54);
      AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                              (MapControl_SpotInfo_o *)v89.fields._current,
                                                                              0,
                                                                              0LL);
      if ( !v48 )
        sub_1BCAA3C(AvailableQuestIdList, AvailableQuestIdList);
      System_Collections_Generic_List_int___AddRange(
        v48,
        AvailableQuestIdList,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v89,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v57, v48, v58);
  v63 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v60,
                                                    v61,
                                                    v62);
  System_Collections_Generic_List_int____ctor(
    v63,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    UserReachableMapList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_MapInfo__GetEnumerator__);
  v56 = 0;
  v90 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__MoveNext__) )
  {
    if ( !v90.fields._current )
      sub_1BCAA3C(0LL, v64);
    v65 = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(
                                                         (MapControl_MapInfo_o *)v90.fields._current,
                                                         0LL);
    if ( !v65 )
      sub_1BCAA3C(0LL, v66);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v87,
      v65,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v89 = v87;
    while ( 1 )
    {
      v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v89,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v67 )
        break;
      current = (MapControl_SpotInfo_o *)v89.fields._current;
      if ( !v89.fields._current )
        sub_1BCAA3C(v67, v68);
      if ( HIDWORD(v89.fields._current[1].klass) != 1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1BCAA3C(0LL, v71);
        if ( !QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, current->fields.spotId, 0LL) )
          continue;
      }
      v72 = MapControl_SpotInfo__GetAvailableQuestIdList(current, 0, 0LL);
      if ( !v72 )
        sub_1BCAA3C(0LL, v73);
      v86 = v56;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v87,
        v72,
        (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v74 = 0;
      v88 = v87;
      while ( 1 )
      {
        v75 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v88,
                (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        if ( !v75 )
          break;
        if ( !ShareQuestIdToGroupIdDict )
          sub_1BCAA3C(v75, v76);
        Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 ShareQuestIdToGroupIdDict,
                 (int32_t)v88.fields._current,
                 (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        v79 = Item;
        if ( (_DWORD)Item )
        {
          if ( !v63 )
            sub_1BCAA3C(Item, v78);
          v80 = System_Collections_Generic_List_int___Contains(
                  v63,
                  Item,
                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( v80 )
          {
            ++v74;
          }
          else
          {
            items = v63->fields._items;
            v83 = Method_System_Collections_Generic_List_int__Add__;
            ++v63->fields._version;
            if ( !items )
              sub_1BCAA3C(v80, v81);
            size = v63->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v63,
                v79,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
            }
            else
            {
              v63->fields._size = size + 1;
              items->m_Items[size + 1] = v79;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v88,
        (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      v56 = v86 - v74 + current->fields.questCount;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v89,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_MapInfo__Dispose__);
  return v56;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetQuestCountForMap(
        QuestTree_o *this,
        int32_t mapId,
        int32_t layer,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  MapControl_MapInfo_o *v39; // x23
  System_Collections_Generic_List_int__o *v40; // x21
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v42; // x1
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *AvailableQuestIdList; // x0
  QuestTree_o *v47; // x0
  const MethodInfo *v48; // x2
  System_Collections_Generic_Dictionary_int__int__o *ShareQuestIdToGroupIdDict; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_int__o *v53; // x22
  _BOOL8 v54; // x0
  __int64 v55; // x1
  MapControl_SpotInfo_o *v56; // x23
  Il2CppObject *Instance; // x0
  __int64 v58; // x1
  System_Collections_Generic_List_int__o *v59; // x0
  __int64 v60; // x1
  int v61; // w25
  _BOOL8 v62; // x0
  __int64 v63; // x1
  __int64 Item; // x0
  __int64 v65; // x1
  int32_t v66; // w24
  _BOOL8 v67; // x0
  __int64 v68; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  int v73; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B131CC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
      *(_QWORD *)&mapId,
      *(_QWORD *)&layer);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v33, v34);
    byte_4B131CC = 1;
  }
  memset(&v76, 0, sizeof(v76));
  memset(&v75, 0, sizeof(v75));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( MapInfoByMapID )
  {
    v39 = MapInfoByMapID;
    v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v36,
                                                      v37,
                                                      v38);
    System_Collections_Generic_List_int____ctor(
      v40,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v39, 0LL);
    if ( !SpotList )
      goto LABEL_49;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v74,
      SpotList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v76 = v74;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v76,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v43 )
        break;
      current = v76.fields._current;
      if ( layer < 1 )
      {
        if ( !v76.fields._current )
          sub_1BCAA3C(v43, v44);
LABEL_12:
        AvailableQuestIdList = (System_Collections_Generic_IEnumerable_T__o *)MapControl_SpotInfo__GetAvailableQuestIdList(
                                                                                (MapControl_SpotInfo_o *)current,
                                                                                1,
                                                                                0LL);
        if ( !v40 )
          sub_1BCAA3C(AvailableQuestIdList, AvailableQuestIdList);
        System_Collections_Generic_List_int___AddRange(
          v40,
          AvailableQuestIdList,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      else
      {
        if ( !v76.fields._current )
          sub_1BCAA3C(v43, v44);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v76.fields._current, 0LL) == layer )
          goto LABEL_12;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v76,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
    ShareQuestIdToGroupIdDict = QuestTree__GetShareQuestIdToGroupIdDict(v47, v40, v48);
    v53 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v50,
                                                      v51,
                                                      v52);
    System_Collections_Generic_List_int____ctor(
      v53,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(v39, 0LL);
    if ( !SpotList )
LABEL_49:
      sub_1BCAA3C(SpotList, v42);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v74,
      SpotList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
    v73 = 0;
    v76 = v74;
    while ( 1 )
    {
      v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v76,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
      if ( !v54 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v76,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
        LODWORD(MapInfoByMapID) = v73;
        return (int)MapInfoByMapID;
      }
      v56 = (MapControl_SpotInfo_o *)v76.fields._current;
      if ( layer < 1 )
      {
        if ( !v76.fields._current )
          sub_1BCAA3C(v54, v55);
LABEL_22:
        if ( v56->fields.dispType == 1 )
          goto LABEL_25;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !Instance )
          sub_1BCAA3C(0LL, v58);
        if ( QuestAfterAction__IsExistSpotReveal((QuestAfterAction_o *)Instance, v56->fields.spotId, 0LL) )
        {
LABEL_25:
          v59 = MapControl_SpotInfo__GetAvailableQuestIdList(v56, 1, 0LL);
          if ( !v59 )
            sub_1BCAA3C(0LL, v60);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v74,
            v59,
            (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v61 = 0;
          v75 = v74;
          while ( 1 )
          {
            v62 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    (System_Collections_Generic_List_Enumerator_int__o *)&v75,
                    (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v62 )
              break;
            if ( !ShareQuestIdToGroupIdDict )
              sub_1BCAA3C(v62, v63);
            Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                     ShareQuestIdToGroupIdDict,
                     (int32_t)v75.fields._current,
                     (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v66 = Item;
            if ( (_DWORD)Item )
            {
              if ( !v53 )
                sub_1BCAA3C(Item, v65);
              v67 = System_Collections_Generic_List_int___Contains(
                      v53,
                      Item,
                      (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( v67 )
              {
                ++v61;
              }
              else
              {
                items = v53->fields._items;
                v70 = Method_System_Collections_Generic_List_int__Add__;
                ++v53->fields._version;
                if ( !items )
                  sub_1BCAA3C(v67, v68);
                size = v53->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v53,
                    v66,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                }
                else
                {
                  v53->fields._size = size + 1;
                  items->m_Items[size + 1] = v66;
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            (System_Collections_Generic_List_Enumerator_int__o *)&v75,
            (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          v73 = v73 - v61 + v56->fields.questCount;
        }
      }
      else
      {
        if ( !v76.fields._current )
          sub_1BCAA3C(v54, v55);
        if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v76.fields._current, 0LL) == layer )
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B131C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&System_Predicate_MapControl_QuestInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__, v8, v9);
    sub_1BCA7E0(&QuestTree___c__DisplayClass23_0_TypeInfo, v10, v11);
    byte_4B131C7 = 1;
  }
  v12 = sub_1BCAA2C(QuestTree___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&questId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_QuestInfo__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_QuestTree___c__DisplayClass23_0__GetQuestInfo_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (MapControl_QuestInfo_o *)System_Collections_Generic_List_object___Find(
                                     allQuestInfoList,
                                     (System_Predicate_T__o *)v18,
                                     (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_MapControl_QuestInfo__o *__fastcall QuestTree__GetQuestInfoByWarId(
        QuestTree_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *allQuestInfoList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *current; // x8
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B131DE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v16, v17);
    byte_4B131DE = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                       *(_QWORD *)&warId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    sub_1BCAA3C(0LL, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    allQuestInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v21 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1BCAA3C(v21, v22);
    if ( LODWORD(v36.fields._current[4].klass) == warId )
    {
      if ( !v18 )
        sub_1BCAA3C(v21, v22);
      items = v18->fields._items;
      v31 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1BCAA3C(v21, v22);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          current,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v33[4] = (Il2CppClass *)current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)current, v23, v24, v25, v26, v27, v28);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return (System_Collections_Generic_List_MapControl_QuestInfo__o *)v18;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall QuestTree__GetShareQuestIdToGroupIdDict(
        QuestTree_o *this,
        System_Collections_Generic_List_int__o *questIdList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B131CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, questIdList, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B131CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return QuestGroupMaster__GetQuestIdToGroupIdDict((QuestGroupMaster_o *)Instance, questIdList, 16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MapControl_SpotInfo_o *__fastcall QuestTree__GetSpotInfo(QuestTree_o *this, int32_t spotId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *allSpotInfoList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B131C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, *(_QWORD *)&spotId, method);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__, v8, v9);
    sub_1BCA7E0(&QuestTree___c__DisplayClass21_0_TypeInfo, v10, v11);
    byte_4B131C5 = 1;
  }
  v12 = sub_1BCAA2C(QuestTree___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&spotId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = spotId,
        allSpotInfoList = (System_Collections_Generic_List_object__o *)this->fields.allSpotInfoList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_SpotInfo__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_QuestTree___c__DisplayClass21_0__GetSpotInfo_b__0__,
          0LL),
        !allSpotInfoList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (MapControl_SpotInfo_o *)System_Collections_Generic_List_object___Find(
                                    allSpotInfoList,
                                    (System_Predicate_T__o *)v18,
                                    (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
}


System_Collections_Generic_List_MapControl_MapInfo__o *__fastcall QuestTree__GetUserReachableMapList(
        QuestTree_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x20
  WarEntity_o *Mine; // x0
  __int64 mapId; // x1
  System_Collections_Generic_List_MapControl_MapInfo__o *mapInfoList; // x19
  int32_t BaseMap; // w0
  MapControl_MapInfo_o *Map; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OpenedButtons; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_int__o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_int__o *v50; // x21
  QuestTree___c_c *v51; // x0
  System_Func_object__int__o *_9__29_0; // x23
  Il2CppObject *v53; // x24
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Int32_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  System_Predicate_object__o *v65; // x21

  if ( (byte_4B131CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapButtonMaster___, warInfo, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_MapButtonEntity__int___, v5, v6);
    sub_1BCA7E0(&System_Func_MapButtonEntity__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Predicate_MapControl_MapInfo__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_QuestTree___c__GetUserReachableMapList_b__29_0__, v23, v24);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__, v25, v26);
    sub_1BCA7E0(&QuestTree___c__DisplayClass29_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&QuestTree___c_TypeInfo, v29, v30);
    byte_4B131CA = 1;
  }
  v31 = sub_1BCAA2C(QuestTree___c__DisplayClass29_0_TypeInfo, warInfo, method, v3);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
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
  Mine = (WarEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Mine )
    goto LABEL_28;
  Mine = (WarEntity_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)Mine,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapButtonMaster___);
  if ( !Mine )
    goto LABEL_28;
  OpenedButtons = (System_Collections_Generic_IEnumerable_TSource__o *)MapButtonMaster__GetOpenedButtons(
                                                                         (MapButtonMaster_o *)Mine,
                                                                         warInfo,
                                                                         Map,
                                                                         0LL);
  v41 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v38,
                                                    v39,
                                                    v40);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v31 )
    goto LABEL_28;
  *(_QWORD *)(v31 + 16) = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)v41, v42, v43, v44, v45, v46, v47);
  if ( !OpenedButtons )
    goto LABEL_28;
  v50 = *(System_Collections_Generic_List_int__o **)(v31 + 16);
  if ( OpenedButtons[1].monitor )
  {
    v51 = QuestTree___c_TypeInfo;
    if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, mapId);
      v51 = QuestTree___c_TypeInfo;
    }
    _9__29_0 = (System_Func_object__int__o *)v51->static_fields->__9__29_0;
    if ( !_9__29_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, mapId);
        v51 = QuestTree___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__29_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_MapButtonEntity__int__TypeInfo, mapId, v48, v49);
      System_Func_object__int____ctor(_9__29_0, v53, Method_QuestTree___c__GetUserReachableMapList_b__29_0__, 0LL);
      static_fields = QuestTree___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = (struct System_Func_MapButtonEntity__int__o *)_9__29_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
        (int64_t)_9__29_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    Mine = (WarEntity_o *)System_Linq_Enumerable__Select_object__int_(
                            OpenedButtons,
                            (System_Func_TSource__TResult__o *)_9__29_0,
                            (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_MapButtonEntity__int___);
    if ( v50 )
    {
      System_Collections_Generic_List_int___AddRange(
        v50,
        (System_Collections_Generic_IEnumerable_T__o *)Mine,
        (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA3C(Mine, mapId);
  }
  if ( !Map )
    goto LABEL_28;
  if ( !v50 )
    goto LABEL_28;
  mapId = (unsigned int)Map->fields.mapId;
  items = v50->fields._items;
  v63 = Method_System_Collections_Generic_List_int__Add__;
  ++v50->fields._version;
  if ( !items )
    goto LABEL_28;
  size = v50->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v50,
      mapId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v50->fields._size = size + 1;
    items->m_Items[size + 1] = mapId;
  }
LABEL_26:
  v65 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_MapInfo__TypeInfo, mapId, v48, v49);
  System_Predicate_object____ctor(
    v65,
    (Il2CppObject *)v31,
    Method_QuestTree___c__DisplayClass29_0__GetUserReachableMapList_b__1__,
    0LL);
  if ( !mapInfoList )
    goto LABEL_28;
  return (System_Collections_Generic_List_MapControl_MapInfo__o *)System_Collections_Generic_List_object___FindAll(
                                                                    (System_Collections_Generic_List_object__o *)mapInfoList,
                                                                    (System_Predicate_T__o *)v65,
                                                                    (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestTree__GetWarID_ByQuestID(QuestTree_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *allQuestInfoList; // x19
  System_Predicate_object__o *v18; // x20
  Il2CppObject *v19; // x0

  if ( (byte_4B131CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&System_Predicate_MapControl_QuestInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__, v8, v9);
    sub_1BCA7E0(&QuestTree___c__DisplayClass33_0_TypeInfo, v10, v11);
    byte_4B131CE = 1;
  }
  v12 = sub_1BCAA2C(QuestTree___c__DisplayClass33_0_TypeInfo, *(_QWORD *)&questId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = questId,
        allQuestInfoList = (System_Collections_Generic_List_object__o *)this->fields.allQuestInfoList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_QuestInfo__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_QuestTree___c__DisplayClass33_0__GetWarID_ByQuestID_b__0__,
          0LL),
        !allQuestInfoList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  v19 = System_Collections_Generic_List_object___Find(
          allQuestInfoList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Find__);
  if ( v19 )
    LODWORD(v19) = v19[4].klass;
  return (int)v19;
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_T__o *allWarInfoList; // x20
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B131C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76811176, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_MapControl_WarInfo__TypeInfo, v7, v8);
    byte_4B131C1 = 1;
  }
  allWarInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWarInfoList;
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MapControl_WarInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor_56235344(
    v10,
    allWarInfoList,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_MapControl_WarInfo___ctor___76811176);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  System_Collections_Generic_List_object___Reverse(
    v10,
    (const MethodInfo_35A3588 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Reverse__);
  return (System_Collections_Generic_List_MapControl_WarInfo__o *)v10;
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
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B131C2 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestTree__Init_d__15_TypeInfo, endCallback, method);
    byte_4B131C2 = 1;
  }
  v6 = sub_1BCAA2C(QuestTree__Init_d__15_TypeInfo, endCallback, method, v3);
  QuestTree__Init_d__15___ctor((QuestTree__Init_d__15_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)endCallback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall QuestTree__InitInfo(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x8
  int32_t size; // w2
  int v17; // w9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *allSpotInfoList; // x8
  int32_t v19; // w2
  int v20; // w9
  struct System_Collections_Generic_List_MapControl_SpotRoadInfo__o *allSpotRoadInfoList; // x8
  int32_t v22; // w2
  int v23; // w9
  struct System_Collections_Generic_List_MapControl_MapGimmickInfo__o *allMapGimmickInfoList; // x8
  int32_t v25; // w2
  int v26; // w9
  struct System_Collections_Generic_List_MapControl_MapInfo__o *allMapInfoList; // x8
  int32_t v28; // w2
  int v29; // w9
  struct System_Collections_Generic_List_MapControl_WarInfo__o *allWarInfoList; // x8
  int32_t v31; // w2
  int v32; // w9

  if ( (byte_4B131D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Clear__, v12, v13);
    byte_4B131D8 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    goto LABEL_23;
  MapControl_RootInfo__Reset(mapControlRootInfo, 0LL);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !allQuestInfoList )
    goto LABEL_23;
  size = allQuestInfoList->fields._size;
  v17 = allQuestInfoList->fields._version + 1;
  allQuestInfoList->fields._size = 0;
  allQuestInfoList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allQuestInfoList->fields._items, 0, size, 0LL);
  allSpotInfoList = this->fields.allSpotInfoList;
  if ( !allSpotInfoList )
    goto LABEL_23;
  v19 = allSpotInfoList->fields._size;
  v20 = allSpotInfoList->fields._version + 1;
  allSpotInfoList->fields._size = 0;
  allSpotInfoList->fields._version = v20;
  if ( v19 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotInfoList->fields._items, 0, v19, 0LL);
  allSpotRoadInfoList = this->fields.allSpotRoadInfoList;
  if ( !allSpotRoadInfoList )
    goto LABEL_23;
  v22 = allSpotRoadInfoList->fields._size;
  v23 = allSpotRoadInfoList->fields._version + 1;
  allSpotRoadInfoList->fields._size = 0;
  allSpotRoadInfoList->fields._version = v23;
  if ( v22 >= 1 )
    System_Array__Clear((System_Array_o *)allSpotRoadInfoList->fields._items, 0, v22, 0LL);
  allMapGimmickInfoList = this->fields.allMapGimmickInfoList;
  if ( !allMapGimmickInfoList )
    goto LABEL_23;
  v25 = allMapGimmickInfoList->fields._size;
  v26 = allMapGimmickInfoList->fields._version + 1;
  allMapGimmickInfoList->fields._size = 0;
  allMapGimmickInfoList->fields._version = v26;
  if ( v25 >= 1 )
    System_Array__Clear((System_Array_o *)allMapGimmickInfoList->fields._items, 0, v25, 0LL);
  allMapInfoList = this->fields.allMapInfoList;
  if ( !allMapInfoList )
    goto LABEL_23;
  v28 = allMapInfoList->fields._size;
  v29 = allMapInfoList->fields._version + 1;
  allMapInfoList->fields._size = 0;
  allMapInfoList->fields._version = v29;
  if ( v28 >= 1 )
    System_Array__Clear((System_Array_o *)allMapInfoList->fields._items, 0, v28, 0LL);
  allWarInfoList = this->fields.allWarInfoList;
  if ( !allWarInfoList )
LABEL_23:
    sub_1BCAA3C(mapControlRootInfo, method);
  v31 = allWarInfoList->fields._size;
  v32 = allWarInfoList->fields._version + 1;
  allWarInfoList->fields._size = 0;
  allWarInfoList->fields._version = v32;
  if ( v31 >= 1 )
    System_Array__Clear((System_Array_o *)allWarInfoList->fields._items, 0, v31, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveEventWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B131D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B131D2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    warId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
  return entity && QuestTree__IsActiveEventWar_34728196(this, (WarEntity_o *)entity, v11);
}


bool __fastcall QuestTree__IsActiveEventWar_34728196(QuestTree_o *this, WarEntity_o *warEnt, const MethodInfo *method)
{
  QuestTree_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t id; // w21
  __int64 v14; // x1
  int64_t Time; // x20
  const MethodInfo *v16; // x2
  bool v17; // w21
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *allQuestInfoList; // x9
  __int64 v19; // x8
  struct System_Collections_Generic_List_MapControl_SpotInfo__o **p_allSpotInfoList; // x9
  struct System_Collections_Generic_List_MapControl_SpotInfo__o *v21; // x10
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B131D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, warEnt, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&long___TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    this = (QuestTree_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B131D3 = 1;
  }
  entity = 0LL;
  if ( !warEnt )
    goto LABEL_24;
  id = warEnt->fields.id;
  this = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (QuestTree_o *)DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this )
    goto LABEL_24;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    warEnt->fields.eventId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( !entity )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Time = NetworkManager__getTime(0LL);
  this = (QuestTree_o *)QuestTree__IsWarOpen(v4, id, v16);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_24;
    v17 = Time < (__int64)entity[6].klass;
  }
  else
  {
    v17 = 0;
  }
  this = (QuestTree_o *)sub_1BCA888(long___TypeInfo, 1LL);
  if ( !entity || !this )
LABEL_24:
    sub_1BCAA3C(this, warEnt);
  allQuestInfoList = this->fields.allQuestInfoList;
  if ( !(_DWORD)allQuestInfoList )
    sub_1BCAA44(this, warEnt);
  this->fields.allSpotInfoList = (struct System_Collections_Generic_List_MapControl_SpotInfo__o *)entity[6].klass;
  if ( (int)allQuestInfoList >= 1 )
  {
    v19 = (unsigned int)allQuestInfoList;
    p_allSpotInfoList = &this->fields.allSpotInfoList;
    do
    {
      v21 = *p_allSpotInfoList;
      if ( (__int64)*p_allSpotInfoList > Time && v4->fields.forceUpdateTime > (__int64)v21 )
        v4->fields.forceUpdateTime = (int64_t)v21;
      --v19;
      ++p_allSpotInfoList;
    }
    while ( v19 );
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsActiveWar(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  MapControl_WarInfo_o *v9; // x20
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  WarReleaseEntity_o *v14; // x21
  WarEntity_o *Mine; // x0
  WarEntity_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4B131D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarReleaseMaster___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B131D1 = 1;
  }
  mapControlRootInfo = this->fields.mapControlRootInfo;
  if ( !mapControlRootInfo )
    return 0;
  ChildByWarID = MapControl_RootInfo__GetChildByWarID(mapControlRootInfo, warId, 0LL);
  if ( !ChildByWarID )
    return 0;
  v9 = ChildByWarID;
  if ( !MapControl_WarInfo__GetStatus(ChildByWarID, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v12);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, warId, 0LL);
  if ( OpenEntity )
  {
    v14 = OpenEntity;
    if ( WarReleaseEntity__IsHide(OpenEntity, 0LL) || WarReleaseEntity__IsClose(v14, 0LL) )
      return 0;
  }
  if ( MapControl_WarInfo__IsClosedWar(v9, 0LL) )
    return 0;
  Mine = MapControl_WarInfo__GetMine(v9, 0LL);
  if ( !Mine )
    return 0;
  v16 = Mine;
  return (!WarEntity__IsEvent(Mine, 0LL) || QuestTree__IsActiveEventWar_34728196(this, v16, v17))
      && QuestTree__IsWarOpen(this, v16->fields.id, v17);
}


bool __fastcall QuestTree__IsNeedUpdateQuestTree(QuestTree_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t MonitoringDataMasterRevision; // w20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t forceUpdateTime; // x19

  if ( (byte_4B131C3 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B131C3 = 1;
  }
  MonitoringDataMasterRevision = this->fields.MonitoringDataMasterRevision;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
  if ( MonitoringDataMasterRevision != DataManager__getRevisionTotal((DataManager_o *)Instance, 0LL) )
    return 1;
  forceUpdateTime = this->fields.forceUpdateTime;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  return forceUpdateTime <= NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsNextSpotForMap(QuestTree_o *this, int32_t mapId, int32_t layer, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  System_Collections_Generic_List_object__o *SpotList; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  bool v18; // w21
  Il2CppObject *current; // x22
  SpotEntity_o *Mine; // x1
  const MethodInfo *v21; // x3
  int v22; // w19
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B131CD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__,
      *(_QWORD *)&mapId,
      *(_QWORD *)&layer);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v11, v12);
    byte_4B131CD = 1;
  }
  memset(&v25, 0, sizeof(v25));
  MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(this, mapId, *(const MethodInfo **)&layer);
  if ( !MapInfoByMapID )
    return (char)MapInfoByMapID;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(MapInfoByMapID, 0LL);
  if ( !SpotList )
    sub_1BCAA3C(0LL, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    SpotList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
    v18 = v16;
    if ( !v16 )
      break;
    current = v25.fields._current;
    if ( layer < 1 )
    {
      if ( !v25.fields._current )
        sub_1BCAA3C(v16, v17);
      goto LABEL_12;
    }
    if ( !v25.fields._current )
      sub_1BCAA3C(v16, v17);
    if ( MapControl_SpotInfo__GetLayer((MapControl_SpotInfo_o *)v25.fields._current, 0LL) == layer )
    {
LABEL_12:
      Mine = MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)current, 0LL);
      if ( QuestTree__IsSpotSatisfyingDisplayCond(this, Mine, 1, v21)
        && MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)current, 0LL) )
      {
        v22 = 6;
        goto LABEL_16;
      }
    }
  }
  v22 = 7;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
  LOBYTE(MapInfoByMapID) = v18 && v22 == 6;
  return (char)MapInfoByMapID;
}


bool __fastcall QuestTree__IsSpotSatisfyingActiveCond(
        QuestTree_o *this,
        SpotEntity_o *spotEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  if ( !spotEnt )
    sub_1BCAA3C(this, 0LL);
  return QuestTree__CheckSpotCond_34733380(
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
    sub_1BCAA3C(this, 0LL);
  return (!SubmarineMapDataManager__IsSubmarineMap(spotEnt->fields.mapId, 0LL)
       || !SubmarineDataHelperSpot__IsSpotBelowClosedPanel(spotEnt, checkBeforeClearQuest, 0LL))
      && QuestTree__CheckSpotCond_34733380(
           this,
           0,
           spotEnt->fields.id,
           spotEnt->fields.dispCondType1,
           spotEnt->fields.dispTargetId1,
           spotEnt->fields.dispTargetValue1,
           v7)
      && QuestTree__CheckSpotCond_34733380(
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *QuestInfoByWarId; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *current; // x21
  clsQuestCheck_o *v16; // x0
  __int64 v17; // x1
  int v18; // w20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B131DF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v9, v10);
    byte_4B131DF = 1;
  }
  memset(&v20, 0, sizeof(v20));
  QuestInfoByWarId = (System_Collections_Generic_List_object__o *)QuestTree__GetQuestInfoByWarId(this, warId, method);
  if ( !QuestInfoByWarId )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    QuestInfoByWarId,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v13 )
      break;
    current = v20.fields._current;
    v16 = QuestTree__get_QuestCheckInst((QuestTree_o *)v13, v14);
    if ( !current )
      sub_1BCAA3C(v16, v17);
    if ( !v16 )
      sub_1BCAA3C(0LL, v17);
    if ( !clsQuestCheck__mfCheck_IsQuestNew(v16, (int32_t)current[1].klass, 0LL) )
    {
      v18 = 4;
      goto LABEL_11;
    }
  }
  v18 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v18 != 4;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestTree__IsWarOpen(QuestTree_o *this, int32_t warId, const MethodInfo *method)
{
  QuestTree_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  clsQuestCheck_o *QuestInfoByWarId; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  _BOOL8 v16; // x0
  __int64 v17; // x1
  bool v18; // w19
  int v19; // w20
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  MapControl_WarInfo_o *ChildByWarID; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B131CF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__,
      *(_QWORD *)&warId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v7, v8);
    this = (QuestTree_o *)sub_1BCA7E0(
                            &Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__,
                            v9,
                            v10);
    byte_4B131CF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  QuestInfoByWarId = QuestTree__get_QuestCheckInst(this, *(const MethodInfo **)&warId);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  v13 = clsQuestCheck__IsMainInterlude(QuestInfoByWarId, warId, 0LL);
  if ( v13 )
    goto LABEL_5;
  QuestInfoByWarId = QuestTree__get_QuestCheckInst((QuestTree_o *)v13, v14);
  if ( !QuestInfoByWarId )
LABEL_22:
    sub_1BCAA3C(QuestInfoByWarId, v12);
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
  QuestInfoByWarId = (clsQuestCheck_o *)QuestTree__GetQuestInfoByWarId(v4, warId, v15);
  if ( !QuestInfoByWarId )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)QuestInfoByWarId,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    v18 = v16;
    if ( !v16 )
      break;
    if ( !v23.fields._current )
      sub_1BCAA3C(v16, v17);
    if ( LODWORD(v23.fields._current[2].klass) == 1 )
    {
      v19 = 6;
      goto LABEL_15;
    }
  }
  v19 = 7;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  return v18 && v19 == 6;
}


void __fastcall QuestTree__SetupBlankEarthSpotInfo(
        QuestTree_o *this,
        BlankEarthSpotEntity_o *blankEarthSpotEnt,
        MapControl_SpotInfo_o *spotInfo,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_String_o *name; // x1
  __int64 v24; // x1
  long double v25; // q0
  __int64 v26; // x0
  __int64 v27; // x0
  UnityEngine_Object_o *v28; // x22
  bool IsExistCommand; // w21
  int32_t v30; // w0
  bool IsOpenForQAA; // w0

  if ( (byte_4B131D4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, blankEarthSpotEnt, spotInfo);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v10, v11);
    sub_1BCA7E0(&SpotEntity_TypeInfo, v12, v13);
    byte_4B131D4 = 1;
  }
  v14 = sub_1BCAA2C(SpotEntity_TypeInfo, blankEarthSpotEnt, spotInfo, method);
  SpotEntity___ctor((SpotEntity_o *)v14, 0LL);
  if ( !blankEarthSpotEnt )
    goto LABEL_18;
  if ( !v14 )
    goto LABEL_18;
  *(_DWORD *)(v14 + 24) = blankEarthSpotEnt->fields.mapId;
  *(_QWORD *)(v14 + 16) = *(_QWORD *)&blankEarthSpotEnt->fields.id;
  name = blankEarthSpotEnt->fields.name;
  *(_QWORD *)(v14 + 32) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)name, v17, v18, v19, v20, v21, v22);
  if ( !spotInfo )
    goto LABEL_18;
  MapControl_SpotInfo__SetMine(spotInfo, blankEarthSpotEnt->fields.id, (SpotEntity_o *)v14, 0LL);
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C1C6BC(v25);
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 192) + 16LL);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C1C6BC(v25);
  v28 = **(UnityEngine_Object_o ***)(v27 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    IsExistCommand = QuestAfterAction__IsExistCommand((QuestAfterAction_o *)Instance, 0, *(_DWORD *)(v14 + 16), 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
LABEL_18:
    sub_1BCAA3C(Instance, v16);
  v30 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  IsOpenForQAA = BlankEarthSpotEntity__IsOpenForQAA(blankEarthSpotEnt, v30, 0, 0LL);
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

  v4 = QuestTree__CheckMapGimmickCond_34730552(this, *mapGimmickInfo, method);
  if ( !*mapGimmickInfo )
    sub_1BCAA3C(v4, v5);
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
    sub_1BCAA3C(IsSpotSatisfyingDisplayCond, v8);
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
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34733380(
                          this,
                          1,
                          id,
                          spotRoadEnt->fields.dispCondType,
                          spotRoadEnt->fields.dispTargetId,
                          spotRoadEnt->fields.dispTargetValue,
                          v4);
  if ( ((unsigned __int8)this & 1) == 0
    || (this = (QuestTree_o *)QuestTree__CheckSpotCond_34733380(
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
    sub_1BCAA3C(this, spotRoadEnt);
  }
  this = (QuestTree_o *)QuestTree__CheckSpotCond_34733380(
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
    sub_1BCAA3C(this, nowTime);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B131C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, method, v2);
    byte_4B131C4 = 1;
  }
  this->fields.forceUpdateTime = 0x7FFFFFFFFFFFFFFFLL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2

  if ( (byte_4B131C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method, v2);
    byte_4B131C0 = 1;
  }
  return (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
}


System_Collections_IEnumerator_o *__fastcall QuestTree__mfBaseTreeMakeWithOpenCheck(
        QuestTree_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B131D5 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo, endCallback, method);
    byte_4B131D5 = 1;
  }
  v6 = sub_1BCAA2C(QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_TypeInfo, endCallback, method, v3);
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41___ctor((QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 48) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)endCallback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
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

  if ( (byte_4B131D6 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo, *(_QWORD *)&targetWarId, endCallback);
    byte_4B131D6 = 1;
  }
  v7 = sub_1BCAA2C(
         QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_TypeInfo,
         *(_QWORD *)&targetWarId,
         endCallback,
         method);
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42___ctor((QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = targetWarId;
  *(_QWORD *)(v7 + 72) = endCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)endCallback, v16, v17, v18, v19, v20, v21);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *allMapInfoList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B131C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Find__, *(_QWORD *)&mapId, method);
    sub_1BCA7E0(&System_Predicate_MapControl_MapInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__, v8, v9);
    sub_1BCA7E0(&QuestTree___c__DisplayClass27_0_TypeInfo, v10, v11);
    byte_4B131C8 = 1;
  }
  v12 = sub_1BCAA2C(QuestTree___c__DisplayClass27_0_TypeInfo, *(_QWORD *)&mapId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = mapId;
  allMapInfoList = (System_Collections_Generic_List_object__o *)this->fields.allMapInfoList;
  if ( !allMapInfoList )
    return 0LL;
  v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_MapInfo__TypeInfo, v14, v15, v16);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_QuestTree___c__DisplayClass27_0__mfGetMapInfoByMapID_b__0__,
    0LL);
  return (MapControl_MapInfo_o *)System_Collections_Generic_List_object___Find(
                                   allMapInfoList,
                                   (System_Predicate_T__o *)v18,
                                   (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__Find__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v8; // x19
  int32_t _1__state; // w8
  struct QuestTree_o *_4__this; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8
  int32_t mapId; // w20
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
  BlankEarthSpotEntity_o *v24; // x20
  const MethodInfo *v25; // x3
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v26; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4B131E5 & 1) == 0 )
  {
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1BCA7E0(&BlankEarthSpotMaster_TypeInfo, method, v2);
    byte_4B131E5 = 1;
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
      j_il2cpp_runtime_class_init_0(BlankEarthSpotMaster_TypeInfo, method);
    if ( !BlankEarthSpotMaster__ContainsMapId(mapId, 0LL) )
      return 0;
    this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)v8->fields.blankEarthSpotMaster;
    if ( !this )
      goto LABEL_21;
    v13 = BlankEarthSpotMaster__GetByMapId((BlankEarthSpotMaster_o *)this, mapId, 0LL);
    v8->fields.__7__wrap1 = v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__7__wrap1, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = 0;
    v8->fields.__7__wrap2 = 0;
  }
  this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)&v8->fields.__7__wrap1;
  _7__wrap1 = v8->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_21;
  max_length = _7__wrap1->max_length;
  if ( v20 < (int)max_length )
  {
    if ( v20 >= max_length )
      sub_1BCAA44(this, method);
    v24 = _7__wrap1->m_Items[v20];
    if ( v24 )
    {
      this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)v8->fields.mapInfo;
      if ( this )
      {
        this = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)MapControl_MapInfo__AddChild(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   v24->fields.id,
                                                                   0LL);
        if ( _4__this )
        {
          v26 = this;
          QuestTree__SetupBlankEarthSpotInfo((QuestTree_o *)this, v24, (MapControl_SpotInfo_o *)this, v25);
          v8->fields.__2__current = (struct MapControl_SpotInfo_o *)v26;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)v26, v28, v29, v30, v31, v32, v33);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, method);
  }
  this->klass = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
  return 0;
}


System_Collections_Generic_IEnumerator_MapControl_SpotInfo__o *__fastcall QuestTree__EnumerateBlankEarthSpotInfo_d__43__System_Collections_Generic_IEnumerable_MapControl_SpotInfo__GetEnumerator(
        QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *v10; // x20
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

  if ( (byte_4B131E6 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo, method, v2);
    byte_4B131E6 = 1;
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
    v10 = (QuestTree__EnumerateBlankEarthSpotInfo_d__43_o *)sub_1BCAA2C(
                                                              QuestTree__EnumerateBlankEarthSpotInfo_d__43_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__mapInfo = this->fields.__3__mapInfo;
  v10->fields.mapInfo = _3__mapInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.mapInfo, (int64_t)_3__mapInfo, v2, v3, v6, v7, v8, v9);
  _3__blankEarthSpotMaster = this->fields.__3__blankEarthSpotMaster;
  v10->fields.blankEarthSpotMaster = _3__blankEarthSpotMaster;
  sub_1BCA784(
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_QuestTree__EnumerateBlankEarthSpotInfo_d__43_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  QuestTree__Init_d__15_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  QuestTree_o *_4__this; // x20
  long double v14; // q0
  TerminalPramsManager_c *v15; // x0
  _BOOL4 isInvisibleConnectAndLoad; // w21
  __int64 v17; // x1
  long double v18; // q0
  __int64 v19; // x0
  __int64 v20; // x0
  UnityEngine_Object_o *v21; // x21
  System_Collections_IEnumerator_o *v22; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool result; // w0
  __int64 v31; // x0
  __int64 v32; // x0
  UnityEngine_Object_o *v33; // x20
  struct System_Action_o *endCallback; // x8

  v3 = this;
  if ( (byte_4B133A7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v8, v9);
    this = (QuestTree__Init_d__15_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B133A7 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( !_1__state )
    {
      _4__this = v3->fields.__4__this;
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      if ( !_4__this->fields.isInit || QuestTree__IsNeedUpdateQuestTree(_4__this, 0LL) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        if ( !byte_4B13445 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
          byte_4B13445 = 1;
        }
        v15 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
          v15 = TerminalPramsManager_TypeInfo;
        }
        isInvisibleConnectAndLoad = v15->static_fields->isInvisibleConnectAndLoad;
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, !isInvisibleConnectAndLoad, 0LL);
          v19 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
          if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
            v19 = sub_1C1C6BC(v18);
          v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
          if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
            v20 = sub_1C1C6BC(v18);
          v21 = **(UnityEngine_Object_o ***)(v20 + 184);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
          if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
            goto LABEL_25;
          this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( this )
          {
            QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
            this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
            if ( this )
            {
              QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
LABEL_25:
              QuestTree__UpdateMonitoringValue(_4__this, 0LL);
              v22 = QuestTree__mfBaseTreeMakeWithOpenCheck(_4__this, v3->fields.endCallback, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v22;
              p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
              sub_1BCA784(p__2__current, (int64_t)v22, v24, v25, v26, v27, v28, v29);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
              return result;
            }
          }
        }
LABEL_40:
        sub_1BCAA3C(this, method);
      }
      v31 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1C1C6BC(v14);
      v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
      if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
        v32 = sub_1C1C6BC(v14);
      v33 = **(UnityEngine_Object_o ***)(v32 + 184);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
      {
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__Init((QuestAfterAction_o *)this, 0LL);
        this = (QuestTree__Init_d__15_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !this )
          goto LABEL_40;
        QuestAfterAction__CreateCommandBuf((QuestAfterAction_o *)this, 0, 0LL);
      }
      endCallback = v3->fields.endCallback;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_QuestTree__Init_d__15_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B131E1 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestTree___c_TypeInfo, v1, v2);
    byte_4B131E1 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestTree___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestTree___c_TypeInfo->static_fields->__9 = (struct QuestTree___c_o *)v4;
  sub_1BCA784((PartyOrganizationUtility_o *)QuestTree___c_TypeInfo->static_fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, 0LL);
  return info->fields.warId;
}


int32_t __fastcall QuestTree___c___GetUserReachableMapList_b__29_0(
        QuestTree___c_o *this,
        MapButtonEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
  }
  return klass_high - HIDWORD(this[3].klass);
}


int32_t __fastcall QuestTree___c___mfBaseTreeUpdateWithOpenCheck_b__42_6(
        QuestTree___c_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B131E2 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass29_0_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_List_int__Contains__,
                                                  x,
                                                  method);
    byte_4B131E2 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass29_0_o *)v4->fields.reachableMapIds) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.mapId,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.warId == this->fields.warId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__3(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.mapId == this->fields.mapId;
}


bool __fastcall QuestTree___c__DisplayClass42_1___mfBaseTreeUpdateWithOpenCheck_b__4(
        QuestTree___c__DisplayClass42_1_o *this,
        MapControl_MapInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B131E3 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_3_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                  x,
                                                  method);
    byte_4B131E3 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_3_o *)v4->fields.spotIdHashSet) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B131E4 & 1) == 0 )
  {
    this = (QuestTree___c__DisplayClass42_6_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_List_int__Contains__,
                                                  x,
                                                  method);
    byte_4B131E4 = 1;
  }
  if ( !x || (this = (QuestTree___c__DisplayClass42_6_o *)v4->fields.spotInfoList) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           x->fields.spotId,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__12(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.spotId == this->fields.nowSpotId;
}


bool __fastcall QuestTree___c__DisplayClass42_6___mfBaseTreeUpdateWithOpenCheck_b__13(
        QuestTree___c__DisplayClass42_6_o *this,
        MapControl_QuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
  int64_t v2; // x2
  __int64 v3; // x3
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v4; // x26
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  struct QuestTree_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  Il2CppObject *MasterData_object; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  Il2CppObject *v120; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  Il2CppObject *v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  Il2CppObject *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  Il2CppObject *v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  Il2CppObject *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  Il2CppObject *v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  Il2CppObject *v162; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  Il2CppObject *v169; // x0
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  Il2CppObject *v176; // x0
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  Il2CppObject *v183; // x0
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  Il2CppObject *v190; // x0
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x3
  System_Collections_Generic_Dictionary_int__object__o *v200; // x21
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  System_Object_array *Entitys_object__object; // x0
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  __int64 v214; // x1
  struct WarEntity_array *warList_5__16; // x9
  int32_t max_length; // w9
  int32_t v217; // w8
  int warIdx_5__18; // w8
  int32_t questIdx_5__25; // w8
  struct System_Action_o *endCallback; // x8
  struct WarEntity_array *v221; // x9
  WarEntity_o *v222; // x8
  int32_t id; // w22
  MapControl_WarInfo_o *v224; // x19
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *eventMaster_5__8; // x23
  __int64 nowTime_5__17; // x9
  DataMasterBase_TMaster__TEntity__PKType__o *eventDetailMaster_5__9; // x23
  EventStatusMaster_o *eventStatusMaster_5__10; // x23
  EventStatusEntity_o *NowEntity; // x0
  EventStatusQuestMaster_o *eventStatusQuestMaster_5__11; // x24
  EventStatusEntity_o *v237; // x23
  int64_t v238; // x23
  Il2CppObject *v239; // x8
  unsigned int _2__current; // w9
  __int64 v241; // x8
  _QWORD *v242; // x9
  __int64 _2__current_low; // x10
  __int64 v244; // x8
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v249; // x22
  unsigned int v250; // w27
  __int64 v251; // x8
  int32_t v252; // w24
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  System_Collections_Generic_List_object__o *allMapInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v261; // x10
  __int64 size; // x11
  MapControl_MapInfo_o *v263; // x23
  Il2CppClass **v264; // x0
  Il2CppObject *v265; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v266; // x25
  int v267; // w19
  unsigned int i; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v269; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v270; // x8
  SpotEntity_o **v271; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v272; // t1
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  __int64 v279; // x8
  _QWORD *v280; // x9
  __int64 v281; // x10
  __int64 v282; // x8
  System_Collections_Generic_List_object__o *allSpotInfoList; // x25
  Il2CppObject *v284; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v285; // x25
  int v286; // w19
  unsigned int v287; // w26
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c **v288; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v289; // x8
  SpotRoadEntity_o **v290; // x22
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_c *v291; // t1
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  __int64 v298; // x8
  _QWORD *v299; // x9
  __int64 v300; // x10
  __int64 v301; // x8
  Il2CppObject *v302; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v303; // x24
  int v304; // w19
  int v305; // w25
  __int64 v306; // x8
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  __int64 v313; // x8
  _QWORD *v314; // x9
  __int64 v315; // x10
  __int64 v316; // x8
  System_Collections_Generic_List_object__o *allWarInfoList; // x21
  System_Comparison_T__o *v318; // x22
  Il2CppObject *v319; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  __int64 v327; // x1
  __int64 v328; // x2
  __int64 v329; // x3
  QuestTree___c__DisplayClass41_0_o *v330; // x22
  struct QuestTree___c__DisplayClass41_0_o **p__8__1; // x21
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  int64_t v338; // x22
  __int64 v339; // x1
  __int64 v340; // x2
  __int64 v341; // x3
  MapControl_WarInfo_o *v342; // x23
  int64_t v343; // x2
  int32_t v344; // w3
  System_String_o *v345; // x4
  BattleSetupInfo_o *v346; // x5
  FollowerInfo_o *v347; // x6
  PartyListViewItem_o *v348; // x7
  __int64 v349; // x1
  __int64 v350; // x2
  __int64 v351; // x3
  MapControl_MapInfo_o *v352; // x22
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  __int64 v359; // x1
  __int64 v360; // x2
  __int64 v361; // x3
  MapControl_SpotInfo_o *v362; // x22
  int64_t v363; // x2
  int32_t v364; // w3
  System_String_o *v365; // x4
  BattleSetupInfo_o *v366; // x5
  FollowerInfo_o *v367; // x6
  PartyListViewItem_o *v368; // x7
  __int64 v369; // x1
  __int64 v370; // x2
  __int64 v371; // x3
  WarEntity_o *v372; // x22
  int64_t v373; // x2
  int32_t v374; // w3
  System_String_o *v375; // x4
  BattleSetupInfo_o *v376; // x5
  FollowerInfo_o *v377; // x6
  PartyListViewItem_o *v378; // x7
  Il2CppObject *v379; // x0
  int64_t v380; // x2
  int32_t v381; // w3
  System_String_o *v382; // x4
  BattleSetupInfo_o *v383; // x5
  FollowerInfo_o *v384; // x6
  PartyListViewItem_o *v385; // x7
  __int64 v386; // x1
  bool v387; // zf
  int v388; // w8
  PartyOrganizationUtility_o *p__2__current; // x26
  bool result; // w0
  QuestEntity_o *v391; // x23
  struct QuestMaster_o *_1__state; // x21
  UserQuestMaster_o *userQuestMaster_5__24; // x22
  int32_t QuestPhase; // w22
  __int64 v395; // x2
  __int64 v396; // x3
  struct QuestTree___c__DisplayClass41_0_o *_8__1; // x24
  System_Collections_Generic_List_object__o *v398; // x25
  System_Predicate_object__o *_9__2; // x26
  int64_t v400; // x2
  int32_t v401; // w3
  System_String_o *v402; // x4
  BattleSetupInfo_o *v403; // x5
  FollowerInfo_o *v404; // x6
  PartyListViewItem_o *v405; // x7
  Il2CppObject *v406; // x0
  int64_t v407; // x2
  int32_t v408; // w3
  System_String_o *v409; // x4
  BattleSetupInfo_o *v410; // x5
  FollowerInfo_o *v411; // x6
  PartyListViewItem_o *v412; // x7
  int32_t MapID; // w0
  MapControl_MapInfo_o *MapInfoByMapID; // x0
  int64_t v415; // x2
  int32_t v416; // w3
  System_String_o *v417; // x4
  BattleSetupInfo_o *v418; // x5
  FollowerInfo_o *v419; // x6
  PartyListViewItem_o *v420; // x7
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  int64_t v422; // x2
  int32_t v423; // w3
  System_String_o *v424; // x4
  BattleSetupInfo_o *v425; // x5
  FollowerInfo_o *v426; // x6
  PartyListViewItem_o *v427; // x7
  WarEntity_o *Mine; // x0
  int64_t v429; // x2
  int32_t v430; // w3
  System_String_o *v431; // x4
  BattleSetupInfo_o *v432; // x5
  FollowerInfo_o *v433; // x6
  PartyListViewItem_o *v434; // x7
  int v435; // w25
  int64_t v436; // x2
  int32_t v437; // w3
  System_String_o *v438; // x4
  BattleSetupInfo_o *v439; // x5
  FollowerInfo_o *v440; // x6
  PartyListViewItem_o *v441; // x7
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v442; // x24
  int64_t spotInfo_5__22; // x1
  int64_t v444; // x2
  int32_t v445; // w3
  System_String_o *v446; // x4
  BattleSetupInfo_o *v447; // x5
  FollowerInfo_o *v448; // x6
  PartyListViewItem_o *v449; // x7
  struct WarEntity_o *warEnt_5__23; // x8
  int v451; // w19
  struct MapControl_SpotInfo_o *v452; // x8
  struct MapControl_MapInfo_o *mapInfo_5__21; // x8
  struct MapControl_SpotInfo_o *v454; // x9
  struct MapControl_MapInfo_o *v455; // x9
  bool v456; // w8
  int64_t v457; // x2
  int32_t v458; // w3
  System_String_o *v459; // x4
  BattleSetupInfo_o *v460; // x5
  FollowerInfo_o *v461; // x6
  PartyListViewItem_o *v462; // x7
  Il2CppObject *v463; // x8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v464; // x21
  int v465; // w19
  int v466; // w22
  __int64 v467; // x8
  __int64 v468; // x8
  _QWORD *v469; // x9
  __int64 v470; // x10
  __int64 v471; // x8
  System_String_o *v472; // x4
  BattleSetupInfo_o *v473; // x5
  FollowerInfo_o *v474; // x6
  PartyListViewItem_o *v475; // x7
  System_Collections_Generic_List_object__o *allQuestInfoList; // x21
  System_Comparison_T__o *v477; // x22
  Il2CppObject *v478; // x23
  struct QuestTree___c_StaticFields *v479; // x0
  int64_t v480; // x2
  int32_t v481; // w3
  System_String_o *v482; // x4
  BattleSetupInfo_o *v483; // x5
  FollowerInfo_o *v484; // x6
  PartyListViewItem_o *v485; // x7
  int64_t v486; // x2
  int32_t v487; // w3
  System_String_o *v488; // x4
  BattleSetupInfo_o *v489; // x5
  FollowerInfo_o *v490; // x6
  PartyListViewItem_o *v491; // x7
  int64_t v492; // x2
  int32_t v493; // w3
  System_String_o *v494; // x4
  BattleSetupInfo_o *v495; // x5
  FollowerInfo_o *v496; // x6
  PartyListViewItem_o *v497; // x7
  int64_t v498; // x2
  int32_t v499; // w3
  System_String_o *v500; // x4
  BattleSetupInfo_o *v501; // x5
  FollowerInfo_o *v502; // x6
  PartyListViewItem_o *v503; // x7
  int64_t v504; // x2
  int32_t v505; // w3
  System_String_o *v506; // x4
  BattleSetupInfo_o *v507; // x5
  FollowerInfo_o *v508; // x6
  PartyListViewItem_o *v509; // x7
  int64_t v510; // x2
  int32_t v511; // w3
  System_String_o *v512; // x4
  BattleSetupInfo_o *v513; // x5
  FollowerInfo_o *v514; // x6
  PartyListViewItem_o *v515; // x7
  int64_t v516; // x2
  int32_t v517; // w3
  System_String_o *v518; // x4
  BattleSetupInfo_o *v519; // x5
  FollowerInfo_o *v520; // x6
  PartyListViewItem_o *v521; // x7
  int64_t v522; // x2
  int32_t v523; // w3
  System_String_o *v524; // x4
  BattleSetupInfo_o *v525; // x5
  FollowerInfo_o *v526; // x6
  PartyListViewItem_o *v527; // x7
  PartyOrganizationUtility_o *v528; // x26
  int v529; // w8
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v530; // [xsp+8h] [xbp-B8h]
  MapControl_WarInfo_o *v531; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v532; // [xsp+18h] [xbp-A8h]
  QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *v533; // [xsp+20h] [xbp-A0h]
  Il2CppObject *value; // [xsp+28h] [xbp-98h] BYREF
  UserQuestEntity_o *v535; // [xsp+30h] [xbp-90h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+38h] [xbp-88h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+40h] [xbp-80h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v539; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4B133A8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_MapControl_QuestInfo__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Comparison_MapControl_WarInfo__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventStatusMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapGimmickMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPickupMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotRoadMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v31, v32);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v33, v34);
    sub_1BCA7E0(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v35, v36);
    sub_1BCA7E0(&DataManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v39, v40);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v47, v48);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v49, v50);
    sub_1BCA7E0(&long___TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v67, v68);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v71, v72);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v73, v74);
    sub_1BCA7E0(&MapControl_MapInfo_TypeInfo, v75, v76);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v77, v78);
    sub_1BCA7E0(&OptionManager_TypeInfo, v79, v80);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotInfo__TypeInfo, v81, v82);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v83, v84);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v85, v86);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v87, v88);
    sub_1BCA7E0(&MapControl_SpotInfo_TypeInfo, v89, v90);
    sub_1BCA7E0(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, v91, v92);
    sub_1BCA7E0(&Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, v93, v94);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__, v95, v96);
    sub_1BCA7E0(&QuestTree___c__DisplayClass41_0_TypeInfo, v97, v98);
    sub_1BCA7E0(&QuestTree___c_TypeInfo, v99, v100);
    sub_1BCA7E0(&WarEntity_TypeInfo, v101, v102);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1BCA7E0(&MapControl_WarInfo_TypeInfo, v103, v104);
    byte_4B133A8 = 1;
  }
  v539 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v535 = 0LL;
  mapGimmickInfo = 0LL;
  value = 0LL;
  _4__this = v4->fields.__4__this;
  v533 = v4;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_264;
      QuestTree__InitInfo(_4__this, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v4->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._dataManager_5__2,
        (int64_t)Instance,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapMaster___);
      v4->fields._mapMaster_5__3 = (struct MapMaster_o *)MasterData_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._mapMaster_5__3,
        (int64_t)MasterData_object,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v120 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
      v4->fields._spotMaster_5__4 = (struct SpotMaster_o *)v120;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._spotMaster_5__4,
        (int64_t)v120,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v127 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v4->fields._blankEarthSpotMaster_5__5 = (struct BlankEarthSpotMaster_o *)v127;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._blankEarthSpotMaster_5__5,
        (int64_t)v127,
        v128,
        v129,
        v130,
        v131,
        v132,
        v133);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v134 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
      v4->fields._questMaster_5__6 = (struct QuestMaster_o *)v134;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._questMaster_5__6,
        (int64_t)v134,
        v135,
        v136,
        v137,
        v138,
        v139,
        v140);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v141 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v4->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)v141;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._questPhaseMaster_5__7,
        (int64_t)v141,
        v142,
        v143,
        v144,
        v145,
        v146,
        v147);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v148 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      v4->fields._eventMaster_5__8 = (struct EventMaster_o *)v148;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._eventMaster_5__8,
        (int64_t)v148,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v155 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v4->fields._eventDetailMaster_5__9 = (struct EventDetailMaster_o *)v155;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._eventDetailMaster_5__9,
        (int64_t)v155,
        v156,
        v157,
        v158,
        v159,
        v160,
        v161);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v162 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v4->fields._eventStatusMaster_5__10 = (struct EventStatusMaster_o *)v162;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._eventStatusMaster_5__10,
        (int64_t)v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v169 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v4->fields._eventStatusQuestMaster_5__11 = (struct EventStatusQuestMaster_o *)v169;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._eventStatusQuestMaster_5__11,
        (int64_t)v169,
        v170,
        v171,
        v172,
        v173,
        v174,
        v175);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v176 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v4->fields._spotRoadMaster_5__12 = (struct SpotRoadMaster_o *)v176;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._spotRoadMaster_5__12,
        (int64_t)v176,
        v177,
        v178,
        v179,
        v180,
        v181,
        v182);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v183 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v4->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)v183;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._mapGimmickMaster_5__13,
        (int64_t)v183,
        v184,
        v185,
        v186,
        v187,
        v188,
        v189);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      v190 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v4->fields._questPickupMaster_5__14 = (struct QuestPickupMaster_o *)v190;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._questPickupMaster_5__14,
        (int64_t)v190,
        v191,
        v192,
        v193,
        v194,
        v195,
        v196);
      v200 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                       System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                       v197,
                                                                       v198,
                                                                       v199);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v200,
        (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v4->fields._eventStatusQuestMismatchDictionary_5__15 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v200;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._eventStatusQuestMismatchDictionary_5__15,
        (int64_t)v200,
        v201,
        v202,
        v203,
        v204,
        v205,
        v206);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
      if ( !this )
        goto LABEL_264;
      Entitys_object__object = DataManager__getEntitys_object__object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2F12EF0 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v4->fields._warList_5__16 = (struct WarEntity_array *)Entitys_object__object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._warList_5__16,
        (int64_t)Entitys_object__object,
        v208,
        v209,
        v210,
        v211,
        v212,
        v213);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v214);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__getTime(0LL);
      warList_5__16 = v4->fields._warList_5__16;
      v4->fields._nowTime_5__17 = (int64_t)this;
      v4->fields._warIdx_5__18 = 0;
      if ( !warList_5__16 )
        goto LABEL_264;
      max_length = warList_5__16->max_length;
      v217 = 0;
      v4->fields._warCount_5__19 = max_length;
      break;
    case 1:
      warIdx_5__18 = v4->fields._warIdx_5__18;
      v4->fields.__1__state = -1;
      goto LABEL_122;
    case 2:
      questIdx_5__25 = v4->fields._questIdx_5__25;
      v4->fields.__1__state = -1;
      goto LABEL_248;
    case 3:
      endCallback = v4->fields.endCallback;
      v4->fields.__1__state = -1;
      if ( !endCallback )
        goto LABEL_264;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v217 < max_length )
  {
    v221 = v4->fields._warList_5__16;
    if ( !v221 )
      goto LABEL_264;
    if ( v217 >= v221->max_length )
      goto LABEL_144;
    v222 = v221->m_Items[v217];
    if ( !v222 )
      goto LABEL_264;
    if ( !_4__this )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.mapControlRootInfo;
    if ( !this )
      goto LABEL_264;
    id = v222->fields.id;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_RootInfo__AddChild(
                                                               (MapControl_RootInfo_o *)this,
                                                               id,
                                                               v4->fields._nowTime_5__17,
                                                               0LL);
    if ( !this )
      goto LABEL_264;
    v224 = (MapControl_WarInfo_o *)this;
    if ( MapControl_WarInfo__IsEvent((MapControl_WarInfo_o *)this, 0LL) )
    {
      eventMaster_5__8 = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields._eventMaster_5__8;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v224, 0LL);
      if ( !eventMaster_5__8 )
        goto LABEL_264;
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 eventMaster_5__8,
                                                                 &entity,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_264;
        nowTime_5__17 = v4->fields._nowTime_5__17;
        if ( nowTime_5__17 >= (__int64)entity[5].klass && nowTime_5__17 < (__int64)entity[6].monitor )
          MapControl_WarInfo__SetStatusCheckFlag(v224, 1, 0, 0LL);
        eventDetailMaster_5__9 = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields._eventDetailMaster_5__9;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v224, 0LL);
        if ( !eventDetailMaster_5__9 )
          goto LABEL_264;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               eventDetailMaster_5__9,
               &v539,
               (int32_t)this,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v539;
          if ( !v539 )
            goto LABEL_264;
          if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v539, 0x2000000LL, 0LL) )
          {
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)entity;
            if ( !entity )
              goto LABEL_264;
            if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v4->fields._nowTime_5__17, 0LL) )
            {
              eventStatusMaster_5__10 = v4->fields._eventStatusMaster_5__10;
              this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v224, 0LL);
              if ( !eventStatusMaster_5__10 )
                goto LABEL_264;
              NowEntity = EventStatusMaster__getNowEntity(eventStatusMaster_5__10, (int32_t)this, 0LL);
              if ( NowEntity )
              {
                eventStatusQuestMaster_5__11 = v4->fields._eventStatusQuestMaster_5__11;
                v237 = NowEntity;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetEventId(v224, 0LL);
                if ( !eventStatusQuestMaster_5__11 )
                  goto LABEL_264;
                this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)EventStatusQuestMaster__getMismatchQuestList(
                                                                           eventStatusQuestMaster_5__11,
                                                                           (int32_t)this,
                                                                           v237->fields.statusId,
                                                                           0LL);
                if ( !v4->fields._eventStatusQuestMismatchDictionary_5__15 )
                  goto LABEL_264;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)v4->fields._eventStatusQuestMismatchDictionary_5__15,
                  id,
                  (Il2CppObject *)this,
                  (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
              }
            }
          }
        }
        v238 = v4->fields._nowTime_5__17;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)sub_1BCA888(long___TypeInfo, 3LL);
        v239 = entity;
        if ( !entity || !this )
          goto LABEL_264;
        _2__current = (unsigned int)this->fields.__2__current;
        if ( !_2__current )
          goto LABEL_144;
        this->fields.__4__this = (struct QuestTree_o *)entity[5].klass;
        if ( _2__current == 1 )
          goto LABEL_144;
        this->fields.__8__1 = (struct QuestTree___c__DisplayClass41_0_o *)v239[5].monitor;
        if ( _2__current <= 2 )
          goto LABEL_144;
        this->fields.endCallback = (struct System_Action_o *)v239[6].monitor;
        QuestTree__UpdateForceUpdateTime(_4__this, v238, (System_Int64_array *)this, 0LL);
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allWarInfoList;
    if ( !this )
      goto LABEL_264;
    v241 = *(_QWORD *)&this->fields.__1__state;
    v242 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v241 )
      goto LABEL_264;
    _2__current_low = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)_2__current_low >= *(_DWORD *)(v241 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v224,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
    }
    else
    {
      v244 = v241 + 8 * _2__current_low;
      LODWORD(this->fields.__2__current) = _2__current_low + 1;
      *(_QWORD *)(v244 + 32) = v224;
      sub_1BCA784((PartyOrganizationUtility_o *)(v244 + 32), (int64_t)v224, v225, v226, v227, v228, v229, v230);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._mapMaster_5__3;
    if ( !this )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapMaster__getList((MapMaster_o *)this, id, 0LL);
    if ( !this )
      goto LABEL_264;
    v249 = this;
    v532 = this->fields.__2__current;
    if ( (int)v532 >= 1 )
    {
      if ( !(_DWORD)v532 )
        goto LABEL_144;
      v250 = 0;
      v530 = this;
      v531 = v224;
      while ( 1 )
      {
        v251 = *((_QWORD *)&v249->fields.__4__this + (int)v250);
        if ( !v251 )
          goto LABEL_264;
        v252 = *(_DWORD *)(v251 + 16);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__AddChild(v224, v252, 0LL);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !allMapInfoList )
          goto LABEL_264;
        items = allMapInfoList->fields._items;
        v261 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++allMapInfoList->fields._version;
        if ( !items )
          goto LABEL_264;
        size = allMapInfoList->fields._size;
        v263 = (MapControl_MapInfo_o *)this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            allMapInfoList,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
        }
        else
        {
          v264 = &items->obj.klass + size;
          allMapInfoList->fields._size = size + 1;
          v264[4] = (Il2CppClass *)v263;
          sub_1BCA784((PartyOrganizationUtility_o *)(v264 + 4), (int64_t)v263, v253, v254, v255, v256, v257, v258);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._spotMaster_5__4;
        if ( !this )
          goto LABEL_264;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotMaster__getList((SpotMaster_o *)this, v252, 0LL);
        if ( !this )
          goto LABEL_264;
        v265 = this->fields.__2__current;
        v266 = this;
        v267 = (_DWORD)v265 - 1;
        if ( (int)v265 >= 1 )
          break;
LABEL_87:
        allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree__EnumerateBlankEarthSpotInfo(
                                                                   _4__this,
                                                                   v263,
                                                                   v533->fields._blankEarthSpotMaster_5__5,
                                                                   0LL);
        if ( !allSpotInfoList )
          goto LABEL_264;
        System_Collections_Generic_List_object___AddRange(
          allSpotInfoList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v533->fields._spotRoadMaster_5__12;
        if ( !this )
          goto LABEL_264;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SpotRoadMaster__getList(
                                                                   (SpotRoadMaster_o *)this,
                                                                   v252,
                                                                   0LL);
        if ( !this )
          goto LABEL_264;
        v284 = this->fields.__2__current;
        v285 = this;
        v286 = (_DWORD)v284 - 1;
        if ( (int)v284 >= 1 )
        {
          v287 = 0;
          while ( 1 )
          {
            v288 = &v285->klass + (int)v287;
            v291 = v288[4];
            v290 = (SpotRoadEntity_o **)(v288 + 4);
            v289 = v291;
            if ( !v291 || !v263 )
              goto LABEL_264;
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddSpotRoad(
                                                                       v263,
                                                                       (int32_t)v289->_1.name,
                                                                       0LL);
            spotRoadInfo = (MapControl_SpotRoadInfo_o *)this;
            if ( v287 >= LODWORD(v285->fields.__2__current) )
              goto LABEL_144;
            QuestTree__SetupSpotRoadInfo(_4__this, *v290, &spotRoadInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotRoadInfoList;
            if ( !this )
              goto LABEL_264;
            method = (const MethodInfo *)spotRoadInfo;
            v298 = *(_QWORD *)&this->fields.__1__state;
            v299 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v298 )
              goto LABEL_264;
            v300 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v300 >= *(_DWORD *)(v298 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
            }
            else
            {
              v301 = v298 + 8 * v300;
              LODWORD(this->fields.__2__current) = v300 + 1;
              *(_QWORD *)(v301 + 32) = method;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v301 + 32),
                (int64_t)method,
                v292,
                v293,
                v294,
                v295,
                v296,
                v297);
            }
            if ( v286 == v287 )
              break;
            if ( ++v287 >= LODWORD(v285->fields.__2__current) )
              goto LABEL_144;
          }
        }
        v4 = v533;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v533->fields._mapGimmickMaster_5__13;
        if ( !this )
          goto LABEL_264;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapGimmickMaster__getList(
                                                                   (MapGimmickMaster_o *)this,
                                                                   v252,
                                                                   0LL);
        if ( !this )
          goto LABEL_264;
        v302 = this->fields.__2__current;
        v303 = this;
        v304 = (_DWORD)v302 - 1;
        if ( (int)v302 >= 1 )
        {
          v305 = 0;
          while ( 1 )
          {
            v306 = *((_QWORD *)&v303->fields.__4__this + v305);
            if ( !v306 )
              goto LABEL_264;
            if ( !v263 )
              goto LABEL_264;
            mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v263, *(_DWORD *)(v306 + 16), 0LL);
            QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
            this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allMapGimmickInfoList;
            if ( !this )
              goto LABEL_264;
            method = (const MethodInfo *)mapGimmickInfo;
            v313 = *(_QWORD *)&this->fields.__1__state;
            v314 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( !v313 )
              goto LABEL_264;
            v315 = SLODWORD(this->fields.__2__current);
            if ( (unsigned int)v315 >= *(_DWORD *)(v313 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)method,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v314[4] + 192LL) + 112LL));
            }
            else
            {
              v316 = v313 + 8 * v315;
              LODWORD(this->fields.__2__current) = v315 + 1;
              *(_QWORD *)(v316 + 32) = method;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)(v316 + 32),
                (int64_t)method,
                v307,
                v308,
                v309,
                v310,
                v311,
                v312);
            }
            if ( v304 == v305 )
              break;
            if ( (unsigned int)++v305 >= LODWORD(v303->fields.__2__current) )
              goto LABEL_144;
          }
        }
        v224 = v531;
        v249 = v530;
        if ( ++v250 == (_DWORD)v532 )
          goto LABEL_120;
        if ( v250 >= LODWORD(v530->fields.__2__current) )
          goto LABEL_144;
      }
      for ( i = 0; i < LODWORD(v266->fields.__2__current); ++i )
      {
        v269 = &v266->klass + (int)i;
        v272 = v269[4];
        v271 = (SpotEntity_o **)(v269 + 4);
        v270 = v272;
        if ( !v272 || !v263 )
          goto LABEL_264;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__AddChild(
                                                                   v263,
                                                                   (int32_t)v270->_1.name,
                                                                   0LL);
        spotInfo = (MapControl_SpotInfo_o *)this;
        if ( i >= LODWORD(v266->fields.__2__current) )
          break;
        QuestTree__SetupSpotInfo(_4__this, *v271, &spotInfo, 0LL);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allSpotInfoList;
        if ( !this )
          goto LABEL_264;
        method = (const MethodInfo *)spotInfo;
        v279 = *(_QWORD *)&this->fields.__1__state;
        v280 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v279 )
          goto LABEL_264;
        v281 = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)v281 >= *(_DWORD *)(v279 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)method,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
        }
        else
        {
          v282 = v279 + 8 * v281;
          LODWORD(this->fields.__2__current) = v281 + 1;
          *(_QWORD *)(v282 + 32) = method;
          sub_1BCA784((PartyOrganizationUtility_o *)(v282 + 32), (int64_t)method, v273, v274, v275, v276, v277, v278);
        }
        if ( v267 == i )
          goto LABEL_87;
      }
LABEL_144:
      sub_1BCAA44(this, method);
    }
LABEL_120:
    warIdx_5__18 = v4->fields._warIdx_5__18;
    if ( warIdx_5__18 >= 1 && !(warIdx_5__18 % 0x64u) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v2, v3, v245, v246, v247, v248);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_122:
    max_length = v4->fields._warCount_5__19;
    v217 = warIdx_5__18 + 1;
    v4->fields._warIdx_5__18 = v217;
  }
  if ( !_4__this )
    goto LABEL_264;
  allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  }
  v318 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 24LL);
  if ( !v318 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v319 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v318 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MapControl_WarInfo__TypeInfo, method, v2, v3);
    System_Comparison_object____ctor(v318, v319, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_0__, 0LL);
    static_fields = QuestTree___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Comparison_MapControl_WarInfo__o *)v318;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
      (int64_t)v318,
      v321,
      v322,
      v323,
      v324,
      v325,
      v326);
  }
  if ( !allWarInfoList )
    goto LABEL_264;
  System_Collections_Generic_List_object___Sort_56244000(
    allWarInfoList,
    v318,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
  v330 = (QuestTree___c__DisplayClass41_0_o *)sub_1BCAA2C(QuestTree___c__DisplayClass41_0_TypeInfo, v327, v328, v329);
  QuestTree___c__DisplayClass41_0___ctor(v330, 0LL);
  v4->fields.__8__1 = v330;
  p__8__1 = &v4->fields.__8__1;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v330, v332, v333, v334, v335, v336, v337);
  v338 = v4->fields._nowTime_5__17;
  v342 = (MapControl_WarInfo_o *)sub_1BCAA2C(MapControl_WarInfo_TypeInfo, v339, v340, v341);
  MapControl_WarInfo___ctor(v342, v338, 0LL);
  v4->fields._warInfo_5__20 = v342;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields._warInfo_5__20,
    (int64_t)v342,
    v343,
    v344,
    v345,
    v346,
    v347,
    v348);
  v352 = (MapControl_MapInfo_o *)sub_1BCAA2C(MapControl_MapInfo_TypeInfo, v349, v350, v351);
  MapControl_MapInfo___ctor(v352, 0LL);
  v4->fields._mapInfo_5__21 = v352;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields._mapInfo_5__21,
    (int64_t)v352,
    v353,
    v354,
    v355,
    v356,
    v357,
    v358);
  v362 = (MapControl_SpotInfo_o *)sub_1BCAA2C(MapControl_SpotInfo_TypeInfo, v359, v360, v361);
  MapControl_SpotInfo___ctor(v362, 0LL);
  v4->fields._spotInfo_5__22 = v362;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields._spotInfo_5__22,
    (int64_t)v362,
    v363,
    v364,
    v365,
    v366,
    v367,
    v368);
  v372 = (WarEntity_o *)sub_1BCAA2C(WarEntity_TypeInfo, v369, v370, v371);
  WarEntity___ctor(v372, 0LL);
  v4->fields._warEnt_5__23 = v372;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields._warEnt_5__23,
    (int64_t)v372,
    v373,
    v374,
    v375,
    v376,
    v377,
    v378);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._dataManager_5__2;
  if ( !this )
    goto LABEL_264;
  v379 = DataManager__GetMasterData_object_(
           (DataManager_o *)this,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v4->fields._userQuestMaster_5__24 = (struct UserQuestMaster_o *)v379;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields._userQuestMaster_5__24,
    (int64_t)v379,
    v380,
    v381,
    v382,
    v383,
    v384,
    v385);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v386);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !*p__8__1 )
    goto LABEL_264;
  (*p__8__1)->fields.spotInfoNow = -1;
  *(_QWORD *)&v4->fields._mapInfoNow_5__27 = -1LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  v387 = !OptionManager__isSavedMemoryMode(0LL);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._questMaster_5__6;
  v388 = v387 ? 5000 : 500;
  v4->fields._breakInterval_5__29 = v388;
  v4->fields._questIdx_5__25 = 0;
  if ( !this )
    goto LABEL_264;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__Count((QuestMaster_o *)this, 0LL);
  method = (const MethodInfo *)(unsigned int)v4->fields._questIdx_5__25;
  v4->fields._questCount_5__26 = (int)this;
  while ( (int)method < (int)this )
  {
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._questMaster_5__6;
    if ( !this )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestMaster__GetQuestEntitybyIdx(
                                                               (QuestMaster_o *)this,
                                                               (int32_t)method,
                                                               0LL);
    if ( !this )
      goto LABEL_264;
    v391 = (QuestEntity_o *)this;
    _1__state = (struct QuestMaster_o *)this->fields.__1__state;
    v535 = 0LL;
    userQuestMaster_5__24 = v4->fields._userQuestMaster_5__24;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)NetworkManager__get_UserId(0LL);
    if ( !userQuestMaster_5__24 )
      goto LABEL_264;
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__24, &v535, (int64_t)this, (int32_t)_1__state, 0LL) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v535;
      if ( !v535 )
        goto LABEL_264;
      QuestPhase = UserQuestEntity__getQuestPhase(v535, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__getSpotId_40196836(v391, QuestPhase + 1, 0LL);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_264;
    if ( _8__1->fields.spotInfoNow != (_DWORD)this )
    {
      _8__1->fields.spotInfoNow = (int)this;
      if ( !_4__this )
        goto LABEL_264;
      v398 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__2 = (System_Predicate_object__o *)_8__1->fields.__9__2;
      if ( !_9__2 )
      {
        _9__2 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                method,
                                                v395,
                                                v396);
        System_Predicate_object____ctor(
          _9__2,
          (Il2CppObject *)_8__1,
          Method_QuestTree___c__DisplayClass41_0__mfBaseTreeMakeWithOpenCheck_b__2__,
          0LL);
        _8__1->fields.__9__2 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__2;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_8__1->fields.__9__2,
          (int64_t)_9__2,
          v400,
          v401,
          v402,
          v403,
          v404,
          v405);
      }
      if ( !v398 )
        goto LABEL_264;
      v406 = System_Collections_Generic_List_object___Find(
               v398,
               (System_Predicate_T__o *)_9__2,
               (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v4 = v533;
      v533->fields._spotInfo_5__22 = (struct MapControl_SpotInfo_o *)v406;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v533->fields._spotInfo_5__22,
        (int64_t)v406,
        v407,
        v408,
        v409,
        v410,
        v411,
        v412);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v533->fields._spotInfo_5__22;
      if ( !this )
        goto LABEL_264;
      MapID = MapControl_SpotInfo__GetMapID((MapControl_SpotInfo_o *)this, 0LL);
      if ( v533->fields._mapInfoNow_5__27 != MapID )
      {
        v533->fields._mapInfoNow_5__27 = MapID;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, MapID, 0LL);
        v533->fields._mapInfo_5__21 = MapInfoByMapID;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v533->fields._mapInfo_5__21,
          (int64_t)MapInfoByMapID,
          v415,
          v416,
          v417,
          v418,
          v419,
          v420);
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v533->fields._mapInfo_5__21;
        if ( !this )
          goto LABEL_264;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_MapInfo__GetMine(
                                                                   (MapControl_MapInfo_o *)this,
                                                                   0LL);
        if ( !this )
          goto LABEL_264;
        method = (const MethodInfo *)*((unsigned int *)&this->fields.__1__state + 1);
        if ( v533->fields._warInfoNow_5__28 != (_DWORD)method )
        {
          v533->fields._warInfoNow_5__28 = (int)method;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, (int32_t)method, 0LL);
          v533->fields._warInfo_5__20 = WarInfoByWarID;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v533->fields._warInfo_5__20,
            (int64_t)WarInfoByWarID,
            v422,
            v423,
            v424,
            v425,
            v426,
            v427);
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v533->fields._warInfo_5__20;
          if ( !this )
            goto LABEL_264;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
          v533->fields._warEnt_5__23 = Mine;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v533->fields._warEnt_5__23,
            (int64_t)Mine,
            v429,
            v430,
            v431,
            v432,
            v433,
            v434);
        }
      }
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_264;
    if ( !v535 )
      goto LABEL_185;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v535;
    if ( !v535 )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v535, 8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_173;
    if ( !v535 )
      goto LABEL_264;
    if ( v535->fields.challengeNum >= 1 )
    {
LABEL_173:
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_264;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 4, 0, 0LL);
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v535;
    if ( !v535 )
      goto LABEL_264;
    if ( UserQuestEntity__getClearNum(v535, 0LL) < 1 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_264;
LABEL_185:
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 2, 0, 0LL);
      v435 = 0;
      goto LABEL_186;
    }
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v535 )
      goto LABEL_264;
    if ( !this )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)clsQuestCheck__IsQuestClear(
                                                               (clsQuestCheck_o *)this,
                                                               v535->fields.questId,
                                                               0,
                                                               0LL);
    if ( !v4->fields._warInfo_5__20 )
      goto LABEL_264;
    v435 = (int)this;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_WarInfo__GetMine(v4->fields._warInfo_5__20, 0LL);
    if ( !this )
      goto LABEL_264;
    if ( HIDWORD(this->fields._questPhaseMaster_5__7) == (_DWORD)_1__state )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._warInfo_5__20;
      if ( !this )
        goto LABEL_264;
      MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 8, 1, 0LL);
    }
LABEL_186:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._spotInfo_5__22;
    if ( !this )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_SpotInfo__AddChild(
                                                               (MapControl_SpotInfo_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    method = (const MethodInfo *)v4->fields._warInfo_5__20;
    if ( !method )
      goto LABEL_264;
    v442 = this;
    if ( !this )
      goto LABEL_264;
    LODWORD(this->fields._mapMaster_5__3) = HIDWORD(method->invoker_method);
    this->fields._eventMaster_5__8 = (struct EventMaster_o *)method;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._eventMaster_5__8,
      (int64_t)method,
      v436,
      v437,
      v438,
      v439,
      v440,
      v441);
    spotInfo_5__22 = (int64_t)v4->fields._spotInfo_5__22;
    v442->fields._questPhaseMaster_5__7 = (struct QuestPhaseMaster_o *)spotInfo_5__22;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v442->fields._questPhaseMaster_5__7,
      spotInfo_5__22,
      v444,
      v445,
      v446,
      v447,
      v448,
      v449);
    if ( !_4__this )
      goto LABEL_264;
    v442->fields._mapGimmickMaster_5__13 = (struct MapGimmickMaster_o *)QuestTree__GetEndTime(
                                                                          _4__this,
                                                                          (MapControl_QuestInfo_o *)v442,
                                                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._warEnt_5__23;
    if ( !this )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__IsStartTypeQuest((WarEntity_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._warEnt_5__23;
      if ( !this )
        goto LABEL_264;
      if ( this->fields._questMaster_5__6 == _1__state )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)WarEntity__HasFlag((WarEntity_o *)this, 0x8000, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_200;
      }
    }
    warEnt_5__23 = v4->fields._warEnt_5__23;
    if ( !warEnt_5__23 )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._eventStatusQuestMismatchDictionary_5__15;
    if ( !this )
      goto LABEL_264;
    if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           warEnt_5__23->fields.id,
           &value,
           (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)value;
      if ( !value )
        goto LABEL_264;
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             (int32_t)_1__state,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_200:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v442, 0, 0, 0, 0LL, 0, 0LL);
        HIDWORD(v442->fields.__4__this) = 0;
LABEL_204:
        v451 = 1;
        goto LABEL_205;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v391, (MapControl_QuestInfo_o *)v442, v4->fields._warInfoNow_5__28, 0LL) != 1 )
      goto LABEL_204;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._warInfo_5__20;
    if ( !this )
      goto LABEL_264;
    MapControl_WarInfo__SetStatusCheckFlag((MapControl_WarInfo_o *)this, 1, 0, 0LL);
    v451 = 0;
LABEL_205:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v442, 0LL) )
    {
      if ( ((v435 | v451) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v442, 0LL) != 8 )
        {
          this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._spotInfo_5__22;
          if ( !this )
            goto LABEL_264;
          MapControl_SpotInfo__AddQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
        }
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_264;
        MapControl_SpotInfo__AddAvailableQuestId((MapControl_SpotInfo_o *)this, v442->fields.__1__state, 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v442, 0LL) == 1 )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__GetMine(
                                                                   (MapControl_QuestInfo_o *)v442,
                                                                   0LL);
        if ( !this )
          goto LABEL_264;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestEntity__HasFlag(
                                                                   (QuestEntity_o *)this,
                                                                   0x400000000000LL,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v452 = v4->fields._spotInfo_5__22;
          if ( !v452 )
            goto LABEL_264;
          v452->fields._IsNext_k__BackingField = 1;
        }
        mapInfo_5__21 = v4->fields._mapInfo_5__21;
        if ( !mapInfo_5__21 )
          goto LABEL_264;
        mapInfo_5__21->fields._IsNext_k__BackingField = 1;
      }
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__IsDisplayQuestNextIcon(
                                                                 (MapControl_QuestInfo_o *)v442,
                                                                 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v454 = v4->fields._spotInfo_5__22;
        if ( !v454 )
          goto LABEL_264;
        v454->fields._IsNext_k__BackingField = 1;
        v455 = v4->fields._mapInfo_5__21;
        if ( !v455 )
          goto LABEL_264;
        v455->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v391, 0x8000000000LL, 0LL) )
      {
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._spotInfo_5__22;
        if ( !this )
          goto LABEL_264;
        MapControl_SpotInfo__AddFreeQuestCount((MapControl_SpotInfo_o *)this, 1, 0LL);
      }
    }
    if ( v535 )
    {
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)UserQuestEntity__HasStatus(v535, 8, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v535 )
          goto LABEL_264;
        v456 = v535->fields.challengeNum == 0;
      }
      else
      {
        v456 = 0;
      }
    }
    else
    {
      v456 = 1;
    }
    LOBYTE(v442->fields.__8__1) = v456;
    HIDWORD(v442->fields.__8__1) = QuestPhase;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._questPickupMaster_5__14;
    if ( !this )
      goto LABEL_264;
    LODWORD(v442->fields.endCallback) = QuestPickupMaster__GetPriority(
                                          (QuestPickupMaster_o *)this,
                                          (int32_t)_1__state,
                                          0LL);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)v4->fields._questPhaseMaster_5__7;
    if ( !this )
      goto LABEL_264;
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestPhaseMaster__getList(
                                                               (QuestPhaseMaster_o *)this,
                                                               (int32_t)_1__state,
                                                               0LL);
    if ( !this )
      goto LABEL_264;
    v463 = this->fields.__2__current;
    v464 = this;
    v465 = (_DWORD)v463 - 1;
    if ( (int)v463 >= 1 )
    {
      v466 = 0;
      while ( 1 )
      {
        v467 = *((_QWORD *)&v464->fields.__4__this + v466);
        if ( !v467 )
          break;
        this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)MapControl_QuestInfo__AddChild(
                                                                   (MapControl_QuestInfo_o *)v442,
                                                                   *(_DWORD *)(v467 + 16),
                                                                   *(_DWORD *)(v467 + 20),
                                                                   0LL);
        if ( v465 == v466 )
          goto LABEL_241;
        if ( (unsigned int)++v466 >= LODWORD(v464->fields.__2__current) )
          goto LABEL_144;
      }
LABEL_264:
      sub_1BCAA3C(this, method);
    }
LABEL_241:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)_4__this->fields.allQuestInfoList;
    if ( !this )
      goto LABEL_264;
    v468 = *(_QWORD *)&this->fields.__1__state;
    v469 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++HIDWORD(this->fields.__2__current);
    if ( !v468 )
      goto LABEL_264;
    v470 = SLODWORD(this->fields.__2__current);
    if ( (unsigned int)v470 >= *(_DWORD *)(v468 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v442,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v469[4] + 192LL) + 112LL));
    }
    else
    {
      v471 = v468 + 8 * v470;
      LODWORD(this->fields.__2__current) = v470 + 1;
      *(_QWORD *)(v471 + 32) = v442;
      sub_1BCA784((PartyOrganizationUtility_o *)(v471 + 32), (int64_t)v442, v457, v458, v459, v460, v461, v462);
    }
    questIdx_5__25 = v4->fields._questIdx_5__25;
    if ( questIdx_5__25 && !(questIdx_5__25 % v4->fields._breakInterval_5__29) )
    {
      v4->fields.__2__current = 0LL;
      v528 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v528, 0LL, v2, v3, v472, v473, v474, v475);
      v529 = 2;
      goto LABEL_263;
    }
LABEL_248:
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)(unsigned int)v4->fields._questCount_5__26;
    method = (const MethodInfo *)(unsigned int)(questIdx_5__25 + 1);
    v4->fields._questIdx_5__25 = (int)method;
  }
  if ( !_4__this )
    goto LABEL_264;
  allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method);
    this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
  }
  v477 = *(System_Comparison_T__o **)(*(_QWORD *)&this->fields._warIdx_5__18 + 32LL);
  if ( !v477 )
  {
    if ( !LODWORD(this->fields._userQuestMaster_5__24) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)QuestTree___c_TypeInfo;
    }
    v478 = **(Il2CppObject ***)&this->fields._warIdx_5__18;
    v477 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MapControl_QuestInfo__TypeInfo, method, v2, v3);
    System_Comparison_object____ctor(v477, v478, Method_QuestTree___c__mfBaseTreeMakeWithOpenCheck_b__41_1__, 0LL);
    v479 = QuestTree___c_TypeInfo->static_fields;
    v479->__9__41_1 = (struct System_Comparison_MapControl_QuestInfo__o *)v477;
    sub_1BCA784((PartyOrganizationUtility_o *)&v479->__9__41_1, (int64_t)v477, v480, v481, v482, v483, v484, v485);
  }
  if ( !allQuestInfoList )
    goto LABEL_264;
  System_Collections_Generic_List_object___Sort_56244000(
    allQuestInfoList,
    v477,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v4->fields.__8__1 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, 0LL, v486, v487, v488, v489, v490, v491);
  v4->fields._warInfo_5__20 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._warInfo_5__20, 0LL, v492, v493, v494, v495, v496, v497);
  v4->fields._mapInfo_5__21 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._mapInfo_5__21, 0LL, v498, v499, v500, v501, v502, v503);
  v4->fields._spotInfo_5__22 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._spotInfo_5__22, 0LL, v504, v505, v506, v507, v508, v509);
  v4->fields._warEnt_5__23 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._warEnt_5__23, 0LL, v510, v511, v512, v513, v514, v515);
  v4->fields._userQuestMaster_5__24 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._userQuestMaster_5__24, 0LL, v516, v517, v518, v519, v520, v521);
  this = (QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_264;
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  _4__this->fields.isInit = 1;
  if ( !v4->fields.endCallback )
    return 0;
  v4->fields.__2__current = 0LL;
  v528 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(v528, 0LL, v522, v523, v524, v525, v526, v527);
  v529 = 3;
LABEL_263:
  *(_DWORD *)&v528[-1].fields._IsQuestStartMenuMode_k__BackingField = v529;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_QuestTree__mfBaseTreeMakeWithOpenCheck_d__41_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v8; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x1
  __int64 v174; // x2
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x1
  __int64 v180; // x2
  __int64 v181; // x1
  __int64 v182; // x2
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x1
  __int64 v188; // x2
  __int64 v189; // x1
  __int64 v190; // x2
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x1
  __int64 v194; // x2
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x1
  __int64 v202; // x2
  __int64 v203; // x1
  __int64 v204; // x2
  __int64 v205; // x1
  __int64 v206; // x2
  __int64 v207; // x1
  __int64 v208; // x2
  __int64 v209; // x1
  __int64 v210; // x2
  __int64 v211; // x1
  __int64 v212; // x2
  __int64 v213; // x1
  __int64 v214; // x2
  QuestTree_o *_4__this; // x19
  QuestTree___c__DisplayClass42_0_o *v216; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v217; // x0
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  __int64 v224; // x0
  __int64 v225; // x1
  struct QuestTree___c__DisplayClass42_0_o *_8__2; // x9
  Il2CppObject *Instance; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v228; // x0
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7
  __int64 v235; // x1
  DataManager_o *dataManager_5__2; // x0
  __int64 v237; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v239; // x0
  Il2CppObject *v240; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v241; // x0
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  __int64 v248; // x1
  DataManager_o *v249; // x0
  Il2CppObject *v250; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v251; // x0
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  __int64 v258; // x1
  DataManager_o *v259; // x0
  Il2CppObject *v260; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v261; // x0
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  __int64 v268; // x1
  DataManager_o *v269; // x0
  Il2CppObject *v270; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v271; // x0
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  __int64 v278; // x1
  DataManager_o *v279; // x0
  __int64 v280; // x1
  Il2CppObject *v281; // x24
  DataManager_o *v282; // x0
  __int64 v283; // x1
  Il2CppObject *v284; // x23
  DataManager_o *v285; // x0
  __int64 v286; // x1
  Il2CppObject *v287; // x22
  DataManager_o *v288; // x0
  __int64 v289; // x1
  Il2CppObject *v290; // x21
  DataManager_o *v291; // x0
  Il2CppObject *v292; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v293; // x0
  int64_t v294; // x2
  int32_t v295; // w3
  System_String_o *v296; // x4
  BattleSetupInfo_o *v297; // x5
  FollowerInfo_o *v298; // x6
  PartyListViewItem_o *v299; // x7
  __int64 v300; // x1
  DataManager_o *v301; // x0
  Il2CppObject *v302; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v303; // x0
  int64_t v304; // x2
  int32_t v305; // w3
  System_String_o *v306; // x4
  BattleSetupInfo_o *v307; // x5
  FollowerInfo_o *v308; // x6
  PartyListViewItem_o *v309; // x7
  __int64 v310; // x1
  DataManager_o *v311; // x0
  Il2CppObject *v312; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v313; // x0
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  __int64 v320; // x1
  __int64 v321; // x2
  __int64 v322; // x3
  System_Collections_Generic_Dictionary_int__object__o *v323; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v324; // x0
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  __int64 v331; // x1
  __int64 v332; // x1
  __int64 v333; // x2
  __int64 v334; // x3
  QuestTree___c__DisplayClass42_1_o *v335; // x25
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v336; // x0
  int64_t v337; // x2
  int32_t v338; // w3
  System_String_o *v339; // x4
  BattleSetupInfo_o *v340; // x5
  FollowerInfo_o *v341; // x6
  PartyListViewItem_o *v342; // x7
  __int64 v343; // x1
  DataManager_o *v344; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object__object; // x25
  Il2CppObject *v346; // x27
  __int64 v347; // x1
  __int64 v348; // x2
  __int64 v349; // x3
  System_Func_object__bool__o *v350; // x26
  Il2CppObject *v351; // x0
  __int64 v352; // x1
  struct QuestTree___c__DisplayClass42_1_o *_8__1; // x8
  __int64 klass_low; // x1
  MapControl_RootInfo_o *mapControlRootInfo; // x0
  System_Collections_Generic_List_object__o *allWarInfoList; // x25
  Il2CppObject *v357; // x27
  __int64 v358; // x1
  __int64 v359; // x2
  __int64 v360; // x3
  System_Predicate_object__o *v361; // x26
  __int64 v362; // x0
  __int64 v363; // x1
  __int64 Index; // x0
  __int64 v365; // x1
  System_Collections_Generic_List_object__o *v366; // x0
  struct QuestTree___c__DisplayClass42_1_o *v367; // x9
  MapControl_RootInfo_o *v368; // x0
  struct MapControl_WarInfo_o *v369; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v370; // x0
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  __int64 v377; // x1
  MapControl_WarInfo_o *warInfo_5__14; // x0
  __int64 v379; // x1
  int64_t v380; // x2
  int32_t v381; // w3
  System_String_o *v382; // x4
  BattleSetupInfo_o *v383; // x5
  FollowerInfo_o *v384; // x6
  PartyListViewItem_o *v385; // x7
  MapControl_WarInfo_o *v386; // x0
  __int64 EventId; // x0
  __int64 v388; // x1
  _BOOL8 v389; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v390; // x8
  int64_t nowTime_5__11; // x10
  MapControl_WarInfo_o *v392; // x0
  MapControl_WarInfo_o *v393; // x0
  __int64 v394; // x0
  __int64 v395; // x1
  __int64 v396; // x1
  __int64 v397; // x1
  __int64 v398; // x1
  MapControl_WarInfo_o *v399; // x0
  __int64 v400; // x0
  __int64 v401; // x1
  EventStatusEntity_o *NowEntity; // x22
  MapControl_WarInfo_o *v403; // x0
  __int64 v404; // x0
  System_Collections_Generic_List_int__o *MismatchQuestList; // x0
  __int64 v406; // x1
  struct QuestTree___c__DisplayClass42_1_o *v407; // x8
  Il2CppObject *v408; // x2
  struct System_Collections_Generic_Dictionary_int__List_int___o *eventStatusQuestMismatchDictionary_5__10; // x0
  int64_t v410; // x21
  System_Int64_array *v411; // x0
  __int64 v412; // x1
  Il2CppObject *v413; // x8
  unsigned int max_length; // w9
  System_Collections_Generic_List_object__o *v415; // x0
  struct System_Object_array *items; // x8
  Il2CppObject *v417; // x1
  _QWORD *v418; // x9
  __int64 size; // x10
  Il2CppClass **v420; // x8
  __int64 v421; // x0
  __int64 v422; // x1
  int32_t v423; // w9
  struct QuestTree___c__DisplayClass42_1_o *v424; // x9
  SpotRoadMaster_o *spotRoadMaster_5__7; // x0
  SpotRoadEntity_array *v426; // x0
  __int64 v427; // x1
  __int64 v428; // x2
  __int64 v429; // x3
  SpotRoadEntity_array *v430; // x20
  int v431; // w25
  il2cpp_array_size_t i; // w26
  QuestTree___c__DisplayClass42_4_o *v433; // x21
  __int64 v434; // x0
  __int64 v435; // x1
  __int64 v436; // x2
  __int64 v437; // x3
  SpotRoadEntity_o *v438; // x22
  System_Collections_Generic_List_object__o *allSpotRoadInfoList; // x23
  System_Predicate_object__o *v440; // x24
  __int64 v441; // x0
  __int64 v442; // x1
  unsigned int v443; // w0
  __int64 v444; // x1
  System_Collections_Generic_List_object__o *v445; // x0
  MapControl_MapInfo_o *mapInfo_5__16; // x0
  __int64 v447; // x1
  int64_t v448; // x2
  int32_t v449; // w3
  System_String_o *v450; // x4
  BattleSetupInfo_o *v451; // x5
  FollowerInfo_o *v452; // x6
  PartyListViewItem_o *v453; // x7
  System_Collections_Generic_List_object__o *v454; // x0
  Il2CppObject *v455; // x1
  struct System_Object_array *v456; // x8
  _QWORD *v457; // x9
  __int64 v458; // x10
  Il2CppClass **v459; // x8
  struct QuestTree___c__DisplayClass42_1_o *v460; // x8
  MapGimmickMaster_o *mapGimmickMaster_5__8; // x0
  MapGimmickEntity_array *v462; // x0
  __int64 v463; // x1
  int64_t v464; // x2
  __int64 v465; // x3
  System_String_o *v466; // x4
  BattleSetupInfo_o *v467; // x5
  FollowerInfo_o *v468; // x6
  PartyListViewItem_o *v469; // x7
  MapGimmickEntity_array *v470; // x20
  int v471; // w24
  il2cpp_array_size_t j; // w25
  QuestTree___c__DisplayClass42_5_o *v473; // x21
  __int64 v474; // x0
  __int64 v475; // x1
  __int64 v476; // x2
  __int64 v477; // x3
  MapGimmickEntity_o *v478; // x8
  System_Collections_Generic_List_object__o *allMapGimmickInfoList; // x22
  System_Predicate_object__o *v480; // x23
  __int64 v481; // x0
  __int64 v482; // x1
  unsigned int v483; // w0
  __int64 v484; // x1
  System_Collections_Generic_List_object__o *v485; // x0
  MapControl_MapInfo_o *v486; // x0
  __int64 v487; // x1
  int64_t v488; // x2
  int32_t v489; // w3
  System_String_o *v490; // x4
  BattleSetupInfo_o *v491; // x5
  FollowerInfo_o *v492; // x6
  PartyListViewItem_o *v493; // x7
  System_Collections_Generic_List_object__o *v494; // x0
  Il2CppObject *v495; // x1
  struct System_Object_array *v496; // x8
  _QWORD *v497; // x9
  __int64 v498; // x10
  Il2CppClass **v499; // x8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v500; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v501; // x8
  int v502; // w9
  PartyOrganizationUtility_o *p_mapInfo_5__16; // x8
  __int64 v504; // x0
  __int64 v505; // x1
  __int64 v506; // x2
  __int64 v507; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v508; // x8
  int32_t mapCount_5__13; // w10
  int32_t v510; // w9
  struct System_Action_o *endCallback; // x9
  struct MapControl_WarInfo_o *v512; // x8
  struct MapEntity_array *List; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v514; // x0
  int64_t v515; // x2
  int32_t v516; // w3
  System_String_o *v517; // x4
  BattleSetupInfo_o *v518; // x5
  FollowerInfo_o *v519; // x6
  PartyListViewItem_o *v520; // x7
  struct MapEntity_array *mapList_5__15; // x10
  struct MapEntity_array *v522; // x10
  MapEntity_o *v523; // x9
  struct QuestTree___c__DisplayClass42_1_o *v524; // x22
  struct MapControl_WarInfo_o *v525; // x8
  System_Collections_Generic_List_object__o *mapInfoList; // x20
  System_Predicate_object__o *_9__3; // x21
  int64_t v528; // x2
  int32_t v529; // w3
  System_String_o *v530; // x4
  BattleSetupInfo_o *v531; // x5
  FollowerInfo_o *v532; // x6
  PartyListViewItem_o *v533; // x7
  struct MapControl_WarInfo_o *v534; // x8
  System_Collections_Generic_List_object__o *v535; // x0
  struct QuestTree___c__DisplayClass42_1_o *v536; // x23
  System_Collections_Generic_List_object__o *allMapInfoList; // x20
  System_Predicate_object__o *_9__4; // x21
  int64_t v539; // x2
  int32_t v540; // w3
  System_String_o *v541; // x4
  BattleSetupInfo_o *v542; // x5
  FollowerInfo_o *v543; // x6
  PartyListViewItem_o *v544; // x7
  __int64 v545; // x0
  __int64 v546; // x1
  System_Collections_Generic_List_object__o *v547; // x0
  struct QuestTree___c__DisplayClass42_1_o *v548; // x8
  MapControl_WarInfo_o *v549; // x0
  struct MapControl_MapInfo_o *v550; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v551; // x0
  int64_t v552; // x2
  int32_t v553; // w3
  System_String_o *v554; // x4
  BattleSetupInfo_o *v555; // x5
  FollowerInfo_o *v556; // x6
  PartyListViewItem_o *v557; // x7
  __int64 v558; // x1
  int64_t v559; // x2
  int32_t v560; // w3
  System_String_o *v561; // x4
  BattleSetupInfo_o *v562; // x5
  FollowerInfo_o *v563; // x6
  PartyListViewItem_o *v564; // x7
  System_Collections_Generic_List_object__o *v565; // x0
  struct System_Object_array *v566; // x8
  Il2CppObject *v567; // x1
  _QWORD *v568; // x9
  __int64 v569; // x10
  Il2CppClass **v570; // x8
  __int64 v571; // x0
  __int64 v572; // x1
  System_Collections_Generic_List_object__o *v573; // x20
  QuestTree___c_c *v574; // x8
  System_Comparison_T__o *_9__42_2; // x21
  Il2CppObject *v576; // x22
  struct QuestTree___c_StaticFields *v577; // x0
  int64_t v578; // x2
  int32_t v579; // w3
  System_String_o *v580; // x4
  BattleSetupInfo_o *v581; // x5
  FollowerInfo_o *v582; // x6
  PartyListViewItem_o *v583; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v584; // x0
  int64_t v585; // x2
  int32_t v586; // w3
  System_String_o *v587; // x4
  BattleSetupInfo_o *v588; // x5
  FollowerInfo_o *v589; // x6
  PartyListViewItem_o *v590; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v591; // x0
  int64_t v592; // x2
  int32_t v593; // w3
  System_String_o *v594; // x4
  BattleSetupInfo_o *v595; // x5
  FollowerInfo_o *v596; // x6
  PartyListViewItem_o *v597; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v598; // x0
  int64_t v599; // x2
  int32_t v600; // w3
  System_String_o *v601; // x4
  BattleSetupInfo_o *v602; // x5
  FollowerInfo_o *v603; // x6
  PartyListViewItem_o *v604; // x7
  __int64 v605; // x1
  __int64 v606; // x2
  __int64 v607; // x3
  QuestTree___c__DisplayClass42_6_o *v608; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v609; // x0
  int64_t v610; // x2
  int32_t v611; // w3
  System_String_o *v612; // x4
  BattleSetupInfo_o *v613; // x5
  FollowerInfo_o *v614; // x6
  PartyListViewItem_o *v615; // x7
  int64_t v616; // x21
  __int64 v617; // x1
  __int64 v618; // x2
  __int64 v619; // x3
  MapControl_WarInfo_o *v620; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v621; // x0
  int64_t v622; // x2
  int32_t v623; // w3
  System_String_o *v624; // x4
  BattleSetupInfo_o *v625; // x5
  FollowerInfo_o *v626; // x6
  PartyListViewItem_o *v627; // x7
  __int64 v628; // x1
  __int64 v629; // x2
  __int64 v630; // x3
  MapControl_MapInfo_o *v631; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v632; // x0
  int64_t v633; // x2
  int32_t v634; // w3
  System_String_o *v635; // x4
  BattleSetupInfo_o *v636; // x5
  FollowerInfo_o *v637; // x6
  PartyListViewItem_o *v638; // x7
  __int64 v639; // x1
  __int64 v640; // x2
  __int64 v641; // x3
  MapControl_SpotInfo_o *v642; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v643; // x0
  int64_t v644; // x2
  int32_t v645; // w3
  System_String_o *v646; // x4
  BattleSetupInfo_o *v647; // x5
  FollowerInfo_o *v648; // x6
  PartyListViewItem_o *v649; // x7
  __int64 v650; // x1
  __int64 v651; // x2
  __int64 v652; // x3
  WarEntity_o *v653; // x20
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v654; // x0
  int64_t v655; // x2
  int32_t v656; // w3
  System_String_o *v657; // x4
  BattleSetupInfo_o *v658; // x5
  FollowerInfo_o *v659; // x6
  PartyListViewItem_o *v660; // x7
  __int64 v661; // x1
  DataManager_o *v662; // x0
  Il2CppObject *v663; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v664; // x0
  int64_t v665; // x2
  int32_t v666; // w3
  System_String_o *v667; // x4
  BattleSetupInfo_o *v668; // x5
  FollowerInfo_o *v669; // x6
  PartyListViewItem_o *v670; // x7
  __int64 v671; // x1
  Il2CppObject *Master_object; // x0
  __int64 v673; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v674; // x8
  struct QuestTree___c__DisplayClass42_6_o *_8__3; // x9
  _BOOL8 isSavedMemoryMode; // x0
  __int64 v677; // x1
  __int64 v678; // x2
  __int64 v679; // x3
  int32_t v680; // w9
  struct QuestTree___c__DisplayClass42_6_o *v681; // x20
  System_Collections_Generic_List_int__o *v682; // x21
  __int64 v683; // x0
  __int64 v684; // x1
  int64_t v685; // x2
  int32_t v686; // w3
  System_String_o *v687; // x4
  BattleSetupInfo_o *v688; // x5
  FollowerInfo_o *v689; // x6
  PartyListViewItem_o *v690; // x7
  __int64 v691; // x1
  System_Collections_Generic_List_object__o *v692; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v693; // x9
  __int128 v694; // q0
  PartyOrganizationUtility_o *p__7__wrap24; // x0
  int64_t v696; // x2
  int32_t v697; // w3
  System_String_o *v698; // x4
  BattleSetupInfo_o *v699; // x5
  FollowerInfo_o *v700; // x6
  PartyListViewItem_o *v701; // x7
  const MethodInfo *v702; // x1
  bool v703; // w8
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v704; // x0
  struct MapControl_SpotInfo_o *current; // x20
  SpotEntity_o *Mine; // x0
  __int64 v707; // x1
  int64_t v708; // x2
  int32_t v709; // w3
  System_String_o *v710; // x4
  BattleSetupInfo_o *v711; // x5
  FollowerInfo_o *v712; // x6
  PartyListViewItem_o *v713; // x7
  struct QuestTree___c__DisplayClass42_0_o *v714; // x9
  struct QuestTree___c__DisplayClass42_6_o *v715; // x9
  System_Collections_Generic_List_int__o *spotInfoList; // x0
  __int64 spotId; // x1
  struct System_Int32_array *v718; // x9
  _QWORD *v719; // x10
  __int64 v720; // x11
  unsigned __int64 v721; // t2
  __int64 v722; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v723; // x8
  DataMasterBase_o *questMaster_5__5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x20
  Il2CppObject *v726; // x22
  __int64 v727; // x1
  __int64 v728; // x2
  __int64 v729; // x3
  System_Func_object__bool__o *v730; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v731; // x0
  System_Object_array *v732; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v733; // x0
  int64_t v734; // x2
  int32_t v735; // w3
  System_String_o *v736; // x4
  BattleSetupInfo_o *v737; // x5
  FollowerInfo_o *v738; // x6
  PartyListViewItem_o *v739; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v740; // x8
  __int64 mapIdx_5__12; // x0
  int32_t v742; // w9
  struct QuestTree___c__DisplayClass42_1_o *v743; // x8
  SpotMaster_o *spotMaster_5__3; // x0
  SpotEntity_array *v745; // x0
  __int64 v746; // x1
  __int64 v747; // x2
  __int64 v748; // x3
  SpotEntity_array *v749; // x20
  int v750; // w25
  il2cpp_array_size_t k; // w26
  QuestTree___c__DisplayClass42_2_o *v752; // x21
  __int64 v753; // x0
  __int64 v754; // x1
  __int64 v755; // x2
  __int64 v756; // x3
  SpotEntity_o *v757; // x22
  System_Collections_Generic_List_object__o *allSpotInfoList; // x23
  System_Predicate_object__o *v759; // x24
  __int64 v760; // x0
  __int64 v761; // x1
  unsigned int v762; // w0
  __int64 v763; // x1
  System_Collections_Generic_List_object__o *v764; // x0
  MapControl_MapInfo_o *v765; // x0
  __int64 v766; // x1
  int64_t v767; // x2
  int32_t v768; // w3
  System_String_o *v769; // x4
  BattleSetupInfo_o *v770; // x5
  FollowerInfo_o *v771; // x6
  PartyListViewItem_o *v772; // x7
  System_Collections_Generic_List_object__o *v773; // x0
  Il2CppObject *v774; // x1
  struct System_Object_array *v775; // x8
  _QWORD *v776; // x9
  __int64 v777; // x10
  Il2CppClass **v778; // x8
  System_Collections_Generic_IEnumerable_MapControl_SpotInfo__o *v779; // x0
  System_Object_array *v780; // x0
  __int64 v781; // x1
  int64_t v782; // x2
  __int64 v783; // x3
  System_String_o *v784; // x4
  BattleSetupInfo_o *v785; // x5
  FollowerInfo_o *v786; // x6
  PartyListViewItem_o *v787; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v788; // x20
  __int64 v789; // x21
  __int64 v790; // x1
  __int64 v791; // x2
  __int64 v792; // x3
  QuestTree___c_c *v793; // x8
  System_Func_object__int__o *_9__42_6; // x22
  Il2CppObject *v795; // x23
  struct QuestTree___c_StaticFields *static_fields; // x0
  int64_t v797; // x2
  int32_t v798; // w3
  System_String_o *v799; // x4
  BattleSetupInfo_o *v800; // x5
  FollowerInfo_o *v801; // x6
  PartyListViewItem_o *v802; // x7
  System_Collections_Generic_IEnumerable_T__o *v803; // x23
  __int64 v804; // x1
  __int64 v805; // x2
  __int64 v806; // x3
  System_Collections_Generic_HashSet_int__o *v807; // x22
  __int64 v808; // x0
  __int64 v809; // x1
  int64_t v810; // x2
  int32_t v811; // w3
  System_String_o *v812; // x4
  BattleSetupInfo_o *v813; // x5
  FollowerInfo_o *v814; // x6
  PartyListViewItem_o *v815; // x7
  System_Collections_Generic_List_T__o *v816; // x22
  __int64 v817; // x1
  __int64 v818; // x2
  __int64 v819; // x3
  System_Func_object__bool__o *v820; // x23
  __int64 v821; // x1
  System_Collections_Generic_List_object__o *v822; // x0
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v823; // x0
  bool result; // w0
  struct QuestEntity_array *questList_5__24; // x10
  QuestEntity_o *v826; // x20
  struct QuestTree___c__DisplayClass42_6_o *v827; // x9
  UserQuestMaster_o *userQuestMaster_5__19; // x21
  int64_t UserId; // x0
  __int64 v830; // x1
  struct QuestTree___c__DisplayClass42_6_o *v831; // x8
  __int64 v832; // x1
  int32_t QuestPhase; // w21
  MapEntity_o *SpotId_40196836; // x0
  __int64 warId; // x1
  __int64 v836; // x2
  __int64 v837; // x3
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v838; // x22
  struct QuestTree___c__DisplayClass42_6_o *v839; // x25
  System_Collections_Generic_List_object__o *v840; // x23
  System_Predicate_object__o *_9__12; // x24
  int64_t v842; // x2
  int32_t v843; // w3
  System_String_o *v844; // x4
  BattleSetupInfo_o *v845; // x5
  FollowerInfo_o *v846; // x6
  PartyListViewItem_o *v847; // x7
  Il2CppObject *v848; // x0
  int64_t v849; // x2
  int32_t v850; // w3
  System_String_o *v851; // x4
  BattleSetupInfo_o *v852; // x5
  FollowerInfo_o *v853; // x6
  PartyListViewItem_o *v854; // x7
  __int64 v855; // x1
  MapControl_SpotInfo_o *spotInfo_5__17; // x0
  struct MapControl_MapInfo_o *MapInfoByMapID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v858; // x0
  int64_t v859; // x2
  int32_t v860; // w3
  System_String_o *v861; // x4
  BattleSetupInfo_o *v862; // x5
  FollowerInfo_o *v863; // x6
  PartyListViewItem_o *v864; // x7
  __int64 v865; // x1
  MapControl_MapInfo_o *v866; // x0
  __int64 v867; // x1
  struct MapControl_WarInfo_o *WarInfoByWarID; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v869; // x0
  int64_t v870; // x2
  int32_t v871; // w3
  System_String_o *v872; // x4
  BattleSetupInfo_o *v873; // x5
  FollowerInfo_o *v874; // x6
  PartyListViewItem_o *v875; // x7
  __int64 v876; // x1
  MapControl_WarInfo_o *v877; // x0
  struct WarEntity_o *v878; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v879; // x0
  int64_t v880; // x2
  int32_t v881; // w3
  System_String_o *v882; // x4
  BattleSetupInfo_o *v883; // x5
  FollowerInfo_o *v884; // x6
  PartyListViewItem_o *v885; // x7
  struct QuestTree___c__DisplayClass42_6_o *v886; // x25
  System_Collections_Generic_List_object__o *allQuestInfoList; // x22
  System_Predicate_object__o *_9__13; // x23
  int64_t v889; // x2
  int32_t v890; // w3
  System_String_o *v891; // x4
  BattleSetupInfo_o *v892; // x5
  FollowerInfo_o *v893; // x6
  PartyListViewItem_o *v894; // x7
  unsigned int v895; // w0
  __int64 v896; // x1
  System_Collections_Generic_List_object__o *v897; // x0
  MapControl_WarInfo_o *v898; // x0
  __int64 v899; // x1
  _BOOL8 HasStatus; // x0
  __int64 v901; // x1
  MapControl_WarInfo_o *v902; // x0
  WarEntity_o *v903; // x0
  __int64 v904; // x1
  int v905; // w23
  bool v906; // cc
  __int64 v907; // x1
  struct QuestTree___c__DisplayClass42_6_o *v908; // x9
  MapControl_WarInfo_o *v909; // x0
  struct QuestTree___c__DisplayClass42_6_o *v910; // x8
  MapControl_SpotInfo_o *v911; // x0
  MapControl_QuestInfo_o *v912; // x0
  int64_t v913; // x2
  int32_t v914; // w3
  System_String_o *v915; // x4
  BattleSetupInfo_o *v916; // x5
  FollowerInfo_o *v917; // x6
  PartyListViewItem_o *v918; // x7
  struct MapControl_WarInfo_o *v919; // x1
  int64_t v920; // x22
  int32_t v921; // w8
  struct MapControl_SpotInfo_o *v922; // x1
  int64_t v923; // x2
  int32_t v924; // w3
  System_String_o *v925; // x4
  BattleSetupInfo_o *v926; // x5
  FollowerInfo_o *v927; // x6
  PartyListViewItem_o *v928; // x7
  __int64 v929; // x1
  WarEntity_o *warEnt_5__18; // x0
  _BOOL8 IsStartTypeQuest; // x0
  __int64 v932; // x1
  struct WarEntity_o *v933; // x8
  struct QuestTree___c__DisplayClass42_6_o *v934; // x9
  struct WarEntity_o *v935; // x8
  struct System_Collections_Generic_Dictionary_int__List_int___o *v936; // x0
  _BOOL8 v937; // x0
  __int64 v938; // x1
  struct QuestTree___c__DisplayClass42_6_o *v939; // x8
  __int64 v940; // x1
  MapControl_WarInfo_o *v941; // x0
  int v942; // w24
  __int64 v943; // x1
  __int64 v944; // x1
  MapControl_SpotInfo_o *v945; // x0
  MapControl_SpotInfo_o *v946; // x0
  QuestEntity_o *v947; // x0
  __int64 v948; // x1
  _BOOL8 HasFlag; // x0
  __int64 v950; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v951; // x8
  struct MapControl_SpotInfo_o *v952; // x9
  struct MapControl_MapInfo_o *v953; // x8
  _BOOL8 IsDisplayQuestNextIcon; // x0
  __int64 v955; // x1
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v956; // x8
  struct MapControl_SpotInfo_o *v957; // x9
  struct MapControl_MapInfo_o *v958; // x8
  MapControl_SpotInfo_o *v959; // x0
  UserQuestEntity_o *v960; // x0
  bool v961; // w8
  struct QuestTree___c__DisplayClass42_6_o *v962; // x8
  QuestPickupMaster_o *questPickupMaster_5__9; // x0
  __int64 Priority; // x0
  __int64 v965; // x1
  struct QuestTree___c__DisplayClass42_6_o *v966; // x8
  QuestPhaseMaster_o *questPhaseMaster_5__6; // x0
  _QWORD *v968; // x0
  __int64 v969; // x1
  int64_t v970; // x2
  int32_t v971; // w3
  System_String_o *v972; // x4
  BattleSetupInfo_o *v973; // x5
  FollowerInfo_o *v974; // x6
  PartyListViewItem_o *v975; // x7
  _QWORD *v976; // x20
  __int64 v977; // x8
  int v978; // w21
  int v979; // w23
  __int64 v980; // x8
  System_Collections_Generic_List_object__o *v981; // x0
  struct System_Object_array *v982; // x8
  _QWORD *v983; // x9
  __int64 v984; // x10
  Il2CppClass **v985; // x8
  System_String_o *v986; // x4
  BattleSetupInfo_o *v987; // x5
  FollowerInfo_o *v988; // x6
  PartyListViewItem_o *v989; // x7
  System_Collections_Generic_List_object__o *v990; // x20
  QuestTree___c_c *v991; // x8
  System_Comparison_T__o *_9__42_11; // x21
  Il2CppObject *v993; // x22
  struct QuestTree___c_StaticFields *v994; // x0
  int64_t v995; // x2
  int32_t v996; // w3
  System_String_o *v997; // x4
  BattleSetupInfo_o *v998; // x5
  FollowerInfo_o *v999; // x6
  PartyListViewItem_o *v1000; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1001; // x0
  int64_t v1002; // x2
  int32_t v1003; // w3
  System_String_o *v1004; // x4
  BattleSetupInfo_o *v1005; // x5
  FollowerInfo_o *v1006; // x6
  PartyListViewItem_o *v1007; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1008; // x0
  int64_t v1009; // x2
  int32_t v1010; // w3
  System_String_o *v1011; // x4
  BattleSetupInfo_o *v1012; // x5
  FollowerInfo_o *v1013; // x6
  PartyListViewItem_o *v1014; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1015; // x0
  int64_t v1016; // x2
  int32_t v1017; // w3
  System_String_o *v1018; // x4
  BattleSetupInfo_o *v1019; // x5
  FollowerInfo_o *v1020; // x6
  PartyListViewItem_o *v1021; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1022; // x0
  int64_t v1023; // x2
  int32_t v1024; // w3
  System_String_o *v1025; // x4
  BattleSetupInfo_o *v1026; // x5
  FollowerInfo_o *v1027; // x6
  PartyListViewItem_o *v1028; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1029; // x0
  int64_t v1030; // x2
  int32_t v1031; // w3
  System_String_o *v1032; // x4
  BattleSetupInfo_o *v1033; // x5
  FollowerInfo_o *v1034; // x6
  PartyListViewItem_o *v1035; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1036; // x0
  int64_t v1037; // x2
  int32_t v1038; // w3
  System_String_o *v1039; // x4
  BattleSetupInfo_o *v1040; // x5
  FollowerInfo_o *v1041; // x6
  PartyListViewItem_o *v1042; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1043; // x0
  int64_t v1044; // x2
  int32_t v1045; // w3
  System_String_o *v1046; // x4
  BattleSetupInfo_o *v1047; // x5
  FollowerInfo_o *v1048; // x6
  PartyListViewItem_o *v1049; // x7
  Il2CppObject *v1050; // x0
  __int64 v1051; // x1
  int64_t v1052; // x2
  int32_t v1053; // w3
  System_String_o *v1054; // x4
  BattleSetupInfo_o *v1055; // x5
  FollowerInfo_o *v1056; // x6
  PartyListViewItem_o *v1057; // x7
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1058; // x0
  System_Collections_Generic_List_Enumerator_T__o v1059[2]; // [xsp+8h] [xbp-E8h] BYREF
  __int64 v1060; // [xsp+40h] [xbp-B0h]
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o **v1061; // [xsp+48h] [xbp-A8h]
  Il2CppObject *value; // [xsp+50h] [xbp-A0h] BYREF
  UserQuestEntity_o *v1063; // [xsp+58h] [xbp-98h] BYREF
  MapControl_MapGimmickInfo_o *mapGimmickInfo; // [xsp+60h] [xbp-90h] BYREF
  MapControl_SpotRoadInfo_o *spotRoadInfo; // [xsp+68h] [xbp-88h] BYREF
  MapControl_SpotInfo_o *spotInfo; // [xsp+70h] [xbp-80h] BYREF
  Il2CppObject *v1067; // [xsp+78h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-70h] BYREF
  QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *v1069; // [xsp+88h] [xbp-68h] BYREF

  v8 = this;
  v1069 = this;
  if ( (byte_4B133A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_RemoveElements_MapControl_SpotInfo___, method, v2);
    sub_1BCA7E0(&System_Comparison_MapControl_QuestInfo__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Comparison_MapControl_WarInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BlankEarthSpotMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventStatusMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventStatusQuestMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapGimmickMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MapMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPickupMaster___, v31, v32);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v33, v34);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotRoadMaster___, v35, v36);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v37, v38);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v39, v40);
    sub_1BCA7E0(&Method_DataManager_getEntitys_WarMaster__WarEntity___, v41, v42);
    sub_1BCA7E0(&DataManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v45, v46);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v47, v48);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_QuestEntity___, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v55, v56);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v57, v58);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_QuestEntity___, v59, v60);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___, v61, v62);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___, v63, v64);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_QuestEntity___, v65, v66);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___, v67, v68);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_QuestEntity___, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__, v71, v72);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__get_Current__, v73, v74);
    sub_1BCA7E0(&System_Func_MapControl_SpotInfo__int__TypeInfo, v75, v76);
    sub_1BCA7E0(&System_Func_MapControl_SpotInfo__bool__TypeInfo, v77, v78);
    sub_1BCA7E0(&System_Func_WarEntity__bool__TypeInfo, v79, v80);
    sub_1BCA7E0(&System_Func_QuestEntity__bool__TypeInfo, v81, v82);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v83, v84);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v85, v86);
    sub_1BCA7E0(&long___TypeInfo, v87, v88);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__, v89, v90);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v91, v92);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Add__, v93, v94);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__, v95, v96);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__, v97, v98);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v99, v100);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__, v101, v102);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__Add__, v103, v104);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v105, v106);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__, v107, v108);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__, v109, v110);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__, v111, v112);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__, v113, v114);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__, v115, v116);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__, v117, v118);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v119, v120);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__, v121, v122);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__, v123, v124);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__, v125, v126);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__, v127, v128);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__, v129, v130);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__, v131, v132);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__, v133, v134);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__, v135, v136);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__, v137, v138);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v139, v140);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v141, v142);
    sub_1BCA7E0(&MapControl_MapInfo_TypeInfo, v143, v144);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v145, v146);
    sub_1BCA7E0(&OptionManager_TypeInfo, v147, v148);
    sub_1BCA7E0(&System_Predicate_MapControl_WarInfo__TypeInfo, v149, v150);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotRoadInfo__TypeInfo, v151, v152);
    sub_1BCA7E0(&System_Predicate_MapControl_MapGimmickInfo__TypeInfo, v153, v154);
    sub_1BCA7E0(&System_Predicate_MapControl_MapInfo__TypeInfo, v155, v156);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotInfo__TypeInfo, v157, v158);
    sub_1BCA7E0(&System_Predicate_MapControl_QuestInfo__TypeInfo, v159, v160);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v161, v162);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v163, v164);
    sub_1BCA7E0(&MapControl_SpotInfo_TypeInfo, v165, v166);
    sub_1BCA7E0(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__, v167, v168);
    sub_1BCA7E0(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__, v169, v170);
    sub_1BCA7E0(&Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__, v171, v172);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__, v173, v174);
    sub_1BCA7E0(&QuestTree___c__DisplayClass42_0_TypeInfo, v175, v176);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__, v177, v178);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__, v179, v180);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__, v181, v182);
    sub_1BCA7E0(&QuestTree___c__DisplayClass42_1_TypeInfo, v183, v184);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__, v185, v186);
    sub_1BCA7E0(&QuestTree___c__DisplayClass42_2_TypeInfo, v187, v188);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__, v189, v190);
    sub_1BCA7E0(&QuestTree___c__DisplayClass42_3_TypeInfo, v191, v192);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__, v193, v194);
    sub_1BCA7E0(&QuestTree___c__DisplayClass42_4_TypeInfo, v195, v196);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__, v197, v198);
    sub_1BCA7E0(&QuestTree___c__DisplayClass42_5_TypeInfo, v199, v200);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__, v201, v202);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__, v203, v204);
    sub_1BCA7E0(&Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__, v205, v206);
    sub_1BCA7E0(&QuestTree___c__DisplayClass42_6_TypeInfo, v207, v208);
    sub_1BCA7E0(&QuestTree___c_TypeInfo, v209, v210);
    sub_1BCA7E0(&WarEntity_TypeInfo, v211, v212);
    this = (QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_o *)sub_1BCA7E0(&MapControl_WarInfo_TypeInfo, v213, v214);
    v8 = v1069;
    byte_4B133A9 = 1;
  }
  v1067 = 0LL;
  entity = 0LL;
  spotRoadInfo = 0LL;
  spotInfo = 0LL;
  v1063 = 0LL;
  mapGimmickInfo = 0LL;
  v1060 = 0LL;
  v1061 = &v1069;
  value = 0LL;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v216 = (QuestTree___c__DisplayClass42_0_o *)sub_1BCAA2C(QuestTree___c__DisplayClass42_0_TypeInfo, method, v2, v3);
      QuestTree___c__DisplayClass42_0___ctor(v216, 0LL);
      v217 = v1069;
      v1069->fields.__8__2 = v216;
      sub_1BCA784((PartyOrganizationUtility_o *)&v217->fields.__8__2, (int64_t)v216, v218, v219, v220, v221, v222, v223);
      _8__2 = v1069->fields.__8__2;
      if ( !_8__2 )
        sub_1BCAA3C(v224, v225);
      _8__2->fields.targetWarId = v1069->fields.targetWarId;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      v228 = v1069;
      v1069->fields._dataManager_5__2 = (struct DataManager_o *)Instance;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v228->fields._dataManager_5__2,
        (int64_t)Instance,
        v229,
        v230,
        v231,
        v232,
        v233,
        v234);
      dataManager_5__2 = v1069->fields._dataManager_5__2;
      if ( !dataManager_5__2 )
        sub_1BCAA3C(0LL, v235);
      MasterData_object = DataManager__GetMasterData_object_(
                            dataManager_5__2,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapMaster___);
      v239 = v1069->fields._dataManager_5__2;
      if ( !v239 )
        sub_1BCAA3C(0LL, v237);
      v240 = DataManager__GetMasterData_object_(
               v239,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
      v241 = v1069;
      v1069->fields._spotMaster_5__3 = (struct SpotMaster_o *)v240;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v241->fields._spotMaster_5__3,
        (int64_t)v240,
        v242,
        v243,
        v244,
        v245,
        v246,
        v247);
      v249 = v1069->fields._dataManager_5__2;
      if ( !v249 )
        sub_1BCAA3C(0LL, v248);
      v250 = DataManager__GetMasterData_object_(
               v249,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BlankEarthSpotMaster___);
      v251 = v1069;
      v1069->fields._blankEarthSpotMaster_5__4 = (struct BlankEarthSpotMaster_o *)v250;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v251->fields._blankEarthSpotMaster_5__4,
        (int64_t)v250,
        v252,
        v253,
        v254,
        v255,
        v256,
        v257);
      v259 = v1069->fields._dataManager_5__2;
      if ( !v259 )
        sub_1BCAA3C(0LL, v258);
      v260 = DataManager__GetMasterData_object_(
               v259,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
      v261 = v1069;
      v1069->fields._questMaster_5__5 = (struct QuestMaster_o *)v260;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v261->fields._questMaster_5__5,
        (int64_t)v260,
        v262,
        v263,
        v264,
        v265,
        v266,
        v267);
      v269 = v1069->fields._dataManager_5__2;
      if ( !v269 )
        sub_1BCAA3C(0LL, v268);
      v270 = DataManager__GetMasterData_object_(
               v269,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      v271 = v1069;
      v1069->fields._questPhaseMaster_5__6 = (struct QuestPhaseMaster_o *)v270;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v271->fields._questPhaseMaster_5__6,
        (int64_t)v270,
        v272,
        v273,
        v274,
        v275,
        v276,
        v277);
      v279 = v1069->fields._dataManager_5__2;
      if ( !v279 )
        sub_1BCAA3C(0LL, v278);
      v281 = DataManager__GetMasterData_object_(
               v279,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      v282 = v1069->fields._dataManager_5__2;
      if ( !v282 )
        sub_1BCAA3C(0LL, v280);
      v284 = DataManager__GetMasterData_object_(
               v282,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v285 = v1069->fields._dataManager_5__2;
      if ( !v285 )
        sub_1BCAA3C(0LL, v283);
      v287 = DataManager__GetMasterData_object_(
               v285,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventStatusMaster___);
      v288 = v1069->fields._dataManager_5__2;
      if ( !v288 )
        sub_1BCAA3C(0LL, v286);
      v290 = DataManager__GetMasterData_object_(
               v288,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventStatusQuestMaster___);
      v291 = v1069->fields._dataManager_5__2;
      if ( !v291 )
        sub_1BCAA3C(0LL, v289);
      v292 = DataManager__GetMasterData_object_(
               v291,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotRoadMaster___);
      v293 = v1069;
      v1069->fields._spotRoadMaster_5__7 = (struct SpotRoadMaster_o *)v292;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v293->fields._spotRoadMaster_5__7,
        (int64_t)v292,
        v294,
        v295,
        v296,
        v297,
        v298,
        v299);
      v301 = v1069->fields._dataManager_5__2;
      if ( !v301 )
        sub_1BCAA3C(0LL, v300);
      v302 = DataManager__GetMasterData_object_(
               v301,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
      v303 = v1069;
      v1069->fields._mapGimmickMaster_5__8 = (struct MapGimmickMaster_o *)v302;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v303->fields._mapGimmickMaster_5__8,
        (int64_t)v302,
        v304,
        v305,
        v306,
        v307,
        v308,
        v309);
      v311 = v1069->fields._dataManager_5__2;
      if ( !v311 )
        sub_1BCAA3C(0LL, v310);
      v312 = DataManager__GetMasterData_object_(
               v311,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPickupMaster___);
      v313 = v1069;
      v1069->fields._questPickupMaster_5__9 = (struct QuestPickupMaster_o *)v312;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v313->fields._questPickupMaster_5__9,
        (int64_t)v312,
        v314,
        v315,
        v316,
        v317,
        v318,
        v319);
      v323 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                       System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                       v320,
                                                                       v321,
                                                                       v322);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v323,
        (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
      v324 = v1069;
      v1069->fields._eventStatusQuestMismatchDictionary_5__10 = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v323;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v324->fields._eventStatusQuestMismatchDictionary_5__10,
        (int64_t)v323,
        v325,
        v326,
        v327,
        v328,
        v329,
        v330);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v331);
      v1069->fields._nowTime_5__11 = NetworkManager__getTime(0LL);
      v335 = (QuestTree___c__DisplayClass42_1_o *)sub_1BCAA2C(
                                                    QuestTree___c__DisplayClass42_1_TypeInfo,
                                                    v332,
                                                    v333,
                                                    v334);
      QuestTree___c__DisplayClass42_1___ctor(v335, 0LL);
      v336 = v1069;
      v1069->fields.__8__1 = v335;
      sub_1BCA784((PartyOrganizationUtility_o *)&v336->fields.__8__1, (int64_t)v335, v337, v338, v339, v340, v341, v342);
      v344 = v1069->fields._dataManager_5__2;
      if ( !v344 )
        sub_1BCAA3C(0LL, v343);
      Entitys_object__object = (System_Collections_Generic_IEnumerable_TSource__o *)DataManager__getEntitys_object__object_(
                                                                                      v344,
                                                                                      (const MethodInfo_2F12EF0 *)Method_DataManager_getEntitys_WarMaster__WarEntity___);
      v346 = (Il2CppObject *)v1069->fields.__8__2;
      v350 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarEntity__bool__TypeInfo, v347, v348, v349);
      System_Func_object__bool____ctor(
        v350,
        v346,
        Method_QuestTree___c__DisplayClass42_0__mfBaseTreeUpdateWithOpenCheck_b__0__,
        0LL);
      v351 = System_Linq_Enumerable__SingleOrDefault_object__49584156(
               Entitys_object__object,
               (System_Func_TSource__bool__o *)v350,
               (const MethodInfo_2F4981C *)Method_System_Linq_Enumerable_SingleOrDefault_WarEntity___);
      if ( !v351 )
        sub_1BCAA3C(0LL, v352);
      _8__1 = v1069->fields.__8__1;
      if ( !_8__1 )
        sub_1BCAA3C(v351, v352);
      klass_low = LODWORD(v351[1].klass);
      _8__1->fields.warId = klass_low;
      if ( !_4__this )
        sub_1BCAA3C(v351, klass_low);
      mapControlRootInfo = _4__this->fields.mapControlRootInfo;
      if ( !mapControlRootInfo )
        sub_1BCAA3C(0LL, klass_low);
      MapControl_RootInfo__Remove(mapControlRootInfo, klass_low, 0LL);
      allWarInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v357 = (Il2CppObject *)v1069->fields.__8__1;
      v361 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_WarInfo__TypeInfo, v358, v359, v360);
      System_Predicate_object____ctor(
        v361,
        v357,
        Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__1__,
        0LL);
      if ( !allWarInfoList )
        sub_1BCAA3C(v362, v363);
      Index = System_Collections_Generic_List_object___FindIndex(
                allWarInfoList,
                (System_Predicate_T__o *)v361,
                (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_WarInfo__FindIndex__);
      v365 = (unsigned int)Index;
      if ( (_DWORD)Index != -1 )
      {
        v366 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
        if ( !v366 )
          sub_1BCAA3C(0LL, v365);
        System_Collections_Generic_List_object___RemoveAt(
          v366,
          v365,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_WarInfo__RemoveAt__);
      }
      v367 = v1069->fields.__8__1;
      if ( !v367 )
        sub_1BCAA3C(Index, v365);
      v368 = _4__this->fields.mapControlRootInfo;
      if ( !v368 )
        sub_1BCAA3C(0LL, v365);
      v369 = MapControl_RootInfo__AddChild(v368, v367->fields.warId, v1069->fields._nowTime_5__11, 0LL);
      v370 = v1069;
      v1069->fields._warInfo_5__14 = v369;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v370->fields._warInfo_5__14,
        (int64_t)v369,
        v371,
        v372,
        v373,
        v374,
        v375,
        v376);
      warInfo_5__14 = v1069->fields._warInfo_5__14;
      if ( !warInfo_5__14 )
        sub_1BCAA3C(0LL, v377);
      if ( MapControl_WarInfo__IsEvent(warInfo_5__14, 0LL) )
      {
        v386 = v1069->fields._warInfo_5__14;
        if ( !v386 )
          sub_1BCAA3C(0LL, v379);
        EventId = MapControl_WarInfo__GetEventId(v386, 0LL);
        if ( !v281 )
          sub_1BCAA3C(EventId, v388);
        v389 = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v281,
                 &entity,
                 EventId,
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
        if ( v389 )
        {
          if ( !entity )
            sub_1BCAA3C(v389, v379);
          v390 = v1069;
          nowTime_5__11 = v1069->fields._nowTime_5__11;
          if ( nowTime_5__11 >= (__int64)entity[5].klass && nowTime_5__11 < (__int64)entity[6].monitor )
          {
            v392 = v1069->fields._warInfo_5__14;
            if ( !v392 )
              sub_1BCAA3C(0LL, v379);
            MapControl_WarInfo__SetStatusCheckFlag(v392, 1, 0, 0LL);
            v390 = v1069;
          }
          v393 = v390->fields._warInfo_5__14;
          if ( !v393 )
            sub_1BCAA3C(0LL, v379);
          v394 = MapControl_WarInfo__GetEventId(v393, 0LL);
          if ( !v284 )
            sub_1BCAA3C(v394, v395);
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v284,
                 &v1067,
                 v394,
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
          {
            if ( !v1067 )
              sub_1BCAA3C(0LL, v396);
            if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)v1067, 0x2000000LL, 0LL) )
            {
              if ( !entity )
                sub_1BCAA3C(0LL, v397);
              if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, v1069->fields._nowTime_5__11, 0LL) )
              {
                v399 = v1069->fields._warInfo_5__14;
                if ( !v399 )
                  sub_1BCAA3C(0LL, v398);
                v400 = MapControl_WarInfo__GetEventId(v399, 0LL);
                if ( !v287 )
                  sub_1BCAA3C(v400, (unsigned int)v400);
                NowEntity = EventStatusMaster__getNowEntity((EventStatusMaster_o *)v287, v400, 0LL);
                if ( NowEntity )
                {
                  v403 = v1069->fields._warInfo_5__14;
                  if ( !v403 )
                    sub_1BCAA3C(0LL, v401);
                  v404 = MapControl_WarInfo__GetEventId(v403, 0LL);
                  if ( !v290 )
                    sub_1BCAA3C(v404, (unsigned int)v404);
                  MismatchQuestList = EventStatusQuestMaster__getMismatchQuestList(
                                        (EventStatusQuestMaster_o *)v290,
                                        v404,
                                        NowEntity->fields.statusId,
                                        0LL);
                  v407 = v1069->fields.__8__1;
                  if ( !v407 )
                    sub_1BCAA3C(MismatchQuestList, v406);
                  v408 = (Il2CppObject *)MismatchQuestList;
                  eventStatusQuestMismatchDictionary_5__10 = v1069->fields._eventStatusQuestMismatchDictionary_5__10;
                  if ( !eventStatusQuestMismatchDictionary_5__10 )
                    sub_1BCAA3C(0LL, v406);
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)eventStatusQuestMismatchDictionary_5__10,
                    v407->fields.warId,
                    v408,
                    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
                }
              }
            }
          }
          v410 = v1069->fields._nowTime_5__11;
          v411 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, 3LL);
          v413 = entity;
          if ( !entity )
            sub_1BCAA3C(v411, v412);
          if ( !v411 )
            sub_1BCAA3C(0LL, v412);
          max_length = v411->max_length;
          if ( !max_length )
            sub_1BCAA44(v411, v412);
          v411->m_Items[0] = (int64_t)entity[5].klass;
          if ( max_length == 1 )
            sub_1BCAA44(v411, v412);
          v411->m_Items[1] = (int64_t)v413[5].monitor;
          if ( max_length <= 2 )
            sub_1BCAA44(v411, v412);
          v411->m_Items[2] = (int64_t)v413[6].monitor;
          QuestTree__UpdateForceUpdateTime(_4__this, v410, v411, 0LL);
        }
      }
      v415 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      if ( !v415 )
        sub_1BCAA3C(0LL, v379);
      items = v415->fields._items;
      v417 = (Il2CppObject *)v1069->fields._warInfo_5__14;
      v418 = Method_System_Collections_Generic_List_MapControl_WarInfo__Add__;
      ++v415->fields._version;
      if ( !items )
        sub_1BCAA3C(v415, v417);
      size = v415->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v415,
          v417,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v418[4] + 192LL) + 112LL));
      }
      else
      {
        v420 = &items->obj.klass + size;
        v415->fields._size = size + 1;
        v420[4] = (Il2CppClass *)v417;
        sub_1BCA784((PartyOrganizationUtility_o *)(v420 + 4), (int64_t)v417, v380, v381, v382, v383, v384, v385);
      }
      v512 = v1069->fields._warInfo_5__14;
      if ( !v512 )
        sub_1BCAA3C(v421, v422);
      if ( !MasterData_object )
        sub_1BCAA3C(v421, v422);
      List = MapMaster__getList((MapMaster_o *)MasterData_object, v512->fields.warId, 0LL);
      v514 = v1069;
      v1069->fields._mapList_5__15 = List;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v514->fields._mapList_5__15,
        (int64_t)List,
        v515,
        v516,
        v517,
        v518,
        v519,
        v520);
      v508 = v1069;
      mapList_5__15 = v1069->fields._mapList_5__15;
      v1069->fields._mapIdx_5__12 = 0;
      if ( !mapList_5__15 )
        sub_1BCAA3C(v504, v505);
      mapCount_5__13 = mapList_5__15->max_length;
      v510 = 0;
      v508->fields._mapCount_5__13 = mapCount_5__13;
      goto LABEL_115;
    case 1:
      v424 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v424 )
        sub_1BCAA3C(this, method);
      spotRoadMaster_5__7 = v8->fields._spotRoadMaster_5__7;
      if ( !spotRoadMaster_5__7 )
        sub_1BCAA3C(0LL, method);
      v426 = SpotRoadMaster__getList(spotRoadMaster_5__7, v424->fields.mapId, 0LL);
      v430 = v426;
      if ( !v426 )
        sub_1BCAA3C(0LL, v427);
      v431 = v426->max_length;
      if ( v431 >= 1 )
      {
        for ( i = 0; i != v431; ++i )
        {
          v433 = (QuestTree___c__DisplayClass42_4_o *)sub_1BCAA2C(
                                                        QuestTree___c__DisplayClass42_4_TypeInfo,
                                                        v427,
                                                        v428,
                                                        v429);
          QuestTree___c__DisplayClass42_4___ctor(v433, 0LL);
          if ( i >= v430->max_length )
            sub_1BCAA44(v434, v435);
          v438 = v430->m_Items[i];
          if ( !v438 )
            sub_1BCAA3C(v434, v435);
          if ( !v433 )
            sub_1BCAA3C(v434, v435);
          v433->fields.spotRoadId = v438->fields.id;
          if ( !_4__this )
            sub_1BCAA3C(v434, v435);
          allSpotRoadInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          v440 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                 System_Predicate_MapControl_SpotRoadInfo__TypeInfo,
                                                 v435,
                                                 v436,
                                                 v437);
          System_Predicate_object____ctor(
            v440,
            (Il2CppObject *)v433,
            Method_QuestTree___c__DisplayClass42_4__mfBaseTreeUpdateWithOpenCheck_b__8__,
            0LL);
          if ( !allSpotRoadInfoList )
            sub_1BCAA3C(v441, v442);
          v443 = System_Collections_Generic_List_object___FindIndex(
                   allSpotRoadInfoList,
                   (System_Predicate_T__o *)v440,
                   (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__FindIndex__);
          v444 = v443;
          if ( v443 != -1 )
          {
            v445 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
            if ( !v445 )
              sub_1BCAA3C(0LL, v444);
            System_Collections_Generic_List_object___RemoveAt(
              v445,
              v444,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__RemoveAt__);
          }
          mapInfo_5__16 = v1069->fields._mapInfo_5__16;
          if ( !mapInfo_5__16 )
            sub_1BCAA3C(0LL, v444);
          spotRoadInfo = MapControl_MapInfo__AddSpotRoad(mapInfo_5__16, v433->fields.spotRoadId, 0LL);
          QuestTree__SetupSpotRoadInfo(_4__this, v438, &spotRoadInfo, 0LL);
          v454 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotRoadInfoList;
          if ( !v454 )
            sub_1BCAA3C(0LL, v447);
          v455 = (Il2CppObject *)spotRoadInfo;
          v456 = v454->fields._items;
          v457 = Method_System_Collections_Generic_List_MapControl_SpotRoadInfo__Add__;
          ++v454->fields._version;
          if ( !v456 )
            sub_1BCAA3C(v454, v455);
          v458 = v454->fields._size;
          if ( (unsigned int)v458 >= v456->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v454,
              v455,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v457[4] + 192LL) + 112LL));
          }
          else
          {
            v459 = &v456->obj.klass + v458;
            v454->fields._size = v458 + 1;
            v459[4] = (Il2CppClass *)v455;
            sub_1BCA784((PartyOrganizationUtility_o *)(v459 + 4), (int64_t)v455, v448, v449, v450, v451, v452, v453);
          }
        }
      }
      v460 = v1069->fields.__8__1;
      if ( !v460 )
        sub_1BCAA3C(v426, v427);
      mapGimmickMaster_5__8 = v1069->fields._mapGimmickMaster_5__8;
      if ( !mapGimmickMaster_5__8 )
        sub_1BCAA3C(0LL, v427);
      v462 = MapGimmickMaster__getList(mapGimmickMaster_5__8, v460->fields.mapId, 0LL);
      v470 = v462;
      if ( !v462 )
        sub_1BCAA3C(0LL, v463);
      v471 = v462->max_length;
      if ( v471 >= 1 )
      {
        for ( j = 0; j != v471; ++j )
        {
          v473 = (QuestTree___c__DisplayClass42_5_o *)sub_1BCAA2C(
                                                        QuestTree___c__DisplayClass42_5_TypeInfo,
                                                        v463,
                                                        v464,
                                                        v465);
          QuestTree___c__DisplayClass42_5___ctor(v473, 0LL);
          if ( j >= v470->max_length )
            sub_1BCAA44(v474, v475);
          v478 = v470->m_Items[j];
          if ( !v478 )
            sub_1BCAA3C(v474, v475);
          if ( !v473 )
            sub_1BCAA3C(v474, v475);
          v473->fields.mapGimmickId = v478->fields.id;
          if ( !_4__this )
            sub_1BCAA3C(v474, v475);
          allMapGimmickInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          v480 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                 System_Predicate_MapControl_MapGimmickInfo__TypeInfo,
                                                 v475,
                                                 v476,
                                                 v477);
          System_Predicate_object____ctor(
            v480,
            (Il2CppObject *)v473,
            Method_QuestTree___c__DisplayClass42_5__mfBaseTreeUpdateWithOpenCheck_b__9__,
            0LL);
          if ( !allMapGimmickInfoList )
            sub_1BCAA3C(v481, v482);
          v483 = System_Collections_Generic_List_object___FindIndex(
                   allMapGimmickInfoList,
                   (System_Predicate_T__o *)v480,
                   (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__FindIndex__);
          v484 = v483;
          if ( v483 != -1 )
          {
            v485 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
            if ( !v485 )
              sub_1BCAA3C(0LL, v484);
            System_Collections_Generic_List_object___RemoveAt(
              v485,
              v484,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__RemoveAt__);
          }
          v486 = v1069->fields._mapInfo_5__16;
          if ( !v486 )
            sub_1BCAA3C(0LL, v484);
          mapGimmickInfo = MapControl_MapInfo__AddMapGimmick(v486, v473->fields.mapGimmickId, 0LL);
          QuestTree__SetupMapGimmickInfo(_4__this, &mapGimmickInfo, 0LL);
          v494 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapGimmickInfoList;
          if ( !v494 )
            sub_1BCAA3C(0LL, v487);
          v495 = (Il2CppObject *)mapGimmickInfo;
          v496 = v494->fields._items;
          v497 = Method_System_Collections_Generic_List_MapControl_MapGimmickInfo__Add__;
          ++v494->fields._version;
          if ( !v496 )
            sub_1BCAA3C(v494, v495);
          v498 = v494->fields._size;
          if ( (unsigned int)v498 >= v496->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v494,
              v495,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v497[4] + 192LL) + 112LL));
          }
          else
          {
            v499 = &v496->obj.klass + v498;
            v494->fields._size = v498 + 1;
            v499[4] = (Il2CppClass *)v495;
            sub_1BCA784((PartyOrganizationUtility_o *)(v499 + 4), (int64_t)v495, v488, v489, v490, v491, v492, v493);
          }
        }
      }
      v500 = v1069;
      v1069->fields.__2__current = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v500->fields.__2__current, 0LL, v464, v465, v466, v467, v468, v469);
      v501 = v1069;
      v502 = 2;
      goto LABEL_326;
    case 2:
      v8->fields._mapInfo_5__16 = 0LL;
      p_mapInfo_5__16 = (PartyOrganizationUtility_o *)&v8->fields._mapInfo_5__16;
      LODWORD(p_mapInfo_5__16[-2].fields.temporaryPartyInfo) = -1;
      sub_1BCA784(p_mapInfo_5__16, 0LL, v2, v3, v4, v5, v6, v7);
      v508 = v1069;
      mapCount_5__13 = v1069->fields._mapCount_5__13;
      v510 = v1069->fields._mapIdx_5__12 + 1;
      v1069->fields._mapIdx_5__12 = v510;
LABEL_115:
      if ( v510 < mapCount_5__13 )
      {
        v522 = v508->fields._mapList_5__15;
        if ( !v522 )
          sub_1BCAA3C(v504, v505);
        if ( v510 >= v522->max_length )
          sub_1BCAA44(v504, v505);
        v523 = v522->m_Items[v510];
        if ( !v523 )
          sub_1BCAA3C(v504, v505);
        v524 = v508->fields.__8__1;
        if ( !v524 )
          sub_1BCAA3C(v504, v505);
        v524->fields.mapId = v523->fields.id;
        v525 = v508->fields._warInfo_5__14;
        if ( !v525 )
          sub_1BCAA3C(v504, v505);
        mapInfoList = (System_Collections_Generic_List_object__o *)v525->fields.mapInfoList;
        if ( mapInfoList )
        {
          _9__3 = (System_Predicate_object__o *)v524->fields.__9__3;
          if ( !_9__3 )
          {
            _9__3 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                    System_Predicate_MapControl_MapInfo__TypeInfo,
                                                    v505,
                                                    v506,
                                                    v507);
            System_Predicate_object____ctor(
              _9__3,
              (Il2CppObject *)v524,
              Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__3__,
              0LL);
            v524->fields.__9__3 = (struct System_Predicate_MapControl_MapInfo__o *)_9__3;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v524->fields.__9__3,
              (int64_t)_9__3,
              v528,
              v529,
              v530,
              v531,
              v532,
              v533);
          }
          v504 = System_Collections_Generic_List_object___FindIndex(
                   mapInfoList,
                   (System_Predicate_T__o *)_9__3,
                   (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
          v505 = (unsigned int)v504;
          if ( (_DWORD)v504 != -1 )
          {
            v534 = v1069->fields._warInfo_5__14;
            if ( !v534 )
              sub_1BCAA3C(v504, (unsigned int)v504);
            v535 = (System_Collections_Generic_List_object__o *)v534->fields.mapInfoList;
            if ( !v535 )
              sub_1BCAA3C(0LL, v505);
            System_Collections_Generic_List_object___RemoveAt(
              v535,
              v505,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
          }
        }
        if ( !_4__this )
          sub_1BCAA3C(v504, v505);
        v536 = v1069->fields.__8__1;
        if ( !v536 )
          sub_1BCAA3C(v504, v505);
        allMapInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        _9__4 = (System_Predicate_object__o *)v536->fields.__9__4;
        if ( !_9__4 )
        {
          _9__4 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                  System_Predicate_MapControl_MapInfo__TypeInfo,
                                                  v505,
                                                  v506,
                                                  v507);
          System_Predicate_object____ctor(
            _9__4,
            (Il2CppObject *)v536,
            Method_QuestTree___c__DisplayClass42_1__mfBaseTreeUpdateWithOpenCheck_b__4__,
            0LL);
          v536->fields.__9__4 = (struct System_Predicate_MapControl_MapInfo__o *)_9__4;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v536->fields.__9__4,
            (int64_t)_9__4,
            v539,
            v540,
            v541,
            v542,
            v543,
            v544);
        }
        if ( !allMapInfoList )
          sub_1BCAA3C(v504, v505);
        v545 = System_Collections_Generic_List_object___FindIndex(
                 allMapInfoList,
                 (System_Predicate_T__o *)_9__4,
                 (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_MapInfo__FindIndex__);
        v546 = (unsigned int)v545;
        if ( (_DWORD)v545 != -1 )
        {
          v547 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
          if ( !v547 )
            sub_1BCAA3C(0LL, v546);
          System_Collections_Generic_List_object___RemoveAt(
            v547,
            v546,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_MapInfo__RemoveAt__);
        }
        v548 = v1069->fields.__8__1;
        if ( !v548 )
          sub_1BCAA3C(v545, v546);
        v549 = v1069->fields._warInfo_5__14;
        if ( !v549 )
          sub_1BCAA3C(0LL, v546);
        v550 = MapControl_WarInfo__AddChild(v549, v548->fields.mapId, 0LL);
        v551 = v1069;
        v1069->fields._mapInfo_5__16 = v550;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v551->fields._mapInfo_5__16,
          (int64_t)v550,
          v552,
          v553,
          v554,
          v555,
          v556,
          v557);
        v565 = (System_Collections_Generic_List_object__o *)_4__this->fields.allMapInfoList;
        if ( !v565 )
          sub_1BCAA3C(0LL, v558);
        v566 = v565->fields._items;
        v567 = (Il2CppObject *)v1069->fields._mapInfo_5__16;
        v568 = Method_System_Collections_Generic_List_MapControl_MapInfo__Add__;
        ++v565->fields._version;
        if ( !v566 )
          sub_1BCAA3C(v565, v567);
        v569 = v565->fields._size;
        if ( (unsigned int)v569 >= v566->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v565,
            v567,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v568[4] + 192LL) + 112LL));
        }
        else
        {
          v570 = &v566->obj.klass + v569;
          v565->fields._size = v569 + 1;
          v570[4] = (Il2CppClass *)v567;
          sub_1BCA784((PartyOrganizationUtility_o *)(v570 + 4), (int64_t)v567, v559, v560, v561, v562, v563, v564);
        }
        v743 = v1069->fields.__8__1;
        if ( !v743 )
          sub_1BCAA3C(v571, v572);
        spotMaster_5__3 = v1069->fields._spotMaster_5__3;
        if ( !spotMaster_5__3 )
          sub_1BCAA3C(0LL, v572);
        v745 = SpotMaster__getList(spotMaster_5__3, v743->fields.mapId, 0LL);
        v749 = v745;
        if ( !v745 )
          sub_1BCAA3C(0LL, v746);
        v750 = v745->max_length;
        if ( v750 >= 1 )
        {
          for ( k = 0; k != v750; ++k )
          {
            v752 = (QuestTree___c__DisplayClass42_2_o *)sub_1BCAA2C(
                                                          QuestTree___c__DisplayClass42_2_TypeInfo,
                                                          v746,
                                                          v747,
                                                          v748);
            QuestTree___c__DisplayClass42_2___ctor(v752, 0LL);
            if ( k >= v749->max_length )
              sub_1BCAA44(v753, v754);
            v757 = v749->m_Items[k];
            if ( !v757 )
              sub_1BCAA3C(v753, v754);
            if ( !v752 )
              sub_1BCAA3C(v753, v754);
            v752->fields.spotId = v757->fields.id;
            allSpotInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            v759 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                   System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                   v754,
                                                   v755,
                                                   v756);
            System_Predicate_object____ctor(
              v759,
              (Il2CppObject *)v752,
              Method_QuestTree___c__DisplayClass42_2__mfBaseTreeUpdateWithOpenCheck_b__5__,
              0LL);
            if ( !allSpotInfoList )
              sub_1BCAA3C(v760, v761);
            v762 = System_Collections_Generic_List_object___FindIndex(
                     allSpotInfoList,
                     (System_Predicate_T__o *)v759,
                     (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__FindIndex__);
            v763 = v762;
            if ( v762 != -1 )
            {
              v764 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
              if ( !v764 )
                sub_1BCAA3C(0LL, v763);
              System_Collections_Generic_List_object___RemoveAt(
                v764,
                v763,
                (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__RemoveAt__);
            }
            v765 = v1069->fields._mapInfo_5__16;
            if ( !v765 )
              sub_1BCAA3C(0LL, v763);
            spotInfo = MapControl_MapInfo__AddChild(v765, v752->fields.spotId, 0LL);
            QuestTree__SetupSpotInfo(_4__this, v757, &spotInfo, 0LL);
            v773 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
            if ( !v773 )
              sub_1BCAA3C(0LL, v766);
            v774 = (Il2CppObject *)spotInfo;
            v775 = v773->fields._items;
            v776 = Method_System_Collections_Generic_List_MapControl_SpotInfo__Add__;
            ++v773->fields._version;
            if ( !v775 )
              sub_1BCAA3C(v773, v774);
            v777 = v773->fields._size;
            if ( (unsigned int)v777 >= v775->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v773,
                v774,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v776[4] + 192LL) + 112LL));
            }
            else
            {
              v778 = &v775->obj.klass + v777;
              v773->fields._size = v777 + 1;
              v778[4] = (Il2CppClass *)v774;
              sub_1BCA784((PartyOrganizationUtility_o *)(v778 + 4), (int64_t)v774, v767, v768, v769, v770, v771, v772);
            }
          }
        }
        v779 = QuestTree__EnumerateBlankEarthSpotInfo(
                 _4__this,
                 v1069->fields._mapInfo_5__16,
                 v1069->fields._blankEarthSpotMaster_5__4,
                 0LL);
        v780 = System_Linq_Enumerable__ToArray_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v779,
                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_MapControl_SpotInfo___);
        v788 = (System_Collections_Generic_IEnumerable_TSource__o *)v780;
        if ( !v780 )
          sub_1BCAA3C(0LL, v781);
        if ( *(_QWORD *)&v780->max_length )
        {
          v789 = sub_1BCAA2C(QuestTree___c__DisplayClass42_3_TypeInfo, v781, v782, v783);
          QuestTree___c__DisplayClass42_3___ctor((QuestTree___c__DisplayClass42_3_o *)v789, 0LL);
          v793 = QuestTree___c_TypeInfo;
          if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, v790);
            v793 = QuestTree___c_TypeInfo;
          }
          _9__42_6 = (System_Func_object__int__o *)v793->static_fields->__9__42_6;
          if ( !_9__42_6 )
          {
            if ( !v793->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v793, v790);
              v793 = QuestTree___c_TypeInfo;
            }
            v795 = (Il2CppObject *)v793->static_fields->__9;
            _9__42_6 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                       System_Func_MapControl_SpotInfo__int__TypeInfo,
                                                       v790,
                                                       v791,
                                                       v792);
            System_Func_object__int____ctor(
              _9__42_6,
              v795,
              Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_6__,
              0LL);
            static_fields = QuestTree___c_TypeInfo->static_fields;
            static_fields->__9__42_6 = (struct System_Func_MapControl_SpotInfo__int__o *)_9__42_6;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__42_6,
              (int64_t)_9__42_6,
              v797,
              v798,
              v799,
              v800,
              v801,
              v802);
          }
          v803 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                                  v788,
                                                                  (System_Func_TSource__TResult__o *)_9__42_6,
                                                                  (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_MapControl_SpotInfo__int___);
          v807 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_HashSet_int__TypeInfo,
                                                                v804,
                                                                v805,
                                                                v806);
          System_Collections_Generic_HashSet_int____ctor_54873236(
            v807,
            v803,
            (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
          if ( !v789 )
            sub_1BCAA3C(v808, v809);
          *(_QWORD *)(v789 + 16) = v807;
          sub_1BCA784((PartyOrganizationUtility_o *)(v789 + 16), (int64_t)v807, v810, v811, v812, v813, v814, v815);
          v816 = (System_Collections_Generic_List_T__o *)_4__this->fields.allSpotInfoList;
          v820 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_MapControl_SpotInfo__bool__TypeInfo,
                                                  v817,
                                                  v818,
                                                  v819);
          System_Func_object__bool____ctor(
            v820,
            (Il2CppObject *)v789,
            Method_QuestTree___c__DisplayClass42_3__mfBaseTreeUpdateWithOpenCheck_b__7__,
            0LL);
          BasicHelper__RemoveElements_object_(
            v816,
            (System_Func_T__bool__o *)v820,
            (const MethodInfo_2F0233C *)Method_BasicHelper_RemoveElements_MapControl_SpotInfo___);
          v822 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
          if ( !v822 )
            sub_1BCAA3C(0LL, v821);
          System_Collections_Generic_List_object___AddRange(
            v822,
            (System_Collections_Generic_IEnumerable_T__o *)v788,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__AddRange__);
        }
        v823 = v1069;
        v1069->fields.__2__current = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v823->fields.__2__current, 0LL, v782, v783, v784, v785, v786, v787);
        result = 1;
        v1069->fields.__1__state = 1;
        return result;
      }
      if ( !_4__this )
        sub_1BCAA3C(v504, v505);
      v573 = (System_Collections_Generic_List_object__o *)_4__this->fields.allWarInfoList;
      v574 = QuestTree___c_TypeInfo;
      if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, v505);
        v574 = QuestTree___c_TypeInfo;
      }
      _9__42_2 = (System_Comparison_T__o *)v574->static_fields->__9__42_2;
      if ( !_9__42_2 )
      {
        if ( !v574->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v574, v505);
          v574 = QuestTree___c_TypeInfo;
        }
        v576 = (Il2CppObject *)v574->static_fields->__9;
        _9__42_2 = (System_Comparison_T__o *)sub_1BCAA2C(
                                               System_Comparison_MapControl_WarInfo__TypeInfo,
                                               v505,
                                               v506,
                                               v507);
        System_Comparison_object____ctor(
          _9__42_2,
          v576,
          Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_2__,
          0LL);
        v577 = QuestTree___c_TypeInfo->static_fields;
        v577->__9__42_2 = (struct System_Comparison_MapControl_WarInfo__o *)_9__42_2;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v577->__9__42_2,
          (int64_t)_9__42_2,
          v578,
          v579,
          v580,
          v581,
          v582,
          v583);
      }
      if ( !v573 )
        sub_1BCAA3C(v504, v505);
      System_Collections_Generic_List_object___Sort_56244000(
        v573,
        _9__42_2,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MapControl_WarInfo__Sort__);
      v584 = v1069;
      v1069->fields.__8__1 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v584->fields.__8__1, 0LL, v585, v586, v587, v588, v589, v590);
      v591 = v1069;
      v1069->fields._warInfo_5__14 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v591->fields._warInfo_5__14, 0LL, v592, v593, v594, v595, v596, v597);
      v598 = v1069;
      v1069->fields._mapList_5__15 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v598->fields._mapList_5__15, 0LL, v599, v600, v601, v602, v603, v604);
      v608 = (QuestTree___c__DisplayClass42_6_o *)sub_1BCAA2C(
                                                    QuestTree___c__DisplayClass42_6_TypeInfo,
                                                    v605,
                                                    v606,
                                                    v607);
      QuestTree___c__DisplayClass42_6___ctor(v608, 0LL);
      v609 = v1069;
      v1069->fields.__8__3 = v608;
      sub_1BCA784((PartyOrganizationUtility_o *)&v609->fields.__8__3, (int64_t)v608, v610, v611, v612, v613, v614, v615);
      v616 = v1069->fields._nowTime_5__11;
      v620 = (MapControl_WarInfo_o *)sub_1BCAA2C(MapControl_WarInfo_TypeInfo, v617, v618, v619);
      MapControl_WarInfo___ctor(v620, v616, 0LL);
      v621 = v1069;
      v1069->fields._warInfo_5__14 = v620;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v621->fields._warInfo_5__14,
        (int64_t)v620,
        v622,
        v623,
        v624,
        v625,
        v626,
        v627);
      v631 = (MapControl_MapInfo_o *)sub_1BCAA2C(MapControl_MapInfo_TypeInfo, v628, v629, v630);
      MapControl_MapInfo___ctor(v631, 0LL);
      v632 = v1069;
      v1069->fields._mapInfo_5__16 = v631;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v632->fields._mapInfo_5__16,
        (int64_t)v631,
        v633,
        v634,
        v635,
        v636,
        v637,
        v638);
      v642 = (MapControl_SpotInfo_o *)sub_1BCAA2C(MapControl_SpotInfo_TypeInfo, v639, v640, v641);
      MapControl_SpotInfo___ctor(v642, 0LL);
      v643 = v1069;
      v1069->fields._spotInfo_5__17 = v642;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v643->fields._spotInfo_5__17,
        (int64_t)v642,
        v644,
        v645,
        v646,
        v647,
        v648,
        v649);
      v653 = (WarEntity_o *)sub_1BCAA2C(WarEntity_TypeInfo, v650, v651, v652);
      WarEntity___ctor(v653, 0LL);
      v654 = v1069;
      v1069->fields._warEnt_5__18 = v653;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v654->fields._warEnt_5__18,
        (int64_t)v653,
        v655,
        v656,
        v657,
        v658,
        v659,
        v660);
      v662 = v1069->fields._dataManager_5__2;
      if ( !v662 )
        sub_1BCAA3C(0LL, v661);
      v663 = DataManager__GetMasterData_object_(
               v662,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v664 = v1069;
      v1069->fields._userQuestMaster_5__19 = (struct UserQuestMaster_o *)v663;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v664->fields._userQuestMaster_5__19,
        (int64_t)v663,
        v665,
        v666,
        v667,
        v668,
        v669,
        v670);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v671);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
      v674 = v1069;
      _8__3 = v1069->fields.__8__3;
      if ( !_8__3 )
        sub_1BCAA3C(Master_object, v673);
      _8__3->fields.nowSpotId = -1;
      *(_QWORD *)&v674->fields._nowMapId_5__20 = -1LL;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v673);
      isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
      if ( !v1069 )
        sub_1BCAA3C(isSavedMemoryMode, v677);
      if ( isSavedMemoryMode )
        v680 = 500;
      else
        v680 = 5000;
      v681 = v1069->fields.__8__3;
      v1069->fields._breakInterval_5__22 = v680;
      v682 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v677,
                                                         v678,
                                                         v679);
      System_Collections_Generic_List_int____ctor(
        v682,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v681 )
        sub_1BCAA3C(v683, v684);
      v681->fields.spotInfoList = v682;
      sub_1BCA784((PartyOrganizationUtility_o *)&v681->fields, (int64_t)v682, v685, v686, v687, v688, v689, v690);
      v1069->fields._cnt_5__23 = 0;
      v692 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      if ( !v692 )
        sub_1BCAA3C(0LL, v691);
      System_Collections_Generic_List_object___GetEnumerator(
        v1059,
        v692,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__GetEnumerator__);
      v693 = v1069;
      v694 = *(_OWORD *)&v1059[0].fields._list;
      p__7__wrap24 = (PartyOrganizationUtility_o *)&v1069->fields.__7__wrap24;
      v1059[1] = v1059[0];
      v1069->fields.__7__wrap24.fields._current = (struct MapControl_SpotInfo_o *)v1059[0].fields._current;
      *(_OWORD *)&v693->fields.__7__wrap24.fields._list = v694;
      sub_1BCA784(p__7__wrap24, 0LL, v696, v697, v698, v699, v700, v701);
      v8 = v1069;
LABEL_163:
      v8->fields.__1__state = -3;
      while ( 1 )
      {
        v703 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 (System_Collections_Generic_List_Enumerator_object__o *)&v8->fields.__7__wrap24,
                 (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__MoveNext__);
        v704 = v1069;
        if ( !v703 )
          break;
        current = v1069->fields.__7__wrap24.fields._current;
        ++v1069->fields._cnt_5__23;
        if ( !current )
          sub_1BCAA3C(v704, v702);
        Mine = MapControl_SpotInfo__GetMine(current, 0LL);
        if ( !Mine )
          sub_1BCAA3C(0LL, v707);
        v8 = v1069;
        v714 = v1069->fields.__8__2;
        if ( !v714 )
          sub_1BCAA3C(Mine, v707);
        if ( Mine->fields.warId == v714->fields.targetWarId )
        {
          v715 = v1069->fields.__8__3;
          if ( !v715 )
            sub_1BCAA3C(Mine, v707);
          spotInfoList = v715->fields.spotInfoList;
          if ( !spotInfoList )
            sub_1BCAA3C(0LL, v707);
          spotId = (unsigned int)current->fields.spotId;
          v718 = spotInfoList->fields._items;
          v719 = Method_System_Collections_Generic_List_int__Add__;
          ++spotInfoList->fields._version;
          if ( !v718 )
            sub_1BCAA3C(spotInfoList, spotId);
          v720 = spotInfoList->fields._size;
          if ( (unsigned int)v720 >= v718->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              spotInfoList,
              spotId,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v719[4] + 192LL) + 112LL));
            v8 = v1069;
          }
          else
          {
            spotInfoList->fields._size = v720 + 1;
            v718->m_Items[v720 + 1] = spotId;
          }
        }
        HIDWORD(v721) = 28633112 - 1775253149 * v8->fields._cnt_5__23;
        LODWORD(v721) = HIDWORD(v721);
        if ( (unsigned int)(v721 >> 2) < 0xDA740D )
        {
          v8->fields.__2__current = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v708, v709, v710, v711, v712, v713);
          v501 = v1069;
          v502 = 3;
LABEL_326:
          v501->fields.__1__state = v502;
          return 1;
        }
      }
      QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42____m__Finally1(v1069, v702);
      v723 = v1069;
      questMaster_5__5 = (DataMasterBase_o *)v1069->fields._questMaster_5__5;
      v1069->fields.__7__wrap24.fields._list = 0LL;
      *(_QWORD *)&v723->fields.__7__wrap24.fields._index = 0LL;
      v723->fields.__7__wrap24.fields._current = 0LL;
      if ( !questMaster_5__5 )
        sub_1BCAA3C(0LL, v722);
      Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                              questMaster_5__5,
                                                                              (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_QuestEntity___);
      v726 = (Il2CppObject *)v1069->fields.__8__3;
      v730 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestEntity__bool__TypeInfo, v727, v728, v729);
      System_Func_object__bool____ctor(
        v730,
        v726,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__10__,
        0LL);
      v731 = System_Linq_Enumerable__Where_object_(
               Entitys_object,
               (System_Func_TSource__bool__o *)v730,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v732 = System_Linq_Enumerable__ToArray_object_(
               v731,
               (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_QuestEntity___);
      v733 = v1069;
      v1069->fields._questList_5__24 = (struct QuestEntity_array *)v732;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v733->fields._questList_5__24,
        (int64_t)v732,
        v734,
        v735,
        v736,
        v737,
        v738,
        v739);
      v740 = v1069;
      v1069->fields._mapCount_5__13 = 0;
      mapIdx_5__12 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v740->fields._questList_5__24,
                       (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_QuestEntity___);
      v8 = v1069;
      v742 = v1069->fields._mapCount_5__13;
      v1069->fields._mapIdx_5__12 = mapIdx_5__12;
      break;
    case 3:
      goto LABEL_163;
    case 4:
      v423 = v8->fields._mapCount_5__13;
      v8->fields.__1__state = -1;
      goto LABEL_451;
    case 5:
      endCallback = v8->fields.endCallback;
      v8->fields.__1__state = -1;
      if ( !endCallback )
        sub_1BCAA3C(this, method);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
        endCallback->fields.original_method_info,
        *(_QWORD *)&endCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
  while ( v742 < (int)mapIdx_5__12 )
  {
    questList_5__24 = v8->fields._questList_5__24;
    if ( !questList_5__24 )
      sub_1BCAA3C(mapIdx_5__12, method);
    if ( v742 >= questList_5__24->max_length )
      sub_1BCAA44(mapIdx_5__12, method);
    v826 = questList_5__24->m_Items[v742];
    if ( !v826 )
      sub_1BCAA3C(mapIdx_5__12, method);
    v827 = v8->fields.__8__3;
    if ( !v827 )
      sub_1BCAA3C(mapIdx_5__12, method);
    v827->fields.questId = v826->fields.id;
    userQuestMaster_5__19 = v8->fields._userQuestMaster_5__19;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    UserId = NetworkManager__get_UserId(0LL);
    v831 = v1069->fields.__8__3;
    if ( !v831 )
      sub_1BCAA3C(UserId, v830);
    if ( !userQuestMaster_5__19 )
      sub_1BCAA3C(UserId, v830);
    if ( UserQuestMaster__TryGetEntity(userQuestMaster_5__19, &v1063, UserId, v831->fields.questId, 0LL) )
    {
      if ( !v1063 )
        sub_1BCAA3C(0LL, v832);
      QuestPhase = UserQuestEntity__getQuestPhase(v1063, 0LL);
    }
    else
    {
      QuestPhase = 0;
    }
    SpotId_40196836 = (MapEntity_o *)QuestEntity__getSpotId_40196836(v826, QuestPhase + 1, 0LL);
    v838 = v1069;
    v839 = v1069->fields.__8__3;
    if ( !v839 )
      sub_1BCAA3C(SpotId_40196836, warId);
    if ( v839->fields.nowSpotId == (_DWORD)SpotId_40196836 )
    {
      if ( !_4__this )
        sub_1BCAA3C(SpotId_40196836, warId);
    }
    else
    {
      v839->fields.nowSpotId = (int)SpotId_40196836;
      if ( !_4__this )
        sub_1BCAA3C(SpotId_40196836, warId);
      v840 = (System_Collections_Generic_List_object__o *)_4__this->fields.allSpotInfoList;
      _9__12 = (System_Predicate_object__o *)v839->fields.__9__12;
      if ( !_9__12 )
      {
        _9__12 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                 System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                 warId,
                                                 v836,
                                                 v837);
        System_Predicate_object____ctor(
          _9__12,
          (Il2CppObject *)v839,
          Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__12__,
          0LL);
        v839->fields.__9__12 = (struct System_Predicate_MapControl_SpotInfo__o *)_9__12;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v839->fields.__9__12,
          (int64_t)_9__12,
          v842,
          v843,
          v844,
          v845,
          v846,
          v847);
      }
      if ( !v840 )
        sub_1BCAA3C(SpotId_40196836, warId);
      v848 = System_Collections_Generic_List_object___Find(
               v840,
               (System_Predicate_T__o *)_9__12,
               (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
      v838->fields._spotInfo_5__17 = (struct MapControl_SpotInfo_o *)v848;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v838->fields._spotInfo_5__17,
        (int64_t)v848,
        v849,
        v850,
        v851,
        v852,
        v853,
        v854);
      spotInfo_5__17 = v1069->fields._spotInfo_5__17;
      if ( !spotInfo_5__17 )
        sub_1BCAA3C(0LL, v855);
      SpotId_40196836 = (MapEntity_o *)MapControl_SpotInfo__GetMapID(spotInfo_5__17, 0LL);
      warId = (unsigned int)SpotId_40196836;
      if ( v1069->fields._nowMapId_5__20 != (_DWORD)SpotId_40196836 )
      {
        v1069->fields._nowMapId_5__20 = (int)SpotId_40196836;
        MapInfoByMapID = QuestTree__mfGetMapInfoByMapID(_4__this, (int32_t)SpotId_40196836, 0LL);
        v858 = v1069;
        v1069->fields._mapInfo_5__16 = MapInfoByMapID;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v858->fields._mapInfo_5__16,
          (int64_t)MapInfoByMapID,
          v859,
          v860,
          v861,
          v862,
          v863,
          v864);
        v866 = v1069->fields._mapInfo_5__16;
        if ( !v866 )
          sub_1BCAA3C(0LL, v865);
        SpotId_40196836 = MapControl_MapInfo__GetMine(v866, 0LL);
        if ( !SpotId_40196836 )
          sub_1BCAA3C(0LL, v867);
        warId = (unsigned int)SpotId_40196836->fields.warId;
        if ( v1069->fields._nowWarId_5__21 != (_DWORD)warId )
        {
          v1069->fields._nowWarId_5__21 = warId;
          WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(_4__this, warId, 0LL);
          v869 = v1069;
          v1069->fields._warInfo_5__14 = WarInfoByWarID;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v869->fields._warInfo_5__14,
            (int64_t)WarInfoByWarID,
            v870,
            v871,
            v872,
            v873,
            v874,
            v875);
          v877 = v1069->fields._warInfo_5__14;
          if ( !v877 )
            sub_1BCAA3C(0LL, v876);
          v878 = MapControl_WarInfo__GetMine(v877, 0LL);
          v879 = v1069;
          v1069->fields._warEnt_5__18 = v878;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v879->fields._warEnt_5__18,
            (int64_t)v878,
            v880,
            v881,
            v882,
            v883,
            v884,
            v885);
        }
      }
    }
    v886 = v1069->fields.__8__3;
    if ( !v886 )
      sub_1BCAA3C(SpotId_40196836, warId);
    allQuestInfoList = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    _9__13 = (System_Predicate_object__o *)v886->fields.__9__13;
    if ( !_9__13 )
    {
      _9__13 = (System_Predicate_object__o *)sub_1BCAA2C(
                                               System_Predicate_MapControl_QuestInfo__TypeInfo,
                                               warId,
                                               v836,
                                               v837);
      System_Predicate_object____ctor(
        _9__13,
        (Il2CppObject *)v886,
        Method_QuestTree___c__DisplayClass42_6__mfBaseTreeUpdateWithOpenCheck_b__13__,
        0LL);
      v886->fields.__9__13 = (struct System_Predicate_MapControl_QuestInfo__o *)_9__13;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v886->fields.__9__13,
        (int64_t)_9__13,
        v889,
        v890,
        v891,
        v892,
        v893,
        v894);
    }
    if ( !allQuestInfoList )
      sub_1BCAA3C(SpotId_40196836, warId);
    v895 = System_Collections_Generic_List_object___FindIndex(
             allQuestInfoList,
             (System_Predicate_T__o *)_9__13,
             (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__FindIndex__);
    v896 = v895;
    if ( v895 != -1 )
    {
      v897 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
      if ( !v897 )
        sub_1BCAA3C(0LL, v896);
      System_Collections_Generic_List_object___RemoveAt(
        v897,
        v896,
        (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__RemoveAt__);
    }
    v898 = v1069->fields._warInfo_5__14;
    if ( !v1063 )
    {
      if ( !v898 )
        sub_1BCAA3C(0LL, v896);
      goto LABEL_371;
    }
    if ( !v898 )
      sub_1BCAA3C(0LL, v896);
    MapControl_WarInfo__SetStatusCheckFlag(v898, 1, 0, 0LL);
    if ( !v1063 )
      sub_1BCAA3C(0LL, v899);
    HasStatus = UserQuestEntity__HasStatus(v1063, 8, 0LL);
    if ( !HasStatus )
    {
      v902 = v1069->fields._warInfo_5__14;
      if ( !v902 )
        sub_1BCAA3C(0LL, v901);
      goto LABEL_373;
    }
    if ( !v1063 )
      sub_1BCAA3C(HasStatus, v901);
    if ( v1063->fields.challengeNum >= 1 )
    {
      v902 = v1069->fields._warInfo_5__14;
      if ( !v902 )
        sub_1BCAA3C(0LL, v901);
LABEL_373:
      MapControl_WarInfo__SetStatusCheckFlag(v902, 4, 0, 0LL);
    }
    if ( !v1063 )
      sub_1BCAA3C(0LL, v901);
    v906 = UserQuestEntity__getClearNum(v1063, 0LL) < 1;
    v898 = v1069->fields._warInfo_5__14;
    if ( v906 )
    {
      if ( !v898 )
        sub_1BCAA3C(0LL, v907);
LABEL_371:
      MapControl_WarInfo__SetStatusCheckFlag(v898, 2, 0, 0LL);
      v905 = 0;
      goto LABEL_385;
    }
    if ( !v898 )
      sub_1BCAA3C(0LL, v907);
    v903 = MapControl_WarInfo__GetMine(v898, 0LL);
    if ( !v903 )
      sub_1BCAA3C(0LL, v904);
    v908 = v1069->fields.__8__3;
    if ( !v908 )
      sub_1BCAA3C(v903, v904);
    if ( v903->fields.lastQuestId == v908->fields.questId )
    {
      v909 = v1069->fields._warInfo_5__14;
      if ( !v909 )
        sub_1BCAA3C(0LL, v904);
      v905 = 1;
      MapControl_WarInfo__SetStatusCheckFlag(v909, 8, 1, 0LL);
    }
    else
    {
      v905 = 1;
    }
LABEL_385:
    v910 = v1069->fields.__8__3;
    if ( !v910 )
      sub_1BCAA3C(v903, v904);
    v911 = v1069->fields._spotInfo_5__17;
    if ( !v911 )
      sub_1BCAA3C(0LL, v904);
    v912 = MapControl_SpotInfo__AddChild(v911, v910->fields.questId, 0LL);
    v919 = v1069->fields._warInfo_5__14;
    if ( !v919 )
      sub_1BCAA3C(v912, 0LL);
    v920 = (int64_t)v912;
    if ( !v912 )
      sub_1BCAA3C(0LL, v919);
    v921 = v919->fields.warId;
    v912->fields._WarInfo_k__BackingField = v919;
    v912->fields.warId = v921;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v912->fields._WarInfo_k__BackingField,
      (int64_t)v919,
      v913,
      v914,
      v915,
      v916,
      v917,
      v918);
    v922 = v1069->fields._spotInfo_5__17;
    *(_QWORD *)(v920 + 96) = v922;
    sub_1BCA784((PartyOrganizationUtility_o *)(v920 + 96), (int64_t)v922, v923, v924, v925, v926, v927, v928);
    *(_QWORD *)(v920 + 144) = QuestTree__GetEndTime(_4__this, (MapControl_QuestInfo_o *)v920, 0LL);
    warEnt_5__18 = v1069->fields._warEnt_5__18;
    if ( !warEnt_5__18 )
      sub_1BCAA3C(0LL, v929);
    IsStartTypeQuest = WarEntity__IsStartTypeQuest(warEnt_5__18, 0LL);
    if ( IsStartTypeQuest )
    {
      v933 = v1069->fields._warEnt_5__18;
      if ( !v933 )
        sub_1BCAA3C(IsStartTypeQuest, v932);
      v934 = v1069->fields.__8__3;
      if ( !v934 )
        sub_1BCAA3C(IsStartTypeQuest, v932);
      if ( v933->fields.targetId == v934->fields.questId )
      {
        IsStartTypeQuest = WarEntity__HasFlag(v1069->fields._warEnt_5__18, 0x8000, 0LL);
        if ( !IsStartTypeQuest )
          goto LABEL_404;
      }
    }
    v935 = v1069->fields._warEnt_5__18;
    if ( !v935 )
      sub_1BCAA3C(IsStartTypeQuest, v932);
    v936 = v1069->fields._eventStatusQuestMismatchDictionary_5__10;
    if ( !v936 )
      sub_1BCAA3C(0LL, v932);
    v937 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)v936,
             v935->fields.id,
             &value,
             (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    if ( v937 )
    {
      v939 = v1069->fields.__8__3;
      if ( !v939 )
        sub_1BCAA3C(v937, v938);
      if ( !value )
        sub_1BCAA3C(0LL, v938);
      if ( System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             v939->fields.questId,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
LABEL_404:
        MapControl_QuestInfo__SetDispType((MapControl_QuestInfo_o *)v920, 0, 0, 0, 0LL, 0, 0LL);
        *(_DWORD *)(v920 + 36) = 0;
LABEL_405:
        v942 = 1;
        goto LABEL_406;
      }
    }
    if ( QuestTree__CheckQuestOpen(_4__this, v826, (MapControl_QuestInfo_o *)v920, v1069->fields._nowWarId_5__21, 0LL) != 1 )
      goto LABEL_405;
    v941 = v1069->fields._warInfo_5__14;
    if ( !v941 )
      sub_1BCAA3C(0LL, v940);
    MapControl_WarInfo__SetStatusCheckFlag(v941, 1, 0, 0LL);
    v942 = 0;
LABEL_406:
    if ( MapControl_QuestInfo__IsDisaplayable((MapControl_QuestInfo_o *)v920, 0LL) )
    {
      if ( ((v905 | v942) & 1) == 0 )
      {
        if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v920, 0LL) != 8 )
        {
          v945 = v1069->fields._spotInfo_5__17;
          if ( !v945 )
            sub_1BCAA3C(0LL, v944);
          MapControl_SpotInfo__AddQuestCount(v945, 1, 0LL);
        }
        v946 = v1069->fields._spotInfo_5__17;
        if ( !v946 )
          sub_1BCAA3C(0LL, v944);
        MapControl_SpotInfo__AddAvailableQuestId(v946, *(_DWORD *)(v920 + 16), 0LL);
      }
      if ( MapControl_QuestInfo__GetQuestType((MapControl_QuestInfo_o *)v920, 0LL) == 1 )
      {
        v947 = MapControl_QuestInfo__GetMine((MapControl_QuestInfo_o *)v920, 0LL);
        if ( !v947 )
          sub_1BCAA3C(0LL, v948);
        HasFlag = QuestEntity__HasFlag(v947, 0x400000000000LL, 0LL);
        v951 = v1069;
        if ( !HasFlag )
        {
          v952 = v1069->fields._spotInfo_5__17;
          if ( !v952 )
            sub_1BCAA3C(HasFlag, v950);
          v952->fields._IsNext_k__BackingField = 1;
        }
        v953 = v951->fields._mapInfo_5__16;
        if ( !v953 )
          sub_1BCAA3C(HasFlag, v950);
        v953->fields._IsNext_k__BackingField = 1;
      }
      IsDisplayQuestNextIcon = MapControl_QuestInfo__IsDisplayQuestNextIcon((MapControl_QuestInfo_o *)v920, 0LL);
      if ( IsDisplayQuestNextIcon )
      {
        v956 = v1069;
        v957 = v1069->fields._spotInfo_5__17;
        if ( !v957 )
          sub_1BCAA3C(IsDisplayQuestNextIcon, v955);
        v957->fields._IsNext_k__BackingField = 1;
        v958 = v956->fields._mapInfo_5__16;
        if ( !v958 )
          sub_1BCAA3C(IsDisplayQuestNextIcon, v955);
        v958->fields._IsNext_k__BackingField = 1;
      }
      if ( QuestEntity__HasFlag(v826, 0x8000000000LL, 0LL) )
      {
        v959 = v1069->fields._spotInfo_5__17;
        if ( !v959 )
          sub_1BCAA3C(0LL, v943);
        MapControl_SpotInfo__AddFreeQuestCount(v959, 1, 0LL);
      }
    }
    v960 = v1063;
    if ( v1063 )
    {
      v960 = (UserQuestEntity_o *)UserQuestEntity__HasStatus(v1063, 8, 0LL);
      if ( ((unsigned __int8)v960 & 1) != 0 )
      {
        if ( !v1063 )
          sub_1BCAA3C(v960, v943);
        v961 = v1063->fields.challengeNum == 0;
      }
      else
      {
        v961 = 0;
      }
    }
    else
    {
      v961 = 1;
    }
    *(_BYTE *)(v920 + 40) = v961;
    *(_DWORD *)(v920 + 44) = QuestPhase;
    v962 = v1069->fields.__8__3;
    if ( !v962 )
      sub_1BCAA3C(v960, v943);
    questPickupMaster_5__9 = v1069->fields._questPickupMaster_5__9;
    if ( !questPickupMaster_5__9 )
      sub_1BCAA3C(0LL, v943);
    Priority = QuestPickupMaster__GetPriority(questPickupMaster_5__9, v962->fields.questId, 0LL);
    *(_DWORD *)(v920 + 48) = Priority;
    v966 = v1069->fields.__8__3;
    if ( !v966 )
      sub_1BCAA3C(Priority, v965);
    questPhaseMaster_5__6 = v1069->fields._questPhaseMaster_5__6;
    if ( !questPhaseMaster_5__6 )
      sub_1BCAA3C(0LL, v965);
    v968 = QuestPhaseMaster__getList(questPhaseMaster_5__6, v966->fields.questId, 0LL);
    v976 = v968;
    if ( !v968 )
      sub_1BCAA3C(0LL, v969);
    v977 = v968[3];
    v978 = v977 - 1;
    if ( (int)v977 >= 1 )
    {
      v979 = 0;
      while ( 1 )
      {
        v980 = v976[v979 + 4];
        if ( !v980 )
          sub_1BCAA3C(v968, v969);
        v968 = MapControl_QuestInfo__AddChild(
                 (MapControl_QuestInfo_o *)v920,
                 *(_DWORD *)(v980 + 16),
                 *(_DWORD *)(v980 + 20),
                 0LL);
        if ( v978 == v979 )
          break;
        if ( (unsigned int)++v979 >= *((_DWORD *)v976 + 6) )
          sub_1BCAA44(v968, v969);
      }
    }
    v981 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
    if ( !v981 )
      sub_1BCAA3C(0LL, v969);
    v982 = v981->fields._items;
    v983 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
    ++v981->fields._version;
    if ( !v982 )
      sub_1BCAA3C(v981, v969);
    v984 = v981->fields._size;
    if ( (unsigned int)v984 >= v982->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v981,
        (Il2CppObject *)v920,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v983[4] + 192LL) + 112LL));
    }
    else
    {
      v985 = &v982->obj.klass + v984;
      v981->fields._size = v984 + 1;
      v985[4] = (Il2CppClass *)v920;
      sub_1BCA784((PartyOrganizationUtility_o *)(v985 + 4), v920, v970, v971, v972, v973, v974, v975);
    }
    v8 = v1069;
    v423 = v1069->fields._mapCount_5__13;
    if ( v423 && !(v423 % v1069->fields._breakInterval_5__22) )
    {
      v1069->fields.__2__current = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__2__current, 0LL, v2, v3, v986, v987, v988, v989);
      v501 = v1069;
      v502 = 4;
      goto LABEL_326;
    }
LABEL_451:
    mapIdx_5__12 = (unsigned int)v8->fields._mapIdx_5__12;
    v742 = v423 + 1;
    v8->fields._mapCount_5__13 = v742;
  }
  if ( !_4__this )
    sub_1BCAA3C(mapIdx_5__12, method);
  v990 = (System_Collections_Generic_List_object__o *)_4__this->fields.allQuestInfoList;
  v991 = QuestTree___c_TypeInfo;
  if ( !QuestTree___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestTree___c_TypeInfo, method);
    v991 = QuestTree___c_TypeInfo;
  }
  _9__42_11 = (System_Comparison_T__o *)v991->static_fields->__9__42_11;
  if ( !_9__42_11 )
  {
    if ( !v991->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v991, method);
      v991 = QuestTree___c_TypeInfo;
    }
    v993 = (Il2CppObject *)v991->static_fields->__9;
    _9__42_11 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_MapControl_QuestInfo__TypeInfo, method, v2, v3);
    System_Comparison_object____ctor(
      _9__42_11,
      v993,
      Method_QuestTree___c__mfBaseTreeUpdateWithOpenCheck_b__42_11__,
      0LL);
    v994 = QuestTree___c_TypeInfo->static_fields;
    v994->__9__42_11 = (struct System_Comparison_MapControl_QuestInfo__o *)_9__42_11;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v994->__9__42_11,
      (int64_t)_9__42_11,
      v995,
      v996,
      v997,
      v998,
      v999,
      v1000);
  }
  if ( !v990 )
    sub_1BCAA3C(mapIdx_5__12, method);
  System_Collections_Generic_List_object___Sort_56244000(
    v990,
    _9__42_11,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Sort__);
  v1001 = v1069;
  v1069->fields.__8__3 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1001->fields.__8__3, 0LL, v1002, v1003, v1004, v1005, v1006, v1007);
  v1008 = v1069;
  v1069->fields._warInfo_5__14 = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1008->fields._warInfo_5__14,
    0LL,
    v1009,
    v1010,
    v1011,
    v1012,
    v1013,
    v1014);
  v1015 = v1069;
  v1069->fields._mapInfo_5__16 = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1015->fields._mapInfo_5__16,
    0LL,
    v1016,
    v1017,
    v1018,
    v1019,
    v1020,
    v1021);
  v1022 = v1069;
  v1069->fields._spotInfo_5__17 = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1022->fields._spotInfo_5__17,
    0LL,
    v1023,
    v1024,
    v1025,
    v1026,
    v1027,
    v1028);
  v1029 = v1069;
  v1069->fields._warEnt_5__18 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1029->fields._warEnt_5__18, 0LL, v1030, v1031, v1032, v1033, v1034, v1035);
  v1036 = v1069;
  v1069->fields._userQuestMaster_5__19 = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1036->fields._userQuestMaster_5__19,
    0LL,
    v1037,
    v1038,
    v1039,
    v1040,
    v1041,
    v1042);
  v1043 = v1069;
  v1069->fields._questList_5__24 = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1043->fields._questList_5__24,
    0LL,
    v1044,
    v1045,
    v1046,
    v1047,
    v1048,
    v1049);
  v1050 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v1050 )
    sub_1BCAA3C(0LL, v1051);
  CommonUI__SetLoadMode((CommonUI_o *)v1050, 0, 0LL);
  _4__this->fields.isInit = 1;
  v1058 = v1069;
  if ( v1069->fields.endCallback )
  {
    v1069->fields.__2__current = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v1058->fields.__2__current,
      0LL,
      v1052,
      v1053,
      v1054,
      v1055,
      v1056,
      v1057);
    v501 = v1069;
    v502 = 5;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_QuestTree__mfBaseTreeUpdateWithOpenCheck_d__42_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2

  if ( (byte_4B133AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__, method, v2);
    byte_4B133AA = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapControl_SpotInfo__Dispose__);
}