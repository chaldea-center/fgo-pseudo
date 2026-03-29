void PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2C36F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    byte_4D2C36F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v12;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
}


void PartyOrganizationListViewItem___ctor_34811784(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        bool isFixNpc,
        int32_t followerDeckId,
        int32_t initPos,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct FollowerInfo_o **p_followerInfo; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  void *ReturnTypeByQuestId; // x0
  unsigned __int64 v62; // x1
  FollowerInfo_o *followerInfo; // x28
  int32_t v64; // w2
  int32_t v65; // w0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w8
  int32_t followerIndex; // w23
  FollowerInfo_o *v74; // x26
  int32_t v75; // w2
  ServantLeaderInfo_o *v76; // x26
  int32_t v77; // w27
  FollowerInfo_o *v78; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x23
  int32_t v80; // w2
  Il2CppObject *v81; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  int32_t v89; // w1
  struct ServantEntity_o *servantEntity; // x8
  int32_t v91; // w9
  int32_t v92; // w26
  FollowerInfo_o *v93; // x27
  int32_t v94; // w2
  int32_t v95; // w8
  int32_t v96; // w26
  FollowerInfo_o *v97; // x27
  int32_t v98; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  const MethodInfo *v106; // x1
  int32_t v107; // w26
  FollowerInfo_o *v108; // x27
  int32_t v109; // w3
  PartyOrganizationListViewItem_o *v110; // x8
  bool IsGrandServantRestriction; // w0
  int32_t InitPos_k__BackingField; // w1
  bool IsActiveGrandBoardRestriction; // w0
  int32_t v114; // w1
  int v115; // w8
  void *v116; // x24
  unsigned int v117; // w28
  __int64 v118; // x25
  __int64 v119; // x26
  __int64 v120; // x27
  int32_t v121; // w26
  int32_t v122; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  bool IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v127; // x8
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v129; // x8
  UserEventDataLostEntity_o *v130; // x22
  __int64 v131; // x24
  __int64 v132; // x25
  struct ServantEntity_o *v133; // x8
  char v134; // w22
  UserEventDataLostEntity_o *v135; // x23
  __int64 v136; // x24
  __int64 v137; // x25
  struct QuestRestrictionInfo_o *v138; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v140; // x23
  const MethodInfo *v141; // x1
  const MethodInfo *v142; // x2
  const MethodInfo *v143; // x1
  int32_t v144; // w21
  __int64 v145; // x24
  __int64 v146; // x25
  int32_t v147; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v149; // x1
  const MethodInfo *v150; // x3
  QuestRestrictionInfo_o *v151; // x8
  bool IsNotClassBoard; // w20
  bool isOtherValidEventIdFilter; // w2
  QuestPhaseEntity_o *v154; // [xsp+10h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *v155; // [xsp+18h] [xbp-78h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  bool isWhole; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_4D2C371 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C371 = 1;
  }
  isWhole = 0;
  v155 = 0;
  entity = 0;
  v154 = 0;
  v21 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v21;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v28;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity, 0, v35, v36, v37, v38, v39, v40);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.followerInfo,
    (int32_t)follower,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.isFixNpc = isFixNpc;
  followerInfo = this->fields.followerInfo;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  this->fields.followerGrandGraphId = followerGrandGraphId;
  if ( followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v64 = (int)ReturnTypeByQuestId;
      if ( !followerInfo )
        goto LABEL_155;
    }
    else
    {
      v64 = 0;
      if ( !followerInfo )
        goto LABEL_155;
    }
  }
  else
  {
    v64 = 2;
    if ( !followerInfo )
      goto LABEL_155;
  }
  v65 = FollowerInfo__getIndex(followerInfo, followerClassId, v64, followerDeckId, followerGrandGraphId, 0);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v65;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v66, v67, v68, v69, v70, v71);
  v72 = this->fields.followerGrandGraphId;
  followerIndex = this->fields.followerIndex;
  v74 = this->fields.followerInfo;
  this->fields.isOtherValidEventIdFilter = otherValidEventIdFilter;
  if ( v72 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v75 = (int)ReturnTypeByQuestId;
      if ( !v74 )
        goto LABEL_155;
    }
    else
    {
      v75 = 0;
      if ( !v74 )
        goto LABEL_155;
    }
  }
  else
  {
    v75 = 2;
    if ( !v74 )
      goto LABEL_155;
  }
  ReturnTypeByQuestId = FollowerInfo__getServantLeaderInfo(v74, followerIndex, v75, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_155;
  v76 = (ServantLeaderInfo_o *)ReturnTypeByQuestId;
  this->fields._IsGrandServant_k__BackingField = ServantLeaderInfo__get_IsGrandSvt(
                                                   (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                                   0);
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(v76, 0);
  ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_155;
  ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                          (DataManager_o *)ReturnTypeByQuestId,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v77 = this->fields.followerIndex;
  v78 = this->fields.followerInfo;
  v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v80 = (int)ReturnTypeByQuestId;
      if ( !v78 )
        goto LABEL_155;
    }
    else
    {
      v80 = 0;
      if ( !v78 )
        goto LABEL_155;
    }
  }
  else
  {
    v80 = 2;
    if ( !v78 )
      goto LABEL_155;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getSvtId(v78, v77, v80, 0);
  if ( !v79 )
    goto LABEL_155;
  v81 = DataMasterBase_object__object__int___GetEntity(
          v79,
          (int32_t)ReturnTypeByQuestId,
          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v81;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)v81, v83, v84, v85, v86, v87, v88);
  this->fields.cost = 0;
  ReturnTypeByQuestId = ServantLeaderInfo__GetOverwriteStatus(v76, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_155;
  *(_QWORD *)&this->fields.hp = *((_QWORD *)ReturnTypeByQuestId + 2);
  this->fields.rarityId = *((_DWORD *)ReturnTypeByQuestId + 6);
  v89 = *((_DWORD *)ReturnTypeByQuestId + 10);
  this->fields.actualRarity = v89;
  ReturnTypeByQuestId = (void *)ServantLeaderInfo__GetFrameType(v76, v89, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.frameType = (int)ReturnTypeByQuestId;
  if ( !servantEntity )
    goto LABEL_155;
  v91 = this->fields.followerGrandGraphId;
  v92 = this->fields.followerIndex;
  v93 = this->fields.followerInfo;
  this->fields.classId = servantEntity->fields.classId;
  if ( v91 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v94 = (int)ReturnTypeByQuestId;
      if ( !v93 )
        goto LABEL_155;
    }
    else
    {
      v94 = 0;
      if ( !v93 )
        goto LABEL_155;
    }
  }
  else
  {
    v94 = 2;
    if ( !v93 )
      goto LABEL_155;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getLimitCount(v93, v92, v94, 0);
  v95 = this->fields.followerGrandGraphId;
  v96 = this->fields.followerIndex;
  v97 = this->fields.followerInfo;
  this->fields.svtLimitCount = (int)ReturnTypeByQuestId;
  if ( v95 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v98 = (int)ReturnTypeByQuestId;
      if ( !v97 )
        goto LABEL_155;
    }
    else
    {
      v98 = 0;
      if ( !v97 )
        goto LABEL_155;
    }
  }
  else
  {
    v98 = 2;
    if ( !v97 )
      goto LABEL_155;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v97, v96, v98, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = 0;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v106);
  if ( ReturnTypeByQuestId && *p_questRestrictionInfo )
  {
    v107 = this->fields.followerIndex;
    v108 = this->fields.followerInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v109 = (int)ReturnTypeByQuestId;
      if ( !v108 )
        goto LABEL_155;
    }
    else
    {
      v109 = 2;
      if ( !v108 )
        goto LABEL_155;
    }
    ReturnTypeByQuestId = (void *)FollowerInfo__GetQuestRestriction_42477632(
                                    v108,
                                    questRestrictionInfo,
                                    v107,
                                    v109,
                                    this->fields._InitPos_k__BackingField,
                                    &this->fields.isQuestRestrictionWhole,
                                    0);
    this->fields.isQuestRestriction = (unsigned __int8)ReturnTypeByQuestId & 1;
  }
  else
  {
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields.npcFollowerSvtId = 0;
  if ( initPos )
    v62 = (unsigned int)initPos;
  else
    v62 = (unsigned int)(index + 1);
  if ( questRestrictionInfo )
    v110 = 0;
  else
    v110 = this;
  *(_WORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields.isRestrictionServantPos = 0;
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0;
  this->fields._InitPos_k__BackingField = v62;
  if ( questRestrictionInfo )
  {
    IsGrandServantRestriction = QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, v62, 0);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    this->fields.isRestrictionGrandServant = IsGrandServantRestriction;
    IsActiveGrandBoardRestriction = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                      questRestrictionInfo,
                                      InitPos_k__BackingField,
                                      0);
    v114 = this->fields._InitPos_k__BackingField;
    this->fields.isRestrictionActiveGrandBoard = IsActiveGrandBoardRestriction;
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
                                    questRestrictionInfo,
                                    v114,
                                    0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      this->fields.isMyServantOrNpcRestriction = 1;
      if ( !follower )
        goto LABEL_155;
      this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
      ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !ReturnTypeByQuestId )
        goto LABEL_155;
      ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                              (DataManager_o *)ReturnTypeByQuestId,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_155;
      ReturnTypeByQuestId = UserServantMaster__getOrganizationList((UserServantMaster_o *)ReturnTypeByQuestId, 0);
      if ( !ReturnTypeByQuestId )
        goto LABEL_155;
      v115 = *((_DWORD *)ReturnTypeByQuestId + 6);
      v116 = ReturnTypeByQuestId;
      if ( v115 >= 1 )
      {
        v117 = 0;
        while ( 1 )
        {
          if ( v117 >= v115 )
            sub_1C93D34(ReturnTypeByQuestId);
          v118 = *((_QWORD *)v116 + (int)v117 + 4);
          if ( !v118 )
            goto LABEL_155;
          v120 = *(_QWORD *)(v118 + 80);
          v119 = *(_QWORD *)(v118 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v158.fields.currentCryptoKey = v120;
          *(_QWORD *)&v158.fields.fakeValue = v119;
          v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v158, 0);
          v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v118 + 96),
                   0);
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v118, 0, 0);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                   questRestrictionInfo,
                                   v121,
                                   v122,
                                   DispLimitCount,
                                   0);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v118, 0);
          ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestriction_44117492(
                                          questRestrictionInfo,
                                          &isWhole,
                                          ServantIndividuality,
                                          Rarity,
                                          *(_DWORD *)(v118 + 256),
                                          this->fields._InitPos_k__BackingField,
                                          1,
                                          0);
          if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
          {
            if ( !this->fields.isRestrictionGrandServant
              || (ReturnTypeByQuestId = (void *)UserServantEntity__IsGrandServant((UserServantEntity_o *)v118, 0),
                  ((unsigned __int8)ReturnTypeByQuestId & 1) != 0) )
            {
              ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_44139672(
                                              questRestrictionInfo,
                                              ServantIndividuality,
                                              this->fields._InitPos_k__BackingField,
                                              0);
              if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
                break;
            }
          }
          v115 = *((_DWORD *)v116 + 6);
          if ( (int)++v117 >= v115 )
            goto LABEL_90;
        }
        this->fields.haveIndividualityServant = 1;
      }
      goto LABEL_90;
    }
  }
  else
  {
    if ( !v110 )
      goto LABEL_155;
    *(_WORD *)&v110->fields.isRestrictionGrandServant = 0;
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  }
  if ( *p_questRestrictionInfo )
    IsNpcMulitipleOrOnly = QuestRestrictionInfo__IsNpcMulitipleOrOnly(*p_questRestrictionInfo, 0);
  else
    IsNpcMulitipleOrOnly = 0;
  if ( !isFixNpc || !IsNpcMulitipleOrOnly )
  {
    this->fields.isFixMultipleNpc = 0;
    goto LABEL_90;
  }
  ReturnTypeByQuestId = this->fields.questRestrictionInfo;
  this->fields.isFixMultipleNpc = 1;
  if ( !ReturnTypeByQuestId )
    goto LABEL_155;
  ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)ReturnTypeByQuestId, 0);
  if ( !*p_questRestrictionInfo )
    goto LABEL_155;
  if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
  {
    if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
      goto LABEL_90;
  }
  else
  {
    ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
      goto LABEL_90;
  }
  if ( !follower )
    goto LABEL_155;
  this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
LABEL_90:
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_155;
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)ReturnTypeByQuestId,
           &entity,
           questRestrictionInfo->fields.questId,
           questRestrictionInfo->fields.questPhase,
           0) )
    {
      ReturnTypeByQuestId = entity;
      if ( !entity )
        goto LABEL_155;
      if ( QuestPhaseEntity__IsUseGrandBoard(entity, 0) )
        this->fields._IsUseGrandBoard_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    }
  }
  v127 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v127 && v127->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    ReturnTypeByQuestId = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      ReturnTypeByQuestId = NetworkManager_TypeInfo;
    }
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_155;
    ReturnTypeByQuestId = (void *)UserEventDataLostMaster__TryGetEntity(
                                    (UserEventDataLostMaster_o *)Master_object,
                                    &v155,
                                    *(_QWORD *)(*((_QWORD *)ReturnTypeByQuestId + 23) + 64LL),
                                    (*p_questRestrictionInfo)->fields.dataLostBattleId,
                                    0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      v129 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_155;
      v130 = v155;
      v132 = *(_QWORD *)&v129->fields.id.fields.currentCryptoKey;
      v131 = *(_QWORD *)&v129->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v159.fields.currentCryptoKey = v132;
      *(_QWORD *)&v159.fields.fakeValue = v131;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v159, 0);
      if ( !v130 )
        goto LABEL_155;
      ReturnTypeByQuestId = (void *)UserEventDataLostEntity__IsRestart(v130, (int32_t)ReturnTypeByQuestId, 0);
      v133 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_155;
      v134 = (char)ReturnTypeByQuestId;
      v135 = v155;
      v137 = *(_QWORD *)&v133->fields.id.fields.currentCryptoKey;
      v136 = *(_QWORD *)&v133->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v160.fields.currentCryptoKey = v137;
      *(_QWORD *)&v160.fields.fakeValue = v136;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v160, 0);
      if ( !v135 )
        goto LABEL_155;
      if ( (v134 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v135,
                                                         (int32_t)ReturnTypeByQuestId,
                                                         0);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v135, (int32_t)ReturnTypeByQuestId, 0) )
      {
        this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  v138 = this->fields.questRestrictionInfo;
  this->fields.isFatigureRecover = 0;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields.fatigureTime = -1;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v138 )
  {
    eventId = v138->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_155;
    v140 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0) )
    {
      ReturnTypeByQuestId = *p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_155;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v141) )
        {
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v143);
          if ( !ReturnTypeByQuestId )
            goto LABEL_155;
          v144 = *((_DWORD *)ReturnTypeByQuestId + 60);
          this->fields._SvtPoint_k__BackingField = v144;
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v62);
          if ( !ReturnTypeByQuestId )
            goto LABEL_155;
          v146 = *((_QWORD *)ReturnTypeByQuestId + 6);
          v145 = *((_QWORD *)ReturnTypeByQuestId + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v161.fields.currentCryptoKey = v146;
          *(_QWORD *)&v161.fields.fakeValue = v145;
          v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v161, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v140, eventId, v144, v147, 0);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v142);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v62) )
    goto LABEL_149;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v149);
  if ( !ReturnTypeByQuestId )
    goto LABEL_155;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0) )
  {
    v151 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v154,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0) )
        {
          ReturnTypeByQuestId = v154;
          if ( !v154 )
            goto LABEL_155;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v154, 0);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v62);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v151) = IsNotClassBoard
                       | ServantLeaderInfo__IsNotClassBoardNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0);
          goto LABEL_153;
        }
      }
LABEL_155:
      sub_1C93D2C(ReturnTypeByQuestId, v62);
    }
  }
  else
  {
LABEL_149:
    LOBYTE(v151) = 0;
  }
LABEL_153:
  isOtherValidEventIdFilter = this->fields.isOtherValidEventIdFilter;
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v151;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, isOtherValidEventIdFilter, v150);
}


void PartyOrganizationListViewItem___ctor_34838624(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *equipIdList,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t initPos,
        System_Int32_array *equipSvtIdList,
        bool isClearedWave,
        int32_t isChangeFriendShipSvtEquipSkill,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v20; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  __int64 Instance; // x0
  __int64 v66; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v67; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // x27
  __int64 v69; // x19
  __int64 v70; // x28
  Il2CppObject *v71; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  ServantLimitMaster_o *v79; // x28
  int32_t v80; // w29
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int v87; // w9
  Il2CppObject *v88; // x0
  Il2CppObject *v89; // x25
  struct System_Int32_array *v90; // x0
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x28
  struct System_Int32_array **p_equipSvtIdList; // x26
  __int64 v93; // x0
  int32_t v94; // w1
  int32_t v95; // w1
  struct UserServantEntity_o *v96; // x8
  __int64 v97; // x19
  __int64 v98; // x25
  UserServantEntity_o *v99; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x19
  __int64 v108; // x25
  int32_t v109; // w0
  QuestRestrictionInfo_o *v110; // x25
  struct UserServantEntity_o *v111; // x8
  __int64 v112; // x19
  __int64 v113; // x26
  int32_t v114; // w26
  int32_t v115; // w27
  QuestRestrictionInfo_o *v116; // x25
  UserServantEntity_o *v117; // x8
  __int64 v118; // x19
  __int64 v119; // x26
  int32_t v120; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v122; // x3
  struct QuestRestrictionInfo_o *v123; // x8
  UserServantEntity_o *v124; // x9
  UserEventServantFatigueMaster_o *v125; // x24
  int32_t eventId; // w25
  __int64 v127; // x19
  __int64 v128; // x26
  int64_t v129; // x19
  struct QuestRestrictionInfo_o *v130; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v132; // x8
  UserEventAlloutBattleMaster_o *v133; // x25
  __int64 v134; // x19
  __int64 v135; // x26
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v137; // x8
  UserEventDataLostEntity_o *v138; // x24
  __int64 v139; // x19
  __int64 v140; // x25
  UserServantEntity_o *v141; // x8
  char v142; // w24
  UserEventDataLostEntity_o *v143; // x25
  __int64 v144; // x19
  __int64 v145; // x26
  bool IsGrandServantRestriction; // w0
  int32_t InitPos_k__BackingField; // w1
  bool IsActiveGrandBoardRestriction; // w0
  bool v149; // w8
  int v150; // w8
  __int64 v151; // x24
  unsigned int v152; // w23
  __int64 v153; // x25
  __int64 v154; // x19
  __int64 v155; // x26
  int32_t v156; // w19
  int32_t v157; // w26
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  int32_t v161; // w22
  EventServantPointRankMaster_o *v162; // x23
  UserServantEntity_o *v163; // x8
  __int128 v164; // q0
  UserEventServantPointMaster_o *v165; // x24
  int64_t v166; // x25
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v168; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v171; // x2
  UserServantEntity_o *v172; // x8
  __int128 v173; // q0
  Il2CppObject *v174; // x22
  UserServantEntity_o *v175; // x8
  __int128 v176; // q0
  __int64 v177; // x23
  PartyOrganizationListViewItem_o *v178; // x0
  const MethodInfo *v179; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+90h] [xbp-B0h]
  UserEventServantPointEntity_o *v185; // [xsp+B8h] [xbp-88h] BYREF
  bool isWhole; // [xsp+C4h] [xbp-7Ch] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+C8h] [xbp-78h] BYREF
  int64_t recoverAt; // [xsp+D0h] [xbp-70h] BYREF
  QuestPhaseEntity_o *v189; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v199; // 0:x0.16

  if ( (byte_4D2C370 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C370 = 1;
  }
  recoverAt = 0;
  v189 = 0;
  entity = 0;
  isWhole = 0;
  v185 = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v20;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v27;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.followerInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.followerInfo, 0, v53, v54, v55, v56, v57, v58);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v59, v60, v61, v62, v63, v64);
  this->fields._EquipFriendShipSkillChange_k__BackingField = isChangeFriendShipSvtEquipSkill;
  this->fields.isOtherValidEventIdFilter = otherValidEventIdFilter;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_161;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v67 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_161;
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v70 = *(_QWORD *)&v67[5].fields.currentCryptoKey;
  v69 = *(_QWORD *)&v67[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v190.fields.currentCryptoKey = v70;
  *(_QWORD *)&v190.fields.fakeValue = v69;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v190, 0);
  if ( !v68 )
    goto LABEL_161;
  v71 = DataMasterBase_object__object__int___GetEntity(
          v68,
          Instance,
          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v71;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)v71, v73, v74, v75, v76, v77, v78);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_161;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_161;
  v79 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_userServantEntity)[5], 0);
  if ( !*p_userServantEntity )
    goto LABEL_161;
  v80 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_userServantEntity)[6], 0);
  if ( !v79 )
    goto LABEL_161;
  ServantLimitMaster__GetEntity(v79, v80, Instance, 0);
  if ( initPos )
    v87 = initPos;
  else
    v87 = index + 1;
  this->fields._InitPos_k__BackingField = v87;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v88 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0)) == 0 )
  {
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    v94 = 0;
LABEL_21:
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_equipSvtIdList, v94, v81, v82, v83, v84, v85, v86);
    if ( !userServantEntity )
      goto LABEL_161;
    Instance = (__int64)UserServantEntity__GetOverwriteStatus(userServantEntity, questRestrictionInfo, 0);
    if ( !*p_servantEntity )
      goto LABEL_161;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !Instance )
      goto LABEL_161;
    this->fields.cost = *(_DWORD *)(Instance + 28);
    *(_QWORD *)&this->fields.hp = *(_QWORD *)(Instance + 16);
    this->fields.rarityId = *(_DWORD *)(Instance + 24);
    v95 = *(_DWORD *)(Instance + 40);
    this->fields.actualRarity = v95;
    Instance = UserServantEntity__GetFrameType(userServantEntity, v95, 0);
    v96 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v96 )
      goto LABEL_161;
    v98 = *(_QWORD *)&v96->fields.limitCount.fields.currentCryptoKey;
    v97 = *(_QWORD *)&v96->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v191.fields.currentCryptoKey = v98;
    *(_QWORD *)&v191.fields.fakeValue = v97;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v191, 0);
    v99 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v99 )
      goto LABEL_161;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v99, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
    if ( questRestrictionInfo )
    {
      v108 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v107 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v192.fields.currentCryptoKey = v108;
      *(_QWORD *)&v192.fields.fakeValue = v107;
      v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v192, 0);
      Instance = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(questRestrictionInfo, v109, 0);
    }
    else
    {
      Instance = 0;
    }
    v110 = this->fields.questRestrictionInfo;
    this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = Instance;
    if ( v110 )
    {
      v111 = this->fields.userServantEntity;
      if ( !v111 )
        goto LABEL_161;
      v113 = *(_QWORD *)&v111->fields.svtId.fields.currentCryptoKey;
      v112 = *(_QWORD *)&v111->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v193.fields.currentCryptoKey = v113;
      *(_QWORD *)&v193.fields.fakeValue = v112;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v193, 0);
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v114 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_userServantEntity)[6], 0);
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v115 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0);
      if ( !*p_userServantEntity )
        goto LABEL_161;
      Instance = QuestRestrictionInfo__IsRestriction_44117212(
                   v110,
                   &this->fields.isQuestRestrictionWhole,
                   v114,
                   v115,
                   Instance,
                   this->fields.rarityId,
                   (*p_userServantEntity)[16].fields.currentCryptoKey,
                   this->fields._InitPos_k__BackingField,
                   1,
                   0);
      v116 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v116 )
      {
        v117 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_161;
        v119 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
        v118 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v194.fields.currentCryptoKey = v119;
        *(_QWORD *)&v194.fields.fakeValue = v118;
        v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v194, 0);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v116, v120, 0);
      }
      else
      {
        IsConvertOverwriteImage = 0;
      }
    }
    else
    {
      IsConvertOverwriteImage = 0;
      *(_WORD *)&this->fields.isQuestRestriction = 0;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
    }
    this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
    this->fields.fatigureTime = -1;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    this->fields.isFixMultipleNpc = 0;
    this->fields.npcFollowerSvtId = 0;
    this->fields.isFatigureRecover = 0;
    *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = 0;
    this->fields._IsNotSupportSingle_k__BackingField = 0;
    this->fields._IsDispSvtPoint_k__BackingField = 0;
    this->fields._SvtPointRank_k__BackingField = 0;
    this->fields._SvtPoint_k__BackingField = 0;
    this->fields._IsNotClassBoardNpc_k__BackingField = 0;
    this->fields._IsClearedWave_k__BackingField = isClearedWave;
    *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
    Instance = UserServantEntity__IsGrandServant(userServantEntity, 0);
    this->fields._IsGrandServant_k__BackingField = Instance & 1;
    *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
    v123 = this->fields.questRestrictionInfo;
    if ( !v123 )
      goto LABEL_160;
    if ( v123->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_161;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_161;
      v124 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v125 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v128 = *(_QWORD *)&v124->fields.svtId.fields.currentCryptoKey;
      v127 = *(_QWORD *)&v124->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v195.fields.currentCryptoKey = v128;
      *(_QWORD *)&v195.fields.fakeValue = v127;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v195, 0);
      if ( !v125 )
        goto LABEL_161;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v125,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0);
      if ( (Instance & 1) != 0 )
      {
        v129 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0);
        if ( v129 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v130 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_161;
    if ( v130->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v130->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_161;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v132 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v133 = (UserEventAlloutBattleMaster_o *)Instance;
      v135 = *(_QWORD *)&v132->fields.svtId.fields.currentCryptoKey;
      v134 = *(_QWORD *)&v132->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v196.fields.currentCryptoKey = v135;
      *(_QWORD *)&v196.fields.fakeValue = v134;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v196, 0);
      if ( !*p_questRestrictionInfo || !v133 )
        goto LABEL_161;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v133,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_161;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !*p_questRestrictionInfo || !Master_object )
        goto LABEL_161;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_object,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0);
      if ( (Instance & 1) != 0 )
      {
        v137 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_161;
        v138 = entity;
        v140 = *(_QWORD *)&v137->fields.svtId.fields.currentCryptoKey;
        v139 = *(_QWORD *)&v137->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v197.fields.currentCryptoKey = v140;
        *(_QWORD *)&v197.fields.fakeValue = v139;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v197, 0);
        if ( !v138 )
          goto LABEL_161;
        Instance = UserEventDataLostEntity__IsRestart(v138, Instance, 0);
        v141 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_161;
        v142 = Instance;
        v143 = entity;
        v145 = *(_QWORD *)&v141->fields.svtId.fields.currentCryptoKey;
        v144 = *(_QWORD *)&v141->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v198.fields.currentCryptoKey = v145;
        *(_QWORD *)&v198.fields.fakeValue = v144;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v198, 0);
        if ( !v143 )
          goto LABEL_161;
        if ( (v142 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v143, Instance, 0);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v143, Instance, 0);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( !questRestrictionInfo )
      goto LABEL_161;
    IsGrandServantRestriction = QuestRestrictionInfo__IsGrandServantRestriction(
                                  questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  0);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    this->fields.isRestrictionGrandServant = IsGrandServantRestriction;
    IsActiveGrandBoardRestriction = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                      questRestrictionInfo,
                                      InitPos_k__BackingField,
                                      0);
    this->fields.isRestrictionActiveGrandBoard = IsActiveGrandBoardRestriction;
    if ( IsActiveGrandBoardRestriction || this->fields.isRestrictionGrandServant )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !Instance )
        goto LABEL_161;
      if ( QuestPhaseMaster__TryGetEntity(
             (QuestPhaseMaster_o *)Instance,
             &v189,
             questRestrictionInfo->fields.questId,
             questRestrictionInfo->fields.questPhase,
             0) )
      {
        Instance = (__int64)v189;
        if ( !v189 )
          goto LABEL_161;
        v149 = QuestPhaseEntity__IsUseGrandBoard(v189, 0) && this->fields._IsGrandServant_k__BackingField;
        this->fields._IsUseGrandBoard_k__BackingField = v149;
      }
    }
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
                 questRestrictionInfo,
                 this->fields._InitPos_k__BackingField,
                 0);
    if ( (Instance & 1) != 0 )
    {
      this->fields.isMyServantOrNpcRestriction = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Instance )
        goto LABEL_161;
      Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_161;
      v150 = *(_DWORD *)(Instance + 24);
      v151 = Instance;
      if ( v150 >= 1 )
      {
        v152 = 0;
        while ( 1 )
        {
          if ( v152 >= v150 )
            goto LABEL_162;
          v153 = *(_QWORD *)(v151 + 8LL * (int)v152 + 32);
          if ( !v153 )
            goto LABEL_161;
          v155 = *(_QWORD *)(v153 + 80);
          v154 = *(_QWORD *)(v153 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v199.fields.currentCryptoKey = v155;
          *(_QWORD *)&v199.fields.fakeValue = v154;
          v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v199, 0);
          v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v153 + 96),
                   0);
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v153, 0, 0);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                   questRestrictionInfo,
                                   v156,
                                   v157,
                                   DispLimitCount,
                                   0);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v153, 0);
          Instance = QuestRestrictionInfo__IsRestriction_44117492(
                       questRestrictionInfo,
                       &isWhole,
                       ServantIndividuality,
                       Rarity,
                       *(_DWORD *)(v153 + 256),
                       this->fields._InitPos_k__BackingField,
                       1,
                       0);
          if ( (Instance & 1) == 0 )
          {
            if ( !this->fields.isRestrictionGrandServant
              || (Instance = UserServantEntity__IsGrandServant((UserServantEntity_o *)v153, 0), (Instance & 1) != 0) )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_44139672(
                           questRestrictionInfo,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0);
              if ( (Instance & 1) == 0 )
                break;
            }
          }
          v150 = *(_DWORD *)(v151 + 24);
          if ( (int)++v152 >= v150 )
            goto LABEL_125;
        }
        this->fields.haveIndividualityServant = 1;
      }
    }
