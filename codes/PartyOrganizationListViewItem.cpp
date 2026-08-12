void PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596C01B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    byte_596C01B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.warBoardPieceIndex = -1;
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
}


void PartyOrganizationListViewItem___ctor_40942508(
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
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_List_object__o *v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct FollowerInfo_o **p_followerInfo; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  ServantLeaderInfo_o *ReturnTypeByQuestId; // x0
  unsigned __int64 v62; // x1
  FollowerInfo_o *followerInfo; // x28
  int32_t v64; // w2
  int32_t v65; // w0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w8
  int32_t followerIndex; // w25
  FollowerInfo_o *v74; // x26
  int32_t v75; // w2
  ServantLeaderInfo_o *v76; // x25
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  int32_t userSvtId; // w1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int32_t v93; // w9
  int32_t v94; // w25
  FollowerInfo_o *v95; // x26
  int32_t v96; // w2
  int32_t v97; // w8
  int32_t v98; // w25
  FollowerInfo_o *v99; // x26
  int32_t v100; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  const MethodInfo *v108; // x1
  __int64 v109; // x2
  int32_t v110; // w25
  FollowerInfo_o *v111; // x26
  int32_t v112; // w3
  bool IsGrandServantRestriction; // w0
  int32_t InitPos_k__BackingField; // w1
  bool IsActiveGrandBoardRestriction; // w0
  int32_t v116; // w1
  const MethodInfo_47A29F8 *v117; // x0
  int userId; // w8
  ServantLeaderInfo_o *v119; // x23
  unsigned int v120; // w29
  ServantLeaderInfo_c **v121; // x8
  ServantLeaderInfo_c *v122; // x24
  int32_t ServantId; // w0
  __int64 v124; // x1
  __int64 v125; // x2
  void *generic_class; // x26
  void *typeMetadataHandle; // x27
  int32_t v128; // w25
  int32_t v129; // w26
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  System_Int32_array *ServantIndividuality; // x25
  int32_t Rarity; // w0
  bool IsNpcMulitipleOrOnly; // w0
  bool IsUseOldMaster; // w8
  struct QuestRestrictionInfo_o *v135; // x8
  __int64 v136; // x2
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v138; // x8
  __int64 v139; // x23
  __int64 v140; // x24
  UserEventDataLostEntity_o *v141; // x22
  __int64 v142; // x2
  UserEventDataLostEntity_o *v143; // x22
  struct ServantEntity_o *v144; // x8
  __int64 v145; // x23
  __int64 v146; // x24
  __int64 v147; // x23
  __int64 v148; // x24
  struct QuestRestrictionInfo_o *v149; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v151; // x23
  const MethodInfo *v152; // x1
  const MethodInfo *v153; // x2
  const MethodInfo *v154; // x1
  int32_t eventSvtPoint; // w21
  __int64 v156; // x2
  struct FollowerInfo_array *v157; // x24
  struct System_Boolean_array *v158; // x25
  int32_t v159; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v161; // x1
  const MethodInfo *v162; // x3
  __int64 v163; // x1
  __int64 v164; // x2
  QuestRestrictionInfo_o *v165; // x8
  bool IsNotClassBoard; // w20
  bool isOtherValidEventIdFilter; // w2
  QuestPhaseEntity_o *v168; // [xsp+10h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *v169; // [xsp+18h] [xbp-78h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  bool isWhole; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_596C01D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C01D = 1;
  }
  isWhole = 0;
  v169 = 0;
  entity = 0;
  v168 = 0;
  v21 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v21;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.warBoardPieceIndex = -1;
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity, 0, v35, v36, v37, v38, v39, v40);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.followerInfo,
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
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     (*p_questRestrictionInfo)->fields.questId,
                                                     0);
      v64 = (int)ReturnTypeByQuestId;
      if ( !followerInfo )
        goto LABEL_148;
    }
    else
    {
      v64 = 0;
      if ( !followerInfo )
        goto LABEL_148;
    }
  }
  else
  {
    v64 = 2;
    if ( !followerInfo )
      goto LABEL_148;
  }
  v65 = FollowerInfo__getIndex(followerInfo, followerClassId, v64, followerDeckId, followerGrandGraphId, 0);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v65;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = this->fields.followerGrandGraphId;
  followerIndex = this->fields.followerIndex;
  v74 = this->fields.followerInfo;
  this->fields.isOtherValidEventIdFilter = otherValidEventIdFilter;
  if ( v72 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     (*p_questRestrictionInfo)->fields.questId,
                                                     0);
      v75 = (int)ReturnTypeByQuestId;
      if ( !v74 )
        goto LABEL_148;
    }
    else
    {
      v75 = 0;
      if ( !v74 )
        goto LABEL_148;
    }
  }
  else
  {
    v75 = 2;
    if ( !v74 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = FollowerInfo__getServantLeaderInfo(v74, followerIndex, v75, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  v76 = ReturnTypeByQuestId;
  this->fields._IsGrandServant_k__BackingField = ServantLeaderInfo__get_IsGrandSvt(ReturnTypeByQuestId, 0);
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(v76, 0);
  BaseServantEntity = ServantLeaderInfo__get_BaseServantEntity(v76, 0);
  this->fields._BaseServantEntity_k__BackingField = BaseServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  ServantEntity = ServantLeaderInfo__GetServantEntity(v76, -1, 0);
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this->fields.cost = 0;
  ReturnTypeByQuestId = (ServantLeaderInfo_o *)ServantLeaderInfo__GetOverwriteStatus(v76, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  *(_QWORD *)&this->fields.hp = *(_QWORD *)&ReturnTypeByQuestId->fields.supportDeckId;
  userSvtId = ReturnTypeByQuestId->fields.userSvtId;
  this->fields.rarityId = ReturnTypeByQuestId->fields.userId;
  this->fields.actualRarity = userSvtId;
  ReturnTypeByQuestId = (ServantLeaderInfo_o *)ServantLeaderInfo__GetFrameType(v76, userSvtId, 0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields.frameType = (int)ReturnTypeByQuestId;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_148;
  v93 = this->fields.followerGrandGraphId;
  v94 = this->fields.followerIndex;
  v95 = this->fields.followerInfo;
  this->fields.classId = ServantEntity_k__BackingField->fields.classId;
  if ( v93 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     (*p_questRestrictionInfo)->fields.questId,
                                                     0);
      v96 = (int)ReturnTypeByQuestId;
      if ( !v95 )
        goto LABEL_148;
    }
    else
    {
      v96 = 0;
      if ( !v95 )
        goto LABEL_148;
    }
  }
  else
  {
    v96 = 2;
    if ( !v95 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = (ServantLeaderInfo_o *)FollowerInfo__getLimitCount(v95, v94, v96, 0);
  v97 = this->fields.followerGrandGraphId;
  v98 = this->fields.followerIndex;
  v99 = this->fields.followerInfo;
  this->fields.svtLimitCount = (int)ReturnTypeByQuestId;
  if ( v97 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     (*p_questRestrictionInfo)->fields.questId,
                                                     0);
      v100 = (int)ReturnTypeByQuestId;
      if ( !v99 )
        goto LABEL_148;
    }
    else
    {
      v100 = 0;
      if ( !v99 )
        goto LABEL_148;
    }
  }
  else
  {
    v100 = 2;
    if ( !v99 )
      goto LABEL_148;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v99, v98, v100, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = 0;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v108);
  if ( ReturnTypeByQuestId && *p_questRestrictionInfo )
  {
    v110 = this->fields.followerIndex;
    v111 = this->fields.followerInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(
                                                     (*p_questRestrictionInfo)->fields.questId,
                                                     0);
      v112 = (int)ReturnTypeByQuestId;
      if ( !v111 )
        goto LABEL_148;
    }
    else
    {
      v112 = 2;
      if ( !v111 )
        goto LABEL_148;
    }
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_48752332(
                                        v111,
                                        questRestrictionInfo,
                                        v110,
                                        v112,
                                        this->fields._InitPos_k__BackingField,
                                        &this->fields.isQuestRestrictionWhole,
                                        0);
  }
  else
  {
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0;
  *(_WORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v62 = (unsigned int)initPos;
  else
    v62 = (unsigned int)(index + 1);
  *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_DWORD *)&this->fields.isFixedServantPositionRestriction = 0;
  this->fields._InitPos_k__BackingField = v62;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( questRestrictionInfo )
  {
    IsGrandServantRestriction = QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, v62, 0);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    this->fields.isRestrictionGrandServant = IsGrandServantRestriction;
    IsActiveGrandBoardRestriction = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                      questRestrictionInfo,
                                      InitPos_k__BackingField,
                                      0);
    v116 = this->fields._InitPos_k__BackingField;
    this->fields.isRestrictionActiveGrandBoard = IsActiveGrandBoardRestriction;
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    ReturnTypeByQuestId = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                                                   questRestrictionInfo,
                                                   v116,
                                                   0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      this->fields.isMyServantOrNpcRestriction = 1;
      if ( !follower )
        goto LABEL_148;
      v117 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
      this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)SingletonMonoBehaviour_object___get_Instance(v117);
      if ( !ReturnTypeByQuestId )
        goto LABEL_148;
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)ReturnTypeByQuestId,
                                                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !ReturnTypeByQuestId )
        goto LABEL_148;
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)UserServantMaster__getOrganizationList(
                                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                                     0);
      if ( !ReturnTypeByQuestId )
        goto LABEL_148;
      userId = ReturnTypeByQuestId->fields.userId;
      v119 = ReturnTypeByQuestId;
      if ( userId >= 1 )
      {
        v120 = 0;
        while ( 1 )
        {
          if ( v120 >= userId )
            sub_2213CE4(ReturnTypeByQuestId);
          v121 = &v119->klass + (int)v120;
          v122 = v121[4];
          if ( !v122 )
            goto LABEL_148;
          ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)v121[4], -1, 0);
          generic_class = v122->_1.generic_class;
          typeMetadataHandle = v122->_1.typeMetadataHandle;
          v128 = ServantId;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v124, v125);
          *(_QWORD *)&v172.fields.currentCryptoKey = generic_class;
          *(_QWORD *)&v172.fields.fakeValue = typeMetadataHandle;
          v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v172, 0);
          DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                    (UserServantEntity_o *)v122,
                                                    -1,
                                                    questRestrictionInfo,
                                                    0);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                   questRestrictionInfo,
                                   v128,
                                   v129,
                                   DispLimitCountStageSealAfterIndexZero,
                                   0);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v122, 0);
          ReturnTypeByQuestId = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_50437900(
                                                         questRestrictionInfo,
                                                         &isWhole,
                                                         ServantIndividuality,
                                                         Rarity,
                                                         (int32_t)v122[1]._1.namespaze,
                                                         this->fields._InitPos_k__BackingField,
                                                         1,
                                                         0);
          if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
          {
            if ( !this->fields.isRestrictionGrandServant
              || (ReturnTypeByQuestId = (ServantLeaderInfo_o *)UserServantEntity__IsGrandServant(
                                                                 (UserServantEntity_o *)v122,
                                                                 0),
                  ((unsigned __int8)ReturnTypeByQuestId & 1) != 0) )
            {
              ReturnTypeByQuestId = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_50459340(
                                                             questRestrictionInfo,
                                                             ServantIndividuality,
                                                             this->fields._InitPos_k__BackingField,
                                                             0);
              if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
                break;
            }
          }
          userId = v119->fields.userId;
          if ( (int)++v120 >= userId )
            goto LABEL_78;
        }
        this->fields.haveIndividualityServant = 1;
      }
      goto LABEL_78;
    }
  }
  else
  {
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    *(_WORD *)&this->fields.isRestrictionGrandServant = 0;
  }
  if ( !*p_questRestrictionInfo
    || (IsNpcMulitipleOrOnly = QuestRestrictionInfo__IsNpcMulitipleOrOnly(*p_questRestrictionInfo, 0), !isFixNpc)
    || !IsNpcMulitipleOrOnly )
  {
    this->fields.isFixMultipleNpc = 0;
    goto LABEL_78;
  }
  ReturnTypeByQuestId = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
  this->fields.isFixMultipleNpc = 1;
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)ReturnTypeByQuestId, 0);
  ReturnTypeByQuestId = (ServantLeaderInfo_o *)*p_questRestrictionInfo;
  if ( IsUseOldMaster )
  {
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    if ( !BYTE2(ReturnTypeByQuestId[1].fields.exp) )
      goto LABEL_78;
  }
  else
  {
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    ReturnTypeByQuestId = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsEditablePos(
                                                   (QuestRestrictionInfo_o *)ReturnTypeByQuestId,
                                                   initPos,
                                                   0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
      goto LABEL_78;
  }
  if ( !follower )
    goto LABEL_148;
  this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
LABEL_78:
  if ( questRestrictionInfo )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62, v109);
    ReturnTypeByQuestId = (ServantLeaderInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)ReturnTypeByQuestId,
           &entity,
           questRestrictionInfo->fields.questId,
           questRestrictionInfo->fields.questPhase,
           0) )
    {
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)entity;
      if ( !entity )
        goto LABEL_148;
      if ( QuestPhaseEntity__IsUseGrandBoard(entity, 0)
        && (QuestRestrictionInfo__get_ActiveGrandBoardCount(questRestrictionInfo, 0) < 1
         || this->fields.isRestrictionActiveGrandBoard) )
      {
        this->fields._IsUseGrandBoard_k__BackingField = this->fields._IsGrandServant_k__BackingField;
      }
    }
  }
  v135 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v135 && v135->fields.isDataLostBattle )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62, v109);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v62, v136);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    ReturnTypeByQuestId = (ServantLeaderInfo_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v62, v136);
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)NetworkManager_TypeInfo;
    }
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_148;
    ReturnTypeByQuestId = (ServantLeaderInfo_o *)UserEventDataLostMaster__TryGetEntity(
                                                   (UserEventDataLostMaster_o *)Master_object,
                                                   &v169,
                                                   *(_QWORD *)(*(_QWORD *)&ReturnTypeByQuestId->fields.commandCardLimitCount
                                                             + 64LL),
                                                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                                                   0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      v138 = this->fields._ServantEntity_k__BackingField;
      if ( !v138 )
        goto LABEL_148;
      v139 = *(_QWORD *)&v138->fields.id.fields.currentCryptoKey;
      v140 = *(_QWORD *)&v138->fields.id.fields.fakeValue;
      v141 = v169;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62, v109);
      *(_QWORD *)&v173.fields.currentCryptoKey = v139;
      *(_QWORD *)&v173.fields.fakeValue = v140;
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v173,
                                                     0);
      if ( !v141 )
        goto LABEL_148;
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)UserEventDataLostEntity__IsRestart(
                                                     v141,
                                                     (int32_t)ReturnTypeByQuestId,
                                                     0);
      v143 = v169;
      v144 = this->fields._ServantEntity_k__BackingField;
      if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !v144 )
          goto LABEL_148;
        v145 = *(_QWORD *)&v144->fields.id.fields.currentCryptoKey;
        v146 = *(_QWORD *)&v144->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62, v142);
        *(_QWORD *)&v174.fields.currentCryptoKey = v145;
        *(_QWORD *)&v174.fields.fakeValue = v146;
        ReturnTypeByQuestId = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                       v174,
                                                       0);
        if ( !v143 )
          goto LABEL_148;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v143,
                                                         (int32_t)ReturnTypeByQuestId,
                                                         0);
      }
      else
      {
        if ( !v144 )
          goto LABEL_148;
        v147 = *(_QWORD *)&v144->fields.id.fields.currentCryptoKey;
        v148 = *(_QWORD *)&v144->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62, v142);
        *(_QWORD *)&v175.fields.currentCryptoKey = v147;
        *(_QWORD *)&v175.fields.fakeValue = v148;
        ReturnTypeByQuestId = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                       v175,
                                                       0);
        if ( !v143 )
          goto LABEL_148;
        if ( UserEventDataLostEntity__IsDataLost(v143, (int32_t)ReturnTypeByQuestId, 0) )
          this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1;
  v149 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v149 )
  {
    eventId = v149->fields.eventId;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v62, v109);
    ReturnTypeByQuestId = (ServantLeaderInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    v151 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0) )
    {
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_148;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v152) )
        {
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v154);
          if ( !ReturnTypeByQuestId )
            goto LABEL_148;
          eventSvtPoint = ReturnTypeByQuestId->fields.eventSvtPoint;
          this->fields._SvtPoint_k__BackingField = eventSvtPoint;
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v62);
          if ( !ReturnTypeByQuestId )
            goto LABEL_148;
          v157 = *(struct FollowerInfo_array **)&ReturnTypeByQuestId->fields.svtId.fields.currentCryptoKey;
          v158 = *(struct System_Boolean_array **)&ReturnTypeByQuestId->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v62, v156);
          *(_QWORD *)&v176.fields.currentCryptoKey = v157;
          *(_QWORD *)&v176.fields.fakeValue = v158;
          v159 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v176, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v151, eventId, eventSvtPoint, v159, 0);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v153);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v62) )
    goto LABEL_143;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v161);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  if ( ServantLeaderInfo__IsNpc(ReturnTypeByQuestId, 0) )
  {
    v165 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v163, v164);
      ReturnTypeByQuestId = (ServantLeaderInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v168,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0) )
        {
          ReturnTypeByQuestId = (ServantLeaderInfo_o *)v168;
          if ( !v168 )
            goto LABEL_148;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v168, 0);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v62);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v165) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(ReturnTypeByQuestId, 0);
          goto LABEL_147;
        }
      }
LABEL_148:
      sub_2213CDC(ReturnTypeByQuestId, v62);
    }
  }
  else
  {
LABEL_143:
    LOBYTE(v165) = 0;
  }
LABEL_147:
  isOtherValidEventIdFilter = this->fields.isOtherValidEventIdFilter;
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v165;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, isOtherValidEventIdFilter, v162);
}


void PartyOrganizationListViewItem___ctor_40968980(
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
  System_Collections_Generic_List_object__o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_object__o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x23
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 Instance; // x0
  __int64 v67; // x1
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  ServantLimitMaster_o *v84; // x27
  __int64 v85; // x28
  __int64 v86; // x29
  int32_t v87; // w28
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  int v94; // w8
  Il2CppObject *v95; // x0
  Il2CppObject *v96; // x25
  void *v97; // x27
  Il2CppClass *v98; // x26
  struct System_Int32_array *v99; // x0
  __int64 v100; // x2
  __int64 v101; // x3
  struct System_Int32_array **p_equipSvtIdList; // x26
  __int64 v103; // x0
  int32_t v104; // w1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int32_t v106; // w1
  __int64 v107; // x2
  struct UserServantEntity_o *v108; // x8
  __int64 v109; // x25
  __int64 v110; // x26
  UserServantEntity_o *v111; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x25
  __int64 v122; // x26
  int32_t v123; // w0
  int32_t OverwriteTempTreasureDeviceLv; // w0
  QuestRestrictionInfo_o *v125; // x25
  __int64 v126; // x2
  struct UserServantEntity_o *v127; // x8
  int32_t v128; // w26
  __int64 v129; // x27
  __int64 v130; // x28
  int32_t v131; // w27
  __int64 v132; // x2
  const MethodInfo *v133; // x3
  struct QuestRestrictionInfo_o *v134; // x8
  __int64 v135; // x2
  UserServantEntity_o *v136; // x9
  UserEventServantFatigueMaster_o *v137; // x24
  int32_t eventId; // w25
  __int64 v139; // x26
  __int64 v140; // x27
  int64_t v141; // x24
  struct QuestRestrictionInfo_o *v142; // x8
  int32_t allOutBattleGroupNo; // w24
  __int64 v144; // x2
  UserServantEntity_o *v145; // x8
  UserEventAlloutBattleMaster_o *v146; // x25
  __int64 v147; // x26
  __int64 v148; // x27
  __int64 v149; // x2
  Il2CppObject *Master_object; // x24
  __int64 v151; // x2
  UserServantEntity_o *v152; // x8
  __int64 v153; // x25
  __int64 v154; // x26
  UserEventDataLostEntity_o *v155; // x24
  __int64 v156; // x2
  UserEventDataLostEntity_o *v157; // x24
  UserServantEntity_o *v158; // x8
  __int64 v159; // x25
  __int64 v160; // x26
  __int64 v161; // x25
  __int64 v162; // x26
  bool IsGrandServantRestriction; // w0
  int32_t InitPos_k__BackingField; // w1
  bool IsActiveGrandBoardRestriction; // w0
  __int64 v166; // x1
  __int64 v167; // x2
  _BOOL4 isRestrictionGrandServant; // w8
  bool v169; // w8
  __int64 v170; // x2
  int v171; // w8
  __int64 v172; // x24
  unsigned int v173; // w29
  __int64 v174; // x8
  __int64 v175; // x25
  int32_t ServantId; // w0
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x27
  __int64 v180; // x28
  int32_t v181; // w26
  int32_t v182; // w27
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  int32_t v186; // w22
  EventServantPointRankMaster_o *v187; // x23
  __int64 v188; // x2
  DataManager_c *v189; // x0
  __int64 v190; // x2
  UserServantEntity_o *v191; // x8
  UserEventServantPointMaster_o *v192; // x24
  __int128 v193; // q0
  __int128 v194; // q1
  int v195; // w8
  int64_t v196; // x25
  int32_t *p_SvtPoint_k__BackingField; // x26
  int32_t v198; // w24
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v201; // x2
  UserServantEntity_o *v202; // x8
  __int128 v203; // q0
  __int128 v204; // q1
  int v205; // w8
  __int64 v206; // x2
  Il2CppObject *v207; // x22
  __int64 v208; // x2
  UserServantEntity_o *v209; // x8
  __int64 v210; // x23
  __int128 v211; // q0
  __int128 v212; // q1
  int v213; // w8
  PartyOrganizationListViewItem_o *v214; // x0
  const MethodInfo *v215; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v217; // [xsp+20h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v218; // [xsp+40h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v219; // [xsp+60h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v220; // [xsp+80h] [xbp-B0h]
  UserEventServantPointEntity_o *v221; // [xsp+A8h] [xbp-88h] BYREF
  bool isWhole; // [xsp+B4h] [xbp-7Ch] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+B8h] [xbp-78h] BYREF
  int64_t recoverAt; // [xsp+C0h] [xbp-70h] BYREF
  QuestPhaseEntity_o *v225; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v231; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v234; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v235; // 0:x0.16

  if ( (byte_596C01C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C01C = 1;
  }
  recoverAt = 0;
  v225 = 0;
  entity = 0;
  isWhole = 0;
  v221 = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v27;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.warBoardPieceIndex = -1;
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.followerInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.followerInfo, 0, v54, v55, v56, v57, v58, v59);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields._EquipFriendShipSkillChange_k__BackingField = isChangeFriendShipSvtEquipSkill;
  this->fields.isOtherValidEventIdFilter = otherValidEventIdFilter;
  if ( !userServantEntity )
    goto LABEL_156;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity(userServantEntity, 0);
  this->fields._BaseServantEntity_k__BackingField = BaseServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_156;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v83 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_156;
  v84 = (ServantLimitMaster_o *)Instance;
  v85 = *(_QWORD *)&v83[5].fields.currentCryptoKey;
  v86 = *(_QWORD *)&v83[5].fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v82);
  *(_QWORD *)&v226.fields.currentCryptoKey = v85;
  *(_QWORD *)&v226.fields.fakeValue = v86;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v226, 0);
  if ( !*p_userServantEntity )
    goto LABEL_156;
  v87 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068((*p_userServantEntity)[6], 0);
  if ( !v84 )
    goto LABEL_156;
  ServantLimitMaster__GetEntity(v84, v87, Instance, 0);
  if ( initPos )
    v94 = initPos;
  else
    v94 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v94;
  if ( !equipSvtIdList || (v95 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0)) == 0 )
  {
    v104 = 0;
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_19:
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_equipSvtIdList, v104, v88, v89, v90, v91, v92, v93);
    Instance = (__int64)UserServantEntity__GetOverwriteStatus(userServantEntity, questRestrictionInfo, 0);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField )
      goto LABEL_156;
    this->fields.classId = ServantEntity_k__BackingField->fields.classId;
    if ( !Instance )
      goto LABEL_156;
    this->fields.cost = *(_DWORD *)(Instance + 28);
    *(_QWORD *)&this->fields.hp = *(_QWORD *)(Instance + 16);
    this->fields.rarityId = *(_DWORD *)(Instance + 24);
    v106 = *(_DWORD *)(Instance + 40);
    this->fields.actualRarity = v106;
    Instance = UserServantEntity__GetFrameType(userServantEntity, v106, 0);
    v108 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v108 )
      goto LABEL_156;
    v109 = *(_QWORD *)&v108->fields.limitCount.fields.currentCryptoKey;
    v110 = *(_QWORD *)&v108->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v107);
    *(_QWORD *)&v227.fields.currentCryptoKey = v109;
    *(_QWORD *)&v227.fields.fakeValue = v110;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v227, 0);
    v111 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v111 )
      goto LABEL_156;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v111, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
    if ( questRestrictionInfo )
    {
      v121 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v122 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v119, v120);
      *(_QWORD *)&v228.fields.currentCryptoKey = v121;
      *(_QWORD *)&v228.fields.fakeValue = v122;
      v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v228, 0);
      OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
                                        questRestrictionInfo,
                                        v123,
                                        0);
    }
    else
    {
      OverwriteTempTreasureDeviceLv = 0;
    }
    v125 = this->fields.questRestrictionInfo;
    this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
    if ( v125 )
    {
      Instance = UserServantEntity__GetServantId(userServantEntity, -1, 0);
      v127 = this->fields.userServantEntity;
      if ( !v127 )
        goto LABEL_156;
      v128 = Instance;
      v129 = *(_QWORD *)&v127->fields.limitCount.fields.currentCryptoKey;
      v130 = *(_QWORD *)&v127->fields.limitCount.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v126);
      *(_QWORD *)&v229.fields.currentCryptoKey = v129;
      *(_QWORD *)&v229.fields.fakeValue = v130;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v229, 0);
      if ( !*p_userServantEntity )
        goto LABEL_156;
      v131 = Instance;
      Instance = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                   (UserServantEntity_o *)*p_userServantEntity,
                   -1,
                   questRestrictionInfo,
                   0);
      if ( !*p_userServantEntity )
        goto LABEL_156;
      this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestriction_50437612(
                                          v125,
                                          &this->fields.isQuestRestrictionWhole,
                                          v128,
                                          v131,
                                          Instance,
                                          this->fields.rarityId,
                                          (*p_userServantEntity)[25].fields.currentCryptoKey,
                                          this->fields._InitPos_k__BackingField,
                                          1,
                                          0);
    }
    else
    {
      *(_WORD *)&this->fields.isQuestRestriction = 0;
    }
    this->fields.fatigureTime = -1;
    *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
    this->fields.npcFollowerSvtId = 0;
    *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0;
    this->fields._IsClearedWave_k__BackingField = isClearedWave;
    this->fields.isFatigureRecover = 0;
    this->fields._TimesToRestart_k__BackingField = 0;
    this->fields._IsNotSupportSingle_k__BackingField = 0;
    this->fields._IsDispSvtPoint_k__BackingField = 0;
    this->fields._SvtPointRank_k__BackingField = 0;
    this->fields._SvtPoint_k__BackingField = 0;
    this->fields._IsNotClassBoardNpc_k__BackingField = 0;
    *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
    Instance = UserServantEntity__IsGrandServant(userServantEntity, 0);
    v134 = this->fields.questRestrictionInfo;
    this->fields._IsGrandServant_k__BackingField = Instance & 1;
    *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
    if ( !v134 )
      goto LABEL_155;
    if ( v134->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_156;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_156;
      v136 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_156;
      v137 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v139 = *(_QWORD *)&v136->fields.svtId.fields.currentCryptoKey;
      v140 = *(_QWORD *)&v136->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v135);
      *(_QWORD *)&v230.fields.currentCryptoKey = v139;
      *(_QWORD *)&v230.fields.fakeValue = v140;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v230, 0);
      if ( !v137 )
        goto LABEL_156;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v137,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0);
      if ( (Instance & 1) != 0 )
      {
        v141 = recoverAt;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v67, v132);
        Instance = NetworkManager__getTime(0);
        if ( v141 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v142 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_156;
    if ( v142->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v142->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_156;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v145 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_156;
      v146 = (UserEventAlloutBattleMaster_o *)Instance;
      v147 = *(_QWORD *)&v145->fields.svtId.fields.currentCryptoKey;
      v148 = *(_QWORD *)&v145->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v144);
      *(_QWORD *)&v231.fields.currentCryptoKey = v147;
      *(_QWORD *)&v231.fields.fakeValue = v148;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v231, 0);
      if ( !*p_questRestrictionInfo || !v146 )
        goto LABEL_156;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v146,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_156;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67, v132);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v67, v149);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v67, v149);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !*p_questRestrictionInfo || !Master_object )
        goto LABEL_156;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_object,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0);
      if ( (Instance & 1) != 0 )
      {
        v152 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_156;
        v153 = *(_QWORD *)&v152->fields.svtId.fields.currentCryptoKey;
        v154 = *(_QWORD *)&v152->fields.svtId.fields.fakeValue;
        v155 = entity;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v151);
        *(_QWORD *)&v232.fields.currentCryptoKey = v153;
        *(_QWORD *)&v232.fields.fakeValue = v154;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v232, 0);
        if ( !v155 )
          goto LABEL_156;
        Instance = UserEventDataLostEntity__IsRestart(v155, Instance, 0);
        v157 = entity;
        v158 = (UserServantEntity_o *)*p_userServantEntity;
        if ( (Instance & 1) != 0 )
        {
          if ( !v158 )
            goto LABEL_156;
          v159 = *(_QWORD *)&v158->fields.svtId.fields.currentCryptoKey;
          v160 = *(_QWORD *)&v158->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v156);
          *(_QWORD *)&v233.fields.currentCryptoKey = v159;
          *(_QWORD *)&v233.fields.fakeValue = v160;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v233, 0);
          if ( !v157 )
            goto LABEL_156;
          Instance = UserEventDataLostEntity__GetTimesToRestart(v157, Instance, 0);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          if ( !v158 )
            goto LABEL_156;
          v161 = *(_QWORD *)&v158->fields.svtId.fields.currentCryptoKey;
          v162 = *(_QWORD *)&v158->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67, v156);
          *(_QWORD *)&v234.fields.currentCryptoKey = v161;
          *(_QWORD *)&v234.fields.fakeValue = v162;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v234, 0);
          if ( !v157 )
            goto LABEL_156;
          Instance = UserEventDataLostEntity__IsDataLost(v157, Instance, 0);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( !questRestrictionInfo )
      goto LABEL_156;
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
    isRestrictionGrandServant = this->fields.isRestrictionGrandServant;
    this->fields.isRestrictionActiveGrandBoard = IsActiveGrandBoardRestriction;
    if ( isRestrictionGrandServant || IsActiveGrandBoardRestriction )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v166, v167);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !Instance )
        goto LABEL_156;
      if ( QuestPhaseMaster__TryGetEntity(
             (QuestPhaseMaster_o *)Instance,
             &v225,
             questRestrictionInfo->fields.questId,
             questRestrictionInfo->fields.questPhase,
             0) )
      {
        Instance = (__int64)v225;
        if ( !v225 )
          goto LABEL_156;
        v169 = QuestPhaseEntity__IsUseGrandBoard(v225, 0) && this->fields._IsGrandServant_k__BackingField;
        this->fields._IsUseGrandBoard_k__BackingField = v169;
      }
    }
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                 questRestrictionInfo,
                 this->fields._InitPos_k__BackingField,
                 0);
    if ( (Instance & 1) != 0 )
    {
      this->fields.isMyServantOrNpcRestriction = 1;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67, v170);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Instance )
        goto LABEL_156;
      Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_156;
      v171 = *(_DWORD *)(Instance + 24);
      v172 = Instance;
      if ( v171 >= 1 )
      {
        v173 = 0;
        while ( 1 )
        {
          if ( v173 >= v171 )
            goto LABEL_157;
          v174 = v172 + 8LL * (int)v173;
          v175 = *(_QWORD *)(v174 + 32);
          if ( !v175 )
            goto LABEL_156;
          ServantId = UserServantEntity__GetServantId(*(UserServantEntity_o **)(v174 + 32), -1, 0);
          v179 = *(_QWORD *)(v175 + 96);
          v180 = *(_QWORD *)(v175 + 104);
          v181 = ServantId;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v177, v178);
          *(_QWORD *)&v235.fields.currentCryptoKey = v179;
          *(_QWORD *)&v235.fields.fakeValue = v180;
          v182 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v235, 0);
          DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                    (UserServantEntity_o *)v175,
                                                    -1,
                                                    questRestrictionInfo,
                                                    0);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                   questRestrictionInfo,
                                   v181,
                                   v182,
                                   DispLimitCountStageSealAfterIndexZero,
                                   0);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v175, 0);
          Instance = QuestRestrictionInfo__IsRestriction_50437900(
                       questRestrictionInfo,
                       &isWhole,
                       ServantIndividuality,
                       Rarity,
                       *(_DWORD *)(v175 + 400),
                       this->fields._InitPos_k__BackingField,
                       1,
                       0);
          if ( (Instance & 1) == 0 )
          {
            if ( !this->fields.isRestrictionGrandServant
              || (Instance = UserServantEntity__IsGrandServant((UserServantEntity_o *)v175, 0), (Instance & 1) != 0) )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_50459340(
                           questRestrictionInfo,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0);
              if ( (Instance & 1) == 0 )
                break;
            }
          }
          v171 = *(_DWORD *)(v172 + 24);
          if ( (int)++v173 >= v171 )
            goto LABEL_120;
        }
        this->fields.haveIndividualityServant = 1;
      }
    }
