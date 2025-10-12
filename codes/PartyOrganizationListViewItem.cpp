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

  if ( (byte_4C3341C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    byte_4C3341C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v8, v9, v10);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
}


void PartyOrganizationListViewItem___ctor_34107020(
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
  FollowerInfo_o *followerInfo; // x28
  int32_t v38; // w2
  int32_t v39; // w0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t followerIndex; // w24
  FollowerInfo_o *v43; // x26
  int32_t v44; // w2
  ServantLeaderInfo_o *v45; // x26
  int32_t v46; // w27
  FollowerInfo_o *v47; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x24
  int32_t v49; // w2
  Il2CppObject *v50; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  struct ServantEntity_o *servantEntity; // x8
  int32_t v56; // w9
  int32_t v57; // w26
  FollowerInfo_o *v58; // x27
  int32_t v59; // w2
  int32_t v60; // w8
  int32_t v61; // w26
  FollowerInfo_o *v62; // x27
  int32_t v63; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x1
  int32_t v68; // w26
  FollowerInfo_o *v69; // x27
  int32_t v70; // w3
  unsigned __int64 v71; // x1
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
  const MethodInfo *v101; // x1
  int32_t v102; // w21
  __int64 v103; // x24
  __int64 v104; // x25
  int32_t v105; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // x2
  QuestRestrictionInfo_o *v109; // x8
  const MethodInfo *v110; // x1
  bool IsNotClassBoard; // w20
  QuestPhaseEntity_o *v112; // [xsp+10h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *v113; // [xsp+18h] [xbp-78h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  bool isWhole; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_4C3341E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3341E = 1;
  }
  isWhole = 0;
  v113 = 0;
  entity = 0;
  v112 = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v23;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v23, v24, v25);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v31,
    v32);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v34, v35);
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
      v38 = (int)ReturnTypeByQuestId;
      if ( !followerInfo )
        goto LABEL_148;
    }
    else
    {
      v38 = 0;
      if ( !followerInfo )
        goto LABEL_148;
    }
  }
  else
  {
    v38 = 2;
    if ( !followerInfo )
      goto LABEL_148;
  }
  v39 = FollowerInfo__getIndex(followerInfo, followerClassId, v38, followerDeckId, followerGrandGraphId, 0);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v39;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v40, v41);
  followerIndex = this->fields.followerIndex;
  v43 = this->fields.followerInfo;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v44 = (int)ReturnTypeByQuestId;
      if ( !v43 )
        goto LABEL_148;
    }
    else
    {
      v44 = 0;
      if ( !v43 )
        goto LABEL_148;
    }
  }
  else
  {
    v44 = 2;
    if ( !v43 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = FollowerInfo__getServantLeaderInfo(v43, followerIndex, v44, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  v45 = (ServantLeaderInfo_o *)ReturnTypeByQuestId;
  this->fields._IsGrandServant_k__BackingField = ServantLeaderInfo__get_IsGrandSvt(
                                                   (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                                   0);
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(v45, 0);
  ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                          (DataManager_o *)ReturnTypeByQuestId,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = this->fields.followerIndex;
  v47 = this->fields.followerInfo;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v49 = (int)ReturnTypeByQuestId;
      if ( !v47 )
        goto LABEL_148;
    }
    else
    {
      v49 = 0;
      if ( !v47 )
        goto LABEL_148;
    }
  }
  else
  {
    v49 = 2;
    if ( !v47 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getSvtId(v47, v46, v49, 0);
  if ( !v48 )
    goto LABEL_148;
  v50 = DataMasterBase_object__object__int___GetEntity(
          v48,
          (int32_t)ReturnTypeByQuestId,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v50;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v50, v52, v53);
  this->fields.cost = 0;
  ReturnTypeByQuestId = ServantLeaderInfo__GetOverwriteStatus(v45, 0);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  *(_QWORD *)&this->fields.hp = *((_QWORD *)ReturnTypeByQuestId + 2);
  this->fields.rarityId = *((_DWORD *)ReturnTypeByQuestId + 6);
  v54 = *((_DWORD *)ReturnTypeByQuestId + 10);
  this->fields.actualRarity = v54;
  ReturnTypeByQuestId = (void *)ServantLeaderInfo__GetFrameType(v45, v54, 0);
  servantEntity = this->fields.servantEntity;
  this->fields.frameType = (int)ReturnTypeByQuestId;
  if ( !servantEntity )
    goto LABEL_148;
  v56 = this->fields.followerGrandGraphId;
  v57 = this->fields.followerIndex;
  v58 = this->fields.followerInfo;
  this->fields.classId = servantEntity->fields.classId;
  if ( v56 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v59 = (int)ReturnTypeByQuestId;
      if ( !v58 )
        goto LABEL_148;
    }
    else
    {
      v59 = 0;
      if ( !v58 )
        goto LABEL_148;
    }
  }
  else
  {
    v59 = 2;
    if ( !v58 )
      goto LABEL_148;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getLimitCount(v58, v57, v59, 0);
  v60 = this->fields.followerGrandGraphId;
  v61 = this->fields.followerIndex;
  v62 = this->fields.followerInfo;
  this->fields.svtLimitCount = (int)ReturnTypeByQuestId;
  if ( v60 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v63 = (int)ReturnTypeByQuestId;
      if ( !v62 )
        goto LABEL_148;
    }
    else
    {
      v63 = 0;
      if ( !v62 )
        goto LABEL_148;
    }
  }
  else
  {
    v63 = 2;
    if ( !v62 )
      goto LABEL_148;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v62, v61, v63, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v65, v66);
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v67);
  if ( ReturnTypeByQuestId && *p_questRestrictionInfo )
  {
    v68 = this->fields.followerIndex;
    v69 = this->fields.followerInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0);
      v70 = (int)ReturnTypeByQuestId;
      if ( !v69 )
        goto LABEL_148;
    }
    else
    {
      v70 = 2;
      if ( !v69 )
        goto LABEL_148;
    }
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_41649980(
                                        v69,
                                        questRestrictionInfo,
                                        v68,
                                        v70,
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
    v71 = (unsigned int)initPos;
  else
    v71 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0;
  *(_DWORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v71;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(
                                        questRestrictionInfo,
                                        v71,
                                        0),
        ((unsigned __int8)ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_148;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                            (DataManager_o *)ReturnTypeByQuestId,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          sub_1C32E84(ReturnTypeByQuestId);
        v75 = *((_QWORD *)v73 + (int)v74 + 4);
        if ( !v75 )
          goto LABEL_148;
        v77 = *(_QWORD *)(v75 + 80);
        v76 = *(_QWORD *)(v75 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v116.fields.currentCryptoKey = v77;
        *(_QWORD *)&v116.fields.fakeValue = v76;
        v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v116, 0);
        v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
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
        ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestriction_43321380(
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
          ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43343396(
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
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
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
                                    &v113,
                                    *(_QWORD *)(*((_QWORD *)ReturnTypeByQuestId + 23) + 64LL),
                                    (*p_questRestrictionInfo)->fields.dataLostBattleId,
                                    0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      v86 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_148;
      v87 = v113;
      v89 = *(_QWORD *)&v86->fields.id.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v86->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v117.fields.currentCryptoKey = v89;
      *(_QWORD *)&v117.fields.fakeValue = v88;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v117, 0);
      if ( !v87 )
        goto LABEL_148;
      ReturnTypeByQuestId = (void *)UserEventDataLostEntity__IsRestart(v87, (int32_t)ReturnTypeByQuestId, 0);
      v90 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_148;
      v91 = (char)ReturnTypeByQuestId;
      v92 = v113;
      v94 = *(_QWORD *)&v90->fields.id.fields.currentCryptoKey;
      v93 = *(_QWORD *)&v90->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v118.fields.currentCryptoKey = v94;
      *(_QWORD *)&v118.fields.fakeValue = v93;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v118, 0);
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
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
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
          v102 = *((_DWORD *)ReturnTypeByQuestId + 60);
          this->fields._SvtPoint_k__BackingField = v102;
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v101);
          if ( !ReturnTypeByQuestId )
            goto LABEL_148;
          v104 = *((_QWORD *)ReturnTypeByQuestId + 6);
          v103 = *((_QWORD *)ReturnTypeByQuestId + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v119.fields.currentCryptoKey = v104;
          *(_QWORD *)&v119.fields.fakeValue = v103;
          v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v119, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v97, eventId, v102, v105, 0);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v99);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v71) )
    goto LABEL_143;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v107);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0) )
  {
    v109 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v112,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0) )
        {
          ReturnTypeByQuestId = v112;
          if ( !v112 )
            goto LABEL_148;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v112, 0);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v110);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v109) = IsNotClassBoard
                       | ServantLeaderInfo__IsNotClassBoardNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0);
          goto LABEL_147;
        }
      }
LABEL_148:
      sub_1C32E7C(ReturnTypeByQuestId);
    }
  }
  else
  {
LABEL_143:
    LOBYTE(v109) = 0;
  }
LABEL_147:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v109;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v108);
}


void PartyOrganizationListViewItem___ctor_34133596(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x27
  __int64 v39; // x19
  __int64 v40; // x28
  Il2CppObject *v41; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  ServantLimitMaster_o *v45; // x28
  int32_t v46; // w29
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int v49; // w9
  Il2CppObject *v50; // x0
  Il2CppObject *v51; // x25
  struct System_Int32_array *v52; // x0
  struct System_Int32_array **p_equipSvtIdList; // x26
  __int64 v54; // x0
  int32_t v55; // w1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x23
  int32_t v57; // w1
  struct UserServantEntity_o *v58; // x8
  __int64 v59; // x19
  __int64 v60; // x25
  UserServantEntity_o *v61; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  QuestRestrictionInfo_o *v65; // x25
  struct UserServantEntity_o *v66; // x8
  __int64 v67; // x19
  __int64 v68; // x26
  int32_t v69; // w26
  int32_t v70; // w27
  QuestRestrictionInfo_o *v71; // x25
  UserServantEntity_o *v72; // x8
  __int64 v73; // x19
  __int64 v74; // x26
  int32_t v75; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v77; // x2
  struct QuestRestrictionInfo_o *v78; // x8
  UserServantEntity_o *v79; // x9
  UserEventServantFatigueMaster_o *v80; // x24
  int32_t eventId; // w25
  __int64 v82; // x19
  __int64 v83; // x26
  int64_t v84; // x19
  struct QuestRestrictionInfo_o *v85; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v87; // x8
  UserEventAlloutBattleMaster_o *v88; // x25
  __int64 v89; // x19
  __int64 v90; // x26
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v92; // x8
  UserEventDataLostEntity_o *v93; // x24
  __int64 v94; // x19
  __int64 v95; // x25
  UserServantEntity_o *v96; // x8
  char v97; // w24
  UserEventDataLostEntity_o *v98; // x25
  __int64 v99; // x19
  __int64 v100; // x26
  int v101; // w8
  __int64 v102; // x24
  unsigned int v103; // w28
  __int64 v104; // x25
  __int64 v105; // x19
  __int64 v106; // x26
  int32_t v107; // w19
  int32_t v108; // w26
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  bool v112; // w8
  int32_t v113; // w22
  EventServantPointRankMaster_o *v114; // x23
  UserServantEntity_o *v115; // x8
  __int128 v116; // q0
  UserEventServantPointMaster_o *v117; // x24
  int64_t v118; // x25
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v120; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v123; // x2
  UserServantEntity_o *v124; // x8
  __int128 v125; // q0
  Il2CppObject *v126; // x22
  UserServantEntity_o *v127; // x8
  __int128 v128; // q0
  __int64 v129; // x23
  PartyOrganizationListViewItem_o *v130; // x0
  int32_t v131; // w1
  const MethodInfo *v132; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+90h] [xbp-B0h]
  UserEventServantPointEntity_o *v138; // [xsp+B8h] [xbp-88h] BYREF
  QuestPhaseEntity_o *v139; // [xsp+C0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+CCh] [xbp-74h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+D0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16

  if ( (byte_4C3341D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3341D = 1;
  }
  entity = 0;
  recoverAt = 0;
  isWhole = 0;
  v138 = 0;
  v139 = 0;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v28, v29);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v30,
    v31);
  this->fields.followerInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v32, v33);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v34, v35);
  this->fields._EquipFriendShipSkillChange_k__BackingField = isChangeFriendShipSvtEquipSkill;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v40 = *(_QWORD *)&v37[5].fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v143.fields.currentCryptoKey = v40;
  *(_QWORD *)&v143.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v143, 0);
  if ( !v38 )
    goto LABEL_153;
  v41 = DataMasterBase_object__object__int___GetEntity(
          v38,
          Instance,
          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v41;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v41, v43, v44);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v45 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userServantEntity)[5], 0);
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v46 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userServantEntity)[6], 0);
  if ( !v45 )
    goto LABEL_153;
  ServantLimitMaster__GetEntity(v45, v46, Instance, 0);
  if ( initPos )
    v49 = initPos;
  else
    v49 = index + 1;
  this->fields._InitPos_k__BackingField = v49;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v50 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0)) == 0 )
  {
    v55 = 0;
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1C32BC4((CGThumbnailListItem_o *)p_equipSvtIdList, v55, v47, v48);
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
    v57 = *(_DWORD *)(Instance + 40);
    this->fields.actualRarity = v57;
    Instance = UserServantEntity__GetFrameType(userServantEntity, v57, 0);
    v58 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v58 )
      goto LABEL_153;
    v60 = *(_QWORD *)&v58->fields.limitCount.fields.currentCryptoKey;
    v59 = *(_QWORD *)&v58->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v144.fields.currentCryptoKey = v60;
    *(_QWORD *)&v144.fields.fakeValue = v59;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v144, 0);
    v61 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v61 )
      goto LABEL_153;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v61, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v63, v64);
    v65 = this->fields.questRestrictionInfo;
    if ( v65 )
    {
      v66 = this->fields.userServantEntity;
      if ( !v66 )
        goto LABEL_153;
      v68 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v145.fields.currentCryptoKey = v68;
      *(_QWORD *)&v145.fields.fakeValue = v67;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v145, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v69 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784((*p_userServantEntity)[6], 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v70 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      Instance = QuestRestrictionInfo__IsRestriction_43321100(
                   v65,
                   &this->fields.isQuestRestrictionWhole,
                   v69,
                   v70,
                   Instance,
                   this->fields.rarityId,
                   (*p_userServantEntity)[16].fields.currentCryptoKey,
                   this->fields._InitPos_k__BackingField,
                   1,
                   0);
      v71 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v71 )
      {
        v72 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_153;
        v74 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
        v73 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v146.fields.currentCryptoKey = v74;
        *(_QWORD *)&v146.fields.fakeValue = v73;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v146, 0);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v71, v75, 0);
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
    v78 = this->fields.questRestrictionInfo;
    if ( !v78 )
      goto LABEL_152;
    if ( v78->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_153;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_153;
      v79 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v80 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v83 = *(_QWORD *)&v79->fields.svtId.fields.currentCryptoKey;
      v82 = *(_QWORD *)&v79->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v147.fields.currentCryptoKey = v83;
      *(_QWORD *)&v147.fields.fakeValue = v82;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v147, 0);
      if ( !v80 )
        goto LABEL_153;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v80,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0);
      if ( (Instance & 1) != 0 )
      {
        v84 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0);
        if ( v84 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v85 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_153;
    if ( v85->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v85->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_153;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v87 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v88 = (UserEventAlloutBattleMaster_o *)Instance;
      v90 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
      v89 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v148.fields.currentCryptoKey = v90;
      *(_QWORD *)&v148.fields.fakeValue = v89;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v148, 0);
      if ( !*p_questRestrictionInfo || !v88 )
        goto LABEL_153;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v88,
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
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
        v92 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_153;
        v93 = entity;
        v95 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
        v94 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v149.fields.currentCryptoKey = v95;
        *(_QWORD *)&v149.fields.fakeValue = v94;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v149, 0);
        if ( !v93 )
          goto LABEL_153;
        Instance = UserEventDataLostEntity__IsRestart(v93, Instance, 0);
        v96 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_153;
        v97 = Instance;
        v98 = entity;
        v100 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
        v99 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v150.fields.currentCryptoKey = v100;
        *(_QWORD *)&v150.fields.fakeValue = v99;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v150, 0);
        if ( !v98 )
          goto LABEL_153;
        if ( (v97 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v98, Instance, 0);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v98, Instance, 0);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             0) )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_153;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_153;
        v101 = *(_DWORD *)(Instance + 24);
        v102 = Instance;
        if ( v101 >= 1 )
        {
          v103 = 0;
          while ( 1 )
          {
            if ( v103 >= v101 )
              goto LABEL_154;
            v104 = *(_QWORD *)(v102 + 8LL * (int)v103 + 32);
            if ( !v104 )
              goto LABEL_153;
            v106 = *(_QWORD *)(v104 + 80);
            v105 = *(_QWORD *)(v104 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v151.fields.currentCryptoKey = v106;
            *(_QWORD *)&v151.fields.fakeValue = v105;
            v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v151, 0);
            v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v104 + 96),
                     0);
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v104, 0, 0);
            ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                     questRestrictionInfo,
                                     v107,
                                     v108,
                                     DispLimitCount,
                                     0);
            Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v104, 0);
            Instance = QuestRestrictionInfo__IsRestriction_43321380(
                         questRestrictionInfo,
                         &isWhole,
                         ServantIndividuality,
                         Rarity,
                         *(_DWORD *)(v104 + 256),
                         this->fields._InitPos_k__BackingField,
                         1,
                         0);
            if ( (Instance & 1) == 0 )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_43343396(
                           questRestrictionInfo,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0);
              if ( (Instance & 1) == 0 )
                break;
            }
            v101 = *(_DWORD *)(v102 + 24);
            if ( (int)++v103 >= v101 )
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
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !Instance )
          goto LABEL_153;
        Instance = QuestPhaseMaster__TryGetEntity(
                     (QuestPhaseMaster_o *)Instance,
                     &v139,
                     questRestrictionInfo->fields.questId,
                     questRestrictionInfo->fields.questPhase,
                     0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v139;
          if ( !v139 )
            goto LABEL_153;
          Instance = QuestPhaseEntity__IsUseGrandBoard(v139, 0);
          v112 = (Instance & 1) != 0 && this->fields._IsGrandServant_k__BackingField;
          this->fields._IsUseGrandBoard_k__BackingField = v112;
        }
      }
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_153;
    v113 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_153;
    v114 = (EventServantPointRankMaster_o *)Instance;
    Instance = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v113, 0);
    if ( (Instance & 1) != 0 )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v115 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v116 = *(_OWORD *)&v115->fields.userId.fields.fakeValue;
      v117 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v115->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v137.fields.fakeValue = v116;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v136 = v137;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v136, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v118 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0);
      if ( !v117 )
        goto LABEL_153;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v117, &v138, v118, v113, Instance, 0) )
      {
        Instance = (__int64)v138;
        if ( !v138 )
          goto LABEL_153;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v138, 0);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v120 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v114, v113, v120, SvtId, 0);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v113, v123);
    }
    v124 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_153;
    v125 = *(_OWORD *)&v124->fields.id.fields.fakeValue;
    *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v124->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v137.fields.fakeValue = v125;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v135 = v137;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v135, 0) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v126 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1C32CC8(long___TypeInfo, 1);
      v127 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v128 = *(_OWORD *)&v127->fields.id.fields.fakeValue;
      v129 = Instance;
      *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&v127->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v137.fields.fakeValue = v128;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v134 = v137;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v134, 0);
      if ( !v129 )
        goto LABEL_153;
      if ( !*(_DWORD *)(v129 + 24) )