LABEL_125:
    if ( !*p_questRestrictionInfo )
      goto LABEL_161;
    v161 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_161;
    v162 = (EventServantPointRankMaster_o *)Instance;
    Instance = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v161, 0);
    if ( (Instance & 1) != 0 )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v163 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v164 = *(_OWORD *)&v163->fields.userId.fields.fakeValue;
      v165 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v163->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v184.fields.fakeValue = v164;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v183 = v184;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v183, 0);
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v166 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0);
      if ( !v165 )
        goto LABEL_161;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v165, &v185, v166, v161, Instance, 0) )
      {
        Instance = (__int64)v185;
        if ( !v185 )
          goto LABEL_161;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v185, 0);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v168 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v162, v161, v168, SvtId, 0);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v161, v171);
    }
    v172 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_161;
    v173 = *(_OWORD *)&v172->fields.id.fields.fakeValue;
    *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v172->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v184.fields.fakeValue = v173;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v182 = v184;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v182, 0) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v174 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1C93B7C(long___TypeInfo, 1);
      v175 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_161;
      v176 = *(_OWORD *)&v175->fields.id.fields.fakeValue;
      v177 = Instance;
      *(_OWORD *)&v184.fields.currentCryptoKey = *(_OWORD *)&v175->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v184.fields.fakeValue = v176;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v181 = v184;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v181, 0);
      if ( !v177 )
        goto LABEL_161;
      if ( !*(_DWORD *)(v177 + 24) )
LABEL_162:
        sub_1C93D34(Instance);
      *(_QWORD *)(v177 + 32) = Instance;
      if ( !v174 )
        goto LABEL_161;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v174,
              (System_Int64_array *)v177,
              (const MethodInfo_3465000 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
      {
LABEL_159:
        this->fields._IsDisappearSvt_k__BackingField = 1;
        goto LABEL_160;
      }
    }
    Instance = (__int64)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0) )
        goto LABEL_159;
LABEL_160:
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, this->fields.isOtherValidEventIdFilter, v122);
      return;
    }
LABEL_161:
    sub_1C93D2C(Instance, v66);
  }
  v89 = v88;
  v90 = (struct System_Int32_array *)sub_1C93C10(v88, int___TypeInfo);
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  if ( v90 )
  {
    this->fields.equipSvtIdList = v90;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v93 = sub_1C93C10(v89, int___TypeInfo);
    if ( v93 )
    {
      v94 = v93;
      goto LABEL_21;
    }
  }
  v178 = (PartyOrganizationListViewItem_o *)sub_1C940C8(v89);
  PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(v178, v179);
}


void PartyOrganizationListViewItem___ctor_34849972(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  bool v14; // w29
  bool v15; // w28
  System_Collections_Generic_List_object__o *v16; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int v66; // w1
  void *Instance; // x0
  __int64 v68; // x1
  Il2CppObject *MasterData_object; // x22
  int v70; // w8
  void *v71; // x22
  unsigned int v72; // w26
  __int64 v73; // x23
  __int64 v74; // x24
  __int64 v75; // x25
  int32_t v76; // w24
  int32_t v77; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  bool v81; // w8
  const MethodInfo *v82; // x3
  struct QuestRestrictionInfo_o *v83; // x8
  int32_t eventId; // w21
  const MethodInfo *v85; // x2
  QuestPhaseEntity_o *v88; // [xsp+8h] [xbp-78h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  bool isWhole; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  v14 = isFollower;
  v15 = otherValidEventIdFilter;
  if ( (byte_4D2C372 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C372 = 1;
  }
  isWhole = 0;
  v88 = 0;
  entity = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v16;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v23;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity, 0, v30, v31, v32, v33, v34, v35);
  this->fields.followerInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.followerInfo, 0, v36, v37, v38, v39, v40, v41);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.isFollower = v14;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerGrandGraphId = 0;
  this->fields.followerClassId = 0;
  this->fields.setupInfo = setupInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v48, v49, v50, v51, v52, v53);
  this->fields.servantEntity = 0;
  this->fields.isOtherValidEventIdFilter = v15;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, 0, v54, v55, v56, v57, v58, v59);
  if ( initPos )
    v66 = initPos;
  else
    v66 = index + 1;
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  *(_QWORD *)&this->fields.rarityId = 0;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  *(_WORD *)&this->fields.isRestrictionGrandServant = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = 0;
  this->fields._InitPos_k__BackingField = v66;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = 0;
  if ( !questRestrictionInfo )
    goto LABEL_47;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(questRestrictionInfo, v66, 0) )
  {
    this->fields.frameType = 9;
    this->fields.isMyServantOrNpcRestriction = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_58;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    Instance = (void *)QuestRestrictionInfo__IsGrandServantRestriction(
                         questRestrictionInfo,
                         this->fields._InitPos_k__BackingField,
                         0);
    this->fields.isRestrictionGrandServant = (unsigned __int8)Instance & 1;
    if ( !MasterData_object )
      goto LABEL_58;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)MasterData_object, 0);
    if ( !Instance )
      goto LABEL_58;
    v70 = *((_DWORD *)Instance + 6);
    v71 = Instance;
    if ( v70 >= 1 )
    {
      v72 = 0;
      while ( 1 )
      {
        if ( v72 >= v70 )
          sub_1C93D34(Instance);
        v73 = *((_QWORD *)v71 + (int)v72 + 4);
        this->fields._IsGrandServant_k__BackingField = 0;
        this->fields._IsUseGrandBoard_k__BackingField = 0;
        if ( !v73 )
          goto LABEL_58;
        v75 = *(_QWORD *)(v73 + 80);
        v74 = *(_QWORD *)(v73 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v75;
        *(_QWORD *)&v91.fields.fakeValue = v74;
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v91, 0);
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v73 + 96),
                0);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v73, 0, 0);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v76,
                                 v77,
                                 DispLimitCount,
                                 0);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v73, 0);
        Instance = (void *)QuestRestrictionInfo__IsRestriction_44117492(
                             questRestrictionInfo,
                             &isWhole,
                             ServantIndividuality,
                             Rarity,
                             *(_DWORD *)(v73 + 256),
                             this->fields._InitPos_k__BackingField,
                             1,
                             0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !this->fields.isRestrictionGrandServant
            || (Instance = (void *)UserServantEntity__IsGrandServant((UserServantEntity_o *)v73, 0),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_44139672(
                                 questRestrictionInfo,
                                 ServantIndividuality,
                                 this->fields._InitPos_k__BackingField,
                                 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        v70 = *((_DWORD *)v71 + 6);
        if ( (int)++v72 >= v70 )
          goto LABEL_48;
      }
      this->fields.haveIndividualityServant = 1;
    }
    goto LABEL_48;
  }
  if ( questRestrictionInfo->fields.isNpcOnlyBattle && questRestrictionInfo->fields.myServantNumMax < index )
  {
    this->fields.frameType = 11;
    this->fields.isFixMultipleNpcRestriction = 1;
    goto LABEL_48;
  }
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0)
    && questRestrictionInfo->fields.servantNumMax <= index
    || questRestrictionInfo->fields.isNpcMultipleBattle
    && !questRestrictionInfo->fields.isNpcEditablePos
    && !isMyServant )
  {
    this->fields.frameType = 11;
    this->fields.isServantNumRestriction = 1;
    goto LABEL_48;
  }
  if ( !QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, this->fields._InitPos_k__BackingField, 0) )
  {
    if ( QuestRestrictionInfo__IsActiveGrandBoardRestriction(
           questRestrictionInfo,
           this->fields._InitPos_k__BackingField,
           0) )
    {
      this->fields.frameType = 9;
      this->fields.isRestrictionActiveGrandBoard = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !Instance )
        goto LABEL_58;
      if ( !QuestPhaseMaster__TryGetEntity(
              (QuestPhaseMaster_o *)Instance,
              &v88,
              questRestrictionInfo->fields.questId,
              questRestrictionInfo->fields.questPhase,
              0) )
        goto LABEL_48;
      Instance = v88;
      if ( !v88 )
        goto LABEL_58;
      goto LABEL_45;
    }
LABEL_47:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_48;
  }
  this->fields.frameType = 9;
  this->fields.isRestrictionGrandServant = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_58;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Instance,
         &entity,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_58;
LABEL_45:
    v81 = QuestPhaseEntity__IsUseGrandBoard((QuestPhaseEntity_o *)Instance, 0)
       && this->fields._IsGrandServant_k__BackingField;
    this->fields._IsUseGrandBoard_k__BackingField = v81;
  }
LABEL_48:
  this->fields.commandCodeIdList = 0;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList, 0, v60, v61, v62, v63, v64, v65);
  this->fields.fatigureTime = -1;
  v83 = this->fields.questRestrictionInfo;
  *(_WORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields.isRestrictionServantPos = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  this->fields._IsTempGrandServant_k__BackingField = 0;
  if ( !v83 )
    goto LABEL_54;
  eventId = v83->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_58:
    sub_1C93D2C(Instance, v68);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v85);
  }
LABEL_54:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, this->fields.isOtherValidEventIdFilter, v82);
}


void PartyOrganizationListViewItem___ctor_34851484(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t limitCount,
        EventUpValSetupInfo_o *eventUpValSetupInfo,
        QuestRestrictionInfo_o *questRestriction,
        FollowerInfo_o *follower,
        int32_t initPosition,
        bool isGrandServant,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  DataManager_o *Instance; // x0
  __int64 v56; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  ServantEntity_o *v65; // x8
  DataManager_o *v66; // x24
  struct ServantEntity_o *servantEntity; // x8
  int32_t m_CancellationTokenSource; // w8
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  const MethodInfo *v75; // x3
  int v76; // w9

  if ( (byte_4D2C373 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C373 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v24;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity, 0, v31, v32, v33, v34, v35, v36);
  this->fields.questRestrictionInfo = questRestriction;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestriction,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.followerInfo = follower;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.followerInfo,
    (int32_t)follower,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.setupInfo = eventUpValSetupInfo;
  *(_WORD *)&this->fields.isFollower = follower != 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
    (int32_t)eventUpValSetupInfo,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v59, v60, v61, v62, v63, v64);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0);
  v65 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_15;
  v66 = Instance;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                v65,
                                this->fields.imageLimitCount,
                                0);
  servantEntity = this->fields.servantEntity;
  this->fields.imageLimitCount = (int)Instance;
  if ( !servantEntity
    || (this->fields.classId = servantEntity->fields.classId, !v66)
    || (m_CancellationTokenSource = (int32_t)v66->fields.m_CancellationTokenSource,
        this->fields.rarityId = m_CancellationTokenSource,
        this->fields.actualRarity = m_CancellationTokenSource,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0 )
  {
LABEL_15:
    sub_1C93D2C(Instance, v56);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_43397868(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             isGrandServant,
                             0);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList, 0, v69, v70, v71, v72, v73, v74);
  v76 = initPosition;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  *(_DWORD *)&this->fields.isRestrictionNeedStarting = 0;
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  if ( !initPosition )
    v76 = index + 1;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  this->fields._IsGrandServant_k__BackingField = isGrandServant;
  this->fields._InitPos_k__BackingField = v76;
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, 0, v75);
}


void PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(
        PartyOrganizationListViewItem_o *this,
        System_Collections_Generic_List_EventMargeItemUpValInfo__o **infoList,
        bool isQuestStart,
        const MethodInfo *method)
{
  DataManager_c **v4; // x28
  Il2CppObject *v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x20
  Il2CppObject *v10; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  _BOOL8 v12; // x0
  __int64 v13; // x1
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v17; // x19
  __int64 v18; // x20
  int32_t v19; // w1
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  struct UserServantEntity_o *v22; // x8
  UserServantMaster_o *v23; // x25
  __int64 v24; // x19
  __int64 v25; // x20
  __int64 v26; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v28; // x1
  int32_t eventId; // w25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w26
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  EventMargeItemUpValInfo_o *v35; // x26
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v37; // x1
  int32_t v38; // w27
  Il2CppObject *Entity; // x0
  __int64 v40; // x1
  DataManager_c **v41; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x28
  PartyOrganizationListViewItem___c_c *v43; // x8
  System_Func_object__object__o *_9__355_0; // x20
  Il2CppObject *v45; // x29
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x29
  PartyOrganizationListViewItem___c_c *v54; // x8
  System_Func_object__bool__o *_9__355_1; // x20
  Il2CppObject *v56; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  Il2CppObject *v64; // x29
  PartyOrganizationListViewItem___c_c *v65; // x8
  System_Func_object__object__o *_9__355_2; // x20
  Il2CppObject *v67; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x28
  PartyOrganizationListViewItem___c_c *v76; // x8
  System_Func_object__bool__o *_9__355_3; // x20
  Il2CppObject *v78; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  Il2CppObject *v86; // x20
  __int64 FriendshipBonusValue; // x0
  __int64 v88; // x1
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  System_Collections_Generic_List_object__o *v96; // x0
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x8
  EventQuestMaster_o *v101; // [xsp+8h] [xbp-B8h]
  Il2CppObject *Master_object; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v4 = &DataManager_TypeInfo;
  if ( (byte_4D2C3A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Single_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C93AD4(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C93AD4(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_1C93AD4(&System_Func_string__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_0__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_1__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_2__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_3__);
    sub_1C93AD4(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C3A2 = 1;
  }
  memset(&v106, 0, sizeof(v106));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v6 )
    sub_1C93D2C(Instance, v8);
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)v6,
                                                                         (int64_t)Instance[8].monitor,
                                                                         0);
  v10 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( FriendshipUpCampaigns )
  {
    v101 = (EventQuestMaster_o *)v10;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v105,
      FriendshipUpCampaigns,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v106 = v105;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v106,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v12 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v106,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          return;
        }
        current = (EventCampaignEntity_o *)v106.fields._current;
        if ( !v106.fields._current )
          sub_1C93D2C(v12, v13);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v106.fields._current[2].monitor;
        if ( !monitor || !monitor[1].monitor )
          goto LABEL_29;
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C93D2C(v12, v13);
        v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v107.fields.currentCryptoKey = v17;
        *(_QWORD *)&v107.fields.fakeValue = v18;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v107, 0);
        if ( System_Linq_Enumerable__Contains_int_(
               monitor,
               v19,
               (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
        {
LABEL_29:
          if ( !(*v4)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v4);
          v20 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
          v22 = this->fields.userServantEntity;
          if ( !v22 )
            sub_1C93D2C(v20, v21);
          v23 = (UserServantMaster_o *)v20;
          v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
          v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v108.fields.currentCryptoKey = v24;
          *(_QWORD *)&v108.fields.fakeValue = v25;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v108, 0);
          if ( !v23 )
            sub_1C93D2C(v26, (unsigned int)v26);
          HeroineData = UserServantMaster__getHeroineData(v23, v26, 0);
          if ( !HeroineData
            || (HeroineData = (UserServantEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0),
                ((unsigned __int8)HeroineData & 1) != 0) )
          {
            eventId = current->fields.eventId;
            if ( !isQuestStart )
              break;
            questRestrictionInfo = this->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              sub_1C93D2C(HeroineData, v28);
            questId = questRestrictionInfo->fields.questId;
            questPhase = questRestrictionInfo->fields.questPhase;
            v33 = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !v33 )
              sub_1C93D2C(0, v34);
            if ( !v101 )
              sub_1C93D2C(v33, v34);
            if ( !EventQuestMaster__IsEventNotIncluded(
                    v101,
                    eventId,
                    questId,
                    questPhase,
                    7,
                    (int64_t)v33[8].monitor,
                    0) )
              break;
          }
        }
      }
      v35 = (EventMargeItemUpValInfo_o *)sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_42447564(v35, eventId, 0);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId(current, 0);
      if ( !v11 )
        sub_1C93D2C(OnlyMaxFuncGroupId, v37);
      v38 = OnlyMaxFuncGroupId;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 eventId,
                 (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C93D2C(0, v40);
      v41 = v4;
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)Entity[7].monitor;
      if ( !v42 )
        sub_1C93D2C(Entity, v40);
      if ( !v42[1].monitor )
        break;
      v43 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v43 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__355_0 = (System_Func_object__object__o *)v43->static_fields->__9__355_0;
      if ( !_9__355_0 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__355_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__355_0,
          v45,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_0__,
          0);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__355_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__355_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__355_0,
          (int32_t)_9__355_0,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v42,
                                                                   (System_Func_TSource__TResult__o *)_9__355_0,
                                                                   (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v54 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v54 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__355_1 = (System_Func_object__bool__o *)v54->static_fields->__9__355_1;
      if ( !_9__355_1 )
      {
        if ( !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          v54 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v56 = (Il2CppObject *)v54->static_fields->__9;
        _9__355_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__355_1,
          v56,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_1__,
          0);
        v57 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v57->__9__355_1 = (struct System_Func_string__bool__o *)_9__355_1;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v57->__9__355_1, (int32_t)_9__355_1, v58, v59, v60, v61, v62, v63);
      }
      v64 = System_Linq_Enumerable__Single_object__52298480(
              v53,
              (System_Func_TSource__bool__o *)_9__355_1,
              (const MethodInfo_31E02F0 *)Method_System_Linq_Enumerable_Single_string___);
      if ( !v42[1].monitor )
        goto LABEL_61;
      v65 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v65 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__355_2 = (System_Func_object__object__o *)v65->static_fields->__9__355_2;
      if ( !_9__355_2 )
      {
        if ( !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v65 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v67 = (Il2CppObject *)v65->static_fields->__9;
        _9__355_2 = (System_Func_object__object__o *)sub_1C93D20(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__355_2,
          v67,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_2__,
          0);
        v68 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v68->__9__355_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__355_2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v68->__9__355_2, (int32_t)_9__355_2, v69, v70, v71, v72, v73, v74);
      }
      v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v42,
                                                                   (System_Func_TSource__TResult__o *)_9__355_2,
                                                                   (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v76 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v76 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__355_3 = (System_Func_object__bool__o *)v76->static_fields->__9__355_3;
      if ( !_9__355_3 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v76->static_fields->__9;
        _9__355_3 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__355_3,
          v78,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__355_3__,
          0);
        v79 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v79->__9__355_3 = (struct System_Func_string__bool__o *)_9__355_3;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v79->__9__355_3, (int32_t)_9__355_3, v80, v81, v82, v83, v84, v85);
      }
      v86 = System_Linq_Enumerable__Single_object__52298480(
              v75,
              (System_Func_TSource__bool__o *)_9__355_3,
              (const MethodInfo_31E02F0 *)Method_System_Linq_Enumerable_Single_string___);
LABEL_62:
      v4 = v41;
      FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !v35 )
        sub_1C93D2C(FriendshipBonusValue, v88);
      EventMargeItemUpValInfo__SetFriendshipUpBonus(
        v35,
        eventId,
        FriendshipBonusValue,
        v38,
        (System_String_o *)v64,
        (System_String_o *)v86,
        current->fields.calcType,
        0);
      v96 = (System_Collections_Generic_List_object__o *)*infoList;
      if ( !*infoList )
        sub_1C93D2C(0, v89);
      items = v96->fields._items;
      v98 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v96->fields._version;
      if ( !items )
        sub_1C93D2C(v96, v89);
      size = v96->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v96,
          (Il2CppObject *)v35,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = &items->obj.klass + size;
        v96->fields._size = size + 1;
        v100[4] = (Il2CppClass *)v35;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v100 + 4), (int32_t)v35, v90, v91, v92, v93, v94, v95);
      }
    }
    v64 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_61:
    v86 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_62;
  }
}


System_Int64_array *PartyOrganizationListViewItem__CheckDuplicationGrandServantEquipment(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *equipIdList; // x19
  PartyOrganizationListViewItem___c_c *v5; // x0
  System_Func_long__long__o *_9__363_0; // x20
  Il2CppObject *v7; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v15; // x0
  PartyOrganizationListViewItem___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__bool__o *_9__363_1; // x20
  Il2CppObject *v19; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  PartyOrganizationListViewItem___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_object__long__o *_9__363_2; // x20
  Il2CppObject *v31; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4D2C3A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_GroupBy_long__long___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
    sub_1C93AD4(&System_Func_long__long__TypeInfo);
    sub_1C93AD4(&System_Func_IGrouping_long__long___long__TypeInfo);
    sub_1C93AD4(&System_Func_IGrouping_long__long___bool__TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__363_0__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__363_1__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__363_2__);
    sub_1C93AD4(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4D2C3A4 = 1;
  }
  if ( this->fields.isFollower
    || !this->fields._IsGrandServant_k__BackingField && !this->fields._IsTempGrandServant_k__BackingField
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0) )
  {
    return 0;
  }
  equipIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.equipIdList;
  v5 = PartyOrganizationListViewItem___c_TypeInfo;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v5 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__363_0 = v5->static_fields->__9__363_0;
  if ( !_9__363_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__363_0 = (System_Func_long__long__o *)sub_1C93D20(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__363_0,
      v7,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__363_0__,
      0);
    static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__363_0 = _9__363_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__363_0,
      (int32_t)_9__363_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__GroupBy_long__long_(
          equipIdList,
          (System_Func_TSource__TKey__o *)_9__363_0,
          (const MethodInfo_31CDF2C *)Method_System_Linq_Enumerable_GroupBy_long__long___);
  v16 = PartyOrganizationListViewItem___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v16 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__363_1 = (System_Func_object__bool__o *)v16->static_fields->__9__363_1;
  if ( !_9__363_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__363_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_IGrouping_long__long___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__363_1,
      v19,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__363_1__,
      0);
    v20 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v20->__9__363_1 = (struct System_Func_IGrouping_long__long___bool__o *)_9__363_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20->__9__363_1, (int32_t)_9__363_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)_9__363_1,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
  v28 = PartyOrganizationListViewItem___c_TypeInfo;
  v29 = v27;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v28 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__363_2 = (System_Func_object__long__o *)v28->static_fields->__9__363_2;
  if ( !_9__363_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__363_2 = (System_Func_object__long__o *)sub_1C93D20(System_Func_IGrouping_long__long___long__TypeInfo);
    System_Func_object__long____ctor(
      _9__363_2,
      v31,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__363_2__,
      0);
    v32 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v32->__9__363_2 = (struct System_Func_IGrouping_long__long___long__o *)_9__363_2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->__9__363_2, (int32_t)_9__363_2, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v29,
                                                               (System_Func_TSource__TResult__o *)_9__363_2,
                                                               (const MethodInfo_31DA84C *)Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
  return System_Linq_Enumerable__ToArray_long_(
           v39,
           (const MethodInfo_31E3C90 *)Method_System_Linq_Enumerable_ToArray_long___);
}


void PartyOrganizationListViewItem__CheckRestriction(
        PartyOrganizationListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *userServantEntity; // x0
  QuestRestrictionInfo_o *v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  const MethodInfo *v11; // x1
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w23
  int32_t v14; // w24
  struct UserServantEntity_o *v15; // x8
  const MethodInfo *v16; // x2
  struct UserServantEntity_o *v17; // x8
  QuestRestrictionInfo_o *v18; // x22
  __int64 v19; // x23
  __int64 v20; // x24
  struct UserServantEntity_o *v21; // x8
  int32_t v22; // w23
  int32_t v23; // w24
  QuestRestrictionInfo_o *v24; // x22
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t v27; // w23
  const MethodInfo *v28; // x1
  int32_t limitCount; // w24
  int32_t DispLimitCount; // w0
  int32_t rarityId; // w25
  int32_t v32; // w26
  const MethodInfo *v33; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v35; // x23
  __int64 v36; // x24
  int32_t v37; // w23
  const MethodInfo *v38; // x1
  int32_t v39; // w24
  UserServantEntity_o *v40; // x8
  bool IsUniqueIndividualityRestriction_43874020; // w0
  const MethodInfo *v42; // x1
  QuestRestrictionInfo_o *v43; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // kr00_16
  int32_t v45; // w0
  int32_t v46; // w27
  int32_t v47; // w28
  const MethodInfo *v48; // x1
  int32_t DispImageLimitCount; // w0
  struct QuestRestrictionInfo_o *v50; // x8
  FollowerInfo_o *followerInfo; // x22
  System_Int32_array *NpcServantIndividualityFull; // x0
  QuestRestrictionInfo_o *v53; // x24
  int32_t v54; // w23
  System_Int32_array *v55; // x22
  const MethodInfo *v56; // x1
  int32_t followerIndex; // w22
  FollowerInfo_o *v58; // x24
  struct QuestRestrictionInfo_o *v59; // x23
  int32_t v60; // w5
  int32_t followerGrandGraphId; // w8
  int32_t v62; // w22
  FollowerInfo_o *v63; // x24
  struct QuestRestrictionInfo_o *v64; // x23
  int32_t v65; // w5
  bool IsUniqueIndividualityRestriction_42478300; // w0
  const MethodInfo *v67; // x1
  QuestRestrictionInfo_o *v68; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_44123584; // w0
  QuestRestrictionInfo_o *v71; // x8
  QuestRestrictionInfo_o *v72; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v74; // w0
  int32_t svtLimitCount; // w22
  int32_t v76; // w23
  const MethodInfo *v77; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4D2C37F & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C37F = 1;
  }
  userServantEntity = (ServantLeaderInfo_o *)this->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( !this->fields.followerInfo )
    {
      this->fields.isFixedServantPositionAgreement = 0;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      return;
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem) )
      goto LABEL_49;
    userServantEntity = (ServantLeaderInfo_o *)this->fields.followerInfo;
    if ( !userServantEntity )
      goto LABEL_92;
    if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)userServantEntity, 0)
      && (v24 = this->fields.questRestrictionInfo) != 0 )
    {
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
      if ( !userServantEntity )
        goto LABEL_92;
      v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v80.fields.currentCryptoKey = v26;
      *(_QWORD *)&v80.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v80, 0);
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v28);
      if ( !userServantEntity )
        goto LABEL_92;
      limitCount = userServantEntity->fields.limitCount;
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
      if ( !userServantEntity )
        goto LABEL_92;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(userServantEntity, 0);
      rarityId = this->fields.rarityId;
      v32 = DispLimitCount;
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v33);
      if ( !userServantEntity )
        goto LABEL_92;
      userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_44117212(
                                                   v24,
                                                   &this->fields.isQuestRestrictionWhole,
                                                   v27,
                                                   limitCount,
                                                   v32,
                                                   rarityId,
                                                   userServantEntity->fields.lv,
                                                   this->fields._InitPos_k__BackingField,
                                                   2,
                                                   0);
      this->fields.isQuestRestriction = (unsigned __int8)userServantEntity & 1;
      if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      {
        userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !userServantEntity )
          goto LABEL_92;
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
                                                     (QuestRestrictionInfo_o *)userServantEntity,
                                                     this->fields._InitPos_k__BackingField,
                                                     0);
        if ( ((unsigned __int8)userServantEntity & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
          if ( !userServantEntity )
            goto LABEL_92;
          v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = v36;
          *(_QWORD *)&v81.fields.fakeValue = v35;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v81, 0);
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v38);
          if ( !userServantEntity )
            goto LABEL_92;
          v39 = userServantEntity->fields.limitCount;
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
          if ( !userServantEntity )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)ServantLeaderInfo__getDispLimitCount(userServantEntity, 0);
          if ( !questRestrictionInfo )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                       questRestrictionInfo,
                                                       v37,
                                                       v39,
                                                       (int32_t)userServantEntity,
                                                       this->fields._InitPos_k__BackingField,
                                                       1,
                                                       0);
          goto LABEL_61;
        }
      }
    }
    else
    {
LABEL_49:
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
      if ( !userServantEntity )
        goto LABEL_62;
      userServantEntity = (ServantLeaderInfo_o *)this->fields.followerInfo;
      if ( !userServantEntity )
        goto LABEL_92;
      userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__get_IsNpc((FollowerInfo_o *)userServantEntity, 0);
      if ( ((unsigned __int8)userServantEntity & 1) != 0 && (v50 = this->fields.questRestrictionInfo) != 0 )
      {
        followerInfo = this->fields.followerInfo;
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v50->fields.questId, 0);
        if ( !followerInfo )
          goto LABEL_92;
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(
                                        followerInfo,
                                        0,
                                        (int32_t)userServantEntity,
                                        0);
        v53 = this->fields.questRestrictionInfo;
        v54 = this->fields.rarityId;
        v55 = NpcServantIndividualityFull;
        userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v56);
        if ( !userServantEntity || !v53 )
          goto LABEL_92;
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_44117492(
                                                     v53,
                                                     &this->fields.isQuestRestrictionWhole,
                                                     v55,
                                                     v54,
                                                     userServantEntity->fields.lv,
                                                     this->fields._InitPos_k__BackingField,
                                                     3,
                                                     0);
        this->fields.isQuestRestriction = (unsigned __int8)userServantEntity & 1;
        if ( ((unsigned __int8)userServantEntity & 1) == 0 )
        {
          userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
          if ( !userServantEntity )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
                                                       (QuestRestrictionInfo_o *)userServantEntity,
                                                       this->fields._InitPos_k__BackingField,
                                                       0);
          if ( ((unsigned __int8)userServantEntity & 1) != 0 )
          {
            userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !userServantEntity )
              goto LABEL_92;
            userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_44139672(
                                                         (QuestRestrictionInfo_o *)userServantEntity,
                                                         v55,
                                                         this->fields._InitPos_k__BackingField,
                                                         0);
