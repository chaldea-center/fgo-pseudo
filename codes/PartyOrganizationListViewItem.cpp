void PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB1CDC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    byte_4CB1CDC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v8, v9, v10);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
}


void PartyOrganizationListViewItem___ctor_34415404(
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
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct FollowerInfo_o **p_followerInfo; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  void *ReturnTypeByQuestId; // x0
  unsigned __int64 v37; // x1
  FollowerInfo_o *followerInfo; // x28
  int32_t v39; // w2
  int32_t v40; // w0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t followerIndex; // w24
  FollowerInfo_o *v44; // x26
  int32_t v45; // w2
  ServantLeaderInfo_o *v46; // x26
  int32_t v47; // w27
  FollowerInfo_o *v48; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x24
  int32_t v50; // w2
  Il2CppObject *v51; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  struct ServantEntity_o *servantEntity; // x8
  int32_t v57; // w9
  int32_t v58; // w26
  FollowerInfo_o *v59; // x27
  int32_t v60; // w2
  int32_t v61; // w8
  int32_t v62; // w26
  FollowerInfo_o *v63; // x27
  int32_t v64; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x1
  int32_t v69; // w26
  FollowerInfo_o *v70; // x27
  int32_t v71; // w3
  int v72; // w8
  void *v73; // x23
  unsigned int v74; // w29
  __int64 v75; // x25
  __int64 v76; // x26
  __int64 v77; // x27
  int32_t v78; // w26
  int32_t v79; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  bool IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v84; // x8
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v86; // x8
  UserEventDataLostEntity_o *v87; // x22
  __int64 v88; // x23
  __int64 v89; // x25
  struct ServantEntity_o *v90; // x8
  char v91; // w22
  UserEventDataLostEntity_o *v92; // x23
  __int64 v93; // x24
  __int64 v94; // x25
  struct QuestRestrictionInfo_o *v95; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v97; // x23
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x1
  int32_t v101; // w21
  __int64 v102; // x24
  __int64 v103; // x25
  int32_t v104; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v106; // x1
  const MethodInfo *v107; // x2
  QuestRestrictionInfo_o *v108; // x8
  bool IsNotClassBoard; // w20
  QuestPhaseEntity_o *v110; // [xsp+10h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *v111; // [xsp+18h] [xbp-78h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  bool isWhole; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_4CB1CDE & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1CDE = 1;
  }
  isWhole = 0;
  v111 = 0;
  entity = 0;
  v110 = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v23, v24, v25);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v31,
    v32);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v34, v35);
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
      v39 = (int)ReturnTypeByQuestId;
      if ( !followerInfo )
        goto LABEL_148;
    }
    else
    {
      v39 = 0;
      if ( !followerInfo )
        goto LABEL_148;
    }
  }
  else
  {
    v39 = 2;
    if ( !followerInfo )
      goto LABEL_148;
  }
  v40 = FollowerInfo__getIndex(followerInfo, followerClassId, v39, followerDeckId, followerGrandGraphId, 0);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v40;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v41, v42);
  followerIndex = this->fields.followerIndex;
  v44 = this->fields.followerInfo;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v45 = (int)ReturnTypeByQuestId;
      if ( !v44 )
        goto LABEL_148;
    }
    else
    {
      v45 = 0;
      if ( !v44 )
        goto LABEL_148;
    }
  }
  else
  {
    v45 = 2;
    if ( !v44 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = FollowerInfo__getServantLeaderInfo(v44, followerIndex, v45, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  v46 = (ServantLeaderInfo_o *)ReturnTypeByQuestId;
  this->fields._IsGrandServant_k__BackingField = ServantLeaderInfo__get_IsGrandSvt(
                                                   (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                                   0);
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(v46, 0);
  ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                          (DataManager_o *)ReturnTypeByQuestId,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = this->fields.followerIndex;
  v48 = this->fields.followerInfo;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v50 = (int)ReturnTypeByQuestId;
      if ( !v48 )
        goto LABEL_148;
    }
    else
    {
      v50 = 0;
      if ( !v48 )
        goto LABEL_148;
    }
  }
  else
  {
    v50 = 2;
    if ( !v48 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getSvtId(v48, v47, v50, 0);
  if ( !v49 )
    goto LABEL_148;
  v51 = DataMasterBase_object__object__int___GetEntity(
          v49,
          (int32_t)ReturnTypeByQuestId,
          (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v51;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v51, v53, v54);
  this->fields.cost = 0;
  ReturnTypeByQuestId = ServantLeaderInfo__GetOverwriteStatus(v46, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  *(_QWORD *)&this->fields.hp = *((_QWORD *)ReturnTypeByQuestId + 2);
  this->fields.rarityId = *((_DWORD *)ReturnTypeByQuestId + 6);
  v55 = *((_DWORD *)ReturnTypeByQuestId + 10);
  this->fields.actualRarity = v55;
  ReturnTypeByQuestId = (void *)ServantLeaderInfo__GetFrameType(v46, v55, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.frameType = (int)ReturnTypeByQuestId;
  if ( !servantEntity )
    goto LABEL_148;
  v57 = this->fields.followerGrandGraphId;
  v58 = this->fields.followerIndex;
  v59 = this->fields.followerInfo;
  this->fields.classId = servantEntity->fields.classId;
  if ( v57 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v60 = (int)ReturnTypeByQuestId;
      if ( !v59 )
        goto LABEL_148;
    }
    else
    {
      v60 = 0;
      if ( !v59 )
        goto LABEL_148;
    }
  }
  else
  {
    v60 = 2;
    if ( !v59 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getLimitCount(v59, v58, v60, 0);
  v61 = this->fields.followerGrandGraphId;
  v62 = this->fields.followerIndex;
  v63 = this->fields.followerInfo;
  this->fields.svtLimitCount = (int)ReturnTypeByQuestId;
  if ( v61 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v64 = (int)ReturnTypeByQuestId;
      if ( !v63 )
        goto LABEL_148;
    }
    else
    {
      v64 = 0;
      if ( !v63 )
        goto LABEL_148;
    }
  }
  else
  {
    v64 = 2;
    if ( !v63 )
      goto LABEL_148;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v63, v62, v64, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v66, v67);
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v68);
  if ( ReturnTypeByQuestId && *p_questRestrictionInfo )
  {
    v69 = this->fields.followerIndex;
    v70 = this->fields.followerInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v71 = (int)ReturnTypeByQuestId;
      if ( !v70 )
        goto LABEL_148;
    }
    else
    {
      v71 = 2;
      if ( !v70 )
        goto LABEL_148;
    }
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_41984400(
                                        v70,
                                        questRestrictionInfo,
                                        v69,
                                        v71,
                                        this->fields._InitPos_k__BackingField,
                                        &this->fields.isQuestRestrictionWhole,
                                        0);
  }
  else
  {
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0;
  if ( initPos )
    v37 = (unsigned int)initPos;
  else
    v37 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_DWORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v37;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43687880(
                                        questRestrictionInfo,
                                        v37,
                                        0),
        ((unsigned __int8)ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_148;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                            (DataManager_o *)ReturnTypeByQuestId,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    ReturnTypeByQuestId = UserServantMaster__getOrganizationList((UserServantMaster_o *)ReturnTypeByQuestId, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    v72 = *((_DWORD *)ReturnTypeByQuestId + 6);
    v73 = ReturnTypeByQuestId;
    if ( v72 >= 1 )
    {
      v74 = 0;
      while ( 1 )
      {
        if ( v74 >= v72 )
          sub_1C6BC68(ReturnTypeByQuestId);
        v75 = *((_QWORD *)v73 + (int)v74 + 4);
        if ( !v75 )
          goto LABEL_148;
        v77 = *(_QWORD *)(v75 + 80);
        v76 = *(_QWORD *)(v75 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v114.fields.currentCryptoKey = v77;
        *(_QWORD *)&v114.fields.fakeValue = v76;
        v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v114, 0);
        v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v75 + 96),
                0);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v75, 0, 0);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v78,
                                 v79,
                                 DispLimitCount,
                                 0);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v75, 0);
        ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestriction_43668908(
                                        questRestrictionInfo,
                                        &isWhole,
                                        ServantIndividuality,
                                        Rarity,
                                        *(_DWORD *)(v75 + 256),
                                        this->fields._InitPos_k__BackingField,
                                        1,
                                        0);
        if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
        {
          ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43690924(
                                          questRestrictionInfo,
                                          ServantIndividuality,
                                          this->fields._InitPos_k__BackingField,
                                          0);
          if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
            break;
        }
        v72 = *((_DWORD *)v73 + 6);
        if ( (int)++v74 >= v72 )
          goto LABEL_84;
      }
      this->fields.haveIndividualityServant = 1;
    }
  }
  else
  {
    if ( *p_questRestrictionInfo )
      IsNpcMulitipleOrOnly = QuestRestrictionInfo__IsNpcMulitipleOrOnly(*p_questRestrictionInfo, 0);
    else
      IsNpcMulitipleOrOnly = 0;
    if ( !isFixNpc || !IsNpcMulitipleOrOnly )
    {
      this->fields.isFixMultipleNpc = 0;
      goto LABEL_84;
    }
    ReturnTypeByQuestId = this->fields.questRestrictionInfo;
    this->fields.isFixMultipleNpc = 1;
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)ReturnTypeByQuestId, 0);
    if ( !*p_questRestrictionInfo )
      goto LABEL_148;
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
        goto LABEL_84;
    }
    else
    {
      ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0);
      if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
        goto LABEL_84;
    }
    if ( !follower )
      goto LABEL_148;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
  }
LABEL_84:
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)ReturnTypeByQuestId,
           &entity,
           questRestrictionInfo->fields.questId,
           questRestrictionInfo->fields.questPhase,
           0) )
    {
      ReturnTypeByQuestId = entity;
      if ( !entity )
        goto LABEL_148;
      if ( QuestPhaseEntity__IsUseGrandBoard(entity, 0) )
        this->fields._IsUseGrandBoard_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    }
  }
  v84 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v84 && v84->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    ReturnTypeByQuestId = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      ReturnTypeByQuestId = NetworkManager_TypeInfo;
    }
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_148;
    ReturnTypeByQuestId = (void *)UserEventDataLostMaster__TryGetEntity(
                                    (UserEventDataLostMaster_o *)Master_object,
                                    &v111,
                                    *(_QWORD *)(*((_QWORD *)ReturnTypeByQuestId + 23) + 64LL),
                                    (*p_questRestrictionInfo)->fields.dataLostBattleId,
                                    0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      v86 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_148;
      v87 = v111;
      v89 = *(_QWORD *)&v86->fields.id.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v86->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v115.fields.currentCryptoKey = v89;
      *(_QWORD *)&v115.fields.fakeValue = v88;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v115, 0);
      if ( !v87 )
        goto LABEL_148;
      ReturnTypeByQuestId = (void *)UserEventDataLostEntity__IsRestart(v87, (int32_t)ReturnTypeByQuestId, 0);
      v90 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_148;
      v91 = (char)ReturnTypeByQuestId;
      v92 = v111;
      v94 = *(_QWORD *)&v90->fields.id.fields.currentCryptoKey;
      v93 = *(_QWORD *)&v90->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v116.fields.currentCryptoKey = v94;
      *(_QWORD *)&v116.fields.fakeValue = v93;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v116, 0);
      if ( !v92 )
        goto LABEL_148;
      if ( (v91 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v92,
                                                         (int32_t)ReturnTypeByQuestId,
                                                         0);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v92, (int32_t)ReturnTypeByQuestId, 0) )
      {
        this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0;
  v95 = this->fields.questRestrictionInfo;
  if ( v95 )
  {
    eventId = v95->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    v97 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0) )
    {
      ReturnTypeByQuestId = *p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_148;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v98) )
        {
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v100);
          if ( !ReturnTypeByQuestId )
            goto LABEL_148;
          v101 = *((_DWORD *)ReturnTypeByQuestId + 60);
          this->fields._SvtPoint_k__BackingField = v101;
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v37);
          if ( !ReturnTypeByQuestId )
            goto LABEL_148;
          v103 = *((_QWORD *)ReturnTypeByQuestId + 6);
          v102 = *((_QWORD *)ReturnTypeByQuestId + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v117.fields.currentCryptoKey = v103;
          *(_QWORD *)&v117.fields.fakeValue = v102;
          v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v117, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v97, eventId, v101, v104, 0);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v99);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v37) )
    goto LABEL_143;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v106);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0) )
  {
    v108 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v110,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0) )
        {
          ReturnTypeByQuestId = v110;
          if ( !v110 )
            goto LABEL_148;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v110, 0);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v37);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v108) = IsNotClassBoard
                       | ServantLeaderInfo__IsNotClassBoardNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0);
          goto LABEL_147;
        }
      }
LABEL_148:
      sub_1C6BC60(ReturnTypeByQuestId, v37);
    }
  }
  else
  {
LABEL_143:
    LOBYTE(v108) = 0;
  }
LABEL_147:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v108;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v107);
}


void PartyOrganizationListViewItem___ctor_34441984(
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
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 Instance; // x0
  __int64 v37; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x27
  __int64 v40; // x19
  __int64 v41; // x28
  Il2CppObject *v42; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  ServantLimitMaster_o *v46; // x28
  int32_t v47; // w29
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int v50; // w9
  Il2CppObject *v51; // x0
  Il2CppObject *v52; // x25
  struct System_Int32_array *v53; // x0
  struct System_Int32_array **p_equipSvtIdList; // x26
  __int64 v55; // x0
  int32_t v56; // w1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x23
  int32_t v58; // w1
  struct UserServantEntity_o *v59; // x8
  __int64 v60; // x19
  __int64 v61; // x25
  UserServantEntity_o *v62; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  QuestRestrictionInfo_o *v66; // x25
  struct UserServantEntity_o *v67; // x8
  __int64 v68; // x19
  __int64 v69; // x26
  int32_t v70; // w26
  int32_t v71; // w27
  QuestRestrictionInfo_o *v72; // x25
  UserServantEntity_o *v73; // x8
  __int64 v74; // x19
  __int64 v75; // x26
  int32_t v76; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v78; // x2
  struct QuestRestrictionInfo_o *v79; // x8
  UserServantEntity_o *v80; // x9
  UserEventServantFatigueMaster_o *v81; // x24
  int32_t eventId; // w25
  __int64 v83; // x19
  __int64 v84; // x26
  int64_t v85; // x19
  struct QuestRestrictionInfo_o *v86; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v88; // x8
  UserEventAlloutBattleMaster_o *v89; // x25
  __int64 v90; // x19
  __int64 v91; // x26
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v93; // x8
  UserEventDataLostEntity_o *v94; // x24
  __int64 v95; // x19
  __int64 v96; // x25
  UserServantEntity_o *v97; // x8
  char v98; // w24
  UserEventDataLostEntity_o *v99; // x25
  __int64 v100; // x19
  __int64 v101; // x26
  int v102; // w8
  __int64 v103; // x24
  unsigned int v104; // w28
  __int64 v105; // x25
  __int64 v106; // x19
  __int64 v107; // x26
  int32_t v108; // w19
  int32_t v109; // w26
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  bool v113; // w8
  int32_t v114; // w22
  EventServantPointRankMaster_o *v115; // x23
  UserServantEntity_o *v116; // x8
  __int128 v117; // q0
  UserEventServantPointMaster_o *v118; // x24
  int64_t v119; // x25
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v121; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v124; // x2
  UserServantEntity_o *v125; // x8
  __int128 v126; // q0
  Il2CppObject *v127; // x22
  UserServantEntity_o *v128; // x8
  __int128 v129; // q0
  __int64 v130; // x23
  PartyOrganizationListViewItem_o *v131; // x0
  int32_t v132; // w1
  const MethodInfo *v133; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+90h] [xbp-B0h]
  UserEventServantPointEntity_o *v139; // [xsp+B8h] [xbp-88h] BYREF
  QuestPhaseEntity_o *v140; // [xsp+C0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+CCh] [xbp-74h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+D0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16

  if ( (byte_4CB1CDD & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1CDD = 1;
  }
  entity = 0;
  recoverAt = 0;
  isWhole = 0;
  v139 = 0;
  v140 = 0;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v28, v29);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v30,
    v31);
  this->fields.followerInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v32, v33);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v34, v35);
  this->fields._EquipFriendShipSkillChange_k__BackingField = isChangeFriendShipSvtEquipSkill;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v41 = *(_QWORD *)&v38[5].fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v144.fields.currentCryptoKey = v41;
  *(_QWORD *)&v144.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v144, 0);
  if ( !v39 )
    goto LABEL_153;
  v42 = DataMasterBase_object__object__int___GetEntity(
          v39,
          Instance,
          (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v42;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v42, v44, v45);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v46 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userServantEntity)[5], 0);
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v47 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userServantEntity)[6], 0);
  if ( !v46 )
    goto LABEL_153;
  ServantLimitMaster__GetEntity(v46, v47, Instance, 0);
  if ( initPos )
    v50 = initPos;
  else
    v50 = index + 1;
  this->fields._InitPos_k__BackingField = v50;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v51 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0)) == 0 )
  {
    v56 = 0;
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_equipSvtIdList, v56, v48, v49);
    if ( !userServantEntity )
      goto LABEL_153;
    Instance = (__int64)UserServantEntity__GetOverwriteStatus(userServantEntity, questRestrictionInfo, 0);
    if ( !*p_servantEntity )
      goto LABEL_153;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !Instance )
      goto LABEL_153;
    this->fields.cost = *(_DWORD *)(Instance + 28);
    *(_QWORD *)&this->fields.hp = *(_QWORD *)(Instance + 16);
    this->fields.rarityId = *(_DWORD *)(Instance + 24);
    v58 = *(_DWORD *)(Instance + 40);
    this->fields.actualRarity = v58;
    Instance = UserServantEntity__GetFrameType(userServantEntity, v58, 0);
    v59 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v59 )
      goto LABEL_153;
    v61 = *(_QWORD *)&v59->fields.limitCount.fields.currentCryptoKey;
    v60 = *(_QWORD *)&v59->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v145.fields.currentCryptoKey = v61;
    *(_QWORD *)&v145.fields.fakeValue = v60;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v145, 0);
    v62 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v62 )
      goto LABEL_153;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v62, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v64, v65);
    v66 = this->fields.questRestrictionInfo;
    if ( v66 )
    {
      v67 = this->fields.userServantEntity;
      if ( !v67 )
        goto LABEL_153;
      v69 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
      v68 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v146.fields.currentCryptoKey = v69;
      *(_QWORD *)&v146.fields.fakeValue = v68;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v146, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v70 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020((*p_userServantEntity)[6], 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v71 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      Instance = QuestRestrictionInfo__IsRestriction_43668628(
                   v66,
                   &this->fields.isQuestRestrictionWhole,
                   v70,
                   v71,
                   Instance,
                   this->fields.rarityId,
                   (*p_userServantEntity)[16].fields.currentCryptoKey,
                   this->fields._InitPos_k__BackingField,
                   1,
                   0);
      v72 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v72 )
      {
        v73 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_153;
        v75 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v147.fields.currentCryptoKey = v75;
        *(_QWORD *)&v147.fields.fakeValue = v74;
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v147, 0);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v72, v76, 0);
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
    v79 = this->fields.questRestrictionInfo;
    if ( !v79 )
      goto LABEL_152;
    if ( v79->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_153;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_153;
      v80 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v81 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v84 = *(_QWORD *)&v80->fields.svtId.fields.currentCryptoKey;
      v83 = *(_QWORD *)&v80->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v148.fields.currentCryptoKey = v84;
      *(_QWORD *)&v148.fields.fakeValue = v83;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v148, 0);
      if ( !v81 )
        goto LABEL_153;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v81,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0);
      if ( (Instance & 1) != 0 )
      {
        v85 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0);
        if ( v85 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v86 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_153;
    if ( v86->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v86->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_153;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v88 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v89 = (UserEventAlloutBattleMaster_o *)Instance;
      v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
      v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v149.fields.currentCryptoKey = v91;
      *(_QWORD *)&v149.fields.fakeValue = v90;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v149, 0);
      if ( !*p_questRestrictionInfo || !v89 )
        goto LABEL_153;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v89,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_153;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !*p_questRestrictionInfo || !Master_object )
        goto LABEL_153;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_object,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0);
      if ( (Instance & 1) != 0 )
      {
        v93 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_153;
        v94 = entity;
        v96 = *(_QWORD *)&v93->fields.svtId.fields.currentCryptoKey;
        v95 = *(_QWORD *)&v93->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v150.fields.currentCryptoKey = v96;
        *(_QWORD *)&v150.fields.fakeValue = v95;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v150, 0);
        if ( !v94 )
          goto LABEL_153;
        Instance = UserEventDataLostEntity__IsRestart(v94, Instance, 0);
        v97 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_153;
        v98 = Instance;
        v99 = entity;
        v101 = *(_QWORD *)&v97->fields.svtId.fields.currentCryptoKey;
        v100 = *(_QWORD *)&v97->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v151.fields.currentCryptoKey = v101;
        *(_QWORD *)&v151.fields.fakeValue = v100;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v151, 0);
        if ( !v99 )
          goto LABEL_153;
        if ( (v98 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v99, Instance, 0);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v99, Instance, 0);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43687880(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             0) )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_153;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_153;
        v102 = *(_DWORD *)(Instance + 24);
        v103 = Instance;
        if ( v102 >= 1 )
        {
          v104 = 0;
          while ( 1 )
          {
            if ( v104 >= v102 )
              goto LABEL_154;
            v105 = *(_QWORD *)(v103 + 8LL * (int)v104 + 32);
            if ( !v105 )
              goto LABEL_153;
            v107 = *(_QWORD *)(v105 + 80);
            v106 = *(_QWORD *)(v105 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v152.fields.currentCryptoKey = v107;
            *(_QWORD *)&v152.fields.fakeValue = v106;
            v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v152, 0);
            v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v105 + 96),
                     0);
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v105, 0, 0);
            ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                     questRestrictionInfo,
                                     v108,
                                     v109,
                                     DispLimitCount,
                                     0);
            Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v105, 0);
            Instance = QuestRestrictionInfo__IsRestriction_43668908(
                         questRestrictionInfo,
                         &isWhole,
                         ServantIndividuality,
                         Rarity,
                         *(_DWORD *)(v105 + 256),
                         this->fields._InitPos_k__BackingField,
                         1,
                         0);
            if ( (Instance & 1) == 0 )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_43690924(
                           questRestrictionInfo,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0);
              if ( (Instance & 1) == 0 )
                break;
            }
            v102 = *(_DWORD *)(v103 + 24);
            if ( (int)++v104 >= v102 )
              goto LABEL_107;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