LABEL_154:
        sub_1C32E84(Instance);
      *(_QWORD *)(v129 + 32) = Instance;
      if ( !v126 )
        goto LABEL_153;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v126,
              (System_Int64_array *)v129,
              (const MethodInfo_3398370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
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
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v77);
      return;
    }
LABEL_153:
    sub_1C32E7C(Instance);
  }
  v51 = v50;
  v52 = (struct System_Int32_array *)sub_1C32D5C(v50, int___TypeInfo);
  if ( v52 )
  {
    this->fields.equipSvtIdList = v52;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v54 = sub_1C32D5C(v51, int___TypeInfo);
    if ( v54 )
    {
      v55 = v54;
      goto LABEL_21;
    }
  }
  v130 = (PartyOrganizationListViewItem_o *)sub_1C3313C(v51);
  PartyOrganizationListViewItem__SetCanGetBuddyPoint(v130, v131, v132);
}


void PartyOrganizationListViewItem___ctor_34144300(
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
  int v34; // w8
  void *v35; // x22
  unsigned int v36; // w26
  __int64 v37; // x23
  __int64 v38; // x24
  __int64 v39; // x25
  int32_t v40; // w24
  int32_t v41; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  bool v45; // w8
  const MethodInfo *v46; // x2
  struct QuestRestrictionInfo_o *v47; // x8
  int32_t eventId; // w21
  QuestPhaseEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  bool isWhole; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v13 = isFollower;
  if ( (byte_4C3341F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3341F = 1;
  }
  isWhole = 0;
  entity = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v17, v18, v19);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v20, v21);
  this->fields.followerInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
  this->fields.isFollower = v13;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerGrandGraphId = 0;
  this->fields.followerClassId = 0;
  this->fields.setupInfo = setupInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.servantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v28, v29);
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
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(questRestrictionInfo, v32, 0) )
  {
    this->fields.frameType = 9;
    this->fields.isMyServantOrNpcRestriction = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_49;
    v34 = *((_DWORD *)Instance + 6);
    v35 = Instance;
    if ( v34 >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( v36 >= v34 )
          sub_1C32E84(Instance);
        v37 = *((_QWORD *)v35 + (int)v36 + 4);
        this->fields._IsGrandServant_k__BackingField = 0;
        this->fields._IsUseGrandBoard_k__BackingField = 0;
        if ( !v37 )
          goto LABEL_49;
        v39 = *(_QWORD *)(v37 + 80);
        v38 = *(_QWORD *)(v37 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = v39;
        *(_QWORD *)&v53.fields.fakeValue = v38;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v53, 0);
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v37 + 96),
                0);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v37, 0, 0);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v40,
                                 v41,
                                 DispLimitCount,
                                 0);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v37, 0);
        Instance = (void *)QuestRestrictionInfo__IsRestriction_43321380(
                             questRestrictionInfo,
                             &isWhole,
                             ServantIndividuality,
                             Rarity,
                             *(_DWORD *)(v37 + 256),
                             this->fields._InitPos_k__BackingField,
                             1,
                             0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43343396(
                               questRestrictionInfo,
                               ServantIndividuality,
                               this->fields._InitPos_k__BackingField,
                               0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            break;
        }
        v34 = *((_DWORD *)v35 + 6);
        if ( (int)++v36 >= v34 )
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    v45 = QuestPhaseEntity__IsUseGrandBoard(entity, 0) && this->fields._IsGrandServant_k__BackingField;
    this->fields._IsUseGrandBoard_k__BackingField = v45;
  }
LABEL_39:
  this->fields.commandCodeIdList = 0;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v30, v31);
  this->fields.fatigureTime = -1;
  v47 = this->fields.questRestrictionInfo;
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
  if ( !v47 )
    goto LABEL_45;
  eventId = v47->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_49:
    sub_1C32E7C(Instance);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v46);
  }
LABEL_45:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v46);
}


void PartyOrganizationListViewItem___ctor_34145636(
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
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ServantEntity_o *v36; // x8
  DataManager_o *v37; // x24
  struct ServantEntity_o *servantEntity; // x8
  int32_t m_CancellationTokenSource; // w8
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  int v43; // w9

  if ( (byte_4C33420 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33420 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v20, v21, v22);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v23, v24);
  this->fields.questRestrictionInfo = questRestriction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestriction, v25, v26);
  this->fields.followerInfo = follower;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v27, v28);
  this->fields.setupInfo = eventUpValSetupInfo;
  *(_WORD *)&this->fields.isFollower = follower != 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)eventUpValSetupInfo, v29, v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v34, v35);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0);
  v36 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_15;
  v37 = Instance;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                v36,
                                this->fields.imageLimitCount,
                                0);
  servantEntity = this->fields.servantEntity;
  this->fields.imageLimitCount = (int)Instance;
  if ( !servantEntity
    || (this->fields.classId = servantEntity->fields.classId, !v37)
    || (m_CancellationTokenSource = (int32_t)v37->fields.m_CancellationTokenSource,
        this->fields.rarityId = m_CancellationTokenSource,
        this->fields.actualRarity = m_CancellationTokenSource,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0 )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_42582276(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             isGrandServant,
                             0);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v40, v41);
  v43 = initPosition;
  this->fields.fatigureTime = -1;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  *(_WORD *)&this->fields.isRestrictionServantPos = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  if ( !initPosition )
    v43 = index + 1;
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
  this->fields._InitPos_k__BackingField = v43;
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v42);
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
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x20
  Il2CppObject *v9; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  _BOOL8 v11; // x0
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v15; // x19
  __int64 v16; // x20
  int32_t v17; // w1
  Il2CppObject *v18; // x0
  struct UserServantEntity_o *v19; // x8
  UserServantMaster_o *v20; // x25
  __int64 v21; // x19
  __int64 v22; // x20
  __int64 v23; // x0
  UserServantEntity_o *HeroineData; // x0
  int32_t eventId; // w25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w26
  Il2CppObject *v29; // x0
  EventMargeItemUpValInfo_o *v30; // x26
  __int64 OnlyMaxFuncGroupId; // x0
  int32_t v32; // w27
  Il2CppObject *Entity; // x0
  DataManager_c **v34; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x28
  PartyOrganizationListViewItem___c_c *v36; // x8
  System_Func_object__object__o *_9__357_0; // x20
  Il2CppObject *v38; // x29
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x29
  PartyOrganizationListViewItem___c_c *v43; // x8
  System_Func_object__bool__o *_9__357_1; // x20
  Il2CppObject *v45; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x29
  PartyOrganizationListViewItem___c_c *v50; // x8
  System_Func_object__object__o *_9__357_2; // x20
  Il2CppObject *v52; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x28
  PartyOrganizationListViewItem___c_c *v57; // x8
  System_Func_object__bool__o *_9__357_3; // x20
  Il2CppObject *v59; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x20
  __int64 FriendshipBonusValue; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_List_object__o *v67; // x0
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x8
  EventQuestMaster_o *v72; // [xsp+8h] [xbp-B8h]
  Il2CppObject *Master_object; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  v4 = &DataManager_TypeInfo;
  if ( (byte_4C33451 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Single_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C32C20(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C32C20(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_0__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_1__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_2__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_3__);
    sub_1C32C20(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33451 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v6 )
    sub_1C32E7C(Instance);
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)v6,
                                                                         (int64_t)Instance[7].klass,
                                                                         0);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventQuestMaster___);
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( FriendshipUpCampaigns )
  {
    v72 = (EventQuestMaster_o *)v9;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      FriendshipUpCampaigns,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v77 = v76;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v77,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v11 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v77,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          return;
        }
        current = (EventCampaignEntity_o *)v77.fields._current;
        if ( !v77.fields._current )
          sub_1C32E7C(v11);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v77.fields._current[2].monitor;
        if ( !monitor || !monitor[1].monitor )
          goto LABEL_29;
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C32E7C(v11);
        v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v15;
        *(_QWORD *)&v78.fields.fakeValue = v16;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v78, 0);
        if ( System_Linq_Enumerable__Contains_int_(
               monitor,
               v17,
               (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
LABEL_29:
          if ( !(*v4)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v4);
          v18 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
          v19 = this->fields.userServantEntity;
          if ( !v19 )
            sub_1C32E7C(v18);
          v20 = (UserServantMaster_o *)v18;
          v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
          v22 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v21;
          *(_QWORD *)&v79.fields.fakeValue = v22;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v79, 0);
          if ( !v20 )
            sub_1C32E7C(v23);
          HeroineData = UserServantMaster__getHeroineData(v20, v23, 0);
          if ( !HeroineData
            || (HeroineData = (UserServantEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0),
                ((unsigned __int8)HeroineData & 1) != 0) )
          {
            eventId = current->fields.eventId;
            if ( !isQuestStart )
              break;
            questRestrictionInfo = this->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              sub_1C32E7C(HeroineData);
            questId = questRestrictionInfo->fields.questId;
            questPhase = questRestrictionInfo->fields.questPhase;
            v29 = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !v29 )
              sub_1C32E7C(0);
            if ( !v72 )
              sub_1C32E7C(v29);
            if ( !EventQuestMaster__IsEventNotIncluded(v72, eventId, questId, questPhase, 7, (int64_t)v29[7].klass, 0) )
              break;
          }
        }
      }
      v30 = (EventMargeItemUpValInfo_o *)sub_1C32E6C(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_41618368(v30, eventId, 0);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId(current, 0);
      if ( !v10 )
        sub_1C32E7C(OnlyMaxFuncGroupId);
      v32 = OnlyMaxFuncGroupId;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v10,
                 eventId,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C32E7C(0);
      v34 = v4;
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)Entity[7].monitor;
      if ( !v35 )
        sub_1C32E7C(Entity);
      if ( !v35[1].monitor )
        break;
      v36 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v36 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_0 = (System_Func_object__object__o *)v36->static_fields->__9__357_0;
      if ( !_9__357_0 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v36->static_fields->__9;
        _9__357_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__357_0,
          v38,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_0__,
          0);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__357_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__357_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__357_0, (int32_t)_9__357_0, v40, v41);
      }
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v35,
                                                                   (System_Func_TSource__TResult__o *)_9__357_0,
                                                                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v43 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v43 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_1 = (System_Func_object__bool__o *)v43->static_fields->__9__357_1;
      if ( !_9__357_1 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__357_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__357_1,
          v45,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_1__,
          0);
        v46 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v46->__9__357_1 = (struct System_Func_string__bool__o *)_9__357_1;
        sub_1C32BC4((CGThumbnailListItem_o *)&v46->__9__357_1, (int32_t)_9__357_1, v47, v48);
      }
      v49 = System_Linq_Enumerable__Single_object__51482796(
              v42,
              (System_Func_TSource__bool__o *)_9__357_1,
              (const MethodInfo_31190AC *)Method_System_Linq_Enumerable_Single_string___);
      if ( !v35[1].monitor )
        goto LABEL_61;
      v50 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v50 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_2 = (System_Func_object__object__o *)v50->static_fields->__9__357_2;
      if ( !_9__357_2 )
      {
        if ( !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v50 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v52 = (Il2CppObject *)v50->static_fields->__9;
        _9__357_2 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__357_2,
          v52,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_2__,
          0);
        v53 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v53->__9__357_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__357_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v53->__9__357_2, (int32_t)_9__357_2, v54, v55);
      }
      v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v35,
                                                                   (System_Func_TSource__TResult__o *)_9__357_2,
                                                                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v57 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v57 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__357_3 = (System_Func_object__bool__o *)v57->static_fields->__9__357_3;
      if ( !_9__357_3 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v59 = (Il2CppObject *)v57->static_fields->__9;
        _9__357_3 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__357_3,
          v59,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_3__,
          0);
        v60 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v60->__9__357_3 = (struct System_Func_string__bool__o *)_9__357_3;
        sub_1C32BC4((CGThumbnailListItem_o *)&v60->__9__357_3, (int32_t)_9__357_3, v61, v62);
      }
      v63 = System_Linq_Enumerable__Single_object__51482796(
              v56,
              (System_Func_TSource__bool__o *)_9__357_3,
              (const MethodInfo_31190AC *)Method_System_Linq_Enumerable_Single_string___);