LABEL_61:
            this->fields.isQuestRestriction = (unsigned __int8)userServantEntity & 1;
          }
        }
      }
      else
      {
LABEL_62:
        *(_WORD *)&this->fields.isQuestRestriction = 0;
      }
    }
    followerIndex = this->fields.followerIndex;
    v58 = this->fields.followerInfo;
    v59 = this->fields.questRestrictionInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      if ( v59 )
      {
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v59->fields.questId, 0);
        v60 = (int)userServantEntity;
        if ( !v58 )
          goto LABEL_92;
      }
      else
      {
        v60 = 0;
        if ( !v58 )
          goto LABEL_92;
      }
    }
    else
    {
      v60 = 2;
      if ( !v58 )
        goto LABEL_92;
    }
    userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_42478108(
                                                 v58,
                                                 v59,
                                                 followerIndex,
                                                 partyItem,
                                                 num,
                                                 v60,
                                                 0);
    followerGrandGraphId = this->fields.followerGrandGraphId;
    v62 = this->fields.followerIndex;
    v63 = this->fields.followerInfo;
    v64 = this->fields.questRestrictionInfo;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)userServantEntity & 1;
    if ( followerGrandGraphId <= 0 )
    {
      if ( v64 )
      {
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v64->fields.questId, 0);
        v65 = (int)userServantEntity;
        if ( !v63 )
          goto LABEL_92;
      }
      else
      {
        v65 = 0;
        if ( !v63 )
          goto LABEL_92;
      }
    }
    else
    {
      v65 = 2;
      if ( !v63 )
        goto LABEL_92;
    }
    IsUniqueIndividualityRestriction_42478300 = FollowerInfo__IsUniqueIndividualityRestriction_42478300(
                                                  v63,
                                                  v64,
                                                  v62,
                                                  partyItem,
                                                  num,
                                                  v65,
                                                  0);
    v68 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_42478300;
    if ( v68 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v67);
      IsFixedSupportPosition_44123584 = QuestRestrictionInfo__IsFixedSupportPosition_44123584(
                                          v68,
                                          num,
                                          ServantLeader,
                                          0);
      v71 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_44123584;
      if ( v71 )
      {
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsUseOldMaster(v71, 0);
        if ( ((unsigned __int8)userServantEntity & 1) == 0 )
          goto LABEL_86;
        if ( !partyItem )
          goto LABEL_92;
        userServantEntity = (ServantLeaderInfo_o *)PartyListViewItem__GetMember(partyItem, num, 0);
        if ( !userServantEntity )
          goto LABEL_92;
        if ( LOBYTE(userServantEntity->fields.grandSvt) )
          goto LABEL_86;
        userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !userServantEntity )
          goto LABEL_92;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport((QuestRestrictionInfo_o *)userServantEntity, 0) )
        {
LABEL_86:
          v72 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, v11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
          svtLimitCount = this->fields.svtLimitCount;
          v76 = v74;
          userServantEntity = (ServantLeaderInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v77);
          if ( v72 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v72,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v76,
              svtLimitCount,
              (int32_t)userServantEntity,
              num,
              1,
              0);
            return;
          }
          goto LABEL_92;
        }
      }
    }
    else
    {
      this->fields.isFixedSupportPositionRestriction = 0;
    }
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
    return;
  }
  v8 = this->fields.questRestrictionInfo;
  if ( v8 )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.atk;
    v9 = *(_QWORD *)&userServantEntity->fields.adjustAtk;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v78.fields.currentCryptoKey = v10;
    *(_QWORD *)&v78.fields.fakeValue = v9;
    userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v78,
                                                 0);
    v12 = this->fields.userServantEntity;
    if ( v12 )
    {
      v13 = (int)userServantEntity;
      userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                   v12->fields.limitCount,
                                                   0);
      if ( this->fields.userServantEntity )
      {
        v14 = (int)userServantEntity;
        userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(
                                                     this->fields.userServantEntity,
                                                     0,
                                                     0);
        v15 = this->fields.userServantEntity;
        if ( v15 )
        {
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_44117212(
                                                       v8,
                                                       &this->fields.isQuestRestrictionWhole,
                                                       v13,
                                                       v14,
                                                       (int32_t)userServantEntity,
                                                       this->fields.rarityId,
                                                       v15->fields.lv,
                                                       this->fields._InitPos_k__BackingField,
                                                       1,
                                                       0);
          this->fields.isQuestRestriction = (unsigned __int8)userServantEntity & 1;
          if ( ((unsigned __int8)userServantEntity & 1) != 0 )
            goto LABEL_18;
          v17 = this->fields.userServantEntity;
          if ( v17 )
          {
            v18 = this->fields.questRestrictionInfo;
            v20 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
            v19 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v79.fields.currentCryptoKey = v20;
            *(_QWORD *)&v79.fields.fakeValue = v19;
            userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                         v79,
                                                         0);
            v21 = this->fields.userServantEntity;
            if ( v21 )
            {
              v22 = (int)userServantEntity;
              userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                           v21->fields.limitCount,
                                                           0);
              if ( this->fields.userServantEntity )
              {
                v23 = (int)userServantEntity;
                userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(
                                                             this->fields.userServantEntity,
                                                             0,
                                                             0);
                if ( v18 )
                {
                  this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                      v18,
                                                      v22,
                                                      v23,
                                                      (int32_t)userServantEntity,
                                                      this->fields._InitPos_k__BackingField,
                                                      0,
                                                      0);
LABEL_18:
                  PartyOrganizationListViewItem__SetDuplicationGrandQuestEquipmentMarkFlag(this, partyItem, v16);
                  userServantEntity = (ServantLeaderInfo_o *)this->fields.userServantEntity;
                  if ( !userServantEntity )
                    goto LABEL_92;
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
    }
LABEL_92:
    sub_1C93D2C(userServantEntity, v11);
  }
  *(_WORD *)&this->fields.isQuestRestriction = 0;
LABEL_42:
  userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_43873640(
                                               (UserServantEntity_o *)userServantEntity,
                                               this->fields.questRestrictionInfo,
                                               partyItem,
                                               num,
                                               -1,
                                               0);
  v40 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)userServantEntity & 1;
  if ( !v40 )
    goto LABEL_92;
  IsUniqueIndividualityRestriction_43874020 = UserServantEntity__IsUniqueIndividualityRestriction_43874020(
                                                v40,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0);
  v43 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_43874020;
  if ( v43 )
  {
    v44 = PartyOrganizationListViewItem__get_SvtId(this, v42);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v44, 0);
    v46 = this->fields.svtLimitCount;
    v47 = v45;
    DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v48);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v43,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v47,
      v46,
      DispImageLimitCount,
      num,
      0,
      0);
  }
  else
  {
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
  }
  this->fields.isFixedSupportPositionRestriction = 0;
}


int32_t PartyOrganizationListViewItem__ClearEquip(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v2; // x19
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *v4; // x1
  const MethodInfo *v5; // x3
  int32_t v6; // w20

  v2 = this;
  if ( (byte_4D2C37E & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4D2C37E = 1;
  }
  equipIdList = v2->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !LODWORD(equipIdList->max_length) )
      goto LABEL_16;
    if ( equipIdList->m_Items[0] )
    {
      this = (PartyOrganizationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v2->fields.equipServantEntityList,
                                                  0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v6 = 0;
      }
      else
      {
        this = (PartyOrganizationListViewItem_o *)v2->fields.equipServantEntityList;
        if ( !this )
          goto LABEL_17;
        this = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    0,
                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
        if ( !this )
          goto LABEL_17;
        v6 = (int32_t)this->fields.equipIdList;
      }
      v4 = v2->fields.equipIdList;
      if ( v4 )
      {
        if ( LODWORD(v4->max_length) )
        {
          v4->m_Items[0] = 0;
          PartyOrganizationListViewItem__SetEquipStatus(v2, v4, 0, v5);
          return v6;
        }
LABEL_16:
        sub_1C93D34(this);
      }
LABEL_17:
      sub_1C93D2C(this, v4);
    }
  }
  return 0;
}


void PartyOrganizationListViewItem__ClearFatigure(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  this->fields.fatigureTime = -1;
}


PartyOrganizationListViewItem_o *PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t index; // w22
  PartyOrganizationListViewItem_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4D2C374 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewItem_TypeInfo);
    byte_4D2C374 = 1;
  }
  index = idx;
  if ( idx < 0 )
    index = this->fields.index;
  v6 = (PartyOrganizationListViewItem_o *)sub_1C93D20(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor(v6, index, v7);
  if ( !v6 )
    sub_1C93D2C(v8, v9);
  PartyOrganizationListViewItem__Set(v6, this, v10);
  if ( (idx & 0x80000000) == 0 )
  {
    v6->fields.index = idx;
    ListViewItem__SetSortIndex((ListViewItem_o *)v6, idx, 0);
  }
  return v6;
}


bool PartyOrganizationListViewItem__CompMember(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isCheckSupport,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v6; // x20
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *userId; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v10; // w20
  const MethodInfo *v11; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o *v13; // x9
  bool result; // w0
  __int128 v15; // q1
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q0
  PartyOrganizationListViewItem_o *v18; // x21
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v20; // x8
  int max_length; // w10
  int v22; // w11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-50h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v6 = this;
  if ( (byte_4D2C381 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2C381 = 1;
  }
  if ( !item )
    goto LABEL_39;
  if ( v6->fields.npcFollowerSvtId != item->fields.npcFollowerSvtId || v6->fields.isFollower == !item->fields.isFollower )
    return 0;
  if ( v6->fields.isFollower )
  {
    if ( isCheckSupport )
    {
      followerInfo = v6->fields.followerInfo;
      if ( followerInfo )
        followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
      userId = item->fields.followerInfo;
      if ( userId )
        userId = (struct FollowerInfo_o *)userId->fields.userId;
      if ( followerInfo != userId )
        return 0;
      SvtId = PartyOrganizationListViewItem__get_SvtId(v6, (const MethodInfo *)item);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
      v26 = PartyOrganizationListViewItem__get_SvtId(item, v11);
      if ( v10 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v26, 0) )
        return 0;
    }
    return 1;
  }
  userServantEntity = v6->fields.userServantEntity;
  v13 = item->fields.userServantEntity;
  if ( userServantEntity == v13 )
  {
LABEL_24:
    if ( v6->fields._InitPos_k__BackingField == item->fields._InitPos_k__BackingField )
    {
      equipIdList = v6->fields.equipIdList;
      v20 = item->fields.equipIdList;
      if ( equipIdList )
      {
        if ( v20 )
        {
          max_length = equipIdList->max_length;
          if ( max_length != LODWORD(v20->max_length) )
            return 0;
          if ( max_length >= 1 )
          {
            v22 = 0;
            do
            {
              if ( max_length == v22 )
                sub_1C93D34(this);
              if ( equipIdList->m_Items[v22] != v20->m_Items[v22] )
                return 0;
            }
            while ( max_length != ++v22 );
          }
        }
      }
      else if ( !v20 )
      {
        return 1;
      }
      if ( v6->fields._EquipFriendShipSkillChange_k__BackingField == item->fields._EquipFriendShipSkillChange_k__BackingField )
        return 1;
    }
    return 0;
  }
  result = 0;
  if ( userServantEntity && v13 )
  {
    v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v25.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v24 = v25;
    this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                &v24,
                                                0);
    v16 = item->fields.userServantEntity;
    if ( v16 )
    {
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      v18 = this;
      *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v23.fields.fakeValue = v17;
      this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                  &v23,
                                                  0);
      if ( v18 != this )
        return 0;
      goto LABEL_24;
    }
LABEL_39:
    sub_1C93D2C(this, item);
  }
  return result;
}


void PartyOrganizationListViewItem__Empty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  const MethodInfo *v33; // x3

  this->fields.userServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity, 0, v2, v3, v4, v5, v6, v7);
  this->fields.followerInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.followerInfo, 0, v9, v10, v11, v12, v13, v14);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0;
  *(_QWORD *)&this->fields.followerIndex = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  HIDWORD(this->fields.equipIdList) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v15, v16, v17, v18, v19, v20);
  this->fields.servantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, 0, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  *(_QWORD *)&this->fields.rarityId = 0;
  *(_QWORD *)&this->fields.frameType = 9;
  this->fields.commandCodeIdList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList, 0, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsGrandServant_k__BackingField = 0;
  this->fields._IsUseGrandBoard_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, 0, v33);
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0
  int32_t monitor; // w23
  __int64 v7; // x19
  struct System_Object_array *items; // x20
  int32_t EquipLimitCount; // w0
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w22
  int32_t DisplayEquipIndex_k__BackingField; // w21
  int32_t ReturnTypeByQuestId; // w3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4D2C3A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3A1 = 1;
  }
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    goto LABEL_23;
  if ( equipServantEntityList->fields._size <= index )
  {
    monitor = 0;
  }
  else
  {
    equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            equipServantEntityList,
                                                                            index,
                                                                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    if ( !equipServantEntityList )
      goto LABEL_23;
    monitor = (int32_t)equipServantEntityList[2].monitor;
  }
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
  if ( !equipServantEntityList )
    goto LABEL_23;
  if ( equipServantEntityList->fields._size <= index )
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      followerIndex = this->fields.followerIndex;
      DisplayEquipIndex_k__BackingField = this->fields._DisplayEquipIndex_k__BackingField;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( questRestrictionInfo )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      EquipLimitCount = FollowerInfo__getEquipLimitCount(
                          followerInfo,
                          followerIndex,
                          DisplayEquipIndex_k__BackingField,
                          ReturnTypeByQuestId,
                          0);
    }
    else
    {
      EquipLimitCount = 0;
    }
    return monitor > 0 && EquipLimitCount >= monitor;
  }
  equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          equipServantEntityList,
                                                                          index,
                                                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipServantEntityList )
LABEL_23:
    sub_1C93D2C(equipServantEntityList, *(_QWORD *)&index);
  items = equipServantEntityList[2].fields._items;
  v7 = *(_QWORD *)&equipServantEntityList[2].fields._size;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = items;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  EquipLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v16, 0);
  return monitor > 0 && EquipLimitCount >= monitor;
}


void PartyOrganizationListViewItem__Finalize(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *PartyOrganizationListViewItem__GetAddNotEditPos(
        PartyOrganizationListViewItem_o *this,
        System_String_o *baseMessage,
        const MethodInfo *method)
{
  return baseMessage;
}


System_String_o *PartyOrganizationListViewItem__GetAssetName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 SvtId; // x0
  __int64 v7; // x1
  UserServantEntity_o *v8; // x8
  int32_t v9; // w19
  int32_t v10; // w20
  int32_t v11; // w0
  int32_t v12; // w1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v18; // w21
  FollowerInfo_o *v19; // x22
  int32_t v20; // w20
  int32_t v21; // w2
  struct QuestRestrictionInfo_o *v22; // x8
  int32_t CardImageLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4D2C398 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&UINarrowFigureRender_TypeInfo);
    byte_4D2C398 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
  {
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo )
      return 0;
    followerIndex = this->fields.followerIndex;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
      else
        ReturnTypeByQuestId = 0;
    }
    else
    {
      ReturnTypeByQuestId = 2;
    }
    SvtId = FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
    v18 = this->fields.followerIndex;
    v19 = this->fields.followerInfo;
    v20 = SvtId;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      v22 = this->fields.questRestrictionInfo;
      if ( v22 )
      {
        SvtId = FollowerInfo__GetReturnTypeByQuestId(v22->fields.questId, 0);
        v21 = SvtId;
        if ( !v19 )
          goto LABEL_27;
      }
      else
      {
        v21 = 0;
        if ( !v19 )
          goto LABEL_27;
      }
    }
    else
    {
      v21 = 2;
      if ( !v19 )
        goto LABEL_27;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v19, v18, v21, 0);
    if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v11 = v20;
    v12 = CardImageLimitCount;
    return UINarrowFigureRender__GetAssetName(v11, v12, 0);
  }
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v5;
  *(_QWORD *)&v24.fields.fakeValue = v4;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v24, 0);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_27:
    sub_1C93D2C(SvtId, v7);
  v9 = SvtId;
  v10 = UserServantEntity__getCardImageLimitCount(v8, 0, 0);
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  v11 = v9;
  v12 = v10;
  return UINarrowFigureRender__GetAssetName(v11, v12, 0);
}


System_Collections_Generic_List_UserServantGrandEntity__o *PartyOrganizationListViewItem__GetCanOrganizationGrandSvtIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_ICollection_o *monitor; // x19
  bool IsNullOrEmpty; // w0
  System_Collections_Generic_List_UserServantGrandEntity__o *v8; // x20
  System_Collections_Generic_List_object__o *v9; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_IEnumerator_c **v13; // x22
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v14; // x29
  PartyOrganizationListViewItem___c__DisplayClass367_0_c **v15; // x21
  const MethodInfo_3465A70 **v16; // x20
  System_Collections_Generic_IEnumerator_T__o *v17; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v19; // x1
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c *v24; // x1
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x24
  __int64 v29; // x25
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x19
  const MethodInfo_3465A70 **v34; // x23
  PartyOrganizationListViewItem___c__DisplayClass367_0_c **v35; // x20
  System_Collections_IEnumerator_c **v36; // x21
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v37; // x22
  QuestRestrictionInfo_o *v38; // x26
  int32_t v39; // w27
  int32_t v40; // w28
  int32_t v41; // w29
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v43; // x1
  _BOOL8 IsRestriction_44115980; // x0
  __int64 v45; // x1
  void *v46; // x27
  Il2CppClass *v47; // x28
  QuestRestrictionInfo_o *v48; // x26
  __int64 v49; // x0
  __int64 v50; // x1
  int32_t v51; // w27
  __int64 v52; // x1
  int32_t v53; // w28
  __int64 DispLimitCount; // x0
  __int64 v55; // x1
  System_Int32_array *ServantIndividuality; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  _BOOL8 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct System_Int32_array *targetVals; // x26
  System_Func_int__bool__o *v72; // x27
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  System_Collections_Generic_List_object__o *v82; // [xsp+8h] [xbp-88h]
  RestrictionEntity_o *GrandServantRestrictionEntity; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_IEnumerator_T__o *v84; // [xsp+18h] [xbp-78h]
  PartyOrganizationListViewItem_o *v85; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_4D2C3A6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__DisplayClass367_0__GetCanOrganizationGrandSvtIdList_b__0__);
    sub_1C93AD4(&PartyOrganizationListViewItem___c__DisplayClass367_0_TypeInfo);
    byte_4D2C3A6 = 1;
  }
  entity = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                    questRestrictionInfo,
                                    this->fields._InitPos_k__BackingField,
                                    0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_75;
  monitor = (System_Collections_ICollection_o *)Master_object[2].monitor;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(monitor, 0);
  v8 = 0;
  if ( !GrandServantRestrictionEntity || IsNullOrEmpty )
    return v8;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !monitor )
LABEL_75:
    sub_1C93D2C(Master_object, v5);
  v82 = v9;
  v85 = this;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)monitor,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v84 = Enumerator;
  if ( !Enumerator )
    sub_1C93D2C(0, v12);
  v13 = &System_Collections_IEnumerator_TypeInfo;
  v14 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v15 = &PartyOrganizationListViewItem___c__DisplayClass367_0_TypeInfo;
  v16 = (const MethodInfo_3465A70 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
  v17 = Enumerator;
  while ( 1 )
  {
    klass = v17->klass;
    v19 = *v13;
    v20 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v19 )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v22 = sub_1C69E5C(v17, v19, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v17,
            *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      break;
    v23 = v17->klass;
    v24 = *v14;
    v25 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      v26 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v26 - 1) != v24 )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_25;
      }
      v27 = (__int64)&v23->vtable[*v26];
    }
    else
    {
LABEL_25:
      v27 = sub_1C69E5C(v17, v24, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            v17,
            *(_QWORD *)(v27 + 8));
    v29 = sub_1C93D20(*v15);
    PartyOrganizationListViewItem___c__DisplayClass367_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass367_0_o *)v29,
      0);
    if ( !v28 )
      sub_1C93D2C(v30, v31);
    if ( !v10 )
      sub_1C93D2C(v30, v31);
    if ( DataMasterBase_object__object__long___TryGetEntity(v10, &entity, *(_QWORD *)(v28 + 32), *v16) )
    {
      if ( !entity )
        sub_1C93D2C(0, v32);
      v33 = v10;
      v34 = v16;
      v35 = v15;
      v36 = v13;
      v37 = v14;
      v38 = v85->fields.questRestrictionInfo;
      v39 = *(_DWORD *)(v28 + 40);
      v40 = *(_DWORD *)(v28 + 44);
      v41 = *(_DWORD *)(v28 + 48);
      OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
      if ( !OverwriteStatus )
        sub_1C93D2C(0, v43);
      if ( !v38 )
        sub_1C93D2C(OverwriteStatus, v43);
      IsRestriction_44115980 = QuestRestrictionInfo__IsRestriction_44115980(
                                 v38,
                                 v39,
                                 v40,
                                 v41,
                                 OverwriteStatus->fields._Rarity_k__BackingField,
                                 *(_DWORD *)(v28 + 52),
                                 1,
                                 0);
      v14 = v37;
      v13 = v36;
      v15 = v35;
      v16 = v34;
      v10 = v33;
      v17 = v84;
      if ( !IsRestriction_44115980 )
      {
        if ( !entity )
          sub_1C93D2C(IsRestriction_44115980, v45);
        v47 = entity[5].klass;
        v46 = entity[5].monitor;
        v48 = v85->fields.questRestrictionInfo;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v87.fields.currentCryptoKey = v47;
        *(_QWORD *)&v87.fields.fakeValue = v46;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v87, 0);
        if ( !entity )
          sub_1C93D2C(v49, v50);
        v51 = v49;
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                0);
        if ( !entity )
          sub_1C93D2C(0, v52);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !v48 )
          sub_1C93D2C(DispLimitCount, v55);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v48, v51, v53, DispLimitCount, 0);
        if ( !v29 )
          sub_1C93D2C(ServantIndividuality, ServantIndividuality);
        *(_QWORD *)(v29 + 16) = ServantIndividuality;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(v29 + 16),
          (int32_t)ServantIndividuality,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
        v63 = BasicHelper__IsNullOrEmpty(
                (System_Collections_ICollection_o *)GrandServantRestrictionEntity->fields.targetVals,
                0);
        if ( v63 )
          goto LABEL_46;
        targetVals = GrandServantRestrictionEntity->fields.targetVals;
        if ( !targetVals )
          sub_1C93D2C(v63, v64);
        if ( !LODWORD(targetVals->max_length) )
          sub_1C93D34(v63);
        if ( !targetVals->m_Items[0]
          || (v72 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v72,
                (Il2CppObject *)v29,
                Method_PartyOrganizationListViewItem___c__DisplayClass367_0__GetCanOrganizationGrandSvtIdList_b__0__,
                0),
              v63 = BasicHelper__Any_int__51960056(
                      targetVals,
                      (System_Func_T__bool__o *)v72,
                      (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720)) )
        {
LABEL_46:
          if ( !v82 )
            sub_1C93D2C(v63, v64);
          items = v82->fields._items;
          v74 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
          ++v82->fields._version;
          if ( !items )
            sub_1C93D2C(v63, v64);
          size = v82->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v82,
              (Il2CppObject *)v28,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &items->obj.klass + size;
            v82->fields._size = size + 1;
            v76[4] = (Il2CppClass *)v28;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v76 + 4), v28, v65, v66, v67, v68, v69, v70);
          }
        }
      }
    }
  }
  v8 = (System_Collections_Generic_List_UserServantGrandEntity__o *)v82;
  if ( v17 )
  {
    v77 = v17->klass;
    v78 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      v79 = &v77->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_57;
      }
      v80 = (__int64)&v77->vtable[*v79];
    }
    else
    {
LABEL_57:
      v80 = sub_1C69E5C(v17, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(v17, *(_QWORD *)(v80 + 8));
  }
  return v8;
}


int32_t PartyOrganizationListViewItem__GetCardImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *userServantEntity; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v10; // x0
  struct QuestRestrictionInfo_o *v11; // x8

  if ( (byte_4D2C39A & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2C39A = 1;
  }
  if ( this->fields.userServantEntity )
  {
    if ( !ConstantMaster__IsOtherImage(0) )
      goto LABEL_7;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_23;
    if ( !UserServantEntity__IsOtherImageCancel(userServantEntity, 0) )
    {
      v10 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      return v10->static_fields->OtherImageLimitCount;
    }
    else
    {
LABEL_7:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0),
            result < 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0);
LABEL_23:
        sub_1C93D2C(userServantEntity, v3);
      }
    }
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      followerIndex = this->fields.followerIndex;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v11 = this->fields.questRestrictionInfo;
        if ( v11 )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, 0);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      return FollowerInfo__getCardImageLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


int32_t PartyOrganizationListViewItem__GetCommandCardLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x0
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v9; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C93D2C(v5, 0);
    }
    LODWORD(v5) = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      followerIndex = this->fields.followerIndex;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v9 = this->fields.questRestrictionInfo;
        if ( v9 )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      LODWORD(v5) = FollowerInfo__getCommandCardLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  return v5;
}


System_Int32_array *PartyOrganizationListViewItem__GetCommandCardList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  System_Int32_array *result; // x0
  __int64 v5; // x1
  struct ServantEntity_o *v6; // x8
  struct System_Int32_array *cardIds; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 i; // x9
  unsigned int v10; // w13

  if ( (byte_4D2C397 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2C397 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0;
  result = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 3);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0 )
LABEL_15:
    sub_1C93D2C(result, v5);
  max_length_low = LODWORD(cardIds->max_length);
  for ( i = 0; (__int64)i < (int)max_length_low; ++i )
  {
    if ( i >= max_length_low )
      goto LABEL_18;
    v10 = cardIds->m_Items[i] - 1;
    if ( v10 <= 2 )
    {
      if ( !result )
        goto LABEL_15;
      if ( v10 >= LODWORD(result->max_length) )
LABEL_18:
        sub_1C93D34(result);
      ++result->m_Items[v10];
    }
  }
  return result;
}


System_Int32_array *PartyOrganizationListViewItem__GetCommandCodeIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeIdList;
}


int32_t PartyOrganizationListViewItem__GetCorrectionIconId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v5; // w0

  if ( (byte_4D2C399 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C399 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
  return QuestRestrictionInfo__GetCorrectionIconId(questRestrictionInfo, v5, this->fields.isFollower, 0);
}


int32_t PartyOrganizationListViewItem__GetDispImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x0
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v9; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C93D2C(v5, 0);
    }
    LODWORD(v5) = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      followerIndex = this->fields.followerIndex;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v9 = this->fields.questRestrictionInfo;
        if ( v9 )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      LODWORD(v5) = FollowerInfo__getDispLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  return v5;
}