LABEL_120:
    if ( !*p_questRestrictionInfo )
      goto LABEL_156;
    v186 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67, v170);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_156;
    v187 = (EventServantPointRankMaster_o *)Instance;
    Instance = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v186, 0);
    if ( (Instance & 1) != 0 )
    {
      v189 = DataManager_TypeInfo;
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !*(&v189->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v189, v67, v188);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v191 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_156;
      v192 = (UserEventServantPointMaster_o *)Instance;
      v193 = *(_OWORD *)&v191->fields.userId.fields.currentCryptoKey;
      v194 = *(_OWORD *)&v191->fields.userId.fields.fakeValue;
      v195 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v220.fields.currentCryptoKey = v193;
      *(_OWORD *)&v220.fields.fakeValue = v194;
      if ( !v195 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v67, v190);
      v219 = v220;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v219, 0);
      if ( !*p_userServantEntity )
        goto LABEL_156;
      v196 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0);
      if ( !v192 )
        goto LABEL_156;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v192, &v221, v196, v186, Instance, 0) )
      {
        Instance = (__int64)v221;
        if ( !v221 )
          goto LABEL_156;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v221, 0);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_156;
      v198 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v187, v186, v198, SvtId, 0);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v186, v201);
    }
    v202 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_156;
    v203 = *(_OWORD *)&v202->fields.id.fields.currentCryptoKey;
    v204 = *(_OWORD *)&v202->fields.id.fields.fakeValue;
    v205 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v220.fields.currentCryptoKey = v203;
    *(_OWORD *)&v220.fields.fakeValue = v204;
    if ( !v205 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v67, v188);
    v218 = v220;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v218, 0) >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67, v206);
      v207 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_2213B20(long___TypeInfo, 1);
      v209 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_156;
      v210 = Instance;
      v211 = *(_OWORD *)&v209->fields.id.fields.currentCryptoKey;
      v212 = *(_OWORD *)&v209->fields.id.fields.fakeValue;
      v213 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v220.fields.currentCryptoKey = v211;
      *(_OWORD *)&v220.fields.fakeValue = v212;
      if ( !v213 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v67, v208);
      v217 = v220;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v217, 0);
      if ( !v210 )
        goto LABEL_156;
      if ( !*(_DWORD *)(v210 + 24) )
LABEL_157:
        sub_2213CE4(Instance);
      *(_QWORD *)(v210 + 32) = Instance;
      if ( !v207 )
        goto LABEL_156;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v207,
              (System_Int64_array *)v210,
              (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
      {
LABEL_154:
        this->fields._IsDisappearSvt_k__BackingField = 1;
        goto LABEL_155;
      }
    }
    Instance = (__int64)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0) )
        goto LABEL_154;
LABEL_155:
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, this->fields.isOtherValidEventIdFilter, v133);
      return;
    }
LABEL_156:
    sub_2213CDC(Instance, v67);
  }
  v96 = v95;
  v97 = &int___TypeInfo;
  v98 = int___TypeInfo;
  v99 = (struct System_Int32_array *)sub_2213BB4(v95, int___TypeInfo);
  if ( v99 )
  {
    v97 = int___TypeInfo;
    this->fields.equipSvtIdList = v99;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v103 = sub_2213BB4(v96, v97);
    if ( v103 )
    {
      v104 = v103;
      goto LABEL_19;
    }
  }
  else
  {
    sub_221405C(v96, v98, v100, v101);
  }
  v214 = (PartyOrganizationListViewItem_o *)sub_221405C(v96, v97, v88, v89);
  PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(v214, v215);
}


void PartyOrganizationListViewItem___ctor_40980060(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x26
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int v66; // w1
  void *Instance; // x0
  __int64 v68; // x1
  Il2CppObject *MasterData_object; // x22
  int v70; // w8
  _DWORD *v71; // x22
  unsigned int v72; // w29
  char *v73; // x8
  __int64 v74; // x23
  int32_t ServantId; // w0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x25
  __int64 v79; // x26
  int32_t v80; // w24
  int32_t v81; // w25
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  __int64 v85; // x1
  __int64 v86; // x2
  DataManager_c *v87; // x0
  int v88; // w9
  __int64 v89; // x1
  DataManager_c *v90; // x0
  int v91; // w9
  bool v92; // w8
  __int64 v93; // x1
  __int64 v94; // x2
  const MethodInfo *v95; // x3
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t eventId; // w21
  const MethodInfo *v98; // x2
  QuestPhaseEntity_o *v101; // [xsp+8h] [xbp-78h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  bool isWhole; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v14 = isFollower;
  v15 = otherValidEventIdFilter;
  if ( (byte_596C01E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C01E = 1;
  }
  isWhole = 0;
  v101 = 0;
  entity = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.warBoardPieceIndex = -1;
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity, 0, v30, v31, v32, v33, v34, v35);
  this->fields.followerInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.followerInfo, 0, v36, v37, v38, v39, v40, v41);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.setupInfo = setupInfo;
  this->fields.isFollower = v14;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.isOtherValidEventIdFilter = v15;
  this->fields._ServantEntity_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    0,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  if ( initPos )
    v66 = initPos;
  else
    v66 = index + 1;
  *(_QWORD *)&this->fields.rarityId = 0;
  this->fields._InitPos_k__BackingField = v66;
  this->fields._NowPos_k__BackingField = index + 1;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  *(_WORD *)&this->fields.isRestrictionGrandServant = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = 0;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = 0;
  if ( !questRestrictionInfo )
    goto LABEL_47;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(questRestrictionInfo, v66, 0) )
  {
    this->fields.frameType = 9;
    this->fields.isMyServantOrNpcRestriction = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_58;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          sub_2213CE4(Instance);
        v73 = (char *)&v71[2 * v72];
        this->fields._IsGrandServant_k__BackingField = 0;
        this->fields._IsUseGrandBoard_k__BackingField = 0;
        v74 = *((_QWORD *)v73 + 4);
        if ( !v74 )
          goto LABEL_58;
        ServantId = UserServantEntity__GetServantId(*((UserServantEntity_o **)v73 + 4), -1, 0);
        v78 = *(_QWORD *)(v74 + 96);
        v79 = *(_QWORD *)(v74 + 104);
        v80 = ServantId;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76, v77);
        *(_QWORD *)&v104.fields.currentCryptoKey = v78;
        *(_QWORD *)&v104.fields.fakeValue = v79;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v104, 0);
        DispLimitCountStageSealAfterIndexZero = UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                  (UserServantEntity_o *)v74,
                                                  -1,
                                                  questRestrictionInfo,
                                                  0);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v80,
                                 v81,
                                 DispLimitCountStageSealAfterIndexZero,
                                 0);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v74, 0);
        Instance = (void *)QuestRestrictionInfo__IsRestriction_50437900(
                             questRestrictionInfo,
                             &isWhole,
                             ServantIndividuality,
                             Rarity,
                             *(_DWORD *)(v74 + 400),
                             this->fields._InitPos_k__BackingField,
                             1,
                             0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          if ( !this->fields.isRestrictionGrandServant
            || (Instance = (void *)UserServantEntity__IsGrandServant((UserServantEntity_o *)v74, 0),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_50459340(
                                 questRestrictionInfo,
                                 ServantIndividuality,
                                 this->fields._InitPos_k__BackingField,
                                 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              break;
          }
        }
        v70 = v71[6];
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
      v90 = DataManager_TypeInfo;
      this->fields.frameType = 9;
      v91 = *(&v90->_2.cctor_finished + 1);
      this->fields.isRestrictionActiveGrandBoard = 1;
      if ( !v91 )
        j_il2cpp_runtime_class_init_0(v90, v89, v60);
      Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !Instance )
        goto LABEL_58;
      if ( !QuestPhaseMaster__TryGetEntity(
              (QuestPhaseMaster_o *)Instance,
              &v101,
              questRestrictionInfo->fields.questId,
              questRestrictionInfo->fields.questPhase,
              0) )
        goto LABEL_48;
      Instance = v101;
      if ( !v101 )
        goto LABEL_58;
      goto LABEL_45;
    }
LABEL_47:
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    this->fields.frameType = 9;
    goto LABEL_48;
  }
  v87 = DataManager_TypeInfo;
  this->fields.frameType = 9;
  v88 = *(&v87->_2.cctor_finished + 1);
  this->fields.isRestrictionGrandServant = 1;
  if ( !v88 )
    j_il2cpp_runtime_class_init_0(v87, v85, v86);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    v92 = QuestPhaseEntity__IsUseGrandBoard((QuestPhaseEntity_o *)Instance, 0)
       && this->fields._IsGrandServant_k__BackingField;
    this->fields._IsUseGrandBoard_k__BackingField = v92;
  }
LABEL_48:
  this->fields.commandCodeIdList = 0;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList, 0, v60, v61, v62, v63, v64, v65);
  *(_WORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields.fatigureTime = -1;
  v96 = this->fields.questRestrictionInfo;
  this->fields.isRestrictionServantPos = 0;
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  *(_DWORD *)&this->fields.isUniqueIndividualityRestriction = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  this->fields._IsTempGrandServant_k__BackingField = 0;
  if ( !v96 )
    goto LABEL_54;
  eventId = v96->fields.eventId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v93, v94);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_58:
    sub_2213CDC(Instance, v68);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v98);
  }
LABEL_54:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, this->fields.isOtherValidEventIdFilter, v95);
}


void PartyOrganizationListViewItem___ctor_40981588(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x27
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x1
  __int64 v56; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v58; // x1
  Il2CppObject *Entity; // x24
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x24
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int32_t MasterName_k__BackingField; // w8
  const MethodInfo_47A29F8 *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  const MethodInfo *v82; // x3
  int v83; // w8

  if ( (byte_596C01F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C01F = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.warBoardPieceIndex = -1;
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity, 0, v31, v32, v33, v34, v35, v36);
  this->fields.questRestrictionInfo = questRestriction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestriction,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.followerInfo = follower;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.followerInfo,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)eventUpValSetupInfo,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55, v56);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields._ServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)Entity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields._BaseServantEntity_k__BackingField = (struct ServantEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)Entity,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantLimitMaster__GetEntity(
                                                                  (ServantLimitMaster_o *)Master_object,
                                                                  svtId,
                                                                  limitCount,
                                                                  0);
  if ( !this->fields._ServantEntity_k__BackingField )
    goto LABEL_17;
  v72 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                                                  this->fields._ServantEntity_k__BackingField,
                                                                  this->fields.imageLimitCount,
                                                                  0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields.imageLimitCount = (int)Master_object;
  if ( !ServantEntity_k__BackingField
    || (this->fields.classId = ServantEntity_k__BackingField->fields.classId, !v72)
    || (MasterName_k__BackingField = (int32_t)v72->fields._MasterName_k__BackingField,
        v75 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__,
        this->fields.rarityId = MasterName_k__BackingField,
        this->fields.actualRarity = MasterName_k__BackingField,
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance(v75)) == 0)
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Master_object,
                                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0 )
  {
LABEL_17:
    sub_2213CDC(Master_object, v58);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_49706744(
                             (ServantExceedMaster_o *)Master_object,
                             svtId,
                             limitCount,
                             0,
                             isGrandServant,
                             0);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList, 0, v76, v77, v78, v79, v80, v81);
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  *(_DWORD *)&this->fields.isRestrictionNeedStarting = 0;
  this->fields.fatigureTime = -1;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0;
  if ( initPosition )
    v83 = initPosition;
  else
    v83 = index + 1;
  this->fields._InitPos_k__BackingField = v83;
  *(_WORD *)&this->fields.isFixMultipleNpcRestriction = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  this->fields._IsGrandServant_k__BackingField = isGrandServant;
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, 0, v82);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(
        PartyOrganizationListViewItem_o *this,
        System_Collections_Generic_List_EventMargeItemUpValInfo__o **infoList,
        bool isQuestStart,
        const MethodInfo *method)
{
  DataManager_c **v5; // x28
  int v6; // w8
  Il2CppObject *v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x20
  Il2CppObject *v11; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x23
  bool v13; // w19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v20; // x20
  __int64 v21; // x26
  int32_t v22; // w1
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct UserServantEntity_o *v26; // x8
  UserServantMaster_o *v27; // x25
  __int64 v28; // x20
  __int64 v29; // x26
  __int64 v30; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v32; // x1
  int32_t eventId; // w25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w26
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  EventMargeItemUpValInfo_o *v39; // x26
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v41; // x1
  int32_t v42; // w27
  Il2CppObject *Entity; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  DataManager_c **v46; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x28
  PartyOrganizationListViewItem___c_c *v48; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__358_0; // x20
  Il2CppObject *v51; // x29
  struct PartyOrganizationListViewItem___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x1
  __int64 v60; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x29
  PartyOrganizationListViewItem___c_c *v62; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *v63; // x8
  System_Func_object__bool__o *_9__358_1; // x20
  Il2CppObject *v65; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  __int64 v74; // x2
  Il2CppObject *v75; // x29
  PartyOrganizationListViewItem___c_c *v76; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *v77; // x8
  System_Func_object__object__o *_9__358_2; // x20
  Il2CppObject *v79; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  __int64 v87; // x1
  __int64 v88; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x28
  PartyOrganizationListViewItem___c_c *v90; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *v91; // x8
  System_Func_object__bool__o *_9__358_3; // x20
  Il2CppObject *v93; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  Il2CppObject *v101; // x20
  __int64 FriendshipBonusValue; // x0
  __int64 v103; // x1
  __int64 v104; // x1
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  System_Collections_Generic_List_object__o *v111; // x0
  struct System_Object_array *items; // x8
  _QWORD *v113; // x9
  __int64 size; // x10
  Il2CppClass **v115; // x8
  EventQuestMaster_o *v117; // [xsp+10h] [xbp-B0h]
  Il2CppObject *Master_object; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v121; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  v5 = &DataManager_TypeInfo;
  if ( (byte_596C04D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Single_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_0__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_1__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_2__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_3__);
    sub_2213A60(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C04D = 1;
  }
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v121, 0, sizeof(v121));
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, infoList, isQuestStart);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v7 )
    sub_2213CDC(Instance, v9);
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)v7,
                                                                         (int64_t)Instance[8].monitor,
                                                                         0);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( FriendshipUpCampaigns )
  {
    v117 = (EventQuestMaster_o *)v11;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v120,
      FriendshipUpCampaigns,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v13 = isQuestStart;
    v121 = v120;
    v120.fields._list = 0;
    *(_QWORD *)&v120.fields._index = &v121;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v121,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v14 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v121,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          return;
        }
        current = (EventCampaignEntity_o *)v121.fields._current;
        if ( !v121.fields._current )
          sub_2213CDC(v14, v15);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v121.fields._current[2].monitor;
        if ( !monitor || !monitor[1].monitor )
          goto LABEL_29;
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_2213CDC(v14, v15);
        v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
        *(_QWORD *)&v122.fields.currentCryptoKey = v20;
        *(_QWORD *)&v122.fields.fakeValue = v21;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v122, 0);
        if ( System_Linq_Enumerable__Contains_int_(
               monitor,
               v22,
               (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
LABEL_29:
          if ( !*(&(*v5)->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(*v5, v15, v16);
          v23 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
          v26 = this->fields.userServantEntity;
          if ( !v26 )
            sub_2213CDC(v23, v24);
          v27 = (UserServantMaster_o *)v23;
          v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
          v29 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25);
          *(_QWORD *)&v123.fields.currentCryptoKey = v28;
          *(_QWORD *)&v123.fields.fakeValue = v29;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v123, 0);
          if ( !v27 )
            sub_2213CDC(v30, (unsigned int)v30);
          HeroineData = UserServantMaster__getHeroineData(v27, v30, 0);
          if ( !HeroineData
            || (HeroineData = (UserServantEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0),
                ((unsigned __int8)HeroineData & 1) != 0) )
          {
            eventId = current->fields.eventId;
            if ( !v13 )
              break;
            questRestrictionInfo = this->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              sub_2213CDC(HeroineData, v32);
            questId = questRestrictionInfo->fields.questId;
            questPhase = questRestrictionInfo->fields.questPhase;
            v37 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !v37 )
              sub_2213CDC(0, v38);
            if ( !v117 )
              sub_2213CDC(v37, v38);
            if ( !EventQuestMaster__IsEventNotIncluded(
                    v117,
                    eventId,
                    questId,
                    questPhase,
                    7,
                    (int64_t)v37[8].monitor,
                    0) )
              break;
          }
        }
      }
      v39 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_48723060(v39, eventId, 0);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId(current, 0);
      if ( !v12 )
        sub_2213CDC(OnlyMaxFuncGroupId, v41);
      v42 = OnlyMaxFuncGroupId;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v12,
                 eventId,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_2213CDC(0, v44);
      v46 = v5;
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)Entity[7].monitor;
      if ( !v47 )
        sub_2213CDC(Entity, v44);
      if ( !v47[1].monitor )
        break;
      v48 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v44, v45);
        v48 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      static_fields = v48->static_fields;
      _9__358_0 = (System_Func_object__object__o *)static_fields->__9__358_0;
      if ( !_9__358_0 )
      {
        if ( !*(&v48->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v48, v44, v45);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        }
        v51 = (Il2CppObject *)static_fields->__9;
        _9__358_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__358_0,
          v51,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_0__,
          0);
        v52 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v52->__9__358_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__358_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v52->__9__358_0,
          (int32_t)_9__358_0,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
      }
      v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v47,
                                                                   (System_Func_TSource__TResult__o *)_9__358_0,
                                                                   (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v62 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v59, v60);
        v62 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      v63 = v62->static_fields;
      _9__358_1 = (System_Func_object__bool__o *)v63->__9__358_1;
      if ( !_9__358_1 )
      {
        if ( !*(&v62->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v62, v59, v60);
          v63 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        }
        v65 = (Il2CppObject *)v63->__9;
        _9__358_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__358_1,
          v65,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_1__,
          0);
        v66 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v66->__9__358_1 = (struct System_Func_string__bool__o *)_9__358_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v66->__9__358_1,
          (int32_t)_9__358_1,
          v67,
          v68,
          v69,
          v70,
          v71,
          v72);
        v13 = isQuestStart;
      }
      v75 = System_Linq_Enumerable__Single_object__59342384(
              v61,
              (System_Func_TSource__bool__o *)_9__358_1,
              (const MethodInfo_3897E30 *)Method_System_Linq_Enumerable_Single_string___);
      if ( !v47[1].monitor )
        goto LABEL_61;
      v76 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v73, v74);
        v76 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      v77 = v76->static_fields;
      _9__358_2 = (System_Func_object__object__o *)v77->__9__358_2;
      if ( !_9__358_2 )
      {
        if ( !*(&v76->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v76, v73, v74);
          v77 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        }
        v79 = (Il2CppObject *)v77->__9;
        _9__358_2 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__358_2,
          v79,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_2__,
          0);
        v80 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v80->__9__358_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__358_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v80->__9__358_2,
          (int32_t)_9__358_2,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
        v13 = isQuestStart;
      }
      v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v47,
                                                                   (System_Func_TSource__TResult__o *)_9__358_2,
                                                                   (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v90 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v87, v88);
        v90 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      v91 = v90->static_fields;
      _9__358_3 = (System_Func_object__bool__o *)v91->__9__358_3;
      if ( !_9__358_3 )
      {
        if ( !*(&v90->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v90, v87, v88);
          v91 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        }
        v93 = (Il2CppObject *)v91->__9;
        _9__358_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__358_3,
          v93,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__358_3__,
          0);
        v94 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v94->__9__358_3 = (struct System_Func_string__bool__o *)_9__358_3;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v94->__9__358_3,
          (int32_t)_9__358_3,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100);
        v13 = isQuestStart;
      }
      v101 = System_Linq_Enumerable__Single_object__59342384(
               v89,
               (System_Func_TSource__bool__o *)_9__358_3,
               (const MethodInfo_3897E30 *)Method_System_Linq_Enumerable_Single_string___);
LABEL_62:
      v5 = v46;
      FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !v39 )
        sub_2213CDC(FriendshipBonusValue, v103);
      EventMargeItemUpValInfo__SetFriendshipUpBonus(
        v39,
        eventId,
        FriendshipBonusValue,
        v42,
        (System_String_o *)v75,
        (System_String_o *)v101,
        current->fields.calcType,
        0);
      v111 = (System_Collections_Generic_List_object__o *)*infoList;
      if ( !*infoList
        || (items = v111->fields._items,
            v113 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
            ++v111->fields._version,
            !items) )
      {
        sub_2213CDC(v111, v104);
      }
      size = v111->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v111,
          (Il2CppObject *)v39,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
      }
      else
      {
        v115 = &items->obj.klass + size;
        v111->fields._size = size + 1;
        v115[4] = (Il2CppClass *)v39;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v115 + 4), (int32_t)v39, v105, v106, v107, v108, v109, v110);
      }
    }
    v75 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_61:
    v101 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_62;
  }
}