LABEL_62:
      v4 = v34;
      FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
      v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !v30 )
        sub_1C32E7C(FriendshipBonusValue);
      EventMargeItemUpValInfo__SetFriendshipUpBonus_41618472(
        v30,
        eventId,
        FriendshipBonusValue,
        v32,
        (System_String_o *)v49,
        (System_String_o *)v63,
        current->fields.calcType,
        0);
      v67 = (System_Collections_Generic_List_object__o *)*infoList;
      if ( !*infoList )
        sub_1C32E7C(0);
      items = v67->fields._items;
      v69 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v67->fields._version;
      if ( !items )
        sub_1C32E7C(v67);
      size = v67->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v67,
          (Il2CppObject *)v30,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &items->obj.klass + size;
        v67->fields._size = size + 1;
        v71[4] = (Il2CppClass *)v30;
        sub_1C32BC4((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v30, v65, v66);
      }
    }
    v49 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_61:
    v63 = (Il2CppObject *)StringLiteral_1/*""*/;
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

  if ( (byte_4C33453 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_GroupBy_long__long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
    sub_1C32C20(&System_Func_long__long__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_long__long___long__TypeInfo);
    sub_1C32C20(&System_Func_IGrouping_long__long___bool__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_0__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_1__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_2__);
    sub_1C32C20(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4C33453 = 1;
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
    _9__361_0 = (System_Func_long__long__o *)sub_1C32E6C(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__361_0,
      v7,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_0__,
      0);
    static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__361_0 = _9__361_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__361_0, (int32_t)_9__361_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__GroupBy_long__long_(
          equipIdList,
          (System_Func_TSource__TKey__o *)_9__361_0,
          (const MethodInfo_31076A8 *)Method_System_Linq_Enumerable_GroupBy_long__long___);
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
    _9__361_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_IGrouping_long__long___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__361_1,
      v15,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_1__,
      0);
    v16 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v16->__9__361_1 = (struct System_Func_IGrouping_long__long___bool__o *)_9__361_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v16->__9__361_1, (int32_t)_9__361_1, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)_9__361_1,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
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
    _9__361_2 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_IGrouping_long__long___long__TypeInfo);
    System_Func_object__long____ctor(
      _9__361_2,
      v23,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_2__,
      0);
    v24 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v24->__9__361_2 = (struct System_Func_IGrouping_long__long___long__o *)_9__361_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v24->__9__361_2, (int32_t)_9__361_2, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v21,
                                                               (System_Func_TSource__TResult__o *)_9__361_2,
                                                               (const MethodInfo_31137C8 *)Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
  return System_Linq_Enumerable__ToArray_long_(
           v27,
           (const MethodInfo_311CA04 *)Method_System_Linq_Enumerable_ToArray_long___);
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
  struct UserServantEntity_o *v11; // x8
  int32_t v12; // w23
  int32_t v13; // w24
  struct UserServantEntity_o *v14; // x8
  const MethodInfo *v15; // x2
  struct UserServantEntity_o *v16; // x8
  QuestRestrictionInfo_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w23
  int32_t v22; // w24
  const MethodInfo *v23; // x1
  QuestRestrictionInfo_o *v24; // x22
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t v27; // w23
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  int32_t limitCount; // w24
  int32_t DispLimitCount; // w0
  int32_t rarityId; // w25
  int32_t v33; // w26
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v37; // x23
  __int64 v38; // x24
  int32_t v39; // w23
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  int32_t v42; // w24
  UserServantEntity_o *v43; // x8
  bool IsUniqueIndividualityRestriction_43073808; // w0
  const MethodInfo *v45; // x1
  QuestRestrictionInfo_o *v46; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // kr00_16
  int32_t v48; // w0
  int32_t v49; // w27
  int32_t v50; // w28
  const MethodInfo *v51; // x1
  int32_t DispImageLimitCount; // w0
  struct QuestRestrictionInfo_o *v53; // x8
  FollowerInfo_o *followerInfo; // x22
  System_Int32_array *NpcServantIndividualityFull; // x0
  QuestRestrictionInfo_o *v56; // x24
  int32_t v57; // w23
  System_Int32_array *v58; // x22
  const MethodInfo *v59; // x1
  int32_t followerIndex; // w22
  FollowerInfo_o *v61; // x24
  struct QuestRestrictionInfo_o *v62; // x23
  int32_t v63; // w5
  int32_t followerGrandGraphId; // w8
  int32_t v65; // w22
  FollowerInfo_o *v66; // x24
  struct QuestRestrictionInfo_o *v67; // x23
  int32_t v68; // w5
  bool IsUniqueIndividualityRestriction_41650648; // w0
  const MethodInfo *v70; // x1
  QuestRestrictionInfo_o *v71; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_43327472; // w0
  QuestRestrictionInfo_o *v74; // x8
  const MethodInfo *v75; // x1
  QuestRestrictionInfo_o *v76; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v78; // w0
  int32_t svtLimitCount; // w22
  int32_t v80; // w23
  const MethodInfo *v81; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_4C3342D & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3342D = 1;
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
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v23);
      if ( !userServantEntity )
        goto LABEL_92;
      v26 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v84.fields.currentCryptoKey = v26;
      *(_QWORD *)&v84.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v84, 0);
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v28);
      if ( !userServantEntity )
        goto LABEL_92;
      limitCount = userServantEntity->fields.limitCount;
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v29);
      if ( !userServantEntity )
        goto LABEL_92;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(userServantEntity, 0);
      rarityId = this->fields.rarityId;
      v33 = DispLimitCount;
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v34);
      if ( !userServantEntity )
        goto LABEL_92;
      userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43321100(
                                                   v24,
                                                   &this->fields.isQuestRestrictionWhole,
                                                   v27,
                                                   limitCount,
                                                   v33,
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
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(
                                                     (QuestRestrictionInfo_o *)userServantEntity,
                                                     this->fields._InitPos_k__BackingField,
                                                     0);
        if ( ((unsigned __int8)userServantEntity & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v35);
          if ( !userServantEntity )
            goto LABEL_92;
          v38 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v37 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v85.fields.currentCryptoKey = v38;
          *(_QWORD *)&v85.fields.fakeValue = v37;
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v85, 0);
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v40);
          if ( !userServantEntity )
            goto LABEL_92;
          v42 = userServantEntity->fields.limitCount;
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v41);
          if ( !userServantEntity )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)ServantLeaderInfo__getDispLimitCount(userServantEntity, 0);
          if ( !questRestrictionInfo )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                       questRestrictionInfo,
                                                       v39,
                                                       v42,
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
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v23);
      if ( !userServantEntity )
        goto LABEL_62;
      userServantEntity = (ServantLeaderInfo_o *)this->fields.followerInfo;
      if ( !userServantEntity )
        goto LABEL_92;
      userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__get_IsNpc((FollowerInfo_o *)userServantEntity, 0);
      if ( ((unsigned __int8)userServantEntity & 1) != 0 && (v53 = this->fields.questRestrictionInfo) != 0 )
      {
        followerInfo = this->fields.followerInfo;
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0);
        if ( !followerInfo )
          goto LABEL_92;
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(
                                        followerInfo,
                                        0,
                                        (int32_t)userServantEntity,
                                        0);
        v56 = this->fields.questRestrictionInfo;
        v57 = this->fields.rarityId;
        v58 = NpcServantIndividualityFull;
        userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v59);
        if ( !userServantEntity || !v56 )
          goto LABEL_92;
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43321380(
                                                     v56,
                                                     &this->fields.isQuestRestrictionWhole,
                                                     v58,
                                                     v57,
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
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(
                                                       (QuestRestrictionInfo_o *)userServantEntity,
                                                       this->fields._InitPos_k__BackingField,
                                                       0);
          if ( ((unsigned __int8)userServantEntity & 1) != 0 )
          {
            userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !userServantEntity )
              goto LABEL_92;
            userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43343396(
                                                         (QuestRestrictionInfo_o *)userServantEntity,
                                                         v58,
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
    v61 = this->fields.followerInfo;
    v62 = this->fields.questRestrictionInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      if ( v62 )
      {
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v62->fields.questId, 0);
        v63 = (int)userServantEntity;
        if ( !v61 )
          goto LABEL_92;
      }
      else
      {
        v63 = 0;
        if ( !v61 )
          goto LABEL_92;
      }
    }
    else
    {
      v63 = 2;
      if ( !v61 )
        goto LABEL_92;
    }
    userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_41650456(
                                                 v61,
                                                 v62,
                                                 followerIndex,
                                                 partyItem,
                                                 num,
                                                 v63,
                                                 0);
    followerGrandGraphId = this->fields.followerGrandGraphId;
    v65 = this->fields.followerIndex;
    v66 = this->fields.followerInfo;
    v67 = this->fields.questRestrictionInfo;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)userServantEntity & 1;
    if ( followerGrandGraphId <= 0 )
    {
      if ( v67 )
      {
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v67->fields.questId, 0);
        v68 = (int)userServantEntity;
        if ( !v66 )
          goto LABEL_92;
      }
      else
      {
        v68 = 0;
        if ( !v66 )
          goto LABEL_92;
      }
    }
    else
    {
      v68 = 2;
      if ( !v66 )
        goto LABEL_92;
    }
    IsUniqueIndividualityRestriction_41650648 = FollowerInfo__IsUniqueIndividualityRestriction_41650648(
                                                  v66,
                                                  v67,
                                                  v65,
                                                  partyItem,
                                                  num,
                                                  v68,
                                                  0);
    v71 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41650648;
    if ( v71 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v70);
      IsFixedSupportPosition_43327472 = QuestRestrictionInfo__IsFixedSupportPosition_43327472(
                                          v71,
                                          num,
                                          ServantLeader,
                                          0);
      v74 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_43327472;
      if ( v74 )
      {
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsUseOldMaster(v74, 0);
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
          v76 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, v75);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(SvtId, 0);
          svtLimitCount = this->fields.svtLimitCount;
          v80 = v78;
          userServantEntity = (ServantLeaderInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v81);
          if ( v76 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v76,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v80,
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
    *(_QWORD *)&v82.fields.currentCryptoKey = v10;
    *(_QWORD *)&v82.fields.fakeValue = v9;
    userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                 v82,
                                                 0);
    v11 = this->fields.userServantEntity;
    if ( v11 )
    {
      v12 = (int)userServantEntity;
      userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                   v11->fields.limitCount,
                                                   0);
      if ( this->fields.userServantEntity )
      {
        v13 = (int)userServantEntity;
        userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(
                                                     this->fields.userServantEntity,
                                                     0,
                                                     0);
        v14 = this->fields.userServantEntity;
        if ( v14 )
        {
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43321100(
                                                       v8,
                                                       &this->fields.isQuestRestrictionWhole,
                                                       v12,
                                                       v13,
                                                       (int32_t)userServantEntity,
                                                       this->fields.rarityId,
                                                       v14->fields.lv,
                                                       this->fields._InitPos_k__BackingField,
                                                       1,
                                                       0);
          this->fields.isQuestRestriction = (unsigned __int8)userServantEntity & 1;
          if ( ((unsigned __int8)userServantEntity & 1) != 0 )
            goto LABEL_18;
          v16 = this->fields.userServantEntity;
          if ( v16 )
          {
            v17 = this->fields.questRestrictionInfo;
            v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v83.fields.currentCryptoKey = v19;
            *(_QWORD *)&v83.fields.fakeValue = v18;
            userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                         v83,
                                                         0);
            v20 = this->fields.userServantEntity;
            if ( v20 )
            {
              v21 = (int)userServantEntity;
              userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                           v20->fields.limitCount,
                                                           0);
              if ( this->fields.userServantEntity )
              {
                v22 = (int)userServantEntity;
                userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(
                                                             this->fields.userServantEntity,
                                                             0,
                                                             0);
                if ( v17 )
                {
                  this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                      v17,
                                                      v21,
                                                      v22,
                                                      (int32_t)userServantEntity,
                                                      this->fields._InitPos_k__BackingField,
                                                      0,
                                                      0);
LABEL_18:
                  PartyOrganizationListViewItem__SetDuplicationGrandQuestEquipmentMarkFlag(this, partyItem, v15);
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
    sub_1C32E7C(userServantEntity);
  }
  *(_WORD *)&this->fields.isQuestRestriction = 0;
LABEL_42:
  userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_43073428(
                                               (UserServantEntity_o *)userServantEntity,
                                               this->fields.questRestrictionInfo,
                                               partyItem,
                                               num,
                                               -1,
                                               0);
  v43 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)userServantEntity & 1;
  if ( !v43 )
    goto LABEL_92;
  IsUniqueIndividualityRestriction_43073808 = UserServantEntity__IsUniqueIndividualityRestriction_43073808(
                                                v43,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0);
  v46 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_43073808;
  if ( v46 )
  {
    v47 = PartyOrganizationListViewItem__get_SvtId(this, v45);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v47, 0);
    v49 = this->fields.svtLimitCount;
    v50 = v48;
    DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v51);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v46,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v50,
      v49,
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
  const MethodInfo *v4; // x2
  int32_t v5; // w20
  struct System_Int64_array *v6; // x1

  v2 = this;
  if ( (byte_4C3342C & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C3342C = 1;
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
        v5 = 0;
      }
      else
      {
        this = (PartyOrganizationListViewItem_o *)v2->fields.equipServantEntityList;
        if ( !this )
          goto LABEL_17;
        this = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    0,
                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
        if ( !this )
          goto LABEL_17;
        v5 = (int32_t)this->fields.equipIdList;
      }
      v6 = v2->fields.equipIdList;
      if ( v6 )
      {
        if ( LODWORD(v6->max_length) )
        {
          v6->m_Items[0] = 0;
          PartyOrganizationListViewItem__SetEquipStatus(v2, v6, v4);
          return v5;
        }
LABEL_16:
        sub_1C32E84(this);
      }
LABEL_17:
      sub_1C32E7C(this);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v2, v3);
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
  const MethodInfo *v9; // x2

  if ( (byte_4C33421 & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationListViewItem_TypeInfo);
    byte_4C33421 = 1;
  }
  index = idx;
  if ( idx < 0 )
    index = this->fields.index;
  v6 = (PartyOrganizationListViewItem_o *)sub_1C32E6C(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor(v6, index, v7);
  if ( !v6 )
    sub_1C32E7C(v8);
  PartyOrganizationListViewItem__Set(v6, this, v9);
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
  if ( (byte_4C3342F & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3342F = 1;
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
              sub_1C32E84(this);
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
    this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                &v17,
                                                0);
    v9 = item->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      v11 = this;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v10;
      this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                  &v16,
                                                  0);
      if ( v11 != this )
        return 0;
      goto LABEL_15;
    }
LABEL_29:
    sub_1C32E7C(this);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v5, v6);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0;
  *(_QWORD *)&this->fields.followerIndex = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  HIDWORD(this->fields.equipIdList) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  *(_QWORD *)&this->fields.rarityId = 0;
  *(_QWORD *)&this->fields.frameType = 9;
  this->fields.commandCodeIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
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

  if ( (byte_4C33450 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33450 = 1;
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
                                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipServantEntityList )
LABEL_23:
    sub_1C32E7C(equipServantEntityList);
  items = equipServantEntityList[2].fields._items;
  v7 = *(_QWORD *)&equipServantEntityList[2].fields._size;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = items;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  EquipLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v16, 0);
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
  UserServantEntity_o *v7; // x8
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t v10; // w0
  int32_t v11; // w1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v17; // w21
  FollowerInfo_o *v18; // x22
  int32_t v19; // w20
  int32_t v20; // w2
  struct QuestRestrictionInfo_o *v21; // x8
  int32_t CardImageLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C33447 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&UINarrowFigureRender_TypeInfo);
    byte_4C33447 = 1;
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
    v17 = this->fields.followerIndex;
    v18 = this->fields.followerInfo;
    v19 = SvtId;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      v21 = this->fields.questRestrictionInfo;
      if ( v21 )
      {
        SvtId = FollowerInfo__GetReturnTypeByQuestId(v21->fields.questId, 0);
        v20 = SvtId;
        if ( !v18 )
          goto LABEL_27;
      }
      else
      {
        v20 = 0;
        if ( !v18 )
          goto LABEL_27;
      }
    }
    else
    {
      v20 = 2;
      if ( !v18 )
        goto LABEL_27;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v18, v17, v20, 0);
    if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v10 = v19;
    v11 = CardImageLimitCount;
    return UINarrowFigureRender__GetAssetName(v10, v11, 0);
  }
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v5;
  *(_QWORD *)&v23.fields.fakeValue = v4;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v23, 0);
  v7 = this->fields.userServantEntity;
  if ( !v7 )