LABEL_107:
      Instance = QuestRestrictionInfo__IsGrandServantRestriction(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isRestrictionGrandServant = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !Instance )
          goto LABEL_153;
        Instance = QuestPhaseMaster__TryGetEntity(
                     (QuestPhaseMaster_o *)Instance,
                     &v140,
                     questRestrictionInfo->fields.questId,
                     questRestrictionInfo->fields.questPhase,
                     0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v140;
          if ( !v140 )
            goto LABEL_153;
          Instance = QuestPhaseEntity__IsUseGrandBoard(v140, 0);
          v113 = (Instance & 1) != 0 && this->fields._IsGrandServant_k__BackingField;
          this->fields._IsUseGrandBoard_k__BackingField = v113;
        }
      }
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_153;
    v114 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_153;
    v115 = (EventServantPointRankMaster_o *)Instance;
    Instance = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v114, 0);
    if ( (Instance & 1) != 0 )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v116 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v117 = *(_OWORD *)&v116->fields.userId.fields.fakeValue;
      v118 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v116->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v117;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v137 = v138;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v137, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v119 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0);
      if ( !v118 )
        goto LABEL_153;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v118, &v139, v119, v114, Instance, 0) )
      {
        Instance = (__int64)v139;
        if ( !v139 )
          goto LABEL_153;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v139, 0);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v121 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v115, v114, v121, SvtId, 0);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v114, v124);
    }
    v125 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_153;
    v126 = *(_OWORD *)&v125->fields.id.fields.fakeValue;
    *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v125->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v138.fields.fakeValue = v126;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v136 = v138;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v136, 0) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v127 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1C6BAB0(long___TypeInfo, 1);
      v128 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v129 = *(_OWORD *)&v128->fields.id.fields.fakeValue;
      v130 = Instance;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v128->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v129;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v135 = v138;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v135, 0);
      if ( !v130 )
        goto LABEL_153;
      if ( !*(_DWORD *)(v130 + 24) )
LABEL_154:
        sub_1C6BC68(Instance);
      *(_QWORD *)(v130 + 32) = Instance;
      if ( !v127 )
        goto LABEL_153;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v127,
              (System_Int64_array *)v130,
              (const MethodInfo_33FAC14 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
      {
LABEL_151:
        this->fields._IsDisappearSvt_k__BackingField = 1;
        goto LABEL_152;
      }
    }
    Instance = (__int64)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0) )
        goto LABEL_151;
LABEL_152:
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v78);
      return;
    }
LABEL_153:
    sub_1C6BC60(Instance, v37);
  }
  v52 = v51;
  v53 = (struct System_Int32_array *)sub_1C6BB44(v51, int___TypeInfo);
  if ( v53 )
  {
    this->fields.equipSvtIdList = v53;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v55 = sub_1C6BB44(v52, int___TypeInfo);
    if ( v55 )
    {
      v56 = v55;
      goto LABEL_21;
    }
  }
  v131 = (PartyOrganizationListViewItem_o *)sub_1C6BFFC(v52);
  PartyOrganizationListViewItem__SetCanGetBuddyPoint(v131, v132, v133);
}


void PartyOrganizationListViewItem___ctor_34453080(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        const MethodInfo *method)
{
  bool v13; // w28
  System_Collections_Generic_List_object__o *v14; // x26
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x26
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int v32; // w1
  void *Instance; // x0
  __int64 v34; // x1
  int v35; // w8
  void *v36; // x22
  unsigned int v37; // w26
  __int64 v38; // x23
  __int64 v39; // x24
  __int64 v40; // x25
  int32_t v41; // w24
  int32_t v42; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  bool v46; // w8
  const MethodInfo *v47; // x2
  struct QuestRestrictionInfo_o *v48; // x8
  int32_t eventId; // w21
  QuestPhaseEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  bool isWhole; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v13 = isFollower;
  if ( (byte_4CB1CDF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1CDF = 1;
  }
  isWhole = 0;
  entity = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v17, v18, v19);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v20, v21);
  this->fields.followerInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
  this->fields.isFollower = v13;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerGrandGraphId = 0;
  this->fields.followerClassId = 0;
  this->fields.setupInfo = setupInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.servantEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v28, v29);
  if ( initPos )
    v32 = initPos;
  else
    v32 = index + 1;
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  *(_QWORD *)&this->fields.rarityId = 0;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  this->fields.isRestrictionGrandServant = 0;
  this->fields._InitPos_k__BackingField = v32;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._EquipFriendShipSkillChange_k__BackingField = 0;
  if ( !questRestrictionInfo )
    goto LABEL_38;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43687880(questRestrictionInfo, v32, 0) )
  {
    this->fields.frameType = 9;
    this->fields.isMyServantOrNpcRestriction = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_49;
    v35 = *((_DWORD *)Instance + 6);
    v36 = Instance;
    if ( v35 >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( v37 >= v35 )
          sub_1C6BC68(Instance);
        v38 = *((_QWORD *)v36 + (int)v37 + 4);
        this->fields._IsGrandServant_k__BackingField = 0;
        this->fields._IsUseGrandBoard_k__BackingField = 0;
        if ( !v38 )
          goto LABEL_49;
        v40 = *(_QWORD *)(v38 + 80);
        v39 = *(_QWORD *)(v38 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v54.fields.currentCryptoKey = v40;
        *(_QWORD *)&v54.fields.fakeValue = v39;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v54, 0);
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v38 + 96),
                0);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v38, 0, 0);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v41,
                                 v42,
                                 DispLimitCount,
                                 0);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v38, 0);
        Instance = (void *)QuestRestrictionInfo__IsRestriction_43668908(
                             questRestrictionInfo,
                             &isWhole,
                             ServantIndividuality,
                             Rarity,
                             *(_DWORD *)(v38 + 256),
                             this->fields._InitPos_k__BackingField,
                             1,
                             0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43690924(
                               questRestrictionInfo,
                               ServantIndividuality,
                               this->fields._InitPos_k__BackingField,
                               0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
        v35 = *((_DWORD *)v36 + 6);
        if ( (int)++v37 >= v35 )
          goto LABEL_39;
      }
      this->fields.haveIndividualityServant = 1;
    }
    goto LABEL_39;
  }
  if ( questRestrictionInfo->fields.isNpcOnlyBattle && questRestrictionInfo->fields.myServantNumMax < index )
  {
    this->fields.frameType = 11;
    this->fields.isFixMultipleNpcRestriction = 1;
    goto LABEL_39;
  }
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0)
    && questRestrictionInfo->fields.servantNumMax <= index
    || questRestrictionInfo->fields.isNpcMultipleBattle
    && !questRestrictionInfo->fields.isNpcEditablePos
    && !isMyServant )
  {
    this->fields.frameType = 11;
    this->fields.isServantNumRestriction = 1;
    goto LABEL_39;
  }
  if ( !QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, this->fields._InitPos_k__BackingField, 0) )
  {
LABEL_38:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_39;
  }
  this->fields.frameType = 9;
  this->fields.isRestrictionGrandServant = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_49;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Instance,
         &entity,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_49;
    v46 = QuestPhaseEntity__IsUseGrandBoard(entity, 0) && this->fields._IsGrandServant_k__BackingField;
    this->fields._IsUseGrandBoard_k__BackingField = v46;
  }
LABEL_39:
  this->fields.commandCodeIdList = 0;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v30, v31);
  this->fields.fatigureTime = -1;
  v48 = this->fields.questRestrictionInfo;
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
  if ( !v48 )
    goto LABEL_45;
  eventId = v48->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_49:
    sub_1C6BC60(Instance, v34);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v47);
  }
LABEL_45:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v47);
}


void PartyOrganizationListViewItem___ctor_34454416(
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x27
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  ServantEntity_o *v37; // x8
  DataManager_o *v38; // x24
  struct ServantEntity_o *servantEntity; // x8
  int32_t m_CancellationTokenSource; // w8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  int v44; // w9

  if ( (byte_4CB1CE0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1CE0 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v20, v21, v22);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v23, v24);
  this->fields.questRestrictionInfo = questRestriction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestriction, v25, v26);
  this->fields.followerInfo = follower;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v27, v28);
  this->fields.setupInfo = eventUpValSetupInfo;
  *(_WORD *)&this->fields.isFollower = follower != 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)eventUpValSetupInfo, v29, v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v35, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0);
  v37 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_15;
  v38 = Instance;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                v37,
                                this->fields.imageLimitCount,
                                0);
  servantEntity = this->fields.servantEntity;
  this->fields.imageLimitCount = (int)Instance;
  if ( !servantEntity
    || (this->fields.classId = servantEntity->fields.classId, !v38)
    || (m_CancellationTokenSource = (int32_t)v38->fields.m_CancellationTokenSource,
        this->fields.rarityId = m_CancellationTokenSource,
        this->fields.actualRarity = m_CancellationTokenSource,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0 )
  {
LABEL_15:
    sub_1C6BC60(Instance, v32);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_42923448(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             isGrandServant,
                             0);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v41, v42);
  v44 = initPosition;
  this->fields.fatigureTime = -1;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  *(_WORD *)&this->fields.isRestrictionServantPos = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  if ( !initPosition )
    v44 = index + 1;
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
  this->fields._InitPos_k__BackingField = v44;
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v43);
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
  System_Func_object__object__o *_9__357_0; // x20
  Il2CppObject *v45; // x29
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x29
  PartyOrganizationListViewItem___c_c *v50; // x8
  System_Func_object__bool__o *_9__357_1; // x20
  Il2CppObject *v52; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x29
  PartyOrganizationListViewItem___c_c *v57; // x8
  System_Func_object__object__o *_9__357_2; // x20
  Il2CppObject *v59; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x28
  PartyOrganizationListViewItem___c_c *v64; // x8
  System_Func_object__bool__o *_9__357_3; // x20
  Il2CppObject *v66; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x20
  __int64 FriendshipBonusValue; // x0
  __int64 v72; // x1
  __int64 v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Collections_Generic_List_object__o *v76; // x0
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x8
  EventQuestMaster_o *v81; // [xsp+8h] [xbp-B8h]
  Il2CppObject *Master_object; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v4 = &DataManager_TypeInfo;
  if ( (byte_4CB1D11 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Single_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C6BA08(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C6BA08(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_0__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_1__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_2__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_3__);
    sub_1C6BA08(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D11 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v6 )
    sub_1C6BC60(Instance, v8);
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)v6,
                                                                         (int64_t)Instance[7].klass,
                                                                         0);
  v10 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( FriendshipUpCampaigns )
  {
    v81 = (EventQuestMaster_o *)v10;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v85,
      FriendshipUpCampaigns,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v86 = v85;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v86,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v12 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v86,
            (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          return;
        }
        current = (EventCampaignEntity_o *)v86.fields._current;
        if ( !v86.fields._current )
          sub_1C6BC60(v12, v13);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v86.fields._current[2].monitor;
        if ( !monitor || !monitor[1].monitor )
          goto LABEL_29;
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C6BC60(v12, v13);
        v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v87.fields.currentCryptoKey = v17;
        *(_QWORD *)&v87.fields.fakeValue = v18;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v87, 0);
        if ( System_Linq_Enumerable__Contains_int_(
               monitor,
               v19,
               (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
LABEL_29:
          if ( !(*v4)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v4);
          v20 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
          v22 = this->fields.userServantEntity;
          if ( !v22 )
            sub_1C6BC60(v20, v21);
          v23 = (UserServantMaster_o *)v20;
          v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
          v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v88.fields.currentCryptoKey = v24;
          *(_QWORD *)&v88.fields.fakeValue = v25;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v88, 0);
          if ( !v23 )
            sub_1C6BC60(v26, (unsigned int)v26);
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
              sub_1C6BC60(HeroineData, v28);
            questId = questRestrictionInfo->fields.questId;
            questPhase = questRestrictionInfo->fields.questPhase;
            v33 = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !v33 )
              sub_1C6BC60(0, v34);
            if ( !v81 )
              sub_1C6BC60(v33, v34);
            if ( !EventQuestMaster__IsEventNotIncluded(v81, eventId, questId, questPhase, 7, (int64_t)v33[7].klass, 0) )
              break;
          }
        }
      }
      v35 = (EventMargeItemUpValInfo_o *)sub_1C6BC54(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_41952540(v35, eventId, 0);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId(current, 0);
      if ( !v11 )
        sub_1C6BC60(OnlyMaxFuncGroupId, v37);
      v38 = OnlyMaxFuncGroupId;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 eventId,
                 (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C6BC60(0, v40);
      v41 = v4;
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)Entity[7].monitor;
      if ( !v42 )
        sub_1C6BC60(Entity, v40);
      if ( !v42[1].monitor )
        break;
      v43 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v43 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_0 = (System_Func_object__object__o *)v43->static_fields->__9__357_0;
      if ( !_9__357_0 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__357_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__357_0,
          v45,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_0__,
          0);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__357_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__357_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__357_0, (int32_t)_9__357_0, v47, v48);
      }
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v42,
                                                                   (System_Func_TSource__TResult__o *)_9__357_0,
                                                                   (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v50 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v50 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_1 = (System_Func_object__bool__o *)v50->static_fields->__9__357_1;
      if ( !_9__357_1 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v50->static_fields->__9;
        _9__357_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__357_1,
          v52,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_1__,
          0);
        v53 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v53->__9__357_1 = (struct System_Func_string__bool__o *)_9__357_1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v53->__9__357_1, (int32_t)_9__357_1, v54, v55);
      }
      v56 = System_Linq_Enumerable__Single_object__51869728(
              v49,
              (System_Func_TSource__bool__o *)_9__357_1,
              (const MethodInfo_3177820 *)Method_System_Linq_Enumerable_Single_string___);
      if ( !v42[1].monitor )
        goto LABEL_61;
      v57 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v57 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_2 = (System_Func_object__object__o *)v57->static_fields->__9__357_2;
      if ( !_9__357_2 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v59 = (Il2CppObject *)v57->static_fields->__9;
        _9__357_2 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__357_2,
          v59,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_2__,
          0);
        v60 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v60->__9__357_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__357_2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v60->__9__357_2, (int32_t)_9__357_2, v61, v62);
      }
      v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v42,
                                                                   (System_Func_TSource__TResult__o *)_9__357_2,
                                                                   (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v64 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v64 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_3 = (System_Func_object__bool__o *)v64->static_fields->__9__357_3;
      if ( !_9__357_3 )
      {
        if ( !v64->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v64);
          v64 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v66 = (Il2CppObject *)v64->static_fields->__9;
        _9__357_3 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__357_3,
          v66,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_3__,
          0);
        v67 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v67->__9__357_3 = (struct System_Func_string__bool__o *)_9__357_3;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v67->__9__357_3, (int32_t)_9__357_3, v68, v69);
      }
      v70 = System_Linq_Enumerable__Single_object__51869728(
              v63,
              (System_Func_TSource__bool__o *)_9__357_3,
              (const MethodInfo_3177820 *)Method_System_Linq_Enumerable_Single_string___);