System_String_o *PartyOrganizationListViewItem__GetEquipFrameName(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x20
  struct System_Int64_array *equipIdList; // x8
  unsigned int max_length; // w11
  unsigned int v7; // w9
  int64_t v8; // x12
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  unsigned int v12; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4D2C3A5 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C93AD4(&StringLiteral_7044/*"GRAND_SERVANT_EQUIP_FRAME_"*/);
    byte_4D2C3A5 = 1;
  }
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    sub_1C93D2C(this, userSvtId);
  max_length = equipIdList->max_length;
  v7 = 0;
  do
  {
    if ( (int)v7 >= (int)max_length )
      return string_TypeInfo->static_fields->Empty;
    if ( v7 >= max_length )
      sub_1C93D34(this);
    v8 = equipIdList->m_Items[v7++];
  }
  while ( v8 != userSvtId );
  v12 = v7;
  v9 = System_Int32__ToString((int32_t)&v12, 0);
  v10 = System_String__Concat_64425724((System_String_o *)StringLiteral_7044/*"GRAND_SERVANT_EQUIP_FRAME_"*/, v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v10, 0);
}


System_Int64_array *PartyOrganizationListViewItem__GetEquipList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Array_o *equipIdList; // x0
  System_Int64_array *result; // x0
  System_Int64_array *v5; // x19
  BalanceConfig_c *v6; // x0
  PartyOrganizationListViewItem_o *v7; // x0
  System_Collections_Generic_List_EventMargeItemUpValInfo__o **v8; // x1
  bool v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4D2C382 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    byte_4D2C382 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0);
    if ( result )
    {
      v5 = result;
      result = (System_Int64_array *)sub_1C93C10(result, long___TypeInfo);
      if ( !result )
      {
        v7 = (PartyOrganizationListViewItem_o *)sub_1C940C8(v5);
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(v7, v8, v9, v10);
      }
    }
  }
  else
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    return (System_Int64_array *)sub_1C93B7C(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax);
  }
  return result;
}


EquipTargetInfo_o *PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(
        PartyOrganizationListViewItem_o *this,
        int32_t equipIndex,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__GetEquipTargetByEquipIdx(followerInfo, followerIndex, ReturnTypeByQuestId, equipIndex, 0);
}


bool PartyOrganizationListViewItem__GetEventUpVal(
        PartyOrganizationListViewItem_o *this,
        EventUpValInfo_o **eventUpValInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventUpValInfo_o *v8; // x8

  v8 = this->fields.eventUpValInfo;
  *eventUpValInfo = v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)eventUpValInfo, (int32_t)v8, (int32_t)method, v3, v4, v5, v6, v7);
  return this->fields.isEventUpVal;
}


System_String_o *PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4D2C396 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C396 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(questRestrictionInfo, 0);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4D2C395 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C395 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(questRestrictionInfo, 0);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


EventCampaignEntity_array *PartyOrganizationListViewItem__GetFriendPointCampaignEntityList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.friendPointCampaignEntityList;
}


UserServantGrandInfo_o *PartyOrganizationListViewItem__GetGrandServantInfo(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x20
  UserServantGrandInfo_o *result; // x0
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UserServantGrandInfo_c *v9; // x0

  if ( (byte_4D2C3A3 & 1) == 0 )
  {
    sub_1C93AD4(&UserServantGrandInfo_TypeInfo);
    byte_4D2C3A3 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( this->fields._IsTempGrandServant_k__BackingField )
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    return UserServantGrandInfo__Make(userServantEntity, 1, 0);
  }
  else if ( !userServantEntity || (result = UserServantEntity__get_GrandInfo(this->fields.userServantEntity, 0)) == 0 )
  {
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo
      || ((followerIndex = this->fields.followerIndex, this->fields.followerGrandGraphId <= 0)
        ? ((questRestrictionInfo = this->fields.questRestrictionInfo) == 0
         ? (ReturnTypeByQuestId = 0)
         : (ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0)))
        : (ReturnTypeByQuestId = 2),
          (result = FollowerInfo__GetGrandServantInfo(followerInfo, followerIndex, ReturnTypeByQuestId, 0)) == 0) )
    {
      v9 = UserServantGrandInfo_TypeInfo;
      if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        v9 = UserServantGrandInfo_TypeInfo;
      }
      return v9->static_fields->Empty;
    }
  }
  return result;
}


int32_t PartyOrganizationListViewItem__GetIconLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x0
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *v9; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C93D2C(v5, 0);
    }
    LODWORD(v5) = UserServantEntity__getIconLimitCount(userServantEntity, 0, 0);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      followerIndex = this->fields.followerIndex;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v9 = this->fields.questRestrictionInfo;
        if ( v9 )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      LODWORD(v5) = FollowerInfo__getIconImageLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  return v5;
}


int32_t PartyOrganizationListViewItem__GetImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.imageLimitCount;
}


System_String_o *PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4D2C39C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C39C = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             this->fields.haveIndividualityServant,
             0);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4D2C39D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C39D = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             this->fields.haveIndividualityServant,
             0);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t PartyOrganizationListViewItem__GetNpcFollowerServantId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.npcFollowerSvtId;
}


int32_t PartyOrganizationListViewItem__GetPortraitLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
  {
    LODWORD(v5) = 0;
    return v5;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(questRestrictionInfo, userServantEntity, 0);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C93D2C(v5, 0);
  }
  LODWORD(v5) = UserServantEntity__getPortraitLimitCount(userServantEntity, 0, 0);
  return v5;
}


System_String_o *PartyOrganizationListViewItem__GetQuestRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v4; // x0
  struct QuestRestrictionInfo_o *v6; // x0
  System_String_o *v7; // x20
  System_String_o *ConfirmRestrictionMessage; // x1

  if ( (byte_4D2C392 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_10325/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C392 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0) )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( v4 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v4, 0);
LABEL_32:
    sub_1C93D2C(v4, method);
  }
  if ( this->fields.index >= 1 )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( v6 )
    {
      if ( v6->fields.isFixedMyServantSingle )
        return QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(v6, 0);
    }
  }
  if ( this->fields.isServantNumRestriction )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v4, 0);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v4, 0);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcMessage(v4, 0);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v7 = (System_String_o *)v4;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0);
    return System_String__Concat_64425724(v7, ConfirmRestrictionMessage, 0);
  }
  else
  {
    v4 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
      method = 0;
    else
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetRestrictionMessage(v4, (int32_t)method, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *PartyOrganizationListViewItem__GetServantName(
        PartyOrganizationListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t maxLimitCount; // w20
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  const MethodInfo *v8; // x1
  void *ServantLeader; // x0
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  struct ServantEntity_o *servantEntity; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  int64_t v15; // x21
  struct ServantEntity_o *v16; // x8
  ServantLimitImageMaster_o *v17; // x19
  __int64 v18; // x21
  __int64 v19; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4D2C387 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C387 = 1;
  }
  entity = 0;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v7;
    *(_QWORD *)&v22.fields.fakeValue = v6;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v22, 0);
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, *(const MethodInfo **)&limitCount) )
  {
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v8);
    if ( !ServantLeader )
      goto LABEL_36;
    maxLimitCount = *((_DWORD *)ServantLeader + 16);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  ServantLeader = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ServantLeader = NetworkManager_TypeInfo;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_36;
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v15 = *(_QWORD *)(*((_QWORD *)ServantLeader + 23) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v23, 0);
  if ( !Master_object )
LABEL_36:
    sub_1C93D2C(ServantLeader, v10);
  ServantLeader = (void *)UserServantCollectionMaster__TryGetEntity(
                            (UserServantCollectionMaster_o *)Master_object,
                            &entity,
                            v15,
                            (int32_t)ServantLeader,
                            0);
  if ( ((unsigned __int8)ServantLeader & 1) == 0 )
  {
    ServantLeader = this->fields.servantEntity;
    if ( ServantLeader )
      return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0, 0);
    goto LABEL_36;
  }
  if ( !entity )
    goto LABEL_36;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_26:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = this->fields.servantEntity;
  if ( !v16 )
    goto LABEL_36;
  v17 = (ServantLimitImageMaster_o *)ServantLeader;
  v19 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v19;
  *(_QWORD *)&v24.fields.fakeValue = v18;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v24, 0);
  if ( !v17 )
    goto LABEL_36;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v17, (int32_t)ServantLeader, maxLimitCount, 0, 0);
}