LABEL_27:
    sub_1C32E7C(SvtId);
  v8 = SvtId;
  v9 = UserServantEntity__getCardImageLimitCount(v7, 0, 0);
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  v10 = v8;
  v11 = v9;
  return UINarrowFigureRender__GetAssetName(v10, v11, 0);
}


System_Collections_Generic_List_UserServantGrandEntity__o *PartyOrganizationListViewItem__GetCanOrganizationGrandSvtIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  Il2CppObject *Master_object; // x0
  System_Collections_ICollection_o *monitor; // x19
  bool IsNullOrEmpty; // w0
  System_Collections_Generic_List_UserServantGrandEntity__o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x23
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_IEnumerator_c **v11; // x22
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v12; // x29
  PartyOrganizationListViewItem___c__DisplayClass365_0_c **v13; // x21
  const MethodInfo_3398DE0 **v14; // x20
  System_Collections_Generic_IEnumerator_T__o *v15; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v17; // x1
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c *v22; // x1
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x24
  __int64 v27; // x25
  __int64 v28; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x19
  const MethodInfo_3398DE0 **v30; // x23
  PartyOrganizationListViewItem___c__DisplayClass365_0_c **v31; // x20
  System_Collections_IEnumerator_c **v32; // x21
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v33; // x22
  QuestRestrictionInfo_o *v34; // x26
  int32_t v35; // w27
  int32_t v36; // w28
  int32_t v37; // w29
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  _BOOL8 IsRestriction_43319868; // x0
  void *v40; // x27
  Il2CppClass *v41; // x28
  QuestRestrictionInfo_o *v42; // x26
  __int64 v43; // x0
  int32_t v44; // w27
  int32_t v45; // w28
  __int64 DispLimitCount; // x0
  System_Int32_array *ServantIndividuality; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  _BOOL8 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Int32_array *targetVals; // x26
  System_Func_int__bool__o *v54; // x27
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  System_Collections_Generic_List_object__o *v64; // [xsp+8h] [xbp-88h]
  RestrictionEntity_o *GrandServantRestrictionEntity; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_IEnumerator_T__o *v66; // [xsp+18h] [xbp-78h]
  PartyOrganizationListViewItem_o *v67; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4C33455 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__DisplayClass365_0__GetCanOrganizationGrandSvtIdList_b__0__);
    sub_1C32C20(&PartyOrganizationListViewItem___c__DisplayClass365_0_TypeInfo);
    byte_4C33455 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_75;
  monitor = (System_Collections_ICollection_o *)Master_object[2].monitor;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(monitor, 0);
  v7 = 0;
  if ( !GrandServantRestrictionEntity || IsNullOrEmpty )
    return v7;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !monitor )
LABEL_75:
    sub_1C32E7C(Master_object);
  v64 = v8;
  v67 = this;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)monitor,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v66 = Enumerator;
  if ( !Enumerator )
    sub_1C32E7C(0);
  v11 = &System_Collections_IEnumerator_TypeInfo;
  v12 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v13 = &PartyOrganizationListViewItem___c__DisplayClass365_0_TypeInfo;
  v14 = (const MethodInfo_3398DE0 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
  v15 = Enumerator;
  while ( 1 )
  {
    klass = v15->klass;
    v17 = *v11;
    v18 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v17 )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v20 = sub_1C83438(v15, v17, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v15,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    v21 = v15->klass;
    v22 = *v12;
    v23 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      v24 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v24 - 1) != v22 )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_25;
      }
      v25 = (__int64)&v21->vtable[*v24];
    }
    else
    {
LABEL_25:
      v25 = sub_1C83438(v15, v22, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            v15,
            *(_QWORD *)(v25 + 8));
    v27 = sub_1C32E6C(*v13);
    PartyOrganizationListViewItem___c__DisplayClass365_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass365_0_o *)v27,
      0);
    if ( !v26 )
      sub_1C32E7C(v28);
    if ( !v9 )
      sub_1C32E7C(v28);
    if ( DataMasterBase_object__object__long___TryGetEntity(v9, &entity, *(_QWORD *)(v26 + 32), *v14) )
    {
      if ( !entity )
        sub_1C32E7C(0);
      v29 = v9;
      v30 = v14;
      v31 = v13;
      v32 = v11;
      v33 = v12;
      v34 = v67->fields.questRestrictionInfo;
      v35 = *(_DWORD *)(v26 + 40);
      v36 = *(_DWORD *)(v26 + 44);
      v37 = *(_DWORD *)(v26 + 48);
      OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
      if ( !OverwriteStatus )
        sub_1C32E7C(0);
      if ( !v34 )
        sub_1C32E7C(OverwriteStatus);
      IsRestriction_43319868 = QuestRestrictionInfo__IsRestriction_43319868(
                                 v34,
                                 v35,
                                 v36,
                                 v37,
                                 OverwriteStatus->fields._Rarity_k__BackingField,
                                 *(_DWORD *)(v26 + 52),
                                 1,
                                 0);
      v12 = v33;
      v11 = v32;
      v13 = v31;
      v14 = v30;
      v9 = v29;
      v15 = v66;
      if ( !IsRestriction_43319868 )
      {
        if ( !entity )
          sub_1C32E7C(IsRestriction_43319868);
        v41 = entity[5].klass;
        v40 = entity[5].monitor;
        v42 = v67->fields.questRestrictionInfo;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v69.fields.currentCryptoKey = v41;
        *(_QWORD *)&v69.fields.fakeValue = v40;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v69, 0);
        if ( !entity )
          sub_1C32E7C(v43);
        v44 = v43;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                0);
        if ( !entity )
          sub_1C32E7C(0);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !v42 )
          sub_1C32E7C(DispLimitCount);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v42, v44, v45, DispLimitCount, 0);
        if ( !v27 )
          sub_1C32E7C(ServantIndividuality);
        *(_QWORD *)(v27 + 16) = ServantIndividuality;
        sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 16), (int32_t)ServantIndividuality, v48, v49);
        v50 = BasicHelper__IsNullOrEmpty(
                (System_Collections_ICollection_o *)GrandServantRestrictionEntity->fields.targetVals,
                0);
        if ( v50 )
          goto LABEL_46;
        targetVals = GrandServantRestrictionEntity->fields.targetVals;
        if ( !targetVals )
          sub_1C32E7C(v50);
        if ( !LODWORD(targetVals->max_length) )
          sub_1C32E84(v50);
        if ( !targetVals->m_Items[0]
          || (v54 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v54,
                (Il2CppObject *)v27,
                Method_PartyOrganizationListViewItem___c__DisplayClass365_0__GetCanOrganizationGrandSvtIdList_b__0__,
                0),
              v50 = BasicHelper__Any_int__51143952(
                      targetVals,
                      (System_Func_T__bool__o *)v54,
                      (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168)) )
        {
LABEL_46:
          if ( !v64 )
            sub_1C32E7C(v50);
          items = v64->fields._items;
          v56 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
          ++v64->fields._version;
          if ( !items )
            sub_1C32E7C(v50);
          size = v64->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v64,
              (Il2CppObject *)v26,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &items->obj.klass + size;
            v64->fields._size = size + 1;
            v58[4] = (Il2CppClass *)v26;
            sub_1C32BC4((CGThumbnailListItem_o *)(v58 + 4), v26, v51, v52);
          }
        }
      }
    }
  }
  v7 = (System_Collections_Generic_List_UserServantGrandEntity__o *)v64;
  if ( v15 )
  {
    v59 = v15->klass;
    v60 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_57;
      }
      v62 = (__int64)&v59->vtable[*v61];
    }
    else
    {
LABEL_57:
      v62 = sub_1C83438(v15, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(v15, *(_QWORD *)(v62 + 8));
  }
  return v7;
}


int32_t PartyOrganizationListViewItem__GetCardImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v9; // x0
  struct QuestRestrictionInfo_o *v10; // x8

  if ( (byte_4C33449 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C33449 = 1;
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
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      return v9->static_fields->OtherImageLimitCount;
    }
    else
    {
LABEL_7:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0),
            result < 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0);