System_Int64_array *PartyOrganizationListViewItem__CheckDuplicationGrandServantEquipment(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *equipIdList; // x19
  PartyOrganizationListViewItem___c_c *v7; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_long__long__o *_9__366_0; // x20
  Il2CppObject *v10; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  PartyOrganizationListViewItem___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v23; // x9
  System_Func_object__bool__o *_9__366_1; // x20
  Il2CppObject *v25; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  PartyOrganizationListViewItem___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v38; // x9
  System_Func_object__long__o *_9__366_2; // x20
  Il2CppObject *v40; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0

  if ( (byte_596C04F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_long__long___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
    sub_2213A60(&System_Func_long__long__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_long__long___long__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_long__long___bool__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__366_0__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__366_1__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__366_2__);
    sub_2213A60(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_596C04F = 1;
  }
  if ( this->fields.isFollower
    || !this->fields._IsGrandServant_k__BackingField && !this->fields._IsTempGrandServant_k__BackingField
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0) )
  {
    return 0;
  }
  equipIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.equipIdList;
  v7 = PartyOrganizationListViewItem___c_TypeInfo;
  if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v3, v4);
    v7 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__366_0 = static_fields->__9__366_0;
  if ( !_9__366_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v3, v4);
      static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__366_0 = (System_Func_long__long__o *)sub_2213CCC(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__366_0,
      v10,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__366_0__,
      0);
    v11 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v11->__9__366_0 = _9__366_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__366_0, (int32_t)_9__366_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__GroupBy_long__long_(
          equipIdList,
          (System_Func_TSource__TKey__o *)_9__366_0,
          (const MethodInfo_388301C *)Method_System_Linq_Enumerable_GroupBy_long__long___);
  v21 = PartyOrganizationListViewItem___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v19, v20);
    v21 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  v23 = v21->static_fields;
  _9__366_1 = (System_Func_object__bool__o *)v23->__9__366_1;
  if ( !_9__366_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v19, v20);
      v23 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__366_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_IGrouping_long__long___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__366_1,
      v25,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__366_1__,
      0);
    v26 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v26->__9__366_1 = (struct System_Func_IGrouping_long__long___bool__o *)_9__366_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__366_1, (int32_t)_9__366_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Linq_Enumerable__Where_object_(
          v22,
          (System_Func_TSource__bool__o *)_9__366_1,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
  v36 = PartyOrganizationListViewItem___c_TypeInfo;
  v37 = v33;
  if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v34, v35);
    v36 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  v38 = v36->static_fields;
  _9__366_2 = (System_Func_object__long__o *)v38->__9__366_2;
  if ( !_9__366_2 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v34, v35);
      v38 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__366_2 = (System_Func_object__long__o *)sub_2213CCC(System_Func_IGrouping_long__long___long__TypeInfo);
    System_Func_object__long____ctor(
      _9__366_2,
      v40,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__366_2__,
      0);
    v41 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v41->__9__366_2 = (struct System_Func_IGrouping_long__long___long__o *)_9__366_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->__9__366_2, (int32_t)_9__366_2, v42, v43, v44, v45, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v37,
                                                               (System_Func_TSource__TResult__o *)_9__366_2,
                                                               (const MethodInfo_3890EA4 *)Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
  return System_Linq_Enumerable__ToArray_long_(
           v48,
           (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
}


void PartyOrganizationListViewItem__CheckRestriction(
        PartyOrganizationListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  void *ServantId; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w23
  __int64 v11; // x2
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w22
  __int64 v14; // x25
  __int64 v15; // x26
  QuestRestrictionInfo_o *questRestrictionInfo; // x24
  struct UserServantEntity_o *v17; // x8
  const MethodInfo *v18; // x2
  struct UserServantEntity_o *v19; // x8
  __int64 v20; // x25
  __int64 v21; // x26
  QuestRestrictionInfo_o *v22; // x24
  QuestRestrictionInfo_o *v23; // x24
  __int64 v24; // x2
  __int64 v25; // x25
  __int64 v26; // x26
  struct UserServantEntity_o *v27; // x8
  QuestRestrictionInfo_o *v28; // x24
  bool IsUniqueIndividuality_50441720; // w8
  QuestRestrictionInfo_o *v30; // x21
  int32_t v31; // w22
  const MethodInfo *v32; // x1
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  QuestRestrictionInfo_o *v34; // x24
  int32_t v35; // w23
  const MethodInfo *v36; // x1
  int32_t v37; // w26
  int32_t rarityId; // w25
  QuestRestrictionInfo_o *v39; // x24
  struct QuestRestrictionInfo_o *v40; // x8
  FollowerInfo_o *followerInfo; // x22
  System_Int32_array *NpcServantIndividualityFull; // x0
  QuestRestrictionInfo_o *v43; // x24
  int32_t v44; // w23
  System_Int32_array *v45; // x22
  const MethodInfo *v46; // x1
  int32_t followerIndex; // w22
  FollowerInfo_o *v48; // x24
  struct QuestRestrictionInfo_o *v49; // x23
  int32_t v50; // w5
  int32_t followerGrandGraphId; // w8
  int32_t v52; // w22
  FollowerInfo_o *v53; // x24
  struct QuestRestrictionInfo_o *v54; // x23
  int32_t v55; // w5
  bool IsUniqueIndividualityRestriction_48752968; // w0
  const MethodInfo *v57; // x1
  QuestRestrictionInfo_o *v58; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_50443328; // w8
  QuestRestrictionInfo_o *v61; // x0
  QuestRestrictionInfo_o *v62; // x21
  int32_t BaseServantId; // w0
  int32_t svtLimitCount; // w22
  int32_t v65; // w23
  const MethodInfo *v66; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_596C02B & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C02B = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    if ( !this->fields.questRestrictionInfo )
    {
      *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
      *(_DWORD *)&this->fields.isQuestRestriction = 0;
      goto LABEL_45;
    }
    ServantId = (void *)UserServantEntity__GetServantId(userServantEntity, -1, 0);
    if ( this->fields.userServantEntity )
    {
      v10 = (int)ServantId;
      ServantId = (void *)UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                            this->fields.userServantEntity,
                            -1,
                            this->fields.questRestrictionInfo,
                            0);
      v12 = this->fields.userServantEntity;
      if ( v12 )
      {
        v13 = (int)ServantId;
        v14 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v11);
        *(_QWORD *)&v67.fields.currentCryptoKey = v14;
        *(_QWORD *)&v67.fields.fakeValue = v15;
        ServantId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
        v17 = this->fields.userServantEntity;
        if ( v17 )
        {
          if ( questRestrictionInfo )
          {
            ServantId = (void *)QuestRestrictionInfo__IsRestriction_50437612(
                                  questRestrictionInfo,
                                  &this->fields.isQuestRestrictionWhole,
                                  v10,
                                  (int32_t)ServantId,
                                  v13,
                                  this->fields.rarityId,
                                  v17->fields.lv,
                                  this->fields._InitPos_k__BackingField,
                                  1,
                                  0);
            this->fields.isQuestRestriction = (unsigned __int8)ServantId & 1;
            if ( ((unsigned __int8)ServantId & 1) == 0 )
            {
              v19 = this->fields.userServantEntity;
              if ( !v19 )
                goto LABEL_87;
              v20 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
              v21 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
              v22 = this->fields.questRestrictionInfo;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v18);
              *(_QWORD *)&v68.fields.currentCryptoKey = v20;
              *(_QWORD *)&v68.fields.fakeValue = v21;
              ServantId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v68, 0);
              if ( !v22 )
                goto LABEL_87;
              this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  v22,
                                                  v10,
                                                  (int32_t)ServantId,
                                                  v13,
                                                  this->fields._InitPos_k__BackingField,
                                                  0,
                                                  0);
            }
            PartyOrganizationListViewItem__SetDuplicationGrandQuestEquipmentMarkFlag(this, partyItem, v18);
            ServantId = this->fields.userServantEntity;
            if ( ServantId )
            {
              v23 = this->fields.questRestrictionInfo;
              ServantId = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)ServantId, 0);
              if ( ServantId )
              {
                v25 = *((_QWORD *)ServantId + 2);
                v26 = *((_QWORD *)ServantId + 3);
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v24);
                *(_QWORD *)&v69.fields.currentCryptoKey = v25;
                *(_QWORD *)&v69.fields.fakeValue = v26;
                ServantId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0);
                if ( v23 )
                {
                  ServantId = (void *)QuestRestrictionInfo__IsUniqueServant_50440168(
                                        v23,
                                        (int32_t)ServantId,
                                        partyItem,
                                        num,
                                        -1,
                                        0);
                  v27 = this->fields.userServantEntity;
                  this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantId & 1;
                  if ( v27 )
                  {
                    v28 = this->fields.questRestrictionInfo;
                    ServantId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                          v27->fields.limitCount,
                                          0);
                    if ( v28 )
                    {
                      IsUniqueIndividuality_50441720 = QuestRestrictionInfo__IsUniqueIndividuality_50441720(
                                                         v28,
                                                         v10,
                                                         (int32_t)ServantId,
                                                         v13,
                                                         partyItem,
                                                         num,
                                                         -1,
                                                         0,
                                                         0);
                      ServantId = this->fields.userServantEntity;
                      this->fields.isUniqueIndividualityRestriction = IsUniqueIndividuality_50441720;
                      if ( ServantId )
                      {
                        v30 = this->fields.questRestrictionInfo;
                        ServantId = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)ServantId, 0);
                        if ( ServantId )
                        {
                          ServantId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)ServantId + 1),
                                                0);
                          if ( v30 )
                          {
                            QuestRestrictionInfo__CheckFixedServantPosition(
                              v30,
                              &this->fields.isFixedServantPositionRestriction,
                              &this->fields.isFixedServantPositionAgreement,
                              &this->fields.isRestrictionMyServantPos,
                              &this->fields.isRestrictionNeedStarting,
                              &this->fields.isRestrictionServantPos,
                              (int32_t)ServantId,
                              this->fields.svtLimitCount,
                              v13,
                              num,
                              0,
                              0);
LABEL_45:
                            this->fields.isFixedSupportPositionRestriction = 0;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_87:
    sub_2213CDC(ServantId, v9);
  }
  if ( !this->fields.followerInfo )
  {
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
    return;
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem) )
    goto LABEL_46;
  ServantId = this->fields.followerInfo;
  if ( !ServantId )
    goto LABEL_87;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ServantId, 0) && this->fields.questRestrictionInfo )
  {
    ServantId = PartyOrganizationListViewItem__get_ServantLeader(this, v9);
    if ( !ServantId )
      goto LABEL_87;
    v31 = ServantLeaderInfo__GetServantId((ServantLeaderInfo_o *)ServantId, -1, 0);
    ServantId = PartyOrganizationListViewItem__get_ServantLeader(this, v32);
    if ( !ServantId )
      goto LABEL_87;
    DispLimitCountStageSealAfterIndexZero = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(
                                              (ServantLeaderInfo_o *)ServantId,
                                              -1,
                                              0);
    v34 = this->fields.questRestrictionInfo;
    v35 = DispLimitCountStageSealAfterIndexZero;
    ServantId = PartyOrganizationListViewItem__get_ServantLeader(this, v36);
    if ( !ServantId )
      goto LABEL_87;
    v37 = *((_DWORD *)ServantId + 16);
    rarityId = this->fields.rarityId;
    ServantId = PartyOrganizationListViewItem__get_ServantLeader(this, v9);
    if ( !ServantId || !v34 )
      goto LABEL_87;
    ServantId = (void *)QuestRestrictionInfo__IsRestriction_50437612(
                          v34,
                          &this->fields.isQuestRestrictionWhole,
                          v31,
                          v37,
                          v35,
                          rarityId,
                          *((_DWORD *)ServantId + 17),
                          this->fields._InitPos_k__BackingField,
                          2,
                          0);
    this->fields.isQuestRestriction = (unsigned __int8)ServantId & 1;
    if ( ((unsigned __int8)ServantId & 1) == 0 )
    {
      ServantId = this->fields.questRestrictionInfo;
      if ( !ServantId )
        goto LABEL_87;
      ServantId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                            (QuestRestrictionInfo_o *)ServantId,
                            this->fields._InitPos_k__BackingField,
                            0);
      if ( ((unsigned __int8)ServantId & 1) != 0 )
      {
        v39 = this->fields.questRestrictionInfo;
        ServantId = PartyOrganizationListViewItem__get_ServantLeader(this, v9);
        if ( !ServantId || !v39 )
          goto LABEL_87;
        ServantId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                              v39,
                              v31,
                              *((_DWORD *)ServantId + 16),
                              v35,
                              this->fields._InitPos_k__BackingField,
                              1,
                              0);
        goto LABEL_58;
      }
    }
  }
  else
  {
LABEL_46:
    ServantId = PartyOrganizationListViewItem__get_ServantLeader(this, v9);
    if ( !ServantId )
      goto LABEL_59;
    ServantId = this->fields.followerInfo;
    if ( !ServantId )
      goto LABEL_87;
    ServantId = (void *)FollowerInfo__get_IsNpc((FollowerInfo_o *)ServantId, 0);
    if ( ((unsigned __int8)ServantId & 1) != 0 && (v40 = this->fields.questRestrictionInfo) != 0 )
    {
      followerInfo = this->fields.followerInfo;
      ServantId = (void *)FollowerInfo__GetReturnTypeByQuestId(v40->fields.questId, 0);
      if ( !followerInfo )
        goto LABEL_87;
      NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(followerInfo, 0, (int32_t)ServantId, 0);
      v43 = this->fields.questRestrictionInfo;
      v44 = this->fields.rarityId;
      v45 = NpcServantIndividualityFull;
      ServantId = PartyOrganizationListViewItem__get_ServantLeader(this, v46);
      if ( !ServantId || !v43 )
        goto LABEL_87;
      ServantId = (void *)QuestRestrictionInfo__IsRestriction_50437900(
                            v43,
                            &this->fields.isQuestRestrictionWhole,
                            v45,
                            v44,
                            *((_DWORD *)ServantId + 17),
                            this->fields._InitPos_k__BackingField,
                            3,
                            0);
      this->fields.isQuestRestriction = (unsigned __int8)ServantId & 1;
      if ( ((unsigned __int8)ServantId & 1) == 0 )
      {
        ServantId = this->fields.questRestrictionInfo;
        if ( !ServantId )
          goto LABEL_87;
        ServantId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(
                              (QuestRestrictionInfo_o *)ServantId,
                              this->fields._InitPos_k__BackingField,
                              0);
        if ( ((unsigned __int8)ServantId & 1) != 0 )
        {
          ServantId = this->fields.questRestrictionInfo;
          if ( !ServantId )
            goto LABEL_87;
          ServantId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_50459340(
                                (QuestRestrictionInfo_o *)ServantId,
                                v45,
                                this->fields._InitPos_k__BackingField,
                                0);
LABEL_58:
          this->fields.isQuestRestriction = (unsigned __int8)ServantId & 1;
        }
      }
    }
    else
    {
LABEL_59:
      *(_WORD *)&this->fields.isQuestRestriction = 0;
    }
  }
  followerIndex = this->fields.followerIndex;
  v48 = this->fields.followerInfo;
  v49 = this->fields.questRestrictionInfo;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( v49 )
    {
      ServantId = (void *)FollowerInfo__GetReturnTypeByQuestId(v49->fields.questId, 0);
      v50 = (int)ServantId;
      if ( !v48 )
        goto LABEL_87;
    }
    else
    {
      v50 = 0;
      if ( !v48 )
        goto LABEL_87;
    }
  }
  else
  {
    v50 = 2;
    if ( !v48 )
      goto LABEL_87;
  }
  ServantId = (void *)FollowerInfo__getUniqueSvtRestriction_48752776(v48, v49, followerIndex, partyItem, num, v50, 0);
  followerGrandGraphId = this->fields.followerGrandGraphId;
  v52 = this->fields.followerIndex;
  v53 = this->fields.followerInfo;
  v54 = this->fields.questRestrictionInfo;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantId & 1;
  if ( followerGrandGraphId <= 0 )
  {
    if ( v54 )
    {
      ServantId = (void *)FollowerInfo__GetReturnTypeByQuestId(v54->fields.questId, 0);
      v55 = (int)ServantId;
      if ( !v53 )
        goto LABEL_87;
    }
    else
    {
      v55 = 0;
      if ( !v53 )
        goto LABEL_87;
    }
  }
  else
  {
    v55 = 2;
    if ( !v53 )
      goto LABEL_87;
  }
  IsUniqueIndividualityRestriction_48752968 = FollowerInfo__IsUniqueIndividualityRestriction_48752968(
                                                v53,
                                                v54,
                                                v52,
                                                partyItem,
                                                num,
                                                v55,
                                                0);
  v58 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_48752968;
  if ( !v58 )
  {
    this->fields.isFixedSupportPositionRestriction = 0;
LABEL_86:
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
    return;
  }
  ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v57);
  IsFixedSupportPosition_50443328 = QuestRestrictionInfo__IsFixedSupportPosition_50443328(v58, num, ServantLeader, 0);
  v61 = this->fields.questRestrictionInfo;
  this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_50443328;
  if ( !v61 )
    goto LABEL_86;
  ServantId = (void *)QuestRestrictionInfo__IsUseOldMaster(v61, 0);
  if ( ((unsigned __int8)ServantId & 1) != 0 )
  {
    if ( !partyItem )
      goto LABEL_87;
    ServantId = PartyListViewItem__GetMember(partyItem, num, 0);
    if ( !ServantId )
      goto LABEL_87;
    if ( !*((_BYTE *)ServantId + 256) )
    {
      ServantId = this->fields.questRestrictionInfo;
      if ( !ServantId )
        goto LABEL_87;
      if ( !QuestRestrictionInfo__IsFixedServantPositionIncludeSupport((QuestRestrictionInfo_o *)ServantId, 0) )
        goto LABEL_86;
    }
  }
  v62 = this->fields.questRestrictionInfo;
  BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(this, v9);
  svtLimitCount = this->fields.svtLimitCount;
  v65 = BaseServantId;
  ServantId = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v66);
  if ( !v62 )
    goto LABEL_87;
  QuestRestrictionInfo__CheckFixedServantPosition(
    v62,
    &this->fields.isFixedServantPositionRestriction,
    &this->fields.isFixedServantPositionAgreement,
    &this->fields.isRestrictionMyServantPos,
    &this->fields.isRestrictionNeedStarting,
    &this->fields.isRestrictionServantPos,
    v65,
    svtLimitCount,
    (int32_t)ServantId,
    num,
    1,
    0);
}


int32_t PartyOrganizationListViewItem__ClearEquip(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v2; // x19
  struct System_Int64_array *equipIdList; // x8
  struct System_Int64_array *v4; // x1
  const MethodInfo *v5; // x3
  int32_t v6; // w20

  v2 = this;
  if ( (byte_596C02A & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_596C02A = 1;
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
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
        sub_2213CE4(this);
      }
LABEL_17:
      sub_2213CDC(this, v4);
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

  if ( (byte_596C020 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    byte_596C020 = 1;
  }
  index = idx;
  if ( idx < 0 )
    index = this->fields.index;
  v6 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor(v6, index, v7);
  if ( !v6 )
    sub_2213CDC(v8, v9);
  PartyOrganizationListViewItem__Set(v6, this, v10);
  if ( (idx & 0x80000000) == 0 )
  {
    v6->fields.index = idx;
    ListViewItem__SetSortIndex((ListViewItem_o *)v6, idx, 0);
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationListViewItem__CompMember(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool isCheckSupport,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v6; // x20
  struct FollowerInfo_o *followerInfo; // x8
  struct FollowerInfo_o *userId; // x9
  int32_t ServantId; // w20
  const MethodInfo *v10; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o *v12; // x9
  bool result; // w0
  __int128 v14; // q1
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q1
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v18; // x10
  int max_length; // w8
  int64_t *m_Items; // x9
  int64_t *v21; // x10
  __int64 v22; // x11
  __int64 v23; // t1
  __int64 v24; // t1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-50h]

  v6 = this;
  if ( (byte_596C02D & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C02D = 1;
  }
  if ( !item )
    goto LABEL_36;
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
      ServantId = PartyOrganizationListViewItem__get_ServantId(v6, (const MethodInfo *)item);
      if ( ServantId != PartyOrganizationListViewItem__get_ServantId(item, v10) )
        return 0;
    }
    return 1;
  }
  userServantEntity = v6->fields.userServantEntity;
  v12 = item->fields.userServantEntity;
  if ( userServantEntity == v12 )
  {
LABEL_22:
    if ( v6->fields._InitPos_k__BackingField == item->fields._InitPos_k__BackingField )
    {
      equipIdList = v6->fields.equipIdList;
      v18 = item->fields.equipIdList;
      if ( equipIdList )
      {
        if ( v18 )
        {
          max_length = equipIdList->max_length;
          if ( max_length != LODWORD(v18->max_length) )
            return 0;
          if ( max_length >= 1 )
          {
            m_Items = equipIdList->m_Items;
            v21 = v18->m_Items;
            do
            {
              v23 = *m_Items++;
              v22 = v23;
              v24 = *v21++;
              if ( v22 != v24 )
                return 0;
            }
            while ( --max_length );
          }
        }
      }
      else if ( !v18 )
      {
        return 1;
      }
      if ( v6->fields._EquipFriendShipSkillChange_k__BackingField == item->fields._EquipFriendShipSkillChange_k__BackingField )
        return 1;
    }
    return 0;
  }
  result = 0;
  if ( userServantEntity && v12 )
  {
    v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v14;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, isCheckSupport);
    v26 = v27;
    this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                &v26,
                                                0);
    v15 = item->fields.userServantEntity;
    if ( v15 )
    {
      v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v25.fields.fakeValue = v16;
      if ( this != (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                        &v25,
                                                        0) )
        return 0;
      goto LABEL_22;
    }
LABEL_36:
    sub_2213CDC(this, item);
  }
  return result;
}


void PartyOrganizationListViewItem__Empty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x3

  this->fields.userServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity, 0, v2, v3, v4, v5, v6, v7);
  this->fields.followerInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.followerInfo, 0, v9, v10, v11, v12, v13, v14);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0;
  *(_QWORD *)&this->fields.followerIndex = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  HIDWORD(this->fields.equipIdList) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v15, v16, v17, v18, v19, v20);
  this->fields._BaseServantEntity_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    0,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._ServantEntity_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  *(_QWORD *)&this->fields.rarityId = 0;
  *(_QWORD *)&this->fields.frameType = 9;
  this->fields.commandCodeIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList, 0, v33, v34, v35, v36, v37, v38);
  this->fields.fatigureTime = -1;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsGrandServant_k__BackingField = 0;
  this->fields._IsUseGrandBoard_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, 0, v39);
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
bool PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  void *equipServantEntityList; // x0
  int v6; // w23
  __int64 v7; // x2
  __int64 v8; // x19
  __int64 v9; // x20
  int32_t EquipLimitCount; // w0
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t DisplayEquipIndex_k__BackingField; // w22
  int32_t ReturnTypeByQuestId; // w3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_596C04C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C04C = 1;
  }
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    goto LABEL_28;
  if ( *((_DWORD *)equipServantEntityList + 6) <= index )
  {
    v6 = 0;
  }
  else
  {
    equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)equipServantEntityList,
                               index,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    if ( !equipServantEntityList )
      goto LABEL_28;
    v6 = *((_DWORD *)equipServantEntityList + 22);
  }
  equipServantEntityList = this->fields.equipUserServantEntityList;
  if ( !equipServantEntityList )
    goto LABEL_28;
  if ( *((_DWORD *)equipServantEntityList + 6) <= index )
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
    return v6 > 0 && EquipLimitCount >= v6;
  }
  equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)equipServantEntityList,
                             index,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipServantEntityList )
LABEL_28:
    sub_2213CDC(equipServantEntityList, *(_QWORD *)&index);
  v8 = *((_QWORD *)equipServantEntityList + 12);
  v9 = *((_QWORD *)equipServantEntityList + 13);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index, v7);
  *(_QWORD *)&v18.fields.currentCryptoKey = v8;
  *(_QWORD *)&v18.fields.fakeValue = v9;
  EquipLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  return v6 > 0 && EquipLimitCount >= v6;
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


System_Collections_Generic_List_UserServantGrandEntity__o *PartyOrganizationListViewItem__GetCanOrganizationGrandSvtIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_Collections_ICollection_o *monitor; // x23
  System_Collections_Generic_List_UserServantGrandEntity__o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *v15; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *v22; // x23
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x23
  __int64 v28; // x24
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  int32_t ServantId; // w25
  int32_t DispLimitCountStageSealAfter; // w27
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *v37; // x28
  int32_t v38; // w26
  void *v39; // x21
  Il2CppClass *v40; // x29
  int32_t v41; // w0
  int32_t v42; // w1
  ServantOverwriteStatus_o *OverwriteStatus_50203912; // x0
  __int64 v44; // x1
  ServantOverwriteStatus_o *v45; // x27
  QuestRestrictionInfo_o *v46; // x28
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  Il2CppClass *v50; // x21
  void *v51; // x28
  QuestRestrictionInfo_o *v52; // x27
  __int64 v53; // x0
  __int64 v54; // x1
  System_Int32_array *ServantIndividuality; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct System_Int32_array *targetVals; // x25
  System_Func_int__bool__o *v69; // x26
  struct UserServantGrandEntity_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_IEnumerator_T__o *v74; // x21
  System_Collections_Generic_IEnumerator_T__c *v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  RestrictionEntity_o *GrandServantRestrictionEntity; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v82; // [xsp+28h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_596C051 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__DisplayClass370_0__GetCanOrganizationGrandSvtIdList_b__0__);
    sub_2213A60(&PartyOrganizationListViewItem___c__DisplayClass370_0_TypeInfo);
    byte_596C051 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  entity = 0;
  v82 = 0;
  if ( !questRestrictionInfo )
    return 0;
  GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                    questRestrictionInfo,
                                    this->fields._InitPos_k__BackingField,
                                    0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_84;
  monitor = (System_Collections_ICollection_o *)Master_object[2].monitor;
  v9 = 0;
  if ( BasicHelper__IsNullOrEmpty(monitor, 0) || !GrandServantRestrictionEntity )
    return v9;
  v9 = (System_Collections_Generic_List_UserServantGrandEntity__o *)sub_2213CCC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !monitor )
LABEL_84:
    sub_2213CDC(Master_object, v7);
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)monitor,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v82 = Enumerator;
  if ( !Enumerator )
LABEL_57:
    sub_2213CDC(Enumerator, v14);
  v15 = Enumerator;
  while ( 1 )
  {
    klass = v15->klass;
    v17 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v19 = sub_224BC3C(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v15,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    v22 = v82;
    if ( !v82 )
      sub_2213CDC(v20, v21);
    v23 = v82->klass;
    v24 = *(unsigned __int16 *)&v82->klass->_2.rank;
    if ( *(_WORD *)&v82->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_26:
      v26 = sub_224BC3C(v82, System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            v22,
            *(_QWORD *)(v26 + 8));
    v28 = sub_2213CCC(PartyOrganizationListViewItem___c__DisplayClass370_0_TypeInfo);
    PartyOrganizationListViewItem___c__DisplayClass370_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass370_0_o *)v28,
      0);
    if ( !v27 )
      sub_2213CDC(v29, v30);
    if ( !v12 )
      sub_2213CDC(v29, v30);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                  v12,
                                                                  &entity,
                                                                  *(_QWORD *)(v27 + 32),
                                                                  (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      if ( !entity )
        sub_2213CDC(0, v14);
      ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)entity, -1, 0);
      if ( !entity )
        sub_2213CDC(0, v31);
      DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                       (UserServantEntity_o *)entity,
                                       -1,
                                       0,
                                       this->fields.questRestrictionInfo,
                                       0);
      v34 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
      v37 = entity;
      if ( !entity )
        sub_2213CDC(v34, v35);
      v38 = v34;
      v40 = entity[6].klass;
      v39 = entity[6].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
      *(_QWORD *)&v83.fields.currentCryptoKey = v40;
      *(_QWORD *)&v83.fields.fakeValue = v39;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v83, 0);
      v42 = LimitCountUtility__ConvertStageToLimitCount(v41, DispLimitCountStageSealAfter, 0, 0);
      OverwriteStatus_50203912 = UserServantEntity__GetOverwriteStatus_50203912((UserServantEntity_o *)v37, v42, 0);
      if ( !entity )
        sub_2213CDC(OverwriteStatus_50203912, v44);
      v45 = OverwriteStatus_50203912;
      v46 = this->fields.questRestrictionInfo;
      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
              0);
      if ( !v45 )
        sub_2213CDC(v47, v48);
      if ( !entity )
        sub_2213CDC(v47, v48);
      if ( !v46 )
        sub_2213CDC(v47, v48);
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)QuestRestrictionInfo__IsRestriction_50436376(
                                                                    v46,
                                                                    ServantId,
                                                                    v47,
                                                                    v38,
                                                                    v45->fields._Rarity_k__BackingField,
                                                                    (int32_t)entity[25].klass,
                                                                    1,
                                                                    0);
      if ( ((unsigned __int8)Enumerator & 1) == 0 )
      {
        if ( !entity )
          sub_2213CDC(Enumerator, v14);
        v50 = entity[6].klass;
        v51 = entity[6].monitor;
        v52 = this->fields.questRestrictionInfo;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v49);
        *(_QWORD *)&v84.fields.currentCryptoKey = v50;
        *(_QWORD *)&v84.fields.fakeValue = v51;
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v84, 0);
        if ( !v52 )
          sub_2213CDC(v53, v54);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v52, ServantId, v53, v38, 0);
        if ( !v28 )
          sub_2213CDC(ServantIndividuality, ServantIndividuality);
        *(_QWORD *)(v28 + 16) = ServantIndividuality;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v28 + 16),
          (int32_t)ServantIndividuality,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)BasicHelper__IsNullOrEmpty(
                                                                      (System_Collections_ICollection_o *)GrandServantRestrictionEntity->fields.targetVals,
                                                                      0);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
          goto LABEL_87;
        targetVals = GrandServantRestrictionEntity->fields.targetVals;
        if ( !targetVals )
          sub_2213CDC(Enumerator, v14);
        if ( !LODWORD(targetVals->max_length) )
          sub_2213CE4(Enumerator);
        if ( !targetVals->m_Items[0]
          || (v69 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v69,
                (Il2CppObject *)v28,
                Method_PartyOrganizationListViewItem___c__DisplayClass370_0__GetCanOrganizationGrandSvtIdList_b__0__,
                0),
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)BasicHelper__Any_int__58784608(
                                                                            targetVals,
                                                                            (System_Func_T__bool__o *)v69,
                                                                            (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248),
              ((unsigned __int8)Enumerator & 1) != 0) )
        {
LABEL_87:
          if ( !v9
            || (items = v9->fields._items,
                v71 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__,
                ++v9->fields._version,
                !items) )
          {
            sub_2213CDC(Enumerator, v14);
          }
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v9,
              (Il2CppObject *)v27,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v73[4] = (Il2CppClass *)v27;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), v27, v62, v63, v64, v65, v66, v67);
          }
        }
      }
    }
    v15 = v82;
    if ( !v82 )
      goto LABEL_57;
  }
  v74 = v82;
  if ( v82 )
  {
    v75 = v82->klass;
    v76 = *(unsigned __int16 *)&v82->klass->_2.rank;
    if ( *(_WORD *)&v82->klass->_2.rank )
    {
      v77 = &v75->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_64;
      }
      v78 = (__int64)&v75->vtable[*v77];
    }
    else
    {
LABEL_64:
      v78 = sub_224BC3C(v82, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8));
  }
  return v9;
}