System_String_o *PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v7; // x0

  if ( (byte_4D2C394 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_44/*"\n\n"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_10365/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_4D2C394 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  UniqueIndividualityRestrictionMessage = QuestRestrictionInfo__GetUniqueIndividualityRestrictionMessage(
                                            questRestrictionInfo,
                                            isFixMessage,
                                            0);
  if ( isFixMessage )
    return UniqueIndividualityRestrictionMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10365/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
  return System_String__Concat_64463988(
           v7,
           (System_String_o *)StringLiteral_44/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0);
}


System_String_o *PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4D2C393 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C393 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetUniqueServantRestrictionMessage(questRestrictionInfo, 0);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


bool PartyOrganizationListViewItem__HasAtkBoost(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantGrandInfo_o *GrandServantInfo; // x0
  __int64 v6; // x1

  if ( PartyOrganizationListViewItem__get_AdjustAtk(this, method) > 0 )
    return 1;
  GrandServantInfo = PartyOrganizationListViewItem__GetGrandServantInfo(this, v3);
  if ( !GrandServantInfo )
    sub_1C93D2C(0, v6);
  return UserServantGrandInfo__get_AddedAtk(GrandServantInfo, 0) > 0;
}


bool PartyOrganizationListViewItem__HasHpBoost(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantGrandInfo_o *GrandServantInfo; // x0
  __int64 v6; // x1

  if ( PartyOrganizationListViewItem__get_AdjustHp(this, method) > 0 )
    return 1;
  GrandServantInfo = PartyOrganizationListViewItem__GetGrandServantInfo(this, v3);
  if ( !GrandServantInfo )
    sub_1C93D2C(0, v6);
  return UserServantGrandInfo__get_AddedHp(GrandServantInfo, 0) > 0;
}


bool PartyOrganizationListViewItem__HaveCanOrganizationServant(
        PartyOrganizationListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *v7; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  System_Collections_ICollection_o **v9; // x22
  System_Collections_Generic_List_int__o *GrandSvtIdListInParty; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x27
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_IEnumerator_c **v14; // x28
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v15; // x24
  const MethodInfo_385CCF0 **v16; // x20
  System_Collections_Generic_IEnumerator_T__o *v17; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v19; // x1
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c *v24; // x1
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x26
  _BOOL8 v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x19
  System_Collections_Generic_List_int__o *v36; // x21
  const MethodInfo_385CCF0 **v37; // x23
  System_Collections_IEnumerator_c **v38; // x20
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v39; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x24
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  int32_t v42; // w26
  void *monitor; // x27
  Il2CppClass *v44; // x28
  __int64 v45; // x1
  int32_t v46; // w27
  __int64 v47; // x1
  int32_t DispLimitCount; // w28
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v50; // x1
  bool IsRestriction_44115980; // w0
  __int64 v52; // x1
  __int64 SvtClassId; // x0
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  int32_t v56; // w25
  __int64 v57; // x1
  System_Collections_ICollection_o *v58; // x0
  bool v59; // w20
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  System_Collections_ICollection_o **v65; // [xsp+0h] [xbp-80h]
  PartyOrganizationListViewItem_o *v66; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_IEnumerator_T__o *v67; // [xsp+10h] [xbp-70h]
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4D2C3A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C3A8 = 1;
  }
  entity = 0;
  if ( !this->fields.haveIndividualityServant )
    return 0;
  if ( !this->fields.isRestrictionGrandServant || !this->fields.isFollower && this->fields.userServantEntity )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object
    || (v7 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Master_object + 5),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___),
        !this->fields.questRestrictionInfo)
    || (v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        Master_object = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                          this->fields.questRestrictionInfo,
                          this->fields._InitPos_k__BackingField,
                          0),
        !partyItem)
    || (v9 = (System_Collections_ICollection_o **)Master_object,
        GrandSvtIdListInParty = PartyListViewItem__GetGrandSvtIdListInParty(partyItem, 0, 0),
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantClassMaster___),
        !v7) )
  {
    sub_1C93D2C(Master_object, v6);
  }
  v65 = v9;
  v66 = this;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v7,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v67 = Enumerator;
  if ( !Enumerator )
    sub_1C93D2C(0, v13);
  v14 = &System_Collections_IEnumerator_TypeInfo;
  v15 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v16 = (const MethodInfo_385CCF0 **)&Method_System_Collections_Generic_List_int__Contains__;
  v17 = Enumerator;
  while ( 1 )
  {
    klass = v17->klass;
    v19 = *v14;
    v20 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v19 )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v22 = sub_1C69E5C(v17, v19, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            v17,
            *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      break;
    v23 = v17->klass;
    v24 = *v15;
    v25 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      v26 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v26 - 1) != v24 )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_25;
      }
      v27 = (__int64)&v23->vtable[*v26];
    }
    else
    {
LABEL_25:
      v27 = sub_1C69E5C(v17, v24, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            v17,
            *(_QWORD *)(v27 + 8));
    v30 = v28;
    if ( !v28 )
      sub_1C93D2C(0, v29);
    if ( !v8 )
      sub_1C93D2C(v28, v29);
    v31 = DataMasterBase_object__object__long___TryGetEntity(
            v8,
            &entity,
            *(_QWORD *)(v28 + 32),
            (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v31 )
    {
      if ( !GrandSvtIdListInParty )
        sub_1C93D2C(v31, v32);
      v33 = System_Collections_Generic_List_int___Contains(GrandSvtIdListInParty, *(_DWORD *)(v30 + 40), *v16);
      if ( !v33 )
      {
        if ( !entity )
          sub_1C93D2C(v33, v34);
        v35 = v8;
        v36 = GrandSvtIdListInParty;
        v37 = v16;
        v38 = v14;
        v39 = v15;
        v40 = v11;
        questRestrictionInfo = v66->fields.questRestrictionInfo;
        v42 = *(_DWORD *)(v30 + 40);
        v44 = entity[6].klass;
        monitor = entity[6].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v69.fields.currentCryptoKey = v44;
        *(_QWORD *)&v69.fields.fakeValue = monitor;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v69, 0);
        if ( !entity )
          sub_1C93D2C(0, v45);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !entity )
          sub_1C93D2C(0, v47);
        OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
        if ( !OverwriteStatus )
          sub_1C93D2C(0, v50);
        if ( !entity )
          sub_1C93D2C(OverwriteStatus, v50);
        if ( !questRestrictionInfo )
          sub_1C93D2C(OverwriteStatus, v50);
        IsRestriction_44115980 = QuestRestrictionInfo__IsRestriction_44115980(
                                   questRestrictionInfo,
                                   v42,
                                   v46,
                                   DispLimitCount,
                                   OverwriteStatus->fields._Rarity_k__BackingField,
                                   (int32_t)entity[16].klass,
                                   1,
                                   0);
        v14 = v38;
        v16 = v37;
        GrandSvtIdListInParty = v36;
        v8 = v35;
        v17 = v67;
        v11 = v40;
        v15 = v39;
        if ( !IsRestriction_44115980 )
        {
          if ( !entity )
            sub_1C93D2C(0, v52);
          SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, 0);
          if ( !v11 )
            sub_1C93D2C(SvtClassId, (unsigned int)SvtClassId);
          v54 = DataMasterBase_object__object__int___GetEntity(
                  v11,
                  SvtClassId,
                  (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
          if ( !v54 )
            sub_1C93D2C(0, v55);
          if ( !v65 )
            sub_1C93D2C(v54, v55);
          v56 = (int32_t)v54[2].klass;
          if ( BasicHelper__IsNullOrEmpty(v65[5], 0) )
            goto LABEL_50;
          v58 = v65[5];
          if ( !v58 )
            sub_1C93D2C(0, v57);
          if ( !LODWORD(v58[1].monitor) )
            sub_1C93D34(v58);
          if ( !LODWORD(v58[2].klass)
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                 v56,
                 (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
LABEL_50:
            v59 = 1;
            if ( !v67 )
              return v59;
            goto LABEL_54;
          }
        }
      }
    }
  }
  v59 = 0;
  if ( !v17 )
    return v59;
LABEL_54:
  v60 = v17->klass;
  v61 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_58;
    }
    v63 = (__int64)&v60->vtable[*v62];
  }
  else
  {
LABEL_58:
    v63 = sub_1C69E5C(v17, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(v17, *(_QWORD *)(v63 + 8));
  return v59;
}


bool PartyOrganizationListViewItem__IsDataLostBattle(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle;
}


bool PartyOrganizationListViewItem__IsDisplayEquipSkillChange(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DisplayEquipIndex_k__BackingField == 1
      && this->fields._EquipFriendShipSkillChange_k__BackingField > 0;
}


bool PartyOrganizationListViewItem__IsEditablePos(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v4; // x1
  QuestRestrictionInfo_o *v6; // x0
  struct QuestRestrictionInfo_o *v7; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 1;
  if ( QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0) )
  {
    if ( this->fields.isServantNumRestriction )
      return 0;
    if ( this->fields.isFixMultipleNpcRestriction )
      return 0;
    if ( this->fields.isFixMultipleNpc )
    {
      v7 = this->fields.questRestrictionInfo;
      if ( !v7 || !v7->fields.isNpcEditablePos )
        return 0;
    }
    if ( this->fields.isMyServantOrNpcRestriction )
      return this->fields.isRestrictionGrandServant;
    return 1;
  }
  v6 = this->fields.questRestrictionInfo;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return QuestRestrictionInfo__IsEditablePos(v6, this->fields._InitPos_k__BackingField, 0);
}


bool PartyOrganizationListViewItem__IsEmptyConfigurable(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.frameType == 9;
}


bool PartyOrganizationListViewItem__IsEnabledChangeGrandSvt(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *CanOrganizationGrandSvtIdList; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  const MethodInfo_31A49E8 **v7; // x22
  int v8; // w23
  bool v9; // w19
  Il2CppObject *current; // x21
  __int64 v11; // x20
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_UserServantEntity__o *v23; // x21
  const MethodInfo_31A49E8 **v24; // x29
  System_Func_object__bool__o *v25; // x22
  int v26; // w20
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2C3A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_UserServantEntity____79099192);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_1C93AD4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__DisplayClass368_0__IsEnabledChangeGrandSvt_b__0__);
    sub_1C93AD4(&PartyOrganizationListViewItem___c__DisplayClass368_0_TypeInfo);
    byte_4D2C3A7 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  userServantList = 0;
  if ( !this->fields.isRestrictionGrandServant )
    return 1;
  CanOrganizationGrandSvtIdList = (System_Collections_ICollection_o *)PartyOrganizationListViewItem__GetCanOrganizationGrandSvtIdList(
                                                                        this,
                                                                        method);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(CanOrganizationGrandSvtIdList, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !this->fields.userServantEntity && !this->fields.isFollower )
    return 1;
  if ( !CanOrganizationGrandSvtIdList )
    sub_1C93D2C(IsNullOrEmpty, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)CanOrganizationGrandSvtIdList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
  v7 = (const MethodInfo_31A49E8 **)&Method_DataManager_GetMaster_GrandGraphMaster___;
  v8 = 2;
  v29 = v27;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v29.fields._current;
    v11 = sub_1C93D20(PartyOrganizationListViewItem___c__DisplayClass368_0_TypeInfo);
    PartyOrganizationListViewItem___c__DisplayClass368_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass368_0_o *)v11,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !current )
      sub_1C93D2C(Master_object, v13);
    if ( !Master_object )
      sub_1C93D2C(0, v13);
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)Master_object,
           &userServantList,
           (int32_t)current[2].monitor,
           0,
           0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v14 = DataManager__GetMaster_object_(*v7);
      if ( !v14 )
        sub_1C93D2C(0, v15);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                 (int32_t)current[1].monitor,
                 (const MethodInfo_3463274 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
      if ( !v11 )
        sub_1C93D2C(Entity, Entity);
      *(_QWORD *)(v11 + 16) = Entity;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)Entity, v17, v18, v19, v20, v21, v22);
      v23 = userServantList;
      v24 = v7;
      v25 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v25,
        (Il2CppObject *)v11,
        Method_PartyOrganizationListViewItem___c__DisplayClass368_0__IsEnabledChangeGrandSvt_b__0__,
        0);
      v8 -= System_Linq_Enumerable__Count_object__52190488(
              (System_Collections_Generic_IEnumerable_TSource__o *)v23,
              (System_Func_TSource__bool__o *)v25,
              (const MethodInfo_31C5D18 *)Method_System_Linq_Enumerable_Count_UserServantEntity____79099192);
      v7 = v24;
      if ( v8 <= 0 )
      {
        v26 = 7;
        goto LABEL_24;
      }
    }
  }
  v26 = 8;
LABEL_24:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
  return v9 && v26 == 7;
}


bool PartyOrganizationListViewItem__IsFixCostume(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(
                                       questRestrictionInfo,
                                       userServantEntity,
                                       0) >= 0;
  }
  else
  {
    LOBYTE(questRestrictionInfo) = 0;
  }
  return (char)questRestrictionInfo;
}


bool PartyOrganizationListViewItem__IsFrameNotSupportSingle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo
      && questRestrictionInfo->fields.isNotSingleSupportOnly
      && questRestrictionInfo->fields.servantNumMin > 0;
}


bool PartyOrganizationListViewItem__IsModifyFixCostume(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v5; // w0
  __int64 v6; // x1
  int32_t v7; // w20
  UserServantEntity_o *v8; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(questRestrictionInfo, userServantEntity, 0);
  if ( v5 < 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1C93D2C(0, v6);
  return UserServantEntity__getDispLimitCount(v8, 0, 0) != v7;
}


bool PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo
      && this->fields.isMyServantOrNpcRestriction
      && QuestRestrictionInfo__IsSelectableNormalSupport(questRestrictionInfo, this->fields._InitPos_k__BackingField, 0);
}


bool PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && questRestrictionInfo->fields.isAllOutBattle;
}


void PartyOrganizationListViewItem__Modify(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsGrandServantRestriction; // w8
  QuestRestrictionInfo_o *v5; // x0
  bool *p_isRestrictionGrandServant; // x22
  bool IsActiveGrandBoardRestriction; // w8
  struct UserServantEntity_o *userServantEntity; // x9
  struct UserServantEntity_o **p_userServantEntity; // x20
  __int128 v10; // q1
  int64_t v11; // x0
  const MethodInfo *v12; // x1
  int64_t v13; // x21
  void *Master_object; // x0
  UserServantEntity_o *v15; // x8
  const MethodInfo *v16; // x2
  struct QuestRestrictionInfo_o *v17; // x8
  struct QuestRestrictionInfo_o *v18; // x8
  bool IsGrandServant_k__BackingField; // w8
  int32_t hp; // w21
  int32_t AddedHp; // w0
  int32_t atk; // w22
  const MethodInfo *v23; // x1
  QuestRestrictionInfo_o *v24; // x21
  struct UserServantEntity_o *v25; // x8
  __int64 v26; // x20
  __int64 v27; // x22
  int32_t v28; // w0
  PartyOrganizationListViewItem_o *OverwriteTempTreasureDeviceLv; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-50h]
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4D2C378 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2C378 = 1;
  }
  entity = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsGrandServantRestriction = QuestRestrictionInfo__IsGrandServantRestriction(
                                  questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  0);
    v5 = this->fields.questRestrictionInfo;
    p_isRestrictionGrandServant = &this->fields.isRestrictionGrandServant;
    this->fields.isRestrictionGrandServant = IsGrandServantRestriction;
    if ( v5 )
      IsActiveGrandBoardRestriction = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                        v5,
                                        this->fields._InitPos_k__BackingField,
                                        0);
    else
      IsActiveGrandBoardRestriction = 0;
  }
  else
  {
    IsActiveGrandBoardRestriction = 0;
    p_isRestrictionGrandServant = &this->fields.isRestrictionGrandServant;
    this->fields.isRestrictionGrandServant = 0;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  this->fields.isRestrictionActiveGrandBoard = IsActiveGrandBoardRestriction;
  if ( userServantEntity )
  {
    v10 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v31.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v31;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v30, 0);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v13 = v11;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_45;
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        (Il2CppObject **)&this->fields.userServantEntity,
        v13,
        (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    Master_object = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_45;
    Master_object = UserServantEntity__GetOverwriteStatus(
                      (UserServantEntity_o *)Master_object,
                      this->fields.questRestrictionInfo,
                      0);
    if ( !Master_object )
      goto LABEL_45;
    this->fields.cost = *((_DWORD *)Master_object + 7);
    *(_QWORD *)&this->fields.hp = *((_QWORD *)Master_object + 2);
    this->fields.rarityId = *((_DWORD *)Master_object + 6);
    v12 = (const MethodInfo *)*((unsigned int *)Master_object + 10);
    Master_object = this->fields.userServantEntity;
    this->fields.actualRarity = (int)v12;
    if ( !Master_object )
      goto LABEL_45;
    Master_object = (void *)UserServantEntity__GetFrameType((UserServantEntity_o *)Master_object, (int32_t)v12, 0);
    v15 = this->fields.userServantEntity;
    this->fields.frameType = (int)Master_object;
    if ( !v15 )
      goto LABEL_45;
    Master_object = (void *)UserServantEntity__IsGrandServant(v15, 0);
    v17 = this->fields.questRestrictionInfo;
    this->fields._IsGrandServant_k__BackingField = (unsigned __int8)Master_object & 1;
    this->fields._IsUseGrandBoard_k__BackingField = 0;
    if ( v17 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      v18 = this->fields.questRestrictionInfo;
      if ( !v18 || !Master_object )
        goto LABEL_45;
      Master_object = (void *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Master_object,
                                &entity,
                                v18->fields.questId,
                                v18->fields.questPhase,
                                0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = entity;
        if ( !entity )
          goto LABEL_45;
        Master_object = (void *)QuestPhaseEntity__IsUseGrandBoard(entity, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( *p_isRestrictionGrandServant
            || (IsGrandServant_k__BackingField = this->fields.isRestrictionActiveGrandBoard) )
          {
            IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
          }
        }
        else
        {
          IsGrandServant_k__BackingField = 0;
        }
        this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
      }
    }
    if ( this->fields._IsTempGrandServant_k__BackingField )
    {
      hp = this->fields.hp;
      Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v12);
      if ( !Master_object )
        goto LABEL_45;
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Master_object, 0);
      atk = this->fields.atk;
      this->fields.hp = AddedHp + hp;
      Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v23);
      if ( !Master_object )
        goto LABEL_45;
      Master_object = (void *)UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)Master_object, 0);
      this->fields.atk = (_DWORD)Master_object + atk;
    }
    v24 = this->fields.questRestrictionInfo;
    if ( !v24 )
    {
      OverwriteTempTreasureDeviceLv = 0;
LABEL_43:
      this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = (int)OverwriteTempTreasureDeviceLv;
      PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(OverwriteTempTreasureDeviceLv, this, v16);
      return;
    }
    v25 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v27 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v27;
      *(_QWORD *)&v33.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v33, 0);
      OverwriteTempTreasureDeviceLv = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
                                                                           v24,
                                                                           v28,
                                                                           0);
      goto LABEL_43;
    }
LABEL_45:
    sub_1C93D2C(Master_object, v12);
  }
}


void PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  const MethodInfo *v11; // x2

  if ( !item )
    sub_1C93D2C(this, 0);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__Modify_34857068(this, item, v11);
}


void PartyOrganizationListViewItem__Modify_34857068(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  PartyOrganizationListViewItem_o *v9; // x19
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x20
  struct UserServantEntity_o *v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  UserServantEntity_o *v24; // x8
  System_Int32_array *CommandCodeIdList; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x23
  __int64 v41; // x24
  int32_t v42; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  _BOOL4 isMyServantOrNpcRestriction; // w8
  _BOOL4 IsGrandServant; // w0
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x3
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  int v50; // w8
  int32_t hp; // w21
  int32_t AddedHp; // w0
  int32_t atk; // w22
  const MethodInfo *v54; // x1
  QuestRestrictionInfo_o *v55; // x21
  struct UserServantEntity_o *v56; // x8
  __int64 v57; // x20
  __int64 v58; // x22
  int32_t v59; // w0
  int32_t OverwriteTempTreasureDeviceLv; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v9 = this;
  if ( (byte_4D2C379 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C379 = 1;
  }
  if ( !item )
    goto LABEL_32;
  userServantEntity = item->fields.userServantEntity;
  v9->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v9->fields.userServantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v9->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_32;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_32;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v15;
  *(_QWORD *)&v61.fields.fakeValue = v14;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v61, 0);
  if ( !v13 )
    goto LABEL_32;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)this,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v9->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->fields.servantEntity, (int32_t)Entity, v17, v18, v19, v20, v21, v22);
  v9->fields.classId = item->fields.classId;
  *(_QWORD *)&v9->fields.cost = *(_QWORD *)&item->fields.cost;
  v9->fields.atk = item->fields.atk;
  v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v9->fields.userServantEntity;
  *(_QWORD *)&v9->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  v9->fields.frameType = item->fields.frameType;
  if ( !v23 )
    goto LABEL_32;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                              v23[6],
                                              0);
  v24 = v9->fields.userServantEntity;
  v9->fields.svtLimitCount = (int)this;
  if ( !v24 )
    goto LABEL_32;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v24, 0);
  v9->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v9->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  questRestrictionInfo = v9->fields.questRestrictionInfo;
  v9->fields.isQuestRestriction = item->fields.isQuestRestriction;
  v9->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  v9->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  v9->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  if ( questRestrictionInfo )
  {
    v39 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_32;
    v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v41;
    *(_QWORD *)&v62.fields.fakeValue = v40;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v62, 0);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v42, 0);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  v9->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  v9->fields.fatigureTime = item->fields.fatigureTime;
  v9->fields.isFatigureRecover = item->fields.isFatigureRecover;
  v9->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  v9->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  v9->fields._IsNotSupportSingle_k__BackingField = 0;
  v9->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  v9->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&v9->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  isMyServantOrNpcRestriction = v9->fields.isMyServantOrNpcRestriction;
  v9->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v9->fields.isFollower )
  {
    v9->fields.followerInfo = 0;
    v9->fields.isFollower = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->fields.followerInfo, 0, v32, v33, v34, v35, v36, v37);
  }
  this = (PartyOrganizationListViewItem_o *)v9->fields.userServantEntity;
  *(_WORD *)&v9->fields._IsClearedWave_k__BackingField = 0;
  v9->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !this )
    goto LABEL_32;
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
  v9->fields._IsGrandServant_k__BackingField = IsGrandServant;
  IsGrandSameServant_k__BackingField = item->fields._IsGrandSameServant_k__BackingField;
  v9->fields._IsUseGrandBoard_k__BackingField = 0;
  v50 = IsGrandSameServant_k__BackingField && !IsGrandServant;
  v9->fields._IsTempGrandServant_k__BackingField = v50;
  if ( v50 )
  {
    hp = v9->fields.hp;
    this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v9, v47);
    if ( !this )
      goto LABEL_32;
    AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
    atk = v9->fields.atk;
    v9->fields.hp = AddedHp + hp;
    this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v9, v54);
    if ( !this )
      goto LABEL_32;
    v9->fields.atk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0) + atk;
  }
  PartyOrganizationListViewItem__SetEquipStatus(v9, v9->fields.equipIdList, 0, v48);
  v55 = v9->fields.questRestrictionInfo;
  if ( !v55 )
  {
    OverwriteTempTreasureDeviceLv = 0;
    goto LABEL_31;
  }
  v56 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_32:
    sub_1C93D2C(this, item);
  v58 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v63.fields.currentCryptoKey = v58;
  *(_QWORD *)&v63.fields.fakeValue = v57;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v63, 0);
  OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(v55, v59, 0);
LABEL_31:
  v9->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
}


void PartyOrganizationListViewItem__MoveBondEquip(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Int64_array *equipIdList; // x8
  __int64 v5; // x22
  BalanceConfig_c *v6; // x0
  struct System_Int64_array *v7; // x8
  int64_t v8; // x9
  struct System_Int32_array *equipSvtIdList; // x8
  __int64 v10; // x21
  struct System_Int32_array *v11; // x8
  int32_t v12; // w9
  __int64 v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2C37C & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    byte_4D2C37C = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    v13 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v13,
      equipIdList->max_length,
      (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
    v5 = v13;
  }
  else
  {
    v5 = 0;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)v5 && v6->static_fields->GrandSvtEquipMax == HIDWORD(v5) )
  {
    v7 = this->fields.equipIdList;
    if ( !v7 )
      goto LABEL_25;
    if ( LODWORD(v7->max_length) < 2 )
      goto LABEL_24;
    v8 = v7->m_Items[0];
    v7->m_Items[0] = 0;
    v7->m_Items[1] = v8;
  }
  equipSvtIdList = this->fields.equipSvtIdList;
  if ( equipSvtIdList )
  {
    v13 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v13,
      equipSvtIdList->max_length,
      (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
    v10 = v13;
    v6 = BalanceConfig_TypeInfo;
  }
  else
  {
    v10 = 0;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)v10 && v6->static_fields->GrandSvtEquipMax == HIDWORD(v10) )
  {
    v11 = this->fields.equipSvtIdList;
    if ( v11 )
    {
      if ( LODWORD(v11->max_length) >= 2 )
      {
        v12 = v11->m_Items[0];
        v11->m_Items[0] = 0;
        v11->m_Items[1] = v12;
        goto LABEL_23;
      }
LABEL_24:
      sub_1C93D34(v6);
    }
LABEL_25:
    sub_1C93D2C(v6, method);
  }
LABEL_23:
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, 0, v2);
}


bool PartyOrganizationListViewItem__RemoveEquipDuplication(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Int64_array *equipIdList; // x8
  __int64 v5; // x21
  BalanceConfig_c *v6; // x8
  bool result; // w0
  struct System_Int64_array *v8; // x1
  int max_length; // w8
  int64_t v10; // x9
  int v11; // w10
  Il2CppClass **v12; // x11
  _QWORD *v13; // x11
  Il2CppClass *v14; // t1
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2C37D & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    byte_4D2C37D = 1;
  }
  if ( !this->fields.userServantEntity && !this->fields.isFollower )
    return 0;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    v15 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v15,
      equipIdList->max_length,
      (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
    v5 = v15;
  }
  else
  {
    v5 = 0;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  result = 0;
  if ( (_BYTE)v5 && v6->static_fields->GrandSvtEquipMax == HIDWORD(v5) )
  {
    v8 = this->fields.equipIdList;
    if ( !v8 )
      sub_1C93D2C(0, 0);
    max_length = v8->max_length;
    if ( !max_length )
      sub_1C93D34(0);
    v10 = v8->m_Items[0];
    result = 0;
    if ( v10 )
    {
      if ( max_length >= 2 )
      {
        v11 = 1;
        while ( 1 )
        {
          v12 = &v8->obj.klass + v11;
          v14 = v12[4];
          v13 = v12 + 4;
          if ( v14 == (Il2CppClass *)v10 )
            break;
          if ( max_length == ++v11 )
            return 0;
        }
        *v13 = 0;
        PartyOrganizationListViewItem__SetEquipStatus(this, v8, 0, v2);
        return 1;
      }
    }
  }
  return result;
}


int32_t PartyOrganizationListViewItem__RemoveEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_Int64_array *equipIdList; // x0
  int32_t v6; // w0
  unsigned int v7; // w20
  void *IsNullOrEmpty; // x0
  struct System_Int64_array *v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w21

  if ( (byte_4D2C383 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_long___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4D2C383 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v6 = System_Array__IndexOf_long_(
         equipIdList,
         userSvtId,
         (const MethodInfo_32AB264 *)Method_System_Array_IndexOf_long___);
  if ( v6 < 0 )
    return 0;
  v7 = v6;
  IsNullOrEmpty = (void *)BasicHelper__IsNullOrEmpty(
                            (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                            0);
  v11 = 0;
  if ( !v7 && ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.equipServantEntityList;
    if ( !IsNullOrEmpty
      || (IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                            0,
                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
LABEL_15:
      sub_1C93D2C(IsNullOrEmpty, v9);
    }
    v11 = *((_DWORD *)IsNullOrEmpty + 38);
  }
  v9 = this->fields.equipIdList;
  if ( !v9 )
    goto LABEL_15;
  if ( v7 >= LODWORD(v9->max_length) )
    sub_1C93D34(IsNullOrEmpty);
  v9->m_Items[v7] = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, v9, 0, v10);
  return v11;
}


void PartyOrganizationListViewItem__ResetPositionRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isFixedServantPositionRestriction )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isFixedServantPositionRestriction && this->fields.isRestrictionMyServantPos )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isRestrictionNeedStarting )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void PartyOrganizationListViewItem__ResetPositionRestrictionServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isFixedServantPositionRestriction && this->fields.isRestrictionServantPos )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void PartyOrganizationListViewItem__Set(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct ServantEntity_o *servantEntity; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Int32_array *commandCodeIdList; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x21
  struct System_Int32_array *v72; // x0
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v74; // x0
  int32_t v75; // w1
  const MethodInfo *v76; // x3
  PartyOrganizationListViewItem_o *v77; // x0
  System_Int32_array *v78; // x1
  const MethodInfo *v79; // x2

  if ( (byte_4D2C377 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2C377 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    sub_1C93D2C(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.followerInfo,
    (int32_t)followerInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isRestrictionGrandServant = item->fields.isRestrictionGrandServant;
  this->fields.isRestrictionActiveGrandBoard = item->fields.isRestrictionActiveGrandBoard;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23, v24, v25, v26, v27);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)commandCodeIdList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.isServantNumRestriction = item->fields.isServantNumRestriction;
  this->fields.isFixMultipleNpcRestriction = item->fields.isFixMultipleNpcRestriction;
  this->fields.isFixMultipleNpc = item->fields.isFixMultipleNpc;
  this->fields.npcFollowerSvtId = item->fields.npcFollowerSvtId;
  *(_QWORD *)&this->fields.isQuestRestriction = *(_QWORD *)&item->fields.isQuestRestriction;
  this->fields.isMyServantOrNpcRestriction = item->fields.isMyServantOrNpcRestriction;
  this->fields.haveIndividualityServant = item->fields.haveIndividualityServant;
  this->fields.isRestrictionMyServantPos = item->fields.isRestrictionMyServantPos;
  this->fields.isRestrictionNeedStarting = item->fields.isRestrictionNeedStarting;
  this->fields.isRestrictionServantPos = item->fields.isRestrictionServantPos;
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  this->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = item->fields._IsNotSupportSingle_k__BackingField;
  this->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  this->fields._CanGetBuddyPoint_k__BackingField = item->fields._CanGetBuddyPoint_k__BackingField;
  this->fields._IsDispCanGetBuddyPoint_k__BackingField = item->fields._IsDispCanGetBuddyPoint_k__BackingField;
  *(_QWORD *)&this->fields._InitPos_k__BackingField = *(_QWORD *)&item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)WaveEnemyClassIds_k__BackingField,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = item->fields._IsGrandServant_k__BackingField;
  this->fields._IsTempGrandServant_k__BackingField = item->fields._IsTempGrandServant_k__BackingField;
  this->fields._IsUseGrandBoard_k__BackingField = item->fields._IsUseGrandBoard_k__BackingField;
  this->fields._EquipFriendShipSkillChange_k__BackingField = item->fields._EquipFriendShipSkillChange_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v70 = System_Array__Clone(equipSvtIdList, 0)) == 0 )
  {
    v75 = 0;
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v71 = v70;
  v72 = (struct System_Int32_array *)sub_1C93C10(v70, int___TypeInfo);
  if ( v72 )
  {
    this->fields.equipSvtIdList = v72;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v74 = sub_1C93C10(v71, int___TypeInfo);
    if ( v74 )
    {
      v75 = v74;
LABEL_10:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_equipSvtIdList, v75, v63, v64, v65, v66, v67, v68);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, 0, v76);
      this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      return;
    }
  }
  else
  {
    sub_1C940C8(v71);
  }
  v77 = (PartyOrganizationListViewItem_o *)sub_1C940C8(v71);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v77, v78, v79);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItem__SetCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v6; // x8
  int32_t questId; // w20
  struct QuestRestrictionInfo_o *v8; // x8
  EventBuddyPointEntity_o *EntityIncludeQuestUnspecified; // x0
  EventBuddyPointEntity_o *v10; // x21
  int32_t PosPoint; // w0
  _BOOL4 HasFlag; // w21
  Il2CppObject *Master_object; // x22

  v4 = this;
  if ( (byte_4D2C376 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2C376 = 1;
  }
  if ( !v4->fields.isFollower )
  {
    this = (PartyOrganizationListViewItem_o *)v4->fields.questRestrictionInfo;
    if ( this )
    {
      this = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_34;
    }
  }
  if ( v4->fields.index >= 1 )
  {
    questRestrictionInfo = v4->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantSingle )
        goto LABEL_34;
    }
  }
  if ( v4->fields.isServantNumRestriction || v4->fields.isFixMultipleNpcRestriction || v4->fields.isFixMultipleNpc )
    goto LABEL_34;
  v6 = v4->fields.questRestrictionInfo;
  if ( !v6 )
    goto LABEL_35;
  questId = v6->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v8 = v4->fields.questRestrictionInfo;
  if ( !v8 || !this )
    goto LABEL_35;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v8->fields.questPhase,
                                    0);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_34;
  v10 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v10, 0) )
    goto LABEL_34;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1C93D2C(this, *(_QWORD *)&eventId);
  if ( UserQuestMaster__getClearCountsFromId(
         (UserQuestMaster_o *)Master_object,
         (int64_t)this->fields.questRestrictionInfo->fields.supportPositionList,
         questId,
         0) < 1
    || !HasFlag )
  {
    v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 1;
    return;
  }
LABEL_34:
  v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 0;
}


void PartyOrganizationListViewItem__SetDuplicationGrandQuestEquipmentMarkFlag(
        PartyOrganizationListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Int64_array *equipIdList; // x8
  struct System_Boolean_array *v15; // x0
  struct System_Boolean_array **p_DuplicationEquipmentFlagList_k__BackingField; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_ICollection_o *duplicatedEquipmentUserSvtIdList; // x22
  struct System_Int64_array *v24; // x9
  unsigned int v25; // w8
  System_Predicate_long__o **v26; // x23
  unsigned int max_length; // w10
  System_Predicate_long__o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Boolean_array *v35; // x9
  unsigned int v36; // w10
  char v37; // w10

  if ( (byte_4D2C380 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindIndex_long___);
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&System_Predicate_long__TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__DisplayClass181_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__);
    sub_1C93AD4(&PartyOrganizationListViewItem___c__DisplayClass181_0_TypeInfo);
    byte_4D2C380 = 1;
  }
  v5 = sub_1C93D20(PartyOrganizationListViewItem___c__DisplayClass181_0_TypeInfo);
  PartyOrganizationListViewItem___c__DisplayClass181_0___ctor(
    (PartyOrganizationListViewItem___c__DisplayClass181_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_23;
  v15 = (struct System_Boolean_array *)sub_1C93B7C(bool___TypeInfo, LODWORD(equipIdList->max_length));
  p_DuplicationEquipmentFlagList_k__BackingField = &this->fields._DuplicationEquipmentFlagList_k__BackingField;
  this->fields._DuplicationEquipmentFlagList_k__BackingField = v15;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !partyItem )
    goto LABEL_23;
  duplicatedEquipmentUserSvtIdList = (System_Collections_ICollection_o *)partyItem->fields.duplicatedEquipmentUserSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(duplicatedEquipmentUserSvtIdList, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  *(_DWORD *)(v5 + 24) = 0;
  v24 = this->fields.equipIdList;
  if ( !v24 )
LABEL_23:
    sub_1C93D2C(IsNullOrEmpty, v7);
  v25 = 0;
  v26 = (System_Predicate_long__o **)(v5 + 32);
  while ( 1 )
  {
    max_length = v24->max_length;
    if ( (int)v25 >= (int)max_length )
      break;
    if ( v25 >= max_length )
      goto LABEL_24;
    if ( v24->m_Items[v25] >= 1 )
    {
      v28 = *v26;
      if ( !*v26 )
      {
        v28 = (System_Predicate_long__o *)sub_1C93D20(System_Predicate_long__TypeInfo);
        System_Predicate_long____ctor(
          v28,
          (Il2CppObject *)v5,
          Method_PartyOrganizationListViewItem___c__DisplayClass181_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v28;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v28, v29, v30, v31, v32, v33, v34);
      }
      IsNullOrEmpty = System_Array__FindIndex_long_(
                        (System_Int64_array *)duplicatedEquipmentUserSvtIdList,
                        (System_Predicate_T__o *)v28,
                        (const MethodInfo_32A9DA0 *)Method_System_Array_FindIndex_long___);
      v35 = *p_DuplicationEquipmentFlagList_k__BackingField;
      if ( !*p_DuplicationEquipmentFlagList_k__BackingField )
        goto LABEL_23;
      v25 = *(_DWORD *)(v5 + 24);
      v36 = v35->max_length;
      if ( (_DWORD)IsNullOrEmpty == -1 )
      {
        if ( v25 >= v36 )
LABEL_24:
          sub_1C93D34(IsNullOrEmpty);
        v37 = 0;
      }
      else
      {
        if ( v25 >= v36 )
          goto LABEL_24;
        v37 = 1;
      }
      v35->m_Items[v25] = v37;
    }
    *(_DWORD *)(v5 + 24) = ++v25;
    v24 = this->fields.equipIdList;
    if ( !v24 )
      goto LABEL_23;
  }
}


void PartyOrganizationListViewItem__SetEquipStatus(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *equipIdList,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x23
  System_Collections_Generic_List_object__o *v7; // x20
  struct System_Collections_Generic_List_UserServantEntity__o **p_equipUserServantEntityList; // x24
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x20
  struct System_Collections_Generic_List_ServantEntity__o **p_equipServantEntityList; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  void *IsGrandServant; // x0
  Il2CppObject *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v44; // x8
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  Il2CppObject *v52; // x25
  struct System_Int64_array *v53; // x1
  struct QuestRestrictionInfo_o *v54; // x8
  struct System_Int64_array **p_equipIdList; // x0
  int32_t v56; // w1
  BalanceConfig_c *v57; // x0
  int32_t followerIndex; // w23
  FollowerInfo_o *v59; // x24
  int32_t v60; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  unsigned __int64 v62; // x21
  unsigned __int64 max_length_low; // x9
  struct System_Int64_array *v64; // x8
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x26
  struct System_Int32_array *v77; // x8
  System_Collections_Generic_List_object__o *v78; // x26
  UserServantCollectionEntity_o *v79; // x28
  UserServantEntity_o *v80; // x27
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  struct System_Int64_array *v91; // x8
  System_Collections_Generic_List_object__o *v92; // x26
  UserServantEntity_o *v93; // x27
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  struct System_Collections_Generic_List_ServantEntity__o *v104; // x26
  ServantEntity_o *v105; // x27
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  struct ServantEntity_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  __int64 v115; // x0
  GrandQuestFolderBoardItem_o *v116; // x0
  int32_t v117; // w1
  __int64 v118; // x8
  Il2CppObject *v119; // x1
  void *monitor; // x26
  Il2CppClass *klass; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v122; // x26
  void *v123; // x27
  Il2CppClass *v124; // x28
  Il2CppObject *v125; // x26
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  System_Collections_Generic_List_object__o *v130; // x26
  struct System_Int32_array *v131; // x8
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass *v141; // x1
  Il2CppClass **v142; // x0
  struct EventUpValSetupInfo_o *v143; // x24
  struct EventUpValSetupInfo_o **p_setupInfo; // x29
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x27
  struct System_Int32_array *v146; // x8
  UserServantEntity_o *userServantEntity; // x25
  System_Int64_array *EquipList; // x26
  _BOOL4 IsTempGrandServant_k__BackingField; // w8
  System_Collections_Generic_List_object__o *v150; // x23
  const MethodInfo *v151; // x3
  struct QuestRestrictionInfo_o *v152; // x8
  struct ServantEntity_o *v153; // x9
  int32_t v154; // w23
  int32_t v155; // w24
  __int64 v156; // x25
  __int64 v157; // x26
  int32_t v158; // w25
  EventMargeItemUpValInfo_array *v159; // x0
  bool v160; // w8
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v161; // x1
  bool EventUpVal_43870140; // w0
  struct QuestRestrictionInfo_o *v163; // x8
  System_Collections_Generic_List_object__o *v164; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v165; // x23
  PartyOrganizationListViewItem___c_c *v166; // x0
  System_Func_object__int__o *_9__167_1; // x24
  Il2CppObject *v168; // x25
  struct PartyOrganizationListViewItem___c_StaticFields *v169; // x0
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v176; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v177; // x0
  const MethodInfo *v178; // x3
  __int64 v179; // x8
  _DWORD *v180; // x23
  unsigned __int64 v181; // x20
  ServantEntity_o *v182; // x25
  int32_t v183; // w26
  EventPersonalMargeUpValInfo_o *v184; // x24
  int32_t v185; // w2
  System_String_o *v186; // x4
  int32_t v187; // w5
  int64_t v188; // x6
  System_String_o *v189; // x7
  __int64 v190; // x8
  _QWORD *v191; // x24
  unsigned __int64 v192; // x25
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  Il2CppClass **v196; // x8
  struct QuestRestrictionInfo_o *v197; // x8
  struct ServantEntity_o *v198; // x9
  int32_t v199; // w23
  int32_t v200; // w24
  __int64 v201; // x25
  __int64 v202; // x26
  int32_t v203; // w25
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v204; // x23
  struct EventMargeItemUpValInfo_array *v205; // x0
  int32_t v206; // w2
  int32_t v207; // w3
  System_String_o *v208; // x4
  int32_t v209; // w5
  int64_t v210; // x6
  System_String_o *v211; // x7
  const MethodInfo *v212; // x1
  System_Int32_array *v213; // x23
  EventUpValSetupInfo_o *v214; // x24
  int32_t v215; // w2
  int32_t v216; // w3
  System_String_o *v217; // x4
  int32_t v218; // w5
  int64_t v219; // x6
  System_String_o *v220; // x7
  UserServantEntity_o *v221; // x22
  EventUpValSetupInfo_o *v222; // x23
  struct QuestRestrictionInfo_o *v223; // x8
  _BOOL4 v224; // w9
  Il2CppObject *v225; // x24
  System_Collections_Generic_List_object__o *v226; // x23
  const MethodInfo *v227; // x3
  struct System_Int32_array *v228; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v230; // x28
  int32_t v231; // w26
  Il2CppObject *v232; // x0
  ServantEntity_o *v233; // x27
  EventPersonalMargeUpValInfo_o *v234; // x25
  int32_t v235; // w2
  System_String_o *v236; // x4
  int32_t v237; // w5
  int64_t v238; // x6
  System_String_o *v239; // x7
  __int64 v240; // x8
  _QWORD *v241; // x25
  unsigned __int64 v242; // x26
  struct System_Object_array *v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  Il2CppClass **v246; // x0
  System_Collections_ICollection_o *EquipSvtIds; // x23
  int32_t current; // w24
  System_Collections_Generic_List_object__o *v249; // x23
  Il2CppObject *Instance; // x0
  __int64 v251; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v253; // x1
  Il2CppObject *v254; // x0
  int32_t v255; // w2
  int32_t v256; // w3
  System_String_o *v257; // x4
  int32_t v258; // w5
  int64_t v259; // x6
  System_String_o *v260; // x7
  Il2CppObject *v261; // x1
  struct System_Object_array *items; // x8
  _QWORD *v263; // x9
  __int64 size; // x10
  Il2CppClass **v265; // x0
  ServantEntity_o *v266; // x24
  __int64 v267; // x0
  __int64 v268; // x1
  int32_t v269; // w2
  int32_t v270; // w3
  System_String_o *v271; // x4
  int32_t v272; // w5
  int64_t v273; // x6
  System_String_o *v274; // x7
  struct System_Object_array *v275; // x8
  _QWORD *v276; // x9
  __int64 v277; // x10
  Il2CppClass **v278; // x0
  _BOOL8 v279; // x0
  __int64 v280; // x1
  int32_t v281; // w2
  int32_t v282; // w3
  System_String_o *v283; // x4
  int32_t v284; // w5
  int64_t v285; // x6
  System_String_o *v286; // x7
  System_Collections_Generic_List_object__o *v287; // x0
  Il2CppObject *v288; // x1
  struct System_Object_array *v289; // x8
  _QWORD *v290; // x9
  __int64 v291; // x10
  Il2CppClass **v292; // x8
  UserServantEntity_o *v293; // x23
  EventUpValSetupInfo_o *v294; // x22
  struct QuestRestrictionInfo_o *v295; // x8
  char v296; // w7
  ServantEntity_o *v297; // x22
  EventPersonalMargeUpValInfo_o *v298; // x21
  System_Collections_Generic_List_object__o *v299; // x19
  EventMargeItemUpValInfo_array *v300; // x0
  int32_t v301; // w23
  FollowerInfo_o *v302; // x24
  int32_t v303; // w2
  struct QuestRestrictionInfo_o *v304; // x8
  System_Collections_Generic_List_object__o *v305; // x22
  int32_t v306; // w24
  FollowerInfo_o *v307; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v308; // x23
  int32_t v309; // w2
  struct QuestRestrictionInfo_o *v310; // x8
  int32_t v311; // w2
  int32_t v312; // w3
  System_String_o *v313; // x4
  int32_t v314; // w5
  int64_t v315; // x6
  System_String_o *v316; // x7
  struct System_Object_array *v317; // x8
  _QWORD *v318; // x9
  __int64 v319; // x10
  Il2CppClass *v320; // x1
  Il2CppClass **v321; // x0
  System_Collections_Generic_List_object__o *v322; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Int32_array *eventIdList; // x8
  int32_t v325; // w23
  FollowerInfo_o *v326; // x24
  int32_t v327; // w4
  struct QuestRestrictionInfo_o *v328; // x8
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x21
  PartyOrganizationListViewItem___c_c *v331; // x0
  System_Func_object__int__o *_9__167_0; // x22
  Il2CppObject *v333; // x23
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v335; // w2
  int32_t v336; // w3
  System_String_o *v337; // x4
  int32_t v338; // w5
  int64_t v339; // x6
  System_String_o *v340; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v341; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v342; // x0
  __int64 v343; // x8
  _DWORD *v344; // x21
  unsigned __int64 v345; // x20
  ServantEntity_o *servantEntity; // x23
  int32_t v347; // w24
  EventPersonalMargeUpValInfo_o *v348; // x22
  int32_t v349; // w2
  int32_t v350; // w3
  System_String_o *v351; // x4
  int32_t v352; // w5
  int64_t v353; // x6
  System_String_o *v354; // x7
  __int64 v355; // x8
  _QWORD *v356; // x22
  unsigned __int64 v357; // x23
  struct System_Object_array *v358; // x8
  _QWORD *v359; // x9
  __int64 v360; // x10
  Il2CppClass **v361; // x8
  struct QuestRestrictionInfo_o *v362; // x8
  struct ServantEntity_o *v363; // x9
  int32_t questPhase; // w21
  int32_t questId; // w22
  __int64 v366; // x23
  __int64 v367; // x24
  int32_t v368; // w23
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x21
  struct EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  int32_t v371; // w2
  int32_t v372; // w3
  System_String_o *v373; // x4
  int32_t v374; // w5
  int64_t v375; // x6
  System_String_o *v376; // x7
  EventUpValInfo_o **eventUpVallInfo; // [xsp+18h] [xbp-118h]
  System_Collections_Generic_List_Enumerator_object__o v379; // [xsp+28h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v380; // [xsp+40h] [xbp-F0h] BYREF
  EventUpValInfo_o *v381; // [xsp+60h] [xbp-D0h] BYREF
  bool isDuplicate; // [xsp+6Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList; // [xsp+70h] [xbp-C0h] BYREF
  bool v384; // [xsp+7Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_object__o *v385; // [xsp+80h] [xbp-B0h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v386; // [xsp+88h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *v387; // [xsp+90h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v389; // [xsp+A0h] [xbp-90h] BYREF
  bool v390; // [xsp+C4h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_object__o *v391; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16

  followerInfo = (FollowerInfo_o *)&System_Collections_Generic_List_UserServantEntity__TypeInfo;
  if ( (byte_4D2C375 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C93AD4(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&PartyOrganizationUtility_TypeInfo);
    sub_1C93AD4(&ServantEntity_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__167_0__);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__167_1__);
    sub_1C93AD4(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C93AD4(&UserServantEntity_TypeInfo);
    byte_4D2C375 = 1;
  }
  v391 = 0;
  v390 = 0;
  memset(&v389, 0, sizeof(v389));
  v387 = 0;
  entity = 0;
  v385 = 0;
  v386 = 0;
  v384 = 0;
  infoList = 0;
  isDuplicate = 0;
  v381 = 0;
  memset(&v380, 0, sizeof(v380));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  p_equipUserServantEntityList = &this->fields.equipUserServantEntityList;
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v7;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  p_equipServantEntityList = &this->fields.equipServantEntityList;
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v15;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0;
  eventUpVallInfo = &this->fields.eventUpValInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventUpValInfo, 0, v23, v24, v25, v26, v27, v28);
  this->fields.eventUpValItemList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventUpValItemList, 0, v29, v30, v31, v32, v33, v34);
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( otherValidEventIdFilter )
    this->fields.isOtherValidEventIdFilter = 1;
  if ( this->fields.isFollower )
  {
    this->fields.equipIdList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v37, v38, v39, v40, v41, v42);
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo )
      return;
    LODWORD(p_equipUserServantEntityList) = this->fields.followerIndex;
    if ( this->fields.followerGrandGraphId > 0 )
    {
      ReturnTypeByQuestId = 2;
LABEL_22:
      IsGrandServant = (void *)FollowerInfo__IsGrandServant(
                                 followerInfo,
                                 (int32_t)p_equipUserServantEntityList,
                                 ReturnTypeByQuestId,
                                 0);
      if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
      {
        followerIndex = this->fields.followerIndex;
        v59 = this->fields.followerInfo;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( questRestrictionInfo )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
            v60 = (int)IsGrandServant;
          }
          else
          {
            v60 = 0;
          }
        }
        else
        {
          v60 = 2;
        }
        if ( !v59 )
          goto LABEL_319;
        EquipSvtIds = (System_Collections_ICollection_o *)FollowerInfo__GetEquipSvtIds(v59, followerIndex, v60, 0);
        IsGrandServant = (void *)BasicHelper__IsNullOrEmpty(EquipSvtIds, 0);
        if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
        {
          if ( !EquipSvtIds )
            goto LABEL_319;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v379,
            (System_Collections_Generic_List_int__o *)EquipSvtIds,
            (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v389 = (System_Collections_Generic_List_Enumerator_int__o)v379;
          while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v389,
                    (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
          {
            current = v389.fields._current;
            v249 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
            if ( v389.fields._current )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                sub_1C93D2C(0, v251);
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !MasterData_object )
                sub_1C93D2C(0, v253);
              v254 = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       current,
                       (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v261 = v254;
              if ( !v249 )
                sub_1C93D2C(v254, v254);
              items = v249->fields._items;
              v263 = Method_System_Collections_Generic_List_ServantEntity__Add__;
              ++v249->fields._version;
              if ( !items )
                sub_1C93D2C(v254, v254);
              size = v249->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v249,
                  v254,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
              }
              else
              {
                v265 = &items->obj.klass + size;
                v249->fields._size = size + 1;
                v265[4] = (Il2CppClass *)v261;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v265 + 4),
                  (int32_t)v261,
                  v255,
                  v256,
                  v257,
                  v258,
                  v259,
                  v260);
              }
            }
            else
            {
              v266 = (ServantEntity_o *)sub_1C93D20(ServantEntity_TypeInfo);
              ServantEntity___ctor(v266, 0);
              if ( !v249 )
                sub_1C93D2C(v267, v268);
              v275 = v249->fields._items;
              v276 = Method_System_Collections_Generic_List_ServantEntity__Add__;
              ++v249->fields._version;
              if ( !v275 )
                sub_1C93D2C(v267, v268);
              v277 = v249->fields._size;
              if ( (unsigned int)v277 >= LODWORD(v275->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v249,
                  (Il2CppObject *)v266,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v276[4] + 192LL) + 112LL));
              }
              else
              {
                v278 = &v275->obj.klass + v277;
                v249->fields._size = v277 + 1;
                v278[4] = (Il2CppClass *)v266;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v278 + 4),
                  (int32_t)v266,
                  v269,
                  v270,
                  v271,
                  v272,
                  v273,
                  v274);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v389,
            (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        }
      }
      else
      {
        v301 = this->fields.followerIndex;
        v302 = this->fields.followerInfo;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v304 = this->fields.questRestrictionInfo;
          if ( v304 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v304->fields.questId, 0);
            v303 = (int)IsGrandServant;
          }
          else
          {
            v303 = 0;
          }
        }
        else
        {
          v303 = 2;
        }
        if ( !v302 )
          goto LABEL_319;
        if ( FollowerInfo__getEquipSvtId(v302, v301, v303, 0) >= 1 )
        {
          v305 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
          IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !IsGrandServant )
            goto LABEL_319;
          IsGrandServant = DataManager__GetMasterData_object_(
                             (DataManager_o *)IsGrandServant,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
          v306 = this->fields.followerIndex;
          v307 = this->fields.followerInfo;
          v308 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
          if ( this->fields.followerGrandGraphId <= 0 )
          {
            v310 = this->fields.questRestrictionInfo;
            if ( v310 )
            {
              IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v310->fields.questId, 0);
              v309 = (int)IsGrandServant;
            }
            else
            {
              v309 = 0;
            }
          }
          else
          {
            v309 = 2;
          }
          if ( !v307 )
            goto LABEL_319;
          IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v307, v306, v309, 0);
          if ( !v308 )
            goto LABEL_319;
          IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                             v308,
                             (int32_t)IsGrandServant,
                             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !v305 )
            goto LABEL_319;
          v317 = v305->fields._items;
          v318 = Method_System_Collections_Generic_List_ServantEntity__Add__;
          ++v305->fields._version;
          if ( !v317 )
            goto LABEL_319;
          v319 = v305->fields._size;
          v320 = (Il2CppClass *)IsGrandServant;
          if ( (unsigned int)v319 >= LODWORD(v317->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v305,
              (Il2CppObject *)IsGrandServant,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
          }
          else
          {
            v321 = &v317->obj.klass + v319;
            v305->fields._size = v319 + 1;
            v321[4] = v320;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v321 + 4), (int32_t)v320, v311, v312, v313, v314, v315, v316);
          }
        }
      }
      v322 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v322,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v391 = v322;
      setupInfo = this->fields.setupInfo;
      if ( setupInfo )
      {
        eventIdList = setupInfo->fields.eventIdList;
        if ( !eventIdList )
          goto LABEL_319;
        if ( eventIdList->max_length )
        {
          v325 = this->fields.followerIndex;
          v326 = this->fields.followerInfo;
          if ( this->fields.followerGrandGraphId <= 0 )
          {
            v328 = this->fields.questRestrictionInfo;
            if ( v328 )
            {
              IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v328->fields.questId, 0);
              v327 = (int)IsGrandServant;
            }
            else
            {
              v327 = 0;
            }
          }
          else
          {
            v327 = 2;
          }
          if ( !v326 )
            goto LABEL_319;
          IsGrandServant = (void *)FollowerInfo__getEventUpVal(v326, eventUpVallInfo, setupInfo, v325, v327, 0);
          eventUpValInfo = this->fields.eventUpValInfo;
          this->fields.isEventUpVal = (unsigned __int8)IsGrandServant & 1;
          if ( !eventUpValInfo )
            goto LABEL_319;
          dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
          v331 = PartyOrganizationListViewItem___c_TypeInfo;
          if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
            v331 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          _9__167_0 = (System_Func_object__int__o *)v331->static_fields->__9__167_0;
          if ( !_9__167_0 )
          {
            if ( !v331->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v331);
              v331 = PartyOrganizationListViewItem___c_TypeInfo;
            }
            v333 = (Il2CppObject *)v331->static_fields->__9;
            _9__167_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EventDropUpValInfo__int__TypeInfo);
            System_Func_object__int____ctor(
              _9__167_0,
              v333,
              Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__167_0__,
              0);
            static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
            static_fields->__9__167_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__167_0;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__167_0,
              (int32_t)_9__167_0,
              v335,
              v336,
              v337,
              v338,
              v339,
              v340);
          }
          v341 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                        dropList,
                                                                        (System_Func_TSource__TResult__o *)_9__167_0,
                                                                        (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
          v342 = System_Linq_Enumerable__Distinct_int_(
                   v341,
                   (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
          IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                             v342,
                             (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( !IsGrandServant )
            goto LABEL_319;
          v343 = *((_QWORD *)IsGrandServant + 3);
          v344 = IsGrandServant;
          if ( (int)v343 >= 1 )
          {
            v345 = 0;
            while ( 1 )
            {
              if ( v345 >= (unsigned int)v343 )
                goto LABEL_320;
              servantEntity = this->fields.servantEntity;
              v347 = v344[v345 + 8];
              v348 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v348, v347, servantEntity, 0);
              IsGrandServant = this->fields.eventUpValInfo;
              if ( !IsGrandServant )
                goto LABEL_319;
              IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
              if ( !v348 )
                goto LABEL_319;
              EventPersonalMargeUpValInfo__Add(v348, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
              IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v348, 0);
              if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
              {
                IsGrandServant = EventPersonalMargeUpValInfo__GetList(v348, 0);
                if ( !IsGrandServant )
                  goto LABEL_319;
                v355 = *((_QWORD *)IsGrandServant + 3);
                v356 = IsGrandServant;
                if ( (int)v355 >= 1 )
                  break;
              }
LABEL_307:
              LODWORD(v343) = v344[6];
              if ( (__int64)++v345 >= (int)v343 )
                goto LABEL_308;
            }
            v357 = 0;
            while ( v357 < (unsigned int)v355 )
            {
              IsGrandServant = v391;
              if ( !v391 )
                goto LABEL_319;
              v36 = (Il2CppObject *)v356[v357 + 4];
              v358 = v391->fields._items;
              v359 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v391->fields._version;
              if ( !v358 )
                goto LABEL_319;
              v360 = *((int *)IsGrandServant + 6);
              if ( (unsigned int)v360 >= LODWORD(v358->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsGrandServant,
                  v36,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v359[4] + 192LL) + 112LL));
              }
              else
              {
                v361 = &v358->obj.klass + v360;
                *((_DWORD *)IsGrandServant + 6) = v360 + 1;
                v361[4] = (Il2CppClass *)v36;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v361 + 4), (int32_t)v36, v349, v350, v351, v352, v353, v354);
              }
              LODWORD(v355) = *((_DWORD *)v356 + 6);
              if ( (__int64)++v357 >= (int)v355 )
                goto LABEL_307;
            }
            goto LABEL_320;
          }
        }
      }
LABEL_308:
      v362 = this->fields.questRestrictionInfo;
      if ( v362 )
      {
        v363 = this->fields.servantEntity;
        if ( !v363 )
          goto LABEL_319;
        questId = v362->fields.questId;
        questPhase = v362->fields.questPhase;
        v367 = *(_QWORD *)&v363->fields.id.fields.currentCryptoKey;
        v366 = *(_QWORD *)&v363->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v396.fields.currentCryptoKey = v367;
        *(_QWORD *)&v396.fields.fakeValue = v366;
        v368 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v396, 0);
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
        PartyOrganizationUtility__SetAddPassiveCampaignInfo(
          (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v391,
          questId,
          questPhase,
          v368,
          0);
      }
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( IsGrandServant )
      {
        AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)IsGrandServant, &v390, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v391, 0);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsGrandServant )
        {
          AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                            (PartyOrganizationUtility_o *)IsGrandServant,
                            AdjustUpValInfoArray,
                            0);
          this->fields.eventUpValItemList = AddUpValInfos;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.eventUpValItemList,
            (int32_t)AddUpValInfos,
            v371,
            v372,
            v373,
            v374,
            v375,
            v376);
          this->fields._IsDuplicateBonus_k__BackingField = v390;
          return;
        }
      }
      goto LABEL_319;
    }
LABEL_15:
    v54 = this->fields.questRestrictionInfo;
    if ( v54 )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v54->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
    goto LABEL_22;
  }
  if ( !this->fields.userServantEntity )
  {
    this->fields.equipIdList = 0;
    p_equipIdList = &this->fields.equipIdList;
    v56 = 0;
    goto LABEL_253;
  }
  if ( !equipIdList )
  {
    v57 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v57 = BalanceConfig_TypeInfo;
    }
    v53 = (struct System_Int64_array *)sub_1C93B7C(long___TypeInfo, (unsigned int)v57->static_fields->SvtEquipMax);
LABEL_28:
    this->fields.equipIdList = v53;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, (int32_t)v53, v46, v47, v48, v49, v50, v51);
    v44 = this->fields.equipIdList;
    goto LABEL_29;
  }
  v44 = this->fields.equipIdList;
  if ( v44 != equipIdList )
  {
    v45 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v45 )
    {
      v52 = v45;
      v53 = (struct System_Int64_array *)sub_1C93C10(v45, long___TypeInfo);
      if ( !v53 )
      {
        sub_1C940C8(v52);
        goto LABEL_15;
      }
    }
    else
    {
      v53 = 0;
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( !v44 )
    goto LABEL_319;
  v62 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v44->max_length);
    if ( (__int64)v62 >= (int)max_length_low )
      break;
    if ( v62 >= max_length_low )
      goto LABEL_320;
    if ( v44->m_Items[v62] < 1 )
      goto LABEL_65;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_319;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    v64 = this->fields.equipIdList;
    if ( !v64 )
      goto LABEL_319;
    if ( v62 >= LODWORD(v64->max_length) )
      goto LABEL_320;
    if ( !IsGrandServant )
      goto LABEL_319;
    IsGrandServant = (void *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                               &entity,
                               v64->m_Items[v62],
                               (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      IsGrandServant = *p_equipUserServantEntityList;
      if ( !*p_equipUserServantEntityList )
        goto LABEL_319;
      v36 = entity;
      v71 = *((_QWORD *)IsGrandServant + 2);
      v72 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v71 )
        goto LABEL_319;
      v73 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v36,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = v71 + 8 * v73;
        *((_DWORD *)IsGrandServant + 6) = v73 + 1;
        *(_QWORD *)(v74 + 32) = v36;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v74 + 32), (int32_t)v36, v65, v66, v67, v68, v69, v70);
      }
      if ( !entity )
        goto LABEL_319;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v392.fields.currentCryptoKey = klass;
      *(_QWORD *)&v392.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v392, 0) <= 0 )
      {
        v125 = (Il2CppObject *)sub_1C93D20(ServantEntity_TypeInfo);
        ServantEntity___ctor((ServantEntity_o *)v125, 0);
      }
      else
      {
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_319;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !entity )
          goto LABEL_319;
        v122 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        v124 = entity[5].klass;
        v123 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v393.fields.currentCryptoKey = v124;
        *(_QWORD *)&v393.fields.fakeValue = v123;
        IsGrandServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v393, 0);
        if ( !v122 )
          goto LABEL_319;
        v125 = DataMasterBase_object__object__int___GetEntity(
                 v122,
                 (int32_t)IsGrandServant,
                 (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      IsGrandServant = *p_equipServantEntityList;
      if ( !*p_equipServantEntityList )
        goto LABEL_319;
      v126 = *((_QWORD *)IsGrandServant + 2);
      v127 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v126 )
        goto LABEL_319;
      v128 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
      {
        v118 = v127[4];
        v119 = v125;
        goto LABEL_93;
      }
      v129 = v126 + 8 * v128;
      *((_DWORD *)IsGrandServant + 6) = v128 + 1;
      *(_QWORD *)(v129 + 32) = v125;
      v116 = (GrandQuestFolderBoardItem_o *)(v129 + 32);
      v117 = (int)v125;
      goto LABEL_91;
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    if ( !equipSvtIdList )
      goto LABEL_62;
    if ( v62 >= LODWORD(equipSvtIdList->max_length) )
      goto LABEL_320;
    if ( equipSvtIdList->m_Items[v62] < 1 )
      goto LABEL_62;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    IsGrandServant = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsGrandServant = NetworkManager_TypeInfo;
    }
    v77 = this->fields.equipSvtIdList;
    if ( !v77 )
      goto LABEL_319;
    if ( v62 >= LODWORD(v77->max_length) )
      goto LABEL_320;
    if ( !Master_object )
      goto LABEL_319;
    IsGrandServant = (void *)UserServantCollectionMaster__TryGetEntity(
                               (UserServantCollectionMaster_o *)Master_object,
                               &v387,
                               *(_QWORD *)(*((_QWORD *)IsGrandServant + 23) + 64LL),
                               v77->m_Items[v62],
                               0);
    if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
    {
LABEL_62:
      v91 = this->fields.equipIdList;
      if ( !v91 )
        goto LABEL_319;
      if ( v62 >= LODWORD(v91->max_length) )
        goto LABEL_320;
      v91->m_Items[v62] = 0;
LABEL_65:
      v92 = (System_Collections_Generic_List_object__o *)*p_equipUserServantEntityList;
      v93 = (UserServantEntity_o *)sub_1C93D20(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v93, 0);
      if ( !v92 )
        goto LABEL_319;
      v100 = v92->fields._items;
      v101 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v92->fields._version;
      if ( !v100 )
        goto LABEL_319;
      v102 = v92->fields._size;
      if ( (unsigned int)v102 >= LODWORD(v100->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v92,
          (Il2CppObject *)v93,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
      }
      else
      {
        v103 = &v100->obj.klass + v102;
        v92->fields._size = v102 + 1;
        v103[4] = (Il2CppClass *)v93;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v103 + 4), (int32_t)v93, v94, v95, v96, v97, v98, v99);
      }
      v104 = *p_equipServantEntityList;
      v105 = (ServantEntity_o *)sub_1C93D20(ServantEntity_TypeInfo);
      ServantEntity___ctor(v105, 0);
      if ( !v104 )
        goto LABEL_319;
      v112 = v104->fields._items;
      v113 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++v104->fields._version;
      if ( !v112 )
        goto LABEL_319;
      v114 = v104->fields._size;
      if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
      {
        v118 = v113[4];
        IsGrandServant = v104;
        v119 = (Il2CppObject *)v105;
LABEL_93:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v119,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v118 + 192) + 112LL));
        goto LABEL_94;
      }
      v115 = (__int64)v112 + 8 * v114;
      v104->fields._size = v114 + 1;
      *(_QWORD *)(v115 + 32) = v105;
      v116 = (GrandQuestFolderBoardItem_o *)(v115 + 32);
      v117 = (int)v105;
LABEL_91:
      sub_1C93A78(v116, v117, v106, v107, v108, v109, v110, v111);
      goto LABEL_94;
    }
    v78 = (System_Collections_Generic_List_object__o *)*p_equipUserServantEntityList;
    v79 = v387;
    v80 = (UserServantEntity_o *)sub_1C93D20(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_43857036(v80, v79, 0, 0);
    if ( !v78 )
      goto LABEL_319;
    v87 = v78->fields._items;
    v88 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v78->fields._version;
    if ( !v87 )
      goto LABEL_319;
    v89 = v78->fields._size;
    if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v78,
        (Il2CppObject *)v80,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v87->obj.klass + v89;
      v78->fields._size = v89 + 1;
      v90[4] = (Il2CppClass *)v80;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v90 + 4), (int32_t)v80, v81, v82, v83, v84, v85, v86);
    }
    v130 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_319;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    v131 = this->fields.equipSvtIdList;
    if ( !v131 )
      goto LABEL_319;
    if ( v62 >= LODWORD(v131->max_length) )
      goto LABEL_320;
    if ( !IsGrandServant )
      goto LABEL_319;
    IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                       v131->m_Items[v62],
                       (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v130 )
      goto LABEL_319;
    v138 = v130->fields._items;
    v139 = Method_System_Collections_Generic_List_ServantEntity__Add__;
    ++v130->fields._version;
    if ( !v138 )
      goto LABEL_319;
    v140 = v130->fields._size;
    v141 = (Il2CppClass *)IsGrandServant;
    if ( (unsigned int)v140 >= LODWORD(v138->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v130,
        (Il2CppObject *)IsGrandServant,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
    }
    else
    {
      v142 = &v138->obj.klass + v140;
      v130->fields._size = v140 + 1;
      v142[4] = v141;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v142 + 4), (int32_t)v141, v132, v133, v134, v135, v136, v137);
    }
    this->fields._IsDisappearEquip_k__BackingField = 1;
LABEL_94:
    v44 = this->fields.equipIdList;
    ++v62;
    if ( !v44 )
      goto LABEL_319;
  }
  p_setupInfo = &this->fields.setupInfo;
  v143 = this->fields.setupInfo;
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( !v143 )
    goto LABEL_114;
  v146 = v143->fields.eventIdList;
  if ( !v146 )
    goto LABEL_319;
  if ( !v146->max_length )
  {
LABEL_114:
    v150 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v150,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    infoList = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v150;
    if ( !this->fields.questRestrictionInfo )
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 0, v151);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsGrandServant )
        goto LABEL_319;
      v161 = infoList;
      goto LABEL_162;
    }
    PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 1, v151);
    v152 = this->fields.questRestrictionInfo;
    if ( v152 )
    {
      v153 = this->fields.servantEntity;
      if ( v153 )
      {
        v155 = v152->fields.questId;
        v154 = v152->fields.questPhase;
        v157 = *(_QWORD *)&v153->fields.id.fields.currentCryptoKey;
        v156 = *(_QWORD *)&v153->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v394.fields.currentCryptoKey = v157;
        *(_QWORD *)&v394.fields.fakeValue = v156;
        v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v394, 0);
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
        PartyOrganizationUtility__SetAddPassiveCampaignInfo(&infoList, v155, v154, v158, 0);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsGrandServant )
        {
          v159 = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                   (PartyOrganizationUtility_o *)IsGrandServant,
                   &isDuplicate,
                   infoList,
                   0);
          v160 = isDuplicate;
          goto LABEL_160;
        }
      }
    }
    goto LABEL_319;
  }
  userServantEntity = this->fields.userServantEntity;
  EquipList = PartyOrganizationListViewItem__GetEquipList(this, (const MethodInfo *)v36);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_319;
  if ( this->fields._IsGrandServant_k__BackingField )
  {
    IsTempGrandServant_k__BackingField = 1;
    if ( !userServantEntity )
      goto LABEL_319;
  }
  else
  {
    IsTempGrandServant_k__BackingField = this->fields._IsTempGrandServant_k__BackingField;
    if ( !userServantEntity )
      goto LABEL_319;
  }
  EventUpVal_43870140 = UserServantEntity__getEventUpVal_43870140(
                          userServantEntity,
                          eventUpVallInfo,
                          v143,
                          EquipList,
                          *((_QWORD *)IsGrandServant + 17),
                          0,
                          IsTempGrandServant_k__BackingField,
                          otherValidEventIdFilter,
                          0);
  v163 = this->fields.questRestrictionInfo;
  this->fields.isEventUpVal = EventUpVal_43870140;
  if ( !v163 )
  {
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( IsGrandServant )
    {
      v225 = DataManager__GetMasterData_object_(
               (DataManager_o *)IsGrandServant,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v226 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v226,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v386 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v226;
      if ( *p_setupInfo )
      {
        v228 = (*p_setupInfo)->fields.eventIdList;
        if ( v228 )
        {
          max_length = v228->max_length;
          if ( (int)max_length >= 1 )
          {
            v230 = 0;
            while ( 1 )
            {
              if ( v230 >= (unsigned int)max_length )
                goto LABEL_320;
              if ( !v225 )
                goto LABEL_319;
              v231 = v228->m_Items[v230];
              v232 = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v225,
                       v231,
                       (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !v232
                || (IsGrandServant = (void *)EventDetailEntity__HasFlag((EventDetailEntity_o *)v232, 0x800000000LL, 0),
                    ((unsigned __int8)IsGrandServant & 1) == 0) )
              {
                v233 = this->fields.servantEntity;
                v234 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
                EventPersonalMargeUpValInfo___ctor(v234, v231, v233, 0);
                IsGrandServant = this->fields.eventUpValInfo;
                if ( !IsGrandServant )
                  goto LABEL_319;
                IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
                if ( !v234 )
                  goto LABEL_319;
                EventPersonalMargeUpValInfo__Add(v234, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
                IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v234, 0);
                if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
                {
                  IsGrandServant = EventPersonalMargeUpValInfo__GetList(v234, 0);
                  if ( !IsGrandServant )
                    goto LABEL_319;
                  v240 = *((_QWORD *)IsGrandServant + 3);
                  v241 = IsGrandServant;
                  if ( (int)v240 >= 1 )
                    break;
                }
              }
LABEL_193:
              LODWORD(max_length) = v228->max_length;
              if ( (__int64)++v230 >= (int)max_length )
                goto LABEL_194;
            }
            v242 = 0;
            while ( v242 < (unsigned int)v240 )
            {
              if ( !v226 )
                goto LABEL_319;
              v36 = (Il2CppObject *)v241[v242 + 4];
              v243 = v226->fields._items;
              v244 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v226->fields._version;
              if ( !v243 )
                goto LABEL_319;
              v245 = v226->fields._size;
              if ( (unsigned int)v245 >= LODWORD(v243->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v226,
                  v36,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
              }
              else
              {
                v246 = &v243->obj.klass + v245;
                v226->fields._size = v245 + 1;
                v246[4] = (Il2CppClass *)v36;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v246 + 4),
                  (int32_t)v36,
                  v235,
                  (int32_t)v227,
                  v236,
                  v237,
                  v238,
                  v239);
              }
              LODWORD(v240) = *((_DWORD *)v241 + 6);
              if ( (__int64)++v242 >= (int)v240 )
                goto LABEL_193;
            }
LABEL_320:
            sub_1C93D34(IsGrandServant);
          }
LABEL_194:
          PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v386, 0, v227);
          IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !IsGrandServant )
            goto LABEL_319;
          v205 = PartyOrganizationUtility__GetAddUpValInfos(
                   (PartyOrganizationUtility_o *)IsGrandServant,
                   (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v226,
                   0);
          p_eventUpValItemList = &this->fields.eventUpValItemList;
          p_setupInfo = &this->fields.setupInfo;
          goto LABEL_163;
        }
      }
    }
    goto LABEL_319;
  }
  v164 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v164,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v385 = v164;
  if ( !*eventUpVallInfo )
    goto LABEL_319;
  v165 = (System_Collections_Generic_IEnumerable_TSource__o *)(*eventUpVallInfo)->fields.dropList;
  v166 = PartyOrganizationListViewItem___c_TypeInfo;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v166 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__167_1 = (System_Func_object__int__o *)v166->static_fields->__9__167_1;
  if ( !_9__167_1 )
  {
    if ( !v166->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v166);
      v166 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v168 = (Il2CppObject *)v166->static_fields->__9;
    _9__167_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EventDropUpValInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__167_1,
      v168,
      Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__167_1__,
      0);
    v169 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v169->__9__167_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__167_1;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v169->__9__167_1,
      (int32_t)_9__167_1,
      v170,
      v171,
      v172,
      v173,
      v174,
      v175);
  }
  v176 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v165,
                                                                (System_Func_TSource__TResult__o *)_9__167_1,
                                                                (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
  v177 = System_Linq_Enumerable__Distinct_int_(
           v176,
           (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
  IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                     v177,
                     (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !IsGrandServant )
    goto LABEL_319;
  v179 = *((_QWORD *)IsGrandServant + 3);
  v180 = IsGrandServant;
  if ( (int)v179 >= 1 )
  {
    v181 = 0;
    while ( 1 )
    {
      if ( v181 >= (unsigned int)v179 )
        goto LABEL_320;
      v182 = this->fields.servantEntity;
      v183 = v180[v181 + 8];
      v184 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v184, v183, v182, 0);
      IsGrandServant = this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_319;
      IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
      if ( !v184 )
        goto LABEL_319;
      EventPersonalMargeUpValInfo__Add(v184, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
      IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v184, 0);
      if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
      {
        IsGrandServant = EventPersonalMargeUpValInfo__GetList(v184, 0);
        if ( !IsGrandServant )
          goto LABEL_319;
        v190 = *((_QWORD *)IsGrandServant + 3);
        v191 = IsGrandServant;
        if ( (int)v190 >= 1 )
          break;
      }
LABEL_151:
      LODWORD(v179) = v180[6];
      if ( (__int64)++v181 >= (int)v179 )
        goto LABEL_152;
    }
    v192 = 0;
    while ( v192 < (unsigned int)v190 )
    {
      IsGrandServant = v385;
      if ( !v385 )
        goto LABEL_319;
      v36 = (Il2CppObject *)v191[v192 + 4];
      v193 = v385->fields._items;
      v194 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v385->fields._version;
      if ( !v193 )
        goto LABEL_319;
      v195 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v195 >= LODWORD(v193->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v36,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
      }
      else
      {
        v196 = &v193->obj.klass + v195;
        *((_DWORD *)IsGrandServant + 6) = v195 + 1;
        v196[4] = (Il2CppClass *)v36;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(v196 + 4),
          (int32_t)v36,
          v185,
          (int32_t)v178,
          v186,
          v187,
          v188,
          v189);
      }
      LODWORD(v190) = *((_DWORD *)v191 + 6);
      if ( (__int64)++v192 >= (int)v190 )
        goto LABEL_151;
    }
    goto LABEL_320;
  }
LABEL_152:
  PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(
    this,
    (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v385,
    1,
    v178);
  v197 = this->fields.questRestrictionInfo;
  if ( !v197 )
    goto LABEL_319;
  v198 = this->fields.servantEntity;
  if ( !v198 )
    goto LABEL_319;
  v200 = v197->fields.questId;
  v199 = v197->fields.questPhase;
  v202 = *(_QWORD *)&v198->fields.id.fields.currentCryptoKey;
  v201 = *(_QWORD *)&v198->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v395.fields.currentCryptoKey = v202;
  *(_QWORD *)&v395.fields.fakeValue = v201;
  v203 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v395, 0);
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
  PartyOrganizationUtility__SetAddPassiveCampaignInfo(
    (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v385,
    v200,
    v199,
    v203,
    0);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_319;
  v159 = PartyOrganizationUtility__GetAdjustUpValInfoArray(
           (PartyOrganizationUtility_o *)IsGrandServant,
           &v384,
           (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v385,
           0);
  v160 = v384;
LABEL_160:
  this->fields._IsDuplicateBonus_k__BackingField = v160;
  v204 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v159;
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_319;
  v161 = v204;
LABEL_162:
  v205 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v161,
           0);
LABEL_163:
  this->fields.eventUpValItemList = v205;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_eventUpValItemList, (int32_t)v205, v206, v207, v208, v209, v210, v211);
  if ( !this->fields.questRestrictionInfo )
    return;
  if ( !*p_setupInfo )
  {
    v213 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 1);
    v214 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_42466312(v214, v213, 0, 0, 0, 0);
    *p_setupInfo = v214;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_setupInfo, (int32_t)v214, v215, v216, v217, v218, v219, v220);
  }
  if ( !this->fields.isEventUpVal || !*eventUpVallInfo )
  {
    v293 = this->fields.userServantEntity;
    v294 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v212);
    v295 = this->fields.questRestrictionInfo;
    if ( !v295 )
      goto LABEL_319;
    if ( this->fields._IsGrandServant_k__BackingField )
    {
      v296 = 1;
      if ( !v293 )
        goto LABEL_319;
    }
    else
    {
      v296 = this->fields._IsTempGrandServant_k__BackingField;
      if ( !v293 )
        goto LABEL_319;
    }
    this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                  v293,
                                  eventUpVallInfo,
                                  v294,
                                  (System_Int64_array *)IsGrandServant,
                                  v295->fields.questId,
                                  v295->fields.questPhase,
                                  0,
                                  v296,
                                  0);
    goto LABEL_244;
  }
  v221 = this->fields.userServantEntity;
  v222 = this->fields.setupInfo;
  IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v212);
  v223 = this->fields.questRestrictionInfo;
  if ( !v223 )
    goto LABEL_319;
  v224 = this->fields._IsGrandServant_k__BackingField || this->fields._IsTempGrandServant_k__BackingField;
  if ( !v221 )
    goto LABEL_319;
  IsGrandServant = (void *)UserServantEntity__GetBonusUpVal(
                             v221,
                             &v381,
                             v222,
                             (System_Int64_array *)IsGrandServant,
                             v223->fields.questId,
                             v223->fields.questPhase,
                             0,
                             v224,
                             0);
  if ( !v381 )
    goto LABEL_319;
  IsGrandServant = v381->fields.dropList;
  if ( !IsGrandServant )
    goto LABEL_319;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v379,
    (System_Collections_Generic_List_object__o *)IsGrandServant,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v380 = v379;
  while ( 1 )
  {
    v279 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v380,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v279 )
      break;
    if ( !*eventUpVallInfo )
      sub_1C93D2C(v279, v280);
    v287 = (System_Collections_Generic_List_object__o *)(*eventUpVallInfo)->fields.dropList;
    if ( !v287 )
      sub_1C93D2C(0, v280);
    v288 = v380.fields._current;
    v289 = v287->fields._items;
    v290 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
    ++v287->fields._version;
    if ( !v289 )
      sub_1C93D2C(v287, v288);
    v291 = v287->fields._size;
    if ( (unsigned int)v291 >= LODWORD(v289->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v287,
        v288,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v290[4] + 192LL) + 112LL));
    }
    else
    {
      v292 = &v289->obj.klass + v291;
      v287->fields._size = v291 + 1;
      v292[4] = (Il2CppClass *)v288;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v292 + 4), (int32_t)v288, v281, v282, v283, v284, v285, v286);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v380,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
LABEL_244:
  v297 = this->fields.servantEntity;
  v298 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
  EventPersonalMargeUpValInfo___ctor(v298, 0, v297, 0);
  IsGrandServant = this->fields.eventUpValInfo;
  if ( !IsGrandServant )
    goto LABEL_319;
  IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
  if ( !v298 )
    goto LABEL_319;
  EventPersonalMargeUpValInfo__Add(v298, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
  if ( EventPersonalMargeUpValInfo__IsEmpty(v298, 0) )
    return;
  v299 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v299,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v36 = (Il2CppObject *)*p_eventUpValItemList;
  if ( *p_eventUpValItemList )
  {
    if ( !v299 )
      goto LABEL_319;
    System_Collections_Generic_List_object___AddRange(
      v299,
      (System_Collections_Generic_IEnumerable_T__o *)v36,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v298, 0);
  }
  else
  {
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v298, 0);
    if ( !v299 )
      goto LABEL_319;
  }
  System_Collections_Generic_List_object___AddRange(
    v299,
    (System_Collections_Generic_IEnumerable_T__o *)IsGrandServant,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
LABEL_319:
    sub_1C93D2C(IsGrandServant, v36);
  v300 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v299,
           0);
  v56 = (int)v300;
  *p_eventUpValItemList = v300;
  p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
LABEL_253:
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_equipIdList, v56, v37, v38, v39, v40, v41, v42);
}


void PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v10; // x3

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( LODWORD(equipIdList->max_length) <= index )
      sub_1C93D34(this);
    equipIdList->m_Items[index] = userSvtId;
    this->fields.equipSvtIdList = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipSvtIdList, 0, index, (int32_t)method, v4, v5, v6, v7);
    PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, 0, v10);
  }
}


void PartyOrganizationListViewItem__SetEquipUserServantIdList(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *userSvtIdList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Int64_array **p_equipIdList; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x3

  this->fields.equipIdList = userSvtIdList;
  p_equipIdList = &this->fields.equipIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipIdList,
    (int32_t)userSvtIdList,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.equipSvtIdList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipSvtIdList, 0, v10, v11, v12, v13, v14, v15);
  PartyOrganizationListViewItem__SetEquipStatus(this, *p_equipIdList, 0, v16);
}


void PartyOrganizationListViewItem__SetFollowerChangeFriendShipEquipSkillInfo(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0

  EquipTargetInfoByEquipIdx = PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(this, 1, v2);
  if ( EquipTargetInfoByEquipIdx )
    EquipTargetInfo__SetSkillChangeFlag(
      EquipTargetInfoByEquipIdx,
      this->fields._EquipFriendShipSkillChange_k__BackingField > 0,
      0);
}


void PartyOrganizationListViewItem__SetNameLimitCount(
        PartyOrganizationListViewItem_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = limit;
}


void PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
        PartyOrganizationListViewItem_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._WaveEnemyClassIds_k__BackingField = classIds;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationListViewItem__Swap(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x0
  __int64 v11; // d14
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v13; // d12
  __int64 v14; // d13
  __int64 v15; // d10
  __int64 v16; // d11
  Il2CppClass **v17; // x20
  __int64 v18; // d9
  __int64 v19; // d8
  struct UserServantEntity_o *v20; // x1
  struct FollowerInfo_o *v21; // x1
  char v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct ServantEntity_o *v28; // x1
  char v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Int32_array *v35; // x1
  char v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  char v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Array_o *v48; // x0
  struct System_Int32_array **v49; // x29
  Il2CppObject *v50; // x0
  Il2CppObject *v51; // x27
  __int64 v52; // x0
  __int64 v53; // x0
  int32_t v54; // w1
  const MethodInfo *v55; // x3
  struct EventCampaignEntity_array *v56; // x1
  char v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  char v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  char v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  char v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  char v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  char v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  Il2CppObject *v93; // x0
  Il2CppObject *v94; // x20
  __int64 v95; // x0
  __int64 v96; // x0
  int32_t v97; // w1
  const MethodInfo *v98; // x3
  char v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  char v105; // [xsp+8h] [xbp-178h]
  int32_t InitPos_k__BackingField; // [xsp+Ch] [xbp-174h]
  bool IsAllOutBattle_k__BackingField; // [xsp+10h] [xbp-170h]
  bool IsDataLost_k__BackingField; // [xsp+14h] [xbp-16Ch]
  int32_t TimesToRestart_k__BackingField; // [xsp+18h] [xbp-168h]
  bool IsNotSupportSingle_k__BackingField; // [xsp+1Ch] [xbp-164h]
  int32_t TempOverwriteTreasureDeviceLv_k__BackingField; // [xsp+20h] [xbp-160h]
  int32_t EquipFriendShipSkillChange_k__BackingField; // [xsp+24h] [xbp-15Ch]
  bool IsUseGrandBoard_k__BackingField; // [xsp+28h] [xbp-158h]
  bool IsTempGrandServant_k__BackingField; // [xsp+2Ch] [xbp-154h]
  bool IsGrandServant_k__BackingField; // [xsp+30h] [xbp-150h]
  bool IsDisappearEquip_k__BackingField; // [xsp+34h] [xbp-14Ch]
  bool IsDisappearSvt_k__BackingField; // [xsp+38h] [xbp-148h]
  bool IsClearedWave_k__BackingField; // [xsp+3Ch] [xbp-144h]
  int32_t NowPos_k__BackingField; // [xsp+40h] [xbp-140h]
  bool IsNotClassBoardNpc_k__BackingField; // [xsp+44h] [xbp-13Ch]
  bool isRestrictionMyServantPos; // [xsp+5Ch] [xbp-124h]
  bool isRestrictionNeedStarting; // [xsp+60h] [xbp-120h]
  bool isRestrictionActiveGrandBoard; // [xsp+64h] [xbp-11Ch]
  bool isRestrictionGrandServant; // [xsp+68h] [xbp-118h]
  bool isRestrictionServantPos; // [xsp+6Ch] [xbp-114h]
  System_Array_o *equipSvtIdList; // [xsp+70h] [xbp-110h]
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // [xsp+78h] [xbp-108h]
  System_Int64_array *equipIdList; // [xsp+80h] [xbp-100h]
  bool IsDispSvtPoint_k__BackingField; // [xsp+8Ch] [xbp-F4h]
  struct FollowerInfo_o *followerInfo; // [xsp+90h] [xbp-F0h]
  bool isFollower; // [xsp+9Ch] [xbp-E4h]
  bool isFixNpc; // [xsp+A0h] [xbp-E0h]
  int32_t followerIndex; // [xsp+A4h] [xbp-DCh]
  struct ServantEntity_o *servantEntity; // [xsp+A8h] [xbp-D8h]
  struct System_Int32_array *commandCodeIdList; // [xsp+B0h] [xbp-D0h]
  bool isServantNumRestriction; // [xsp+B8h] [xbp-C8h]
  bool isFixMultipleNpcRestriction; // [xsp+BCh] [xbp-C4h]
  bool isFixMultipleNpc; // [xsp+C0h] [xbp-C0h]
  bool isMyServantOrNpcRestriction; // [xsp+C4h] [xbp-BCh]
  int64_t npcFollowerSvtId; // [xsp+C8h] [xbp-B8h]
  struct UserServantEntity_o *userServantEntity; // [xsp+D0h] [xbp-B0h]
  int64_t fatigureTime; // [xsp+D8h] [xbp-A8h]
  bool haveIndividualityServant; // [xsp+E8h] [xbp-98h]

  if ( (byte_4D2C37A & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2C37A = 1;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  followerInfo = this->fields.followerInfo;
  v11 = *(_QWORD *)&this->fields.followerClassId;
  isFollower = this->fields.isFollower;
  isFixNpc = this->fields.isFixNpc;
  followerIndex = this->fields.followerIndex;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  v14 = *(_QWORD *)&this->fields.cost;
  v13 = *(_QWORD *)&this->fields.atk;
  v16 = *(_QWORD *)&this->fields.rarityId;
  v15 = *(_QWORD *)&this->fields.frameType;
  servantEntity = this->fields.servantEntity;
  LOBYTE(v17) = this->fields.isFatigureRecover;
  v18 = *(_QWORD *)&this->fields.isQuestRestriction;
  commandCodeIdList = this->fields.commandCodeIdList;
  isServantNumRestriction = this->fields.isServantNumRestriction;
  isFixMultipleNpcRestriction = this->fields.isFixMultipleNpcRestriction;
  npcFollowerSvtId = this->fields.npcFollowerSvtId;
  fatigureTime = this->fields.fatigureTime;
  isFixMultipleNpc = this->fields.isFixMultipleNpc;
  isMyServantOrNpcRestriction = this->fields.isMyServantOrNpcRestriction;
  haveIndividualityServant = this->fields.haveIndividualityServant;
  v19 = *(_QWORD *)&this->fields._SvtPoint_k__BackingField;
  if ( !item )
    sub_1C93D2C(p_userServantEntity, item);
  equipIdList = this->fields.equipIdList;
  IsDispSvtPoint_k__BackingField = this->fields._IsDispSvtPoint_k__BackingField;
  equipSvtIdList = (System_Array_o *)this->fields.equipSvtIdList;
  friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
  IsAllOutBattle_k__BackingField = this->fields._IsAllOutBattle_k__BackingField;
  IsDataLost_k__BackingField = this->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = this->fields._TimesToRestart_k__BackingField;
  IsNotSupportSingle_k__BackingField = this->fields._IsNotSupportSingle_k__BackingField;
  InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  IsNotClassBoardNpc_k__BackingField = this->fields._IsNotClassBoardNpc_k__BackingField;
  isRestrictionMyServantPos = this->fields.isRestrictionMyServantPos;
  isRestrictionNeedStarting = this->fields.isRestrictionNeedStarting;
  isRestrictionGrandServant = this->fields.isRestrictionGrandServant;
  isRestrictionServantPos = this->fields.isRestrictionServantPos;
  isRestrictionActiveGrandBoard = this->fields.isRestrictionActiveGrandBoard;
  IsDisappearSvt_k__BackingField = this->fields._IsDisappearSvt_k__BackingField;
  IsClearedWave_k__BackingField = this->fields._IsClearedWave_k__BackingField;
  IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
  IsDisappearEquip_k__BackingField = this->fields._IsDisappearEquip_k__BackingField;
  IsUseGrandBoard_k__BackingField = this->fields._IsUseGrandBoard_k__BackingField;
  IsTempGrandServant_k__BackingField = this->fields._IsTempGrandServant_k__BackingField;
  TempOverwriteTreasureDeviceLv_k__BackingField = this->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  EquipFriendShipSkillChange_k__BackingField = this->fields._EquipFriendShipSkillChange_k__BackingField;
  v20 = item->fields.userServantEntity;
  this->fields.userServantEntity = v20;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_userServantEntity,
    (int32_t)v20,
    notChangeInitPos,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v21 = item->fields.followerInfo;
  this->fields.followerInfo = v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.followerInfo, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  v28 = item->fields.servantEntity;
  this->fields.servantEntity = v28;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  v35 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v35;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.isServantNumRestriction = item->fields.isServantNumRestriction;
  this->fields.isFixMultipleNpcRestriction = item->fields.isFixMultipleNpcRestriction;
  this->fields.isFixMultipleNpc = item->fields.isFixMultipleNpc;
  this->fields.npcFollowerSvtId = item->fields.npcFollowerSvtId;
  *(_QWORD *)&this->fields.isQuestRestriction = *(_QWORD *)&item->fields.isQuestRestriction;
  this->fields.isMyServantOrNpcRestriction = item->fields.isMyServantOrNpcRestriction;
  this->fields.haveIndividualityServant = item->fields.haveIndividualityServant;
  this->fields.isRestrictionMyServantPos = item->fields.isRestrictionMyServantPos;
  this->fields.isRestrictionNeedStarting = item->fields.isRestrictionNeedStarting;
  this->fields.isRestrictionServantPos = item->fields.isRestrictionServantPos;
  this->fields.isRestrictionGrandServant = item->fields.isRestrictionGrandServant;
  this->fields.isRestrictionActiveGrandBoard = item->fields.isRestrictionActiveGrandBoard;
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  v49 = &item->fields.equipSvtIdList;
  v48 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v48 )
    goto LABEL_9;
  v50 = System_Array__Clone(v48, 0);
  if ( !v50 )
    goto LABEL_9;
  v105 = (char)v17;
  v17 = &int___TypeInfo;
  v51 = v50;
  v52 = sub_1C93C10(v50, int___TypeInfo);
  if ( !v52
    || (*p_equipSvtIdList = (struct System_Int32_array *)v52,
        v53 = sub_1C93C10(v51, int___TypeInfo),
        LOBYTE(v17) = v105,
        v54 = v53,
        !v53) )
  {
    sub_1C940C8(v51);
LABEL_9:
    v54 = 0;
    *p_equipSvtIdList = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipSvtIdList, v54, v42, v43, v44, v45, v46, v47);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, 0, v55);
  v56 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v56;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  this->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = item->fields._IsNotSupportSingle_k__BackingField;
  if ( !notChangeInitPos )
    this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = item->fields._IsGrandServant_k__BackingField;
  this->fields._IsTempGrandServant_k__BackingField = item->fields._IsTempGrandServant_k__BackingField;
  this->fields._IsUseGrandBoard_k__BackingField = item->fields._IsUseGrandBoard_k__BackingField;
  this->fields._EquipFriendShipSkillChange_k__BackingField = item->fields._EquipFriendShipSkillChange_k__BackingField;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&item->fields.userServantEntity,
    (int32_t)userServantEntity,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  item->fields.followerInfo = followerInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&item->fields.followerInfo,
    (int32_t)followerInfo,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  *(_QWORD *)&item->fields.followerClassId = v11;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  item->fields.followerIndex = followerIndex;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&item->fields.servantEntity,
    (int32_t)servantEntity,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  *(_QWORD *)&item->fields.cost = v14;
  *(_QWORD *)&item->fields.atk = v13;
  *(_QWORD *)&item->fields.rarityId = v16;
  *(_QWORD *)&item->fields.frameType = v15;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&item->fields.commandCodeIdList,
    (int32_t)commandCodeIdList,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  *(_QWORD *)&item->fields.isQuestRestriction = v18;
  item->fields.isFatigureRecover = (char)v17;
  item->fields.isServantNumRestriction = isServantNumRestriction;
  item->fields.isFixMultipleNpcRestriction = isFixMultipleNpcRestriction;
  item->fields.isFixMultipleNpc = isFixMultipleNpc;
  item->fields.npcFollowerSvtId = npcFollowerSvtId;
  item->fields.isMyServantOrNpcRestriction = isMyServantOrNpcRestriction;
  item->fields.haveIndividualityServant = haveIndividualityServant;
  item->fields.isRestrictionMyServantPos = isRestrictionMyServantPos;
  item->fields.isRestrictionNeedStarting = isRestrictionNeedStarting;
  item->fields.isRestrictionServantPos = isRestrictionServantPos;
  item->fields.isRestrictionGrandServant = isRestrictionGrandServant;
  item->fields.isRestrictionActiveGrandBoard = isRestrictionActiveGrandBoard;
  item->fields.fatigureTime = fatigureTime;
  if ( !equipSvtIdList )
    goto LABEL_17;
  v93 = System_Array__Clone(equipSvtIdList, 0);
  if ( !v93 )
    goto LABEL_17;
  v94 = v93;
  v95 = sub_1C93C10(v93, int___TypeInfo);
  if ( !v95 || (*v49 = (struct System_Int32_array *)v95, v96 = sub_1C93C10(v94, int___TypeInfo), v97 = v96, !v96) )
  {
    sub_1C940C8(v94);
LABEL_17:
    v97 = 0;
    *v49 = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&item->fields.equipSvtIdList, v97, v87, v88, v89, v90, v91, v92);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, 0, v98);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&item->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v19;
  item->fields._IsAllOutBattle_k__BackingField = IsAllOutBattle_k__BackingField;
  item->fields._IsDataLost_k__BackingField = IsDataLost_k__BackingField;
  item->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  item->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  if ( !notChangeInitPos )
    item->fields._InitPos_k__BackingField = InitPos_k__BackingField;
  item->fields._NowPos_k__BackingField = NowPos_k__BackingField;
  item->fields._IsNotClassBoardNpc_k__BackingField = IsNotClassBoardNpc_k__BackingField;
  item->fields._IsClearedWave_k__BackingField = IsClearedWave_k__BackingField;
  item->fields._IsDisappearSvt_k__BackingField = IsDisappearSvt_k__BackingField;
  item->fields._IsDisappearEquip_k__BackingField = IsDisappearEquip_k__BackingField;
  item->fields._IsGrandServant_k__BackingField = IsGrandServant_k__BackingField;
  item->fields._IsTempGrandServant_k__BackingField = IsTempGrandServant_k__BackingField;
  item->fields._IsUseGrandBoard_k__BackingField = IsUseGrandBoard_k__BackingField;
  item->fields._EquipFriendShipSkillChange_k__BackingField = EquipFriendShipSkillChange_k__BackingField;
  item->fields._TempOverwriteTreasureDeviceLv_k__BackingField = TempOverwriteTreasureDeviceLv_k__BackingField;
}


void PartyOrganizationListViewItem__SwapEquip(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  struct System_Int64_array **p_equipIdList; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Int64_array **v15; // x22
  __int64 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Int64_array *v23; // x8
  struct System_Int64_array *v24; // x9
  int64_t v25; // x10
  struct System_Int32_array **p_equipSvtIdList; // x21
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Int32_array **v34; // x22
  const MethodInfo *v35; // x3
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *v44; // x9
  int32_t v45; // w11
  const MethodInfo *v46; // x3

  if ( (byte_4D2C37B & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    byte_4D2C37B = 1;
  }
  p_equipIdList = &this->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v8 = sub_1C93B7C(long___TypeInfo, 1);
    *p_equipIdList = (struct System_Int64_array *)v8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, v8, v9, v10, v11, v12, v13, v14);
  }
  if ( !item )
    goto LABEL_22;
  v15 = &item->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v16 = sub_1C93B7C(long___TypeInfo, 1);
    *v15 = (struct System_Int64_array *)v16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&item->fields.equipIdList, v16, v17, v18, v19, v20, v21, v22);
  }
  v23 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_22;
  if ( !LODWORD(v23->max_length) )
    goto LABEL_23;
  v24 = *v15;
  if ( !*v15 )
    goto LABEL_22;
  if ( !LODWORD(v24->max_length)
    || (v25 = v23->m_Items[0], v23->m_Items[0] = v24->m_Items[0], !LODWORD(v24->max_length)) )
  {
LABEL_23:
    sub_1C93D34(IsNullOrEmpty);
  }
  v24->m_Items[0] = v25;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSvtIdList, 0) )
  {
    v27 = sub_1C93B7C(int___TypeInfo, 1);
    *p_equipSvtIdList = (struct System_Int32_array *)v27;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipSvtIdList, v27, v28, v29, v30, v31, v32, v33);
  }
  v34 = &item->fields.equipSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipSvtIdList, 0);
  if ( IsNullOrEmpty )
  {
    v36 = sub_1C93B7C(int___TypeInfo, 1);
    *v34 = (struct System_Int32_array *)v36;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&item->fields.equipSvtIdList, v36, v37, v38, v39, v40, v41, v42);
  }
  v43 = *p_equipSvtIdList;
  if ( !*p_equipSvtIdList )
    goto LABEL_22;
  if ( !LODWORD(v43->max_length) )
    goto LABEL_23;
  v44 = *v34;
  if ( !*v34 )
LABEL_22:
    sub_1C93D2C(IsNullOrEmpty, v7);
  if ( !LODWORD(v44->max_length) )
    goto LABEL_23;
  v45 = v43->m_Items[0];
  v43->m_Items[0] = v44->m_Items[0];
  v44->m_Items[0] = v45;
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, 0, v35);
  PartyOrganizationListViewItem__SetEquipStatus(item, item->fields.equipIdList, 0, v46);
}


void PartyOrganizationListViewItem__UpdateEventEffect(
        PartyOrganizationListViewItem_o *this,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, otherValidEventIdFilter, v3);
}


void PartyOrganizationListViewItem__UpdateServantInfo(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  PartyOrganizationListViewItem_o *v4; // x1
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v6; // x21
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q1
  __int64 v9; // x22
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x8
  int32_t v11; // w20
  Il2CppObject *Master_object; // x21
  __int64 v13; // x22
  __int128 v14; // q0
  struct System_Collections_Generic_List_UserServantEntity__o *v15; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  __int128 v17; // q0
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v29; // x21
  __int64 v30; // x22
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  PartyOrganizationListViewItem_o *v40; // x21
  bool IsGrandServant_k__BackingField; // w8
  QuestRestrictionInfo_o *v42; // x21
  struct UserServantEntity_o *v43; // x8
  __int64 v44; // x20
  __int64 v45; // x22
  int32_t v46; // w0
  int32_t OverwriteTempTreasureDeviceLv; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+90h] [xbp-90h]
  QuestPhaseEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4D2C3A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2C3A0 = 1;
  }
  entity = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList,
                    0);
  if ( (IsNullOrEmpty & 1) != 0 && !this->fields._IsDisappearEquip_k__BackingField )
  {
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( !equipUserServantEntityList )
      goto LABEL_43;
    v11 = 0;
    while ( v11 < equipUserServantEntityList->fields._size )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
      IsNullOrEmpty = sub_1C93B7C(long___TypeInfo, 1);
      if ( !this->fields.equipUserServantEntityList )
        goto LABEL_43;
      v13 = IsNullOrEmpty;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                 v11,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_43;
      v14 = *(_OWORD *)(IsNullOrEmpty + 32);
      *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
      *(_OWORD *)&v52.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v51 = v52;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v51, 0);
      if ( !v13 )
        goto LABEL_43;
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_84;
      *(_QWORD *)(v13 + 32) = IsNullOrEmpty;
      if ( !Master_object )
        goto LABEL_43;
      IsNullOrEmpty = DataMasterBase_object__object__long___isEntityExistsFromId(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (System_Int64_array *)v13,
                        (const MethodInfo_3465000 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v15 = this->fields.equipUserServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !this->fields.equipUserServantEntityList )
          goto LABEL_43;
        v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                   v11,
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_43;
        v17 = *(_OWORD *)(IsNullOrEmpty + 32);
        *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
        *(_OWORD *)&v52.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v50 = v52;
        IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v50, 0);
        if ( !v16 )
          goto LABEL_43;
        IsNullOrEmpty = (__int64)DataMasterBase_object__object__long___GetEntity(
                                   v16,
                                   IsNullOrEmpty,
                                   (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !v15 )
          goto LABEL_43;
        System_Collections_Generic_List_object___set_Item(
          (System_Collections_Generic_List_object__o *)v15,
          v11,
          (Il2CppObject *)IsNullOrEmpty,
          (const MethodInfo_3879720 *)Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
      }
      else
      {
        this->fields._IsDisappearEquip_k__BackingField = 1;
      }
      equipUserServantEntityList = this->fields.equipUserServantEntityList;
      ++v11;
      if ( !equipUserServantEntityList )
        goto LABEL_43;
    }
  }
  p_userServantEntity = &this->fields.userServantEntity;
  if ( this->fields.userServantEntity && !this->fields._IsDisappearSvt_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
    IsNullOrEmpty = sub_1C93B7C(long___TypeInfo, 1);
    v7 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_43;
    v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
    v9 = IsNullOrEmpty;
    *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v52.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v49 = v52;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v49, 0);
    if ( !v9 )
      goto LABEL_43;
    if ( !*(_DWORD *)(v9 + 24) )
LABEL_84:
      sub_1C93D34(IsNullOrEmpty);
    *(_QWORD *)(v9 + 32) = IsNullOrEmpty;
    if ( !v6 )
      goto LABEL_43;
    if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
            (System_Int64_array *)v9,
            (const MethodInfo_3465000 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
    {
LABEL_18:
      this->fields._IsDisappearSvt_k__BackingField = 1;
      return;
    }
    IsNullOrEmpty = (__int64)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_43;
    if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)IsNullOrEmpty, 0) )
      goto LABEL_18;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
    v18 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_43;
    v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
    *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v52.fields.fakeValue = v19;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v48 = v52;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v48, 0);
    if ( !v20 )
      goto LABEL_43;
    v21 = DataMasterBase_object__object__long___GetEntity(
            v20,
            IsNullOrEmpty,
            (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v21;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    if ( !IsNullOrEmpty )
      goto LABEL_43;
    IsNullOrEmpty = (__int64)UserServantEntity__GetOverwriteStatus(
                               (UserServantEntity_o *)IsNullOrEmpty,
                               this->fields.questRestrictionInfo,
                               0);
    if ( !IsNullOrEmpty )
      goto LABEL_43;
    this->fields.cost = *(_DWORD *)(IsNullOrEmpty + 28);
    *(_QWORD *)&this->fields.hp = *(_QWORD *)(IsNullOrEmpty + 16);
    this->fields.rarityId = *(_DWORD *)(IsNullOrEmpty + 24);
    v4 = (PartyOrganizationListViewItem_o *)*(unsigned int *)(IsNullOrEmpty + 40);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    this->fields.actualRarity = (int)v4;
    if ( !IsNullOrEmpty )
      goto LABEL_43;
    IsNullOrEmpty = UserServantEntity__GetFrameType((UserServantEntity_o *)IsNullOrEmpty, (int32_t)v4, 0);
    userServantEntity = this->fields.userServantEntity;
    this->fields.frameType = IsNullOrEmpty;
    if ( !userServantEntity )
      goto LABEL_43;
    v30 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v29 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v54.fields.currentCryptoKey = v30;
    *(_QWORD *)&v54.fields.fakeValue = v29;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v54, 0);
    v31 = this->fields.userServantEntity;
    this->fields.svtLimitCount = IsNullOrEmpty;
    if ( !v31 )
      goto LABEL_43;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v31, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    if ( !IsNullOrEmpty )
      goto LABEL_43;
    this->fields._IsGrandServant_k__BackingField = UserServantEntity__IsGrandServant(
                                                     (UserServantEntity_o *)IsNullOrEmpty,
                                                     0);
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !IsNullOrEmpty )
      goto LABEL_43;
    IsNullOrEmpty = QuestPhaseMaster__TryGetEntity(
                      (QuestPhaseMaster_o *)IsNullOrEmpty,
                      &entity,
                      questRestrictionInfo->fields.questId,
                      questRestrictionInfo->fields.questPhase,
                      0);
    if ( (IsNullOrEmpty & 1) == 0 )
    {
LABEL_76:
      v42 = this->fields.questRestrictionInfo;
      if ( !v42 )
      {
        OverwriteTempTreasureDeviceLv = 0;
LABEL_82:
        this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
        return;
      }
      v43 = *p_userServantEntity;
      if ( *p_userServantEntity )
      {
        v45 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
        v44 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v45;
        *(_QWORD *)&v55.fields.fakeValue = v44;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v55, 0);
        OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(v42, v46, 0);
        goto LABEL_82;
      }
LABEL_43:
      sub_1C93D2C(IsNullOrEmpty, v4);
    }
    IsNullOrEmpty = (__int64)entity;
    if ( !entity )
      goto LABEL_43;
    IsNullOrEmpty = QuestPhaseEntity__IsUseGrandBoard(entity, 0);
    if ( (IsNullOrEmpty & 1) != 0 )
      v40 = this;
    else
      v40 = 0;
    if ( (IsNullOrEmpty & 1) == 0 )
    {
      IsGrandServant_k__BackingField = 0;
      v40 = this;
LABEL_75:
      v40->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
      goto LABEL_76;
    }
    IsNullOrEmpty = (__int64)this->fields.questRestrictionInfo;
    if ( !IsNullOrEmpty )
      goto LABEL_43;
    IsNullOrEmpty = QuestRestrictionInfo__IsGrandServantRestriction(
                      (QuestRestrictionInfo_o *)IsNullOrEmpty,
                      this->fields._InitPos_k__BackingField,
                      0);
    v4 = this;
    if ( (IsNullOrEmpty & 1) == 0 )
    {
      IsNullOrEmpty = (__int64)this->fields.questRestrictionInfo;
      if ( !IsNullOrEmpty )
        goto LABEL_43;
      IsNullOrEmpty = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                        (QuestRestrictionInfo_o *)IsNullOrEmpty,
                        this->fields._InitPos_k__BackingField,
                        0);
      if ( (IsNullOrEmpty & 1) == 0 )
      {
        IsGrandServant_k__BackingField = 0;
LABEL_74:
        if ( !v40 )
          goto LABEL_43;
        goto LABEL_75;
      }
      v4 = v40;
    }
    v40 = v4;
    IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    goto LABEL_74;
  }
}


void PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20
  __int64 naturalAligment; // x9
  PartyOrganizationListViewItem_o *v6; // x0
  PartyServantListViewItem_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D2C39F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C93AD4(&PartyOrganizationListViewObject_TypeInfo);
    byte_4D2C39F = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
         viewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v6 = (PartyOrganizationListViewItem_o *)sub_1C940C8(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_34857068(v6, v7, v8);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)UnityEngine_Object__op_Inequality(viewObject, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( viewObject )
      {
        PartyOrganizationListViewObject__UpdateStartingMemberFriendshipUp(
          (PartyOrganizationListViewObject_o *)viewObject,
          item,
          0);
        return;
      }
LABEL_13:
      sub_1C93D2C(this, item);
    }
  }
}


int32_t PartyOrganizationListViewItem__get_ActualRarity(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t PartyOrganizationListViewItem__get_AdjustAtk(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustAtk;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getAdjustAtk(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
}


int32_t PartyOrganizationListViewItem__get_AdjustHp(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustHp;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getAdjustHp(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
}


int32_t PartyOrganizationListViewItem__get_CanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CanGetBuddyPoint_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_ClassId(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.classId;
}


System_String_o *PartyOrganizationListViewItem__get_CostumeName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t DispImageLimitCount; // w0
  int32_t v4; // w19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v12; // x0

  if ( (byte_4D2C39B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C39B = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v4 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v8);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
    if ( !MasterData_object )
LABEL_17:
      sub_1C93D2C(Instance, v6);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v4, 0);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D2BD02 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2BD02 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  return v12->static_fields->unknownNameText;
}


int32_t PartyOrganizationListViewItem__get_DisplayEquipIndex(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DisplayEquipIndex_k__BackingField;
}


EquipTargetInfo_o *PartyOrganizationListViewItem__get_DisplayFollowerInfoEquipTarget(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.followerInfo )
    return PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(
             this,
             this->fields._DisplayEquipIndex_k__BackingField,
             v2);
  else
    return 0;
}


int32_t PartyOrganizationListViewItem__get_DisplayServantType(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( this->fields.followerGrandGraphId > 0 )
    return 2;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
  else
    return 0;
}


System_Boolean_array *PartyOrganizationListViewItem__get_DuplicationEquipmentFlagList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DuplicationEquipmentFlagList_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_EquipCost(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v4; // x1
  void *equipServantEntityList; // x0

  if ( (byte_4D2C38B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4D2C38B = 1;
  }
  if ( this->fields.isFollower
    || !this->fields.servantEntity
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
  {
    return -1;
  }
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C93D2C(equipServantEntityList, v4);
  }
  return *((_DWORD *)equipServantEntityList + 38);
}


int32_t PartyOrganizationListViewItem__get_EquipFriendShipSkillChange(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipFriendShipSkillChange_k__BackingField;
}


System_Int64_array *PartyOrganizationListViewItem__get_EquipIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipIdList;
}


int32_t PartyOrganizationListViewItem__get_EquipLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v4; // x1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w22
  int32_t DisplayEquipIndex_k__BackingField; // w21
  int32_t ReturnTypeByQuestId; // w3
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x8
  int32_t v10; // w1
  __int64 v11; // x19
  struct System_Object_array *items; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D2C38F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C38F = 1;
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList,
                                                                 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      followerIndex = this->fields.followerIndex;
      DisplayEquipIndex_k__BackingField = this->fields._DisplayEquipIndex_k__BackingField;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( questRestrictionInfo )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      return FollowerInfo__getEquipLimitCount(
               followerInfo,
               followerIndex,
               DisplayEquipIndex_k__BackingField,
               ReturnTypeByQuestId,
               0);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    equipServantEntityList = this->fields.equipServantEntityList;
    if ( !equipServantEntityList
      || (IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList) == 0
      || (equipServantEntityList->fields._size <= this->fields._DisplayEquipIndex_k__BackingField
        ? (v10 = 0)
        : (v10 = this->fields._DisplayEquipIndex_k__BackingField),
          (IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          IsNullOrEmpty,
                                                                          v10,
                                                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C93D2C(IsNullOrEmpty, v4);
    }
    items = IsNullOrEmpty[2].fields._items;
    v11 = *(_QWORD *)&IsNullOrEmpty[2].fields._size;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = items;
    *(_QWORD *)&v15.fields.fakeValue = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
  }
}


int32_t PartyOrganizationListViewItem__get_EquipLimitCountMax(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *equipServantEntityList; // x0

  if ( (byte_4D2C390 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4D2C390 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return 0;
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C93D2C(equipServantEntityList, v3);
  }
  return *((_DWORD *)equipServantEntityList + 22);
}


System_String_o *PartyOrganizationListViewItem__get_EquipName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0

  if ( (byte_4D2C391 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C391 = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return v3;
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                equipServantEntityList,
                                                                                0,
                                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C93D2C(equipServantEntityList, v4);
  }
  return ServantEntity__getName((ServantEntity_o *)equipServantEntityList, -1, -1, 0, 0);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o PartyOrganizationListViewItem__get_EquipSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v3; // kr00_16
  struct System_Object_array *items; // x20
  __int64 v5; // x21
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4D2C38D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C38D = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  items = *(struct System_Object_array **)&v3.fields.currentCryptoKey;
  v5 = *(_QWORD *)&v3.fields.fakeValue;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
  {
    equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
    if ( !equipServantEntityList
      || (equipServantEntityList->fields._size <= this->fields._DisplayEquipIndex_k__BackingField
        ? (DisplayEquipIndex_k__BackingField = 0)
        : (DisplayEquipIndex_k__BackingField = this->fields._DisplayEquipIndex_k__BackingField),
          (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipServantEntityList,
                                                                                   DisplayEquipIndex_k__BackingField,
                                                                                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0) )
    {
      sub_1C93D2C(equipServantEntityList, v6);
    }
    items = equipServantEntityList->fields._items;
    v5 = *(_QWORD *)&equipServantEntityList->fields._size;
  }
  *(_QWORD *)&result.fields.currentCryptoKey = items;
  *(_QWORD *)&result.fields.fakeValue = v5;
  return result;
}


System_Collections_Generic_List_int__o *PartyOrganizationListViewItem__get_EquipSvtIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  __int64 v8; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D2C38E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C38E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    sub_1C93D2C(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)equipServantEntityList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__) )
  {
    if ( v14.fields._current )
    {
      klass = v14.fields._current[1].klass;
      monitor = v14.fields._current[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = klass;
      *(_QWORD *)&v15.fields.fakeValue = monitor;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
      if ( !v3 )
        sub_1C93D2C(v8, (unsigned int)v8);
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(v8, (unsigned int)v8);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v8;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
  return v3;
}


EquipTargetInfo_o *PartyOrganizationListViewItem__get_EquipTarget1(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getEquipTarget1(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
}


System_Collections_Generic_List_UserServantEntity__o *PartyOrganizationListViewItem__get_EquipUserServantEntityList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserServantEntityList;
}


int64_t PartyOrganizationListViewItem__get_EquipUserSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsNullOrEmpty; // w8
  int64_t result; // x0
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w1
  __int128 v8; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4D2C38C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2C38C = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList,
                    0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    equipUserServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
    if ( !equipUserServantEntityList
      || (equipUserServantEntityList->fields._size <= this->fields._DisplayEquipIndex_k__BackingField
        ? (DisplayEquipIndex_k__BackingField = 0)
        : (DisplayEquipIndex_k__BackingField = this->fields._DisplayEquipIndex_k__BackingField),
          (equipUserServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                       equipUserServantEntityList,
                                                                                       DisplayEquipIndex_k__BackingField,
                                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C93D2C(equipUserServantEntityList, v3);
    }
    v8 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
    *(_OWORD *)&v10.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v9 = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v9, 0);
  }
  return result;
}


EventMargeItemUpValInfo_array *PartyOrganizationListViewItem__get_EventUpValItemList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUpValItemList;
}


int32_t PartyOrganizationListViewItem__get_ExceedCount(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.exceedCount;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getExceedCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
}


int64_t PartyOrganizationListViewItem__get_FatigureTime(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigureTime;
}


FollowerInfo_o *PartyOrganizationListViewItem__get_FollowerData(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.followerInfo;
}


int32_t PartyOrganizationListViewItem__get_FrameType(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.frameType;
}


bool PartyOrganizationListViewItem__get_HaveIndividualityServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.haveIndividualityServant;
}


int32_t PartyOrganizationListViewItem__get_InitPos(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._InitPos_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsAllOutBattle(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsAllOutBattle_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsClearedWave(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsConvertOverwriteImage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isConvertOverwriteImage;
}


bool PartyOrganizationListViewItem__get_IsDataLost(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDataLost_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsDisappearEquip(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisappearEquip_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsDisappearSvt(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDisappearSvt_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsDispCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDispCanGetBuddyPoint_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsDispSvtPoint(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDispSvtPoint_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsDuplicateBonus(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDuplicateBonus_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsEmpty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return !this->fields.userServantEntity && !this->fields.isFollower;
}


bool PartyOrganizationListViewItem__get_IsErrorNeedIndividuality(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsErrorNeedIndividuality_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsEventUpVal(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventUpVal;
}


bool PartyOrganizationListViewItem__get_IsFatigureRecover(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFatigureRecover;
}


bool PartyOrganizationListViewItem__get_IsFixMultipleNpc(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixMultipleNpc;
}


bool PartyOrganizationListViewItem__get_IsFixMultipleNpcRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixMultipleNpcRestriction;
}


bool PartyOrganizationListViewItem__get_IsFixNpc(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFixNpc;
}


bool PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  return this->fields.index >= 1
      && (questRestrictionInfo = this->fields.questRestrictionInfo) != 0
      && questRestrictionInfo->fields.isFixedMyServantSingle;
}


bool PartyOrganizationListViewItem__get_IsFixedServantPositionAgreement(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedServantPositionAgreement;
}


bool PartyOrganizationListViewItem__get_IsFixedServantPositionRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedServantPositionRestriction;
}


bool PartyOrganizationListViewItem__get_IsFixedSupportPositionRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedSupportPositionRestriction;
}


bool PartyOrganizationListViewItem__get_IsFollower(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFollower;
}


bool PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionGrandServant || this->fields.isRestrictionActiveGrandBoard;
}


bool PartyOrganizationListViewItem__get_IsGrandServant(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandServant_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsLeave(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LOBYTE(userServantEntity) = UserServantEntity__IsLeave(userServantEntity, 0);
  return (char)userServantEntity;
}


bool PartyOrganizationListViewItem__get_IsMyServantOrNpcRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMyServantOrNpcRestriction;
}


bool PartyOrganizationListViewItem__get_IsNotClassBoardNpc(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotClassBoardNpc_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsNotSupportSingle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotSupportSingle_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsNpcEditablePos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && questRestrictionInfo->fields.isNpcEditablePos;
}


bool PartyOrganizationListViewItem__get_IsQuestRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *v3; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  return !this->fields.isFollower
      && (questRestrictionInfo = this->fields.questRestrictionInfo) != 0
      && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0)
      || this->fields.index >= 1 && (v3 = this->fields.questRestrictionInfo) != 0 && v3->fields.isFixedMyServantSingle
      || this->fields.isQuestRestriction;
}


bool PartyOrganizationListViewItem__get_IsQuestRestrictionWhole(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isQuestRestrictionWhole;
}


bool PartyOrganizationListViewItem__get_IsRestrictionActiveGrandBoard(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionActiveGrandBoard;
}


bool PartyOrganizationListViewItem__get_IsRestrictionGrandServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionGrandServant;
}


bool PartyOrganizationListViewItem__get_IsRestrictionMyServantPos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionMyServantPos;
}


bool PartyOrganizationListViewItem__get_IsRestrictionNeedStarting(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionNeedStarting;
}


bool PartyOrganizationListViewItem__get_IsRestrictionServantPos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionServantPos;
}


bool PartyOrganizationListViewItem__get_IsServantNumRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isServantNumRestriction;
}


bool PartyOrganizationListViewItem__get_IsStartingMember(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t NowPos_k__BackingField; // w19

  if ( (byte_4D2C39E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2C39E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return NowPos_k__BackingField <= v3->static_fields->DeckMainMemberMax;
}


bool PartyOrganizationListViewItem__get_IsSupportOnly(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  return !this->fields.isFollower
      && (questRestrictionInfo = this->fields.questRestrictionInfo) != 0
      && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0);
}


bool PartyOrganizationListViewItem__get_IsTempGrandServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTempGrandServant_k__BackingField;
}


bool PartyOrganizationListViewItem__get_IsUniqueIndividualityRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueIndividualityRestriction;
}


bool PartyOrganizationListViewItem__get_IsUniqueSvtRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueSvtRestriction;
}


bool PartyOrganizationListViewItem__get_IsUseGrandBoard(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseGrandBoard_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_Level(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.lv;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getLv(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
}


int32_t PartyOrganizationListViewItem__get_MainAtk(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userServantEntity || this->fields.followerInfo )
    return this->fields.atk;
  else
    return 0;
}


int32_t PartyOrganizationListViewItem__get_MainCost(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isFollower || !this->fields.servantEntity )
    return 0;
  else
    return this->fields.cost;
}


int32_t PartyOrganizationListViewItem__get_MainHp(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.userServantEntity || this->fields.followerInfo )
    return this->fields.hp;
  else
    return 0;
}


int32_t PartyOrganizationListViewItem__get_MargeAtk(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t atk; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v8; // w2
  int v9; // w22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2C388 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4D2C388 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( this->fields.userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0) )
      return this->fields.atk;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v9 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v12.fields._current )
          v9 += *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_108);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.atk + v9;
    }
LABEL_23:
    sub_1C93D2C(equipUserServantEntityList, v3);
  }
  if ( !this->fields.followerInfo )
    return 0;
  equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)BasicHelper__IsNullOrEmpty(
                                                                                                (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                                                                                                0);
  atk = this->fields.atk;
  if ( ((unsigned __int8)equipUserServantEntityList & 1) == 0 )
  {
    followerIndex = this->fields.followerIndex;
    followerInfo = this->fields.followerInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
      {
        equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
        v8 = (int)equipUserServantEntityList;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = 2;
    }
    if ( followerInfo )
    {
      atk += FollowerInfo__getEquipAtk(followerInfo, followerIndex, v8, 0);
      return atk;
    }
    goto LABEL_23;
  }
  return atk;
}


int32_t PartyOrganizationListViewItem__get_MargeCost(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  int32_t cost; // w19
  bool IsNullOrEmpty; // w0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0

  if ( (byte_4D2C38A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4D2C38A = 1;
  }
  if ( this->fields.isFollower || !this->fields.servantEntity )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0);
  cost = this->fields.cost;
  if ( !IsNullOrEmpty )
  {
    equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
    if ( !equipServantEntityList
      || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  equipServantEntityList,
                                                                                  0,
                                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
      sub_1C93D2C(equipServantEntityList, v6);
    }
    cost += LODWORD(equipServantEntityList[3].fields._syncRoot);
  }
  return cost;
}


int32_t PartyOrganizationListViewItem__get_MargeHp(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t hp; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v8; // w2
  int v9; // w22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2C389 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4D2C389 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( this->fields.userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0) )
      return this->fields.hp;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v9 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v12.fields._current )
          v9 += *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_108 + 4);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.hp + v9;
    }
LABEL_23:
    sub_1C93D2C(equipUserServantEntityList, v3);
  }
  if ( !this->fields.followerInfo )
    return 0;
  equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)BasicHelper__IsNullOrEmpty(
                                                                                                (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                                                                                                0);
  hp = this->fields.hp;
  if ( ((unsigned __int8)equipUserServantEntityList & 1) == 0 )
  {
    followerIndex = this->fields.followerIndex;
    followerInfo = this->fields.followerInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
      {
        equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
        v8 = (int)equipUserServantEntityList;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = 2;
    }
    if ( followerInfo )
    {
      hp += FollowerInfo__getEquipHp(followerInfo, followerIndex, v8, 0);
      return hp;
    }
    goto LABEL_23;
  }
  return hp;
}


int32_t PartyOrganizationListViewItem__get_MaxLevel(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( this->fields.userServantEntity )
    return UserServantEntity__getLevelMax(this->fields.userServantEntity, 0);
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getMaxLv(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
}


int32_t PartyOrganizationListViewItem__get_NowPos(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._NowPos_k__BackingField;
}


QuestRestrictionInfo_o *PartyOrganizationListViewItem__get_QuestRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t PartyOrganizationListViewItem__get_RarityId(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarityId;
}


ServantEntity_o *PartyOrganizationListViewItem__get_Servant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


ServantLeaderInfo_o *PartyOrganizationListViewItem__get_ServantLeader(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
}


System_String_o *PartyOrganizationListViewItem__get_ServantName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x1
  ServantAddMaster_o *v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  System_String_o *ServantName; // x0
  __int64 v10; // x1

  if ( (byte_4D2C385 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C385 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantAddMaster___);
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (ServantAddMaster_o *)Master_object;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, v4);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, v8);
  if ( !v5 )
    sub_1C93D2C(ServantName, v10);
  return ServantAddMaster__AddIdentifyText(v5, v7, ServantName, 0);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o PartyOrganizationListViewItem__get_SvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // kr00_16
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4D2C384 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C384 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  *(_QWORD *)&result.fields.fakeValue = *(_QWORD *)&v5.fields.fakeValue;
  *(_QWORD *)&result.fields.currentCryptoKey = *(_QWORD *)&v5.fields.currentCryptoKey;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    *(_QWORD *)&result.fields.currentCryptoKey = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    *(_QWORD *)&result.fields.fakeValue = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  return result;
}


int32_t PartyOrganizationListViewItem__get_SvtLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtLimitCount;
}


System_String_o *PartyOrganizationListViewItem__get_SvtNameText(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FollowerInfo_o *followerInfo; // x0
  _BOOL8 IsNpc; // x0
  __int64 v6; // x1
  struct FollowerInfo_o *v7; // x8

  if ( (byte_4D2C386 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19260/*"error"*/);
    byte_4D2C386 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1C93D2C(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19260/*"error"*/;
  }
}