LABEL_23:
        sub_1C32E7C(userServantEntity);
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
        v10 = this->fields.questRestrictionInfo;
        if ( v10 )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v10->fields.questId, 0);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C32E7C(v5);
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
  struct ServantEntity_o *v5; // x8
  struct System_Int32_array *cardIds; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 i; // x9
  unsigned int v9; // w13

  if ( (byte_4C33446 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C33446 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0;
  result = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 3);
  v5 = this->fields.servantEntity;
  if ( !v5 || (cardIds = v5->fields.cardIds) == 0 )
LABEL_15:
    sub_1C32E7C(result);
  max_length_low = LODWORD(cardIds->max_length);
  for ( i = 0; (__int64)i < (int)max_length_low; ++i )
  {
    if ( i >= max_length_low )
      goto LABEL_18;
    v9 = cardIds->m_Items[i] - 1;
    if ( v9 <= 2 )
    {
      if ( !result )
        goto LABEL_15;
      if ( v9 >= LODWORD(result->max_length) )
LABEL_18:
        sub_1C32E84(result);
      ++result->m_Items[v9];
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

  if ( (byte_4C33448 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33448 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(SvtId, 0);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C32E7C(v5);
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
  if ( (byte_4C33454 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C32C20(&StringLiteral_7006/*"GRAND_SERVANT_EQUIP_FRAME_"*/);
    byte_4C33454 = 1;
  }
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    sub_1C32E7C(this);
  max_length = equipIdList->max_length;
  v7 = 0;
  do
  {
    if ( (int)v7 >= (int)max_length )
      return string_TypeInfo->static_fields->Empty;
    if ( v7 >= max_length )
      sub_1C32E84(this);
    v8 = equipIdList->m_Items[v7++];
  }
  while ( v8 != userSvtId );
  v12 = v7;
  v9 = System_Int32__ToString((int32_t)&v12, 0);
  v10 = System_String__Concat_63518544((System_String_o *)StringLiteral_7006/*"GRAND_SERVANT_EQUIP_FRAME_"*/, v9, 0);
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

  if ( (byte_4C33430 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    byte_4C33430 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0);
    if ( result )
    {
      v5 = result;
      result = (System_Int64_array *)sub_1C32D5C(result, long___TypeInfo);
      if ( !result )
      {
        v7 = (PartyOrganizationListViewItem_o *)sub_1C3313C(v5);
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
    return (System_Int64_array *)sub_1C32CC8(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax);
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


int64_t PartyOrganizationListViewItem__GetEquipUserSvtIdByIndex(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x0
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4C3343B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3343B = 1;
  }
  equipUserServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
  if ( !equipUserServantEntityList
    || (equipUserServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    equipUserServantEntityList,
                                                                                    index,
                                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
  {
    sub_1C32E7C(equipUserServantEntityList);
  }
  v6 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v8, 0);
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
  sub_1C32BC4((CGThumbnailListItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4C33445 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33445 = 1;
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

  if ( (byte_4C33444 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33444 = 1;
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

  if ( (byte_4C33452 & 1) == 0 )
  {
    sub_1C32C20(&UserServantGrandInfo_TypeInfo);
    byte_4C33452 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C32E7C(v5);
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

  if ( (byte_4C3344B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3344B = 1;
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

  if ( (byte_4C3344C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3344C = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userServantEntity, 0);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C32E7C(v5);
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
  int32_t InitPos_k__BackingField; // w1

  if ( (byte_4C33441 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10263/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33441 = 1;
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
    sub_1C32E7C(v4);
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
    v4 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10263/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v7 = (System_String_o *)v4;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0);
    return System_String__Concat_63518544(v7, ConfirmRestrictionMessage, 0);
  }
  else
  {
    v4 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
      InitPos_k__BackingField = 0;
    else
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetRestrictionMessage(v4, InitPos_k__BackingField, 0);
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
  Il2CppObject *Master_object; // x20
  struct ServantEntity_o *servantEntity; // x8
  __int64 v12; // x22
  __int64 v13; // x23
  int64_t v14; // x21
  struct ServantEntity_o *v15; // x8
  ServantLimitImageMaster_o *v16; // x19
  __int64 v17; // x21
  __int64 v18; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4C33435 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33435 = 1;
  }
  entity = 0;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v7;
    *(_QWORD *)&v21.fields.fakeValue = v6;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v21, 0);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v14 = *(_QWORD *)(*((_QWORD *)ServantLeader + 23) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v22, 0);
  if ( !Master_object )
LABEL_36:
    sub_1C32E7C(ServantLeader);
  ServantLeader = (void *)UserServantCollectionMaster__TryGetEntity(
                            (UserServantCollectionMaster_o *)Master_object,
                            &entity,
                            v14,
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
  ServantLeader = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v15 = this->fields.servantEntity;
  if ( !v15 )
    goto LABEL_36;
  v16 = (ServantLimitImageMaster_o *)ServantLeader;
  v18 = *(_QWORD *)&v15->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v23, 0);
  if ( !v16 )
    goto LABEL_36;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v16, (int32_t)ServantLeader, maxLimitCount, 0, 0);
}


System_String_o *PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v7; // x0

  if ( (byte_4C33443 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_44/*"\n\n"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_10301/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_4C33443 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10301/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
  return System_String__Concat_63556792(
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

  if ( (byte_4C33442 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33442 = 1;
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

  if ( PartyOrganizationListViewItem__get_AdjustAtk(this, method) > 0 )
    return 1;
  GrandServantInfo = PartyOrganizationListViewItem__GetGrandServantInfo(this, v3);
  if ( !GrandServantInfo )
    sub_1C32E7C(0);
  return UserServantGrandInfo__get_AddedAtk(GrandServantInfo, 0) > 0;
}


bool PartyOrganizationListViewItem__HasHpBoost(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantGrandInfo_o *GrandServantInfo; // x0

  if ( PartyOrganizationListViewItem__get_AdjustHp(this, method) > 0 )
    return 1;
  GrandServantInfo = PartyOrganizationListViewItem__GetGrandServantInfo(this, v3);
  if ( !GrandServantInfo )
    sub_1C32E7C(0);
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
  QuestRestrictionInfo_o *v5; // x0
  struct QuestRestrictionInfo_o *v6; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 1;
  if ( QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0) )
    return !this->fields.isServantNumRestriction
        && !this->fields.isFixMultipleNpcRestriction
        && (!this->fields.isFixMultipleNpc
         || (v6 = this->fields.questRestrictionInfo) != 0 && v6->fields.isNpcEditablePos)
        && !this->fields.isMyServantOrNpcRestriction;
  v5 = this->fields.questRestrictionInfo;
  if ( !v5 )
    sub_1C32E7C(0);
  return QuestRestrictionInfo__IsEditablePos(v5, this->fields._InitPos_k__BackingField, 0);
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
  const MethodInfo_30DD39C **v6; // x22
  int v7; // w23
  bool v8; // w19
  Il2CppObject *current; // x21
  __int64 v10; // x20
  Il2CppObject *Master_object; // x0
  Il2CppObject *v12; // x0
  Il2CppObject *Entity; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_UserServantEntity__o *v16; // x21
  const MethodInfo_30DD39C **v17; // x29
  System_Func_object__bool__o *v18; // x22
  int v19; // w20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C33456 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__DisplayClass366_0__IsEnabledChangeGrandSvt_b__0__);
    sub_1C32C20(&PartyOrganizationListViewItem___c__DisplayClass366_0_TypeInfo);
    byte_4C33456 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
    sub_1C32E7C(IsNullOrEmpty);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)CanOrganizationGrandSvtIdList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
  v6 = (const MethodInfo_30DD39C **)&Method_DataManager_GetMaster_GrandGraphMaster___;
  v7 = 2;
  v22 = v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    if ( !v8 )
      break;
    current = v22.fields._current;
    v10 = sub_1C32E6C(PartyOrganizationListViewItem___c__DisplayClass366_0_TypeInfo);
    PartyOrganizationListViewItem___c__DisplayClass366_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass366_0_o *)v10,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !current )
      sub_1C32E7C(Master_object);
    if ( !Master_object )
      sub_1C32E7C(0);
    if ( UserServantMaster__TryGetEntityListBySvtId(
           (UserServantMaster_o *)Master_object,
           &userServantList,
           (int32_t)current[2].monitor,
           0,
           0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v12 = DataManager__GetMaster_object_(*v6);
      if ( !v12 )
        sub_1C32E7C(0);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                 (int32_t)current[1].monitor,
                 (const MethodInfo_3396838 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
      if ( !v10 )
        sub_1C32E7C(Entity);
      *(_QWORD *)(v10 + 16) = Entity;
      sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Entity, v14, v15);
      v16 = userServantList;
      v17 = v6;
      v18 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v18,
        (Il2CppObject *)v10,
        Method_PartyOrganizationListViewItem___c__DisplayClass366_0__IsEnabledChangeGrandSvt_b__0__,
        0);
      v7 -= System_Linq_Enumerable__Count_object__51376204(
              (System_Collections_Generic_IEnumerable_TSource__o *)v16,
              (System_Func_TSource__bool__o *)v18,
              (const MethodInfo_30FF04C *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
      v6 = v17;
      if ( v7 <= 0 )
      {
        v19 = 7;
        goto LABEL_24;
      }
    }
  }
  v19 = 8;
LABEL_24:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
  return v8 && v19 == 7;
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(
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
  int32_t v6; // w20
  UserServantEntity_o *v7; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43337428(questRestrictionInfo, userServantEntity, 0);
  if ( v5 < 0 )
    return 0;
  v6 = v5;
  v7 = this->fields.userServantEntity;
  if ( !v7 )
    sub_1C32E7C(0);
  return UserServantEntity__getDispLimitCount(v7, 0, 0) != v6;
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
  int64_t v6; // x21
  void *Master_object; // x0
  int32_t v8; // w1
  UserServantEntity_o *v9; // x8
  PartyOrganizationListViewItem_o *IsGrandServant; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v14; // x8
  bool IsGrandServant_k__BackingField; // w8
  int32_t hp; // w20
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]
  QuestPhaseEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4C33426 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C33426 = 1;
  }
  entity = 0;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v20 = v21;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v20, 0);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v6 = v5;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_34;
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        (Il2CppObject **)&this->fields.userServantEntity,
        v6,
        (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
    v8 = *((_DWORD *)Master_object + 10);
    Master_object = this->fields.userServantEntity;
    this->fields.actualRarity = v8;
    if ( !Master_object )
      goto LABEL_34;
    Master_object = (void *)UserServantEntity__GetFrameType((UserServantEntity_o *)Master_object, v8, 0);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 || !Master_object )
        goto LABEL_34;
      IsGrandServant = (PartyOrganizationListViewItem_o *)QuestPhaseMaster__TryGetEntity(
                                                            (QuestPhaseMaster_o *)Master_object,
                                                            &entity,
                                                            v14->fields.questId,
                                                            v14->fields.questPhase,
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
      PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(IsGrandServant, this, v12);
      return;
    }
    hp = this->fields.hp;
    Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v11);
    if ( Master_object )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Master_object, 0);
      atk = this->fields.atk;
      this->fields.hp = AddedHp + hp;
      Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v19);
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
    sub_1C32E7C(Master_object);
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
    sub_1C32E7C(this);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_34151644(this, item, v7);
}


void PartyOrganizationListViewItem__Modify_34151644(
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
  if ( (byte_4C33427 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33427 = 1;
  }
  if ( !item )
    goto LABEL_26;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v39, 0);
  if ( !v9 )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v9,
             (int32_t)this,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v13, v14);
  v5->fields.classId = item->fields.classId;
  *(_QWORD *)&v5->fields.cost = *(_QWORD *)&item->fields.cost;
  v5->fields.atk = item->fields.atk;
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v15 )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                              v15[6],
                                              0);
  v16 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v16 )
    goto LABEL_26;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v16, 0);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v18, v19);
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
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v40, 0);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.followerInfo, 0, v20, v21);
  }
  this = (PartyOrganizationListViewItem_o *)v5->fields.userServantEntity;
  *(_WORD *)&v5->fields._IsClearedWave_k__BackingField = 0;
  v5->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !this )
LABEL_26:
    sub_1C32E7C(this);
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

  if ( (byte_4C3342A & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    byte_4C3342A = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    v15 = 0;
    v5 = (System_Nullable_int__o)&v15;
    System_Nullable_int____ctor(
      v5,
      equipIdList->max_length,
      (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
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
      (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
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
      sub_1C32E84(v7);
    }
LABEL_25:
    sub_1C32E7C(v7);
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

  if ( (byte_4C3342B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    byte_4C3342B = 1;
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
      (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
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
      sub_1C32E7C(0);
    max_length = v9->max_length;
    if ( !max_length )
      sub_1C32E84(0);
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
  const MethodInfo *v9; // x2
  int32_t v10; // w21
  struct System_Int64_array *v11; // x1

  if ( (byte_4C33431 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_long___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C33431 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v6 = System_Array__IndexOf_long_(
         equipIdList,
         userSvtId,
         (const MethodInfo_31E4580 *)Method_System_Array_IndexOf_long___);
  if ( v6 < 0 )
    return 0;
  v7 = v6;
  IsNullOrEmpty = (void *)BasicHelper__IsNullOrEmpty(
                            (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                            0);
  v10 = 0;
  if ( !v7 && ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.equipServantEntityList;
    if ( !IsNullOrEmpty
      || (IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                            0,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
LABEL_15:
      sub_1C32E7C(IsNullOrEmpty);
    }
    v10 = *((_DWORD *)IsNullOrEmpty + 38);
  }
  v11 = this->fields.equipIdList;
  if ( !v11 )
    goto LABEL_15;
  if ( v7 >= LODWORD(v11->max_length) )
    sub_1C32E84(IsNullOrEmpty);
  v11->m_Items[v7] = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, v11, v9);
  return v10;
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct ServantEntity_o *servantEntity; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Int32_array *commandCodeIdList; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x21
  struct System_Int32_array *v35; // x0
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v37; // x0
  int32_t v38; // w1
  const MethodInfo *v39; // x2
  PartyOrganizationListViewItem_o *v40; // x0
  System_Int32_array *v41; // x1
  const MethodInfo *v42; // x2

  if ( (byte_4C33424 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C33424 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    sub_1C32E7C(v5);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v6, v7);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v10, v11);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isRestrictionGrandServant = item->fields.isRestrictionGrandServant;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v13, v14);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v16, v17);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v19,
    v20);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v22, v23);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)commandCodeIdList, v25, v26);
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
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)WaveEnemyClassIds_k__BackingField,
    v28,
    v29);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  this->fields._IsGrandServant_k__BackingField = item->fields._IsGrandServant_k__BackingField;
  this->fields._IsTempGrandServant_k__BackingField = item->fields._IsTempGrandServant_k__BackingField;
  this->fields._IsUseGrandBoard_k__BackingField = item->fields._IsUseGrandBoard_k__BackingField;
  this->fields._EquipFriendShipSkillChange_k__BackingField = item->fields._EquipFriendShipSkillChange_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v33 = System_Array__Clone(equipSvtIdList, 0)) == 0 )
  {
    v38 = 0;
    this->fields.equipSvtIdList = 0;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v34 = v33;
  v35 = (struct System_Int32_array *)sub_1C32D5C(v33, int___TypeInfo);
  if ( v35 )
  {
    this->fields.equipSvtIdList = v35;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v37 = sub_1C32D5C(v34, int___TypeInfo);
    if ( v37 )
    {
      v38 = v37;
LABEL_10:
      sub_1C32BC4((CGThumbnailListItem_o *)p_equipSvtIdList, v38, v30, v31);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v39);
      return;
    }
  }
  else
  {
    sub_1C3313C(v34);
  }
  v40 = (PartyOrganizationListViewItem_o *)sub_1C3313C(v34);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v40, v41, v42);
}


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
  if ( (byte_4C33423 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C33423 = 1;
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1C32E7C(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BalanceConfig_c *v9; // x0
  __int64 v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_ICollection_o *duplicatedEquipmentUserSvtIdList; // x21
  struct System_Int64_array *equipIdList; // x9
  unsigned int v15; // w8
  System_Predicate_long__o **v16; // x22
  unsigned int max_length; // w10
  System_Predicate_long__o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x9
  unsigned int v22; // w10
  char v23; // w10

  if ( (byte_4C3342E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindIndex_long___);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&bool___TypeInfo);
    sub_1C32C20(&System_Predicate_long__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__DisplayClass177_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__);
    sub_1C32C20(&PartyOrganizationListViewItem___c__DisplayClass177_0_TypeInfo);
    byte_4C3342E = 1;
  }
  v5 = sub_1C32E6C(PartyOrganizationListViewItem___c__DisplayClass177_0_TypeInfo);
  PartyOrganizationListViewItem___c__DisplayClass177_0___ctor(
    (PartyOrganizationListViewItem___c__DisplayClass177_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  if ( this->fields._IsGrandServant_k__BackingField || this->fields._IsTempGrandServant_k__BackingField )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = 52;
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = 48;
  }
  IsNullOrEmpty = (struct System_Boolean_array *)sub_1C32CC8(
                                                   bool___TypeInfo,
                                                   *(unsigned int *)((char *)&v9->static_fields->CriticalRateToAddByQuickFirstBonus
                                                                   + v10));
  if ( !this )
    goto LABEL_28;
  this->fields._DuplicationEquipmentFlagList_k__BackingField = IsNullOrEmpty;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)IsNullOrEmpty,
    v11,
    v12);
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
    sub_1C32E7C(IsNullOrEmpty);
  v15 = 0;
  v16 = (System_Predicate_long__o **)(v5 + 32);
  while ( 1 )
  {
    max_length = equipIdList->max_length;
    if ( (int)v15 >= (int)max_length )
      break;
    if ( v15 >= max_length )
      goto LABEL_32;
    if ( equipIdList->m_Items[v15] >= 1 )
    {
      v18 = *v16;
      if ( !*v16 )
      {
        v18 = (System_Predicate_long__o *)sub_1C32E6C(System_Predicate_long__TypeInfo);
        System_Predicate_long____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_PartyOrganizationListViewItem___c__DisplayClass177_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v18;
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v18, v19, v20);
      }
      IsNullOrEmpty = (struct System_Boolean_array *)System_Array__FindIndex_long_(
                                                       (System_Int64_array *)duplicatedEquipmentUserSvtIdList,
                                                       (System_Predicate_T__o *)v18,
                                                       (const MethodInfo_31E30BC *)Method_System_Array_FindIndex_long___);
      DuplicationEquipmentFlagList_k__BackingField = this->fields._DuplicationEquipmentFlagList_k__BackingField;
      if ( !DuplicationEquipmentFlagList_k__BackingField )
        goto LABEL_28;
      v15 = *(_DWORD *)(v5 + 24);
      v22 = DuplicationEquipmentFlagList_k__BackingField->max_length;
      if ( (_DWORD)IsNullOrEmpty == -1 )
      {
        if ( v15 >= v22 )
LABEL_32:
          sub_1C32E84(IsNullOrEmpty);
        v23 = 0;
      }
      else
      {
        if ( v15 >= v22 )
          goto LABEL_32;
        v23 = 1;
      }
      DuplicationEquipmentFlagList_k__BackingField->m_Items[v15] = v23;
    }
    *(_DWORD *)(v5 + 24) = ++v15;
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
  const MethodInfo *v19; // x1
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
  unsigned __int64 v38; // x29
  unsigned __int64 max_length_low; // x9
  struct System_Int64_array *v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x1
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x25
  struct System_Int32_array *v50; // x8
  System_Collections_Generic_List_object__o *v51; // x25
  UserServantCollectionEntity_o *v52; // x27
  UserServantEntity_o *v53; // x26
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  struct System_Int64_array *v60; // x8
  System_Collections_Generic_List_object__o *v61; // x25
  UserServantEntity_o *v62; // x26
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  struct System_Collections_Generic_List_ServantEntity__o *v69; // x25
  ServantEntity_o *v70; // x26
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct ServantEntity_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x0
  CGThumbnailListItem_o *v77; // x0
  int32_t v78; // w1
  __int64 v79; // x8
  Il2CppObject *v80; // x1
  void *monitor; // x25
  Il2CppClass *klass; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x25
  void *v84; // x26
  Il2CppClass *v85; // x27
  Il2CppObject *v86; // x25
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  System_Collections_Generic_List_object__o *v91; // x25
  struct System_Int32_array *v92; // x8
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass *v98; // x1
  Il2CppClass **v99; // x0
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *v101; // x23
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x29
  struct System_Int32_array *v103; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_43070308; // w0
  struct QuestRestrictionInfo_o *v107; // x8
  System_Collections_Generic_List_object__o *v108; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x24
  PartyOrganizationListViewItem___c_c *v110; // x0
  System_Func_object__int__o *_9__161_1; // x25
  Il2CppObject *v112; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  const MethodInfo *v118; // x3
  __int64 v119; // x8
  _DWORD *v120; // x24
  unsigned __int64 v121; // x20
  ServantEntity_o *v122; // x26
  int32_t v123; // w27
  EventPersonalMargeUpValInfo_o *v124; // x25
  int32_t v125; // w2
  __int64 v126; // x8
  _QWORD *v127; // x25
  unsigned __int64 v128; // x26
  Il2CppObject *v129; // x1
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  System_Collections_Generic_List_object__o *v134; // x23
  const MethodInfo_39E2DF4 *v135; // x0
  const MethodInfo *v136; // x3
  EventUpValInfo_o **v137; // x25
  struct EventMargeItemUpValInfo_array *v138; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  const MethodInfo *v141; // x1
  System_Int32_array *v142; // x23
  EventUpValSetupInfo_o *v143; // x24
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  UserServantEntity_o *v146; // x22
  EventUpValSetupInfo_o *v147; // x23
  struct QuestRestrictionInfo_o *v148; // x8
  _BOOL8 v149; // x0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  System_Collections_Generic_List_object__o *v152; // x0
  Il2CppObject *v153; // x1
  struct System_Object_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  Il2CppClass **v157; // x8
  Il2CppObject *v158; // x24
  System_Collections_Generic_List_object__o *v159; // x23
  const MethodInfo *v160; // x3
  struct System_Int32_array *v161; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v163; // x28
  int32_t v164; // w26
  Il2CppObject *v165; // x0
  ServantEntity_o *v166; // x27
  EventPersonalMargeUpValInfo_o *v167; // x25
  int32_t v168; // w2
  __int64 v169; // x8
  _QWORD *v170; // x25
  unsigned __int64 v171; // x26
  Il2CppObject *v172; // x1
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  Il2CppClass **v176; // x0
  System_Collections_ICollection_o *EquipSvtIds; // x23
  int32_t current; // w24
  System_Collections_Generic_List_object__o *v179; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *v182; // x0
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  Il2CppObject *v185; // x1
  struct System_Object_array *items; // x8
  _QWORD *v187; // x9
  __int64 size; // x10
  Il2CppClass **v189; // x0
  ServantEntity_o *v190; // x24
  __int64 v191; // x0
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  Il2CppClass **v197; // x0
  UserServantEntity_o *v198; // x23
  EventUpValSetupInfo_o *v199; // x22
  struct QuestRestrictionInfo_o *v200; // x8
  ServantEntity_o *v201; // x22
  EventPersonalMargeUpValInfo_o *v202; // x21
  System_Collections_Generic_List_object__o *v203; // x19
  EventMargeItemUpValInfo_array *v204; // x0
  int32_t v205; // w23
  FollowerInfo_o *v206; // x24
  int32_t v207; // w2
  struct QuestRestrictionInfo_o *v208; // x8
  System_Collections_Generic_List_object__o *v209; // x22
  int32_t v210; // w24
  FollowerInfo_o *v211; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v212; // x23
  int32_t v213; // w2
  struct QuestRestrictionInfo_o *v214; // x8
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  struct System_Object_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  Il2CppClass *v220; // x1
  Il2CppClass **v221; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Int32_array *eventIdList; // x8
  int32_t v224; // w23
  FollowerInfo_o *v225; // x24
  int32_t v226; // w4
  struct QuestRestrictionInfo_o *v227; // x8
  System_Collections_Generic_List_object__o *v228; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  PartyOrganizationListViewItem___c_c *v231; // x0
  System_Func_object__int__o *_9__161_0; // x23
  Il2CppObject *v233; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v235; // w2
  const MethodInfo *v236; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v237; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v238; // x0
  __int64 v239; // x8
  _DWORD *v240; // x22
  unsigned __int64 v241; // x20
  ServantEntity_o *servantEntity; // x24
  int32_t v243; // w25
  EventPersonalMargeUpValInfo_o *v244; // x23
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  __int64 v247; // x8
  _QWORD *v248; // x23
  unsigned __int64 v249; // x24
  Il2CppObject *v250; // x1
  struct System_Object_array *v251; // x8
  _QWORD *v252; // x9
  __int64 v253; // x10
  Il2CppClass **v254; // x0
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x21
  struct EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  EventUpValInfo_o **eventUpVallInfo; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v260; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v261; // [xsp+30h] [xbp-E0h] BYREF
  EventUpValInfo_o *v262; // [xsp+48h] [xbp-C8h] BYREF
  bool v263; // [xsp+54h] [xbp-BCh] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v264; // [xsp+58h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+64h] [xbp-ACh] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v267; // [xsp+70h] [xbp-A0h] BYREF
  UserServantCollectionEntity_o *v268; // [xsp+78h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-90h] BYREF
  bool v270; // [xsp+8Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v271; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v272; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // 0:x0.16

  if ( (byte_4C33422 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C32C20(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C32C20(&EventUpValSetupInfo_TypeInfo);
    sub_1C32C20(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&ServantEntity_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__);
    sub_1C32C20(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C32C20(&UserServantEntity_TypeInfo);
    byte_4C33422 = 1;
  }
  memset(&v271, 0, sizeof(v271));
  v270 = 0;
  v268 = 0;
  entity = 0;
  infoList = 0;
  v267 = 0;
  isDuplicate = 0;
  v264 = 0;
  v263 = 0;
  v262 = 0;
  memset(&v261, 0, sizeof(v261));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  p_equipUserServantEntityList = (FollowerInfo_o *)&this->fields.equipUserServantEntityList;
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v5, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  p_equipServantEntityList = &this->fields.equipServantEntityList;
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v9, v11, v12);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUpValInfo, 0, v14, v15);
  this->fields.eventUpValItemList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, 0, v16, v17);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( isFollower )
  {
    this->fields.equipIdList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v20, v21);
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
        goto LABEL_288;
      EquipSvtIds = (System_Collections_ICollection_o *)FollowerInfo__GetEquipSvtIds(
                                                          followerInfo,
                                                          followerIndex,
                                                          v36,
                                                          0);
      IsGrandServant = (void *)BasicHelper__IsNullOrEmpty(EquipSvtIds, 0);
      if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
      {
        if ( !EquipSvtIds )
          goto LABEL_288;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v260,
          (System_Collections_Generic_List_int__o *)EquipSvtIds,
          (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v271 = v260;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v271,
                  (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          current = (int32_t)v271.fields._current;
          v179 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
          if ( LODWORD(v271.fields._current) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              sub_1C32E7C(0);
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !MasterData_object )
              sub_1C32E7C(0);
            v182 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     current,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v185 = v182;
            if ( !v179 )
              sub_1C32E7C(v182);
            items = v179->fields._items;
            v187 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v179->fields._version;
            if ( !items )
              sub_1C32E7C(v182);
            size = v179->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v179,
                v182,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
            }
            else
            {
              v189 = &items->obj.klass + size;
              v179->fields._size = size + 1;
              v189[4] = (Il2CppClass *)v185;
              sub_1C32BC4((CGThumbnailListItem_o *)(v189 + 4), (int32_t)v185, v183, v184);
            }
          }
          else
          {
            v190 = (ServantEntity_o *)sub_1C32E6C(ServantEntity_TypeInfo);
            ServantEntity___ctor(v190, 0);
            if ( !v179 )
              sub_1C32E7C(v191);
            v194 = v179->fields._items;
            v195 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v179->fields._version;
            if ( !v194 )
              sub_1C32E7C(v191);
            v196 = v179->fields._size;
            if ( (unsigned int)v196 >= LODWORD(v194->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v179,
                (Il2CppObject *)v190,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
            }
            else
            {
              v197 = &v194->obj.klass + v196;
              v179->fields._size = v196 + 1;
              v197[4] = (Il2CppClass *)v190;
              sub_1C32BC4((CGThumbnailListItem_o *)(v197 + 4), (int32_t)v190, v192, v193);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v271,
          (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        p_eventUpValInfo = &this->fields.eventUpValInfo;
      }
    }
    else
    {
      v205 = this->fields.followerIndex;
      v206 = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v208 = this->fields.questRestrictionInfo;
        if ( v208 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v208->fields.questId, 0);
          v207 = (int)IsGrandServant;
        }
        else
        {
          v207 = 0;
        }
      }
      else
      {
        v207 = 2;
      }
      if ( !v206 )
        goto LABEL_288;
      IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v206, v205, v207, 0);
      if ( (int)IsGrandServant >= 1 )
      {
        v209 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        v210 = this->fields.followerIndex;
        v211 = this->fields.followerInfo;
        v212 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v214 = this->fields.questRestrictionInfo;
          if ( v214 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v214->fields.questId, 0);
            v213 = (int)IsGrandServant;
          }
          else
          {
            v213 = 0;
          }
        }
        else
        {
          v213 = 2;
        }
        if ( !v211 )
          goto LABEL_288;
        IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v211, v210, v213, 0);
        if ( !v212 )
          goto LABEL_288;
        IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                           v212,
                           (int32_t)IsGrandServant,
                           (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v209 )
          goto LABEL_288;
        v217 = v209->fields._items;
        v218 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v209->fields._version;
        if ( !v217 )
          goto LABEL_288;
        v219 = v209->fields._size;
        v220 = (Il2CppClass *)IsGrandServant;
        if ( (unsigned int)v219 >= LODWORD(v217->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v209,
            (Il2CppObject *)IsGrandServant,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
        }
        else
        {
          v221 = &v217->obj.klass + v219;
          v209->fields._size = v219 + 1;
          v221[4] = v220;
          sub_1C32BC4((CGThumbnailListItem_o *)(v221 + 4), (int32_t)v220, v215, v216);
        }
      }
    }
    setupInfo = this->fields.setupInfo;
    if ( setupInfo )
    {
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_288;
      if ( eventIdList->max_length )
      {
        v224 = this->fields.followerIndex;
        v225 = this->fields.followerInfo;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v227 = this->fields.questRestrictionInfo;
          if ( v227 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v227->fields.questId, 0);
            v226 = (int)IsGrandServant;
          }
          else
          {
            v226 = 0;
          }
        }
        else
        {
          v226 = 2;
        }
        if ( !v225 )
          goto LABEL_288;
        this->fields.isEventUpVal = FollowerInfo__getEventUpVal_41649572(
                                      v225,
                                      p_eventUpValInfo,
                                      setupInfo,
                                      v224,
                                      v226,
                                      0);
        v228 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v228,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        eventUpValInfo = this->fields.eventUpValInfo;
        if ( !eventUpValInfo )
          goto LABEL_288;
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v231 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v231 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__161_0 = (System_Func_object__int__o *)v231->static_fields->__9__161_0;
        if ( !_9__161_0 )
        {
          if ( !v231->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v231);
            v231 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v233 = (Il2CppObject *)v231->static_fields->__9;
          _9__161_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__161_0,
            v233,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__,
            0);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__161_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_0;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__161_0, (int32_t)_9__161_0, v235, v236);
        }
        v237 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      dropList,
                                                                      (System_Func_TSource__TResult__o *)_9__161_0,
                                                                      (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v238 = System_Linq_Enumerable__Distinct_int_(
                 v237,
                 (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
        IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                           v238,
                           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !IsGrandServant )
          goto LABEL_288;
        v239 = *((_QWORD *)IsGrandServant + 3);
        v240 = IsGrandServant;
        if ( (int)v239 >= 1 )
        {
          v241 = 0;
          while ( 1 )
          {
            if ( v241 >= (unsigned int)v239 )
              goto LABEL_289;
            servantEntity = this->fields.servantEntity;
            v243 = v240[v241 + 8];
            v244 = (EventPersonalMargeUpValInfo_o *)sub_1C32E6C(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v244, v243, servantEntity, 0);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_288;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
            if ( !v244 )
              goto LABEL_288;
            EventPersonalMargeUpValInfo__Add(v244, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v244, 0);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v244, 0);
              if ( !IsGrandServant )
                goto LABEL_288;
              v247 = *((_QWORD *)IsGrandServant + 3);
              v248 = IsGrandServant;
              if ( (int)v247 >= 1 )
                break;
            }
LABEL_283:
            LODWORD(v239) = v240[6];
            if ( (__int64)++v241 >= (int)v239 )
              goto LABEL_284;
          }
          v249 = 0;
          while ( v249 < (unsigned int)v247 )
          {
            if ( !v228 )
              goto LABEL_288;
            v250 = (Il2CppObject *)v248[v249 + 4];
            v251 = v228->fields._items;
            v252 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v228->fields._version;
            if ( !v251 )
              goto LABEL_288;
            v253 = v228->fields._size;
            if ( (unsigned int)v253 >= LODWORD(v251->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v228,
                v250,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
            }
            else
            {
              v254 = &v251->obj.klass + v253;
              v228->fields._size = v253 + 1;
              v254[4] = (Il2CppClass *)v250;
              sub_1C32BC4((CGThumbnailListItem_o *)(v254 + 4), (int32_t)v250, v245, v246);
            }
            LODWORD(v247) = *((_DWORD *)v248 + 6);
            if ( (__int64)++v249 >= (int)v247 )
              goto LABEL_283;
          }
          goto LABEL_289;
        }
LABEL_284:
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)IsGrandServant, &v270, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v228, 0);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                          (PartyOrganizationUtility_o *)IsGrandServant,
                          AdjustUpValInfoArray,
                          0);
        this->fields.eventUpValItemList = AddUpValInfos;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, (int32_t)AddUpValInfos, v257, v258);
        this->fields._IsDuplicateBonus_k__BackingField = v270;
      }
    }
    return;
  }
  if ( !this->fields.userServantEntity )
  {
    this->fields.equipIdList = 0;
    p_equipIdList = &this->fields.equipIdList;
    v32 = 0;
    goto LABEL_229;
  }
  eventUpVallInfo = &this->fields.eventUpValInfo;
  if ( !equipIdList )
  {
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v29 = (struct System_Int64_array *)sub_1C32CC8(long___TypeInfo, (unsigned int)v33->static_fields->SvtEquipMax);
LABEL_26:
    this->fields.equipIdList = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v29, v27, v28);
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
      v29 = (struct System_Int64_array *)sub_1C32D5C(v26, long___TypeInfo);
      if ( !v29 )
      {
        sub_1C3313C(v23);
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
    goto LABEL_288;
  v38 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v25->max_length);
    if ( (__int64)v38 >= (int)max_length_low )
      break;
    if ( v38 >= max_length_low )
      goto LABEL_289;
    if ( v25->m_Items[v38] < 1 )
      goto LABEL_63;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    v40 = this->fields.equipIdList;
    if ( !v40 )
      goto LABEL_288;
    if ( v38 >= LODWORD(v40->max_length) )
      goto LABEL_289;
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = (void *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                               &entity,
                               v40->m_Items[v38],
                               (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      IsGrandServant = p_equipUserServantEntityList->klass;
      if ( !p_equipUserServantEntityList->klass )
        goto LABEL_288;
      v43 = entity;
      v44 = *((_QWORD *)IsGrandServant + 2);
      v45 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v44 )
        goto LABEL_288;
      v46 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v43,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = v44 + 8 * v46;
        *((_DWORD *)IsGrandServant + 6) = v46 + 1;
        *(_QWORD *)(v47 + 32) = v43;
        sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v43, v41, v42);
      }
      if ( !entity )
        goto LABEL_288;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v272.fields.currentCryptoKey = klass;
      *(_QWORD *)&v272.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v272, 0) <= 0 )
      {
        v86 = (Il2CppObject *)sub_1C32E6C(ServantEntity_TypeInfo);
        ServantEntity___ctor((ServantEntity_o *)v86, 0);
      }
      else
      {
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !entity )
          goto LABEL_288;
        v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        v85 = entity[5].klass;
        v84 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v273.fields.currentCryptoKey = v85;
        *(_QWORD *)&v273.fields.fakeValue = v84;
        IsGrandServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v273, 0);
        if ( !v83 )
          goto LABEL_288;
        v86 = DataMasterBase_object__object__int___GetEntity(
                v83,
                (int32_t)IsGrandServant,
                (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      IsGrandServant = *p_equipServantEntityList;
      if ( !*p_equipServantEntityList )
        goto LABEL_288;
      v87 = *((_QWORD *)IsGrandServant + 2);
      v88 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v87 )
        goto LABEL_288;
      v89 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
      {
        v79 = v88[4];
        v80 = v86;
        goto LABEL_91;
      }
      v90 = v87 + 8 * v89;
      *((_DWORD *)IsGrandServant + 6) = v89 + 1;
      *(_QWORD *)(v90 + 32) = v86;
      v77 = (CGThumbnailListItem_o *)(v90 + 32);
      v78 = (int)v86;
      goto LABEL_89;
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    if ( !equipSvtIdList )
      goto LABEL_60;
    if ( v38 >= LODWORD(equipSvtIdList->max_length) )
      goto LABEL_289;
    if ( equipSvtIdList->m_Items[v38] < 1 )
      goto LABEL_60;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C31812 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C31812 = 1;
    }
    IsGrandServant = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsGrandServant = NetworkManager_TypeInfo;
    }
    v50 = this->fields.equipSvtIdList;
    if ( !v50 )
      goto LABEL_288;
    if ( v38 >= LODWORD(v50->max_length) )
      goto LABEL_289;
    if ( !Master_object )
      goto LABEL_288;
    IsGrandServant = (void *)UserServantCollectionMaster__TryGetEntity(
                               (UserServantCollectionMaster_o *)Master_object,
                               &v268,
                               *(_QWORD *)(*((_QWORD *)IsGrandServant + 23) + 64LL),
                               v50->m_Items[v38],
                               0);
    if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
    {
LABEL_60:
      v60 = this->fields.equipIdList;
      if ( !v60 )
        goto LABEL_288;
      if ( v38 >= LODWORD(v60->max_length) )
        goto LABEL_289;
      v60->m_Items[v38] = 0;
LABEL_63:
      v61 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
      v62 = (UserServantEntity_o *)sub_1C32E6C(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v62, 0);
      if ( !v61 )
        goto LABEL_288;
      v65 = v61->fields._items;
      v66 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v61->fields._version;
      if ( !v65 )
        goto LABEL_288;
      v67 = v61->fields._size;
      if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v61,
          (Il2CppObject *)v62,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &v65->obj.klass + v67;
        v61->fields._size = v67 + 1;
        v68[4] = (Il2CppClass *)v62;
        sub_1C32BC4((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
      }
      v69 = *p_equipServantEntityList;
      v70 = (ServantEntity_o *)sub_1C32E6C(ServantEntity_TypeInfo);
      ServantEntity___ctor(v70, 0);
      if ( !v69 )
        goto LABEL_288;
      v73 = v69->fields._items;
      v74 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++v69->fields._version;
      if ( !v73 )
        goto LABEL_288;
      v75 = v69->fields._size;
      if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
      {
        v79 = v74[4];
        IsGrandServant = v69;
        v80 = (Il2CppObject *)v70;
LABEL_91:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v80,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v79 + 192) + 112LL));
        goto LABEL_92;
      }
      v76 = (__int64)v73 + 8 * v75;
      v69->fields._size = v75 + 1;
      *(_QWORD *)(v76 + 32) = v70;
      v77 = (CGThumbnailListItem_o *)(v76 + 32);
      v78 = (int)v70;
LABEL_89:
      sub_1C32BC4(v77, v78, v71, v72);
      goto LABEL_92;
    }
    v51 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
    v52 = v268;
    v53 = (UserServantEntity_o *)sub_1C32E6C(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_43055668(v53, v52, 0, 0);
    if ( !v51 )
      goto LABEL_288;
    v56 = v51->fields._items;
    v57 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v51->fields._version;
    if ( !v56 )
      goto LABEL_288;
    v58 = v51->fields._size;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v51,
        (Il2CppObject *)v53,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      v51->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v53;
      sub_1C32BC4((CGThumbnailListItem_o *)(v59 + 4), (int32_t)v53, v54, v55);
    }
    v91 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    v92 = this->fields.equipSvtIdList;
    if ( !v92 )
      goto LABEL_288;
    if ( v38 >= LODWORD(v92->max_length) )
      goto LABEL_289;
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                       v92->m_Items[v38],
                       (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v91 )
      goto LABEL_288;
    v95 = v91->fields._items;
    v96 = Method_System_Collections_Generic_List_ServantEntity__Add__;
    ++v91->fields._version;
    if ( !v95 )
      goto LABEL_288;
    v97 = v91->fields._size;
    v98 = (Il2CppClass *)IsGrandServant;
    if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        (Il2CppObject *)IsGrandServant,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &v95->obj.klass + v97;
      v91->fields._size = v97 + 1;
      v99[4] = v98;
      sub_1C32BC4((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v98, v93, v94);
    }
    this->fields._IsDisappearEquip_k__BackingField = 1;
LABEL_92:
    v25 = this->fields.equipIdList;
    ++v38;
    if ( !v25 )
      goto LABEL_288;
  }
  p_setupInfo = &this->fields.setupInfo;
  v101 = this->fields.setupInfo;
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( !v101 )
    goto LABEL_138;
  v103 = v101->fields.eventIdList;
  if ( !v103 )
    goto LABEL_288;
  if ( !v103->max_length )
  {
LABEL_138:
    v134 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v134,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v264 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v134;
    if ( this->fields.questRestrictionInfo )
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v264, 1, v136);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v137 = &this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_288;
      v134 = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                            (PartyOrganizationUtility_o *)IsGrandServant,
                                                            &v263,
                                                            (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v134,
                                                            0);
      this->fields._IsDuplicateBonus_k__BackingField = v263;
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsGrandServant )
        goto LABEL_288;
    }
    else
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v264, 0, v136);
      v135 = (const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
LABEL_143:
      IsGrandServant = SingletonTemplate_object___get_Instance(v135);
      v137 = &this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_288;
    }
    v138 = PartyOrganizationUtility__GetAddUpValInfos(
             (PartyOrganizationUtility_o *)IsGrandServant,
             (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v134,
             0);
    goto LABEL_145;
  }
  userServantEntity = this->fields.userServantEntity;
  EquipList = PartyOrganizationListViewItem__GetEquipList(this, v19);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant || !userServantEntity )
    goto LABEL_288;
  EventUpVal_43070308 = UserServantEntity__getEventUpVal_43070308(
                          userServantEntity,
                          eventUpVallInfo,
                          v101,
                          EquipList,
                          *((_QWORD *)IsGrandServant + 14),
                          0);
  v107 = this->fields.questRestrictionInfo;
  this->fields.isEventUpVal = EventUpVal_43070308;
  if ( v107 )
  {
    v108 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v108,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    infoList = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v108;
    if ( *eventUpVallInfo )
    {
      v109 = (System_Collections_Generic_IEnumerable_TSource__o *)(*eventUpVallInfo)->fields.dropList;
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
        _9__161_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__161_1,
          v112,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__,
          0);
        v113 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v113->__9__161_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_1;
        sub_1C32BC4((CGThumbnailListItem_o *)&v113->__9__161_1, (int32_t)_9__161_1, v114, v115);
      }
      v116 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    v109,
                                                                    (System_Func_TSource__TResult__o *)_9__161_1,
                                                                    (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v117 = System_Linq_Enumerable__Distinct_int_(
               v116,
               (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
      IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                         v117,
                         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
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
              goto LABEL_289;
            v122 = this->fields.servantEntity;
            v123 = v120[v121 + 8];
            v124 = (EventPersonalMargeUpValInfo_o *)sub_1C32E6C(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v124, v123, v122, 0);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_288;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
            if ( !v124 )
              goto LABEL_288;
            EventPersonalMargeUpValInfo__Add(v124, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v124, 0);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v124, 0);
              if ( !IsGrandServant )
                goto LABEL_288;
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
            if ( !v108 )
              goto LABEL_288;
            v129 = (Il2CppObject *)v127[v128 + 4];
            v130 = v108->fields._items;
            v131 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v108->fields._version;
            if ( !v130 )
              goto LABEL_288;
            v132 = v108->fields._size;
            if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v108,
                v129,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
            }
            else
            {
              v133 = &v130->obj.klass + v132;
              v108->fields._size = v132 + 1;
              v133[4] = (Il2CppClass *)v129;
              sub_1C32BC4((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v129, v125, v118);
            }
            LODWORD(v126) = *((_DWORD *)v127 + 6);
            if ( (__int64)++v128 >= (int)v126 )
              goto LABEL_135;
          }
          goto LABEL_289;
        }
LABEL_136:
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 1, v118);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsGrandServant )
        {
          v134 = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                (PartyOrganizationUtility_o *)IsGrandServant,
                                                                &isDuplicate,
                                                                (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v108,
                                                                0);
          this->fields._IsDuplicateBonus_k__BackingField = isDuplicate;
          v135 = (const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
          goto LABEL_143;
        }
      }
    }
    goto LABEL_288;
  }
  IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_288;
  v158 = DataManager__GetMasterData_object_(
           (DataManager_o *)IsGrandServant,
           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  v159 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v159,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v267 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v159;
  if ( !*p_setupInfo )
    goto LABEL_288;
  v161 = (*p_setupInfo)->fields.eventIdList;
  if ( !v161 )
    goto LABEL_288;
  max_length = v161->max_length;
  if ( (int)max_length >= 1 )
  {
    v163 = 0;
    while ( 1 )
    {
      if ( v163 >= (unsigned int)max_length )
        goto LABEL_289;
      if ( !v158 )
        goto LABEL_288;
      v164 = v161->m_Items[v163];
      v165 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v158,
               v164,
               (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v165
        || (IsGrandServant = (void *)EventDetailEntity__HasFlag((EventDetailEntity_o *)v165, 0x800000000LL, 0),
            ((unsigned __int8)IsGrandServant & 1) == 0) )
      {
        v166 = this->fields.servantEntity;
        v167 = (EventPersonalMargeUpValInfo_o *)sub_1C32E6C(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v167, v164, v166, 0);
        IsGrandServant = this->fields.eventUpValInfo;
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
        if ( !v167 )
          goto LABEL_288;
        EventPersonalMargeUpValInfo__Add(v167, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
        IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v167, 0);
        if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
        {
          IsGrandServant = EventPersonalMargeUpValInfo__GetList(v167, 0);
          if ( !IsGrandServant )
            goto LABEL_288;
          v169 = *((_QWORD *)IsGrandServant + 3);
          v170 = IsGrandServant;
          if ( (int)v169 >= 1 )
            break;
        }
      }
LABEL_185:
      LODWORD(max_length) = v161->max_length;
      if ( (__int64)++v163 >= (int)max_length )
        goto LABEL_186;
    }
    v171 = 0;
    while ( v171 < (unsigned int)v169 )
    {
      if ( !v159 )
        goto LABEL_288;
      v172 = (Il2CppObject *)v170[v171 + 4];
      v173 = v159->fields._items;
      v174 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v159->fields._version;
      if ( !v173 )
        goto LABEL_288;
      v175 = v159->fields._size;
      if ( (unsigned int)v175 >= LODWORD(v173->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v159,
          v172,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
      }
      else
      {
        v176 = &v173->obj.klass + v175;
        v159->fields._size = v175 + 1;
        v176[4] = (Il2CppClass *)v172;
        sub_1C32BC4((CGThumbnailListItem_o *)(v176 + 4), (int32_t)v172, v168, v160);
      }
      LODWORD(v169) = *((_DWORD *)v170 + 6);
      if ( (__int64)++v171 >= (int)v169 )
        goto LABEL_185;
    }
LABEL_289:
    sub_1C32E84(IsGrandServant);
  }
LABEL_186:
  PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v267, 0, v160);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_288;
  v138 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v159,
           0);
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  v137 = &this->fields.eventUpValInfo;
LABEL_145:
  this->fields.eventUpValItemList = v138;
  sub_1C32BC4((CGThumbnailListItem_o *)p_eventUpValItemList, (int32_t)v138, v139, v140);
  if ( !this->fields.questRestrictionInfo )
    return;
  if ( !*p_setupInfo )
  {
    v142 = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 1);
    v143 = (EventUpValSetupInfo_o *)sub_1C32E6C(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_41638188(v143, v142, 0, 0, 0, 0);
    *p_setupInfo = v143;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)v143, v144, v145);
  }
  if ( this->fields.isEventUpVal && *v137 )
  {
    v146 = this->fields.userServantEntity;
    v147 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v141);
    v148 = this->fields.questRestrictionInfo;
    if ( !v148 )
      goto LABEL_288;
    if ( !v146 )
      goto LABEL_288;
    IsGrandServant = (void *)UserServantEntity__GetBonusUpVal(
                               v146,
                               &v262,
                               v147,
                               (System_Int64_array *)IsGrandServant,
                               v148->fields.questId,
                               v148->fields.questPhase,
                               0);
    if ( !v262 )
      goto LABEL_288;
    IsGrandServant = v262->fields.dropList;
    if ( !IsGrandServant )
      goto LABEL_288;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v260,
      (System_Collections_Generic_List_object__o *)IsGrandServant,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    v261 = v260;
    while ( 1 )
    {
      v149 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v261,
               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
      if ( !v149 )
        break;
      if ( !*v137 )
        sub_1C32E7C(v149);
      v152 = (System_Collections_Generic_List_object__o *)(*v137)->fields.dropList;
      if ( !v152 )
        sub_1C32E7C(0);
      v153 = v261.fields._current;
      v154 = v152->fields._items;
      v155 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v152->fields._version;
      if ( !v154 )
        sub_1C32E7C(v152);
      v156 = v152->fields._size;
      if ( (unsigned int)v156 >= LODWORD(v154->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v152,
          v153,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
      }
      else
      {
        v157 = &v154->obj.klass + v156;
        v152->fields._size = v156 + 1;
        v157[4] = (Il2CppClass *)v153;
        sub_1C32BC4((CGThumbnailListItem_o *)(v157 + 4), (int32_t)v153, v150, v151);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v261,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  }
  else
  {
    v198 = this->fields.userServantEntity;
    v199 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v141);
    v200 = this->fields.questRestrictionInfo;
    if ( !v200 || !v198 )
      goto LABEL_288;
    this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                  v198,
                                  v137,
                                  v199,
                                  (System_Int64_array *)IsGrandServant,
                                  v200->fields.questId,
                                  v200->fields.questPhase,
                                  0);
  }
  v201 = this->fields.servantEntity;
  v202 = (EventPersonalMargeUpValInfo_o *)sub_1C32E6C(EventPersonalMargeUpValInfo_TypeInfo);
  EventPersonalMargeUpValInfo___ctor(v202, 0, v201, 0);
  IsGrandServant = this->fields.eventUpValInfo;
  if ( !IsGrandServant )
    goto LABEL_288;
  IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
  if ( !v202 )
    goto LABEL_288;
  EventPersonalMargeUpValInfo__Add(v202, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
  if ( EventPersonalMargeUpValInfo__IsEmpty(v202, 0) )
    return;
  v203 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v203,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( *p_eventUpValItemList )
  {
    if ( !v203 )
      goto LABEL_288;
    System_Collections_Generic_List_object___AddRange(
      v203,
      (System_Collections_Generic_IEnumerable_T__o *)*p_eventUpValItemList,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v202, 0);
  }
  else
  {
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v202, 0);
    if ( !v203 )
      goto LABEL_288;
  }
  System_Collections_Generic_List_object___AddRange(
    v203,
    (System_Collections_Generic_IEnumerable_T__o *)IsGrandServant,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
LABEL_288:
    sub_1C32E7C(IsGrandServant);
  v204 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v203,
           0);
  v32 = (int)v204;
  *p_eventUpValItemList = v204;
  p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
LABEL_229:
  sub_1C32BC4((CGThumbnailListItem_o *)p_equipIdList, v32, v20, v21);
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
      sub_1C32E84(this);
    equipIdList->m_Items[index] = userSvtId;
    this->fields.equipSvtIdList = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, index, method);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)userSvtIdList, (int32_t)method, v3);
  this->fields.equipSvtIdList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, v6, v7);
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
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void PartyOrganizationListViewItem__Set_34149928(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UserServantEntity_o *v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UserServantEntity_o *v19; // x8
  UserServantEntity_o *v20; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  _BOOL4 IsGrandServant; // w0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  _BOOL4 v30; // w8
  int32_t hp; // w20
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v34; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C33425 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33425 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    goto LABEL_17;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v6, v7);
  this->fields.followerInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v10, v11);
  *(_QWORD *)&this->fields.followerGrandGraphId = 0;
  this->fields.followerClassId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_17;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v15;
  *(_QWORD *)&v35.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v35, 0);
  if ( !v13 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v13,
             (int32_t)Instance,
             (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v17, v18);
  this->fields.classId = item->fields.classId;
  *(_QWORD *)&this->fields.cost = *(_QWORD *)&item->fields.cost;
  this->fields.atk = item->fields.atk;
  v19 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  if ( !v19 )
    goto LABEL_17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                v19->fields.limitCount,
                                0);
  v20 = this->fields.userServantEntity;
  this->fields.svtLimitCount = (int)Instance;
  if ( !v20 )
    goto LABEL_17;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v20, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v22, v23);
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
  v30 = IsGrandSameServant_k__BackingField && !IsGrandServant;
  this->fields._IsTempGrandServant_k__BackingField = v30;
  if ( v30 )
  {
    hp = this->fields.hp;
    Instance = (DataManager_o *)PartyOrganizationListViewItem__GetGrandServantInfo(this, v27);
    if ( Instance )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Instance, 0);
      atk = this->fields.atk;
      this->fields.hp = AddedHp + hp;
      Instance = (DataManager_o *)PartyOrganizationListViewItem__GetGrandServantInfo(this, v34);
      if ( Instance )
      {
        this->fields.atk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)Instance, 0) + atk;
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_1C32E7C(Instance);
  }
LABEL_16:
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v28);
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

  if ( (byte_4C33428 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C33428 = 1;
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
    sub_1C32E7C(p_userServantEntity);
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
  sub_1C32BC4((CGThumbnailListItem_o *)p_userServantEntity, (int32_t)v16, notChangeInitPos, method);
  v17 = item->fields.followerInfo;
  this->fields.followerInfo = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)v17, v18, v19);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  v20 = item->fields.servantEntity;
  this->fields.servantEntity = v20;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v20, v21, v22);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  v23 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v23;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v23, v24, v25);
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
  v32 = sub_1C32D5C(v30, int___TypeInfo);
  if ( !v32
    || (*p_equipSvtIdList = (struct System_Int32_array *)v32,
        v33 = sub_1C32D5C(v31, int___TypeInfo),
        LOBYTE(v13) = v57,
        v34 = v33,
        !v33) )
  {
    sub_1C3313C(v31);
LABEL_9:
    v34 = 0;
    *p_equipSvtIdList = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v34, v26, v27);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v35);
  v36 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v36;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v36, v37, v38);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.userServantEntity, (int32_t)userServantEntity, v39, v40);
  item->fields.followerInfo = followerInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v41, v42);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  item->fields.followerIndex = followerIndex;
  sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v43, v44);
  *(_QWORD *)&item->fields.cost = v10;
  *(_QWORD *)&item->fields.atk = v9;
  *(_QWORD *)&item->fields.rarityId = v12;
  *(_QWORD *)&item->fields.frameType = v11;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.commandCodeIdList, (int32_t)commandCodeIdList, v45, v46);
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
  v51 = sub_1C32D5C(v49, int___TypeInfo);
  if ( !v51 || (*v29 = (struct System_Int32_array *)v51, v52 = sub_1C32D5C(v50, int___TypeInfo), v53 = v52, !v52) )
  {
    sub_1C3313C(v50);
LABEL_17:
    v53 = 0;
    *v29 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v53, v47, v48);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v54);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C32BC4(
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
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int64_array **v10; // x22
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Int64_array *v14; // x8
  struct System_Int64_array *v15; // x9
  int64_t v16; // x10
  struct System_Int32_array **p_equipSvtIdList; // x21
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Int32_array **v21; // x22
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Int32_array *v26; // x8
  struct System_Int32_array *v27; // x9
  int32_t v28; // w11
  const MethodInfo *v29; // x2

  if ( (byte_4C33429 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    byte_4C33429 = 1;
  }
  p_equipIdList = &this->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v7 = sub_1C32CC8(long___TypeInfo, 1);
    *p_equipIdList = (struct System_Int64_array *)v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipIdList, v7, v8, v9);
  }
  if ( !item )
    goto LABEL_22;
  v10 = &item->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v11 = sub_1C32CC8(long___TypeInfo, 1);
    *v10 = (struct System_Int64_array *)v11;
    sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.equipIdList, v11, v12, v13);
  }
  v14 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_22;
  if ( !LODWORD(v14->max_length) )
    goto LABEL_23;
  v15 = *v10;
  if ( !*v10 )
    goto LABEL_22;
  if ( !LODWORD(v15->max_length)
    || (v16 = v14->m_Items[0], v14->m_Items[0] = v15->m_Items[0], !LODWORD(v15->max_length)) )
  {
LABEL_23:
    sub_1C32E84(IsNullOrEmpty);
  }
  v15->m_Items[0] = v16;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSvtIdList, 0) )
  {
    v18 = sub_1C32CC8(int___TypeInfo, 1);
    *p_equipSvtIdList = (struct System_Int32_array *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v18, v19, v20);
  }
  v21 = &item->fields.equipSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipSvtIdList, 0);
  if ( IsNullOrEmpty )
  {
    v23 = sub_1C32CC8(int___TypeInfo, 1);
    *v21 = (struct System_Int32_array *)v23;
    sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v23, v24, v25);
  }
  v26 = *p_equipSvtIdList;
  if ( !*p_equipSvtIdList )
    goto LABEL_22;
  if ( !LODWORD(v26->max_length) )
    goto LABEL_23;
  v27 = *v21;
  if ( !*v21 )
LABEL_22:
    sub_1C32E7C(IsNullOrEmpty);
  if ( !LODWORD(v27->max_length) )
    goto LABEL_23;
  v28 = v26->m_Items[0];
  v26->m_Items[0] = v27->m_Items[0];
  v27->m_Items[0] = v28;
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v22);
  PartyOrganizationListViewItem__SetEquipStatus(item, item->fields.equipIdList, v29);
}


void PartyOrganizationListViewItem__UpdateEventEffect(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v2);
}


void PartyOrganizationListViewItem__UpdateServantInfo(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v5; // x21
  struct UserServantEntity_o *v6; // x8
  __int128 v7; // q1
  __int64 v8; // x22
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x8
  int32_t v10; // w20
  Il2CppObject *Master_object; // x21
  __int64 v12; // x22
  __int128 v13; // q0
  struct System_Collections_Generic_List_UserServantEntity__o *v14; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  __int128 v16; // q0
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
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

  if ( (byte_4C3344F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3344F = 1;
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
    v10 = 0;
    while ( v10 < equipUserServantEntityList->fields._size )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
      IsNullOrEmpty = sub_1C32CC8(long___TypeInfo, 1);
      if ( !this->fields.equipUserServantEntityList )
        goto LABEL_44;
      v12 = IsNullOrEmpty;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                 v10,
                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v13 = *(_OWORD *)(IsNullOrEmpty + 32);
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
      *(_OWORD *)&v37.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v36 = v37;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v36, 0);
      if ( !v12 )
        goto LABEL_44;
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v12 + 32) = IsNullOrEmpty;
      if ( !Master_object )
        goto LABEL_44;
      IsNullOrEmpty = DataMasterBase_object__object__long___isEntityExistsFromId(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (System_Int64_array *)v12,
                        (const MethodInfo_3398370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v14 = this->fields.equipUserServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !this->fields.equipUserServantEntityList )
          goto LABEL_44;
        v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                   v10,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_44;
        v16 = *(_OWORD *)(IsNullOrEmpty + 32);
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
        *(_OWORD *)&v37.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v37;
        IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v35, 0);
        if ( !v15 )
          goto LABEL_44;
        IsNullOrEmpty = (__int64)DataMasterBase_object__object__long___GetEntity(
                                   v15,
                                   IsNullOrEmpty,
                                   (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !v14 )
          goto LABEL_44;
        System_Collections_Generic_List_object___set_Item(
          (System_Collections_Generic_List_object__o *)v14,
          v10,
          (Il2CppObject *)IsNullOrEmpty,
          (const MethodInfo_3798540 *)Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
      }
      else
      {
        this->fields._IsDisappearEquip_k__BackingField = 1;
      }
      equipUserServantEntityList = this->fields.equipUserServantEntityList;
      ++v10;
      if ( !equipUserServantEntityList )
        goto LABEL_44;
    }
  }
  p_userServantEntity = &this->fields.userServantEntity;
  if ( this->fields.userServantEntity && !this->fields._IsDisappearSvt_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
    IsNullOrEmpty = sub_1C32CC8(long___TypeInfo, 1);
    v6 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_44;
    v7 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
    v8 = IsNullOrEmpty;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v37;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v34, 0);
    if ( !v8 )
      goto LABEL_44;
    if ( !*(_DWORD *)(v8 + 24) )
LABEL_69:
      sub_1C32E84(IsNullOrEmpty);
    *(_QWORD *)(v8 + 32) = IsNullOrEmpty;
    if ( !v5 )
      goto LABEL_44;
    if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v5,
            (System_Int64_array *)v8,
            (const MethodInfo_3398370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
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
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
    v17 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_44;
    v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v18;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v37;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v33, 0);
    if ( !v19 )
      goto LABEL_44;
    v20 = DataMasterBase_object__object__long___GetEntity(
            v19,
            IsNullOrEmpty,
            (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v20;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)v20, v21, v22);
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
    v23 = *(_DWORD *)(IsNullOrEmpty + 40);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    this->fields.actualRarity = v23;
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    IsNullOrEmpty = UserServantEntity__GetFrameType((UserServantEntity_o *)IsNullOrEmpty, v23, 0);
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
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v39, 0);
    v27 = this->fields.userServantEntity;
    this->fields.svtLimitCount = IsNullOrEmpty;
    if ( !v27 )
      goto LABEL_44;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v27, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v29, v30);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    this->fields._IsGrandServant_k__BackingField = UserServantEntity__IsGrandServant(
                                                     (UserServantEntity_o *)IsNullOrEmpty,
                                                     0);
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      sub_1C32E7C(IsNullOrEmpty);
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

  if ( (byte_4C3344E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C32C20(&PartyOrganizationListViewObject_TypeInfo);
    byte_4C3344E = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
         viewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v6 = (PartyOrganizationListViewItem_o *)sub_1C3313C(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_34151644(v6, v7, v8);
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
      sub_1C32E7C(this);
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
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v7; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v11; // x0

  if ( (byte_4C3344A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3344A = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v4 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v7);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(SvtId, 0);
    if ( !MasterData_object )
LABEL_17:
      sub_1C32E7C(Instance);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v4, 0);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32D4C )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32D4C = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  return v11->static_fields->unknownNameText;
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
  void *equipServantEntityList; // x0

  if ( (byte_4C33439 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C33439 = 1;
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
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C32E7C(equipServantEntityList);
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
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w22
  int32_t DisplayEquipIndex_k__BackingField; // w21
  int32_t ReturnTypeByQuestId; // w3
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x8
  int32_t v9; // w1
  __int64 v10; // x19
  struct System_Object_array *items; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C3343E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3343E = 1;
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
        ? (v9 = 0)
        : (v9 = this->fields._DisplayEquipIndex_k__BackingField),
          (IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          IsNullOrEmpty,
                                                                          v9,
                                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C32E7C(IsNullOrEmpty);
    }
    items = IsNullOrEmpty[2].fields._items;
    v10 = *(_QWORD *)&IsNullOrEmpty[2].fields._size;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = items;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v14, 0);
  }
}


int32_t PartyOrganizationListViewItem__get_EquipLimitCountMax(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  void *equipServantEntityList; // x0

  if ( (byte_4C3343F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C3343F = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return 0;
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C32E7C(equipServantEntityList);
  }
  return *((_DWORD *)equipServantEntityList + 22);
}


System_String_o *PartyOrganizationListViewItem__get_EquipName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0

  if ( (byte_4C33440 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33440 = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return v3;
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                equipServantEntityList,
                                                                                0,
                                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C32E7C(equipServantEntityList);
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
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w1
  struct System_Object_array *v8; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4C3343C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3343C = 1;
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
                                                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0) )
    {
      sub_1C32E7C(equipServantEntityList);
    }
    items = equipServantEntityList->fields._items;
    v5 = *(_QWORD *)&equipServantEntityList->fields._size;
  }
  v8 = items;
  v9 = v5;
  *(_QWORD *)&result.fields.fakeValue = v9;
  *(_QWORD *)&result.fields.currentCryptoKey = v8;
  return result;
}


System_Collections_Generic_List_int__o *PartyOrganizationListViewItem__get_EquipSvtIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  __int64 v7; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C3343D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3343D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)equipServantEntityList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__) )
  {
    if ( v13.fields._current )
    {
      klass = v13.fields._current[1].klass;
      monitor = v13.fields._current[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v14.fields.currentCryptoKey = klass;
      *(_QWORD *)&v14.fields.fakeValue = monitor;
      v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v14, 0);
      if ( !v3 )
        sub_1C32E7C(v7);
      items = v3->fields._items;
      v9 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(v7);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v7,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v7;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
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
  bool IsNullOrEmpty; // w8
  int64_t result; // x0
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w1
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4C3343A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3343A = 1;
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
                                                                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C32E7C(equipUserServantEntityList);
    }
    v7 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
    *(_OWORD *)&v9.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v8 = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v8, 0);
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

  if ( (byte_4C3344D & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C3344D = 1;
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
  int32_t atk; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v7; // w2
  int v8; // w22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C33436 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4C33436 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0) )
      return this->fields.atk;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v8 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v11,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v11.fields._current )
          v8 += *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&qword_108);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.atk + v8;
    }
LABEL_23:
    sub_1C32E7C(equipUserServantEntityList);
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
        v7 = (int)equipUserServantEntityList;
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 2;
    }
    if ( followerInfo )
    {
      atk += FollowerInfo__getEquipAtk(followerInfo, followerIndex, v7, 0);
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
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0

  if ( (byte_4C33438 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C33438 = 1;
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
                                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
      sub_1C32E7C(equipServantEntityList);
    }
    cost += LODWORD(equipServantEntityList[3].fields._syncRoot);
  }
  return cost;
}


int32_t PartyOrganizationListViewItem__get_MargeHp(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  int32_t hp; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v7; // w2
  int v8; // w22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C33437 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4C33437 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0) )
      return this->fields.hp;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v8 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v11,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v11.fields._current )
          v8 += *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&qword_108 + 4);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.hp + v8;
    }
LABEL_23:
    sub_1C32E7C(equipUserServantEntityList);
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
        v7 = (int)equipUserServantEntityList;
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 2;
    }
    if ( followerInfo )
    {
      hp += FollowerInfo__getEquipHp(followerInfo, followerIndex, v7, 0);
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

  if ( (byte_4C33433 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33433 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantAddMaster___);
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (ServantAddMaster_o *)Master_object;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, v4);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(SvtId, 0);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, v8);
  if ( !v5 )
    sub_1C32E7C(ServantName);
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

  if ( (byte_4C33432 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C33432 = 1;
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
  struct FollowerInfo_o *v6; // x8

  if ( (byte_4C33434 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19066/*"error"*/);
    byte_4C33434 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0)) )
  {
    v6 = this->fields.followerInfo;
    if ( !v6 )
      sub_1C32E7C(IsNpc);
    return v6->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19066/*"error"*/;
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
  sub_1C32BC4(
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
  sub_1C32BC4(
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

  if ( (byte_4C33457 & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4C33457 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_1(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4C33458 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33458 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_2(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C32E7C(this);
  return script->fields.eventCampaignBonusDetailName;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_3(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4C33459 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33459 = 1;
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

  if ( (byte_4C3345A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_long___);
    this = (PartyOrganizationListViewItem___c_o *)sub_1C32C20(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4C3345A = 1;
  }
  if ( !id )
    sub_1C32E7C(this);
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
    v7 = sub_1C83438(id, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(id, *(_QWORD *)(v7 + 8)) >= 1
      && System_Linq_Enumerable__Count_long_(
           (System_Collections_Generic_IEnumerable_TSource__o *)id,
           (const MethodInfo_30FD3AC *)Method_System_Linq_Enumerable_Count_long___) > 1;
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

  if ( (byte_4C3345B & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem___c_o *)sub_1C32C20(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4C3345B = 1;
  }
  if ( !group )
    sub_1C32E7C(this);
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
    v7 = sub_1C83438(group, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__161_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C32E7C(this);
  return drop->fields.eventId;
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__161_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(equipIdList->max_length) )
    sub_1C32E84(this);
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
  System_Int32_array *individuality; // x19
  System_Func_int__bool__o *v8; // x20

  if ( (byte_4C3345C & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_PartyOrganizationListViewItem___c__DisplayClass365_1__GetCanOrganizationGrandSvtIdList_b__1__);
    sub_1C32C20(&PartyOrganizationListViewItem___c__DisplayClass365_1_TypeInfo);
    byte_4C3345C = 1;
  }
  v5 = sub_1C32E6C(PartyOrganizationListViewItem___c__DisplayClass365_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v8 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_PartyOrganizationListViewItem___c__DisplayClass365_1__GetCanOrganizationGrandSvtIdList_b__1__,
    0);
  return BasicHelper__Any_int__51143952(
           individuality,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
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
    sub_1C32E7C(0);
  return GrandGraphEntity__CanSelectToGrand(grandGraphEntity, x, 0);
}