System_Int32_array *PartyOrganizationListViewItem__GetCommandCardList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  System_Int32_array *result; // x0
  __int64 v5; // x1
  struct ServantEntity_o *v6; // x8
  struct System_Int32_array *cardIds; // x11
  il2cpp_array_size_t max_length; // x10
  __int64 v9; // x8
  __int64 v10; // x10
  int32_t *m_Items; // x11
  unsigned int v12; // w12

  if ( (byte_596C045 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596C045 = 1;
  }
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField || !ServantEntity_k__BackingField->fields.cardIds )
    return 0;
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, 3);
  v6 = this->fields._ServantEntity_k__BackingField;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0 )
LABEL_19:
    sub_2213CDC(result, v5);
  max_length = cardIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = (unsigned int)max_length & ~((int)max_length >> 31);
    v10 = (unsigned int)cardIds->max_length;
    m_Items = cardIds->m_Items;
    while ( v10 )
    {
      if ( (unsigned int)(*m_Items - 4) >= 0xFFFFFFFD )
      {
        if ( !result )
          goto LABEL_19;
        v12 = *m_Items - 1;
        if ( v12 >= LODWORD(result->max_length) )
          break;
        ++result->m_Items[v12];
      }
      --v9;
      ++m_Items;
      --v10;
      if ( !v9 )
        return result;
    }
    sub_2213CE4(result);
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x19
  int32_t ServantId; // w0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  ServantId = PartyOrganizationListViewItem__get_ServantId(this, method);
  return QuestRestrictionInfo__GetCorrectionIconId(questRestrictionInfo, ServantId, this->fields.isFollower, 0);
}


int32_t PartyOrganizationListViewItem__GetDispImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v8; // x1

  if ( this->fields.userServantEntity )
    return UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
             this->fields.userServantEntity,
             -1,
             this->fields.questRestrictionInfo,
             0);
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
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
  if ( !ServantLeaderInfo )
    sub_2213CDC(0, v8);
  return ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(ServantLeaderInfo, -1, 0);
}


int32_t PartyOrganizationListViewItem__GetDispLimitCountStageSealAfterIndexZero(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v8; // x1

  if ( this->fields.userServantEntity )
    return UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
             this->fields.userServantEntity,
             -1,
             this->fields.questRestrictionInfo,
             0);
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
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, ReturnTypeByQuestId, 0);
  if ( !ServantLeaderInfo )
    sub_2213CDC(0, v8);
  return ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(ServantLeaderInfo, -1, 0);
}


System_String_o *PartyOrganizationListViewItem__GetEquipFrameName(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x20
  struct System_Int64_array *equipIdList; // x8
  int max_length; // w9
  int v7; // w11
  Il2CppClass **v8; // x12
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x19
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_596C050 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_2213A60(&StringLiteral_7303/*"GRAND_SERVANT_EQUIP_FRAME_"*/);
    byte_596C050 = 1;
  }
  equipIdList = v4->fields.equipIdList;
  v14 = 0;
  if ( !equipIdList )
    sub_2213CDC(this, userSvtId);
  max_length = equipIdList->max_length;
  if ( max_length < 1 )
    return **(System_String_o ***)(qword_5984390 + 184);
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      sub_2213CE4(this);
    v8 = &equipIdList->obj.klass + v7++;
    if ( v8[4] == (Il2CppClass *)userSvtId )
      break;
    if ( (max_length & ~(max_length >> 31)) == v7 )
      return **(System_String_o ***)(qword_5984390 + 184);
  }
  v14 = v7;
  v10 = System_Int32__ToString((int32_t)&v14, 0);
  v13 = System_String__Concat_75651716((System_String_o *)StringLiteral_7303/*"GRAND_SERVANT_EQUIP_FRAME_"*/, v10, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  return LocalizationManager__Get(v13, 0);
}


System_Int64_array *PartyOrganizationListViewItem__GetEquipList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Array_o *equipIdList; // x0
  System_Int64_array *result; // x0
  Il2CppClass *v6; // x20
  System_Int64_array *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x3
  BalanceConfig_c *v10; // x0
  PartyOrganizationListViewItem_o *v11; // x0
  System_Collections_Generic_List_EventMargeItemUpValInfo__o **v12; // x1
  bool v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_596C02E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_596C02E = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0);
    if ( result )
    {
      v6 = long___TypeInfo;
      v7 = result;
      result = (System_Int64_array *)sub_2213BB4(result, long___TypeInfo);
      if ( !result )
      {
        v11 = (PartyOrganizationListViewItem_o *)sub_221405C(v7, v6, v8, v9);
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(v11, v12, v13, v14);
      }
    }
  }
  else
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      v10 = BalanceConfig_TypeInfo;
    }
    return (System_Int64_array *)sub_2213B20(long___TypeInfo, (unsigned int)v10->static_fields->SvtEquipMax);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventUpValInfo_o *v8; // x8

  v8 = this->fields.eventUpValInfo;
  *eventUpValInfo = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)eventUpValInfo,
    (int32_t)v8,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return this->fields.isEventUpVal;
}


System_String_o *PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_596C044 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C044 = 1;
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

  if ( (byte_596C043 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C043 = 1;
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
  __int64 v2; // x2
  UserServantEntity_o *userServantEntity; // x20
  UserServantGrandInfo_o *result; // x0
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UserServantGrandInfo_c *v10; // x0

  if ( (byte_596C04E & 1) == 0 )
  {
    sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_596C04E = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( this->fields._IsTempGrandServant_k__BackingField )
  {
    if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method, v2);
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
      v10 = UserServantGrandInfo_TypeInfo;
      if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method, v2);
        v10 = UserServantGrandInfo_TypeInfo;
      }
      return v10->static_fields->Empty;
    }
  }
  return result;
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

  if ( (byte_596C047 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C047 = 1;
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

  if ( (byte_596C048 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C048 = 1;
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


System_String_o *PartyOrganizationListViewItem__GetQuestRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v5; // x0
  struct QuestRestrictionInfo_o *v7; // x0
  System_String_o *v8; // x20
  System_String_o *ConfirmRestrictionMessage; // x1

  if ( (byte_596C040 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10674/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C040 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0) )
  {
    v5 = this->fields.questRestrictionInfo;
    if ( v5 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v5, 0);
LABEL_32:
    sub_2213CDC(v5, method);
  }
  if ( this->fields.index >= 1 )
  {
    v7 = this->fields.questRestrictionInfo;
    if ( v7 )
    {
      if ( v7->fields.isFixedMyServantSingle )
        return QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(v7, 0);
    }
  }
  if ( this->fields.isServantNumRestriction )
  {
    v5 = this->fields.questRestrictionInfo;
    if ( !v5 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v5, 0);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v5 = this->fields.questRestrictionInfo;
    if ( !v5 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v5, 0);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v5 = this->fields.questRestrictionInfo;
    if ( !v5 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcMessage(v5, 0);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v5 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10674/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v8 = (System_String_o *)v5;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0);
    return System_String__Concat_75651716(v8, ConfirmRestrictionMessage, 0);
  }
  else
  {
    v5 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
      method = 0;
    else
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
    if ( !v5 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetRestrictionMessage(v5, (int32_t)method, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *PartyOrganizationListViewItem__GetServantName(
        PartyOrganizationListViewItem_o *this,
        int32_t limitCount,
        bool isCommonName,
        const MethodInfo *method)
{
  int32_t maxLimitCount; // w21
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  void *ServantLeader; // x0
  __int64 v13; // x2
  Il2CppObject *Master_object; // x21
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x9
  __int64 v16; // x23
  __int64 v17; // x24
  int64_t v18; // x22
  __int64 v19; // x2
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  ServantLimitImageMaster_o *v21; // x20
  __int64 v22; // x22
  __int64 v23; // x23
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_596C035 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C035 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  entity = 0;
  if ( userServantEntity )
  {
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&limitCount,
        isCommonName);
    *(_QWORD *)&v26.fields.currentCryptoKey = v8;
    *(_QWORD *)&v26.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, *(const MethodInfo **)&limitCount) )
  {
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v10);
    if ( !ServantLeader )
      goto LABEL_35;
    maxLimitCount = *((_DWORD *)ServantLeader + 16);
  }
  if ( maxLimitCount != -1 )
  {
LABEL_26:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
    ServantLeader = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
    if ( ServantEntity_k__BackingField )
    {
      v21 = (ServantLimitImageMaster_o *)ServantLeader;
      v22 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      v23 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v19);
      *(_QWORD *)&v28.fields.currentCryptoKey = v22;
      *(_QWORD *)&v28.fields.fakeValue = v23;
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
      if ( v21 )
        return ServantLimitImageMaster__GetLimitCountSealedServantName(
                 v21,
                 (int32_t)ServantLeader,
                 maxLimitCount,
                 0,
                 isCommonName,
                 0);
    }
LABEL_35:
    sub_2213CDC(ServantLeader, v10);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v13);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  ServantLeader = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v13);
    ServantLeader = NetworkManager_TypeInfo;
  }
  BaseServantEntity_k__BackingField = this->fields._BaseServantEntity_k__BackingField;
  if ( !BaseServantEntity_k__BackingField )
    goto LABEL_35;
  v16 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v18 = *(_QWORD *)(*((_QWORD *)ServantLeader + 23) + 64LL);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v13);
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
  if ( !Master_object )
    goto LABEL_35;
  ServantLeader = (void *)UserServantCollectionMaster__TryGetEntity(
                            (UserServantCollectionMaster_o *)Master_object,
                            &entity,
                            v18,
                            (int32_t)ServantLeader,
                            0);
  if ( ((unsigned __int8)ServantLeader & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_35;
    maxLimitCount = entity->fields.maxLimitCount;
    goto LABEL_26;
  }
  ServantLeader = this->fields._ServantEntity_k__BackingField;
  if ( !ServantLeader )
    goto LABEL_35;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0, isCommonName, 0);
}