LABEL_62:
      v4 = v41;
      FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !v35 )
        sub_1C6BC60(FriendshipBonusValue, v72);
      EventMargeItemUpValInfo__SetFriendshipUpBonus_41952644(
        v35,
        eventId,
        FriendshipBonusValue,
        v38,
        (System_String_o *)v56,
        (System_String_o *)v70,
        current->fields.calcType,
        0);
      v76 = (System_Collections_Generic_List_object__o *)*infoList;
      if ( !*infoList )
        sub_1C6BC60(0, v73);
      items = v76->fields._items;
      v78 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v76->fields._version;
      if ( !items )
        sub_1C6BC60(v76, v73);
      size = v76->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v35,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + size;
        v76->fields._size = size + 1;
        v80[4] = (Il2CppClass *)v35;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v80 + 4), (int32_t)v35, v74, v75);
      }
    }
    v56 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_61:
    v70 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_62;
  }
}


System_Int64_array *PartyOrganizationListViewItem__CheckDuplicationGrandServantEquipment(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *equipIdList; // x19
  PartyOrganizationListViewItem___c_c *v5; // x0
  System_Func_long__long__o *_9__361_0; // x20
  Il2CppObject *v7; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v11; // x0
  PartyOrganizationListViewItem___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__361_1; // x20
  Il2CppObject *v15; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  PartyOrganizationListViewItem___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__long__o *_9__361_2; // x20
  Il2CppObject *v23; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_4CB1D13 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_GroupBy_long__long___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
    sub_1C6BA08(&System_Func_long__long__TypeInfo);
    sub_1C6BA08(&System_Func_IGrouping_long__long___long__TypeInfo);
    sub_1C6BA08(&System_Func_IGrouping_long__long___bool__TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_0__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_1__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_2__);
    sub_1C6BA08(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4CB1D13 = 1;
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
  _9__361_0 = v5->static_fields->__9__361_0;
  if ( !_9__361_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__361_0 = (System_Func_long__long__o *)sub_1C6BC54(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__361_0,
      v7,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_0__,
      0);
    static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__361_0 = _9__361_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__361_0, (int32_t)_9__361_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__GroupBy_long__long_(
          equipIdList,
          (System_Func_TSource__TKey__o *)_9__361_0,
          (const MethodInfo_31656FC *)Method_System_Linq_Enumerable_GroupBy_long__long___);
  v12 = PartyOrganizationListViewItem___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v12 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__361_1 = (System_Func_object__bool__o *)v12->static_fields->__9__361_1;
  if ( !_9__361_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__361_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_IGrouping_long__long___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__361_1,
      v15,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_1__,
      0);
    v16 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v16->__9__361_1 = (struct System_Func_IGrouping_long__long___bool__o *)_9__361_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v16->__9__361_1, (int32_t)_9__361_1, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)_9__361_1,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
  v20 = PartyOrganizationListViewItem___c_TypeInfo;
  v21 = v19;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v20 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__361_2 = (System_Func_object__long__o *)v20->static_fields->__9__361_2;
  if ( !_9__361_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__361_2 = (System_Func_object__long__o *)sub_1C6BC54(System_Func_IGrouping_long__long___long__TypeInfo);
    System_Func_object__long____ctor(
      _9__361_2,
      v23,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_2__,
      0);
    v24 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v24->__9__361_2 = (struct System_Func_IGrouping_long__long___long__o *)_9__361_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v24->__9__361_2, (int32_t)_9__361_2, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v21,
                                                               (System_Func_TSource__TResult__o *)_9__361_2,
                                                               (const MethodInfo_317181C *)Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
  return System_Linq_Enumerable__ToArray_long_(
           v27,
           (const MethodInfo_317B1C0 *)Method_System_Linq_Enumerable_ToArray_long___);
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
  bool IsUniqueIndividualityRestriction_43419384; // w0
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
  bool IsUniqueIndividualityRestriction_41985068; // w0
  const MethodInfo *v67; // x1
  QuestRestrictionInfo_o *v68; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_43675000; // w0
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

  if ( (byte_4CB1CED & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1CED = 1;
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
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v80, 0);
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
      userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43668628(
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
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43687880(
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
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v81, 0);
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
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43668908(
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
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43687880(
                                                       (QuestRestrictionInfo_o *)userServantEntity,
                                                       this->fields._InitPos_k__BackingField,
                                                       0);
          if ( ((unsigned __int8)userServantEntity & 1) != 0 )
          {
            userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !userServantEntity )
              goto LABEL_92;
            userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43690924(
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
    userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_41984876(
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
    IsUniqueIndividualityRestriction_41985068 = FollowerInfo__IsUniqueIndividualityRestriction_41985068(
                                                  v63,
                                                  v64,
                                                  v62,
                                                  partyItem,
                                                  num,
                                                  v65,
                                                  0);
    v68 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41985068;
    if ( v68 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v67);
      IsFixedSupportPosition_43675000 = QuestRestrictionInfo__IsFixedSupportPosition_43675000(
                                          v68,
                                          num,
                                          ServantLeader,
                                          0);
      v71 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_43675000;
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
          v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(SvtId, 0);
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
    userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                 v78,
                                                 0);
    v12 = this->fields.userServantEntity;
    if ( v12 )
    {
      v13 = (int)userServantEntity;
      userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
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
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43668628(
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
            userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                         v79,
                                                         0);
            v21 = this->fields.userServantEntity;
            if ( v21 )
            {
              v22 = (int)userServantEntity;
              userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
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
    sub_1C6BC60(userServantEntity, v11);
  }
  *(_WORD *)&this->fields.isQuestRestriction = 0;
LABEL_42:
  userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_43419004(
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
  IsUniqueIndividualityRestriction_43419384 = UserServantEntity__IsUniqueIndividualityRestriction_43419384(
                                                v40,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0);
  v43 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_43419384;
  if ( v43 )
  {
    v44 = PartyOrganizationListViewItem__get_SvtId(this, v42);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v44, 0);
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
  const MethodInfo *v5; // x2
  int32_t v6; // w20

  v2 = this;
  if ( (byte_4CB1CEC & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4CB1CEC = 1;
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
                                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
          PartyOrganizationListViewItem__SetEquipStatus(v2, v4, v5);
          return v6;
        }
LABEL_16:
        sub_1C6BC68(this);
      }
LABEL_17:
      sub_1C6BC60(this, v4);
    }
  }
  return 0;
}


void PartyOrganizationListViewItem__ClearFatigure(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  this->fields.fatigureTime = -1;
}


void PartyOrganizationListViewItem__ClearFollower(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.followerInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v2, v3);
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

  if ( (byte_4CB1CE1 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationListViewItem_TypeInfo);
    byte_4CB1CE1 = 1;
  }
  index = idx;
  if ( idx < 0 )
    index = this->fields.index;
  v6 = (PartyOrganizationListViewItem_o *)sub_1C6BC54(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor(v6, index, v7);
  if ( !v6 )
    sub_1C6BC60(v8, v9);
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
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x20
  bool result; // w0
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o *v7; // x9
  __int128 v8; // q1
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q0
  PartyOrganizationListViewItem_o *v11; // x21
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v13; // x8
  int max_length; // w10
  int v15; // w11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_4CB1CEF & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB1CEF = 1;
  }
  if ( !item )
    goto LABEL_29;
  if ( v4->fields.npcFollowerSvtId != item->fields.npcFollowerSvtId || v4->fields.isFollower == !item->fields.isFollower )
    return 0;
  if ( v4->fields.isFollower )
    return 1;
  userServantEntity = v4->fields.userServantEntity;
  v7 = item->fields.userServantEntity;
  if ( userServantEntity == v7 )
  {
LABEL_15:
    if ( v4->fields._InitPos_k__BackingField == item->fields._InitPos_k__BackingField )
    {
      equipIdList = v4->fields.equipIdList;
      v13 = item->fields.equipIdList;
      if ( !equipIdList )
      {
        if ( !v13 )
          return 1;
        return v4->fields._EquipFriendShipSkillChange_k__BackingField == item->fields._EquipFriendShipSkillChange_k__BackingField;
      }
      if ( !v13 )
        return v4->fields._EquipFriendShipSkillChange_k__BackingField == item->fields._EquipFriendShipSkillChange_k__BackingField;
      max_length = equipIdList->max_length;
      if ( max_length == LODWORD(v13->max_length) )
      {
        if ( max_length >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( max_length == v15 )
              sub_1C6BC68(this);
            if ( equipIdList->m_Items[v15] != v13->m_Items[v15] )
              break;
            if ( max_length == ++v15 )
              return v4->fields._EquipFriendShipSkillChange_k__BackingField == item->fields._EquipFriendShipSkillChange_k__BackingField;
          }
          return 0;
        }
        return v4->fields._EquipFriendShipSkillChange_k__BackingField == item->fields._EquipFriendShipSkillChange_k__BackingField;
      }
    }
    return 0;
  }
  result = 0;
  if ( userServantEntity && v7 )
  {
    v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v18.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v17 = v18;
    this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                &v17,
                                                0);
    v9 = item->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      v11 = this;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v10;
      this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                  &v16,
                                                  0);
      if ( v11 != this )
        return 0;
      goto LABEL_15;
    }
LABEL_29:
    sub_1C6BC60(this, item);
  }
  return result;
}


void PartyOrganizationListViewItem__Empty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  this->fields.userServantEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v5, v6);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0;
  *(_QWORD *)&this->fields.followerIndex = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  HIDWORD(this->fields.equipIdList) = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  *(_QWORD *)&this->fields.rarityId = 0;
  *(_QWORD *)&this->fields.frameType = 9;
  this->fields.commandCodeIdList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
  this->fields.fatigureTime = -1;
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsGrandServant_k__BackingField = 0;
  this->fields._IsUseGrandBoard_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v13);
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

  if ( (byte_4CB1D10 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1D10 = 1;
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
                                                                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
                                                                          (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipServantEntityList )
LABEL_23:
    sub_1C6BC60(equipServantEntityList, *(_QWORD *)&index);
  items = equipServantEntityList[2].fields._items;
  v7 = *(_QWORD *)&equipServantEntityList[2].fields._size;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = items;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  EquipLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v16, 0);
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

  if ( (byte_4CB1D07 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&UINarrowFigureRender_TypeInfo);
    byte_4CB1D07 = 1;
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
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v24, 0);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_27:
    sub_1C6BC60(SvtId, v7);
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
  PartyOrganizationListViewItem___c__DisplayClass365_0_c **v15; // x21
  const MethodInfo_33FB684 **v16; // x20
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
  const MethodInfo_33FB684 **v34; // x23
  PartyOrganizationListViewItem___c__DisplayClass365_0_c **v35; // x20
  System_Collections_IEnumerator_c **v36; // x21
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v37; // x22
  QuestRestrictionInfo_o *v38; // x26
  int32_t v39; // w27
  int32_t v40; // w28
  int32_t v41; // w29
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v43; // x1
  _BOOL8 IsRestriction_43667396; // x0
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
  const MethodInfo *v58; // x3
  _BOOL8 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Int32_array *targetVals; // x26
  System_Func_int__bool__o *v64; // x27
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  System_Collections_Generic_IEnumerator_T__c *v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  System_Collections_Generic_List_object__o *v74; // [xsp+8h] [xbp-88h]
  RestrictionEntity_o *GrandServantRestrictionEntity; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_IEnumerator_T__o *v76; // [xsp+18h] [xbp-78h]
  PartyOrganizationListViewItem_o *v77; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4CB1D15 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_int____78570976);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__DisplayClass365_0__GetCanOrganizationGrandSvtIdList_b__0__);
    sub_1C6BA08(&PartyOrganizationListViewItem___c__DisplayClass365_0_TypeInfo);
    byte_4CB1D15 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_75;
  monitor = (System_Collections_ICollection_o *)Master_object[2].monitor;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(monitor, 0);
  v8 = 0;
  if ( !GrandServantRestrictionEntity || IsNullOrEmpty )
    return v8;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !monitor )