int32_t PartyOrganizationListViewItem__get_SvtPoint(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SvtPoint_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_SvtPointRank(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtPointRank_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_TempOverwriteTreasureDeviceLv(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_TimesToRestart(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TimesToRestart_k__BackingField;
}


UserServantEntity_o *PartyOrganizationListViewItem__get_UserServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int32_t PartyOrganizationListViewItem__get_WarBoardPieceIndex(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.warBoardPieceIndex;
}


System_Int32_array *PartyOrganizationListViewItem__get_WaveEnemyClassIds(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._WaveEnemyClassIds_k__BackingField;
}


void PartyOrganizationListViewItem__set_CanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CanGetBuddyPoint_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_DisplayEquipIndex(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DisplayEquipIndex_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_DuplicationEquipmentFlagList(
        PartyOrganizationListViewItem_o *this,
        System_Boolean_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._DuplicationEquipmentFlagList_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationListViewItem__set_EquipFriendShipSkillChange(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipFriendShipSkillChange_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_InitPos(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._InitPos_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsAllOutBattle(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAllOutBattle_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsClearedWave(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsDataLost(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsDisappearEquip(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDisappearEquip_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsDisappearSvt(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDisappearSvt_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsDispCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispCanGetBuddyPoint_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsDispSvtPoint(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispSvtPoint_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsDuplicateBonus(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDuplicateBonus_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsErrorNeedIndividuality(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsErrorNeedIndividuality_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsGrandServant(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandServant_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsNotClassBoardNpc(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotClassBoardNpc_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsNotSupportSingle(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotSupportSingle_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsTempGrandServant(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTempGrandServant_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_IsUseGrandBoard(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseGrandBoard_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_NowPos(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NowPos_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_SvtPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtPoint_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_SvtPointRank(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtPointRank_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_TempOverwriteTreasureDeviceLv(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_TimesToRestart(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TimesToRestart_k__BackingField = value;
}


void PartyOrganizationListViewItem__set_WarBoardPieceIndex(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.warBoardPieceIndex = value;
}


void PartyOrganizationListViewItem__set_WaveEnemyClassIds(
        PartyOrganizationListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C3A9 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4D2C3A9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationListViewItem___c___ctor(PartyOrganizationListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__355_0(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C93D2C(this, 0);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__355_1(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4D2C3AA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C3AA = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__355_2(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C93D2C(this, 0);
  return script->fields.eventCampaignBonusDetailName;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__355_3(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4D2C3AB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2C3AB = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


int64_t PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__363_0(
        PartyOrganizationListViewItem___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id;
}


bool PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__363_1(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *id,
        const MethodInfo *method)
{
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2C3AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_long___);
    this = (PartyOrganizationListViewItem___c_o *)sub_1C93AD4(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4D2C3AC = 1;
  }
  if ( !id )
    sub_1C93D2C(this, id);
  klass = id->klass;
  v5 = *(unsigned __int16 *)&id->klass->_2.rank;
  if ( *(_WORD *)&id->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_long__long__c **)p_offset - 1) != System_Linq_IGrouping_long__long__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C69E5C(id, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(id, *(_QWORD *)(v7 + 8)) >= 1
      && System_Linq_Enumerable__Count_long_(
           (System_Collections_Generic_IEnumerable_TSource__o *)id,
           (const MethodInfo_31C4078 *)Method_System_Linq_Enumerable_Count_long___) > 1;
}


int64_t PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__363_2(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2C3AD & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem___c_o *)sub_1C93AD4(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4D2C3AD = 1;
  }
  if ( !group )
    sub_1C93D2C(this, group);
  klass = group->klass;
  v5 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_long__long__c **)p_offset - 1) != System_Linq_IGrouping_long__long__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C69E5C(group, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(int64_t (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__167_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C93D2C(this, 0);
  return drop->fields.eventId;
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__167_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C93D2C(this, 0);
  return drop->fields.eventId;
}


void PartyOrganizationListViewItem___c__DisplayClass181_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass181_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass181_0___SetDuplicationGrandQuestEquipmentMarkFlag_b__0(
        PartyOrganizationListViewItem___c__DisplayClass181_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *_4__this; // x8
  struct System_Int64_array *equipIdList; // x8
  __int64 i; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || (equipIdList = _4__this->fields.equipIdList) == 0 )
    sub_1C93D2C(this, id);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(equipIdList->max_length) )
    sub_1C93D34(this);
  return equipIdList->m_Items[i] == id;
}


void PartyOrganizationListViewItem___c__DisplayClass367_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass367_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass367_0___GetCanOrganizationGrandSvtIdList_b__0(
        PartyOrganizationListViewItem___c__DisplayClass367_0_o *this,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *individuality; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4D2C3AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationListViewItem___c__DisplayClass367_1__GetCanOrganizationGrandSvtIdList_b__1__);
    sub_1C93AD4(&PartyOrganizationListViewItem___c__DisplayClass367_1_TypeInfo);
    byte_4D2C3AE = 1;
  }
  v5 = sub_1C93D20(PartyOrganizationListViewItem___c__DisplayClass367_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v9 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationListViewItem___c__DisplayClass367_1__GetCanOrganizationGrandSvtIdList_b__1__,
    0);
  return BasicHelper__Any_int__51960056(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
}


void PartyOrganizationListViewItem___c__DisplayClass367_1___ctor(
        PartyOrganizationListViewItem___c__DisplayClass367_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass367_1___GetCanOrganizationGrandSvtIdList_b__1(
        PartyOrganizationListViewItem___c__DisplayClass367_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.classIndividuality == x;
}


void PartyOrganizationListViewItem___c__DisplayClass368_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass368_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass368_0___IsEnabledChangeGrandSvt_b__0(
        PartyOrganizationListViewItem___c__DisplayClass368_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  GrandGraphEntity_o *grandGraphEntity; // x0

  grandGraphEntity = this->fields.grandGraphEntity;
  if ( !grandGraphEntity )
    sub_1C93D2C(0, x);
  return GrandGraphEntity__CanSelectToGrand(grandGraphEntity, x, 0);
}