System_String_o *PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v9; // x0

  if ( (byte_596C042 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_44/*"\n\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_10714/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_596C042 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10714/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
  return System_String__Concat_75694928(
           v9,
           (System_String_o *)StringLiteral_44/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0);
}


System_String_o *PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_596C041 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C041 = 1;
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
    sub_2213CDC(0, v6);
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
    sub_2213CDC(0, v6);
  return UserServantGrandInfo__get_AddedHp(GrandServantInfo, 0) > 0;
}


bool PartyOrganizationListViewItem__HaveCanOrganizationServant(
        PartyOrganizationListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  _BOOL4 haveIndividualityServant; // w8
  void *Master_object; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *v8; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  System_Collections_ICollection_o **v10; // x27
  System_Collections_Generic_List_int__o *GrandSvtIdListInParty; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x24
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v14; // x1
  System_Collections_IEnumerator_c **v15; // x28
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v16; // x22
  const MethodInfo_3F131DC **v17; // x19
  System_Collections_Generic_IEnumerator_T__o *v18; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v20; // x1
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  char v26; // w21
  System_Collections_Generic_IEnumerator_T__o *v27; // x25
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c *v29; // x1
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x26
  __int64 v36; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x25
  System_Collections_Generic_List_int__o *v38; // x20
  const MethodInfo_3F131DC **v39; // x23
  System_Collections_IEnumerator_c **v40; // x19
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v41; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x22
  System_Collections_ICollection_o **v43; // x24
  int32_t v44; // w26
  Il2CppClass *v45; // x27
  void *monitor; // x28
  __int64 v47; // x1
  int32_t v48; // w27
  __int64 v49; // x1
  int32_t DispLimitCount; // w28
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v52; // x1
  __int64 SvtClassId; // x0
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  int32_t v56; // w25
  __int64 v57; // x1
  System_Collections_ICollection_o *v58; // x0
  System_Collections_Generic_IEnumerator_T__o *v59; // x20
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  PartyOrganizationListViewItem_o *v65; // [xsp+0h] [xbp-90h]
  QuestRestrictionInfo_o *questRestrictionInfo; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v68; // [xsp+28h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_596C053 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C053 = 1;
  }
  haveIndividualityServant = this->fields.haveIndividualityServant;
  entity = 0;
  v68 = 0;
  if ( haveIndividualityServant )
  {
    if ( this->fields.isRestrictionGrandServant && (this->fields.isFollower || !this->fields.userServantEntity) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, partyItem, method);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      if ( !Master_object )
        goto LABEL_76;
      v8 = (System_Collections_ObjectModel_Collection_T__o *)*((_QWORD *)Master_object + 5);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !this->fields.questRestrictionInfo
        || (v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            Master_object = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                              this->fields.questRestrictionInfo,
                              this->fields._InitPos_k__BackingField,
                              0),
            !partyItem)
        || (v10 = (System_Collections_ICollection_o **)Master_object,
            v65 = this,
            GrandSvtIdListInParty = PartyListViewItem__GetGrandSvtIdListInParty(partyItem, 0, 0),
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantClassMaster___),
            !v8) )
      {
LABEL_76:
        sub_2213CDC(Master_object, v7);
      }
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     v8,
                     (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
      v68 = Enumerator;
      if ( !Enumerator )
LABEL_52:
        sub_2213CDC(Enumerator, v14);
      v15 = &System_Collections_IEnumerator_TypeInfo;
      v16 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
      v17 = (const MethodInfo_3F131DC **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
      v18 = Enumerator;
      while ( 1 )
      {
        klass = v18->klass;
        v20 = *v15;
        v21 = *(unsigned __int16 *)&v18->klass->_2.rank;
        if ( *(_WORD *)&v18->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v20 )
          {
            --v21;
            p_offset += 4;
            if ( !v21 )
              goto LABEL_18;
          }
          v23 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_18:
          v23 = sub_224BC3C(v18, v20, 0);
        }
        v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                v18,
                *(_QWORD *)(v23 + 8));
        v26 = v24;
        if ( (v24 & 1) == 0 )
          break;
        v27 = v68;
        if ( !v68 )
          sub_2213CDC(v24, v25);
        v28 = v68->klass;
        v29 = *v16;
        v30 = *(unsigned __int16 *)&v68->klass->_2.rank;
        if ( *(_WORD *)&v68->klass->_2.rank )
        {
          v31 = &v28->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v31 - 1) != v29 )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_26;
          }
          v32 = (__int64)&v28->vtable[*v31];
        }
        else
        {
LABEL_26:
          v32 = sub_224BC3C(v68, v29, 0);
        }
        v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                v27,
                *(_QWORD *)(v32 + 8));
        v35 = v33;
        if ( !v33 )
          sub_2213CDC(0, v34);
        if ( !v9 )
          sub_2213CDC(v33, v34);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)DataMasterBase_object__object__long___TryGetEntity(
                                                                      v9,
                                                                      &entity,
                                                                      *(_QWORD *)(v33 + 32),
                                                                      *v17);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          if ( !GrandSvtIdListInParty )
            sub_2213CDC(Enumerator, v14);
          Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_Collections_Generic_List_int___Contains(
                                                                        GrandSvtIdListInParty,
                                                                        *(_DWORD *)(v35 + 40),
                                                                        (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Enumerator & 1) == 0 )
          {
            if ( !entity )
              sub_2213CDC(Enumerator, v14);
            v37 = v9;
            v38 = GrandSvtIdListInParty;
            v39 = v17;
            v40 = v15;
            v41 = v16;
            v42 = v12;
            v43 = v10;
            v44 = *(_DWORD *)(v35 + 40);
            v45 = entity[6].klass;
            monitor = entity[6].monitor;
            questRestrictionInfo = v65->fields.questRestrictionInfo;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v36);
            *(_QWORD *)&v69.fields.currentCryptoKey = v45;
            *(_QWORD *)&v69.fields.fakeValue = monitor;
            v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v69, 0);
            if ( !entity )
              sub_2213CDC(0, v47);
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
            if ( !entity )
              sub_2213CDC(0, v49);
            OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
            if ( !OverwriteStatus )
              sub_2213CDC(0, v52);
            if ( !entity )
              sub_2213CDC(OverwriteStatus, v52);
            if ( !questRestrictionInfo )
              sub_2213CDC(OverwriteStatus, v52);
            Enumerator = (System_Collections_Generic_IEnumerator_T__o *)QuestRestrictionInfo__IsRestriction_50436376(
                                                                          questRestrictionInfo,
                                                                          v44,
                                                                          v48,
                                                                          DispLimitCount,
                                                                          OverwriteStatus->fields._Rarity_k__BackingField,
                                                                          (int32_t)entity[25].klass,
                                                                          1,
                                                                          0);
            v10 = v43;
            v12 = v42;
            v16 = v41;
            v15 = v40;
            v17 = v39;
            GrandSvtIdListInParty = v38;
            v9 = v37;
            if ( ((unsigned __int8)Enumerator & 1) == 0 )
            {
              if ( !entity )
                sub_2213CDC(0, v14);
              SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, 0);
              if ( !v12 )
                sub_2213CDC(SvtClassId, (unsigned int)SvtClassId);
              v54 = DataMasterBase_object__object__int___GetEntity(
                      v12,
                      SvtClassId,
                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
              if ( !v54 )
                sub_2213CDC(0, v55);
              if ( !v10 )
                sub_2213CDC(v54, v55);
              v56 = (int32_t)v54[2].klass;
              if ( BasicHelper__IsNullOrEmpty(v10[5], 0) )
                goto LABEL_57;
              v58 = v10[5];
              if ( !v58 )
                sub_2213CDC(0, v57);
              if ( !LODWORD(v58[1].monitor) )
                sub_2213CE4(v58);
              if ( !LODWORD(v58[2].klass) )
                goto LABEL_57;
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_Linq_Enumerable__Contains_int_(
                                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                                                                            v56,
                                                                            (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
                goto LABEL_57;
            }
          }
        }
        v18 = v68;
        if ( !v68 )
          goto LABEL_52;
      }
      v26 = 0;
LABEL_57:
      v59 = v68;
      if ( v68 )
      {
        v60 = v68->klass;
        v61 = *(unsigned __int16 *)&v68->klass->_2.rank;
        if ( *(_WORD *)&v68->klass->_2.rank )
        {
          v62 = &v60->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
          {
            --v61;
            v62 += 4;
            if ( !v61 )
              goto LABEL_62;
          }
          v63 = (__int64)&v60->vtable[*v62];
        }
        else
        {
LABEL_62:
          v63 = sub_224BC3C(v68, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
      }
    }
    else
    {
      v26 = 1;
    }
  }
  else
  {
    v26 = 0;
  }
  return v26 & 1;
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
    sub_2213CDC(0, v4);
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
  _BOOL4 isRestrictionGrandServant; // w8
  System_Collections_ICollection_o *CanOrganizationGrandSvtIdList; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  bool v7; // w19
  const MethodInfo_3856318 **v8; // x22
  int v9; // w29
  Il2CppObject *current; // x21
  __int64 v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *Entity; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_UserServantEntity__o *v27; // x21
  const MethodInfo_3856318 **v28; // x27
  System_Func_object__bool__o *v29; // x22
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596C052 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_UserServantEntity____91751128);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__DisplayClass371_0__IsEnabledChangeGrandSvt_b__0__);
    sub_2213A60(&PartyOrganizationListViewItem___c__DisplayClass371_0_TypeInfo);
    byte_596C052 = 1;
  }
  isRestrictionGrandServant = this->fields.isRestrictionGrandServant;
  memset(&v33, 0, sizeof(v33));
  userServantList = 0;
  if ( !isRestrictionGrandServant )
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
    sub_2213CDC(IsNullOrEmpty, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)CanOrganizationGrandSvtIdList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
  v8 = (const MethodInfo_3856318 **)&Method_DataManager_GetMaster_GrandGraphMaster___;
  v33 = v31;
  v9 = 2;
  v31.fields._list = 0;
  *(_QWORD *)&v31.fields._index = &v33;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v33,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v33.fields._current;
    v11 = sub_2213CCC(PartyOrganizationListViewItem___c__DisplayClass371_0_TypeInfo);
    PartyOrganizationListViewItem___c__DisplayClass371_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass371_0_o *)v11,
      0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !current )
      sub_2213CDC(Master_object, v15);
    if ( !Master_object )
      sub_2213CDC(0, v15);
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)Master_object,
           &userServantList,
           (int32_t)current[2].monitor,
           0,
           0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
      v18 = DataManager__GetMaster_object_(*v8);
      if ( !v18 )
        sub_2213CDC(0, v19);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                 (int32_t)current[1].monitor,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
      if ( !v11 )
        sub_2213CDC(Entity, Entity);
      *(_QWORD *)(v11 + 16) = Entity;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)Entity, v21, v22, v23, v24, v25, v26);
      v27 = userServantList;
      v28 = v8;
      v29 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v29,
        (Il2CppObject *)v11,
        Method_PartyOrganizationListViewItem___c__DisplayClass371_0__IsEnabledChangeGrandSvt_b__0__,
        0);
      v9 -= System_Linq_Enumerable__Count_object__59223900(
              (System_Collections_Generic_IEnumerable_TSource__o *)v27,
              (System_Func_TSource__bool__o *)v29,
              (const MethodInfo_387AF5C *)Method_System_Linq_Enumerable_Count_UserServantEntity____91751128);
      v8 = v28;
      if ( v9 <= 0 )
        break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
  return v7;
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_50453148(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_50453148(questRestrictionInfo, userServantEntity, 0);
  if ( v5 < 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_2213CDC(0, v6);
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
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsGrandServantRestriction; // w8
  bool *p_isRestrictionGrandServant; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o **p_userServantEntity; // x20
  __int128 v9; // q1
  int64_t v10; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  int64_t v13; // x21
  void *Master_object; // x0
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UserServantEntity_o *v22; // x8
  UserServantEntity_o *v23; // x8
  const MethodInfo *v24; // x2
  struct QuestRestrictionInfo_o *v25; // x8
  struct QuestRestrictionInfo_o *v26; // x8
  bool IsGrandServant_k__BackingField; // w8
  int32_t hp; // w22
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v31; // x1
  QuestRestrictionInfo_o *v32; // x21
  struct UserServantEntity_o *v33; // x8
  __int64 v34; // x20
  __int64 v35; // x22
  int32_t v36; // w0
  PartyOrganizationListViewItem_o *OverwriteTempTreasureDeviceLv; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-50h]
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_596C024 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C024 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  entity = 0;
  if ( questRestrictionInfo )
  {
    IsGrandServantRestriction = QuestRestrictionInfo__IsGrandServantRestriction(
                                  questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  0);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    p_isRestrictionGrandServant = &this->fields.isRestrictionGrandServant;
    this->fields.isRestrictionGrandServant = IsGrandServantRestriction;
    if ( questRestrictionInfo )
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                       questRestrictionInfo,
                                       this->fields._InitPos_k__BackingField,
                                       0);
  }
  else
  {
    p_isRestrictionGrandServant = &this->fields.isRestrictionGrandServant;
    this->fields.isRestrictionGrandServant = 0;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  this->fields.isRestrictionActiveGrandBoard = (unsigned __int8)questRestrictionInfo & 1;
  if ( userServantEntity )
  {
    v9 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v39.fields.fakeValue = v9;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    v38 = v39;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v38, 0);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v13 = v10;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_45;
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        (Il2CppObject **)&this->fields.userServantEntity,
        v13,
        (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      Master_object = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_45;
      ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)Master_object, -1, 0);
      this->fields._ServantEntity_k__BackingField = ServantEntity;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
        (int32_t)ServantEntity,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
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
    v22 = this->fields.userServantEntity;
    *(_QWORD *)&this->fields.hp = *((_QWORD *)Master_object + 2);
    v11 = (const MethodInfo *)*((unsigned int *)Master_object + 10);
    this->fields.rarityId = *((_DWORD *)Master_object + 6);
    this->fields.actualRarity = (int)v11;
    if ( !v22 )
      goto LABEL_45;
    Master_object = (void *)UserServantEntity__GetFrameType(v22, (int32_t)v11, 0);
    v23 = this->fields.userServantEntity;
    this->fields.frameType = (int)Master_object;
    if ( !v23 )
      goto LABEL_45;
    Master_object = (void *)UserServantEntity__IsGrandServant(v23, 0);
    v25 = this->fields.questRestrictionInfo;
    this->fields._IsUseGrandBoard_k__BackingField = 0;
    this->fields._IsGrandServant_k__BackingField = (unsigned __int8)Master_object & 1;
    if ( v25 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v24);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      v26 = this->fields.questRestrictionInfo;
      if ( !v26 || !Master_object )
        goto LABEL_45;
      Master_object = (void *)QuestPhaseMaster__TryGetEntity(
                                (QuestPhaseMaster_o *)Master_object,
                                &entity,
                                v26->fields.questId,
                                v26->fields.questPhase,
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
      Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v11);
      if ( !Master_object )
        goto LABEL_45;
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Master_object, 0);
      atk = this->fields.atk;
      this->fields.hp = AddedHp + hp;
      Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v31);
      if ( !Master_object )
        goto LABEL_45;
      Master_object = (void *)UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)Master_object, 0);
      this->fields.atk = (_DWORD)Master_object + atk;
    }
    v32 = this->fields.questRestrictionInfo;
    if ( !v32 )
    {
      OverwriteTempTreasureDeviceLv = 0;
LABEL_43:
      this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = (int)OverwriteTempTreasureDeviceLv;
      PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(OverwriteTempTreasureDeviceLv, this, v24);
      return;
    }
    v33 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v34 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
      v35 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v24);
      *(_QWORD *)&v41.fields.currentCryptoKey = v34;
      *(_QWORD *)&v41.fields.fakeValue = v35;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v41, 0);
      OverwriteTempTreasureDeviceLv = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
                                                                           v32,
                                                                           v36,
                                                                           0);
      goto LABEL_43;
    }
LABEL_45:
    sub_2213CDC(Master_object, v11);
  }
}


void PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  const MethodInfo *v11; // x2

  if ( !item )
    sub_2213CDC(this, 0);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__Modify_40987156(this, item, v11);
}


void PartyOrganizationListViewItem__Modify_40987156(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  PartyOrganizationListViewItem_o *v9; // x19
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x20
  ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ServantEntity_o *ServantEntity; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x2
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q0
  int32_t frameType; // w10
  __int64 v30; // x22
  __int64 v31; // x23
  UserServantEntity_o *v32; // x8
  System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int64_t fatigureTime; // x9
  bool isFatigureRecover; // w8
  __int16 v48; // w8
  int32_t SvtPoint_k__BackingField; // w8
  _BOOL4 IsGrandServant; // w0
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x3
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  int v54; // w8
  int32_t hp; // w22
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v58; // x1
  __int64 v59; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  struct UserServantEntity_o *v61; // x8
  __int64 v62; // x20
  __int64 v63; // x22
  int32_t v64; // w0
  int32_t OverwriteTempTreasureDeviceLv; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v9 = this;
  if ( (byte_596C025 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C025 = 1;
  }
  if ( !item )
    goto LABEL_25;
  userServantEntity = item->fields.userServantEntity;
  v9->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v9->fields.userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.userServantEntity,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (PartyOrganizationListViewItem_o *)v9->fields.userServantEntity;
  if ( !this )
    goto LABEL_25;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)this, 0);
  v9->fields._BaseServantEntity_k__BackingField = BaseServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this = (PartyOrganizationListViewItem_o *)v9->fields.userServantEntity;
  if ( !this )
    goto LABEL_25;
  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)this, -1, 0);
  v9->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v9->fields.cost = item->fields.cost;
  v27 = v9->fields.userServantEntity;
  *(_QWORD *)&v28 = *(_QWORD *)&item->fields.hp;
  *((_QWORD *)&v28 + 1) = *(_QWORD *)&item->fields.classId;
  *(_OWORD *)&v9->fields.hp = v28;
  frameType = item->fields.frameType;
  v9->fields.actualRarity = item->fields.actualRarity;
  v9->fields.frameType = frameType;
  if ( !v27 )
    goto LABEL_25;
  v30 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v26);
  *(_QWORD *)&v66.fields.currentCryptoKey = v30;
  *(_QWORD *)&v66.fields.fakeValue = v31;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v66, 0);
  v32 = v9->fields.userServantEntity;
  v9->fields.svtLimitCount = (int)this;
  if ( !v32 )
    goto LABEL_25;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v32, 0);
  v9->fields.commandCodeIdList = CommandCodeIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  fatigureTime = item->fields.fatigureTime;
  *(_DWORD *)&v9->fields.isQuestRestriction = *(_DWORD *)&item->fields.isQuestRestriction;
  isFatigureRecover = item->fields.isFatigureRecover;
  v9->fields.fatigureTime = fatigureTime;
  v9->fields.isFatigureRecover = isFatigureRecover;
  v48 = *(_WORD *)&item->fields._IsAllOutBattle_k__BackingField;
  v9->fields._IsNotSupportSingle_k__BackingField = 0;
  v9->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&v9->fields._IsAllOutBattle_k__BackingField = v48;
  LOBYTE(fatigureTime) = item->fields._IsDispSvtPoint_k__BackingField;
  v9->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
  v9->fields._IsDispSvtPoint_k__BackingField = fatigureTime;
  LODWORD(fatigureTime) = item->fields._SvtPointRank_k__BackingField;
  v9->fields._SvtPoint_k__BackingField = SvtPoint_k__BackingField;
  v9->fields._SvtPointRank_k__BackingField = fatigureTime;
  if ( v9->fields.isMyServantOrNpcRestriction && v9->fields.isFollower )
  {
    v9->fields.followerInfo = 0;
    v9->fields.isFollower = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields.followerInfo, 0, v40, v41, v42, v43, v44, v45);
  }
  this = (PartyOrganizationListViewItem_o *)v9->fields.userServantEntity;
  *(_WORD *)&v9->fields._IsClearedWave_k__BackingField = 0;
  v9->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !this )
    goto LABEL_25;
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
  IsGrandSameServant_k__BackingField = item->fields._IsGrandSameServant_k__BackingField;
  v9->fields._IsGrandServant_k__BackingField = IsGrandServant;
  v9->fields._IsUseGrandBoard_k__BackingField = 0;
  v54 = IsGrandSameServant_k__BackingField && !IsGrandServant;
  v9->fields._IsTempGrandServant_k__BackingField = v54;
  if ( v54 == 1 )
  {
    hp = v9->fields.hp;
    this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v9, v51);
    if ( !this )
      goto LABEL_25;
    AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
    atk = v9->fields.atk;
    v9->fields.hp = AddedHp + hp;
    this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v9, v58);
    if ( !this )
      goto LABEL_25;
    v9->fields.atk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0) + atk;
  }
  PartyOrganizationListViewItem__SetEquipStatus(v9, v9->fields.equipIdList, 0, v52);
  questRestrictionInfo = v9->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
  {
    OverwriteTempTreasureDeviceLv = 0;
    goto LABEL_24;
  }
  v61 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_25:
    sub_2213CDC(this, item);
  v62 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
  v63 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v59);
  *(_QWORD *)&v67.fields.currentCryptoKey = v62;
  *(_QWORD *)&v67.fields.fakeValue = v63;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v67, 0);
  OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(questRestrictionInfo, v64, 0);
LABEL_24:
  v9->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
}


void PartyOrganizationListViewItem__MoveBondEquip(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  struct System_Int64_array *equipIdList; // x8
  int32_t max_length; // w1
  __int64 v7; // x22
  BalanceConfig_c *v8; // x0
  struct System_Int64_array *v9; // x8
  int64_t v10; // x9
  struct System_Int32_array *equipSvtIdList; // x8
  int32_t v12; // w1
  __int64 v13; // x21
  struct System_Int32_array *v14; // x8
  int32_t v15; // w9
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596C028 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_596C028 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    max_length = equipIdList->max_length;
    v16 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v16,
      max_length,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    v7 = v16;
  }
  else
  {
    v7 = 0;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)v7 && v8->static_fields->GrandSvtEquipMax == HIDWORD(v7) )
  {
    v9 = this->fields.equipIdList;
    if ( !v9 )
      goto LABEL_25;
    if ( LODWORD(v9->max_length) < 2 )
      goto LABEL_24;
    v10 = v9->m_Items[0];
    v9->m_Items[0] = 0;
    v9->m_Items[1] = v10;
  }
  equipSvtIdList = this->fields.equipSvtIdList;
  if ( equipSvtIdList )
  {
    v12 = equipSvtIdList->max_length;
    v16 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v16,
      v12,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    v13 = v16;
    v8 = BalanceConfig_TypeInfo;
  }
  else
  {
    v13 = 0;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, method, v2);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)v13 && v8->static_fields->GrandSvtEquipMax == HIDWORD(v13) )
  {
    v14 = this->fields.equipSvtIdList;
    if ( v14 )
    {
      if ( LODWORD(v14->max_length) >= 2 )
      {
        v15 = v14->m_Items[0];
        v14->m_Items[0] = 0;
        v14->m_Items[1] = v15;
        goto LABEL_23;
      }
LABEL_24:
      sub_2213CE4(v8);
    }
LABEL_25:
    sub_2213CDC(v8, method);
  }
LABEL_23:
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, 0, v3);
}


bool PartyOrganizationListViewItem__RemoveEquipDuplication(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  struct System_Int64_array *equipIdList; // x8
  int32_t max_length; // w1
  __int64 v7; // x21
  BalanceConfig_c *v8; // x8
  bool result; // w0
  struct System_Int64_array *v10; // x1
  int v11; // w10
  int64_t v12; // x8
  __int64 v13; // x9
  int v14; // w10
  Il2CppClass **v15; // x11
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596C029 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    byte_596C029 = 1;
  }
  if ( !this->fields.userServantEntity && !this->fields.isFollower )
    return 0;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    max_length = equipIdList->max_length;
    v16 = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v16,
      max_length,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    v7 = v16;
  }
  else
  {
    v7 = 0;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v8 = BalanceConfig_TypeInfo;
  }
  result = 0;
  if ( (_BYTE)v7 && v8->static_fields->GrandSvtEquipMax == HIDWORD(v7) )
  {
    v10 = this->fields.equipIdList;
    if ( !v10 )
      sub_2213CDC(0, 0);
    v11 = v10->max_length;
    if ( !v11 )
      sub_2213CE4(0);
    v12 = v10->m_Items[0];
    result = 0;
    if ( v12 )
    {
      if ( v11 >= 2 )
      {
        v13 = 0;
        v14 = v11 - 1;
        while ( 1 )
        {
          v15 = &v10->obj.klass + v13;
          if ( v15[5] == (Il2CppClass *)v12 )
            break;
          if ( v14 == (_DWORD)++v13 )
            return 0;
        }
        v15[5] = 0;
        PartyOrganizationListViewItem__SetEquipStatus(this, v10, 0, v3);
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

  if ( (byte_596C02F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_long___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_596C02F = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v6 = System_Array__IndexOf_long_(
         equipIdList,
         userSvtId,
         (const MethodInfo_3A2E664 *)Method_System_Array_IndexOf_long___);
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
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
LABEL_15:
      sub_2213CDC(IsNullOrEmpty, v9);
    }
    v11 = *((_DWORD *)IsNullOrEmpty + 38);
  }
  v9 = this->fields.equipIdList;
  if ( !v9 )
    goto LABEL_15;
  if ( v7 >= LODWORD(v9->max_length) )
    sub_2213CE4(IsNullOrEmpty);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  bool isRestrictionGrandServant; // w8
  bool isRestrictionActiveGrandBoard; // w9
  struct EventUpValSetupInfo_o *setupInfo; // x1
  int32_t followerIndex; // w8
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct ServantEntity_o *ServantEntity_k__BackingField; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct System_Int32_array *commandCodeIdList; // x1
  __int128 v60; // q0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  int64_t npcFollowerSvtId; // x8
  bool isFixMultipleNpcRestriction; // w9
  int64_t fatigureTime; // x9
  bool IsNotSupportSingle_k__BackingField; // w10
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  __int64 v72; // d0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  bool IsGrandServant_k__BackingField; // w9
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v87; // x0
  Il2CppObject *v88; // x21
  void *v89; // x23
  Il2CppClass *v90; // x22
  struct System_Int32_array *v91; // x0
  __int64 v92; // x2
  __int64 v93; // x3
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v95; // x0
  int32_t v96; // w1
  const MethodInfo *v97; // x3
  PartyOrganizationListViewItem_o *v98; // x0
  System_Int32_array *v99; // x1
  const MethodInfo *v100; // x2

  if ( (byte_596C023 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596C023 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    sub_2213CDC(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.followerInfo,
    (int32_t)followerInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_WORD *)&this->fields.isFollower = *(_WORD *)&item->fields.isFollower;
  isRestrictionGrandServant = item->fields.isRestrictionGrandServant;
  isRestrictionActiveGrandBoard = item->fields.isRestrictionActiveGrandBoard;
  setupInfo = item->fields.setupInfo;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.isRestrictionGrandServant = isRestrictionGrandServant;
  followerIndex = item->fields.followerIndex;
  this->fields.isRestrictionActiveGrandBoard = isRestrictionActiveGrandBoard;
  this->fields.followerIndex = followerIndex;
  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BaseServantEntity_k__BackingField = item->fields._BaseServantEntity_k__BackingField;
  this->fields._BaseServantEntity_k__BackingField = BaseServantEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity_k__BackingField,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  ServantEntity_k__BackingField = item->fields._ServantEntity_k__BackingField;
  this->fields._ServantEntity_k__BackingField = ServantEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity_k__BackingField,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  commandCodeIdList = item->fields.commandCodeIdList;
  v60 = *(_OWORD *)&item->fields.cost;
  this->fields.commandCodeIdList = commandCodeIdList;
  *(_OWORD *)&this->fields.cost = v60;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
    (int32_t)commandCodeIdList,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  npcFollowerSvtId = item->fields.npcFollowerSvtId;
  *(_QWORD *)&this->fields.isQuestRestriction = *(_QWORD *)&item->fields.isQuestRestriction;
  isFixMultipleNpcRestriction = item->fields.isFixMultipleNpcRestriction;
  this->fields.npcFollowerSvtId = npcFollowerSvtId;
  LOBYTE(npcFollowerSvtId) = item->fields.isFixMultipleNpc;
  this->fields.isFixMultipleNpcRestriction = isFixMultipleNpcRestriction;
  fatigureTime = item->fields.fatigureTime;
  this->fields.isFixMultipleNpc = npcFollowerSvtId;
  LODWORD(npcFollowerSvtId) = *(_DWORD *)&item->fields.isMyServantOrNpcRestriction;
  this->fields.fatigureTime = fatigureTime;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = npcFollowerSvtId;
  LOBYTE(fatigureTime) = item->fields.isFatigureRecover;
  this->fields.isRestrictionServantPos = item->fields.isRestrictionServantPos;
  this->fields.isFatigureRecover = fatigureTime;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = *(_WORD *)&item->fields._IsAllOutBattle_k__BackingField;
  LODWORD(fatigureTime) = item->fields._SvtPoint_k__BackingField;
  IsNotSupportSingle_k__BackingField = item->fields._IsNotSupportSingle_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  LOBYTE(npcFollowerSvtId) = item->fields._IsDispSvtPoint_k__BackingField;
  this->fields._SvtPoint_k__BackingField = fatigureTime;
  LOBYTE(fatigureTime) = item->fields._IsDispCanGetBuddyPoint_k__BackingField;
  v72 = *(_QWORD *)&item->fields._SvtPointRank_k__BackingField;
  this->fields._IsDispSvtPoint_k__BackingField = npcFollowerSvtId;
  LOBYTE(npcFollowerSvtId) = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsDispCanGetBuddyPoint_k__BackingField = fatigureTime;
  *(_QWORD *)&this->fields._SvtPointRank_k__BackingField = v72;
  LODWORD(fatigureTime) = item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = npcFollowerSvtId;
  LODWORD(npcFollowerSvtId) = item->fields._NowPos_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  this->fields._InitPos_k__BackingField = fatigureTime;
  this->fields._NowPos_k__BackingField = npcFollowerSvtId;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)WaveEnemyClassIds_k__BackingField,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = *(_WORD *)&item->fields._IsClearedWave_k__BackingField;
  IsGrandServant_k__BackingField = item->fields._IsGrandServant_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = IsGrandServant_k__BackingField;
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = *(_WORD *)&item->fields._IsTempGrandServant_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  this->fields._EquipFriendShipSkillChange_k__BackingField = item->fields._EquipFriendShipSkillChange_k__BackingField;
  if ( !equipSvtIdList || (v87 = System_Array__Clone(equipSvtIdList, 0)) == 0 )
  {
    v96 = 0;
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v88 = v87;
  v89 = &int___TypeInfo;
  v90 = int___TypeInfo;
  v91 = (struct System_Int32_array *)sub_2213BB4(v87, int___TypeInfo);
  if ( v91 )
  {
    v89 = int___TypeInfo;
    this->fields.equipSvtIdList = v91;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v95 = sub_2213BB4(v88, v89);
    if ( v95 )
    {
      v96 = v95;
LABEL_10:
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p_equipSvtIdList, v96, v79, v80, v81, v82, v83, v84);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, 0, v97);
      this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      return;
    }
  }
  else
  {
    sub_221405C(v88, v90, v92, v93);
  }
  v98 = (PartyOrganizationListViewItem_o *)sub_221405C(v88, v89, v79, v80);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v98, v99, v100);
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
  __int64 v12; // x1
  __int64 v13; // x2
  bool HasFlag; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x22
  long double v18; // q0

  v4 = this;
  if ( (byte_596C022 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C022 = 1;
  }
  if ( !v4->fields.isFollower )
  {
    this = (PartyOrganizationListViewItem_o *)v4->fields.questRestrictionInfo;
    if ( this )
    {
      this = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_29;
    }
  }
  if ( v4->fields.index >= 1 )
  {
    questRestrictionInfo = v4->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantSingle )
        goto LABEL_29;
    }
  }
  if ( v4->fields.isServantNumRestriction || v4->fields.isFixMultipleNpcRestriction || v4->fields.isFixMultipleNpc )
    goto LABEL_29;
  v6 = v4->fields.questRestrictionInfo;
  if ( !v6 )
    goto LABEL_30;
  questId = v6->fields.questId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId, method);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v8 = v4->fields.questRestrictionInfo;
  if ( !v8 || !this )
    goto LABEL_30;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v8->fields.questPhase,
                                    0);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_29;
  v10 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v10, 0) )
    goto LABEL_29;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_30;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0);
  if ( !this )
    goto LABEL_30;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v18 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
  this = (PartyOrganizationListViewItem_o *)sub_2417958(0, v18);
  if ( !Master_object )
LABEL_30:
    sub_2213CDC(this, *(_QWORD *)&eventId);
  if ( (HasFlag
      & (UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)Master_object, (int64_t)this, questId, 0) > 0)) != 1 )
  {
    v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 1;
    return;
  }
LABEL_29:
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Int64_array *equipIdList; // x8
  struct System_Boolean_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_ICollection_o *duplicatedEquipmentUserSvtIdList; // x21
  struct System_Int64_array *v23; // x9
  unsigned int v24; // w8
  unsigned int max_length; // w10
  System_Predicate_long__o *v26; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x9
  char v34; // w10

  if ( (byte_596C02C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindIndex_long___);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&System_Predicate_long__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__DisplayClass179_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__);
    sub_2213A60(&PartyOrganizationListViewItem___c__DisplayClass179_0_TypeInfo);
    byte_596C02C = 1;
  }
  v5 = sub_2213CCC(PartyOrganizationListViewItem___c__DisplayClass179_0_TypeInfo);
  PartyOrganizationListViewItem___c__DisplayClass179_0___ctor(
    (PartyOrganizationListViewItem___c__DisplayClass179_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    goto LABEL_24;
  v15 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, LODWORD(equipIdList->max_length));
  this->fields._DuplicationEquipmentFlagList_k__BackingField = v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !partyItem )
    goto LABEL_24;
  duplicatedEquipmentUserSvtIdList = (System_Collections_ICollection_o *)partyItem->fields.duplicatedEquipmentUserSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(duplicatedEquipmentUserSvtIdList, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  v23 = this->fields.equipIdList;
  *(_DWORD *)(v5 + 24) = 0;
  if ( !v23 )
LABEL_24:
    sub_2213CDC(IsNullOrEmpty, v7);
  v24 = 0;
  while ( 1 )
  {
    max_length = v23->max_length;
    if ( (int)v24 >= (int)max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_25;
    if ( v23->m_Items[v24] >= 1 )
    {
      v26 = *(System_Predicate_long__o **)(v5 + 32);
      if ( !v26 )
      {
        v26 = (System_Predicate_long__o *)sub_2213CCC(System_Predicate_long__TypeInfo);
        System_Predicate_long____ctor(
          v26,
          (Il2CppObject *)v5,
          Method_PartyOrganizationListViewItem___c__DisplayClass179_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
      }
      IsNullOrEmpty = System_Array__FindIndex_long_(
                        (System_Int64_array *)duplicatedEquipmentUserSvtIdList,
                        (System_Predicate_T__o *)v26,
                        (const MethodInfo_39A9E24 *)Method_System_Array_FindIndex_long___);
      DuplicationEquipmentFlagList_k__BackingField = this->fields._DuplicationEquipmentFlagList_k__BackingField;
      if ( (_DWORD)IsNullOrEmpty == -1 )
      {
        if ( !DuplicationEquipmentFlagList_k__BackingField )
          goto LABEL_24;
        v24 = *(_DWORD *)(v5 + 24);
        if ( v24 >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
LABEL_25:
          sub_2213CE4(IsNullOrEmpty);
        v34 = 0;
      }
      else
      {
        if ( !DuplicationEquipmentFlagList_k__BackingField )
          goto LABEL_24;
        v24 = *(_DWORD *)(v5 + 24);
        if ( v24 >= LODWORD(DuplicationEquipmentFlagList_k__BackingField->max_length) )
          goto LABEL_25;
        v34 = 1;
      }
      DuplicationEquipmentFlagList_k__BackingField->m_Items[v24] = v34;
    }
    v23 = this->fields.equipIdList;
    *(_DWORD *)(v5 + 24) = ++v24;
    if ( !v23 )
      goto LABEL_24;
  }
}


void PartyOrganizationListViewItem__SetEquipStatus(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *equipIdList,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  void *IsGrandServant; // x0
  struct EventMargeItemUpValInfo_array *eventUpValItemList; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x21
  int32_t ReturnTypeByQuestId; // w2
  Il2CppObject *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppClass *v51; // x22
  struct System_Int64_array *v52; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  BalanceConfig_c *v54; // x0
  int32_t followerIndex; // w20
  FollowerInfo_o *v56; // x21
  int32_t v57; // w2
  struct QuestRestrictionInfo_o *v58; // x8
  unsigned __int64 v59; // x27
  unsigned __int64 max_length_low; // x8
  struct System_Int64_array *v61; // x8
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  __int64 v72; // x2
  struct System_Int32_array *equipSvtIdList; // x8
  __int64 v74; // x2
  Il2CppObject *Master_object; // x22
  struct System_Int32_array *v76; // x8
  System_Collections_Generic_List_object__o *v77; // x22
  UserServantCollectionEntity_o *v78; // x24
  UserServantEntity_o *v79; // x23
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  struct System_Int64_array *v90; // x8
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x22
  UserServantEntity_o *v92; // x23
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  struct System_Collections_Generic_List_ServantEntity__o *v103; // x22
  ServantEntity_o *v104; // x23
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct ServantEntity_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  int32_t v115; // w1
  MissionNaviTransitionBoardItem_o *v116; // x0
  __int64 v117; // x8
  Il2CppObject *v118; // x1
  Il2CppClass *klass; // x22
  void *monitor; // x23
  __int64 v121; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v122; // x22
  Il2CppClass *v123; // x23
  void *v124; // x24
  Il2CppObject *v125; // x22
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  __int64 v129; // x8
  System_Collections_Generic_List_object__o *v130; // x22
  struct System_Int32_array *v131; // x8
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass *v141; // x1
  Il2CppClass **v142; // x0
  struct EventUpValSetupInfo_o *v143; // x22
  MissionNaviTransitionBoardItem_o *p_setupInfo; // x27
  struct System_Int32_array *v145; // x8
  UserServantEntity_o *userServantEntity; // x23
  System_Int64_array *EquipList; // x24
  char IsTempGrandServant_k__BackingField; // w6
  System_Collections_Generic_List_object__o *v149; // x20
  const MethodInfo *v150; // x3
  struct QuestRestrictionInfo_o *v151; // x8
  __int64 v152; // x2
  struct QuestRestrictionInfo_o *v153; // x8
  struct ServantEntity_o *v154; // x9
  __int64 v155; // x23
  __int64 v156; // x24
  int32_t v157; // w20
  int32_t v158; // w22
  __int64 v159; // x1
  __int64 v160; // x2
  int32_t v161; // w23
  EventMargeItemUpValInfo_array *v162; // x20
  bool v163; // w8
  const MethodInfo_47A2F30 *v164; // x0
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v165; // x1
  bool EventUpVal_50186428; // w0
  struct QuestRestrictionInfo_o *v167; // x8
  System_Collections_Generic_List_object__o *v168; // x20
  __int64 v169; // x2
  struct EventUpValInfo_o *v170; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v171; // x20
  PartyOrganizationListViewItem___c_c *v172; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *v173; // x8
  System_Func_object__int__o *_9__165_1; // x22
  Il2CppObject *v175; // x23
  struct PartyOrganizationListViewItem___c_StaticFields *v176; // x0
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v183; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v184; // x0
  System_String_o *v185; // x3
  __int64 v186; // x8
  _DWORD *v187; // x20
  unsigned __int64 v188; // x21
  ServantEntity_o *v189; // x24
  int32_t v190; // w23
  EventPersonalMargeUpValInfo_o *v191; // x22
  System_String_o *v192; // x2
  int32_t v193; // w4
  int32_t v194; // w5
  bool v195; // w6
  bool v196; // w7
  __int64 v197; // x8
  _QWORD *v198; // x22
  unsigned __int64 v199; // x23
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  Il2CppClass **v203; // x8
  __int64 v204; // x2
  struct QuestRestrictionInfo_o *v205; // x8
  struct ServantEntity_o *v206; // x9
  __int64 v207; // x23
  __int64 v208; // x24
  int32_t v209; // w20
  int32_t v210; // w22
  __int64 v211; // x1
  __int64 v212; // x2
  int32_t v213; // w23
  struct EventMargeItemUpValInfo_array *v214; // x0
  System_String_o *v215; // x2
  System_String_o *v216; // x3
  int32_t v217; // w4
  int32_t v218; // w5
  bool v219; // w6
  bool v220; // w7
  const MethodInfo *v221; // x1
  System_Int32_array *v222; // x20
  EventUpValSetupInfo_o *v223; // x22
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  UserServantEntity_o *v230; // x20
  EventUpValSetupInfo_o *v231; // x21
  struct QuestRestrictionInfo_o *v232; // x8
  bool v233; // w7
  Il2CppObject *v234; // x22
  System_Collections_Generic_List_object__o *v235; // x20
  System_String_o *v236; // x3
  MissionNaviTransitionBoardItem_c *v237; // x8
  _QWORD *data; // x26
  __int64 v239; // x8
  unsigned __int64 v240; // x28
  int32_t v241; // w24
  Il2CppObject *v242; // x0
  ServantEntity_o *v243; // x25
  EventPersonalMargeUpValInfo_o *v244; // x23
  System_String_o *v245; // x2
  int32_t v246; // w4
  int32_t v247; // w5
  bool v248; // w6
  bool v249; // w7
  __int64 v250; // x8
  _QWORD *v251; // x23
  unsigned __int64 v252; // x24
  struct System_Object_array *v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  Il2CppClass **v256; // x0
  System_Collections_ICollection_o *EquipSvtIds; // x20
  int32_t current; // w21
  System_Collections_Generic_List_object__o *equipServantEntityList; // x20
  Il2CppObject *Instance; // x0
  __int64 v261; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v263; // x1
  Il2CppObject *v264; // x0
  System_String_o *v265; // x2
  System_String_o *v266; // x3
  int32_t v267; // w4
  int32_t v268; // w5
  bool v269; // w6
  bool v270; // w7
  Il2CppObject *v271; // x1
  struct System_Object_array *items; // x8
  _QWORD *v273; // x9
  __int64 size; // x10
  Il2CppClass **v275; // x0
  ServantEntity_o *v276; // x21
  __int64 v277; // x0
  __int64 v278; // x1
  System_String_o *v279; // x2
  System_String_o *v280; // x3
  int32_t v281; // w4
  int32_t v282; // w5
  bool v283; // w6
  bool v284; // w7
  struct System_Object_array *v285; // x8
  _QWORD *v286; // x9
  __int64 v287; // x10
  Il2CppClass **v288; // x0
  _BOOL8 v289; // x0
  Il2CppObject *v290; // x1
  System_String_o *v291; // x2
  System_String_o *v292; // x3
  int32_t v293; // w4
  int32_t v294; // w5
  bool v295; // w6
  bool v296; // w7
  struct EventUpValInfo_o *v297; // x8
  System_Collections_Generic_List_object__o *v298; // x0
  struct System_Object_array *v299; // x8
  _QWORD *v300; // x9
  __int64 v301; // x10
  Il2CppClass **v302; // x8
  UserServantEntity_o *v303; // x20
  EventUpValSetupInfo_o *v304; // x21
  struct QuestRestrictionInfo_o *v305; // x8
  char v306; // w7
  ServantEntity_o *v307; // x21
  EventPersonalMargeUpValInfo_o *v308; // x20
  System_Collections_Generic_List_object__o *v309; // x21
  struct EventMargeItemUpValInfo_array *v310; // x0
  System_String_o *v311; // x2
  System_String_o *v312; // x3
  int32_t v313; // w4
  int32_t v314; // w5
  bool v315; // w6
  bool v316; // w7
  int32_t v317; // w20
  FollowerInfo_o *v318; // x21
  int32_t v319; // w2
  struct QuestRestrictionInfo_o *v320; // x8
  System_Collections_Generic_List_object__o *v321; // x20
  int32_t v322; // w22
  FollowerInfo_o *v323; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v324; // x21
  int32_t v325; // w2
  struct QuestRestrictionInfo_o *v326; // x8
  System_String_o *v327; // x2
  System_String_o *v328; // x3
  int32_t v329; // w4
  int32_t v330; // w5
  bool v331; // w6
  bool v332; // w7
  struct System_Object_array *v333; // x8
  _QWORD *v334; // x9
  __int64 v335; // x10
  Il2CppClass *v336; // x1
  Il2CppClass **v337; // x0
  System_Collections_Generic_List_object__o *v338; // x20
  System_String_o *v339; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x21
  struct System_Int32_array *eventIdList; // x8
  int32_t v342; // w22
  FollowerInfo_o *v343; // x23
  int32_t v344; // w4
  struct QuestRestrictionInfo_o *v345; // x8
  __int64 v346; // x2
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x21
  PartyOrganizationListViewItem___c_c *v349; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__165_0; // x22
  Il2CppObject *v352; // x23
  struct PartyOrganizationListViewItem___c_StaticFields *v353; // x0
  System_String_o *v354; // x2
  System_String_o *v355; // x3
  int32_t v356; // w4
  int32_t v357; // w5
  bool v358; // w6
  bool v359; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v360; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v361; // x0
  __int64 v362; // x8
  _DWORD *v363; // x21
  unsigned __int64 v364; // x25
  ServantEntity_o *ServantEntity_k__BackingField; // x24
  int32_t v366; // w23
  EventPersonalMargeUpValInfo_o *v367; // x22
  System_String_o *v368; // x3
  int32_t v369; // w4
  int32_t v370; // w5
  bool v371; // w6
  bool v372; // w7
  __int64 v373; // x8
  _QWORD *v374; // x22
  unsigned __int64 v375; // x23
  struct System_Object_array *v376; // x8
  _QWORD *v377; // x9
  __int64 v378; // x10
  Il2CppClass **v379; // x0
  struct QuestRestrictionInfo_o *v380; // x8
  struct ServantEntity_o *v381; // x9
  __int64 v382; // x22
  __int64 v383; // x23
  int32_t questId; // w20
  int32_t questPhase; // w21
  __int64 v386; // x1
  __int64 v387; // x2
  int32_t v388; // w22
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x20
  struct EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  System_String_o *v391; // x2
  System_String_o *v392; // x3
  int32_t v393; // w4
  int32_t v394; // w5
  bool v395; // w6
  bool v396; // w7
  System_Collections_Generic_List_Enumerator_object__o v397; // [xsp+18h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v398; // [xsp+30h] [xbp-F0h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-D0h] BYREF
  bool isDuplicate; // [xsp+5Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList; // [xsp+60h] [xbp-C0h] BYREF
  bool v402; // [xsp+6Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_object__o *v403; // [xsp+70h] [xbp-B0h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v404; // [xsp+78h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *v405; // [xsp+80h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v407; // [xsp+90h] [xbp-90h] BYREF
  bool v408; // [xsp+B4h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v409; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v410; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v411; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v412; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v413; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v414; // 0:x0.16

  followerInfo = (FollowerInfo_o *)&Method_System_Collections_Generic_List_ServantEntity___ctor__;
  if ( (byte_596C021 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_2213A60(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&PartyOrganizationUtility_TypeInfo);
    sub_2213A60(&ServantEntity_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__165_0__);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__165_1__);
    sub_2213A60(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_2213A60(&UserServantEntity_TypeInfo);
    byte_596C021 = 1;
  }
  v409 = 0;
  v408 = 0;
  memset(&v407, 0, sizeof(v407));
  v405 = 0;
  entity = 0;
  v403 = 0;
  v404 = 0;
  v402 = 0;
  infoList = 0;
  isDuplicate = 0;
  eventUpVallInfo = 0;
  memset(&v398, 0, sizeof(v398));
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntityList,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValInfo, 0, v22, v23, v24, v25, v26, v27);
  this->fields.eventUpValItemList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList, 0, v28, v29, v30, v31, v32, v33);
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( otherValidEventIdFilter )
    this->fields.isOtherValidEventIdFilter = 1;
  if ( this->fields.isFollower )
  {
    this->fields.equipIdList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v36, v37, v38, v39, v40, v41);
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo )
      return;
    LODWORD(v42) = this->fields.followerIndex;
    if ( this->fields.followerGrandGraphId > 0 )
    {
      ReturnTypeByQuestId = 2;
      goto LABEL_22;
    }
LABEL_15:
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
LABEL_22:
    IsGrandServant = (void *)FollowerInfo__IsGrandServant(followerInfo, (int32_t)v42, ReturnTypeByQuestId, 0);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      followerIndex = this->fields.followerIndex;
      v56 = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v58 = this->fields.questRestrictionInfo;
        if ( v58 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v58->fields.questId, 0);
          v57 = (int)IsGrandServant;
        }
        else
        {
          v57 = 0;
        }
      }
      else
      {
        v57 = 2;
      }
      if ( !v56 )
        goto LABEL_314;
      EquipSvtIds = (System_Collections_ICollection_o *)FollowerInfo__GetEquipSvtIds(v56, followerIndex, v57, 0);
      IsGrandServant = (void *)BasicHelper__IsNullOrEmpty(EquipSvtIds, 0);
      if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
      {
        if ( !EquipSvtIds )
          goto LABEL_314;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v397,
          (System_Collections_Generic_List_int__o *)EquipSvtIds,
          (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v407 = (System_Collections_Generic_List_Enumerator_int__o)v397;
        v397.fields._list = 0;
        *(_QWORD *)&v397.fields._index = &v407;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v407,
                  (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          current = v407.fields._current;
          equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
          if ( v407.fields._current )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              sub_2213CDC(0, v261);
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !MasterData_object )
              sub_2213CDC(0, v263);
            v264 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     current,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v271 = v264;
            if ( !equipServantEntityList
              || (items = equipServantEntityList->fields._items,
                  v273 = Method_System_Collections_Generic_List_ServantEntity__Add__,
                  ++equipServantEntityList->fields._version,
                  !items) )
            {
              sub_2213CDC(v264, v264);
            }
            size = equipServantEntityList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                equipServantEntityList,
                v264,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
            }
            else
            {
              v275 = &items->obj.klass + size;
              equipServantEntityList->fields._size = size + 1;
              v275[4] = (Il2CppClass *)v271;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v275 + 4),
                (int32_t)v271,
                v265,
                v266,
                v267,
                v268,
                v269,
                v270);
            }
          }
          else
          {
            v276 = (ServantEntity_o *)sub_2213CCC(ServantEntity_TypeInfo);
            ServantEntity___ctor(v276, 0);
            if ( !equipServantEntityList
              || (v285 = equipServantEntityList->fields._items,
                  v286 = Method_System_Collections_Generic_List_ServantEntity__Add__,
                  ++equipServantEntityList->fields._version,
                  !v285) )
            {
              sub_2213CDC(v277, v278);
            }
            v287 = equipServantEntityList->fields._size;
            if ( (unsigned int)v287 >= LODWORD(v285->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                equipServantEntityList,
                (Il2CppObject *)v276,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
            }
            else
            {
              v288 = &v285->obj.klass + v287;
              equipServantEntityList->fields._size = v287 + 1;
              v288[4] = (Il2CppClass *)v276;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v288 + 4),
                (int32_t)v276,
                v279,
                v280,
                v281,
                v282,
                v283,
                v284);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v407,
          (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      }
    }
    else
    {
      v317 = this->fields.followerIndex;
      v318 = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v320 = this->fields.questRestrictionInfo;
        if ( v320 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v320->fields.questId, 0);
          v319 = (int)IsGrandServant;
        }
        else
        {
          v319 = 0;
        }
      }
      else
      {
        v319 = 2;
      }
      if ( !v318 )
        goto LABEL_314;
      if ( FollowerInfo__getEquipSvtId(v318, v317, v319, 0) >= 1 )
      {
        v321 = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_314;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        v322 = this->fields.followerIndex;
        v323 = this->fields.followerInfo;
        v324 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v326 = this->fields.questRestrictionInfo;
          if ( v326 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v326->fields.questId, 0);
            v325 = (int)IsGrandServant;
          }
          else
          {
            v325 = 0;
          }
        }
        else
        {
          v325 = 2;
        }
        if ( !v323 )
          goto LABEL_314;
        IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v323, v322, v325, 0);
        if ( !v324 )
          goto LABEL_314;
        IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                           v324,
                           (int32_t)IsGrandServant,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v321 )
          goto LABEL_314;
        v333 = v321->fields._items;
        v334 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v321->fields._version;
        if ( !v333 )
          goto LABEL_314;
        v335 = v321->fields._size;
        v336 = (Il2CppClass *)IsGrandServant;
        if ( (unsigned int)v335 >= LODWORD(v333->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v321,
            (Il2CppObject *)IsGrandServant,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v334[4] + 192LL) + 112LL));
        }
        else
        {
          v337 = &v333->obj.klass + v335;
          v321->fields._size = v335 + 1;
          v337[4] = v336;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v337 + 4), (int32_t)v336, v327, v328, v329, v330, v331, v332);
        }
      }
    }
    v338 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v338,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    setupInfo = this->fields.setupInfo;
    v409 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v338;
    if ( setupInfo )
    {
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_314;
      if ( eventIdList->max_length )
      {
        v342 = this->fields.followerIndex;
        v343 = this->fields.followerInfo;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v345 = this->fields.questRestrictionInfo;
          if ( v345 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v345->fields.questId, 0);
            v344 = (int)IsGrandServant;
          }
          else
          {
            v344 = 0;
          }
        }
        else
        {
          v344 = 2;
        }
        if ( !v343 )
          goto LABEL_314;
        IsGrandServant = (void *)FollowerInfo__getEventUpVal(
                                   v343,
                                   &this->fields.eventUpValInfo,
                                   setupInfo,
                                   v342,
                                   v344,
                                   0);
        eventUpValInfo = this->fields.eventUpValInfo;
        this->fields.isEventUpVal = (unsigned __int8)IsGrandServant & 1;
        if ( !eventUpValInfo )
          goto LABEL_314;
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v349 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, eventUpValItemList, v346);
          v349 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        static_fields = v349->static_fields;
        _9__165_0 = (System_Func_object__int__o *)static_fields->__9__165_0;
        if ( !_9__165_0 )
        {
          if ( !*(&v349->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v349, eventUpValItemList, v346);
            static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          }
          v352 = (Il2CppObject *)static_fields->__9;
          _9__165_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__165_0,
            v352,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__165_0__,
            0);
          v353 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v353->__9__165_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__165_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v353->__9__165_0,
            (int32_t)_9__165_0,
            v354,
            v355,
            v356,
            v357,
            v358,
            v359);
        }
        v360 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      dropList,
                                                                      (System_Func_TSource__TResult__o *)_9__165_0,
                                                                      (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v361 = System_Linq_Enumerable__Distinct_int_(
                 v360,
                 (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
        IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                           v361,
                           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !IsGrandServant )
          goto LABEL_314;
        v362 = *((_QWORD *)IsGrandServant + 3);
        v363 = IsGrandServant;
        if ( (int)v362 >= 1 )
        {
          v364 = 0;
          while ( 1 )
          {
            if ( v364 >= (unsigned int)v362 )
              goto LABEL_315;
            ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
            v366 = v363[v364 + 8];
            v367 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v367, v366, ServantEntity_k__BackingField, 0);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_314;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
            if ( !v367 )
              goto LABEL_314;
            EventPersonalMargeUpValInfo__Add(v367, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v367, 0);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v367, 0);
              if ( !IsGrandServant )
                goto LABEL_314;
              v373 = *((_QWORD *)IsGrandServant + 3);
              v374 = IsGrandServant;
              if ( (int)v373 >= 1 )
                break;
            }
LABEL_302:
            LODWORD(v362) = v363[6];
            if ( (__int64)++v364 >= (int)v362 )
              goto LABEL_303;
          }
          v375 = 0;
          while ( v375 < (unsigned int)v373 )
          {
            if ( !v338 )
              goto LABEL_314;
            v376 = v338->fields._items;
            eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v374[v375 + 4];
            v377 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v338->fields._version;
            if ( !v376 )
              goto LABEL_314;
            v378 = v338->fields._size;
            if ( (unsigned int)v378 >= LODWORD(v376->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v338,
                &eventUpValItemList->obj,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v377[4] + 192LL) + 112LL));
            }
            else
            {
              v379 = &v376->obj.klass + v378;
              v338->fields._size = v378 + 1;
              v379[4] = (Il2CppClass *)eventUpValItemList;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v379 + 4),
                (int32_t)eventUpValItemList,
                v339,
                v368,
                v369,
                v370,
                v371,
                v372);
            }
            LODWORD(v373) = *((_DWORD *)v374 + 6);
            if ( (__int64)++v375 >= (int)v373 )
              goto LABEL_302;
          }
          goto LABEL_315;
        }
      }
    }
LABEL_303:
    v380 = this->fields.questRestrictionInfo;
    if ( v380 )
    {
      v381 = this->fields._ServantEntity_k__BackingField;
      if ( !v381 )
        goto LABEL_314;
      v382 = *(_QWORD *)&v381->fields.id.fields.currentCryptoKey;
      v383 = *(_QWORD *)&v381->fields.id.fields.fakeValue;
      questId = v380->fields.questId;
      questPhase = v380->fields.questPhase;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpValItemList, v339);
      *(_QWORD *)&v414.fields.currentCryptoKey = v382;
      *(_QWORD *)&v414.fields.fakeValue = v383;
      v388 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v414, 0);
      if ( !*(&PartyOrganizationUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v386, v387);
      PartyOrganizationUtility__SetAddPassiveCampaignInfo(&v409, questId, questPhase, v388, 0);
    }
    IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( IsGrandServant )
    {
      AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                                                    (PartyOrganizationUtility_o *)IsGrandServant,
                                                                                                    &v408,
                                                                                                    v409,
                                                                                                    0);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( IsGrandServant )
      {
        AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                          (PartyOrganizationUtility_o *)IsGrandServant,
                          AdjustUpValInfoArray,
                          0);
        this->fields.eventUpValItemList = AddUpValInfos;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList,
          (int32_t)AddUpValInfos,
          v391,
          v392,
          v393,
          v394,
          v395,
          v396);
        this->fields._IsDuplicateBonus_k__BackingField = v408;
        return;
      }
    }
    goto LABEL_314;
  }
  if ( !this->fields.userServantEntity )
  {
    this->fields.equipIdList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v36, v37, v38, v39, v40, v41);
    return;
  }
  if ( !equipIdList )
  {
    v54 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, eventUpValItemList, v36);
      v54 = BalanceConfig_TypeInfo;
    }
    v52 = (struct System_Int64_array *)sub_2213B20(long___TypeInfo, (unsigned int)v54->static_fields->SvtEquipMax);
LABEL_28:
    this->fields.equipIdList = v52;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList,
      (int32_t)v52,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_314;
    goto LABEL_29;
  }
  if ( this->fields.equipIdList != equipIdList )
  {
    v44 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v44 )
    {
      v42 = v44;
      v51 = long___TypeInfo;
      v52 = (struct System_Int64_array *)sub_2213BB4(v44, long___TypeInfo);
      if ( !v52 )
      {
        sub_221405C(v42, v51, v45, v46);
        goto LABEL_15;
      }
    }
    else
    {
      v52 = 0;
    }
    goto LABEL_28;
  }
LABEL_29:
  v59 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(equipIdList->max_length);
    if ( (__int64)v59 >= (int)max_length_low )
      break;
    if ( v59 >= max_length_low )
      goto LABEL_315;
    if ( equipIdList->m_Items[v59] < 1 )
      goto LABEL_64;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_314;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    v61 = this->fields.equipIdList;
    if ( !v61 )
      goto LABEL_314;
    if ( v59 >= LODWORD(v61->max_length) )
      goto LABEL_315;
    if ( !IsGrandServant )
      goto LABEL_314;
    IsGrandServant = (void *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                               &entity,
                               v61->m_Items[v59],
                               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      IsGrandServant = this->fields.equipUserServantEntityList;
      if ( !IsGrandServant )
        goto LABEL_314;
      v68 = *((_QWORD *)IsGrandServant + 2);
      eventUpValItemList = (struct EventMargeItemUpValInfo_array *)entity;
      v69 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v68 )
        goto LABEL_314;
      v70 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          &eventUpValItemList->obj,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = v68 + 8 * v70;
        *((_DWORD *)IsGrandServant + 6) = v70 + 1;
        *(_QWORD *)(v71 + 32) = eventUpValItemList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v71 + 32),
          (int32_t)eventUpValItemList,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      if ( !entity )
        goto LABEL_314;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpValItemList, v72);
      *(_QWORD *)&v410.fields.currentCryptoKey = klass;
      *(_QWORD *)&v410.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v410, 0) <= 0 )
      {
        v125 = (Il2CppObject *)sub_2213CCC(ServantEntity_TypeInfo);
        ServantEntity___ctor((ServantEntity_o *)v125, 0);
      }
      else
      {
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_314;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !entity )
          goto LABEL_314;
        v122 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        v123 = entity[5].klass;
        v124 = entity[5].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            eventUpValItemList,
            v121);
        *(_QWORD *)&v411.fields.currentCryptoKey = v123;
        *(_QWORD *)&v411.fields.fakeValue = v124;
        IsGrandServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v411, 0);
        if ( !v122 )
          goto LABEL_314;
        v125 = DataMasterBase_object__object__int___GetEntity(
                 v122,
                 (int32_t)IsGrandServant,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      IsGrandServant = this->fields.equipServantEntityList;
      if ( !IsGrandServant )
        goto LABEL_314;
      v126 = *((_QWORD *)IsGrandServant + 2);
      v127 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v126 )
        goto LABEL_314;
      v128 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
      {
        v117 = v127[4];
        v118 = v125;
        goto LABEL_92;
      }
      v129 = v126 + 8 * v128;
      v115 = (int)v125;
      *((_DWORD *)IsGrandServant + 6) = v128 + 1;
      *(_QWORD *)(v129 + 32) = v125;
      v116 = (MissionNaviTransitionBoardItem_o *)(v129 + 32);
      goto LABEL_90;
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    if ( !equipSvtIdList )
      goto LABEL_61;
    if ( v59 >= LODWORD(equipSvtIdList->max_length) )
      goto LABEL_315;
    if ( equipSvtIdList->m_Items[v59] < 1 )
      goto LABEL_61;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventUpValItemList, v62);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, eventUpValItemList, v74);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    IsGrandServant = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, eventUpValItemList, v74);
      IsGrandServant = NetworkManager_TypeInfo;
    }
    v76 = this->fields.equipSvtIdList;
    if ( !v76 )
      goto LABEL_314;
    if ( v59 >= LODWORD(v76->max_length) )
      goto LABEL_315;
    if ( !Master_object )
      goto LABEL_314;
    IsGrandServant = (void *)UserServantCollectionMaster__TryGetEntity(
                               (UserServantCollectionMaster_o *)Master_object,
                               &v405,
                               *(_QWORD *)(*((_QWORD *)IsGrandServant + 23) + 64LL),
                               v76->m_Items[v59],
                               0);
    if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
    {
LABEL_61:
      v90 = this->fields.equipIdList;
      if ( !v90 )
        goto LABEL_314;
      if ( v59 >= LODWORD(v90->max_length) )
        goto LABEL_315;
      v90->m_Items[v59] = 0;
LABEL_64:
      equipUserServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
      v92 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v92, 0);
      if ( !equipUserServantEntityList )
        goto LABEL_314;
      v99 = equipUserServantEntityList->fields._items;
      v100 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++equipUserServantEntityList->fields._version;
      if ( !v99 )
        goto LABEL_314;
      v101 = equipUserServantEntityList->fields._size;
      if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          equipUserServantEntityList,
          (Il2CppObject *)v92,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
      }
      else
      {
        v102 = &v99->obj.klass + v101;
        equipUserServantEntityList->fields._size = v101 + 1;
        v102[4] = (Il2CppClass *)v92;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v102 + 4), (int32_t)v92, v93, v94, v95, v96, v97, v98);
      }
      v103 = this->fields.equipServantEntityList;
      v104 = (ServantEntity_o *)sub_2213CCC(ServantEntity_TypeInfo);
      ServantEntity___ctor(v104, 0);
      if ( !v103 )
        goto LABEL_314;
      v111 = v103->fields._items;
      v112 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++v103->fields._version;
      if ( !v111 )
        goto LABEL_314;
      v113 = v103->fields._size;
      if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
      {
        v117 = v112[4];
        IsGrandServant = v103;
        v118 = (Il2CppObject *)v104;
LABEL_92:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v118,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v117 + 192) + 112LL));
        goto LABEL_93;
      }
      v114 = &v111->obj.klass + v113;
      v115 = (int)v104;
      v103->fields._size = v113 + 1;
      v114[4] = (Il2CppClass *)v104;
      v116 = (MissionNaviTransitionBoardItem_o *)(v114 + 4);
LABEL_90:
      sub_2213A04(v116, v115, v105, v106, v107, v108, v109, v110);
      goto LABEL_93;
    }
    v77 = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
    v78 = v405;
    v79 = (UserServantEntity_o *)sub_2213CCC(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_50174004(v79, v78, 0, 0);
    if ( !v77 )
      goto LABEL_314;
    v86 = v77->fields._items;
    v87 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v77->fields._version;
    if ( !v86 )
      goto LABEL_314;
    v88 = v77->fields._size;
    if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v77,
        (Il2CppObject *)v79,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &v86->obj.klass + v88;
      v77->fields._size = v88 + 1;
      v89[4] = (Il2CppClass *)v79;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v89 + 4), (int32_t)v79, v80, v81, v82, v83, v84, v85);
    }
    v130 = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_314;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    v131 = this->fields.equipSvtIdList;
    if ( !v131 )
      goto LABEL_314;
    if ( v59 >= LODWORD(v131->max_length) )
      goto LABEL_315;
    if ( !IsGrandServant )
      goto LABEL_314;
    IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                       v131->m_Items[v59],
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v130 )
      goto LABEL_314;
    v138 = v130->fields._items;
    v139 = Method_System_Collections_Generic_List_ServantEntity__Add__;
    ++v130->fields._version;
    if ( !v138 )
      goto LABEL_314;
    v140 = v130->fields._size;
    v141 = (Il2CppClass *)IsGrandServant;
    if ( (unsigned int)v140 >= LODWORD(v138->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v130,
        (Il2CppObject *)IsGrandServant,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
    }
    else
    {
      v142 = &v138->obj.klass + v140;
      v130->fields._size = v140 + 1;
      v142[4] = v141;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v142 + 4), (int32_t)v141, v132, v133, v134, v135, v136, v137);
    }
    this->fields._IsDisappearEquip_k__BackingField = 1;
LABEL_93:
    equipIdList = this->fields.equipIdList;
    ++v59;
    if ( !equipIdList )
      goto LABEL_314;
  }
  p_setupInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo;
  v143 = this->fields.setupInfo;
  if ( !v143 )
    goto LABEL_113;
  v145 = v143->fields.eventIdList;
  if ( !v145 )
    goto LABEL_314;
  if ( !v145->max_length )
  {
LABEL_113:
    v149 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v149,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v151 = this->fields.questRestrictionInfo;
    infoList = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v149;
    if ( !v151 )
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 0, v150);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsGrandServant )
        goto LABEL_314;
      v165 = infoList;
      goto LABEL_161;
    }
    PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 1, v150);
    v153 = this->fields.questRestrictionInfo;
    if ( v153 )
    {
      v154 = this->fields._ServantEntity_k__BackingField;
      if ( v154 )
      {
        v155 = *(_QWORD *)&v154->fields.id.fields.currentCryptoKey;
        v156 = *(_QWORD *)&v154->fields.id.fields.fakeValue;
        v157 = v153->fields.questId;
        v158 = v153->fields.questPhase;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            eventUpValItemList,
            v152);
        *(_QWORD *)&v412.fields.currentCryptoKey = v155;
        *(_QWORD *)&v412.fields.fakeValue = v156;
        v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v412, 0);
        if ( !*(&PartyOrganizationUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v159, v160);
        PartyOrganizationUtility__SetAddPassiveCampaignInfo(&infoList, v157, v158, v161, 0);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsGrandServant )
        {
          v162 = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                   (PartyOrganizationUtility_o *)IsGrandServant,
                   &isDuplicate,
                   infoList,
                   0);
          v163 = isDuplicate;
          v164 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
          goto LABEL_159;
        }
      }
    }
    goto LABEL_314;
  }
  userServantEntity = this->fields.userServantEntity;
  EquipList = PartyOrganizationListViewItem__GetEquipList(this, (const MethodInfo *)eventUpValItemList);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_314;
  if ( this->fields._IsGrandServant_k__BackingField )
  {
    IsTempGrandServant_k__BackingField = 1;
    if ( !userServantEntity )
      goto LABEL_314;
  }
  else
  {
    IsTempGrandServant_k__BackingField = this->fields._IsTempGrandServant_k__BackingField;
    if ( !userServantEntity )
      goto LABEL_314;
  }
  EventUpVal_50186428 = UserServantEntity__getEventUpVal_50186428(
                          userServantEntity,
                          &this->fields.eventUpValInfo,
                          v143,
                          EquipList,
                          *((_QWORD *)IsGrandServant + 17),
                          0,
                          IsTempGrandServant_k__BackingField,
                          otherValidEventIdFilter,
                          0);
  v167 = this->fields.questRestrictionInfo;
  this->fields.isEventUpVal = EventUpVal_50186428;
  if ( !v167 )
  {
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( IsGrandServant )
    {
      v234 = DataManager__GetMasterData_object_(
               (DataManager_o *)IsGrandServant,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      v235 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v235,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v237 = p_setupInfo->klass;
      v404 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v235;
      if ( v237 )
      {
        data = v237->_1.byval_arg.data;
        if ( data )
        {
          v239 = data[3];
          if ( (int)v239 >= 1 )
          {
            v240 = 0;
            while ( 1 )
            {
              if ( v240 >= (unsigned int)v239 )
                goto LABEL_315;
              if ( !v234 )
                goto LABEL_314;
              v241 = *((_DWORD *)data + v240 + 8);
              v242 = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v234,
                       v241,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !v242
                || (IsGrandServant = (void *)EventDetailEntity__HasFlag((EventDetailEntity_o *)v242, 0x800000000LL, 0),
                    ((unsigned __int8)IsGrandServant & 1) == 0) )
              {
                v243 = this->fields._ServantEntity_k__BackingField;
                v244 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
                EventPersonalMargeUpValInfo___ctor(v244, v241, v243, 0);
                IsGrandServant = this->fields.eventUpValInfo;
                if ( !IsGrandServant )
                  goto LABEL_314;
                IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
                if ( !v244 )
                  goto LABEL_314;
                EventPersonalMargeUpValInfo__Add(v244, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
                IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v244, 0);
                if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
                {
                  IsGrandServant = EventPersonalMargeUpValInfo__GetList(v244, 0);
                  if ( !IsGrandServant )
                    goto LABEL_314;
                  v250 = *((_QWORD *)IsGrandServant + 3);
                  v251 = IsGrandServant;
                  if ( (int)v250 >= 1 )
                    break;
                }
              }
LABEL_192:
              LODWORD(v239) = *((_DWORD *)data + 6);
              if ( (__int64)++v240 >= (int)v239 )
                goto LABEL_193;
            }
            v252 = 0;
            while ( v252 < (unsigned int)v250 )
            {
              if ( !v235 )
                goto LABEL_314;
              v253 = v235->fields._items;
              eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v251[v252 + 4];
              v254 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v235->fields._version;
              if ( !v253 )
                goto LABEL_314;
              v255 = v235->fields._size;
              if ( (unsigned int)v255 >= LODWORD(v253->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v235,
                  &eventUpValItemList->obj,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
              }
              else
              {
                v256 = &v253->obj.klass + v255;
                v235->fields._size = v255 + 1;
                v256[4] = (Il2CppClass *)eventUpValItemList;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v256 + 4),
                  (int32_t)eventUpValItemList,
                  v245,
                  v236,
                  v246,
                  v247,
                  v248,
                  v249);
              }
              LODWORD(v250) = *((_DWORD *)v251 + 6);
              if ( (__int64)++v252 >= (int)v250 )
                goto LABEL_192;
            }
LABEL_315:
            sub_2213CE4(IsGrandServant);
          }
LABEL_193:
          PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v404, 0, (const MethodInfo *)v236);
          IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !IsGrandServant )
            goto LABEL_314;
          v214 = PartyOrganizationUtility__GetAddUpValInfos(
                   (PartyOrganizationUtility_o *)IsGrandServant,
                   (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v235,
                   0);
          p_setupInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo;
          goto LABEL_162;
        }
      }
    }
    goto LABEL_314;
  }
  v168 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v168,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v170 = this->fields.eventUpValInfo;
  v403 = v168;
  if ( !v170 )
    goto LABEL_314;
  v171 = (System_Collections_Generic_IEnumerable_TSource__o *)v170->fields.dropList;
  v172 = PartyOrganizationListViewItem___c_TypeInfo;
  if ( !*(&PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, eventUpValItemList, v169);
    v172 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  v173 = v172->static_fields;
  _9__165_1 = (System_Func_object__int__o *)v173->__9__165_1;
  if ( !_9__165_1 )
  {
    if ( !*(&v172->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v172, eventUpValItemList, v169);
      v173 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    }
    v175 = (Il2CppObject *)v173->__9;
    _9__165_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventDropUpValInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__165_1,
      v175,
      Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__165_1__,
      0);
    v176 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v176->__9__165_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__165_1;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v176->__9__165_1,
      (int32_t)_9__165_1,
      v177,
      v178,
      v179,
      v180,
      v181,
      v182);
  }
  v183 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v171,
                                                                (System_Func_TSource__TResult__o *)_9__165_1,
                                                                (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
  v184 = System_Linq_Enumerable__Distinct_int_(
           v183,
           (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                     v184,
                     (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !IsGrandServant )
    goto LABEL_314;
  v186 = *((_QWORD *)IsGrandServant + 3);
  v187 = IsGrandServant;
  if ( (int)v186 >= 1 )
  {
    v188 = 0;
    while ( 1 )
    {
      if ( v188 >= (unsigned int)v186 )
        goto LABEL_315;
      v189 = this->fields._ServantEntity_k__BackingField;
      v190 = v187[v188 + 8];
      v191 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v191, v190, v189, 0);
      IsGrandServant = this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_314;
      IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
      if ( !v191 )
        goto LABEL_314;
      EventPersonalMargeUpValInfo__Add(v191, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
      IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v191, 0);
      if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
      {
        IsGrandServant = EventPersonalMargeUpValInfo__GetList(v191, 0);
        if ( !IsGrandServant )
          goto LABEL_314;
        v197 = *((_QWORD *)IsGrandServant + 3);
        v198 = IsGrandServant;
        if ( (int)v197 >= 1 )
          break;
      }
LABEL_150:
      LODWORD(v186) = v187[6];
      if ( (__int64)++v188 >= (int)v186 )
        goto LABEL_151;
    }
    v199 = 0;
    while ( v199 < (unsigned int)v197 )
    {
      IsGrandServant = v403;
      if ( !v403 )
        goto LABEL_314;
      v200 = v403->fields._items;
      eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v198[v199 + 4];
      v201 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v403->fields._version;
      if ( !v200 )
        goto LABEL_314;
      v202 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v202 >= LODWORD(v200->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          &eventUpValItemList->obj,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
      }
      else
      {
        v203 = &v200->obj.klass + v202;
        *((_DWORD *)IsGrandServant + 6) = v202 + 1;
        v203[4] = (Il2CppClass *)eventUpValItemList;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v203 + 4),
          (int32_t)eventUpValItemList,
          v192,
          v185,
          v193,
          v194,
          v195,
          v196);
      }
      LODWORD(v197) = *((_DWORD *)v198 + 6);
      if ( (__int64)++v199 >= (int)v197 )
        goto LABEL_150;
    }
    goto LABEL_315;
  }
LABEL_151:
  PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(
    this,
    (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v403,
    1,
    (const MethodInfo *)v185);
  v205 = this->fields.questRestrictionInfo;
  if ( !v205 )
    goto LABEL_314;
  v206 = this->fields._ServantEntity_k__BackingField;
  if ( !v206 )
    goto LABEL_314;
  v207 = *(_QWORD *)&v206->fields.id.fields.currentCryptoKey;
  v208 = *(_QWORD *)&v206->fields.id.fields.fakeValue;
  v209 = v205->fields.questId;
  v210 = v205->fields.questPhase;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, eventUpValItemList, v204);
  *(_QWORD *)&v413.fields.currentCryptoKey = v207;
  *(_QWORD *)&v413.fields.fakeValue = v208;
  v213 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v413, 0);
  if ( !*(&PartyOrganizationUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v211, v212);
  PartyOrganizationUtility__SetAddPassiveCampaignInfo(
    (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v403,
    v209,
    v210,
    v213,
    0);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_314;
  v162 = PartyOrganizationUtility__GetAdjustUpValInfoArray(
           (PartyOrganizationUtility_o *)IsGrandServant,
           &v402,
           (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v403,
           0);
  v163 = v402;
  v164 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
LABEL_159:
  this->fields._IsDuplicateBonus_k__BackingField = v163;
  IsGrandServant = SingletonTemplate_object___get_Instance(v164);
  if ( !IsGrandServant )
    goto LABEL_314;
  v165 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v162;
LABEL_161:
  v214 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v165,
           0);
LABEL_162:
  this->fields.eventUpValItemList = v214;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList,
    (int32_t)v214,
    v215,
    v216,
    v217,
    v218,
    v219,
    v220);
  if ( !this->fields.questRestrictionInfo )
    return;
  if ( !p_setupInfo->klass )
  {
    v222 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 1);
    v223 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_48741124(v223, v222, 0, 0, 0, 0);
    p_setupInfo->klass = (MissionNaviTransitionBoardItem_c *)v223;
    sub_2213A04(p_setupInfo, (int32_t)v223, v224, v225, v226, v227, v228, v229);
  }
  if ( !this->fields.isEventUpVal || !this->fields.eventUpValInfo )
  {
    v303 = this->fields.userServantEntity;
    v304 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v221);
    v305 = this->fields.questRestrictionInfo;
    if ( !v305 )
      goto LABEL_314;
    if ( this->fields._IsGrandServant_k__BackingField )
    {
      v306 = 1;
      if ( !v303 )
        goto LABEL_314;
    }
    else
    {
      v306 = this->fields._IsTempGrandServant_k__BackingField;
      if ( !v303 )
        goto LABEL_314;
    }
    this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                  v303,
                                  &this->fields.eventUpValInfo,
                                  v304,
                                  (System_Int64_array *)IsGrandServant,
                                  v305->fields.questId,
                                  v305->fields.questPhase,
                                  0,
                                  v306,
                                  0);
    goto LABEL_240;
  }
  v230 = this->fields.userServantEntity;
  v231 = this->fields.setupInfo;
  IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v221);
  v232 = this->fields.questRestrictionInfo;
  if ( !v232 )
    goto LABEL_314;
  v233 = this->fields._IsGrandServant_k__BackingField || this->fields._IsTempGrandServant_k__BackingField;
  if ( !v230 )
    goto LABEL_314;
  IsGrandServant = (void *)UserServantEntity__GetBonusUpVal(
                             v230,
                             &eventUpVallInfo,
                             v231,
                             (System_Int64_array *)IsGrandServant,
                             v232->fields.questId,
                             v232->fields.questPhase,
                             0,
                             v233,
                             0);
  if ( !eventUpVallInfo )
    goto LABEL_314;
  IsGrandServant = eventUpVallInfo->fields.dropList;
  if ( !IsGrandServant )
    goto LABEL_314;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v397,
    (System_Collections_Generic_List_object__o *)IsGrandServant,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v398 = v397;
  v397.fields._list = 0;
  *(_QWORD *)&v397.fields._index = &v398;
  while ( 1 )
  {
    v289 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v398,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v289 )
      break;
    v297 = this->fields.eventUpValInfo;
    if ( !v297 )
      sub_2213CDC(v289, v290);
    v298 = (System_Collections_Generic_List_object__o *)v297->fields.dropList;
    if ( !v298
      || (v299 = v298->fields._items,
          v290 = v398.fields._current,
          v300 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__,
          ++v298->fields._version,
          !v299) )
    {
      sub_2213CDC(v298, v290);
    }
    v301 = v298->fields._size;
    if ( (unsigned int)v301 >= LODWORD(v299->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v298,
        v290,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v300[4] + 192LL) + 112LL));
    }
    else
    {
      v302 = &v299->obj.klass + v301;
      v298->fields._size = v301 + 1;
      v302[4] = (Il2CppClass *)v290;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v302 + 4), (int32_t)v290, v291, v292, v293, v294, v295, v296);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v398,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
LABEL_240:
  v307 = this->fields._ServantEntity_k__BackingField;
  v308 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
  EventPersonalMargeUpValInfo___ctor(v308, 0, v307, 0);
  IsGrandServant = this->fields.eventUpValInfo;
  if ( !IsGrandServant
    || (IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0), !v308) )
  {
LABEL_314:
    sub_2213CDC(IsGrandServant, eventUpValItemList);
  }
  EventPersonalMargeUpValInfo__Add(v308, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
  if ( !EventPersonalMargeUpValInfo__IsEmpty(v308, 0) )
  {
    v309 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v309,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    eventUpValItemList = this->fields.eventUpValItemList;
    if ( eventUpValItemList )
    {
      if ( !v309 )
        goto LABEL_314;
      System_Collections_Generic_List_object___AddRange(
        v309,
        (System_Collections_Generic_IEnumerable_T__o *)eventUpValItemList,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
      IsGrandServant = EventPersonalMargeUpValInfo__GetList(v308, 0);
    }
    else
    {
      IsGrandServant = EventPersonalMargeUpValInfo__GetList(v308, 0);
      if ( !v309 )
        goto LABEL_314;
    }
    System_Collections_Generic_List_object___AddRange(
      v309,
      (System_Collections_Generic_IEnumerable_T__o *)IsGrandServant,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( IsGrandServant )
    {
      v310 = PartyOrganizationUtility__GetAddUpValInfos(
               (PartyOrganizationUtility_o *)IsGrandServant,
               (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v309,
               0);
      this->fields.eventUpValItemList = v310;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.eventUpValItemList,
        (int32_t)v310,
        v311,
        v312,
        v313,
        v314,
        v315,
        v316);
      return;
    }
    goto LABEL_314;
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v10; // x3

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( LODWORD(equipIdList->max_length) <= index )
      sub_2213CE4(this);
    this->fields.equipSvtIdList = 0;
    equipIdList->m_Items[index] = userSvtId;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.equipSvtIdList,
      0,
      *(System_String_o **)&index,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, 0, v10);
  }
}


void PartyOrganizationListViewItem__SetEquipUserServantIdList(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *userSvtIdList,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Int64_array **p_equipIdList; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x3

  this->fields.equipIdList = userSvtIdList;
  p_equipIdList = &this->fields.equipIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList,
    (int32_t)userSvtIdList,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.equipSvtIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipSvtIdList, 0, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._WaveEnemyClassIds_k__BackingField = classIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewItem__Swap(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  uint8x8_t v8; // d15
  PartyOrganizationListViewItem_o *v11; // x24
  __int64 v12; // d10
  __int64 v13; // d11
  __int64 v14; // d12
  __int64 v15; // d13
  __int64 v16; // d14
  __int64 v17; // d9
  Il2CppClass **p_klass; // x20
  _QWORD *p_equipSvtIdList; // x25
  __int64 v20; // d8
  struct UserServantEntity_o *v21; // x1
  int32_t EquipFriendShipSkillChange_k__BackingField; // w9
  int32_t TempOverwriteTreasureDeviceLv_k__BackingField; // w8
  struct FollowerInfo_o *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct ServantEntity_o *v31; // x1
  int32_t v32; // w8
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct ServantEntity_o *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Int32_array *v46; // x1
  __int128 v47; // q0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int64_t v60; // x8
  bool v61; // w9
  System_Array_o *equipSvtIdList; // x0
  struct System_Int32_array **v63; // x21
  int64_t v64; // x9
  Il2CppObject *v65; // x0
  Il2CppClass *v66; // x28
  Il2CppObject *v67; // x27
  __int64 v68; // x0
  __int64 v69; // x0
  int32_t v70; // w1
  const MethodInfo *v71; // x3
  struct EventCampaignEntity_array *v72; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // d0
  bool v86; // w9
  bool v87; // w9
  bool v88; // w8
  int32_t v89; // w8
  int32_t v90; // w9
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  Il2CppObject *v121; // x0
  Il2CppClass *v122; // x22
  Il2CppObject *v123; // x20
  __int64 v124; // x0
  __int64 v125; // x0
  int32_t v126; // w1
  const MethodInfo *v127; // x3
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  int32_t InitPos_k__BackingField; // [xsp+Ch] [xbp-174h]
  Il2CppClass **v135; // [xsp+10h] [xbp-170h]
  int16x8_t v136; // [xsp+10h] [xbp-170h]
  int32_t v137; // [xsp+20h] [xbp-160h]
  int32_t v138; // [xsp+24h] [xbp-15Ch]
  bool IsUseGrandBoard_k__BackingField; // [xsp+28h] [xbp-158h]
  bool IsTempGrandServant_k__BackingField; // [xsp+2Ch] [xbp-154h]
  bool IsGrandServant_k__BackingField; // [xsp+30h] [xbp-150h]
  bool IsDisappearEquip_k__BackingField; // [xsp+34h] [xbp-14Ch]
  bool IsDisappearSvt_k__BackingField; // [xsp+38h] [xbp-148h]
  bool IsClearedWave_k__BackingField; // [xsp+3Ch] [xbp-144h]
  bool IsNotSupportSingle_k__BackingField; // [xsp+40h] [xbp-140h]
  int32_t TimesToRestart_k__BackingField; // [xsp+44h] [xbp-13Ch]
  bool IsDataLost_k__BackingField; // [xsp+48h] [xbp-138h]
  bool IsAllOutBattle_k__BackingField; // [xsp+4Ch] [xbp-134h]
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // [xsp+50h] [xbp-130h]
  bool IsDispSvtPoint_k__BackingField; // [xsp+5Ch] [xbp-124h]
  bool IsNotClassBoardNpc_k__BackingField; // [xsp+60h] [xbp-120h]
  int32_t NowPos_k__BackingField; // [xsp+64h] [xbp-11Ch]
  System_Int64_array *equipIdList; // [xsp+68h] [xbp-118h]
  bool isRestrictionActiveGrandBoard; // [xsp+78h] [xbp-108h]
  bool isRestrictionGrandServant; // [xsp+7Ch] [xbp-104h]
  bool isRestrictionServantPos; // [xsp+80h] [xbp-100h]
  int32_t followerIndex; // [xsp+84h] [xbp-FCh]
  struct FollowerInfo_o *followerInfo; // [xsp+88h] [xbp-F8h]
  struct UserServantEntity_o *userServantEntity; // [xsp+90h] [xbp-F0h]
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // [xsp+98h] [xbp-E8h]
  bool isFixNpc; // [xsp+A0h] [xbp-E0h]
  bool isFollower; // [xsp+A4h] [xbp-DCh]
  struct ServantEntity_o *ServantEntity_k__BackingField; // [xsp+A8h] [xbp-D8h]
  struct System_Int32_array *commandCodeIdList; // [xsp+B0h] [xbp-D0h]
  int64_t npcFollowerSvtId; // [xsp+B8h] [xbp-C8h]
  bool isFixMultipleNpc; // [xsp+C4h] [xbp-BCh]
  bool isFixMultipleNpcRestriction; // [xsp+C8h] [xbp-B8h]
  bool isFatigureRecover; // [xsp+CCh] [xbp-B4h]
  int64_t fatigureTime; // [xsp+D0h] [xbp-B0h]
  bool v170; // [xsp+DCh] [xbp-A4h]

  v11 = this;
  if ( (byte_596C026 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_2213A60(&int___TypeInfo);
    byte_596C026 = 1;
  }
  v170 = notChangeInitPos;
  if ( !item )
    sub_2213CDC(this, item);
  v12 = *(_QWORD *)&v11->fields.cost;
  v13 = *(_QWORD *)&v11->fields.atk;
  followerInfo = v11->fields.followerInfo;
  userServantEntity = v11->fields.userServantEntity;
  v14 = *(_QWORD *)&v11->fields.rarityId;
  v15 = *(_QWORD *)&v11->fields.frameType;
  v16 = *(_QWORD *)&v11->fields.followerClassId;
  isFixNpc = v11->fields.isFixNpc;
  isFollower = v11->fields.isFollower;
  v17 = *(_QWORD *)&v11->fields.isQuestRestriction;
  followerIndex = v11->fields.followerIndex;
  p_equipSvtIdList = &v11->fields.equipSvtIdList;
  p_klass = &v11->fields.equipSvtIdList->obj.klass;
  equipIdList = v11->fields.equipIdList;
  BaseServantEntity_k__BackingField = v11->fields._BaseServantEntity_k__BackingField;
  ServantEntity_k__BackingField = v11->fields._ServantEntity_k__BackingField;
  commandCodeIdList = v11->fields.commandCodeIdList;
  v20 = *(_QWORD *)&v11->fields._SvtPoint_k__BackingField;
  isFixMultipleNpc = v11->fields.isFixMultipleNpc;
  isFixMultipleNpcRestriction = v11->fields.isFixMultipleNpcRestriction;
  npcFollowerSvtId = v11->fields.npcFollowerSvtId;
  fatigureTime = v11->fields.fatigureTime;
  friendPointCampaignEntityList = v11->fields.friendPointCampaignEntityList;
  isFatigureRecover = v11->fields.isFatigureRecover;
  IsDataLost_k__BackingField = v11->fields._IsDataLost_k__BackingField;
  IsAllOutBattle_k__BackingField = v11->fields._IsAllOutBattle_k__BackingField;
  IsNotSupportSingle_k__BackingField = v11->fields._IsNotSupportSingle_k__BackingField;
  TimesToRestart_k__BackingField = v11->fields._TimesToRestart_k__BackingField;
  NowPos_k__BackingField = v11->fields._NowPos_k__BackingField;
  InitPos_k__BackingField = v11->fields._InitPos_k__BackingField;
  IsDispSvtPoint_k__BackingField = v11->fields._IsDispSvtPoint_k__BackingField;
  IsNotClassBoardNpc_k__BackingField = v11->fields._IsNotClassBoardNpc_k__BackingField;
  v8.n64_u32[0] = *(_DWORD *)&v11->fields.isMyServantOrNpcRestriction;
  isRestrictionGrandServant = v11->fields.isRestrictionGrandServant;
  isRestrictionServantPos = v11->fields.isRestrictionServantPos;
  isRestrictionActiveGrandBoard = v11->fields.isRestrictionActiveGrandBoard;
  IsDisappearSvt_k__BackingField = v11->fields._IsDisappearSvt_k__BackingField;
  IsClearedWave_k__BackingField = v11->fields._IsClearedWave_k__BackingField;
  IsGrandServant_k__BackingField = v11->fields._IsGrandServant_k__BackingField;
  IsDisappearEquip_k__BackingField = v11->fields._IsDisappearEquip_k__BackingField;
  v21 = item->fields.userServantEntity;
  IsUseGrandBoard_k__BackingField = v11->fields._IsUseGrandBoard_k__BackingField;
  IsTempGrandServant_k__BackingField = v11->fields._IsTempGrandServant_k__BackingField;
  EquipFriendShipSkillChange_k__BackingField = v11->fields._EquipFriendShipSkillChange_k__BackingField;
  TempOverwriteTreasureDeviceLv_k__BackingField = v11->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  v11->fields.userServantEntity = v21;
  v137 = TempOverwriteTreasureDeviceLv_k__BackingField;
  v138 = EquipFriendShipSkillChange_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.userServantEntity,
    (int32_t)v21,
    (System_String_o *)notChangeInitPos,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v24 = item->fields.followerInfo;
  v11->fields.followerInfo = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.followerInfo, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  *(_WORD *)&v11->fields.isFollower = *(_WORD *)&item->fields.isFollower;
  v31 = item->fields._BaseServantEntity_k__BackingField;
  *(_QWORD *)&v11->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  v32 = item->fields.followerIndex;
  v11->fields._BaseServantEntity_k__BackingField = v31;
  v11->fields.followerIndex = v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields._BaseServantEntity_k__BackingField,
    (int32_t)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = item->fields._ServantEntity_k__BackingField;
  v11->fields._ServantEntity_k__BackingField = v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields._ServantEntity_k__BackingField,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = item->fields.commandCodeIdList;
  *(_OWORD *)&v11->fields.cost = *(_OWORD *)&item->fields.cost;
  v47 = *(_OWORD *)&item->fields.rarityId;
  v11->fields.commandCodeIdList = v46;
  *(_OWORD *)&v11->fields.rarityId = v47;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.commandCodeIdList,
    (int32_t)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v60 = item->fields.npcFollowerSvtId;
  *(_QWORD *)&v11->fields.isQuestRestriction = *(_QWORD *)&item->fields.isQuestRestriction;
  v61 = item->fields.isFixMultipleNpcRestriction;
  v11->fields.npcFollowerSvtId = v60;
  LOBYTE(v60) = item->fields.isFixMultipleNpc;
  v11->fields.isFixMultipleNpcRestriction = v61;
  v11->fields.isFixMultipleNpc = v60;
  *(_DWORD *)&v11->fields.isMyServantOrNpcRestriction = *(_DWORD *)&item->fields.isMyServantOrNpcRestriction;
  *(_WORD *)&v11->fields.isRestrictionServantPos = *(_WORD *)&item->fields.isRestrictionServantPos;
  v63 = &item->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  v64 = item->fields.fatigureTime;
  v11->fields.isRestrictionActiveGrandBoard = item->fields.isRestrictionActiveGrandBoard;
  LOBYTE(v60) = item->fields.isFatigureRecover;
  v11->fields.fatigureTime = v64;
  v11->fields.isFatigureRecover = v60;
  if ( !equipSvtIdList )
    goto LABEL_9;
  v65 = System_Array__Clone(equipSvtIdList, 0);
  if ( !v65 )
    goto LABEL_9;
  v135 = p_klass;
  p_klass = &int___TypeInfo;
  v66 = int___TypeInfo;
  v67 = v65;
  v68 = sub_2213BB4(v65, int___TypeInfo);
  if ( !v68
    || (v66 = int___TypeInfo, *p_equipSvtIdList = v68, v69 = sub_2213BB4(v67, v66), p_klass = v135, v70 = v69, !v69) )
  {
    sub_221405C(v67, v66, v54, v55);
LABEL_9:
    v70 = 0;
    *p_equipSvtIdList = 0;
  }
  v136 = vmovl_u8(v8);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.equipSvtIdList, v70, v54, v55, v56, v57, v58, v59);
  PartyOrganizationListViewItem__SetEquipStatus(v11, item->fields.equipIdList, 0, v71);
  v72 = item->fields.friendPointCampaignEntityList;
  v11->fields.friendPointCampaignEntityList = v72;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.friendPointCampaignEntityList,
    (int32_t)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v85 = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  v11->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&v11->fields._SvtPoint_k__BackingField = v85;
  *(_WORD *)&v11->fields._IsAllOutBattle_k__BackingField = *(_WORD *)&item->fields._IsAllOutBattle_k__BackingField;
  v86 = item->fields._IsNotSupportSingle_k__BackingField;
  v11->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  v11->fields._IsNotSupportSingle_k__BackingField = v86;
  if ( !v170 )
    v11->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  v87 = item->fields._IsNotClassBoardNpc_k__BackingField;
  v11->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  v88 = item->fields._IsClearedWave_k__BackingField;
  v11->fields._IsNotClassBoardNpc_k__BackingField = v87;
  v11->fields._IsClearedWave_k__BackingField = v88;
  *(_WORD *)&v11->fields._IsDisappearSvt_k__BackingField = *(_WORD *)&item->fields._IsDisappearSvt_k__BackingField;
  v11->fields._IsGrandServant_k__BackingField = item->fields._IsGrandServant_k__BackingField;
  *(_WORD *)&v11->fields._IsTempGrandServant_k__BackingField = *(_WORD *)&item->fields._IsTempGrandServant_k__BackingField;
  v89 = item->fields._EquipFriendShipSkillChange_k__BackingField;
  v90 = item->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  v11->fields._EquipFriendShipSkillChange_k__BackingField = v89;
  v11->fields._TempOverwriteTreasureDeviceLv_k__BackingField = v90;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.userServantEntity,
    (int32_t)userServantEntity,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  item->fields.followerInfo = followerInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.followerInfo,
    (int32_t)followerInfo,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  *(_QWORD *)&item->fields.followerClassId = v16;
  item->fields.isFixNpc = isFixNpc;
  item->fields.isFollower = isFollower;
  item->fields.followerIndex = followerIndex;
  item->fields._BaseServantEntity_k__BackingField = BaseServantEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity_k__BackingField,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  item->fields._ServantEntity_k__BackingField = ServantEntity_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity_k__BackingField,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  *(_QWORD *)&item->fields.cost = v12;
  *(_QWORD *)&item->fields.atk = v13;
  *(_QWORD *)&item->fields.rarityId = v14;
  *(_QWORD *)&item->fields.frameType = v15;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.commandCodeIdList,
    (int32_t)commandCodeIdList,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  *(_QWORD *)&item->fields.isQuestRestriction = v17;
  item->fields.isFixMultipleNpc = isFixMultipleNpc;
  item->fields.isFixMultipleNpcRestriction = isFixMultipleNpcRestriction;
  item->fields.npcFollowerSvtId = npcFollowerSvtId;
  *(_DWORD *)&item->fields.isMyServantOrNpcRestriction = vmovn_s16(v136).n64_u32[0];
  item->fields.isRestrictionGrandServant = isRestrictionGrandServant;
  item->fields.isRestrictionServantPos = isRestrictionServantPos;
  item->fields.isRestrictionActiveGrandBoard = isRestrictionActiveGrandBoard;
  item->fields.fatigureTime = fatigureTime;
  item->fields.isFatigureRecover = isFatigureRecover;
  if ( !p_klass )
    goto LABEL_17;
  v121 = System_Array__Clone((System_Array_o *)p_klass, 0);
  if ( !v121 )
    goto LABEL_17;
  v122 = int___TypeInfo;
  v123 = v121;
  v124 = sub_2213BB4(v121, int___TypeInfo);
  if ( !v124
    || (v122 = int___TypeInfo,
        *v63 = (struct System_Int32_array *)v124,
        v125 = sub_2213BB4(v123, v122),
        v126 = v125,
        !v125) )
  {
    sub_221405C(v123, v122, v115, v116);
LABEL_17:
    v126 = 0;
    *v63 = 0;
  }
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.equipSvtIdList,
    v126,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, 0, v127);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v20;
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  item->fields._IsAllOutBattle_k__BackingField = IsAllOutBattle_k__BackingField;
  item->fields._IsDataLost_k__BackingField = IsDataLost_k__BackingField;
  item->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  item->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  if ( !v170 )
    item->fields._InitPos_k__BackingField = InitPos_k__BackingField;
  item->fields._NowPos_k__BackingField = NowPos_k__BackingField;
  item->fields._IsNotClassBoardNpc_k__BackingField = IsNotClassBoardNpc_k__BackingField;
  item->fields._IsClearedWave_k__BackingField = IsClearedWave_k__BackingField;
  item->fields._IsDisappearSvt_k__BackingField = IsDisappearSvt_k__BackingField;
  item->fields._IsDisappearEquip_k__BackingField = IsDisappearEquip_k__BackingField;
  item->fields._IsGrandServant_k__BackingField = IsGrandServant_k__BackingField;
  item->fields._IsTempGrandServant_k__BackingField = IsTempGrandServant_k__BackingField;
  item->fields._IsUseGrandBoard_k__BackingField = IsUseGrandBoard_k__BackingField;
  item->fields._EquipFriendShipSkillChange_k__BackingField = v138;
  item->fields._TempOverwriteTreasureDeviceLv_k__BackingField = v137;
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Int64_array **v15; // x22
  __int64 v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Int64_array *v23; // x8
  struct System_Int64_array *v24; // x9
  int64_t v25; // x10
  struct System_Int32_array **p_equipSvtIdList; // x21
  __int64 v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Int32_array **v34; // x22
  const MethodInfo *v35; // x3
  __int64 v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Int32_array *v43; // x8
  struct System_Int32_array *v44; // x9
  int32_t v45; // w11
  System_Int64_array *equipIdList; // x1
  const MethodInfo *v47; // x3

  if ( (byte_596C027 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    byte_596C027 = 1;
  }
  p_equipIdList = &this->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v8 = sub_2213B20(long___TypeInfo, 1);
    *p_equipIdList = (struct System_Int64_array *)v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, v8, v9, v10, v11, v12, v13, v14);
  }
  if ( !item )
    goto LABEL_22;
  v15 = &item->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v16 = sub_2213B20(long___TypeInfo, 1);
    *v15 = (struct System_Int64_array *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&item->fields.equipIdList, v16, v17, v18, v19, v20, v21, v22);
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
    sub_2213CE4(IsNullOrEmpty);
  }
  v24->m_Items[0] = v25;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSvtIdList, 0) )
  {
    v27 = sub_2213B20(int___TypeInfo, 1);
    *p_equipSvtIdList = (struct System_Int32_array *)v27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipSvtIdList, v27, v28, v29, v30, v31, v32, v33);
  }
  v34 = &item->fields.equipSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipSvtIdList, 0);
  if ( IsNullOrEmpty )
  {
    v36 = sub_2213B20(int___TypeInfo, 1);
    *v34 = (struct System_Int32_array *)v36;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&item->fields.equipSvtIdList, v36, v37, v38, v39, v40, v41, v42);
  }
  v43 = *p_equipSvtIdList;
  if ( !*p_equipSvtIdList )
    goto LABEL_22;
  if ( !LODWORD(v43->max_length) )
    goto LABEL_23;
  v44 = *v34;
  if ( !*v34 )
LABEL_22:
    sub_2213CDC(IsNullOrEmpty, v7);
  if ( !LODWORD(v44->max_length) )
    goto LABEL_23;
  v45 = v43->m_Items[0];
  equipIdList = this->fields.equipIdList;
  v43->m_Items[0] = v44->m_Items[0];
  v44->m_Items[0] = v45;
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, 0, v35);
  PartyOrganizationListViewItem__SetEquipStatus(item, item->fields.equipIdList, 0, v47);
}


bool PartyOrganizationListViewItem__TryGetNarrowFigureAssetData(
        PartyOrganizationListViewItem_o *this,
        int32_t *narrowFigureSvtId,
        int32_t *limitCountStage,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  int32_t ServantId; // w8
  UserServantEntity_o *userServantEntity; // x0
  int32_t CardImageLimitCountStageSealAfter; // w0
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v13; // x1
  ServantLeaderInfo_o *v14; // x22
  struct FollowerInfo_o *followerInfo; // x8
  int32_t imageSvtId; // w8

  ServantId = PartyOrganizationListViewItem__get_ServantId(this, (const MethodInfo *)narrowFigureSvtId);
  userServantEntity = this->fields.userServantEntity;
  *narrowFigureSvtId = ServantId;
  *limitCountStage = 1;
  if ( userServantEntity )
  {
    CardImageLimitCountStageSealAfter = UserServantEntity__GetCardImageLimitCountStageSealAfter(
                                          userServantEntity,
                                          -1,
                                          0,
                                          this->fields.questRestrictionInfo,
                                          0);
LABEL_3:
    *limitCountStage = CardImageLimitCountStageSealAfter;
    return 1;
  }
  if ( this->fields.isFollower && this->fields.followerInfo )
  {
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v7);
    if ( ServantLeader )
    {
      v14 = ServantLeader;
      if ( ServantLeaderInfo__IsHideSupport(ServantLeader, 0) )
      {
        *narrowFigureSvtId = 100001;
        return 1;
      }
      ServantLeader = (ServantLeaderInfo_o *)ServantLeaderInfo__IsNpc(v14, 0);
      if ( ((unsigned __int8)ServantLeader & 1) == 0 )
      {
        CardImageLimitCountStageSealAfter = ServantLeaderInfo__GetCardImageLimitCountStageSealAfter(v14, 0);
        goto LABEL_3;
      }
      followerInfo = this->fields.followerInfo;
      if ( followerInfo )
      {
        imageSvtId = followerInfo->fields.imageSvtId;
        if ( imageSvtId >= 1 )
          *narrowFigureSvtId = imageSvtId;
        CardImageLimitCountStageSealAfter = ServantLeaderInfo__GetCardImageLimitCountStage(v14, -1, 0);
        goto LABEL_3;
      }
    }
    sub_2213CDC(ServantLeader, v13);
  }
  return 0;
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
  System_Collections_ICollection_o *equipUserServantEntityList; // x0
  __int64 IsNullOrEmpty; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  struct UserServantEntity_o *v10; // x8
  __int64 v11; // x22
  __int128 v12; // q1
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_UserServantEntity__o *v15; // x8
  int32_t v16; // w20
  Il2CppObject *Master_object; // x21
  __int64 v18; // x22
  __int64 v19; // x2
  __int128 v20; // q1
  int v21; // w8
  struct System_Collections_Generic_List_UserServantEntity__o *v22; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x22
  __int64 v24; // x2
  __int128 v25; // q1
  int v26; // w8
  __int64 v27; // x2
  struct UserServantEntity_o *v28; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  __int128 v30; // q0
  __int128 v31; // q1
  int v32; // w8
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v49; // x21
  __int64 v50; // x22
  UserServantEntity_o *v51; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v60; // x2
  bool IsGrandServant_k__BackingField; // w8
  QuestRestrictionInfo_o *v62; // x21
  struct UserServantEntity_o *v63; // x8
  __int64 v64; // x20
  __int64 v65; // x22
  int32_t v66; // w0
  int32_t OverwriteTempTreasureDeviceLv; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+90h] [xbp-90h]
  QuestPhaseEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_596C04B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C04B = 1;
  }
  equipUserServantEntityList = (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList;
  entity = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(equipUserServantEntityList, 0);
  if ( (IsNullOrEmpty & 1) != 0 && !this->fields._IsDisappearEquip_k__BackingField )
  {
    v15 = this->fields.equipUserServantEntityList;
    if ( !v15 )
      goto LABEL_43;
    v16 = 0;
    while ( v16 < v15->fields._size )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      IsNullOrEmpty = sub_2213B20(long___TypeInfo, 1);
      if ( !this->fields.equipUserServantEntityList )
        goto LABEL_43;
      v18 = IsNullOrEmpty;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                 v16,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_43;
      v20 = *(_OWORD *)(IsNullOrEmpty + 32);
      v21 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
      *(_OWORD *)&v72.fields.fakeValue = v20;
      if ( !v21 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v19);
      v71 = v72;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v71, 0);
      if ( !v18 )
        goto LABEL_43;
      if ( !*(_DWORD *)(v18 + 24) )
        goto LABEL_79;
      *(_QWORD *)(v18 + 32) = IsNullOrEmpty;
      if ( !Master_object )
        goto LABEL_43;
      IsNullOrEmpty = DataMasterBase_object__object__long___isEntityExistsFromId(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (System_Int64_array *)v18,
                        (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v22 = this->fields.equipUserServantEntityList;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
        IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !this->fields.equipUserServantEntityList )
          goto LABEL_43;
        v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                   v16,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_43;
        v25 = *(_OWORD *)(IsNullOrEmpty + 32);
        v26 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
        *(_OWORD *)&v72.fields.fakeValue = v25;
        if ( !v26 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v24);
        v70 = v72;
        IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v70, 0);
        if ( !v23 )
          goto LABEL_43;
        IsNullOrEmpty = (__int64)DataMasterBase_object__object__long___GetEntity(
                                   v23,
                                   IsNullOrEmpty,
                                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !v22 )
          goto LABEL_43;
        System_Collections_Generic_List_object___set_Item(
          (System_Collections_Generic_List_object__o *)v22,
          v16,
          (Il2CppObject *)IsNullOrEmpty,
          (const MethodInfo_44839E8 *)Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
      }
      else
      {
        this->fields._IsDisappearEquip_k__BackingField = 1;
      }
      v15 = this->fields.equipUserServantEntityList;
      ++v16;
      if ( !v15 )
        goto LABEL_43;
    }
  }
  p_userServantEntity = &this->fields.userServantEntity;
  if ( this->fields.userServantEntity && !this->fields._IsDisappearSvt_k__BackingField )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
    v8 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    IsNullOrEmpty = sub_2213B20(long___TypeInfo, 1);
    v10 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v11 = IsNullOrEmpty;
      v12 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v72.fields.fakeValue = v12;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v9);
      v69 = v72;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v69, 0);
      if ( v11 )
      {
        if ( !*(_DWORD *)(v11 + 24) )
LABEL_79:
          sub_2213CE4(IsNullOrEmpty);
        *(_QWORD *)(v11 + 32) = IsNullOrEmpty;
        if ( v8 )
        {
          if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                  (System_Int64_array *)v11,
                  (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
          {
LABEL_18:
            this->fields._IsDisappearSvt_k__BackingField = 1;
            return;
          }
          IsNullOrEmpty = (__int64)*p_userServantEntity;
          if ( *p_userServantEntity )
          {
            if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)IsNullOrEmpty, 0) )
              goto LABEL_18;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
            IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
            v28 = *p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
              v30 = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
              v31 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
              v32 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v72.fields.currentCryptoKey = v30;
              *(_OWORD *)&v72.fields.fakeValue = v31;
              if ( !v32 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v27);
              v68 = v72;
              IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v68, 0);
              if ( v29 )
              {
                v33 = DataMasterBase_object__object__long___GetEntity(
                        v29,
                        IsNullOrEmpty,
                        (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                *p_userServantEntity = (struct UserServantEntity_o *)v33;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
                  (int32_t)v33,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39);
                IsNullOrEmpty = (__int64)*p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)IsNullOrEmpty, -1, 0);
                  this->fields._ServantEntity_k__BackingField = ServantEntity;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
                    (int32_t)ServantEntity,
                    v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46);
                  IsNullOrEmpty = (__int64)this->fields.userServantEntity;
                  if ( IsNullOrEmpty )
                  {
                    IsNullOrEmpty = (__int64)UserServantEntity__GetOverwriteStatus(
                                               (UserServantEntity_o *)IsNullOrEmpty,
                                               this->fields.questRestrictionInfo,
                                               0);
                    if ( IsNullOrEmpty )
                    {
                      this->fields.cost = *(_DWORD *)(IsNullOrEmpty + 28);
                      *(_QWORD *)&this->fields.hp = *(_QWORD *)(IsNullOrEmpty + 16);
                      this->fields.rarityId = *(_DWORD *)(IsNullOrEmpty + 24);
                      v5 = *(unsigned int *)(IsNullOrEmpty + 40);
                      IsNullOrEmpty = (__int64)this->fields.userServantEntity;
                      this->fields.actualRarity = v5;
                      if ( IsNullOrEmpty )
                      {
                        IsNullOrEmpty = UserServantEntity__GetFrameType((UserServantEntity_o *)IsNullOrEmpty, v5, 0);
                        userServantEntity = this->fields.userServantEntity;
                        this->fields.frameType = IsNullOrEmpty;
                        if ( userServantEntity )
                        {
                          v49 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                          v50 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                              v5,
                              v47);
                          *(_QWORD *)&v74.fields.currentCryptoKey = v49;
                          *(_QWORD *)&v74.fields.fakeValue = v50;
                          IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v74, 0);
                          v51 = this->fields.userServantEntity;
                          this->fields.svtLimitCount = IsNullOrEmpty;
                          if ( v51 )
                          {
                            CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v51, 0);
                            this->fields.commandCodeIdList = CommandCodeIdList;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeIdList,
                              (int32_t)CommandCodeIdList,
                              v53,
                              v54,
                              v55,
                              v56,
                              v57,
                              v58);
                            IsNullOrEmpty = (__int64)this->fields.userServantEntity;
                            if ( IsNullOrEmpty )
                            {
                              this->fields._IsGrandServant_k__BackingField = UserServantEntity__IsGrandServant(
                                                                               (UserServantEntity_o *)IsNullOrEmpty,
                                                                               0);
                              IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
                              questRestrictionInfo = this->fields.questRestrictionInfo;
                              if ( questRestrictionInfo )
                              {
                                if ( IsNullOrEmpty )
                                {
                                  IsNullOrEmpty = QuestPhaseMaster__TryGetEntity(
                                                    (QuestPhaseMaster_o *)IsNullOrEmpty,
                                                    &entity,
                                                    questRestrictionInfo->fields.questId,
                                                    questRestrictionInfo->fields.questPhase,
                                                    0);
                                  if ( (IsNullOrEmpty & 1) != 0 )
                                  {
                                    IsNullOrEmpty = (__int64)entity;
                                    if ( !entity )
                                      goto LABEL_43;
                                    IsNullOrEmpty = QuestPhaseEntity__IsUseGrandBoard(entity, 0);
                                    if ( (IsNullOrEmpty & 1) == 0 )
                                      goto LABEL_69;
                                    IsNullOrEmpty = (__int64)this->fields.questRestrictionInfo;
                                    if ( !IsNullOrEmpty )
                                      goto LABEL_43;
                                    IsNullOrEmpty = QuestRestrictionInfo__IsGrandServantRestriction(
                                                      (QuestRestrictionInfo_o *)IsNullOrEmpty,
                                                      this->fields._InitPos_k__BackingField,
                                                      0);
                                    if ( (IsNullOrEmpty & 1) != 0 )
                                      goto LABEL_68;
                                    IsNullOrEmpty = (__int64)this->fields.questRestrictionInfo;
                                    if ( !IsNullOrEmpty )
                                      goto LABEL_43;
                                    IsNullOrEmpty = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                                      (QuestRestrictionInfo_o *)IsNullOrEmpty,
                                                      this->fields._InitPos_k__BackingField,
                                                      0);
                                    if ( (IsNullOrEmpty & 1) != 0 )
LABEL_68:
                                      IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
                                    else
LABEL_69:
                                      IsGrandServant_k__BackingField = 0;
                                    this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
                                  }
                                  v62 = this->fields.questRestrictionInfo;
                                  if ( !v62 )
                                  {
                                    OverwriteTempTreasureDeviceLv = 0;
LABEL_77:
                                    this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = OverwriteTempTreasureDeviceLv;
                                    return;
                                  }
                                  v63 = *p_userServantEntity;
                                  if ( *p_userServantEntity )
                                  {
                                    v64 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
                                    v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
                                    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished
                                          + 1) )
                                      j_il2cpp_runtime_class_init_0(
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                        v5,
                                        v60);
                                    *(_QWORD *)&v75.fields.currentCryptoKey = v64;
                                    *(_QWORD *)&v75.fields.fakeValue = v65;
                                    v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v75, 0);
                                    OverwriteTempTreasureDeviceLv = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
                                                                      v62,
                                                                      v66,
                                                                      0);
                                    goto LABEL_77;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_2213CDC(IsNullOrEmpty, v5);
  }
}


void PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationListViewItem_o *v4; // x19
  UnityEngine_Object_o *viewObject; // x20
  __int64 naturalAligment; // x9
  PartyOrganizationListViewItem_o *v7; // x0
  PartyServantListViewItem_o *v8; // x1
  const MethodInfo *v9; // x2

  v4 = item;
  if ( (byte_596C04A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_2213A60(&PartyOrganizationListViewObject_TypeInfo);
    byte_596C04A = 1;
  }
  if ( !v4 )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)v4->fields.viewObject;
  if ( viewObject
    && ((item = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewObject_TypeInfo,
         naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
         viewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v7 = (PartyOrganizationListViewItem_o *)sub_221405C(
                                              v4->fields.viewObject,
                                              PartyOrganizationListViewObject_TypeInfo,
                                              method,
                                              v3);
    PartyOrganizationListViewItem__Modify_40987156(v7, v8, v9);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
    this = (PartyOrganizationListViewItem_o *)UnityEngine_Object__op_Inequality(viewObject, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( viewObject )
      {
        PartyOrganizationListViewObject__UpdateStartingMemberFriendshipUp(
          (PartyOrganizationListViewObject_o *)viewObject,
          v4,
          0);
        return;
      }
LABEL_13:
      sub_2213CDC(this, item);
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


ServantEntity_o *PartyOrganizationListViewItem__get_BaseServantEntity(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BaseServantEntity_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_BaseServantId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_596C031 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C031 = 1;
  }
  BaseServantEntity_k__BackingField = this->fields._BaseServantEntity_k__BackingField;
  if ( BaseServantEntity_k__BackingField )
  {
    v5 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    method = *(const MethodInfo **)&v7.fields.fakeValue;
    v5 = *(_QWORD *)&v7.fields.currentCryptoKey;
    v6 = *(_QWORD *)&v7.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
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
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t v6; // w20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v13; // x0

  if ( (byte_596C046 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C046 = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v6 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___),
          Instance = (Il2CppObject *)PartyOrganizationListViewItem__get_ServantId(this, v10),
          !MasterData_object) )
    {
      sub_2213CDC(Instance, v8);
    }
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v6, 0);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  if ( !byte_596B976 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B976 = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    v13 = LocalizationManager_TypeInfo;
  }
  return v13->static_fields->unknownNameText;
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

  if ( (byte_596C039 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_596C039 = 1;
  }
  if ( this->fields.isFollower
    || !this->fields._ServantEntity_k__BackingField
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
  {
    return -1;
  }
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_2213CDC(equipServantEntityList, v4);
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
  int32_t followerIndex; // w21
  int32_t DisplayEquipIndex_k__BackingField; // w22
  int32_t ReturnTypeByQuestId; // w3
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x8
  int32_t v10; // w1
  __int64 v11; // x2
  struct System_Object_array *items; // x19
  __int64 v13; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596C03D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C03D = 1;
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
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_2213CDC(IsNullOrEmpty, v4);
    }
    items = IsNullOrEmpty[2].fields._items;
    v13 = *(_QWORD *)&IsNullOrEmpty[2].fields._size;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v11);
    *(_QWORD *)&v16.fields.currentCryptoKey = items;
    *(_QWORD *)&v16.fields.fakeValue = v13;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  }
}


int32_t PartyOrganizationListViewItem__get_EquipLimitCountMax(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *equipServantEntityList; // x0

  if ( (byte_596C03E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_596C03E = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return 0;
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_2213CDC(equipServantEntityList, v3);
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

  if ( (byte_596C03F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C03F = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return v3;
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                equipServantEntityList,
                                                                                0,
                                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_2213CDC(equipServantEntityList, v4);
  }
  return ServantEntity__getName((ServantEntity_o *)equipServantEntityList, -1, -1, 0, 0, 0);
}


CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o PartyOrganizationListViewItem__get_EquipSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v4; // kr00_16
  struct System_Object_array *items; // x20
  __int64 v6; // x21
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_596C03B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C03B = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  items = *(struct System_Object_array **)&v4.fields.currentCryptoKey;
  v6 = *(_QWORD *)&v4.fields.fakeValue;
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
                                                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0) )
    {
      sub_2213CDC(equipServantEntityList, v7);
    }
    items = equipServantEntityList->fields._items;
    v6 = *(_QWORD *)&equipServantEntityList->fields._size;
  }
  *(_QWORD *)&result.fields.currentCryptoKey = items;
  *(_QWORD *)&result.fields.fakeValue = v6;
  return result;
}


System_Collections_Generic_List_int__o *PartyOrganizationListViewItem__get_EquipSvtIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596C03C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C03C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)equipServantEntityList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__) )
  {
    if ( v15.fields._current )
    {
      v8 = *(__int64 *)((char *)&v15.fields._current->klass + (unsigned __int64)&word_10);
      v9 = *(__int64 *)((char *)&v15.fields._current->monitor + (unsigned __int64)&word_10);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
      *(_QWORD *)&v16.fields.currentCryptoKey = v8;
      *(_QWORD *)&v16.fields.fakeValue = v9;
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
      if ( !v3
        || (items = v3->fields._items,
            v12 = Method_System_Collections_Generic_List_int__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(v10, (unsigned int)v10);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v10,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v10;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
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
  __int64 v8; // x2
  __int128 v9; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_596C03A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C03A = 1;
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
                                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_2213CDC(equipUserServantEntityList, v3);
    }
    v9 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
    *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
    *(_OWORD *)&v11.fields.fakeValue = v9;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3, v8);
    v10 = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v10, 0);
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t NowPos_k__BackingField; // w19

  if ( (byte_596C049 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596C049 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  return NowPos_k__BackingField <= v4->static_fields->DeckMainMemberMax;
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
  if ( this->fields.isFollower || !this->fields._ServantEntity_k__BackingField )
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x1
  int32_t atk; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v9; // w2
  int v10; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C036 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_596C036 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  memset(&v15, 0, sizeof(v15));
  if ( userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0) )
      return this->fields.atk;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v10 = 0;
      v13 = 0;
      v14 = &v15;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v15,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v15.fields._current )
          v10 += *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&qword_198);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.atk + v10;
    }
LABEL_23:
    sub_2213CDC(equipUserServantEntityList, v4);
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
        v9 = (int)equipUserServantEntityList;
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = 2;
    }
    if ( followerInfo )
    {
      atk += FollowerInfo__getEquipAtk(followerInfo, followerIndex, v9, 0);
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

  if ( (byte_596C038 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_596C038 = 1;
  }
  if ( this->fields.isFollower || !this->fields._ServantEntity_k__BackingField )
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
                                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
      sub_2213CDC(equipServantEntityList, v6);
    }
    cost += LODWORD(equipServantEntityList[3].fields._syncRoot);
  }
  return cost;
}


int32_t PartyOrganizationListViewItem__get_MargeHp(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x1
  int32_t hp; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v9; // w2
  int v10; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v13; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596C037 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_596C037 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  memset(&v15, 0, sizeof(v15));
  if ( userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0) )
      return this->fields.hp;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v10 = 0;
      v13 = 0;
      v14 = &v15;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v15,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v15.fields._current )
          v10 += *(_DWORD *)((char *)&v15.fields._current->klass + (unsigned __int64)&qword_198 + 4);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.hp + v10;
    }
LABEL_23:
    sub_2213CDC(equipUserServantEntityList, v4);
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
        v9 = (int)equipUserServantEntityList;
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = 2;
    }
    if ( followerInfo )
    {
      hp += FollowerInfo__getEquipHp(followerInfo, followerIndex, v9, 0);
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


ServantEntity_o *PartyOrganizationListViewItem__get_ServantEntity(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEntity_k__BackingField;
}


int32_t PartyOrganizationListViewItem__get_ServantId(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_596C030 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C030 = 1;
  }
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( ServantEntity_k__BackingField )
  {
    v5 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
    method = *(const MethodInfo **)&v7.fields.fakeValue;
    v5 = *(_QWORD *)&v7.fields.currentCryptoKey;
    v6 = *(_QWORD *)&v7.fields.fakeValue;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
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
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  ServantAddMaster_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  const MethodInfo *v12; // x3
  System_String_o *ServantName; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596C032 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C032 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAddMaster___);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = (ServantAddMaster_o *)Master_object;
  v9 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, 0, v12);
  if ( !v8 )
    sub_2213CDC(ServantName, v14);
  return ServantAddMaster__AddIdentifyText(v8, v11, ServantName, 0);
}


System_String_o *PartyOrganizationListViewItem__get_ServantNameUseCommonName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  ServantAddMaster_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  const MethodInfo *v12; // x3
  System_String_o *ServantName; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_596C034 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C034 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAddMaster___);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = (ServantAddMaster_o *)Master_object;
  v9 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, 1, v12);
  if ( !v8 )
    sub_2213CDC(ServantName, v14);
  return ServantAddMaster__AddIdentifyText(v8, v11, ServantName, 0);
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
  const MethodInfo *v2; // x3
  FollowerInfo_o *followerInfo; // x0
  _BOOL8 IsNpc; // x0
  __int64 v6; // x1
  struct FollowerInfo_o *v7; // x8

  if ( (byte_596C033 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596C033 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_2213CDC(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields._ServantEntity_k__BackingField )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, 0, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19957/*"error"*/;
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


void PartyOrganizationListViewItem__set_BaseServantEntity(
        PartyOrganizationListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BaseServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DuplicationEquipmentFlagList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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


void PartyOrganizationListViewItem__set_ServantEntity(
        PartyOrganizationListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C054 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_596C054 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields,
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


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__358_0(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_2213CDC(this, 0);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__358_1(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_596C055 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C055 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__358_2(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_2213CDC(this, 0);
  return script->fields.eventCampaignBonusDetailName;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__358_3(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_596C056 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C056 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


int64_t PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__366_0(
        PartyOrganizationListViewItem___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id;
}


bool PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__366_1(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *id,
        const MethodInfo *method)
{
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_596C057 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_long___);
    this = (PartyOrganizationListViewItem___c_o *)sub_2213A60(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_596C057 = 1;
  }
  if ( !id )
    sub_2213CDC(this, id);
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
    v7 = sub_224BC3C(id, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(id, *(_QWORD *)(v7 + 8)) >= 1
      && System_Linq_Enumerable__Count_long_(
           (System_Collections_Generic_IEnumerable_TSource__o *)id,
           (const MethodInfo_387946C *)Method_System_Linq_Enumerable_Count_long___) > 1;
}


int64_t PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__366_2(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_596C058 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem___c_o *)sub_2213A60(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_596C058 = 1;
  }
  if ( !group )
    sub_2213CDC(this, group);
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
    v7 = sub_224BC3C(group, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(int64_t (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__165_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_2213CDC(this, 0);
  return drop->fields.eventId;
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__165_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_2213CDC(this, 0);
  return drop->fields.eventId;
}


void PartyOrganizationListViewItem___c__DisplayClass179_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass179_0___SetDuplicationGrandQuestEquipmentMarkFlag_b__0(
        PartyOrganizationListViewItem___c__DisplayClass179_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *_4__this; // x8
  struct System_Int64_array *equipIdList; // x8
  __int64 i; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || (equipIdList = _4__this->fields.equipIdList) == 0 )
    sub_2213CDC(this, id);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(equipIdList->max_length) )
    sub_2213CE4(this);
  return equipIdList->m_Items[i] == id;
}


void PartyOrganizationListViewItem___c__DisplayClass370_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass370_0___GetCanOrganizationGrandSvtIdList_b__0(
        PartyOrganizationListViewItem___c__DisplayClass370_0_o *this,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *individuality; // x20
  System_Func_int__bool__o *v9; // x19

  if ( (byte_596C059 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_PartyOrganizationListViewItem___c__DisplayClass370_1__GetCanOrganizationGrandSvtIdList_b__1__);
    sub_2213A60(&PartyOrganizationListViewItem___c__DisplayClass370_1_TypeInfo);
    byte_596C059 = 1;
  }
  v5 = sub_2213CCC(PartyOrganizationListViewItem___c__DisplayClass370_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  individuality = this->fields.individuality;
  *(_DWORD *)(v5 + 16) = classIndividuality;
  v9 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationListViewItem___c__DisplayClass370_1__GetCanOrganizationGrandSvtIdList_b__1__,
    0);
  return BasicHelper__Any_int__58784608(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


void PartyOrganizationListViewItem___c__DisplayClass370_1___ctor(
        PartyOrganizationListViewItem___c__DisplayClass370_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass370_1___GetCanOrganizationGrandSvtIdList_b__1(
        PartyOrganizationListViewItem___c__DisplayClass370_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.classIndividuality == x;
}


void PartyOrganizationListViewItem___c__DisplayClass371_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass371_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass371_0___IsEnabledChangeGrandSvt_b__0(
        PartyOrganizationListViewItem___c__DisplayClass371_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  GrandGraphEntity_o *grandGraphEntity; // x0

  grandGraphEntity = this->fields.grandGraphEntity;
  if ( !grandGraphEntity )
    sub_2213CDC(0, x);
  return GrandGraphEntity__CanSelectToGrand(grandGraphEntity, x, 0);
}