LABEL_75:
    sub_1C6BC60(Master_object, v5);
  v74 = v9;
  v77 = this;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)monitor,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v76 = Enumerator;
  if ( !Enumerator )
    sub_1C6BC60(0, v12);
  v13 = &System_Collections_IEnumerator_TypeInfo;
  v14 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v15 = &PartyOrganizationListViewItem___c__DisplayClass365_0_TypeInfo;
  v16 = (const MethodInfo_33FB684 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
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
      v22 = sub_1C41D90(v17, v19, 0);
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
      v27 = sub_1C41D90(v17, v24, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            v17,
            *(_QWORD *)(v27 + 8));
    v29 = sub_1C6BC54(*v15);
    PartyOrganizationListViewItem___c__DisplayClass365_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass365_0_o *)v29,
      0);
    if ( !v28 )
      sub_1C6BC60(v30, v31);
    if ( !v10 )
      sub_1C6BC60(v30, v31);
    if ( DataMasterBase_object__object__long___TryGetEntity(v10, &entity, *(_QWORD *)(v28 + 32), *v16) )
    {
      if ( !entity )
        sub_1C6BC60(0, v32);
      v33 = v10;
      v34 = v16;
      v35 = v15;
      v36 = v13;
      v37 = v14;
      v38 = v77->fields.questRestrictionInfo;
      v39 = *(_DWORD *)(v28 + 40);
      v40 = *(_DWORD *)(v28 + 44);
      v41 = *(_DWORD *)(v28 + 48);
      OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
      if ( !OverwriteStatus )
        sub_1C6BC60(0, v43);
      if ( !v38 )
        sub_1C6BC60(OverwriteStatus, v43);
      IsRestriction_43667396 = QuestRestrictionInfo__IsRestriction_43667396(
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
      v17 = v76;
      if ( !IsRestriction_43667396 )
      {
        if ( !entity )
          sub_1C6BC60(IsRestriction_43667396, v45);
        v47 = entity[5].klass;
        v46 = entity[5].monitor;
        v48 = v77->fields.questRestrictionInfo;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = v47;
        *(_QWORD *)&v79.fields.fakeValue = v46;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v79, 0);
        if ( !entity )
          sub_1C6BC60(v49, v50);
        v51 = v49;
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                0);
        if ( !entity )
          sub_1C6BC60(0, v52);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !v48 )
          sub_1C6BC60(DispLimitCount, v55);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v48, v51, v53, DispLimitCount, 0);
        if ( !v29 )
          sub_1C6BC60(ServantIndividuality, ServantIndividuality);
        *(_QWORD *)(v29 + 16) = ServantIndividuality;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 16), (int32_t)ServantIndividuality, v57, v58);
        v59 = BasicHelper__IsNullOrEmpty(
                (System_Collections_ICollection_o *)GrandServantRestrictionEntity->fields.targetVals,
                0);
        if ( v59 )
          goto LABEL_46;
        targetVals = GrandServantRestrictionEntity->fields.targetVals;
        if ( !targetVals )
          sub_1C6BC60(v59, v60);
        if ( !LODWORD(targetVals->max_length) )
          sub_1C6BC68(v59);
        if ( !targetVals->m_Items[0]
          || (v64 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v64,
                (Il2CppObject *)v29,
                Method_PartyOrganizationListViewItem___c__DisplayClass365_0__GetCanOrganizationGrandSvtIdList_b__0__,
                0),
              v59 = BasicHelper__Any_int__51528112(
                      targetVals,
                      (System_Func_T__bool__o *)v64,
                      (const MethodInfo_31241B0 *)Method_BasicHelper_Any_int____78570976)) )
        {
LABEL_46:
          if ( !v74 )
            sub_1C6BC60(v59, v60);
          items = v74->fields._items;
          v66 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
          ++v74->fields._version;
          if ( !items )
            sub_1C6BC60(v59, v60);
          size = v74->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v74,
              (Il2CppObject *)v28,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &items->obj.klass + size;
            v74->fields._size = size + 1;
            v68[4] = (Il2CppClass *)v28;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v68 + 4), v28, v61, v62);
          }
        }
      }
    }
  }
  v8 = (System_Collections_Generic_List_UserServantGrandEntity__o *)v74;
  if ( v17 )
  {
    v69 = v17->klass;
    v70 = *(unsigned __int16 *)&v17->klass->_2.rank;
    if ( *(_WORD *)&v17->klass->_2.rank )
    {
      v71 = &v69->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_57;
      }
      v72 = (__int64)&v69->vtable[*v71];
    }
    else
    {
LABEL_57:
      v72 = sub_1C41D90(v17, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v72)(v17, *(_QWORD *)(v72 + 8));
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

  if ( (byte_4CB1D09 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB1D09 = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43684956(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0),
            result < 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0);
LABEL_23:
        sub_1C6BC60(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43684956(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C6BC60(v5, 0);
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

  if ( (byte_4CB1D06 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB1D06 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0;
  result = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 3);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0 )
LABEL_15:
    sub_1C6BC60(result, v5);
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
        sub_1C6BC68(result);
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

  if ( (byte_4CB1D08 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1D08 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(SvtId, 0);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43684956(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C6BC60(v5, 0);
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
  if ( (byte_4CB1D14 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C6BA08(&StringLiteral_7000/*"GRAND_SERVANT_EQUIP_FRAME_"*/);
    byte_4CB1D14 = 1;
  }
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    sub_1C6BC60(this, userSvtId);
  max_length = equipIdList->max_length;
  v7 = 0;
  do
  {
    if ( (int)v7 >= (int)max_length )
      return string_TypeInfo->static_fields->Empty;
    if ( v7 >= max_length )
      sub_1C6BC68(this);
    v8 = equipIdList->m_Items[v7++];
  }
  while ( v8 != userSvtId );
  v12 = v7;
  v9 = System_Int32__ToString((int32_t)&v12, 0);
  v10 = System_String__Concat_63966792((System_String_o *)StringLiteral_7000/*"GRAND_SERVANT_EQUIP_FRAME_"*/, v9, 0);
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

  if ( (byte_4CB1CF0 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    byte_4CB1CF0 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0);
    if ( result )
    {
      v5 = result;
      result = (System_Int64_array *)sub_1C6BB44(result, long___TypeInfo);
      if ( !result )
      {
        v7 = (PartyOrganizationListViewItem_o *)sub_1C6BFFC(v5);
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
    return (System_Int64_array *)sub_1C6BAB0(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax);
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


// local variable allocation has failed, the output may be wrong!
int64_t PartyOrganizationListViewItem__GetEquipUserSvtIdByIndex(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x0
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4CB1CFB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB1CFB = 1;
  }
  equipUserServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
  if ( !equipUserServantEntityList
    || (equipUserServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    equipUserServantEntityList,
                                                                                    index,
                                                                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
  {
    sub_1C6BC60(equipUserServantEntityList, *(_QWORD *)&index);
  }
  v6 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v8, 0);
}


bool PartyOrganizationListViewItem__GetEventUpVal(
        PartyOrganizationListViewItem_o *this,
        EventUpValInfo_o **eventUpValInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventUpValInfo_o *v4; // x8

  v4 = this->fields.eventUpValInfo;
  *eventUpValInfo = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4CB1D05 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D05 = 1;
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

  if ( (byte_4CB1D04 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D04 = 1;
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

  if ( (byte_4CB1D12 & 1) == 0 )
  {
    sub_1C6BA08(&UserServantGrandInfo_TypeInfo);
    byte_4CB1D12 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43684956(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C6BC60(v5, 0);
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

  if ( (byte_4CB1D0B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D0B = 1;
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

  if ( (byte_4CB1D0C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D0C = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43684956(questRestrictionInfo, userServantEntity, 0);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C6BC60(v5, 0);
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

  if ( (byte_4CB1D01 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D01 = 1;
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
    sub_1C6BC60(v4, method);
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
    v4 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v7 = (System_String_o *)v4;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0);
    return System_String__Concat_63966792(v7, ConfirmRestrictionMessage, 0);
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
  if ( (byte_4CB1CF5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1CF5 = 1;
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
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v22, 0);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v23, 0);
  if ( !Master_object )
LABEL_36:
    sub_1C6BC60(ServantLeader, v10);
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
  ServantLeader = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v24, 0);
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

  if ( (byte_4CB1D03 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_44/*"\n\n"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_4CB1D03 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
  return System_String__Concat_64005056(
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

  if ( (byte_4CB1D02 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D02 = 1;
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
    sub_1C6BC60(0, v6);
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
    sub_1C6BC60(0, v6);
  return UserServantGrandInfo__get_AddedHp(GrandServantInfo, 0) > 0;
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
    return !this->fields.isServantNumRestriction
        && !this->fields.isFixMultipleNpcRestriction
        && (!this->fields.isFixMultipleNpc
         || (v7 = this->fields.questRestrictionInfo) != 0 && v7->fields.isNpcEditablePos)
        && !this->fields.isMyServantOrNpcRestriction;
  v6 = this->fields.questRestrictionInfo;
  if ( !v6 )
    sub_1C6BC60(0, v4);
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
  const MethodInfo_313B314 **v7; // x22
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
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_UserServantEntity__o *v19; // x21
  const MethodInfo_313B314 **v20; // x29
  System_Func_object__bool__o *v21; // x22
  int v22; // w20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB1D16 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_1C6BA08(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__DisplayClass366_0__IsEnabledChangeGrandSvt_b__0__);
    sub_1C6BA08(&PartyOrganizationListViewItem___c__DisplayClass366_0_TypeInfo);
    byte_4CB1D16 = 1;
  }
  memset(&v25, 0, sizeof(v25));
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
    sub_1C6BC60(IsNullOrEmpty, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)CanOrganizationGrandSvtIdList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
  v7 = (const MethodInfo_313B314 **)&Method_DataManager_GetMaster_GrandGraphMaster___;
  v8 = 2;
  v25 = v23;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields._current;
    v11 = sub_1C6BC54(PartyOrganizationListViewItem___c__DisplayClass366_0_TypeInfo);
    PartyOrganizationListViewItem___c__DisplayClass366_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass366_0_o *)v11,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !current )
      sub_1C6BC60(Master_object, v13);
    if ( !Master_object )
      sub_1C6BC60(0, v13);
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
        sub_1C6BC60(0, v15);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                 (int32_t)current[1].monitor,
                 (const MethodInfo_33F90DC *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
      if ( !v11 )
        sub_1C6BC60(Entity, Entity);
      *(_QWORD *)(v11 + 16) = Entity;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Entity, v17, v18);
      v19 = userServantList;
      v20 = v7;
      v21 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v21,
        (Il2CppObject *)v11,
        Method_PartyOrganizationListViewItem___c__DisplayClass366_0__IsEnabledChangeGrandSvt_b__0__,
        0);
      v8 -= System_Linq_Enumerable__Count_object__51761312(
              (System_Collections_Generic_IEnumerable_TSource__o *)v19,
              (System_Func_TSource__bool__o *)v21,
              (const MethodInfo_315D0A0 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
      v7 = v20;
      if ( v8 <= 0 )
      {
        v22 = 7;
        goto LABEL_24;
      }
    }
  }
  v22 = 8;
LABEL_24:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
  return v9 && v22 == 7;
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43684956(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43684956(questRestrictionInfo, userServantEntity, 0);
  if ( v5 < 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1C6BC60(0, v6);
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


bool PartyOrganizationListViewItem__IsUniqueIndividualityServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return !questRestrictionInfo || QuestRestrictionInfo__IsUniqueIndividualityServant(questRestrictionInfo, 0);
}


void PartyOrganizationListViewItem__Modify(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t v5; // x0
  const MethodInfo *v6; // x1
  int64_t v7; // x21
  void *Master_object; // x0
  UserServantEntity_o *v9; // x8
  PartyOrganizationListViewItem_o *IsGrandServant; // x0
  const MethodInfo *v11; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v13; // x8
  bool IsGrandServant_k__BackingField; // w8
  int32_t hp; // w20
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-50h]
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4CB1CE6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB1CE6 = 1;
  }
  entity = 0;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v20.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v19 = v20;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v19, 0);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v7 = v5;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_34;
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        (Il2CppObject **)&this->fields.userServantEntity,
        v7,
        (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    Master_object = this->fields.userServantEntity;
    if ( !Master_object )
      goto LABEL_34;
    Master_object = UserServantEntity__GetOverwriteStatus(
                      (UserServantEntity_o *)Master_object,
                      this->fields.questRestrictionInfo,
                      0);
    if ( !Master_object )
      goto LABEL_34;
    this->fields.cost = *((_DWORD *)Master_object + 7);
    *(_QWORD *)&this->fields.hp = *((_QWORD *)Master_object + 2);
    this->fields.rarityId = *((_DWORD *)Master_object + 6);
    v6 = (const MethodInfo *)*((unsigned int *)Master_object + 10);
    Master_object = this->fields.userServantEntity;
    this->fields.actualRarity = (int)v6;
    if ( !Master_object )
      goto LABEL_34;
    Master_object = (void *)UserServantEntity__GetFrameType((UserServantEntity_o *)Master_object, (int32_t)v6, 0);
    v9 = this->fields.userServantEntity;
    this->fields.frameType = (int)Master_object;
    if ( !v9 )
      goto LABEL_34;
    IsGrandServant = (PartyOrganizationListViewItem_o *)UserServantEntity__IsGrandServant(v9, 0);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields._IsGrandServant_k__BackingField = (unsigned __int8)IsGrandServant & 1;
    this->fields._IsUseGrandBoard_k__BackingField = 0;
    if ( questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      v13 = this->fields.questRestrictionInfo;
      if ( !v13 || !Master_object )
        goto LABEL_34;
      IsGrandServant = (PartyOrganizationListViewItem_o *)QuestPhaseMaster__TryGetEntity(
                                                            (QuestPhaseMaster_o *)Master_object,
                                                            &entity,
                                                            v13->fields.questId,
                                                            v13->fields.questPhase,
                                                            0);
      if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
      {
        Master_object = entity;
        if ( !entity )
          goto LABEL_34;
        IsGrandServant = (PartyOrganizationListViewItem_o *)QuestPhaseEntity__IsUseGrandBoard(entity, 0);
        if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
          goto LABEL_26;
        Master_object = this->fields.questRestrictionInfo;
        if ( !Master_object )
          goto LABEL_34;
        IsGrandServant = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                              (QuestRestrictionInfo_o *)Master_object,
                                                              this->fields._InitPos_k__BackingField,
                                                              0);
        if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
          IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
        else
LABEL_26:
          IsGrandServant_k__BackingField = 0;
        this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
      }
    }
    if ( !this->fields._IsTempGrandServant_k__BackingField )
    {
LABEL_32:
      PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(IsGrandServant, this, v11);
      return;
    }
    hp = this->fields.hp;
    Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v6);
    if ( Master_object )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Master_object, 0);
      atk = this->fields.atk;
      this->fields.hp = AddedHp + hp;
      Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v18);
      if ( Master_object )
      {
        IsGrandServant = (PartyOrganizationListViewItem_o *)UserServantGrandInfo__get_AddedAtk(
                                                              (UserServantGrandInfo_o *)Master_object,
                                                              0);
        this->fields.atk = (_DWORD)IsGrandServant + atk;
        goto LABEL_32;
      }
    }
LABEL_34:
    sub_1C6BC60(Master_object, v6);
  }
}


void PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  const MethodInfo *v7; // x2

  if ( !item )
    sub_1C6BC60(this, 0);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_34460424(this, item, v7);
}


void PartyOrganizationListViewItem__Modify_34460424(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyOrganizationListViewItem_o *v5; // x19
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  Il2CppObject *Entity; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  UserServantEntity_o *v16; // x8
  System_Int32_array *CommandCodeIdList; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v23; // x8
  __int64 v24; // x21
  __int64 v25; // x23
  int32_t v26; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  _BOOL4 isMyServantOrNpcRestriction; // w8
  _BOOL4 IsGrandServant; // w0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  int v34; // w8
  int32_t hp; // w20
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v38; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v5 = this;
  if ( (byte_4CB1CE7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1CE7 = 1;
  }
  if ( !item )
    goto LABEL_26;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_26;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v11;
  *(_QWORD *)&v39.fields.fakeValue = v10;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v39, 0);
  if ( !v9 )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v9,
             (int32_t)this,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v13, v14);
  v5->fields.classId = item->fields.classId;
  *(_QWORD *)&v5->fields.cost = *(_QWORD *)&item->fields.cost;
  v5->fields.atk = item->fields.atk;
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v15 )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                              v15[6],
                                              0);
  v16 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v16 )
    goto LABEL_26;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v16, 0);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v18, v19);
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  v5->fields.isQuestRestriction = item->fields.isQuestRestriction;
  v5->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  v5->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  v5->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  if ( questRestrictionInfo )
  {
    v23 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_26;
    v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v25;
    *(_QWORD *)&v40.fields.fakeValue = v24;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v40, 0);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v26, 0);
  }
  else
  {
    IsConvertOverwriteImage = 0;
  }
  v5->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  v5->fields.fatigureTime = item->fields.fatigureTime;
  v5->fields.isFatigureRecover = item->fields.isFatigureRecover;
  v5->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  v5->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  v5->fields._IsNotSupportSingle_k__BackingField = 0;
  v5->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  v5->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&v5->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  isMyServantOrNpcRestriction = v5->fields.isMyServantOrNpcRestriction;
  v5->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v5->fields.isFollower )
  {
    v5->fields.followerInfo = 0;
    v5->fields.isFollower = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.followerInfo, 0, v20, v21);
  }
  this = (PartyOrganizationListViewItem_o *)v5->fields.userServantEntity;
  *(_WORD *)&v5->fields._IsClearedWave_k__BackingField = 0;
  v5->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !this )
LABEL_26:
    sub_1C6BC60(this, item);
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
  v5->fields._IsGrandServant_k__BackingField = IsGrandServant;
  IsGrandSameServant_k__BackingField = item->fields._IsGrandSameServant_k__BackingField;
  v5->fields._IsUseGrandBoard_k__BackingField = 0;
  v34 = IsGrandSameServant_k__BackingField && !IsGrandServant;
  v5->fields._IsTempGrandServant_k__BackingField = v34;
  if ( v34 )
  {
    hp = v5->fields.hp;
    this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v5, v31);
    if ( this )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
      atk = v5->fields.atk;
      v5->fields.hp = AddedHp + hp;
      this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v5, v38);
      if ( this )
      {
        v5->fields.atk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0) + atk;
        goto LABEL_25;
      }
    }
    goto LABEL_26;
  }
LABEL_25:
  PartyOrganizationListViewItem__SetEquipStatus(v5, v5->fields.equipIdList, v32);
}


void PartyOrganizationListViewItem__MoveBondEquip(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Int64_array *equipIdList; // x8
  System_Nullable_int__o v5; // x0
  __int64 v6; // x22
  BalanceConfig_c *v7; // x0
  struct System_Int64_array *v8; // x8
  int64_t v9; // x9
  struct System_Int32_array *equipSvtIdList; // x8
  System_Nullable_int__o v11; // x0
  __int64 v12; // x21
  struct System_Int32_array *v13; // x8
  int32_t v14; // w9
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB1CEA & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_int___ctor__);
    sub_1C6BA08(&Method_System_Nullable_int__get_HasValue__);
    byte_4CB1CEA = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    v15 = 0;
    v5 = (System_Nullable_int__o)&v15;
    System_Nullable_int____ctor(
      v5,
      equipIdList->max_length,
      (const MethodInfo_3928F98 *)Method_System_Nullable_int___ctor__);
    v6 = v15;
  }
  else
  {
    v6 = 0;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)v6 && v7->static_fields->GrandSvtEquipMax == HIDWORD(v6) )
  {
    v8 = this->fields.equipIdList;
    if ( !v8 )
      goto LABEL_25;
    if ( LODWORD(v8->max_length) < 2 )
      goto LABEL_24;
    v9 = v8->m_Items[0];
    v8->m_Items[0] = 0;
    v8->m_Items[1] = v9;
  }
  equipSvtIdList = this->fields.equipSvtIdList;
  if ( equipSvtIdList )
  {
    v15 = 0;
    v11 = (System_Nullable_int__o)&v15;
    System_Nullable_int____ctor(
      v11,
      equipSvtIdList->max_length,
      (const MethodInfo_3928F98 *)Method_System_Nullable_int___ctor__);
    v12 = v15;
    v7 = BalanceConfig_TypeInfo;
  }
  else
  {
    v12 = 0;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( (_BYTE)v12 && v7->static_fields->GrandSvtEquipMax == HIDWORD(v12) )
  {
    v13 = this->fields.equipSvtIdList;
    if ( v13 )
    {
      if ( LODWORD(v13->max_length) >= 2 )
      {
        v14 = v13->m_Items[0];
        v13->m_Items[0] = 0;
        v13->m_Items[1] = v14;
        goto LABEL_23;
      }
LABEL_24:
      sub_1C6BC68(v7);
    }
LABEL_25:
    sub_1C6BC60(v7, method);
  }
LABEL_23:
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v2);
}


bool PartyOrganizationListViewItem__RemoveEquipDuplication(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Int64_array *equipIdList; // x8
  System_Nullable_int__o v5; // x0
  __int64 v6; // x21
  BalanceConfig_c *v7; // x8
  bool result; // w0
  struct System_Int64_array *v9; // x1
  int max_length; // w8
  int64_t v11; // x9
  int v12; // w10
  Il2CppClass **v13; // x11
  _QWORD *v14; // x11
  Il2CppClass *v15; // t1
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB1CEB & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_int___ctor__);
    sub_1C6BA08(&Method_System_Nullable_int__get_HasValue__);
    byte_4CB1CEB = 1;
  }
  if ( !this->fields.userServantEntity && !this->fields.isFollower )
    return 0;
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    v16 = 0;
    v5 = (System_Nullable_int__o)&v16;
    System_Nullable_int____ctor(
      v5,
      equipIdList->max_length,
      (const MethodInfo_3928F98 *)Method_System_Nullable_int___ctor__);
    v6 = v16;
  }
  else
  {
    v6 = 0;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  result = 0;
  if ( (_BYTE)v6 && v7->static_fields->GrandSvtEquipMax == HIDWORD(v6) )
  {
    v9 = this->fields.equipIdList;
    if ( !v9 )
      sub_1C6BC60(0, 0);
    max_length = v9->max_length;
    if ( !max_length )
      sub_1C6BC68(0);
    v11 = v9->m_Items[0];
    result = 0;
    if ( v11 )
    {
      if ( max_length >= 2 )
      {
        v12 = 1;
        while ( 1 )
        {
          v13 = &v9->obj.klass + v12;
          v15 = v13[4];
          v14 = v13 + 4;
          if ( v15 == (Il2CppClass *)v11 )
            break;
          if ( max_length == ++v12 )
            return 0;
        }
        *v14 = 0;
        PartyOrganizationListViewItem__SetEquipStatus(this, v9, v2);
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
  const MethodInfo *v10; // x2
  int32_t v11; // w21

  if ( (byte_4CB1CF1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_long___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4CB1CF1 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v6 = System_Array__IndexOf_long_(
         equipIdList,
         userSvtId,
         (const MethodInfo_324328C *)Method_System_Array_IndexOf_long___);
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
                            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
LABEL_15:
      sub_1C6BC60(IsNullOrEmpty, v9);
    }
    v11 = *((_DWORD *)IsNullOrEmpty + 38);
  }
  v9 = this->fields.equipIdList;
  if ( !v9 )
    goto LABEL_15;
  if ( v7 >= LODWORD(v9->max_length) )
    sub_1C6BC68(IsNullOrEmpty);
  v9->m_Items[v7] = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, v9, v10);
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
  const MethodInfo *v8; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct ServantEntity_o *servantEntity; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Int32_array *commandCodeIdList; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x21
  struct System_Int32_array *v36; // x0
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v38; // x0
  int32_t v39; // w1
  const MethodInfo *v40; // x2
  PartyOrganizationListViewItem_o *v41; // x0
  System_Int32_array *v42; // x1
  const MethodInfo *v43; // x2

  if ( (byte_4CB1CE4 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB1CE4 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    sub_1C6BC60(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v11, v12);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isRestrictionGrandServant = item->fields.isRestrictionGrandServant;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v17, v18);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v20,
    v21);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v23, v24);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)commandCodeIdList, v26, v27);
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
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)WaveEnemyClassIds_k__BackingField,
    v29,
    v30);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = item->fields._IsGrandServant_k__BackingField;
  this->fields._IsTempGrandServant_k__BackingField = item->fields._IsTempGrandServant_k__BackingField;
  this->fields._IsUseGrandBoard_k__BackingField = item->fields._IsUseGrandBoard_k__BackingField;
  this->fields._EquipFriendShipSkillChange_k__BackingField = item->fields._EquipFriendShipSkillChange_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v34 = System_Array__Clone(equipSvtIdList, 0)) == 0 )
  {
    v39 = 0;
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v35 = v34;
  v36 = (struct System_Int32_array *)sub_1C6BB44(v34, int___TypeInfo);
  if ( v36 )
  {
    this->fields.equipSvtIdList = v36;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v38 = sub_1C6BB44(v35, int___TypeInfo);
    if ( v38 )
    {
      v39 = v38;
LABEL_10:
      sub_1C6B9AC((CGThumbnailListItem_o *)p_equipSvtIdList, v39, v31, v32);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v40);
      return;
    }
  }
  else
  {
    sub_1C6BFFC(v35);
  }
  v41 = (PartyOrganizationListViewItem_o *)sub_1C6BFFC(v35);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v41, v42, v43);
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
  if ( (byte_4CB1CE3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB1CE3 = 1;
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1C6BC60(this, *(_QWORD *)&eventId);
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
  struct System_Boolean_array *IsNullOrEmpty; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BalanceConfig_c *v10; // x0
  __int64 v11; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_ICollection_o *duplicatedEquipmentUserSvtIdList; // x21
  struct System_Int64_array *equipIdList; // x9
  unsigned int v16; // w8
  System_Predicate_long__o **v17; // x22
  unsigned int max_length; // w10
  System_Predicate_long__o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x9
  unsigned int v23; // w10
  char v24; // w10

  if ( (byte_4CB1CEE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_FindIndex_long___);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&System_Predicate_long__TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__DisplayClass177_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__);
    sub_1C6BA08(&PartyOrganizationListViewItem___c__DisplayClass177_0_TypeInfo);
    byte_4CB1CEE = 1;
  }
  v5 = sub_1C6BC54(PartyOrganizationListViewItem___c__DisplayClass177_0_TypeInfo);
  PartyOrganizationListViewItem___c__DisplayClass177_0___ctor(
    (PartyOrganizationListViewItem___c__DisplayClass177_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( this->fields._IsGrandServant_k__BackingField || this->fields._IsTempGrandServant_k__BackingField )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = 52;
  }
  else
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = 48;
  }
  IsNullOrEmpty = (struct System_Boolean_array *)sub_1C6BAB0(
                                                   bool___TypeInfo,
                                                   *(unsigned int *)((char *)&v10->static_fields->CriticalRateToAddByQuickFirstBonus
                                                                   + v11));
  if ( !this )
    goto LABEL_28;
  this->fields._DuplicationEquipmentFlagList_k__BackingField = IsNullOrEmpty;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)IsNullOrEmpty,
    v12,
    v13);
  if ( !partyItem )
    goto LABEL_28;
  duplicatedEquipmentUserSvtIdList = (System_Collections_ICollection_o *)partyItem->fields.duplicatedEquipmentUserSvtIdList;
  IsNullOrEmpty = (struct System_Boolean_array *)BasicHelper__IsNullOrEmpty(duplicatedEquipmentUserSvtIdList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return;
  *(_DWORD *)(v5 + 24) = 0;
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
LABEL_28:
    sub_1C6BC60(IsNullOrEmpty, v7);
  v16 = 0;
  v17 = (System_Predicate_long__o **)(v5 + 32);
  while ( 1 )
  {
    max_length = equipIdList->max_length;
    if ( (int)v16 >= (int)max_length )
      break;
    if ( v16 >= max_length )
      goto LABEL_32;
    if ( equipIdList->m_Items[v16] >= 1 )
    {
      v19 = *v17;
      if ( !*v17 )
      {
        v19 = (System_Predicate_long__o *)sub_1C6BC54(System_Predicate_long__TypeInfo);
        System_Predicate_long____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_PartyOrganizationListViewItem___c__DisplayClass177_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v19;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v19, v20, v21);
      }
      IsNullOrEmpty = (struct System_Boolean_array *)System_Array__FindIndex_long_(
                                                       (System_Int64_array *)duplicatedEquipmentUserSvtIdList,
                                                       (System_Predicate_T__o *)v19,
                                                       (const MethodInfo_3241DC8 *)Method_System_Array_FindIndex_long___);
      DuplicationEquipmentFlagList_k__BackingField = this->fields._DuplicationEquipmentFlagList_k__BackingField;
      if ( !DuplicationEquipmentFlagList_k__BackingField )
        goto LABEL_28;
      v16 = *(_DWORD *)(v5 + 24);
      v23 = DuplicationEquipmentFlagList_k__BackingField->max_length;
      if ( (_DWORD)IsNullOrEmpty == -1 )
      {
        if ( v16 >= v23 )
LABEL_32:
          sub_1C6BC68(IsNullOrEmpty);
        v24 = 0;
      }
      else
      {
        if ( v16 >= v23 )
          goto LABEL_32;
        v24 = 1;
      }
      DuplicationEquipmentFlagList_k__BackingField->m_Items[v16] = v24;
    }
    *(_DWORD *)(v5 + 24) = ++v16;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_28;
  }
}


void PartyOrganizationListViewItem__SetEquipStatus(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  FollowerInfo_o *p_equipUserServantEntityList; // x23
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  struct System_Collections_Generic_List_ServantEntity__o **p_equipServantEntityList; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  EventUpValInfo_o **p_eventUpValInfo; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  void *IsGrandServant; // x0
  Il2CppObject *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _BOOL4 isFollower; // w8
  Il2CppObject *v23; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v25; // x8
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Int64_array *v29; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct System_Int64_array **p_equipIdList; // x0
  int32_t v32; // w1
  BalanceConfig_c *v33; // x0
  int32_t followerIndex; // w23
  FollowerInfo_o *followerInfo; // x24
  int32_t v36; // w2
  struct QuestRestrictionInfo_o *v37; // x8
  unsigned __int64 v38; // x20
  unsigned __int64 max_length_low; // x9
  struct System_Int64_array *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x25
  struct System_Int32_array *v49; // x8
  System_Collections_Generic_List_object__o *v50; // x25
  UserServantCollectionEntity_o *v51; // x27
  UserServantEntity_o *v52; // x26
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  struct System_Int64_array *v59; // x8
  System_Collections_Generic_List_object__o *v60; // x25
  UserServantEntity_o *v61; // x26
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  struct System_Collections_Generic_List_ServantEntity__o *v68; // x25
  ServantEntity_o *v69; // x26
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct ServantEntity_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x0
  CGThumbnailListItem_o *v76; // x0
  int32_t v77; // w1
  __int64 v78; // x8
  Il2CppObject *v79; // x1
  void *monitor; // x25
  Il2CppClass *klass; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x25
  void *v83; // x26
  Il2CppClass *v84; // x27
  Il2CppObject *v85; // x25
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  System_Collections_Generic_List_object__o *v90; // x25
  struct System_Int32_array *v91; // x8
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass *v97; // x1
  Il2CppClass **v98; // x0
  struct EventUpValSetupInfo_o **p_setupInfo; // x21
  struct EventUpValSetupInfo_o *v100; // x23
  EventUpValInfo_o **v101; // x28
  struct System_Int32_array *v102; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_43415884; // w0
  struct QuestRestrictionInfo_o *v106; // x8
  System_Collections_Generic_List_object__o *v107; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x23
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x27
  PartyOrganizationListViewItem___c_c *v110; // x0
  System_Func_object__int__o *_9__161_1; // x24
  Il2CppObject *v112; // x25
  struct PartyOrganizationListViewItem___c_StaticFields *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  const MethodInfo *v118; // x3
  __int64 v119; // x8
  _DWORD *v120; // x23
  unsigned __int64 v121; // x20
  ServantEntity_o *v122; // x25
  int32_t v123; // w26
  EventPersonalMargeUpValInfo_o *v124; // x24
  int32_t v125; // w2
  __int64 v126; // x8
  _QWORD *v127; // x24
  unsigned __int64 v128; // x25
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x8
  struct QuestRestrictionInfo_o *v133; // x8
  struct ServantEntity_o *v134; // x9
  int32_t v135; // w23
  int32_t v136; // w24
  __int64 v137; // x25
  __int64 v138; // x26
  int32_t v139; // w25
  EventMargeItemUpValInfo_array *v140; // x0
  bool v141; // w8
  System_Collections_Generic_List_object__o *v142; // x23
  const MethodInfo *v143; // x3
  struct QuestRestrictionInfo_o *v144; // x8
  struct ServantEntity_o *v145; // x9
  int32_t v146; // w23
  int32_t v147; // w24
  __int64 v148; // x25
  __int64 v149; // x26
  int32_t v150; // w25
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v151; // x23
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v152; // x1
  struct EventMargeItemUpValInfo_array *v153; // x0
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  const MethodInfo *v156; // x1
  System_Int32_array *v157; // x23
  EventUpValSetupInfo_o *v158; // x24
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  UserServantEntity_o *v161; // x22
  EventUpValSetupInfo_o *v162; // x23
  struct QuestRestrictionInfo_o *v163; // x8
  _BOOL8 v164; // x0
  __int64 v165; // x1
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  System_Collections_Generic_List_object__o *v168; // x0
  Il2CppObject *v169; // x1
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x8
  Il2CppObject *v174; // x24
  System_Collections_Generic_List_object__o *v175; // x23
  const MethodInfo *v176; // x3
  struct System_Int32_array *v177; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v179; // x28
  int32_t v180; // w26
  Il2CppObject *v181; // x0
  ServantEntity_o *v182; // x27
  EventPersonalMargeUpValInfo_o *v183; // x25
  int32_t v184; // w2
  __int64 v185; // x8
  _QWORD *v186; // x25
  unsigned __int64 v187; // x26
  struct System_Object_array *v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  Il2CppClass **v191; // x0
  System_Collections_ICollection_o *EquipSvtIds; // x23
  int32_t current; // w24
  System_Collections_Generic_List_object__o *v194; // x23
  Il2CppObject *Instance; // x0
  __int64 v196; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v198; // x1
  Il2CppObject *v199; // x0
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  Il2CppObject *v202; // x1
  struct System_Object_array *items; // x8
  _QWORD *v204; // x9
  __int64 size; // x10
  Il2CppClass **v206; // x0
  ServantEntity_o *v207; // x24
  __int64 v208; // x0
  __int64 v209; // x1
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  Il2CppClass **v215; // x0
  UserServantEntity_o *v216; // x23
  EventUpValSetupInfo_o *v217; // x22
  struct QuestRestrictionInfo_o *v218; // x8
  ServantEntity_o *v219; // x22
  EventPersonalMargeUpValInfo_o *v220; // x21
  System_Collections_Generic_List_object__o *v221; // x19
  EventMargeItemUpValInfo_array *v222; // x0
  int32_t v223; // w23
  FollowerInfo_o *v224; // x24
  int32_t v225; // w2
  struct QuestRestrictionInfo_o *v226; // x8
  System_Collections_Generic_List_object__o *v227; // x22
  int32_t v228; // w24
  FollowerInfo_o *v229; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v230; // x23
  int32_t v231; // w2
  struct QuestRestrictionInfo_o *v232; // x8
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  struct System_Object_array *v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x10
  Il2CppClass *v238; // x1
  Il2CppClass **v239; // x0
  System_Collections_Generic_List_object__o *v240; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Int32_array *eventIdList; // x8
  int32_t v243; // w23
  FollowerInfo_o *v244; // x24
  int32_t v245; // w4
  struct QuestRestrictionInfo_o *v246; // x8
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x21
  PartyOrganizationListViewItem___c_c *v249; // x0
  System_Func_object__int__o *_9__161_0; // x22
  Il2CppObject *v251; // x23
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v255; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v256; // x0
  __int64 v257; // x8
  _DWORD *v258; // x21
  unsigned __int64 v259; // x20
  ServantEntity_o *servantEntity; // x23
  int32_t v261; // w24
  EventPersonalMargeUpValInfo_o *v262; // x22
  int32_t v263; // w2
  const MethodInfo *v264; // x3
  __int64 v265; // x8
  _QWORD *v266; // x22
  unsigned __int64 v267; // x23
  struct System_Object_array *v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  Il2CppClass **v271; // x8
  struct QuestRestrictionInfo_o *v272; // x8
  struct ServantEntity_o *v273; // x9
  int32_t questPhase; // w21
  int32_t questId; // w22
  __int64 v276; // x23
  __int64 v277; // x24
  int32_t v278; // w23
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x21
  struct EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  EventUpValInfo_o **v283; // [xsp+20h] [xbp-110h]
  System_Collections_Generic_List_Enumerator_object__o v284; // [xsp+28h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v285; // [xsp+40h] [xbp-F0h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+60h] [xbp-D0h] BYREF
  bool v287; // [xsp+6Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList; // [xsp+70h] [xbp-C0h] BYREF
  bool isDuplicate; // [xsp+7Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_object__o *v290; // [xsp+80h] [xbp-B0h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v291; // [xsp+88h] [xbp-A8h] BYREF
  UserServantCollectionEntity_o *v292; // [xsp+90h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v294; // [xsp+A0h] [xbp-90h] BYREF
  bool v295; // [xsp+C4h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_object__o *v296; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v297; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v298; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v299; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v300; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v301; // 0:x0.16

  if ( (byte_4CB1CE2 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C6BA08(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C6BA08(&EventUpValSetupInfo_TypeInfo);
    sub_1C6BA08(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&PartyOrganizationUtility_TypeInfo);
    sub_1C6BA08(&ServantEntity_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__);
    sub_1C6BA08(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C6BA08(&UserServantEntity_TypeInfo);
    byte_4CB1CE2 = 1;
  }
  v296 = 0;
  v295 = 0;
  memset(&v294, 0, sizeof(v294));
  v292 = 0;
  entity = 0;
  v290 = 0;
  v291 = 0;
  isDuplicate = 0;
  infoList = 0;
  v287 = 0;
  eventUpVallInfo = 0;
  memset(&v285, 0, sizeof(v285));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  p_equipUserServantEntityList = (FollowerInfo_o *)&this->fields.equipUserServantEntityList;
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v5, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  p_equipServantEntityList = &this->fields.equipServantEntityList;
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v9, v11, v12);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventUpValInfo, 0, v14, v15);
  this->fields.eventUpValItemList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, 0, v16, v17);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( isFollower )
  {
    this->fields.equipIdList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v20, v21);
    p_equipUserServantEntityList = this->fields.followerInfo;
    if ( !p_equipUserServantEntityList )
      return;
    LODWORD(v23) = this->fields.followerIndex;
    if ( this->fields.followerGrandGraphId > 0 )
    {
      ReturnTypeByQuestId = 2;
      goto LABEL_20;
    }
LABEL_13:
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    else
      ReturnTypeByQuestId = 0;
LABEL_20:
    IsGrandServant = (void *)FollowerInfo__IsGrandServant(
                               p_equipUserServantEntityList,
                               (int32_t)v23,
                               ReturnTypeByQuestId,
                               0);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      followerIndex = this->fields.followerIndex;
      followerInfo = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v37 = this->fields.questRestrictionInfo;
        if ( v37 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v37->fields.questId, 0);
          v36 = (int)IsGrandServant;
        }
        else
        {
          v36 = 0;
        }
      }
      else
      {
        v36 = 2;
      }
      if ( !followerInfo )
        goto LABEL_308;
      EquipSvtIds = (System_Collections_ICollection_o *)FollowerInfo__GetEquipSvtIds(
                                                          followerInfo,
                                                          followerIndex,
                                                          v36,
                                                          0);
      IsGrandServant = (void *)BasicHelper__IsNullOrEmpty(EquipSvtIds, 0);
      if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
      {
        if ( !EquipSvtIds )
          goto LABEL_308;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v284,
          (System_Collections_Generic_List_int__o *)EquipSvtIds,
          (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v294 = v284;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v294,
                  (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          current = (int32_t)v294.fields._current;
          v194 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
          if ( LODWORD(v294.fields._current) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              sub_1C6BC60(0, v196);
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !MasterData_object )
              sub_1C6BC60(0, v198);
            v199 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     current,
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v202 = v199;
            if ( !v194 )
              sub_1C6BC60(v199, v199);
            items = v194->fields._items;
            v204 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v194->fields._version;
            if ( !items )
              sub_1C6BC60(v199, v199);
            size = v194->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v194,
                v199,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
            }
            else
            {
              v206 = &items->obj.klass + size;
              v194->fields._size = size + 1;
              v206[4] = (Il2CppClass *)v202;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v206 + 4), (int32_t)v202, v200, v201);
            }
          }
          else
          {
            v207 = (ServantEntity_o *)sub_1C6BC54(ServantEntity_TypeInfo);
            ServantEntity___ctor(v207, 0);
            if ( !v194 )
              sub_1C6BC60(v208, v209);
            v212 = v194->fields._items;
            v213 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v194->fields._version;
            if ( !v212 )
              sub_1C6BC60(v208, v209);
            v214 = v194->fields._size;
            if ( (unsigned int)v214 >= LODWORD(v212->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v194,
                (Il2CppObject *)v207,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
            }
            else
            {
              v215 = &v212->obj.klass + v214;
              v194->fields._size = v214 + 1;
              v215[4] = (Il2CppClass *)v207;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v215 + 4), (int32_t)v207, v210, v211);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v294,
          (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        p_eventUpValInfo = &this->fields.eventUpValInfo;
      }
    }
    else
    {
      v223 = this->fields.followerIndex;
      v224 = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v226 = this->fields.questRestrictionInfo;
        if ( v226 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v226->fields.questId, 0);
          v225 = (int)IsGrandServant;
        }
        else
        {
          v225 = 0;
        }
      }
      else
      {
        v225 = 2;
      }
      if ( !v224 )
        goto LABEL_308;
      if ( FollowerInfo__getEquipSvtId(v224, v223, v225, 0) >= 1 )
      {
        v227 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_308;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
        v228 = this->fields.followerIndex;
        v229 = this->fields.followerInfo;
        v230 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v232 = this->fields.questRestrictionInfo;
          if ( v232 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v232->fields.questId, 0);
            v231 = (int)IsGrandServant;
          }
          else
          {
            v231 = 0;
          }
        }
        else
        {
          v231 = 2;
        }
        if ( !v229 )
          goto LABEL_308;
        IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v229, v228, v231, 0);
        if ( !v230 )
          goto LABEL_308;
        IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                           v230,
                           (int32_t)IsGrandServant,
                           (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v227 )
          goto LABEL_308;
        v235 = v227->fields._items;
        v236 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v227->fields._version;
        if ( !v235 )
          goto LABEL_308;
        v237 = v227->fields._size;
        v238 = (Il2CppClass *)IsGrandServant;
        if ( (unsigned int)v237 >= LODWORD(v235->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v227,
            (Il2CppObject *)IsGrandServant,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
        }
        else
        {
          v239 = &v235->obj.klass + v237;
          v227->fields._size = v237 + 1;
          v239[4] = v238;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v239 + 4), (int32_t)v238, v233, v234);
        }
      }
    }
    v240 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v240,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v296 = v240;
    setupInfo = this->fields.setupInfo;
    if ( setupInfo )
    {
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_308;
      if ( eventIdList->max_length )
      {
        v243 = this->fields.followerIndex;
        v244 = this->fields.followerInfo;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v246 = this->fields.questRestrictionInfo;
          if ( v246 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v246->fields.questId, 0);
            v245 = (int)IsGrandServant;
          }
          else
          {
            v245 = 0;
          }
        }
        else
        {
          v245 = 2;
        }
        if ( !v244 )
          goto LABEL_308;
        IsGrandServant = (void *)FollowerInfo__getEventUpVal_41983992(v244, p_eventUpValInfo, setupInfo, v243, v245, 0);
        eventUpValInfo = this->fields.eventUpValInfo;
        this->fields.isEventUpVal = (unsigned __int8)IsGrandServant & 1;
        if ( !eventUpValInfo )
          goto LABEL_308;
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v249 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v249 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__161_0 = (System_Func_object__int__o *)v249->static_fields->__9__161_0;
        if ( !_9__161_0 )
        {
          if ( !v249->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v249);
            v249 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v251 = (Il2CppObject *)v249->static_fields->__9;
          _9__161_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__161_0,
            v251,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__,
            0);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__161_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__161_0, (int32_t)_9__161_0, v253, v254);
        }
        v255 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      dropList,
                                                                      (System_Func_TSource__TResult__o *)_9__161_0,
                                                                      (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v256 = System_Linq_Enumerable__Distinct_int_(
                 v255,
                 (const MethodInfo_315E630 *)Method_System_Linq_Enumerable_Distinct_int___);
        IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                           v256,
                           (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !IsGrandServant )
          goto LABEL_308;
        v257 = *((_QWORD *)IsGrandServant + 3);
        v258 = IsGrandServant;
        if ( (int)v257 >= 1 )
        {
          v259 = 0;
          while ( 1 )
          {
            if ( v259 >= (unsigned int)v257 )
              goto LABEL_309;
            servantEntity = this->fields.servantEntity;
            v261 = v258[v259 + 8];
            v262 = (EventPersonalMargeUpValInfo_o *)sub_1C6BC54(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v262, v261, servantEntity, 0);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_308;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
            if ( !v262 )
              goto LABEL_308;
            EventPersonalMargeUpValInfo__Add(v262, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v262, 0);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v262, 0);
              if ( !IsGrandServant )
                goto LABEL_308;
              v265 = *((_QWORD *)IsGrandServant + 3);
              v266 = IsGrandServant;
              if ( (int)v265 >= 1 )
                break;
            }
LABEL_296:
            LODWORD(v257) = v258[6];
            if ( (__int64)++v259 >= (int)v257 )
              goto LABEL_297;
          }
          v267 = 0;
          while ( v267 < (unsigned int)v265 )
          {
            IsGrandServant = v296;
            if ( !v296 )
              goto LABEL_308;
            v19 = (Il2CppObject *)v266[v267 + 4];
            v268 = v296->fields._items;
            v269 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v296->fields._version;
            if ( !v268 )
              goto LABEL_308;
            v270 = *((int *)IsGrandServant + 6);
            if ( (unsigned int)v270 >= LODWORD(v268->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)IsGrandServant,
                v19,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
            }
            else
            {
              v271 = &v268->obj.klass + v270;
              *((_DWORD *)IsGrandServant + 6) = v270 + 1;
              v271[4] = (Il2CppClass *)v19;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v271 + 4), (int32_t)v19, v263, v264);
            }
            LODWORD(v265) = *((_DWORD *)v266 + 6);
            if ( (__int64)++v267 >= (int)v265 )
              goto LABEL_296;
          }
          goto LABEL_309;
        }
      }
    }
LABEL_297:
    v272 = this->fields.questRestrictionInfo;
    if ( v272 )
    {
      v273 = this->fields.servantEntity;
      if ( !v273 )
        goto LABEL_308;
      questId = v272->fields.questId;
      questPhase = v272->fields.questPhase;
      v277 = *(_QWORD *)&v273->fields.id.fields.currentCryptoKey;
      v276 = *(_QWORD *)&v273->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v301.fields.currentCryptoKey = v277;
      *(_QWORD *)&v301.fields.fakeValue = v276;
      v278 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v301, 0);
      if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      PartyOrganizationUtility__SetAddPassiveCampaignInfo(
        (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v296,
        questId,
        questPhase,
        v278,
        0);
    }
    IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( IsGrandServant )
    {
      AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                                                    (PartyOrganizationUtility_o *)IsGrandServant,
                                                                                                    &v295,
                                                                                                    (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v296,
                                                                                                    0);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( IsGrandServant )
      {
        AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                          (PartyOrganizationUtility_o *)IsGrandServant,
                          AdjustUpValInfoArray,
                          0);
        this->fields.eventUpValItemList = AddUpValInfos;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, (int32_t)AddUpValInfos, v281, v282);
        this->fields._IsDuplicateBonus_k__BackingField = v295;
        return;
      }
    }
    goto LABEL_308;
  }
  if ( !this->fields.userServantEntity )
  {
    this->fields.equipIdList = 0;
    p_equipIdList = &this->fields.equipIdList;
    v32 = 0;
    goto LABEL_242;
  }
  v283 = &this->fields.eventUpValInfo;
  if ( !equipIdList )
  {
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v29 = (struct System_Int64_array *)sub_1C6BAB0(long___TypeInfo, (unsigned int)v33->static_fields->SvtEquipMax);
LABEL_26:
    this->fields.equipIdList = v29;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v29, v27, v28);
    v25 = this->fields.equipIdList;
    goto LABEL_27;
  }
  v25 = this->fields.equipIdList;
  if ( v25 != equipIdList )
  {
    v26 = System_Array__Clone((System_Array_o *)equipIdList, 0);
    if ( v26 )
    {
      v23 = v26;
      v29 = (struct System_Int64_array *)sub_1C6BB44(v26, long___TypeInfo);
      if ( !v29 )
      {
        sub_1C6BFFC(v23);
        goto LABEL_13;
      }
    }
    else
    {
      v29 = 0;
    }
    goto LABEL_26;
  }
LABEL_27:
  if ( !v25 )
    goto LABEL_308;
  v38 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v25->max_length);
    if ( (__int64)v38 >= (int)max_length_low )
      break;
    if ( v38 >= max_length_low )
      goto LABEL_309;
    if ( v25->m_Items[v38] < 1 )
      goto LABEL_63;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_308;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v40 = this->fields.equipIdList;
    if ( !v40 )
      goto LABEL_308;
    if ( v38 >= LODWORD(v40->max_length) )
      goto LABEL_309;
    if ( !IsGrandServant )
      goto LABEL_308;
    IsGrandServant = (void *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                               &entity,
                               v40->m_Items[v38],
                               (const MethodInfo_33FB684 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      IsGrandServant = p_equipUserServantEntityList->klass;
      if ( !p_equipUserServantEntityList->klass )
        goto LABEL_308;
      v19 = entity;
      v43 = *((_QWORD *)IsGrandServant + 2);
      v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v43 )
        goto LABEL_308;
      v45 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v19,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = v43 + 8 * v45;
        *((_DWORD *)IsGrandServant + 6) = v45 + 1;
        *(_QWORD *)(v46 + 32) = v19;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v19, v41, v42);
      }
      if ( !entity )
        goto LABEL_308;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v297.fields.currentCryptoKey = klass;
      *(_QWORD *)&v297.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v297, 0) <= 0 )
      {
        v85 = (Il2CppObject *)sub_1C6BC54(ServantEntity_TypeInfo);
        ServantEntity___ctor((ServantEntity_o *)v85, 0);
      }
      else
      {
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_308;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !entity )
          goto LABEL_308;
        v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        v84 = entity[5].klass;
        v83 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v298.fields.currentCryptoKey = v84;
        *(_QWORD *)&v298.fields.fakeValue = v83;
        IsGrandServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v298, 0);
        if ( !v82 )
          goto LABEL_308;
        v85 = DataMasterBase_object__object__int___GetEntity(
                v82,
                (int32_t)IsGrandServant,
                (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      IsGrandServant = *p_equipServantEntityList;
      if ( !*p_equipServantEntityList )
        goto LABEL_308;
      v86 = *((_QWORD *)IsGrandServant + 2);
      v87 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v86 )
        goto LABEL_308;
      v88 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
      {
        v78 = v87[4];
        v79 = v85;
        goto LABEL_91;
      }
      v89 = v86 + 8 * v88;
      *((_DWORD *)IsGrandServant + 6) = v88 + 1;
      *(_QWORD *)(v89 + 32) = v85;
      v76 = (CGThumbnailListItem_o *)(v89 + 32);
      v77 = (int)v85;
      goto LABEL_89;
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    if ( !equipSvtIdList )
      goto LABEL_60;
    if ( v38 >= LODWORD(equipSvtIdList->max_length) )
      goto LABEL_309;
    if ( equipSvtIdList->m_Items[v38] < 1 )
      goto LABEL_60;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CB002A )
    {
      sub_1C6BA08(&NetworkManager_TypeInfo);
      byte_4CB002A = 1;
    }
    IsGrandServant = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsGrandServant = NetworkManager_TypeInfo;
    }
    v49 = this->fields.equipSvtIdList;
    if ( !v49 )
      goto LABEL_308;
    if ( v38 >= LODWORD(v49->max_length) )
      goto LABEL_309;
    if ( !Master_object )
      goto LABEL_308;
    IsGrandServant = (void *)UserServantCollectionMaster__TryGetEntity(
                               (UserServantCollectionMaster_o *)Master_object,
                               &v292,
                               *(_QWORD *)(*((_QWORD *)IsGrandServant + 23) + 64LL),
                               v49->m_Items[v38],
                               0);
    if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
    {
LABEL_60:
      v59 = this->fields.equipIdList;
      if ( !v59 )
        goto LABEL_308;
      if ( v38 >= LODWORD(v59->max_length) )
        goto LABEL_309;
      v59->m_Items[v38] = 0;
LABEL_63:
      v60 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
      v61 = (UserServantEntity_o *)sub_1C6BC54(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v61, 0);
      if ( !v60 )
        goto LABEL_308;
      v64 = v60->fields._items;
      v65 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v60->fields._version;
      if ( !v64 )
        goto LABEL_308;
      v66 = v60->fields._size;
      if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v60,
          (Il2CppObject *)v61,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &v64->obj.klass + v66;
        v60->fields._size = v66 + 1;
        v67[4] = (Il2CppClass *)v61;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v61, v62, v63);
      }
      v68 = *p_equipServantEntityList;
      v69 = (ServantEntity_o *)sub_1C6BC54(ServantEntity_TypeInfo);
      ServantEntity___ctor(v69, 0);
      if ( !v68 )
        goto LABEL_308;
      v72 = v68->fields._items;
      v73 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++v68->fields._version;
      if ( !v72 )
        goto LABEL_308;
      v74 = v68->fields._size;
      if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
      {
        v78 = v73[4];
        IsGrandServant = v68;
        v79 = (Il2CppObject *)v69;
LABEL_91:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v79,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v78 + 192) + 112LL));
        goto LABEL_92;
      }
      v75 = (__int64)v72 + 8 * v74;
      v68->fields._size = v74 + 1;
      *(_QWORD *)(v75 + 32) = v69;
      v76 = (CGThumbnailListItem_o *)(v75 + 32);
      v77 = (int)v69;
LABEL_89:
      sub_1C6B9AC(v76, v77, v70, v71);
      goto LABEL_92;
    }
    v50 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
    v51 = v292;
    v52 = (UserServantEntity_o *)sub_1C6BC54(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_43401192(v52, v51, 0, 0);
    if ( !v50 )
      goto LABEL_308;
    v55 = v50->fields._items;
    v56 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v50->fields._version;
    if ( !v55 )
      goto LABEL_308;
    v57 = v50->fields._size;
    if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v50,
        (Il2CppObject *)v52,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v50->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v52;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v52, v53, v54);
    }
    v90 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_308;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
    v91 = this->fields.equipSvtIdList;
    if ( !v91 )
      goto LABEL_308;
    if ( v38 >= LODWORD(v91->max_length) )
      goto LABEL_309;
    if ( !IsGrandServant )
      goto LABEL_308;
    IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                       v91->m_Items[v38],
                       (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v90 )
      goto LABEL_308;
    v94 = v90->fields._items;
    v95 = Method_System_Collections_Generic_List_ServantEntity__Add__;
    ++v90->fields._version;
    if ( !v94 )
      goto LABEL_308;
    v96 = v90->fields._size;
    v97 = (Il2CppClass *)IsGrandServant;
    if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v90,
        (Il2CppObject *)IsGrandServant,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &v94->obj.klass + v96;
      v90->fields._size = v96 + 1;
      v98[4] = v97;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v97, v92, v93);
    }
    this->fields._IsDisappearEquip_k__BackingField = 1;
LABEL_92:
    v25 = this->fields.equipIdList;
    ++v38;
    if ( !v25 )
      goto LABEL_308;
  }
  p_setupInfo = &this->fields.setupInfo;
  v100 = this->fields.setupInfo;
  v101 = &this->fields.eventUpValInfo;
  if ( !v100 )
    goto LABEL_144;
  v102 = v100->fields.eventIdList;
  if ( !v102 )
    goto LABEL_308;
  if ( !v102->max_length )
  {
LABEL_144:
    v142 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v142,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    infoList = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v142;
    if ( this->fields.questRestrictionInfo )
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 1, v143);
      v144 = this->fields.questRestrictionInfo;
      p_eventUpValItemList = &this->fields.eventUpValItemList;
      if ( !v144 )
        goto LABEL_308;
      v145 = this->fields.servantEntity;
      if ( !v145 )
        goto LABEL_308;
      v147 = v144->fields.questId;
      v146 = v144->fields.questPhase;
      v149 = *(_QWORD *)&v145->fields.id.fields.currentCryptoKey;
      v148 = *(_QWORD *)&v145->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v300.fields.currentCryptoKey = v149;
      *(_QWORD *)&v300.fields.fakeValue = v148;
      v150 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v300, 0);
      if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      PartyOrganizationUtility__SetAddPassiveCampaignInfo(&infoList, v147, v146, v150, 0);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsGrandServant )
        goto LABEL_308;
      v140 = PartyOrganizationUtility__GetAdjustUpValInfoArray(
               (PartyOrganizationUtility_o *)IsGrandServant,
               &v287,
               infoList,
               0);
      v141 = v287;
LABEL_153:
      this->fields._IsDuplicateBonus_k__BackingField = v141;
      v151 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v140;
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsGrandServant )
        goto LABEL_308;
      v152 = v151;
    }
    else
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 0, v143);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      p_eventUpValItemList = &this->fields.eventUpValItemList;
      if ( !IsGrandServant )
        goto LABEL_308;
      v152 = infoList;
    }
    v153 = PartyOrganizationUtility__GetAddUpValInfos(
             (PartyOrganizationUtility_o *)IsGrandServant,
             (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v152,
             0);
    goto LABEL_158;
  }
  userServantEntity = this->fields.userServantEntity;
  EquipList = PartyOrganizationListViewItem__GetEquipList(this, (const MethodInfo *)v19);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant || !userServantEntity )
    goto LABEL_308;
  EventUpVal_43415884 = UserServantEntity__getEventUpVal_43415884(
                          userServantEntity,
                          v283,
                          v100,
                          EquipList,
                          *((_QWORD *)IsGrandServant + 14),
                          0);
  v106 = this->fields.questRestrictionInfo;
  this->fields.isEventUpVal = EventUpVal_43415884;
  if ( v106 )
  {
    v107 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v107,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v290 = v107;
    if ( *v283 )
    {
      v108 = (System_Collections_Generic_IEnumerable_TSource__o *)(*v283)->fields.dropList;
      p_eventUpValItemList = &this->fields.eventUpValItemList;
      v110 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v110 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__161_1 = (System_Func_object__int__o *)v110->static_fields->__9__161_1;
      if ( !_9__161_1 )
      {
        if ( !v110->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v110);
          v110 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v112 = (Il2CppObject *)v110->static_fields->__9;
        _9__161_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__161_1,
          v112,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__,
          0);
        v113 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v113->__9__161_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v113->__9__161_1, (int32_t)_9__161_1, v114, v115);
      }
      v116 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    v108,
                                                                    (System_Func_TSource__TResult__o *)_9__161_1,
                                                                    (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v117 = System_Linq_Enumerable__Distinct_int_(
               v116,
               (const MethodInfo_315E630 *)Method_System_Linq_Enumerable_Distinct_int___);
      IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                         v117,
                         (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( IsGrandServant )
      {
        v119 = *((_QWORD *)IsGrandServant + 3);
        v120 = IsGrandServant;
        if ( (int)v119 >= 1 )
        {
          v121 = 0;
          while ( 1 )
          {
            if ( v121 >= (unsigned int)v119 )
              goto LABEL_309;
            v122 = this->fields.servantEntity;
            v123 = v120[v121 + 8];
            v124 = (EventPersonalMargeUpValInfo_o *)sub_1C6BC54(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v124, v123, v122, 0);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_308;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
            if ( !v124 )
              goto LABEL_308;
            EventPersonalMargeUpValInfo__Add(v124, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v124, 0);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v124, 0);
              if ( !IsGrandServant )
                goto LABEL_308;
              v126 = *((_QWORD *)IsGrandServant + 3);
              v127 = IsGrandServant;
              if ( (int)v126 >= 1 )
                break;
            }
LABEL_135:
            LODWORD(v119) = v120[6];
            if ( (__int64)++v121 >= (int)v119 )
              goto LABEL_136;
          }
          v128 = 0;
          while ( v128 < (unsigned int)v126 )
          {
            IsGrandServant = v290;
            if ( !v290 )
              goto LABEL_308;
            v19 = (Il2CppObject *)v127[v128 + 4];
            v129 = v290->fields._items;
            v130 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v290->fields._version;
            if ( !v129 )
              goto LABEL_308;
            v131 = *((int *)IsGrandServant + 6);
            if ( (unsigned int)v131 >= LODWORD(v129->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)IsGrandServant,
                v19,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
            }
            else
            {
              v132 = &v129->obj.klass + v131;
              *((_DWORD *)IsGrandServant + 6) = v131 + 1;
              v132[4] = (Il2CppClass *)v19;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v132 + 4), (int32_t)v19, v125, v118);
            }
            LODWORD(v126) = *((_DWORD *)v127 + 6);
            if ( (__int64)++v128 >= (int)v126 )
              goto LABEL_135;
          }
          goto LABEL_309;
        }
LABEL_136:
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(
          this,
          (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v290,
          1,
          v118);
        v133 = this->fields.questRestrictionInfo;
        if ( v133 )
        {
          v134 = this->fields.servantEntity;
          if ( v134 )
          {
            v136 = v133->fields.questId;
            v135 = v133->fields.questPhase;
            v138 = *(_QWORD *)&v134->fields.id.fields.currentCryptoKey;
            v137 = *(_QWORD *)&v134->fields.id.fields.fakeValue;
            p_setupInfo = &this->fields.setupInfo;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v299.fields.currentCryptoKey = v138;
            *(_QWORD *)&v299.fields.fakeValue = v137;
            v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v299, 0);
            if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
            PartyOrganizationUtility__SetAddPassiveCampaignInfo(
              (System_Collections_Generic_List_EventMargeItemUpValInfo__o **)&v290,
              v136,
              v135,
              v139,
              0);
            IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( IsGrandServant )
            {
              v140 = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                       (PartyOrganizationUtility_o *)IsGrandServant,
                       &isDuplicate,
                       (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v290,
                       0);
              v141 = isDuplicate;
              goto LABEL_153;
            }
          }
        }
      }
    }
    goto LABEL_308;
  }
  IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_308;
  v174 = DataManager__GetMasterData_object_(
           (DataManager_o *)IsGrandServant,
           (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  v175 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v175,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v291 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v175;
  if ( !*p_setupInfo )
    goto LABEL_308;
  v177 = (*p_setupInfo)->fields.eventIdList;
  if ( !v177 )
    goto LABEL_308;
  max_length = v177->max_length;
  if ( (int)max_length >= 1 )
  {
    v179 = 0;
    while ( 1 )
    {
      if ( v179 >= (unsigned int)max_length )
        goto LABEL_309;
      if ( !v174 )
        goto LABEL_308;
      v180 = v177->m_Items[v179];
      v181 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v174,
               v180,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v181
        || (IsGrandServant = (void *)EventDetailEntity__HasFlag((EventDetailEntity_o *)v181, 0x800000000LL, 0),
            ((unsigned __int8)IsGrandServant & 1) == 0) )
      {
        v182 = this->fields.servantEntity;
        v183 = (EventPersonalMargeUpValInfo_o *)sub_1C6BC54(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v183, v180, v182, 0);
        IsGrandServant = this->fields.eventUpValInfo;
        if ( !IsGrandServant )
          goto LABEL_308;
        IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
        if ( !v183 )
          goto LABEL_308;
        EventPersonalMargeUpValInfo__Add(v183, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
        IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v183, 0);
        if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
        {
          IsGrandServant = EventPersonalMargeUpValInfo__GetList(v183, 0);
          if ( !IsGrandServant )
            goto LABEL_308;
          v185 = *((_QWORD *)IsGrandServant + 3);
          v186 = IsGrandServant;
          if ( (int)v185 >= 1 )
            break;
        }
      }
LABEL_198:
      LODWORD(max_length) = v177->max_length;
      if ( (__int64)++v179 >= (int)max_length )
        goto LABEL_199;
    }
    v187 = 0;
    while ( v187 < (unsigned int)v185 )
    {
      if ( !v175 )
        goto LABEL_308;
      v19 = (Il2CppObject *)v186[v187 + 4];
      v188 = v175->fields._items;
      v189 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v175->fields._version;
      if ( !v188 )
        goto LABEL_308;
      v190 = v175->fields._size;
      if ( (unsigned int)v190 >= LODWORD(v188->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v175,
          v19,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
      }
      else
      {
        v191 = &v188->obj.klass + v190;
        v175->fields._size = v190 + 1;
        v191[4] = (Il2CppClass *)v19;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v191 + 4), (int32_t)v19, v184, v176);
      }
      LODWORD(v185) = *((_DWORD *)v186 + 6);
      if ( (__int64)++v187 >= (int)v185 )
        goto LABEL_198;
    }
LABEL_309:
    sub_1C6BC68(IsGrandServant);
  }
LABEL_199:
  PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v291, 0, v176);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_308;
  v153 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v175,
           0);
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  v101 = &this->fields.eventUpValInfo;
  p_setupInfo = &this->fields.setupInfo;
LABEL_158:
  this->fields.eventUpValItemList = v153;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_eventUpValItemList, (int32_t)v153, v154, v155);
  if ( !this->fields.questRestrictionInfo )
    return;
  if ( !*p_setupInfo )
  {
    v157 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 1);
    v158 = (EventUpValSetupInfo_o *)sub_1C6BC54(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_41972564(v158, v157, 0, 0, 0, 0);
    *p_setupInfo = v158;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_setupInfo, (int32_t)v158, v159, v160);
  }
  if ( this->fields.isEventUpVal && *v101 )
  {
    v161 = this->fields.userServantEntity;
    v162 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v156);
    v163 = this->fields.questRestrictionInfo;
    if ( !v163 )
      goto LABEL_308;
    if ( !v161 )
      goto LABEL_308;
    IsGrandServant = (void *)UserServantEntity__GetBonusUpVal(
                               v161,
                               &eventUpVallInfo,
                               v162,
                               (System_Int64_array *)IsGrandServant,
                               v163->fields.questId,
                               v163->fields.questPhase,
                               0);
    if ( !eventUpVallInfo )
      goto LABEL_308;
    IsGrandServant = eventUpVallInfo->fields.dropList;
    if ( !IsGrandServant )
      goto LABEL_308;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v284,
      (System_Collections_Generic_List_object__o *)IsGrandServant,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    v285 = v284;
    while ( 1 )
    {
      v164 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v285,
               (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
      if ( !v164 )
        break;
      if ( !*v101 )
        sub_1C6BC60(v164, v165);
      v168 = (System_Collections_Generic_List_object__o *)(*v101)->fields.dropList;
      if ( !v168 )
        sub_1C6BC60(0, v165);
      v169 = v285.fields._current;
      v170 = v168->fields._items;
      v171 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v168->fields._version;
      if ( !v170 )
        sub_1C6BC60(v168, v169);
      v172 = v168->fields._size;
      if ( (unsigned int)v172 >= LODWORD(v170->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v168,
          v169,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
      }
      else
      {
        v173 = &v170->obj.klass + v172;
        v168->fields._size = v172 + 1;
        v173[4] = (Il2CppClass *)v169;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v169, v166, v167);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v285,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  }
  else
  {
    v216 = this->fields.userServantEntity;
    v217 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v156);
    v218 = this->fields.questRestrictionInfo;
    if ( !v218 || !v216 )
      goto LABEL_308;
    this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                  v216,
                                  v101,
                                  v217,
                                  (System_Int64_array *)IsGrandServant,
                                  v218->fields.questId,
                                  v218->fields.questPhase,
                                  0);
  }
  v219 = this->fields.servantEntity;
  v220 = (EventPersonalMargeUpValInfo_o *)sub_1C6BC54(EventPersonalMargeUpValInfo_TypeInfo);
  EventPersonalMargeUpValInfo___ctor(v220, 0, v219, 0);
  IsGrandServant = this->fields.eventUpValInfo;
  if ( !IsGrandServant )
    goto LABEL_308;
  IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
  if ( !v220 )
    goto LABEL_308;
  EventPersonalMargeUpValInfo__Add(v220, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
  if ( EventPersonalMargeUpValInfo__IsEmpty(v220, 0) )
    return;
  v221 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v221,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v19 = (Il2CppObject *)*p_eventUpValItemList;
  if ( *p_eventUpValItemList )
  {
    if ( !v221 )
      goto LABEL_308;
    System_Collections_Generic_List_object___AddRange(
      v221,
      (System_Collections_Generic_IEnumerable_T__o *)v19,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v220, 0);
  }
  else
  {
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v220, 0);
    if ( !v221 )
      goto LABEL_308;
  }
  System_Collections_Generic_List_object___AddRange(
    v221,
    (System_Collections_Generic_IEnumerable_T__o *)IsGrandServant,
    (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
LABEL_308:
    sub_1C6BC60(IsGrandServant, v19);
  v222 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v221,
           0);
  v32 = (int)v222;
  *p_eventUpValItemList = v222;
  p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
LABEL_242:
  sub_1C6B9AC((CGThumbnailListItem_o *)p_equipIdList, v32, v20, v21);
}


void PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v6; // x2

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( LODWORD(equipIdList->max_length) <= index )
      sub_1C6BC68(this);
    equipIdList->m_Items[index] = userSvtId;
    this->fields.equipSvtIdList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, index, method);
    PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v6);
  }
}


void PartyOrganizationListViewItem__SetEquipUserServantIdList(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *userSvtIdList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int64_array **p_equipIdList; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  this->fields.equipIdList = userSvtIdList;
  p_equipIdList = &this->fields.equipIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)userSvtIdList, (int32_t)method, v3);
  this->fields.equipSvtIdList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, v6, v7);
  PartyOrganizationListViewItem__SetEquipStatus(this, *p_equipIdList, v8);
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
  const MethodInfo *v3; // x3

  this->fields._WaveEnemyClassIds_k__BackingField = classIds;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void PartyOrganizationListViewItem__Set_34458708(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UserServantEntity_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UserServantEntity_o *v20; // x8
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  _BOOL4 IsGrandServant; // w0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  _BOOL4 v31; // w8
  int32_t hp; // w20
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v35; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4CB1CE5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1CE5 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    goto LABEL_17;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  this->fields.followerInfo = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v11, v12);
  *(_QWORD *)&this->fields.followerGrandGraphId = 0;
  this->fields.followerClassId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_17;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v16;
  *(_QWORD *)&v36.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v36, 0);
  if ( !v14 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v18, v19);
  this->fields.classId = item->fields.classId;
  *(_QWORD *)&this->fields.cost = *(_QWORD *)&item->fields.cost;
  this->fields.atk = item->fields.atk;
  v20 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  if ( !v20 )
    goto LABEL_17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                v20->fields.limitCount,
                                0);
  v21 = this->fields.userServantEntity;
  this->fields.svtLimitCount = (int)Instance;
  if ( !v21 )
    goto LABEL_17;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v21, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v23, v24);
  Instance = (DataManager_o *)this->fields.userServantEntity;
  this->fields.isQuestRestriction = item->fields.isQuestRestriction;
  this->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  this->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  *(_DWORD *)&this->fields.isFixedSupportPositionRestriction = 0;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  this->fields.npcFollowerSvtId = 0;
  *(int64_t *)((char *)&this->fields.npcFollowerSvtId + 6) = 0;
  this->fields.isUniqueIndividualityRestriction = isUniqueIndividualityRestriction;
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  if ( !Instance )
    goto LABEL_17;
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)Instance, 0);
  this->fields._IsGrandServant_k__BackingField = IsGrandServant;
  IsGrandSameServant_k__BackingField = item->fields._IsGrandSameServant_k__BackingField;
  this->fields._IsUseGrandBoard_k__BackingField = 0;
  v31 = IsGrandSameServant_k__BackingField && !IsGrandServant;
  this->fields._IsTempGrandServant_k__BackingField = v31;
  if ( v31 )
  {
    hp = this->fields.hp;
    Instance = (DataManager_o *)PartyOrganizationListViewItem__GetGrandServantInfo(this, v28);
    if ( Instance )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Instance, 0);
      atk = this->fields.atk;
      this->fields.hp = AddedHp + hp;
      Instance = (DataManager_o *)PartyOrganizationListViewItem__GetGrandServantInfo(this, v35);
      if ( Instance )
      {
        this->fields.atk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)Instance, 0) + atk;
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_1C6BC60(Instance, v6);
  }
LABEL_16:
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v29);
}


void PartyOrganizationListViewItem__Swap(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userServantEntity; // x0
  __int64 v7; // d14
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v9; // d12
  __int64 v10; // d13
  __int64 v11; // d10
  __int64 v12; // d11
  Il2CppClass **v13; // x20
  __int64 v14; // d9
  __int64 v15; // d8
  struct UserServantEntity_o *v16; // x1
  struct FollowerInfo_o *v17; // x1
  char v18; // w2
  const MethodInfo *v19; // x3
  struct ServantEntity_o *v20; // x1
  char v21; // w2
  const MethodInfo *v22; // x3
  struct System_Int32_array *v23; // x1
  char v24; // w2
  const MethodInfo *v25; // x3
  char v26; // w2
  const MethodInfo *v27; // x3
  System_Array_o *v28; // x0
  struct System_Int32_array **v29; // x29
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x27
  __int64 v32; // x0
  __int64 v33; // x0
  int32_t v34; // w1
  const MethodInfo *v35; // x2
  struct EventCampaignEntity_array *v36; // x1
  char v37; // w2
  const MethodInfo *v38; // x3
  char v39; // w2
  const MethodInfo *v40; // x3
  char v41; // w2
  const MethodInfo *v42; // x3
  char v43; // w2
  const MethodInfo *v44; // x3
  char v45; // w2
  const MethodInfo *v46; // x3
  char v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x0
  Il2CppObject *v50; // x20
  __int64 v51; // x0
  __int64 v52; // x0
  int32_t v53; // w1
  const MethodInfo *v54; // x2
  char v55; // w2
  const MethodInfo *v56; // x3
  char v57; // [xsp+14h] [xbp-16Ch]
  int32_t InitPos_k__BackingField; // [xsp+18h] [xbp-168h]
  bool IsAllOutBattle_k__BackingField; // [xsp+1Ch] [xbp-164h]
  bool IsDataLost_k__BackingField; // [xsp+20h] [xbp-160h]
  int32_t TimesToRestart_k__BackingField; // [xsp+24h] [xbp-15Ch]
  bool IsNotSupportSingle_k__BackingField; // [xsp+28h] [xbp-158h]
  int32_t EquipFriendShipSkillChange_k__BackingField; // [xsp+2Ch] [xbp-154h]
  bool IsUseGrandBoard_k__BackingField; // [xsp+30h] [xbp-150h]
  bool IsTempGrandServant_k__BackingField; // [xsp+34h] [xbp-14Ch]
  bool IsGrandServant_k__BackingField; // [xsp+38h] [xbp-148h]
  bool IsDisappearEquip_k__BackingField; // [xsp+3Ch] [xbp-144h]
  bool IsDisappearSvt_k__BackingField; // [xsp+40h] [xbp-140h]
  bool IsClearedWave_k__BackingField; // [xsp+44h] [xbp-13Ch]
  int32_t NowPos_k__BackingField; // [xsp+48h] [xbp-138h]
  bool IsNotClassBoardNpc_k__BackingField; // [xsp+4Ch] [xbp-134h]
  bool isRestrictionMyServantPos; // [xsp+60h] [xbp-120h]
  bool isRestrictionNeedStarting; // [xsp+64h] [xbp-11Ch]
  bool isRestrictionGrandServant; // [xsp+68h] [xbp-118h]
  bool isRestrictionServantPos; // [xsp+6Ch] [xbp-114h]
  System_Array_o *equipSvtIdList; // [xsp+70h] [xbp-110h]
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // [xsp+78h] [xbp-108h]
  bool IsDispSvtPoint_k__BackingField; // [xsp+84h] [xbp-FCh]
  System_Int64_array *equipIdList; // [xsp+88h] [xbp-F8h]
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

  if ( (byte_4CB1CE8 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB1CE8 = 1;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  followerInfo = this->fields.followerInfo;
  v7 = *(_QWORD *)&this->fields.followerClassId;
  isFollower = this->fields.isFollower;
  isFixNpc = this->fields.isFixNpc;
  followerIndex = this->fields.followerIndex;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  v10 = *(_QWORD *)&this->fields.cost;
  v9 = *(_QWORD *)&this->fields.atk;
  v12 = *(_QWORD *)&this->fields.rarityId;
  v11 = *(_QWORD *)&this->fields.frameType;
  servantEntity = this->fields.servantEntity;
  LOBYTE(v13) = this->fields.isFatigureRecover;
  v14 = *(_QWORD *)&this->fields.isQuestRestriction;
  commandCodeIdList = this->fields.commandCodeIdList;
  isServantNumRestriction = this->fields.isServantNumRestriction;
  isFixMultipleNpcRestriction = this->fields.isFixMultipleNpcRestriction;
  npcFollowerSvtId = this->fields.npcFollowerSvtId;
  fatigureTime = this->fields.fatigureTime;
  isFixMultipleNpc = this->fields.isFixMultipleNpc;
  isMyServantOrNpcRestriction = this->fields.isMyServantOrNpcRestriction;
  haveIndividualityServant = this->fields.haveIndividualityServant;
  v15 = *(_QWORD *)&this->fields._SvtPoint_k__BackingField;
  if ( !item )
    sub_1C6BC60(p_userServantEntity, item);
  IsDispSvtPoint_k__BackingField = this->fields._IsDispSvtPoint_k__BackingField;
  equipIdList = this->fields.equipIdList;
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
  IsDisappearSvt_k__BackingField = this->fields._IsDisappearSvt_k__BackingField;
  IsClearedWave_k__BackingField = this->fields._IsClearedWave_k__BackingField;
  IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
  IsDisappearEquip_k__BackingField = this->fields._IsDisappearEquip_k__BackingField;
  IsUseGrandBoard_k__BackingField = this->fields._IsUseGrandBoard_k__BackingField;
  IsTempGrandServant_k__BackingField = this->fields._IsTempGrandServant_k__BackingField;
  EquipFriendShipSkillChange_k__BackingField = this->fields._EquipFriendShipSkillChange_k__BackingField;
  v16 = item->fields.userServantEntity;
  this->fields.userServantEntity = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_userServantEntity, (int32_t)v16, notChangeInitPos, method);
  v17 = item->fields.followerInfo;
  this->fields.followerInfo = v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)v17, v18, v19);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  v20 = item->fields.servantEntity;
  this->fields.servantEntity = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v20, v21, v22);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  v23 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v23, v24, v25);
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
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  v29 = &item->fields.equipSvtIdList;
  v28 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v28 )
    goto LABEL_9;
  v30 = System_Array__Clone(v28, 0);
  if ( !v30 )
    goto LABEL_9;
  v57 = (char)v13;
  v13 = &int___TypeInfo;
  v31 = v30;
  v32 = sub_1C6BB44(v30, int___TypeInfo);
  if ( !v32
    || (*p_equipSvtIdList = (struct System_Int32_array *)v32,
        v33 = sub_1C6BB44(v31, int___TypeInfo),
        LOBYTE(v13) = v57,
        v34 = v33,
        !v33) )
  {
    sub_1C6BFFC(v31);
LABEL_9:
    v34 = 0;
    *p_equipSvtIdList = 0;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v34, v26, v27);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v35);
  v36 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v36, v37, v38);
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
  item->fields.userServantEntity = userServantEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&item->fields.userServantEntity, (int32_t)userServantEntity, v39, v40);
  item->fields.followerInfo = followerInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v41, v42);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  item->fields.followerIndex = followerIndex;
  sub_1C6B9AC((CGThumbnailListItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v43, v44);
  *(_QWORD *)&item->fields.cost = v10;
  *(_QWORD *)&item->fields.atk = v9;
  *(_QWORD *)&item->fields.rarityId = v12;
  *(_QWORD *)&item->fields.frameType = v11;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&item->fields.commandCodeIdList, (int32_t)commandCodeIdList, v45, v46);
  *(_QWORD *)&item->fields.isQuestRestriction = v14;
  item->fields.isFatigureRecover = (char)v13;
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
  item->fields.fatigureTime = fatigureTime;
  if ( !equipSvtIdList )
    goto LABEL_17;
  v49 = System_Array__Clone(equipSvtIdList, 0);
  if ( !v49 )
    goto LABEL_17;
  v50 = v49;
  v51 = sub_1C6BB44(v49, int___TypeInfo);
  if ( !v51 || (*v29 = (struct System_Int32_array *)v51, v52 = sub_1C6BB44(v50, int___TypeInfo), v53 = v52, !v52) )
  {
    sub_1C6BFFC(v50);
LABEL_17:
    v53 = 0;
    *v29 = 0;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v53, v47, v48);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v54);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&item->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v55,
    v56);
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v15;
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
  const MethodInfo *v10; // x3
  struct System_Int64_array **v11; // x22
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Int64_array *v15; // x8
  struct System_Int64_array *v16; // x9
  int64_t v17; // x10
  struct System_Int32_array **p_equipSvtIdList; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Int32_array **v22; // x22
  const MethodInfo *v23; // x2
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Int32_array *v27; // x8
  struct System_Int32_array *v28; // x9
  int32_t v29; // w11
  const MethodInfo *v30; // x2

  if ( (byte_4CB1CE9 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    byte_4CB1CE9 = 1;
  }
  p_equipIdList = &this->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v8 = sub_1C6BAB0(long___TypeInfo, 1);
    *p_equipIdList = (struct System_Int64_array *)v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipIdList, v8, v9, v10);
  }
  if ( !item )
    goto LABEL_22;
  v11 = &item->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v12 = sub_1C6BAB0(long___TypeInfo, 1);
    *v11 = (struct System_Int64_array *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)&item->fields.equipIdList, v12, v13, v14);
  }
  v15 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_22;
  if ( !LODWORD(v15->max_length) )
    goto LABEL_23;
  v16 = *v11;
  if ( !*v11 )
    goto LABEL_22;
  if ( !LODWORD(v16->max_length)
    || (v17 = v15->m_Items[0], v15->m_Items[0] = v16->m_Items[0], !LODWORD(v16->max_length)) )
  {
LABEL_23:
    sub_1C6BC68(IsNullOrEmpty);
  }
  v16->m_Items[0] = v17;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSvtIdList, 0) )
  {
    v19 = sub_1C6BAB0(int___TypeInfo, 1);
    *p_equipSvtIdList = (struct System_Int32_array *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v19, v20, v21);
  }
  v22 = &item->fields.equipSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipSvtIdList, 0);
  if ( IsNullOrEmpty )
  {
    v24 = sub_1C6BAB0(int___TypeInfo, 1);
    *v22 = (struct System_Int32_array *)v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v24, v25, v26);
  }
  v27 = *p_equipSvtIdList;
  if ( !*p_equipSvtIdList )
    goto LABEL_22;
  if ( !LODWORD(v27->max_length) )
    goto LABEL_23;
  v28 = *v22;
  if ( !*v22 )
LABEL_22:
    sub_1C6BC60(IsNullOrEmpty, v7);
  if ( !LODWORD(v28->max_length) )
    goto LABEL_23;
  v29 = v27->m_Items[0];
  v27->m_Items[0] = v28->m_Items[0];
  v28->m_Items[0] = v29;
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v23);
  PartyOrganizationListViewItem__SetEquipStatus(item, item->fields.equipIdList, v30);
}


void PartyOrganizationListViewItem__UpdateEventEffect(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v2);
}


void PartyOrganizationListViewItem__UpdateServantInfo(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
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
  const MethodInfo *v23; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v25; // x20
  __int64 v26; // x21
  UserServantEntity_o *v27; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool IsGrandServant_k__BackingField; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+90h] [xbp-90h]
  QuestPhaseEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4CB1D0F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C6BA08(&long___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB1D0F = 1;
  }
  entity = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList,
                    0);
  if ( (IsNullOrEmpty & 1) != 0 && !this->fields._IsDisappearEquip_k__BackingField )
  {
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( !equipUserServantEntityList )
      goto LABEL_44;
    v11 = 0;
    while ( v11 < equipUserServantEntityList->fields._size )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
      IsNullOrEmpty = sub_1C6BAB0(long___TypeInfo, 1);
      if ( !this->fields.equipUserServantEntityList )
        goto LABEL_44;
      v13 = IsNullOrEmpty;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                 v11,
                                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v14 = *(_OWORD *)(IsNullOrEmpty + 32);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
      *(_OWORD *)&v37.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v36 = v37;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v36, 0);
      if ( !v13 )
        goto LABEL_44;
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v13 + 32) = IsNullOrEmpty;
      if ( !Master_object )
        goto LABEL_44;
      IsNullOrEmpty = DataMasterBase_object__object__long___isEntityExistsFromId(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (System_Int64_array *)v13,
                        (const MethodInfo_33FAC14 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v15 = this->fields.equipUserServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !this->fields.equipUserServantEntityList )
          goto LABEL_44;
        v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                   v11,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_44;
        v17 = *(_OWORD *)(IsNullOrEmpty + 32);
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
        *(_OWORD *)&v37.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v37;
        IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v35, 0);
        if ( !v16 )
          goto LABEL_44;
        IsNullOrEmpty = (__int64)DataMasterBase_object__object__long___GetEntity(
                                   v16,
                                   IsNullOrEmpty,
                                   (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !v15 )
          goto LABEL_44;
        System_Collections_Generic_List_object___set_Item(
          (System_Collections_Generic_List_object__o *)v15,
          v11,
          (Il2CppObject *)IsNullOrEmpty,
          (const MethodInfo_38006F8 *)Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
      }
      else
      {
        this->fields._IsDisappearEquip_k__BackingField = 1;
      }
      equipUserServantEntityList = this->fields.equipUserServantEntityList;
      ++v11;
      if ( !equipUserServantEntityList )
        goto LABEL_44;
    }
  }
  p_userServantEntity = &this->fields.userServantEntity;
  if ( this->fields.userServantEntity && !this->fields._IsDisappearSvt_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
    IsNullOrEmpty = sub_1C6BAB0(long___TypeInfo, 1);
    v7 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_44;
    v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
    v9 = IsNullOrEmpty;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v37;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v34, 0);
    if ( !v9 )
      goto LABEL_44;
    if ( !*(_DWORD *)(v9 + 24) )
LABEL_69:
      sub_1C6BC68(IsNullOrEmpty);
    *(_QWORD *)(v9 + 32) = IsNullOrEmpty;
    if ( !v6 )
      goto LABEL_44;
    if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
            (System_Int64_array *)v9,
            (const MethodInfo_33FAC14 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
    {
LABEL_18:
      this->fields._IsDisappearSvt_k__BackingField = 1;
      return;
    }
    IsNullOrEmpty = (__int64)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_44;
    if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)IsNullOrEmpty, 0) )
      goto LABEL_18;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
    v18 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_44;
    v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v19;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v37;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v33, 0);
    if ( !v20 )
      goto LABEL_44;
    v21 = DataMasterBase_object__object__long___GetEntity(
            v20,
            IsNullOrEmpty,
            (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v21;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)v21, v22, v23);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    IsNullOrEmpty = (__int64)UserServantEntity__GetOverwriteStatus(
                               (UserServantEntity_o *)IsNullOrEmpty,
                               this->fields.questRestrictionInfo,
                               0);
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    this->fields.cost = *(_DWORD *)(IsNullOrEmpty + 28);
    *(_QWORD *)&this->fields.hp = *(_QWORD *)(IsNullOrEmpty + 16);
    this->fields.rarityId = *(_DWORD *)(IsNullOrEmpty + 24);
    v4 = *(unsigned int *)(IsNullOrEmpty + 40);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    this->fields.actualRarity = v4;
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    IsNullOrEmpty = UserServantEntity__GetFrameType((UserServantEntity_o *)IsNullOrEmpty, v4, 0);
    userServantEntity = this->fields.userServantEntity;
    this->fields.frameType = IsNullOrEmpty;
    if ( !userServantEntity )
      goto LABEL_44;
    v26 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v25 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v39.fields.currentCryptoKey = v26;
    *(_QWORD *)&v39.fields.fakeValue = v25;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v39, 0);
    v27 = this->fields.userServantEntity;
    this->fields.svtLimitCount = IsNullOrEmpty;
    if ( !v27 )
      goto LABEL_44;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v27, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v29, v30);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    this->fields._IsGrandServant_k__BackingField = UserServantEntity__IsGrandServant(
                                                     (UserServantEntity_o *)IsNullOrEmpty,
                                                     0);
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !IsNullOrEmpty )
      goto LABEL_44;
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)IsNullOrEmpty,
           &entity,
           questRestrictionInfo->fields.questId,
           questRestrictionInfo->fields.questPhase,
           0) )
    {
      IsNullOrEmpty = (__int64)entity;
      if ( entity )
      {
        if ( !QuestPhaseEntity__IsUseGrandBoard(entity, 0) )
          goto LABEL_67;
        IsNullOrEmpty = (__int64)this->fields.questRestrictionInfo;
        if ( IsNullOrEmpty )
        {
          if ( QuestRestrictionInfo__IsGrandServantRestriction(
                 (QuestRestrictionInfo_o *)IsNullOrEmpty,
                 this->fields._InitPos_k__BackingField,
                 0) )
          {
            IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
LABEL_68:
            this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
            return;
          }
LABEL_67:
          IsGrandServant_k__BackingField = 0;
          goto LABEL_68;
        }
      }
LABEL_44:
      sub_1C6BC60(IsNullOrEmpty, v4);
    }
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

  if ( (byte_4CB1D0E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C6BA08(&PartyOrganizationListViewObject_TypeInfo);
    byte_4CB1D0E = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
         viewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v6 = (PartyOrganizationListViewItem_o *)sub_1C6BFFC(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_34460424(v6, v7, v8);
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
      sub_1C6BC60(this, item);
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

  if ( (byte_4CB1D0A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1D0A = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v4 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v8);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(SvtId, 0);
    if ( !MasterData_object )
LABEL_17:
      sub_1C6BC60(Instance, v6);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v4, 0);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CB159D )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB159D = 1;
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

  if ( (byte_4CB1CF9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4CB1CF9 = 1;
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
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C6BC60(equipServantEntityList, v4);
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

  if ( (byte_4CB1CFE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1CFE = 1;
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
                                                                          (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C6BC60(IsNullOrEmpty, v4);
    }
    items = IsNullOrEmpty[2].fields._items;
    v11 = *(_QWORD *)&IsNullOrEmpty[2].fields._size;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = items;
    *(_QWORD *)&v15.fields.fakeValue = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0);
  }
}


int32_t PartyOrganizationListViewItem__get_EquipLimitCountMax(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *equipServantEntityList; // x0

  if ( (byte_4CB1CFF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4CB1CFF = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return 0;
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C6BC60(equipServantEntityList, v3);
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

  if ( (byte_4CB1D00 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D00 = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return v3;
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                equipServantEntityList,
                                                                                0,
                                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C6BC60(equipServantEntityList, v4);
  }
  return ServantEntity__getName((ServantEntity_o *)equipServantEntityList, -1, -1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  struct System_Object_array *v9; // x0
  __int64 v10; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4CB1CFC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1CFC = 1;
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
                                                                                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0) )
    {
      sub_1C6BC60(equipServantEntityList, v6);
    }
    items = equipServantEntityList->fields._items;
    v5 = *(_QWORD *)&equipServantEntityList->fields._size;
  }
  v9 = items;
  v10 = v5;
  *(_QWORD *)&result.fields.fakeValue = v10;
  *(_QWORD *)&result.fields.currentCryptoKey = v9;
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

  if ( (byte_4CB1CFD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1CFD = 1;
  }
  memset(&v14, 0, sizeof(v14));
  v3 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)equipServantEntityList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__) )
  {
    if ( v14.fields._current )
    {
      klass = v14.fields._current[1].klass;
      monitor = v14.fields._current[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = klass;
      *(_QWORD *)&v15.fields.fakeValue = monitor;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15, 0);
      if ( !v3 )
        sub_1C6BC60(v8, (unsigned int)v8);
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(v8, (unsigned int)v8);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
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

  if ( (byte_4CB1CFA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB1CFA = 1;
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
                                                                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C6BC60(equipUserServantEntityList, v3);
    }
    v8 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
    *(_OWORD *)&v10.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v9 = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v9, 0);
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


bool PartyOrganizationListViewItem__get_IsEventJoin(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LOBYTE(userServantEntity) = UserServantEntity__IsEventJoin(userServantEntity, 0);
  return (char)userServantEntity;
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


bool PartyOrganizationListViewItem__get_IsRestriction(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && !questRestrictionInfo->fields.isRestriction;
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

  if ( (byte_4CB1D0D & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB1D0D = 1;
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

  if ( (byte_4CB1CF6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4CB1CF6 = 1;
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
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v9 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v12.fields._current )
          v9 += *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_108);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.atk + v9;
    }
LABEL_23:
    sub_1C6BC60(equipUserServantEntityList, v3);
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

  if ( (byte_4CB1CF8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4CB1CF8 = 1;
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
                                                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
      sub_1C6BC60(equipServantEntityList, v6);
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

  if ( (byte_4CB1CF7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4CB1CF7 = 1;
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
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v9 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v12.fields._current )
          v9 += *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_108 + 4);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.hp + v9;
    }
LABEL_23:
    sub_1C6BC60(equipUserServantEntityList, v3);
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

  if ( (byte_4CB1CF3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1CF3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantAddMaster___);
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (ServantAddMaster_o *)Master_object;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, v4);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(SvtId, 0);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, v8);
  if ( !v5 )
    sub_1C6BC60(ServantName, v10);
  return ServantAddMaster__AddIdentifyText(v5, v7, ServantName, 0);
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o PartyOrganizationListViewItem__get_SvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // kr00_16
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4CB1CF2 & 1) == 0 )
  {
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1CF2 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0);
  v4 = *(_QWORD *)&v5.fields.fakeValue;
  v3 = *(_QWORD *)&v5.fields.currentCryptoKey;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    v3 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v4 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  *(_QWORD *)&result.fields.fakeValue = v4;
  *(_QWORD *)&result.fields.currentCryptoKey = v3;
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

  if ( (byte_4CB1CF4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19118/*"error"*/);
    byte_4CB1CF4 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1C6BC60(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19118/*"error"*/;
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
  const MethodInfo *v3; // x3

  this->fields._DuplicationEquipmentFlagList_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3

  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB1D17 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4CB1D17 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PartyOrganizationListViewItem___c___ctor(PartyOrganizationListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_0(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C6BC60(this, 0);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_1(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4CB1D18 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D18 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_2(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C6BC60(this, 0);
  return script->fields.eventCampaignBonusDetailName;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_3(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4CB1D19 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1D19 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


int64_t PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__361_0(
        PartyOrganizationListViewItem___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id;
}


bool PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__361_1(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *id,
        const MethodInfo *method)
{
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CB1D1A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_long___);
    this = (PartyOrganizationListViewItem___c_o *)sub_1C6BA08(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4CB1D1A = 1;
  }
  if ( !id )
    sub_1C6BC60(this, id);
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
    v7 = sub_1C41D90(id, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(id, *(_QWORD *)(v7 + 8)) >= 1
      && System_Linq_Enumerable__Count_long_(
           (System_Collections_Generic_IEnumerable_TSource__o *)id,
           (const MethodInfo_315B400 *)Method_System_Linq_Enumerable_Count_long___) > 1;
}


int64_t PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__361_2(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CB1D1B & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem___c_o *)sub_1C6BA08(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4CB1D1B = 1;
  }
  if ( !group )
    sub_1C6BC60(this, group);
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
    v7 = sub_1C41D90(group, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__161_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C6BC60(this, 0);
  return drop->fields.eventId;
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__161_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C6BC60(this, 0);
  return drop->fields.eventId;
}


void PartyOrganizationListViewItem___c__DisplayClass177_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass177_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass177_0___SetDuplicationGrandQuestEquipmentMarkFlag_b__0(
        PartyOrganizationListViewItem___c__DisplayClass177_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *_4__this; // x8
  struct System_Int64_array *equipIdList; // x8
  __int64 i; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || (equipIdList = _4__this->fields.equipIdList) == 0 )
    sub_1C6BC60(this, id);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(equipIdList->max_length) )
    sub_1C6BC68(this);
  return equipIdList->m_Items[i] == id;
}


void PartyOrganizationListViewItem___c__DisplayClass365_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass365_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass365_0___GetCanOrganizationGrandSvtIdList_b__0(
        PartyOrganizationListViewItem___c__DisplayClass365_0_o *this,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *individuality; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4CB1D1C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_int____78570976);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationListViewItem___c__DisplayClass365_1__GetCanOrganizationGrandSvtIdList_b__1__);
    sub_1C6BA08(&PartyOrganizationListViewItem___c__DisplayClass365_1_TypeInfo);
    byte_4CB1D1C = 1;
  }
  v5 = sub_1C6BC54(PartyOrganizationListViewItem___c__DisplayClass365_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v9 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationListViewItem___c__DisplayClass365_1__GetCanOrganizationGrandSvtIdList_b__1__,
    0);
  return BasicHelper__Any_int__51528112(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_31241B0 *)Method_BasicHelper_Any_int____78570976);
}


void PartyOrganizationListViewItem___c__DisplayClass365_1___ctor(
        PartyOrganizationListViewItem___c__DisplayClass365_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass365_1___GetCanOrganizationGrandSvtIdList_b__1(
        PartyOrganizationListViewItem___c__DisplayClass365_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.classIndividuality == x;
}


void PartyOrganizationListViewItem___c__DisplayClass366_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyOrganizationListViewItem___c__DisplayClass366_0___IsEnabledChangeGrandSvt_b__0(
        PartyOrganizationListViewItem___c__DisplayClass366_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  GrandGraphEntity_o *grandGraphEntity; // x0

  grandGraphEntity = this->fields.grandGraphEntity;
  if ( !grandGraphEntity )
    sub_1C6BC60(0, x);
  return GrandGraphEntity__CanSelectToGrand(grandGraphEntity, x, 0);
}