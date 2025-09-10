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

  if ( (byte_4C22D4D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    byte_4C22D4D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v8, v9, v10);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
}


void PartyOrganizationListViewItem___ctor_33993044(
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
  __int64 v72; // x2
  int v73; // w8
  void *v74; // x23
  unsigned int v75; // w29
  __int64 v76; // x25
  __int64 v77; // x26
  __int64 v78; // x27
  int32_t v79; // w26
  int32_t v80; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  bool IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v85; // x8
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v87; // x8
  UserEventDataLostEntity_o *v88; // x22
  __int64 v89; // x23
  __int64 v90; // x25
  struct ServantEntity_o *v91; // x8
  char v92; // w22
  UserEventDataLostEntity_o *v93; // x23
  __int64 v94; // x24
  __int64 v95; // x25
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v98; // x23
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x1
  int32_t v102; // w21
  __int64 v103; // x24
  __int64 v104; // x25
  int32_t v105; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // x2
  QuestRestrictionInfo_o *v109; // x8
  bool IsNotClassBoard; // w20
  QuestPhaseEntity_o *v111; // [xsp+10h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *v112; // [xsp+18h] [xbp-78h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+20h] [xbp-70h] BYREF
  bool isWhole; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  if ( (byte_4C22D4F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D4F = 1;
  }
  isWhole = 0;
  v112 = 0;
  entity = 0;
  v111 = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v23;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v23, v24, v25);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v31,
    v32);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v34, v35);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v41, v42);
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
  ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_148;
  ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                          (DataManager_o *)ReturnTypeByQuestId,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v51;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v51, v53, v54);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v66, v67);
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
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_41527164(
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
    && (ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
                                        questRestrictionInfo,
                                        v37,
                                        0),
        ((unsigned __int8)ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_148;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                            (DataManager_o *)ReturnTypeByQuestId,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    ReturnTypeByQuestId = UserServantMaster__getOrganizationList((UserServantMaster_o *)ReturnTypeByQuestId, 0);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    v73 = *((_DWORD *)ReturnTypeByQuestId + 6);
    v74 = ReturnTypeByQuestId;
    if ( v73 >= 1 )
    {
      v75 = 0;
      while ( 1 )
      {
        if ( v75 >= v73 )
          sub_1C2D6F4(ReturnTypeByQuestId, v37, v72);
        v76 = *((_QWORD *)v74 + (int)v75 + 4);
        if ( !v76 )
          goto LABEL_148;
        v78 = *(_QWORD *)(v76 + 80);
        v77 = *(_QWORD *)(v76 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v115.fields.currentCryptoKey = v78;
        *(_QWORD *)&v115.fields.fakeValue = v77;
        v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v115, 0);
        v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v76 + 96),
                0);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v76, 0, 0);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v79,
                                 v80,
                                 DispLimitCount,
                                 0);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v76, 0);
        ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestriction_43187812(
                                        questRestrictionInfo,
                                        &isWhole,
                                        ServantIndividuality,
                                        Rarity,
                                        *(_DWORD *)(v76 + 256),
                                        this->fields._InitPos_k__BackingField,
                                        1,
                                        0);
        if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
        {
          ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
                                          questRestrictionInfo,
                                          ServantIndividuality,
                                          this->fields._InitPos_k__BackingField,
                                          0);
          if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
            break;
        }
        v73 = *((_DWORD *)v74 + 6);
        if ( (int)++v75 >= v73 )
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
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  v85 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v85 && v85->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
                                    &v112,
                                    *(_QWORD *)(*((_QWORD *)ReturnTypeByQuestId + 23) + 64LL),
                                    (*p_questRestrictionInfo)->fields.dataLostBattleId,
                                    0);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      v87 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_148;
      v88 = v112;
      v90 = *(_QWORD *)&v87->fields.id.fields.currentCryptoKey;
      v89 = *(_QWORD *)&v87->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v116.fields.currentCryptoKey = v90;
      *(_QWORD *)&v116.fields.fakeValue = v89;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v116, 0);
      if ( !v88 )
        goto LABEL_148;
      ReturnTypeByQuestId = (void *)UserEventDataLostEntity__IsRestart(v88, (int32_t)ReturnTypeByQuestId, 0);
      v91 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_148;
      v92 = (char)ReturnTypeByQuestId;
      v93 = v112;
      v95 = *(_QWORD *)&v91->fields.id.fields.currentCryptoKey;
      v94 = *(_QWORD *)&v91->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v117.fields.currentCryptoKey = v95;
      *(_QWORD *)&v117.fields.fakeValue = v94;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v117, 0);
      if ( !v93 )
        goto LABEL_148;
      if ( (v92 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v93,
                                                         (int32_t)ReturnTypeByQuestId,
                                                         0);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v93, (int32_t)ReturnTypeByQuestId, 0) )
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
  v96 = this->fields.questRestrictionInfo;
  if ( v96 )
  {
    eventId = v96->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_148;
    v98 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0) )
    {
      ReturnTypeByQuestId = *p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_148;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v99) )
        {
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v101);
          if ( !ReturnTypeByQuestId )
            goto LABEL_148;
          v102 = *((_DWORD *)ReturnTypeByQuestId + 60);
          this->fields._SvtPoint_k__BackingField = v102;
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v37);
          if ( !ReturnTypeByQuestId )
            goto LABEL_148;
          v104 = *((_QWORD *)ReturnTypeByQuestId + 6);
          v103 = *((_QWORD *)ReturnTypeByQuestId + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v118.fields.currentCryptoKey = v104;
          *(_QWORD *)&v118.fields.fakeValue = v103;
          v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v118, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v98, eventId, v102, v105, 0);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v100);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v37) )
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
      ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v111,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0) )
        {
          ReturnTypeByQuestId = v111;
          if ( !v111 )
            goto LABEL_148;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v111, 0);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v37);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v109) = IsNotClassBoard
                       | ServantLeaderInfo__IsNotClassBoardNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0);
          goto LABEL_147;
        }
      }
LABEL_148:
      sub_1C2D6EC(ReturnTypeByQuestId, v37);
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


void PartyOrganizationListViewItem___ctor_34019620(
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
  __int64 v102; // x2
  int v103; // w8
  __int64 v104; // x24
  unsigned int v105; // w28
  __int64 v106; // x25
  __int64 v107; // x19
  __int64 v108; // x26
  int32_t v109; // w19
  int32_t v110; // w26
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  bool v114; // w8
  int32_t v115; // w22
  EventServantPointRankMaster_o *v116; // x23
  UserServantEntity_o *v117; // x8
  __int128 v118; // q0
  UserEventServantPointMaster_o *v119; // x24
  int64_t v120; // x25
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v122; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v125; // x2
  UserServantEntity_o *v126; // x8
  __int128 v127; // q0
  Il2CppObject *v128; // x22
  UserServantEntity_o *v129; // x8
  __int128 v130; // q0
  __int64 v131; // x23
  PartyOrganizationListViewItem_o *v132; // x0
  int32_t v133; // w1
  const MethodInfo *v134; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+30h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+50h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+70h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+90h] [xbp-B0h]
  UserEventServantPointEntity_o *v140; // [xsp+B8h] [xbp-88h] BYREF
  QuestPhaseEntity_o *v141; // [xsp+C0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+CCh] [xbp-74h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+D0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16

  if ( (byte_4C22D4E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D4E = 1;
  }
  entity = 0;
  recoverAt = 0;
  isWhole = 0;
  v140 = 0;
  v141 = 0;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v19;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v22;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v22, v23, v24);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v28, v29);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v30,
    v31);
  this->fields.followerInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v32, v33);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v34, v35);
  this->fields._EquipFriendShipSkillChange_k__BackingField = isChangeFriendShipSvtEquipSkill;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v38 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v41 = *(_QWORD *)&v38[5].fields.currentCryptoKey;
  v40 = *(_QWORD *)&v38[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v145.fields.currentCryptoKey = v41;
  *(_QWORD *)&v145.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v145, 0);
  if ( !v39 )
    goto LABEL_153;
  v42 = DataMasterBase_object__object__int___GetEntity(
          v39,
          Instance,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v42;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v42, v44, v45);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v46 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userServantEntity)[5], 0);
  if ( !*p_userServantEntity )
    goto LABEL_153;
  v47 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userServantEntity)[6], 0);
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
    sub_1C2D434((CGThumbnailListItem_o *)p_equipSvtIdList, v56, v48, v49);
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
    *(_QWORD *)&v146.fields.currentCryptoKey = v61;
    *(_QWORD *)&v146.fields.fakeValue = v60;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v146, 0);
    v62 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v62 )
      goto LABEL_153;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v62, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v64, v65);
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
      *(_QWORD *)&v147.fields.currentCryptoKey = v69;
      *(_QWORD *)&v147.fields.fakeValue = v68;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v147, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v70 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_userServantEntity)[6], 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v71 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      Instance = QuestRestrictionInfo__IsRestriction_43187532(
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
        *(_QWORD *)&v148.fields.currentCryptoKey = v75;
        *(_QWORD *)&v148.fields.fakeValue = v74;
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v148, 0);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_153;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
      *(_QWORD *)&v149.fields.currentCryptoKey = v84;
      *(_QWORD *)&v149.fields.fakeValue = v83;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v149, 0);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_153;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v88 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v89 = (UserEventAlloutBattleMaster_o *)Instance;
      v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
      v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v150.fields.currentCryptoKey = v91;
      *(_QWORD *)&v150.fields.fakeValue = v90;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v150, 0);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
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
        *(_QWORD *)&v151.fields.currentCryptoKey = v96;
        *(_QWORD *)&v151.fields.fakeValue = v95;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v151, 0);
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
        *(_QWORD *)&v152.fields.currentCryptoKey = v101;
        *(_QWORD *)&v152.fields.fakeValue = v100;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v152, 0);
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
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             0) )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_153;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_153;
        v103 = *(_DWORD *)(Instance + 24);
        v104 = Instance;
        if ( v103 >= 1 )
        {
          v105 = 0;
          while ( 1 )
          {
            if ( v105 >= v103 )
              goto LABEL_154;
            v106 = *(_QWORD *)(v104 + 8LL * (int)v105 + 32);
            if ( !v106 )
              goto LABEL_153;
            v108 = *(_QWORD *)(v106 + 80);
            v107 = *(_QWORD *)(v106 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v153.fields.currentCryptoKey = v108;
            *(_QWORD *)&v153.fields.fakeValue = v107;
            v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v153, 0);
            v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v106 + 96),
                     0);
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v106, 0, 0);
            ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                     questRestrictionInfo,
                                     v109,
                                     v110,
                                     DispLimitCount,
                                     0);
            Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v106, 0);
            Instance = QuestRestrictionInfo__IsRestriction_43187812(
                         questRestrictionInfo,
                         &isWhole,
                         ServantIndividuality,
                         Rarity,
                         *(_DWORD *)(v106 + 256),
                         this->fields._InitPos_k__BackingField,
                         1,
                         0);
            if ( (Instance & 1) == 0 )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
                           questRestrictionInfo,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0);
              if ( (Instance & 1) == 0 )
                break;
            }
            v103 = *(_DWORD *)(v104 + 24);
            if ( (int)++v105 >= v103 )
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
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        if ( !Instance )
          goto LABEL_153;
        Instance = QuestPhaseMaster__TryGetEntity(
                     (QuestPhaseMaster_o *)Instance,
                     &v141,
                     questRestrictionInfo->fields.questId,
                     questRestrictionInfo->fields.questPhase,
                     0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v141;
          if ( !v141 )
            goto LABEL_153;
          Instance = QuestPhaseEntity__IsUseGrandBoard(v141, 0);
          v114 = (Instance & 1) != 0 && this->fields._IsGrandServant_k__BackingField;
          this->fields._IsUseGrandBoard_k__BackingField = v114;
        }
      }
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_153;
    v115 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_153;
    v116 = (EventServantPointRankMaster_o *)Instance;
    Instance = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v115, 0);
    if ( (Instance & 1) != 0 )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v117 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v118 = *(_OWORD *)&v117->fields.userId.fields.fakeValue;
      v119 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)&v117->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v139.fields.fakeValue = v118;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v138 = v139;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v138, 0);
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v120 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0);
      if ( !v119 )
        goto LABEL_153;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v119, &v140, v120, v115, Instance, 0) )
      {
        Instance = (__int64)v140;
        if ( !v140 )
          goto LABEL_153;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v140, 0);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v122 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v116, v115, v122, SvtId, 0);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v115, v125);
    }
    v126 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_153;
    v127 = *(_OWORD *)&v126->fields.id.fields.fakeValue;
    *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)&v126->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v139.fields.fakeValue = v127;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v137 = v139;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v137, 0) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v128 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1C2D538(long___TypeInfo, 1);
      v129 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_153;
      v130 = *(_OWORD *)&v129->fields.id.fields.fakeValue;
      v131 = Instance;
      *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)&v129->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v139.fields.fakeValue = v130;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v136 = v139;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v136, 0);
      if ( !v131 )
        goto LABEL_153;
      if ( !*(_DWORD *)(v131 + 24) )
LABEL_154:
        sub_1C2D6F4(Instance, v37, v102);
      *(_QWORD *)(v131 + 32) = Instance;
      if ( !v128 )
        goto LABEL_153;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v128,
              (System_Int64_array *)v131,
              (const MethodInfo_33898D0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
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
    sub_1C2D6EC(Instance, v37);
  }
  v52 = v51;
  v53 = (struct System_Int32_array *)sub_1C2D5CC(v51, int___TypeInfo);
  if ( v53 )
  {
    this->fields.equipSvtIdList = v53;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v55 = sub_1C2D5CC(v52, int___TypeInfo);
    if ( v55 )
    {
      v56 = v55;
      goto LABEL_21;
    }
  }
  v132 = (PartyOrganizationListViewItem_o *)sub_1C2D9AC(v52);
  PartyOrganizationListViewItem__SetCanGetBuddyPoint(v132, v133, v134);
}


void PartyOrganizationListViewItem___ctor_34030324(
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
  __int64 v30; // x2
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
  if ( (byte_4C22D50 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D50 = 1;
  }
  isWhole = 0;
  entity = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v17, v18, v19);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v20, v21);
  this->fields.followerInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
  this->fields.isFollower = v13;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerGrandGraphId = 0;
  this->fields.followerClassId = 0;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.servantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v28, v29);
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
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(questRestrictionInfo, v32, 0) )
  {
    this->fields.frameType = 9;
    this->fields.isMyServantOrNpcRestriction = 1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_49;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          sub_1C2D6F4(Instance, v34, v30);
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
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v54, 0);
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
        Instance = (void *)QuestRestrictionInfo__IsRestriction_43187812(
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
          Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v30, v31);
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_49:
    sub_1C2D6EC(Instance, v34);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v47);
  }
LABEL_45:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0, v47);
}


void PartyOrganizationListViewItem___ctor_34031660(
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

  if ( (byte_4C22D51 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D51 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v20, v21, v22);
  *(_QWORD *)&this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.userServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v23, v24);
  this->fields.questRestrictionInfo = questRestriction;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestriction, v25, v26);
  this->fields.followerInfo = follower;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v27, v28);
  this->fields.setupInfo = eventUpValSetupInfo;
  *(_WORD *)&this->fields.isFollower = follower != 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)eventUpValSetupInfo, v29, v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v35, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0 )
  {
LABEL_15:
    sub_1C2D6EC(Instance, v32);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_42450052(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             isGrandServant,
                             0);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v41, v42);
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
  if ( (byte_4C22D82 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Single_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C2D490(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C2D490(&System_Func_EventEntity_ScriptData__string__TypeInfo);
    sub_1C2D490(&System_Func_string__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_0__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_1__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_2__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_3__);
    sub_1C2D490(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D82 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v6 )
    sub_1C2D6EC(Instance, v8);
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)v6,
                                                                         (int64_t)Instance[7].klass,
                                                                         0);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventQuestMaster___);
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( FriendshipUpCampaigns )
  {
    v81 = (EventQuestMaster_o *)v10;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v85,
      FriendshipUpCampaigns,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v86 = v85;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v86,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v12 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v86,
            (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          return;
        }
        current = (EventCampaignEntity_o *)v86.fields._current;
        if ( !v86.fields._current )
          sub_1C2D6EC(v12, v13);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v86.fields._current[2].monitor;
        if ( !monitor || !monitor[1].monitor )
          goto LABEL_29;
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C2D6EC(v12, v13);
        v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v87.fields.currentCryptoKey = v17;
        *(_QWORD *)&v87.fields.fakeValue = v18;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v87, 0);
        if ( System_Linq_Enumerable__Contains_int_(
               monitor,
               v19,
               (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
LABEL_29:
          if ( !(*v4)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v4);
          v20 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
          v22 = this->fields.userServantEntity;
          if ( !v22 )
            sub_1C2D6EC(v20, v21);
          v23 = (UserServantMaster_o *)v20;
          v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
          v25 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v88.fields.currentCryptoKey = v24;
          *(_QWORD *)&v88.fields.fakeValue = v25;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v88, 0);
          if ( !v23 )
            sub_1C2D6EC(v26, (unsigned int)v26);
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
              sub_1C2D6EC(HeroineData, v28);
            questId = questRestrictionInfo->fields.questId;
            questPhase = questRestrictionInfo->fields.questPhase;
            v33 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !v33 )
              sub_1C2D6EC(0, v34);
            if ( !v81 )
              sub_1C2D6EC(v33, v34);
            if ( !EventQuestMaster__IsEventNotIncluded(v81, eventId, questId, questPhase, 7, (int64_t)v33[7].klass, 0) )
              break;
          }
        }
      }
      v35 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_41495560(v35, eventId, 0);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId(current, 0);
      if ( !v11 )
        sub_1C2D6EC(OnlyMaxFuncGroupId, v37);
      v38 = OnlyMaxFuncGroupId;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v11,
                 eventId,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1C2D6EC(0, v40);
      v41 = v4;
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)Entity[7].monitor;
      if ( !v42 )
        sub_1C2D6EC(Entity, v40);
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
        _9__357_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__357_0,
          v45,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_0__,
          0);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__357_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__357_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__357_0, (int32_t)_9__357_0, v47, v48);
      }
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v42,
                                                                   (System_Func_TSource__TResult__o *)_9__357_0,
                                                                   (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
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
        _9__357_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__357_1,
          v52,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_1__,
          0);
        v53 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v53->__9__357_1 = (struct System_Func_string__bool__o *)_9__357_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v53->__9__357_1, (int32_t)_9__357_1, v54, v55);
      }
      v56 = System_Linq_Enumerable__Single_object__51422732(
              v49,
              (System_Func_TSource__bool__o *)_9__357_1,
              (const MethodInfo_310A60C *)Method_System_Linq_Enumerable_Single_string___);
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
        _9__357_2 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__357_2,
          v59,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_2__,
          0);
        v60 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v60->__9__357_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__357_2;
        sub_1C2D434((CGThumbnailListItem_o *)&v60->__9__357_2, (int32_t)_9__357_2, v61, v62);
      }
      v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v42,
                                                                   (System_Func_TSource__TResult__o *)_9__357_2,
                                                                   (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
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
        _9__357_3 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__357_3,
          v66,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__357_3__,
          0);
        v67 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v67->__9__357_3 = (struct System_Func_string__bool__o *)_9__357_3;
        sub_1C2D434((CGThumbnailListItem_o *)&v67->__9__357_3, (int32_t)_9__357_3, v68, v69);
      }
      v70 = System_Linq_Enumerable__Single_object__51422732(
              v63,
              (System_Func_TSource__bool__o *)_9__357_3,
              (const MethodInfo_310A60C *)Method_System_Linq_Enumerable_Single_string___);
LABEL_62:
      v4 = v41;
      FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !v35 )
        sub_1C2D6EC(FriendshipBonusValue, v72);
      EventMargeItemUpValInfo__SetFriendshipUpBonus_41495664(
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
        sub_1C2D6EC(0, v73);
      items = v76->fields._items;
      v78 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v76->fields._version;
      if ( !items )
        sub_1C2D6EC(v76, v73);
      size = v76->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v35,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + size;
        v76->fields._size = size + 1;
        v80[4] = (Il2CppClass *)v35;
        sub_1C2D434((CGThumbnailListItem_o *)(v80 + 4), (int32_t)v35, v74, v75);
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

  if ( (byte_4C22D84 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_GroupBy_long__long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
    sub_1C2D490(&System_Func_long__long__TypeInfo);
    sub_1C2D490(&System_Func_IGrouping_long__long___long__TypeInfo);
    sub_1C2D490(&System_Func_IGrouping_long__long___bool__TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_0__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_1__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_2__);
    sub_1C2D490(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4C22D84 = 1;
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
    _9__361_0 = (System_Func_long__long__o *)sub_1C2D6DC(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__361_0,
      v7,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_0__,
      0);
    static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__361_0 = _9__361_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__361_0, (int32_t)_9__361_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__GroupBy_long__long_(
          equipIdList,
          (System_Func_TSource__TKey__o *)_9__361_0,
          (const MethodInfo_30F8C08 *)Method_System_Linq_Enumerable_GroupBy_long__long___);
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
    _9__361_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_IGrouping_long__long___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__361_1,
      v15,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_1__,
      0);
    v16 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v16->__9__361_1 = (struct System_Func_IGrouping_long__long___bool__o *)_9__361_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v16->__9__361_1, (int32_t)_9__361_1, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)_9__361_1,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
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
    _9__361_2 = (System_Func_object__long__o *)sub_1C2D6DC(System_Func_IGrouping_long__long___long__TypeInfo);
    System_Func_object__long____ctor(
      _9__361_2,
      v23,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__361_2__,
      0);
    v24 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v24->__9__361_2 = (struct System_Func_IGrouping_long__long___long__o *)_9__361_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v24->__9__361_2, (int32_t)_9__361_2, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v21,
                                                               (System_Func_TSource__TResult__o *)_9__361_2,
                                                               (const MethodInfo_3104D28 *)Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
  return System_Linq_Enumerable__ToArray_long_(
           v27,
           (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
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
  bool IsUniqueIndividualityRestriction_42940612; // w0
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
  bool IsUniqueIndividualityRestriction_41527832; // w0
  const MethodInfo *v67; // x1
  QuestRestrictionInfo_o *v68; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_43193904; // w0
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

  if ( (byte_4C22D5E & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D5E = 1;
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
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v80, 0);
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
      userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43187532(
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
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
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
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v81, 0);
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
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43187812(
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
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
                                                       (QuestRestrictionInfo_o *)userServantEntity,
                                                       this->fields._InitPos_k__BackingField,
                                                       0);
          if ( ((unsigned __int8)userServantEntity & 1) != 0 )
          {
            userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !userServantEntity )
              goto LABEL_92;
            userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
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
    userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_41527640(
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
    IsUniqueIndividualityRestriction_41527832 = FollowerInfo__IsUniqueIndividualityRestriction_41527832(
                                                  v63,
                                                  v64,
                                                  v62,
                                                  partyItem,
                                                  num,
                                                  v65,
                                                  0);
    v68 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41527832;
    if ( v68 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v67);
      IsFixedSupportPosition_43193904 = QuestRestrictionInfo__IsFixedSupportPosition_43193904(
                                          v68,
                                          num,
                                          ServantLeader,
                                          0);
      v71 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_43193904;
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
          v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
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
    userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                 v78,
                                                 0);
    v12 = this->fields.userServantEntity;
    if ( v12 )
    {
      v13 = (int)userServantEntity;
      userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_43187532(
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
            userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                         v79,
                                                         0);
            v21 = this->fields.userServantEntity;
            if ( v21 )
            {
              v22 = (int)userServantEntity;
              userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
    sub_1C2D6EC(userServantEntity, v11);
  }
  *(_WORD *)&this->fields.isQuestRestriction = 0;
LABEL_42:
  userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_42940232(
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
  IsUniqueIndividualityRestriction_42940612 = UserServantEntity__IsUniqueIndividualityRestriction_42940612(
                                                v40,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0);
  v43 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_42940612;
  if ( v43 )
  {
    v44 = PartyOrganizationListViewItem__get_SvtId(this, v42);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v44, 0);
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
  const MethodInfo *v2; // x2
  PartyOrganizationListViewItem_o *v3; // x19
  struct System_Int64_array *equipIdList; // x8
  int32_t v5; // w20

  v3 = this;
  if ( (byte_4C22D5D & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C22D5D = 1;
  }
  equipIdList = v3->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !LODWORD(equipIdList->max_length) )
      goto LABEL_16;
    if ( equipIdList->m_Items[0] )
    {
      this = (PartyOrganizationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v3->fields.equipServantEntityList,
                                                  0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v5 = 0;
      }
      else
      {
        this = (PartyOrganizationListViewItem_o *)v3->fields.equipServantEntityList;
        if ( !this )
          goto LABEL_17;
        this = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    0,
                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
        if ( !this )
          goto LABEL_17;
        v5 = (int32_t)this->fields.equipIdList;
      }
      method = (const MethodInfo *)v3->fields.equipIdList;
      if ( method )
      {
        if ( LODWORD(method->name) )
        {
          method->klass = 0;
          PartyOrganizationListViewItem__SetEquipStatus(v3, (System_Int64_array *)method, v2);
          return v5;
        }
LABEL_16:
        sub_1C2D6F4(this, method, v2);
      }
LABEL_17:
      sub_1C2D6EC(this, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v2, v3);
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

  if ( (byte_4C22D52 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    byte_4C22D52 = 1;
  }
  index = idx;
  if ( idx < 0 )
    index = this->fields.index;
  v6 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor(v6, index, v7);
  if ( !v6 )
    sub_1C2D6EC(v8, v9);
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
  if ( (byte_4C22D60 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22D60 = 1;
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
              sub_1C2D6F4(this, item, method);
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
    this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                &v17,
                                                0);
    v9 = item->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      v11 = this;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v10;
      this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                                  &v16,
                                                  0);
      if ( v11 != this )
        return 0;
      goto LABEL_15;
    }
LABEL_29:
    sub_1C2D6EC(this, item);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v5, v6);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0;
  *(_QWORD *)&this->fields.followerIndex = 0;
  *(_QWORD *)&this->fields.followerClassId = 0;
  HIDWORD(this->fields.equipIdList) = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_QWORD *)&this->fields.cost = 0;
  *(_QWORD *)&this->fields.atk = 0;
  *(_QWORD *)&this->fields.rarityId = 0;
  *(_QWORD *)&this->fields.frameType = 9;
  this->fields.commandCodeIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
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

  if ( (byte_4C22D81 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D81 = 1;
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
                                                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
                                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipServantEntityList )
LABEL_23:
    sub_1C2D6EC(equipServantEntityList, *(_QWORD *)&index);
  items = equipServantEntityList[2].fields._items;
  v7 = *(_QWORD *)&equipServantEntityList[2].fields._size;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = items;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  EquipLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16, 0);
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

  if ( (byte_4C22D78 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&UINarrowFigureRender_TypeInfo);
    byte_4C22D78 = 1;
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
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_27:
    sub_1C2D6EC(SvtId, v7);
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
  const MethodInfo_338A340 **v16; // x20
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
  const MethodInfo_338A340 **v34; // x23
  PartyOrganizationListViewItem___c__DisplayClass365_0_c **v35; // x20
  System_Collections_IEnumerator_c **v36; // x21
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v37; // x22
  QuestRestrictionInfo_o *v38; // x26
  int32_t v39; // w27
  int32_t v40; // w28
  int32_t v41; // w29
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v43; // x1
  _BOOL8 IsRestriction_43186300; // x0
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
  __int64 v61; // x2
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

  if ( (byte_4C22D86 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__DisplayClass365_0__GetCanOrganizationGrandSvtIdList_b__0__);
    sub_1C2D490(&PartyOrganizationListViewItem___c__DisplayClass365_0_TypeInfo);
    byte_4C22D86 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_75;
  monitor = (System_Collections_ICollection_o *)Master_object[2].monitor;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(monitor, 0);
  v8 = 0;
  if ( !GrandServantRestrictionEntity || IsNullOrEmpty )
    return v8;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !monitor )
LABEL_75:
    sub_1C2D6EC(Master_object, v5);
  v74 = v9;
  v77 = this;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)monitor,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v76 = Enumerator;
  if ( !Enumerator )
    sub_1C2D6EC(0, v12);
  v13 = &System_Collections_IEnumerator_TypeInfo;
  v14 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v15 = &PartyOrganizationListViewItem___c__DisplayClass365_0_TypeInfo;
  v16 = (const MethodInfo_338A340 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
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
      v22 = sub_1C7DCA8(v17, v19, 0);
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
      v27 = sub_1C7DCA8(v17, v24, 0);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            v17,
            *(_QWORD *)(v27 + 8));
    v29 = sub_1C2D6DC(*v15);
    PartyOrganizationListViewItem___c__DisplayClass365_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass365_0_o *)v29,
      0);
    if ( !v28 )
      sub_1C2D6EC(v30, v31);
    if ( !v10 )
      sub_1C2D6EC(v30, v31);
    if ( DataMasterBase_object__object__long___TryGetEntity(v10, &entity, *(_QWORD *)(v28 + 32), *v16) )
    {
      if ( !entity )
        sub_1C2D6EC(0, v32);
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
        sub_1C2D6EC(0, v43);
      if ( !v38 )
        sub_1C2D6EC(OverwriteStatus, v43);
      IsRestriction_43186300 = QuestRestrictionInfo__IsRestriction_43186300(
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
      if ( !IsRestriction_43186300 )
      {
        if ( !entity )
          sub_1C2D6EC(IsRestriction_43186300, v45);
        v47 = entity[5].klass;
        v46 = entity[5].monitor;
        v48 = v77->fields.questRestrictionInfo;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = v47;
        *(_QWORD *)&v79.fields.fakeValue = v46;
        v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v79, 0);
        if ( !entity )
          sub_1C2D6EC(v49, v50);
        v51 = v49;
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                0);
        if ( !entity )
          sub_1C2D6EC(0, v52);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
        if ( !v48 )
          sub_1C2D6EC(DispLimitCount, v55);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v48, v51, v53, DispLimitCount, 0);
        if ( !v29 )
          sub_1C2D6EC(ServantIndividuality, ServantIndividuality);
        *(_QWORD *)(v29 + 16) = ServantIndividuality;
        sub_1C2D434((CGThumbnailListItem_o *)(v29 + 16), (int32_t)ServantIndividuality, v57, v58);
        v59 = BasicHelper__IsNullOrEmpty(
                (System_Collections_ICollection_o *)GrandServantRestrictionEntity->fields.targetVals,
                0);
        if ( v59 )
          goto LABEL_46;
        targetVals = GrandServantRestrictionEntity->fields.targetVals;
        if ( !targetVals )
          sub_1C2D6EC(v59, v60);
        if ( !LODWORD(targetVals->max_length) )
          sub_1C2D6F4(v59, v60, v61);
        if ( !targetVals->m_Items[0]
          || (v64 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v64,
                (Il2CppObject *)v29,
                Method_PartyOrganizationListViewItem___c__DisplayClass365_0__GetCanOrganizationGrandSvtIdList_b__0__,
                0),
              v59 = BasicHelper__Any_int__51083888(
                      targetVals,
                      (System_Func_T__bool__o *)v64,
                      (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856)) )
        {
LABEL_46:
          if ( !v74 )
            sub_1C2D6EC(v59, v60);
          items = v74->fields._items;
          v66 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
          ++v74->fields._version;
          if ( !items )
            sub_1C2D6EC(v59, v60);
          size = v74->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v74,
              (Il2CppObject *)v28,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &items->obj.klass + size;
            v74->fields._size = size + 1;
            v68[4] = (Il2CppClass *)v28;
            sub_1C2D434((CGThumbnailListItem_o *)(v68 + 4), v28, v61, v62);
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
      v72 = sub_1C7DCA8(v17, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4C22D7A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22D7A = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0),
            result < 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0);
LABEL_23:
        sub_1C2D6EC(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C2D6EC(v5, 0);
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
  __int64 v6; // x2
  struct ServantEntity_o *v7; // x8
  struct System_Int32_array *cardIds; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 i; // x9
  unsigned int v11; // w13

  if ( (byte_4C22D77 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C22D77 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0;
  result = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 3);
  v7 = this->fields.servantEntity;
  if ( !v7 || (cardIds = v7->fields.cardIds) == 0 )
LABEL_15:
    sub_1C2D6EC(result, v5);
  max_length_low = LODWORD(cardIds->max_length);
  for ( i = 0; (__int64)i < (int)max_length_low; ++i )
  {
    if ( i >= max_length_low )
      goto LABEL_18;
    v11 = cardIds->m_Items[i] - 1;
    if ( v11 <= 2 )
    {
      if ( !result )
        goto LABEL_15;
      if ( v11 >= LODWORD(result->max_length) )
LABEL_18:
        sub_1C2D6F4(result, v5, v6);
      ++result->m_Items[v11];
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

  if ( (byte_4C22D79 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D79 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C2D6EC(v5, 0);
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
  if ( (byte_4C22D85 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C2D490(&StringLiteral_7001/*"GRAND_SERVANT_EQUIP_FRAME_"*/);
    byte_4C22D85 = 1;
  }
  equipIdList = v4->fields.equipIdList;
  if ( !equipIdList )
    sub_1C2D6EC(this, userSvtId);
  max_length = equipIdList->max_length;
  v7 = 0;
  do
  {
    if ( (int)v7 >= (int)max_length )
      return string_TypeInfo->static_fields->Empty;
    if ( v7 >= max_length )
      sub_1C2D6F4(this, userSvtId, method);
    v8 = equipIdList->m_Items[v7++];
  }
  while ( v8 != userSvtId );
  v12 = v7;
  v9 = System_Int32__ToString((int32_t)&v12, 0);
  v10 = System_String__Concat_63457864((System_String_o *)StringLiteral_7001/*"GRAND_SERVANT_EQUIP_FRAME_"*/, v9, 0);
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

  if ( (byte_4C22D61 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    byte_4C22D61 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0);
    if ( result )
    {
      v5 = result;
      result = (System_Int64_array *)sub_1C2D5CC(result, long___TypeInfo);
      if ( !result )
      {
        v7 = (PartyOrganizationListViewItem_o *)sub_1C2D9AC(v5);
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
    return (System_Int64_array *)sub_1C2D538(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax);
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

  if ( (byte_4C22D6C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22D6C = 1;
  }
  equipUserServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
  if ( !equipUserServantEntityList
    || (equipUserServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    equipUserServantEntityList,
                                                                                    index,
                                                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0 )
  {
    sub_1C2D6EC(equipUserServantEntityList, *(_QWORD *)&index);
  }
  v6 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v8, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4C22D76 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D76 = 1;
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

  if ( (byte_4C22D75 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D75 = 1;
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

  if ( (byte_4C22D83 & 1) == 0 )
  {
    sub_1C2D490(&UserServantGrandInfo_TypeInfo);
    byte_4C22D83 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userServantEntity, 0);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C2D6EC(v5, 0);
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

  if ( (byte_4C22D7C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D7C = 1;
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

  if ( (byte_4C22D7D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D7D = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userServantEntity, 0);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C2D6EC(v5, 0);
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

  if ( (byte_4C22D72 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10257/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D72 = 1;
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
    sub_1C2D6EC(v4, method);
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
    v4 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10257/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v7 = (System_String_o *)v4;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0);
    return System_String__Concat_63457864(v7, ConfirmRestrictionMessage, 0);
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
  if ( (byte_4C22D66 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D66 = 1;
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
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v22, 0);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
  if ( !Master_object )
LABEL_36:
    sub_1C2D6EC(ServantLeader, v10);
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
  ServantLeader = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
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

  if ( (byte_4C22D74 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_44/*"\n\n"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_4C22D74 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0);
  return System_String__Concat_63496112(
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

  if ( (byte_4C22D73 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D73 = 1;
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
    sub_1C2D6EC(0, v6);
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
    sub_1C2D6EC(0, v6);
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
    sub_1C2D6EC(0, v4);
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
  const MethodInfo_30CE8FC **v7; // x22
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
  const MethodInfo_30CE8FC **v20; // x29
  System_Func_object__bool__o *v21; // x22
  int v22; // w20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_UserServantEntity__o *userServantList; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C22D87 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__get_Current__);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__DisplayClass366_0__IsEnabledChangeGrandSvt_b__0__);
    sub_1C2D490(&PartyOrganizationListViewItem___c__DisplayClass366_0_TypeInfo);
    byte_4C22D87 = 1;
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
    sub_1C2D6EC(IsNullOrEmpty, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)CanOrganizationGrandSvtIdList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantGrandEntity__GetEnumerator__);
  v7 = (const MethodInfo_30CE8FC **)&Method_DataManager_GetMaster_GrandGraphMaster___;
  v8 = 2;
  v25 = v23;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields._current;
    v11 = sub_1C2D6DC(PartyOrganizationListViewItem___c__DisplayClass366_0_TypeInfo);
    PartyOrganizationListViewItem___c__DisplayClass366_0___ctor(
      (PartyOrganizationListViewItem___c__DisplayClass366_0_o *)v11,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !current )
      sub_1C2D6EC(Master_object, v13);
    if ( !Master_object )
      sub_1C2D6EC(0, v13);
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
        sub_1C2D6EC(0, v15);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                 (int32_t)current[1].monitor,
                 (const MethodInfo_3387D98 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
      if ( !v11 )
        sub_1C2D6EC(Entity, Entity);
      *(_QWORD *)(v11 + 16) = Entity;
      sub_1C2D434((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Entity, v17, v18);
      v19 = userServantList;
      v20 = v7;
      v21 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v21,
        (Il2CppObject *)v11,
        Method_PartyOrganizationListViewItem___c__DisplayClass366_0__IsEnabledChangeGrandSvt_b__0__,
        0);
      v8 -= System_Linq_Enumerable__Count_object__51316140(
              (System_Collections_Generic_IEnumerable_TSource__o *)v19,
              (System_Func_TSource__bool__o *)v21,
              (const MethodInfo_30F05AC *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantGrandEntity__Dispose__);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(questRestrictionInfo, userServantEntity, 0);
  if ( v5 < 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1C2D6EC(0, v6);
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

  if ( (byte_4C22D57 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22D57 = 1;
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
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v19, 0);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v7 = v5;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_34;
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        (Il2CppObject **)&this->fields.userServantEntity,
        v7,
        (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    sub_1C2D6EC(Master_object, v6);
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
    sub_1C2D6EC(this, 0);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_34037668(this, item, v7);
}


void PartyOrganizationListViewItem__Modify_34037668(
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
  if ( (byte_4C22D58 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D58 = 1;
  }
  if ( !item )
    goto LABEL_26;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39, 0);
  if ( !v9 )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v9,
             (int32_t)this,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v13, v14);
  v5->fields.classId = item->fields.classId;
  *(_QWORD *)&v5->fields.cost = *(_QWORD *)&item->fields.cost;
  v5->fields.atk = item->fields.atk;
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v15 )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                              v15[6],
                                              0);
  v16 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v16 )
    goto LABEL_26;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v16, 0);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v18, v19);
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
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0);
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
    sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.followerInfo, 0, v20, v21);
  }
  this = (PartyOrganizationListViewItem_o *)v5->fields.userServantEntity;
  *(_WORD *)&v5->fields._IsClearedWave_k__BackingField = 0;
  v5->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !this )
LABEL_26:
    sub_1C2D6EC(this, item);
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

  if ( (byte_4C22D5B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    byte_4C22D5B = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    v15 = 0;
    v5 = (System_Nullable_int__o)&v15;
    System_Nullable_int____ctor(
      v5,
      equipIdList->max_length,
      (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
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
      (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
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
      sub_1C2D6F4(v7, method, v2);
    }
LABEL_25:
    sub_1C2D6EC(v7, method);
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

  if ( (byte_4C22D5C & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    byte_4C22D5C = 1;
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
      (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
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
      sub_1C2D6EC(0, 0);
    max_length = v9->max_length;
    if ( !max_length )
      sub_1C2D6F4(0, v9, v2);
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

  if ( (byte_4C22D62 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_long___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C22D62 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v6 = System_Array__IndexOf_long_(
         equipIdList,
         userSvtId,
         (const MethodInfo_31D5AE0 *)Method_System_Array_IndexOf_long___);
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
                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
LABEL_15:
      sub_1C2D6EC(IsNullOrEmpty, v9);
    }
    v11 = *((_DWORD *)IsNullOrEmpty + 38);
  }
  v9 = this->fields.equipIdList;
  if ( !v9 )
    goto LABEL_15;
  if ( v7 >= LODWORD(v9->max_length) )
    sub_1C2D6F4(IsNullOrEmpty, v9, v10);
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

  if ( (byte_4C22D55 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C22D55 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    sub_1C2D6EC(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v11, v12);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isRestrictionGrandServant = item->fields.isRestrictionGrandServant;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v17, v18);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v20,
    v21);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v23, v24);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)commandCodeIdList, v26, v27);
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
  sub_1C2D434(
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
  v36 = (struct System_Int32_array *)sub_1C2D5CC(v34, int___TypeInfo);
  if ( v36 )
  {
    this->fields.equipSvtIdList = v36;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v38 = sub_1C2D5CC(v35, int___TypeInfo);
    if ( v38 )
    {
      v39 = v38;
LABEL_10:
      sub_1C2D434((CGThumbnailListItem_o *)p_equipSvtIdList, v39, v31, v32);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v40);
      return;
    }
  }
  else
  {
    sub_1C2D9AC(v35);
  }
  v41 = (PartyOrganizationListViewItem_o *)sub_1C2D9AC(v35);
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
  if ( (byte_4C22D54 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C22D54 = 1;
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1C2D6EC(this, *(_QWORD *)&eventId);
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
  __int64 v15; // x2
  struct System_Int64_array *equipIdList; // x9
  unsigned int v17; // w8
  System_Predicate_long__o **v18; // x22
  unsigned int max_length; // w10
  System_Predicate_long__o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x9
  unsigned int v24; // w10
  char v25; // w10

  if ( (byte_4C22D5F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_FindIndex_long___);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&System_Predicate_long__TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__DisplayClass177_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__);
    sub_1C2D490(&PartyOrganizationListViewItem___c__DisplayClass177_0_TypeInfo);
    byte_4C22D5F = 1;
  }
  v5 = sub_1C2D6DC(PartyOrganizationListViewItem___c__DisplayClass177_0_TypeInfo);
  PartyOrganizationListViewItem___c__DisplayClass177_0___ctor(
    (PartyOrganizationListViewItem___c__DisplayClass177_0_o *)v5,
    0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
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
  IsNullOrEmpty = (struct System_Boolean_array *)sub_1C2D538(
                                                   bool___TypeInfo,
                                                   *(unsigned int *)((char *)&v10->static_fields->CriticalRateToAddByQuickFirstBonus
                                                                   + v11));
  if ( !this )
    goto LABEL_28;
  this->fields._DuplicationEquipmentFlagList_k__BackingField = IsNullOrEmpty;
  sub_1C2D434(
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
    sub_1C2D6EC(IsNullOrEmpty, v7);
  v17 = 0;
  v18 = (System_Predicate_long__o **)(v5 + 32);
  while ( 1 )
  {
    max_length = equipIdList->max_length;
    if ( (int)v17 >= (int)max_length )
      break;
    if ( v17 >= max_length )
      goto LABEL_32;
    if ( equipIdList->m_Items[v17] >= 1 )
    {
      v20 = *v18;
      if ( !*v18 )
      {
        v20 = (System_Predicate_long__o *)sub_1C2D6DC(System_Predicate_long__TypeInfo);
        System_Predicate_long____ctor(
          v20,
          (Il2CppObject *)v5,
          Method_PartyOrganizationListViewItem___c__DisplayClass177_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__,
          0);
        *(_QWORD *)(v5 + 32) = v20;
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v20, v21, v22);
      }
      IsNullOrEmpty = (struct System_Boolean_array *)System_Array__FindIndex_long_(
                                                       (System_Int64_array *)duplicatedEquipmentUserSvtIdList,
                                                       (System_Predicate_T__o *)v20,
                                                       (const MethodInfo_31D461C *)Method_System_Array_FindIndex_long___);
      DuplicationEquipmentFlagList_k__BackingField = this->fields._DuplicationEquipmentFlagList_k__BackingField;
      if ( !DuplicationEquipmentFlagList_k__BackingField )
        goto LABEL_28;
      v17 = *(_DWORD *)(v5 + 24);
      v24 = DuplicationEquipmentFlagList_k__BackingField->max_length;
      if ( (_DWORD)IsNullOrEmpty == -1 )
      {
        if ( v17 >= v24 )
LABEL_32:
          sub_1C2D6F4(IsNullOrEmpty, v7, v15);
        v25 = 0;
      }
      else
      {
        if ( v17 >= v24 )
          goto LABEL_32;
        v25 = 1;
      }
      DuplicationEquipmentFlagList_k__BackingField->m_Items[v17] = v25;
    }
    *(_DWORD *)(v5 + 24) = ++v17;
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
  __int64 v20; // x2
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
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x25
  struct System_Int32_array *v48; // x8
  System_Collections_Generic_List_object__o *v49; // x25
  UserServantCollectionEntity_o *v50; // x27
  UserServantEntity_o *v51; // x26
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  struct System_Int64_array *v58; // x8
  System_Collections_Generic_List_object__o *v59; // x25
  UserServantEntity_o *v60; // x26
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  struct System_Collections_Generic_List_ServantEntity__o *v67; // x25
  ServantEntity_o *v68; // x26
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct ServantEntity_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x0
  CGThumbnailListItem_o *v75; // x0
  int32_t v76; // w1
  __int64 v77; // x8
  Il2CppObject *v78; // x1
  void *monitor; // x25
  Il2CppClass *klass; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v81; // x25
  void *v82; // x26
  Il2CppClass *v83; // x27
  Il2CppObject *v84; // x25
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x8
  System_Collections_Generic_List_object__o *v89; // x25
  struct System_Int32_array *v90; // x8
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass *v96; // x1
  Il2CppClass **v97; // x0
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *v99; // x23
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x29
  struct System_Int32_array *v101; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_42937112; // w0
  struct QuestRestrictionInfo_o *v105; // x8
  System_Collections_Generic_List_object__o *v106; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x24
  PartyOrganizationListViewItem___c_c *v108; // x0
  System_Func_object__int__o *_9__161_1; // x25
  Il2CppObject *v110; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *v111; // x0
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0
  const MethodInfo *v116; // x3
  __int64 v117; // x8
  _DWORD *v118; // x24
  unsigned __int64 v119; // x20
  ServantEntity_o *v120; // x26
  int32_t v121; // w27
  EventPersonalMargeUpValInfo_o *v122; // x25
  __int64 v123; // x8
  _QWORD *v124; // x25
  unsigned __int64 v125; // x26
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  System_Collections_Generic_List_object__o *v130; // x23
  const MethodInfo_39D40EC *v131; // x0
  const MethodInfo *v132; // x3
  EventUpValInfo_o **v133; // x25
  struct EventMargeItemUpValInfo_array *v134; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  const MethodInfo *v137; // x1
  System_Int32_array *v138; // x23
  EventUpValSetupInfo_o *v139; // x24
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  UserServantEntity_o *v142; // x22
  EventUpValSetupInfo_o *v143; // x23
  struct QuestRestrictionInfo_o *v144; // x8
  _BOOL8 v145; // x0
  __int64 v146; // x1
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  System_Collections_Generic_List_object__o *v149; // x0
  Il2CppObject *v150; // x1
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x8
  Il2CppObject *v155; // x24
  System_Collections_Generic_List_object__o *v156; // x23
  const MethodInfo *v157; // x3
  struct System_Int32_array *v158; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v160; // x28
  int32_t v161; // w26
  Il2CppObject *v162; // x0
  ServantEntity_o *v163; // x27
  EventPersonalMargeUpValInfo_o *v164; // x25
  __int64 v165; // x8
  _QWORD *v166; // x25
  unsigned __int64 v167; // x26
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x0
  System_Collections_ICollection_o *EquipSvtIds; // x23
  int32_t current; // w24
  System_Collections_Generic_List_object__o *v174; // x23
  Il2CppObject *Instance; // x0
  __int64 v176; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v178; // x1
  Il2CppObject *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  Il2CppObject *v182; // x1
  struct System_Object_array *items; // x8
  _QWORD *v184; // x9
  __int64 size; // x10
  Il2CppClass **v186; // x0
  ServantEntity_o *v187; // x24
  __int64 v188; // x0
  __int64 v189; // x1
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  struct System_Object_array *v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x10
  Il2CppClass **v195; // x0
  UserServantEntity_o *v196; // x23
  EventUpValSetupInfo_o *v197; // x22
  struct QuestRestrictionInfo_o *v198; // x8
  ServantEntity_o *v199; // x22
  EventPersonalMargeUpValInfo_o *v200; // x21
  System_Collections_Generic_List_object__o *v201; // x19
  EventMargeItemUpValInfo_array *v202; // x0
  int32_t v203; // w23
  FollowerInfo_o *v204; // x24
  int32_t v205; // w2
  struct QuestRestrictionInfo_o *v206; // x8
  System_Collections_Generic_List_object__o *v207; // x22
  int32_t v208; // w24
  FollowerInfo_o *v209; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v210; // x23
  int32_t v211; // w2
  struct QuestRestrictionInfo_o *v212; // x8
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  struct System_Object_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  Il2CppClass *v218; // x1
  Il2CppClass **v219; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Int32_array *eventIdList; // x8
  int32_t v222; // w23
  FollowerInfo_o *v223; // x24
  int32_t v224; // w4
  struct QuestRestrictionInfo_o *v225; // x8
  System_Collections_Generic_List_object__o *v226; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  PartyOrganizationListViewItem___c_c *v229; // x0
  System_Func_object__int__o *_9__161_0; // x23
  Il2CppObject *v231; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v235; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v236; // x0
  __int64 v237; // x8
  _DWORD *v238; // x22
  unsigned __int64 v239; // x20
  ServantEntity_o *servantEntity; // x24
  int32_t v241; // w25
  EventPersonalMargeUpValInfo_o *v242; // x23
  const MethodInfo *v243; // x3
  __int64 v244; // x8
  _QWORD *v245; // x23
  unsigned __int64 v246; // x24
  struct System_Object_array *v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  Il2CppClass **v250; // x0
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x21
  struct EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  EventUpValInfo_o **eventUpVallInfo; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v256; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v257; // [xsp+30h] [xbp-E0h] BYREF
  EventUpValInfo_o *v258; // [xsp+48h] [xbp-C8h] BYREF
  bool v259; // [xsp+54h] [xbp-BCh] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v260; // [xsp+58h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+64h] [xbp-ACh] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v263; // [xsp+70h] [xbp-A0h] BYREF
  UserServantCollectionEntity_o *v264; // [xsp+78h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-90h] BYREF
  bool v266; // [xsp+8Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v267; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v268; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v269; // 0:x0.16

  if ( (byte_4C22D53 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C2D490(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantEntity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__);
    sub_1C2D490(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C22D53 = 1;
  }
  memset(&v267, 0, sizeof(v267));
  v266 = 0;
  v264 = 0;
  entity = 0;
  infoList = 0;
  v263 = 0;
  isDuplicate = 0;
  v260 = 0;
  v259 = 0;
  v258 = 0;
  memset(&v257, 0, sizeof(v257));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  p_equipUserServantEntityList = (FollowerInfo_o *)&this->fields.equipUserServantEntityList;
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v5, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  p_equipServantEntityList = &this->fields.equipServantEntityList;
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v9, v11, v12);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUpValInfo, 0, v14, v15);
  this->fields.eventUpValItemList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, 0, v16, v17);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( isFollower )
  {
    this->fields.equipIdList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v20, v21);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v256,
          (System_Collections_Generic_List_int__o *)EquipSvtIds,
          (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v267 = v256;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v267,
                  (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          current = (int32_t)v267.fields._current;
          v174 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
          if ( LODWORD(v267.fields._current) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              sub_1C2D6EC(0, v176);
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !MasterData_object )
              sub_1C2D6EC(0, v178);
            v179 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     current,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v182 = v179;
            if ( !v174 )
              sub_1C2D6EC(v179, v179);
            items = v174->fields._items;
            v184 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v174->fields._version;
            if ( !items )
              sub_1C2D6EC(v179, v179);
            size = v174->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v174,
                v179,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
            }
            else
            {
              v186 = &items->obj.klass + size;
              v174->fields._size = size + 1;
              v186[4] = (Il2CppClass *)v182;
              sub_1C2D434((CGThumbnailListItem_o *)(v186 + 4), (int32_t)v182, v180, v181);
            }
          }
          else
          {
            v187 = (ServantEntity_o *)sub_1C2D6DC(ServantEntity_TypeInfo);
            ServantEntity___ctor(v187, 0);
            if ( !v174 )
              sub_1C2D6EC(v188, v189);
            v192 = v174->fields._items;
            v193 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v174->fields._version;
            if ( !v192 )
              sub_1C2D6EC(v188, v189);
            v194 = v174->fields._size;
            if ( (unsigned int)v194 >= LODWORD(v192->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v174,
                (Il2CppObject *)v187,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
            }
            else
            {
              v195 = &v192->obj.klass + v194;
              v174->fields._size = v194 + 1;
              v195[4] = (Il2CppClass *)v187;
              sub_1C2D434((CGThumbnailListItem_o *)(v195 + 4), (int32_t)v187, v190, v191);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v267,
          (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        p_eventUpValInfo = &this->fields.eventUpValInfo;
      }
    }
    else
    {
      v203 = this->fields.followerIndex;
      v204 = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v206 = this->fields.questRestrictionInfo;
        if ( v206 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v206->fields.questId, 0);
          v205 = (int)IsGrandServant;
        }
        else
        {
          v205 = 0;
        }
      }
      else
      {
        v205 = 2;
      }
      if ( !v204 )
        goto LABEL_288;
      IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v204, v203, v205, 0);
      if ( (int)IsGrandServant >= 1 )
      {
        v207 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        v208 = this->fields.followerIndex;
        v209 = this->fields.followerInfo;
        v210 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v212 = this->fields.questRestrictionInfo;
          if ( v212 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v212->fields.questId, 0);
            v211 = (int)IsGrandServant;
          }
          else
          {
            v211 = 0;
          }
        }
        else
        {
          v211 = 2;
        }
        if ( !v209 )
          goto LABEL_288;
        IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v209, v208, v211, 0);
        if ( !v210 )
          goto LABEL_288;
        IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                           v210,
                           (int32_t)IsGrandServant,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v207 )
          goto LABEL_288;
        v215 = v207->fields._items;
        v216 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v207->fields._version;
        if ( !v215 )
          goto LABEL_288;
        v217 = v207->fields._size;
        v218 = (Il2CppClass *)IsGrandServant;
        if ( (unsigned int)v217 >= LODWORD(v215->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v207,
            (Il2CppObject *)IsGrandServant,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
        }
        else
        {
          v219 = &v215->obj.klass + v217;
          v207->fields._size = v217 + 1;
          v219[4] = v218;
          sub_1C2D434((CGThumbnailListItem_o *)(v219 + 4), (int32_t)v218, v213, v214);
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
        v222 = this->fields.followerIndex;
        v223 = this->fields.followerInfo;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v225 = this->fields.questRestrictionInfo;
          if ( v225 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v225->fields.questId, 0);
            v224 = (int)IsGrandServant;
          }
          else
          {
            v224 = 0;
          }
        }
        else
        {
          v224 = 2;
        }
        if ( !v223 )
          goto LABEL_288;
        this->fields.isEventUpVal = FollowerInfo__getEventUpVal_41526756(
                                      v223,
                                      p_eventUpValInfo,
                                      setupInfo,
                                      v222,
                                      v224,
                                      0);
        v226 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v226,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        eventUpValInfo = this->fields.eventUpValInfo;
        if ( !eventUpValInfo )
          goto LABEL_288;
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v229 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v229 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__161_0 = (System_Func_object__int__o *)v229->static_fields->__9__161_0;
        if ( !_9__161_0 )
        {
          if ( !v229->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v229);
            v229 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v231 = (Il2CppObject *)v229->static_fields->__9;
          _9__161_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__161_0,
            v231,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__,
            0);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__161_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_0;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__161_0, (int32_t)_9__161_0, v233, v234);
        }
        v235 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      dropList,
                                                                      (System_Func_TSource__TResult__o *)_9__161_0,
                                                                      (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v236 = System_Linq_Enumerable__Distinct_int_(
                 v235,
                 (const MethodInfo_30F1B3C *)Method_System_Linq_Enumerable_Distinct_int___);
        IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                           v236,
                           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !IsGrandServant )
          goto LABEL_288;
        v237 = *((_QWORD *)IsGrandServant + 3);
        v238 = IsGrandServant;
        if ( (int)v237 >= 1 )
        {
          v239 = 0;
          while ( 1 )
          {
            if ( v239 >= (unsigned int)v237 )
              goto LABEL_289;
            servantEntity = this->fields.servantEntity;
            v241 = v238[v239 + 8];
            v242 = (EventPersonalMargeUpValInfo_o *)sub_1C2D6DC(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v242, v241, servantEntity, 0);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_288;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
            if ( !v242 )
              goto LABEL_288;
            EventPersonalMargeUpValInfo__Add(v242, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v242, 0);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v242, 0);
              if ( !IsGrandServant )
                goto LABEL_288;
              v244 = *((_QWORD *)IsGrandServant + 3);
              v245 = IsGrandServant;
              if ( (int)v244 >= 1 )
                break;
            }
LABEL_283:
            LODWORD(v237) = v238[6];
            if ( (__int64)++v239 >= (int)v237 )
              goto LABEL_284;
          }
          v246 = 0;
          while ( v246 < (unsigned int)v244 )
          {
            if ( !v226 )
              goto LABEL_288;
            v19 = (Il2CppObject *)v245[v246 + 4];
            v247 = v226->fields._items;
            v248 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v226->fields._version;
            if ( !v247 )
              goto LABEL_288;
            v249 = v226->fields._size;
            if ( (unsigned int)v249 >= LODWORD(v247->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v226,
                v19,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
            }
            else
            {
              v250 = &v247->obj.klass + v249;
              v226->fields._size = v249 + 1;
              v250[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v250 + 4), (int32_t)v19, v20, v243);
            }
            LODWORD(v244) = *((_DWORD *)v245 + 6);
            if ( (__int64)++v246 >= (int)v244 )
              goto LABEL_283;
          }
          goto LABEL_289;
        }
LABEL_284:
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)IsGrandServant, &v266, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v226, 0);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                          (PartyOrganizationUtility_o *)IsGrandServant,
                          AdjustUpValInfoArray,
                          0);
        this->fields.eventUpValItemList = AddUpValInfos;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, (int32_t)AddUpValInfos, v253, v254);
        this->fields._IsDuplicateBonus_k__BackingField = v266;
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
    v29 = (struct System_Int64_array *)sub_1C2D538(long___TypeInfo, (unsigned int)v33->static_fields->SvtEquipMax);
LABEL_26:
    this->fields.equipIdList = v29;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v29, v27, v28);
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
      v29 = (struct System_Int64_array *)sub_1C2D5CC(v26, long___TypeInfo);
      if ( !v29 )
      {
        sub_1C2D9AC(v23);
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
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
                               (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      IsGrandServant = p_equipUserServantEntityList->klass;
      if ( !p_equipUserServantEntityList->klass )
        goto LABEL_288;
      v19 = entity;
      v42 = *((_QWORD *)IsGrandServant + 2);
      v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v42 )
        goto LABEL_288;
      v44 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v19,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = v42 + 8 * v44;
        *((_DWORD *)IsGrandServant + 6) = v44 + 1;
        *(_QWORD *)(v45 + 32) = v19;
        sub_1C2D434((CGThumbnailListItem_o *)(v45 + 32), (int32_t)v19, v20, v41);
      }
      if ( !entity )
        goto LABEL_288;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v268.fields.currentCryptoKey = klass;
      *(_QWORD *)&v268.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v268, 0) <= 0 )
      {
        v84 = (Il2CppObject *)sub_1C2D6DC(ServantEntity_TypeInfo);
        ServantEntity___ctor((ServantEntity_o *)v84, 0);
      }
      else
      {
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !entity )
          goto LABEL_288;
        v81 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        v83 = entity[5].klass;
        v82 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v269.fields.currentCryptoKey = v83;
        *(_QWORD *)&v269.fields.fakeValue = v82;
        IsGrandServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v269, 0);
        if ( !v81 )
          goto LABEL_288;
        v84 = DataMasterBase_object__object__int___GetEntity(
                v81,
                (int32_t)IsGrandServant,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      IsGrandServant = *p_equipServantEntityList;
      if ( !*p_equipServantEntityList )
        goto LABEL_288;
      v85 = *((_QWORD *)IsGrandServant + 2);
      v86 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v85 )
        goto LABEL_288;
      v87 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
      {
        v77 = v86[4];
        v78 = v84;
        goto LABEL_91;
      }
      v88 = v85 + 8 * v87;
      *((_DWORD *)IsGrandServant + 6) = v87 + 1;
      *(_QWORD *)(v88 + 32) = v84;
      v75 = (CGThumbnailListItem_o *)(v88 + 32);
      v76 = (int)v84;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    IsGrandServant = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsGrandServant = NetworkManager_TypeInfo;
    }
    v48 = this->fields.equipSvtIdList;
    if ( !v48 )
      goto LABEL_288;
    if ( v38 >= LODWORD(v48->max_length) )
      goto LABEL_289;
    if ( !Master_object )
      goto LABEL_288;
    IsGrandServant = (void *)UserServantCollectionMaster__TryGetEntity(
                               (UserServantCollectionMaster_o *)Master_object,
                               &v264,
                               *(_QWORD *)(*((_QWORD *)IsGrandServant + 23) + 64LL),
                               v48->m_Items[v38],
                               0);
    if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
    {
LABEL_60:
      v58 = this->fields.equipIdList;
      if ( !v58 )
        goto LABEL_288;
      if ( v38 >= LODWORD(v58->max_length) )
        goto LABEL_289;
      v58->m_Items[v38] = 0;
LABEL_63:
      v59 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
      v60 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v60, 0);
      if ( !v59 )
        goto LABEL_288;
      v63 = v59->fields._items;
      v64 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v59->fields._version;
      if ( !v63 )
        goto LABEL_288;
      v65 = v59->fields._size;
      if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          (Il2CppObject *)v60,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v66 = &v63->obj.klass + v65;
        v59->fields._size = v65 + 1;
        v66[4] = (Il2CppClass *)v60;
        sub_1C2D434((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v60, v61, v62);
      }
      v67 = *p_equipServantEntityList;
      v68 = (ServantEntity_o *)sub_1C2D6DC(ServantEntity_TypeInfo);
      ServantEntity___ctor(v68, 0);
      if ( !v67 )
        goto LABEL_288;
      v71 = v67->fields._items;
      v72 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++v67->fields._version;
      if ( !v71 )
        goto LABEL_288;
      v73 = v67->fields._size;
      if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
      {
        v77 = v72[4];
        IsGrandServant = v67;
        v78 = (Il2CppObject *)v68;
LABEL_91:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v78,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v77 + 192) + 112LL));
        goto LABEL_92;
      }
      v74 = (__int64)v71 + 8 * v73;
      v67->fields._size = v73 + 1;
      *(_QWORD *)(v74 + 32) = v68;
      v75 = (CGThumbnailListItem_o *)(v74 + 32);
      v76 = (int)v68;
LABEL_89:
      sub_1C2D434(v75, v76, v69, v70);
      goto LABEL_92;
    }
    v49 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
    v50 = v264;
    v51 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_42922472(v51, v50, 0, 0);
    if ( !v49 )
      goto LABEL_288;
    v54 = v49->fields._items;
    v55 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v49->fields._version;
    if ( !v54 )
      goto LABEL_288;
    v56 = v49->fields._size;
    if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v49,
        (Il2CppObject *)v51,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->obj.klass + v56;
      v49->fields._size = v56 + 1;
      v57[4] = (Il2CppClass *)v51;
      sub_1C2D434((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
    }
    v89 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    v90 = this->fields.equipSvtIdList;
    if ( !v90 )
      goto LABEL_288;
    if ( v38 >= LODWORD(v90->max_length) )
      goto LABEL_289;
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                       v90->m_Items[v38],
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v89 )
      goto LABEL_288;
    v93 = v89->fields._items;
    v94 = Method_System_Collections_Generic_List_ServantEntity__Add__;
    ++v89->fields._version;
    if ( !v93 )
      goto LABEL_288;
    v95 = v89->fields._size;
    v96 = (Il2CppClass *)IsGrandServant;
    if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v89,
        (Il2CppObject *)IsGrandServant,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
    }
    else
    {
      v97 = &v93->obj.klass + v95;
      v89->fields._size = v95 + 1;
      v97[4] = v96;
      sub_1C2D434((CGThumbnailListItem_o *)(v97 + 4), (int32_t)v96, v91, v92);
    }
    this->fields._IsDisappearEquip_k__BackingField = 1;
LABEL_92:
    v25 = this->fields.equipIdList;
    ++v38;
    if ( !v25 )
      goto LABEL_288;
  }
  p_setupInfo = &this->fields.setupInfo;
  v99 = this->fields.setupInfo;
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( !v99 )
    goto LABEL_138;
  v101 = v99->fields.eventIdList;
  if ( !v101 )
    goto LABEL_288;
  if ( !v101->max_length )
  {
LABEL_138:
    v130 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v130,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v260 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v130;
    if ( this->fields.questRestrictionInfo )
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v260, 1, v132);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v133 = &this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_288;
      v130 = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                            (PartyOrganizationUtility_o *)IsGrandServant,
                                                            &v259,
                                                            (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v130,
                                                            0);
      this->fields._IsDuplicateBonus_k__BackingField = v259;
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsGrandServant )
        goto LABEL_288;
    }
    else
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v260, 0, v132);
      v131 = (const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
LABEL_143:
      IsGrandServant = SingletonTemplate_object___get_Instance(v131);
      v133 = &this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_288;
    }
    v134 = PartyOrganizationUtility__GetAddUpValInfos(
             (PartyOrganizationUtility_o *)IsGrandServant,
             (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v130,
             0);
    goto LABEL_145;
  }
  userServantEntity = this->fields.userServantEntity;
  EquipList = PartyOrganizationListViewItem__GetEquipList(this, (const MethodInfo *)v19);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant || !userServantEntity )
    goto LABEL_288;
  EventUpVal_42937112 = UserServantEntity__getEventUpVal_42937112(
                          userServantEntity,
                          eventUpVallInfo,
                          v99,
                          EquipList,
                          *((_QWORD *)IsGrandServant + 14),
                          0);
  v105 = this->fields.questRestrictionInfo;
  this->fields.isEventUpVal = EventUpVal_42937112;
  if ( v105 )
  {
    v106 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v106,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    infoList = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v106;
    if ( *eventUpVallInfo )
    {
      v107 = (System_Collections_Generic_IEnumerable_TSource__o *)(*eventUpVallInfo)->fields.dropList;
      v108 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v108 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__161_1 = (System_Func_object__int__o *)v108->static_fields->__9__161_1;
      if ( !_9__161_1 )
      {
        if ( !v108->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v108);
          v108 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v110 = (Il2CppObject *)v108->static_fields->__9;
        _9__161_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__161_1,
          v110,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__,
          0);
        v111 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v111->__9__161_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v111->__9__161_1, (int32_t)_9__161_1, v112, v113);
      }
      v114 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    v107,
                                                                    (System_Func_TSource__TResult__o *)_9__161_1,
                                                                    (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v115 = System_Linq_Enumerable__Distinct_int_(
               v114,
               (const MethodInfo_30F1B3C *)Method_System_Linq_Enumerable_Distinct_int___);
      IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                         v115,
                         (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( IsGrandServant )
      {
        v117 = *((_QWORD *)IsGrandServant + 3);
        v118 = IsGrandServant;
        if ( (int)v117 >= 1 )
        {
          v119 = 0;
          while ( 1 )
          {
            if ( v119 >= (unsigned int)v117 )
              goto LABEL_289;
            v120 = this->fields.servantEntity;
            v121 = v118[v119 + 8];
            v122 = (EventPersonalMargeUpValInfo_o *)sub_1C2D6DC(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v122, v121, v120, 0);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_288;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
            if ( !v122 )
              goto LABEL_288;
            EventPersonalMargeUpValInfo__Add(v122, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v122, 0);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v122, 0);
              if ( !IsGrandServant )
                goto LABEL_288;
              v123 = *((_QWORD *)IsGrandServant + 3);
              v124 = IsGrandServant;
              if ( (int)v123 >= 1 )
                break;
            }
LABEL_135:
            LODWORD(v117) = v118[6];
            if ( (__int64)++v119 >= (int)v117 )
              goto LABEL_136;
          }
          v125 = 0;
          while ( v125 < (unsigned int)v123 )
          {
            if ( !v106 )
              goto LABEL_288;
            v19 = (Il2CppObject *)v124[v125 + 4];
            v126 = v106->fields._items;
            v127 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v106->fields._version;
            if ( !v126 )
              goto LABEL_288;
            v128 = v106->fields._size;
            if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v106,
                v19,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
            }
            else
            {
              v129 = &v126->obj.klass + v128;
              v106->fields._size = v128 + 1;
              v129[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v129 + 4), (int32_t)v19, v20, v116);
            }
            LODWORD(v123) = *((_DWORD *)v124 + 6);
            if ( (__int64)++v125 >= (int)v123 )
              goto LABEL_135;
          }
          goto LABEL_289;
        }
LABEL_136:
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 1, v116);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsGrandServant )
        {
          v130 = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                (PartyOrganizationUtility_o *)IsGrandServant,
                                                                &isDuplicate,
                                                                (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v106,
                                                                0);
          this->fields._IsDuplicateBonus_k__BackingField = isDuplicate;
          v131 = (const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
          goto LABEL_143;
        }
      }
    }
    goto LABEL_288;
  }
  IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_288;
  v155 = DataManager__GetMasterData_object_(
           (DataManager_o *)IsGrandServant,
           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  v156 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v156,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v263 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v156;
  if ( !*p_setupInfo )
    goto LABEL_288;
  v158 = (*p_setupInfo)->fields.eventIdList;
  if ( !v158 )
    goto LABEL_288;
  max_length = v158->max_length;
  if ( (int)max_length >= 1 )
  {
    v160 = 0;
    while ( 1 )
    {
      if ( v160 >= (unsigned int)max_length )
        goto LABEL_289;
      if ( !v155 )
        goto LABEL_288;
      v161 = v158->m_Items[v160];
      v162 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v155,
               v161,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v162
        || (IsGrandServant = (void *)EventDetailEntity__HasFlag((EventDetailEntity_o *)v162, 0x800000000LL, 0),
            ((unsigned __int8)IsGrandServant & 1) == 0) )
      {
        v163 = this->fields.servantEntity;
        v164 = (EventPersonalMargeUpValInfo_o *)sub_1C2D6DC(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v164, v161, v163, 0);
        IsGrandServant = this->fields.eventUpValInfo;
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
        if ( !v164 )
          goto LABEL_288;
        EventPersonalMargeUpValInfo__Add(v164, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
        IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v164, 0);
        if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
        {
          IsGrandServant = EventPersonalMargeUpValInfo__GetList(v164, 0);
          if ( !IsGrandServant )
            goto LABEL_288;
          v165 = *((_QWORD *)IsGrandServant + 3);
          v166 = IsGrandServant;
          if ( (int)v165 >= 1 )
            break;
        }
      }
LABEL_185:
      LODWORD(max_length) = v158->max_length;
      if ( (__int64)++v160 >= (int)max_length )
        goto LABEL_186;
    }
    v167 = 0;
    while ( v167 < (unsigned int)v165 )
    {
      if ( !v156 )
        goto LABEL_288;
      v19 = (Il2CppObject *)v166[v167 + 4];
      v168 = v156->fields._items;
      v169 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v156->fields._version;
      if ( !v168 )
        goto LABEL_288;
      v170 = v156->fields._size;
      if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v156,
          v19,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
      }
      else
      {
        v171 = &v168->obj.klass + v170;
        v156->fields._size = v170 + 1;
        v171[4] = (Il2CppClass *)v19;
        sub_1C2D434((CGThumbnailListItem_o *)(v171 + 4), (int32_t)v19, v20, v157);
      }
      LODWORD(v165) = *((_DWORD *)v166 + 6);
      if ( (__int64)++v167 >= (int)v165 )
        goto LABEL_185;
    }
LABEL_289:
    sub_1C2D6F4(IsGrandServant, v19, v20);
  }
LABEL_186:
  PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v263, 0, v157);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_288;
  v134 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v156,
           0);
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  v133 = &this->fields.eventUpValInfo;
LABEL_145:
  this->fields.eventUpValItemList = v134;
  sub_1C2D434((CGThumbnailListItem_o *)p_eventUpValItemList, (int32_t)v134, v135, v136);
  if ( !this->fields.questRestrictionInfo )
    return;
  if ( !*p_setupInfo )
  {
    v138 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 1);
    v139 = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_41515380(v139, v138, 0, 0, 0, 0);
    *p_setupInfo = v139;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)v139, v140, v141);
  }
  if ( this->fields.isEventUpVal && *v133 )
  {
    v142 = this->fields.userServantEntity;
    v143 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v137);
    v144 = this->fields.questRestrictionInfo;
    if ( !v144 )
      goto LABEL_288;
    if ( !v142 )
      goto LABEL_288;
    IsGrandServant = (void *)UserServantEntity__GetBonusUpVal(
                               v142,
                               &v258,
                               v143,
                               (System_Int64_array *)IsGrandServant,
                               v144->fields.questId,
                               v144->fields.questPhase,
                               0);
    if ( !v258 )
      goto LABEL_288;
    IsGrandServant = v258->fields.dropList;
    if ( !IsGrandServant )
      goto LABEL_288;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v256,
      (System_Collections_Generic_List_object__o *)IsGrandServant,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    v257 = v256;
    while ( 1 )
    {
      v145 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v257,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
      if ( !v145 )
        break;
      if ( !*v133 )
        sub_1C2D6EC(v145, v146);
      v149 = (System_Collections_Generic_List_object__o *)(*v133)->fields.dropList;
      if ( !v149 )
        sub_1C2D6EC(0, v146);
      v150 = v257.fields._current;
      v151 = v149->fields._items;
      v152 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v149->fields._version;
      if ( !v151 )
        sub_1C2D6EC(v149, v150);
      v153 = v149->fields._size;
      if ( (unsigned int)v153 >= LODWORD(v151->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v149,
          v150,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
      }
      else
      {
        v154 = &v151->obj.klass + v153;
        v149->fields._size = v153 + 1;
        v154[4] = (Il2CppClass *)v150;
        sub_1C2D434((CGThumbnailListItem_o *)(v154 + 4), (int32_t)v150, v147, v148);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v257,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  }
  else
  {
    v196 = this->fields.userServantEntity;
    v197 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v137);
    v198 = this->fields.questRestrictionInfo;
    if ( !v198 || !v196 )
      goto LABEL_288;
    this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                  v196,
                                  v133,
                                  v197,
                                  (System_Int64_array *)IsGrandServant,
                                  v198->fields.questId,
                                  v198->fields.questPhase,
                                  0);
  }
  v199 = this->fields.servantEntity;
  v200 = (EventPersonalMargeUpValInfo_o *)sub_1C2D6DC(EventPersonalMargeUpValInfo_TypeInfo);
  EventPersonalMargeUpValInfo___ctor(v200, 0, v199, 0);
  IsGrandServant = this->fields.eventUpValInfo;
  if ( !IsGrandServant )
    goto LABEL_288;
  IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0);
  if ( !v200 )
    goto LABEL_288;
  EventPersonalMargeUpValInfo__Add(v200, (EventDropItemUpValInfo_array *)IsGrandServant, 0);
  if ( EventPersonalMargeUpValInfo__IsEmpty(v200, 0) )
    return;
  v201 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v201,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v19 = (Il2CppObject *)*p_eventUpValItemList;
  if ( *p_eventUpValItemList )
  {
    if ( !v201 )
      goto LABEL_288;
    System_Collections_Generic_List_object___AddRange(
      v201,
      (System_Collections_Generic_IEnumerable_T__o *)v19,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v200, 0);
  }
  else
  {
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v200, 0);
    if ( !v201 )
      goto LABEL_288;
  }
  System_Collections_Generic_List_object___AddRange(
    v201,
    (System_Collections_Generic_IEnumerable_T__o *)IsGrandServant,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
LABEL_288:
    sub_1C2D6EC(IsGrandServant, v19);
  v202 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v201,
           0);
  v32 = (int)v202;
  *p_eventUpValItemList = v202;
  p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
LABEL_229:
  sub_1C2D434((CGThumbnailListItem_o *)p_equipIdList, v32, v20, v21);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1C2D6F4(this, userSvtId, *(_QWORD *)&index);
    equipIdList->m_Items[index] = userSvtId;
    this->fields.equipSvtIdList = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, index, method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)userSvtIdList, (int32_t)method, v3);
  this->fields.equipSvtIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, v6, v7);
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
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void PartyOrganizationListViewItem__Set_34035952(
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

  if ( (byte_4C22D56 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D56 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
    goto LABEL_17;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  this->fields.followerInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v11, v12);
  *(_QWORD *)&this->fields.followerGrandGraphId = 0;
  this->fields.followerClassId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
  if ( !v14 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v18, v19);
  this->fields.classId = item->fields.classId;
  *(_QWORD *)&this->fields.cost = *(_QWORD *)&item->fields.cost;
  this->fields.atk = item->fields.atk;
  v20 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  if ( !v20 )
    goto LABEL_17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                v20->fields.limitCount,
                                0);
  v21 = this->fields.userServantEntity;
  this->fields.svtLimitCount = (int)Instance;
  if ( !v21 )
    goto LABEL_17;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v21, 0);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v23, v24);
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
    sub_1C2D6EC(Instance, v6);
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

  if ( (byte_4C22D59 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C22D59 = 1;
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
    sub_1C2D6EC(p_userServantEntity, item);
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
  sub_1C2D434((CGThumbnailListItem_o *)p_userServantEntity, (int32_t)v16, notChangeInitPos, method);
  v17 = item->fields.followerInfo;
  this->fields.followerInfo = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)v17, v18, v19);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  v20 = item->fields.servantEntity;
  this->fields.servantEntity = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v20, v21, v22);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  v23 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v23;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v23, v24, v25);
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
  v32 = sub_1C2D5CC(v30, int___TypeInfo);
  if ( !v32
    || (*p_equipSvtIdList = (struct System_Int32_array *)v32,
        v33 = sub_1C2D5CC(v31, int___TypeInfo),
        LOBYTE(v13) = v57,
        v34 = v33,
        !v33) )
  {
    sub_1C2D9AC(v31);
LABEL_9:
    v34 = 0;
    *p_equipSvtIdList = 0;
  }
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v34, v26, v27);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v35);
  v36 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v36, v37, v38);
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
  sub_1C2D434((CGThumbnailListItem_o *)&item->fields.userServantEntity, (int32_t)userServantEntity, v39, v40);
  item->fields.followerInfo = followerInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v41, v42);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  item->fields.followerIndex = followerIndex;
  sub_1C2D434((CGThumbnailListItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v43, v44);
  *(_QWORD *)&item->fields.cost = v10;
  *(_QWORD *)&item->fields.atk = v9;
  *(_QWORD *)&item->fields.rarityId = v12;
  *(_QWORD *)&item->fields.frameType = v11;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1C2D434((CGThumbnailListItem_o *)&item->fields.commandCodeIdList, (int32_t)commandCodeIdList, v45, v46);
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
  v51 = sub_1C2D5CC(v49, int___TypeInfo);
  if ( !v51 || (*v29 = (struct System_Int32_array *)v51, v52 = sub_1C2D5CC(v50, int___TypeInfo), v53 = v52, !v52) )
  {
    sub_1C2D9AC(v50);
LABEL_17:
    v53 = 0;
    *v29 = 0;
  }
  sub_1C2D434((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v53, v47, v48);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v54);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C2D434(
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
  const MethodInfo *v12; // x2
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Int64_array *v16; // x8
  struct System_Int64_array *v17; // x9
  int64_t v18; // x10
  struct System_Int32_array **p_equipSvtIdList; // x21
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Int32_array **v23; // x22
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Int32_array *v27; // x8
  struct System_Int32_array *v28; // x9
  int32_t v29; // w11
  const MethodInfo *v30; // x2

  if ( (byte_4C22D5A & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    byte_4C22D5A = 1;
  }
  p_equipIdList = &this->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v8 = sub_1C2D538(long___TypeInfo, 1);
    *p_equipIdList = (struct System_Int64_array *)v8;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, v8, v9, v10);
  }
  if ( !item )
    goto LABEL_22;
  v11 = &item->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipIdList, 0);
  if ( IsNullOrEmpty )
  {
    v13 = sub_1C2D538(long___TypeInfo, 1);
    *v11 = (struct System_Int64_array *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)&item->fields.equipIdList, v13, v14, v15);
  }
  v16 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_22;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_23;
  v17 = *v11;
  if ( !*v11 )
    goto LABEL_22;
  if ( !LODWORD(v17->max_length)
    || (v18 = v16->m_Items[0], v16->m_Items[0] = v17->m_Items[0], !LODWORD(v17->max_length)) )
  {
LABEL_23:
    sub_1C2D6F4(IsNullOrEmpty, v7, v12);
  }
  v17->m_Items[0] = v18;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSvtIdList, 0) )
  {
    v20 = sub_1C2D538(int___TypeInfo, 1);
    *p_equipSvtIdList = (struct System_Int32_array *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v20, v21, v22);
  }
  v23 = &item->fields.equipSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipSvtIdList, 0);
  if ( IsNullOrEmpty )
  {
    v24 = sub_1C2D538(int___TypeInfo, 1);
    *v23 = (struct System_Int32_array *)v24;
    sub_1C2D434((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v24, v25, v26);
  }
  v27 = *p_equipSvtIdList;
  if ( !*p_equipSvtIdList )
    goto LABEL_22;
  if ( !LODWORD(v27->max_length) )
    goto LABEL_23;
  v28 = *v23;
  if ( !*v23 )
LABEL_22:
    sub_1C2D6EC(IsNullOrEmpty, v7);
  if ( !LODWORD(v28->max_length) )
    goto LABEL_23;
  v29 = v27->m_Items[0];
  v27->m_Items[0] = v28->m_Items[0];
  v28->m_Items[0] = v29;
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v12);
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
  __int64 v10; // x2
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x8
  int32_t v12; // w20
  Il2CppObject *Master_object; // x21
  __int64 v14; // x22
  __int128 v15; // q0
  struct System_Collections_Generic_List_UserServantEntity__o *v16; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  __int128 v18; // q0
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v26; // x20
  __int64 v27; // x21
  UserServantEntity_o *v28; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool IsGrandServant_k__BackingField; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+90h] [xbp-90h]
  QuestPhaseEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4C22D80 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22D80 = 1;
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
    v12 = 0;
    while ( v12 < equipUserServantEntityList->fields._size )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
      IsNullOrEmpty = sub_1C2D538(long___TypeInfo, 1);
      if ( !this->fields.equipUserServantEntityList )
        goto LABEL_44;
      v14 = IsNullOrEmpty;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                 v12,
                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_44;
      v15 = *(_OWORD *)(IsNullOrEmpty + 32);
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
      *(_OWORD *)&v38.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v38;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v37, 0);
      if ( !v14 )
        goto LABEL_44;
      if ( !*(_DWORD *)(v14 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v14 + 32) = IsNullOrEmpty;
      if ( !Master_object )
        goto LABEL_44;
      IsNullOrEmpty = DataMasterBase_object__object__long___isEntityExistsFromId(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        (System_Int64_array *)v14,
                        (const MethodInfo_33898D0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v16 = this->fields.equipUserServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !this->fields.equipUserServantEntityList )
          goto LABEL_44;
        v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                   v12,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_44;
        v18 = *(_OWORD *)(IsNullOrEmpty + 32);
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
        *(_OWORD *)&v38.fields.fakeValue = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v38;
        IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v36, 0);
        if ( !v17 )
          goto LABEL_44;
        IsNullOrEmpty = (__int64)DataMasterBase_object__object__long___GetEntity(
                                   v17,
                                   IsNullOrEmpty,
                                   (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !v16 )
          goto LABEL_44;
        System_Collections_Generic_List_object___set_Item(
          (System_Collections_Generic_List_object__o *)v16,
          v12,
          (Il2CppObject *)IsNullOrEmpty,
          (const MethodInfo_3789908 *)Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
      }
      else
      {
        this->fields._IsDisappearEquip_k__BackingField = 1;
      }
      equipUserServantEntityList = this->fields.equipUserServantEntityList;
      ++v12;
      if ( !equipUserServantEntityList )
        goto LABEL_44;
    }
  }
  p_userServantEntity = &this->fields.userServantEntity;
  if ( this->fields.userServantEntity && !this->fields._IsDisappearSvt_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    IsNullOrEmpty = sub_1C2D538(long___TypeInfo, 1);
    v7 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_44;
    v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
    v9 = IsNullOrEmpty;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v35 = v38;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v35, 0);
    if ( !v9 )
      goto LABEL_44;
    if ( !*(_DWORD *)(v9 + 24) )
LABEL_69:
      sub_1C2D6F4(IsNullOrEmpty, v4, v10);
    *(_QWORD *)(v9 + 32) = IsNullOrEmpty;
    if ( !v6 )
      goto LABEL_44;
    if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v6,
            (System_Int64_array *)v9,
            (const MethodInfo_33898D0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
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
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    v19 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_44;
    v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v20;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v38;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v34, 0);
    if ( !v21 )
      goto LABEL_44;
    v22 = DataMasterBase_object__object__long___GetEntity(
            v21,
            IsNullOrEmpty,
            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this->fields.userServantEntity = (struct UserServantEntity_o *)v22;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)v22, v23, v24);
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
    v27 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v26 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v27;
    *(_QWORD *)&v40.fields.fakeValue = v26;
    IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0);
    v28 = this->fields.userServantEntity;
    this->fields.svtLimitCount = IsNullOrEmpty;
    if ( !v28 )
      goto LABEL_44;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v28, 0);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v30, v31);
    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
    if ( !IsNullOrEmpty )
      goto LABEL_44;
    this->fields._IsGrandServant_k__BackingField = UserServantEntity__IsGrandServant(
                                                     (UserServantEntity_o *)IsNullOrEmpty,
                                                     0);
    IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
      sub_1C2D6EC(IsNullOrEmpty, v4);
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

  if ( (byte_4C22D7F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C2D490(&PartyOrganizationListViewObject_TypeInfo);
    byte_4C22D7F = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((naturalAligment = PartyOrganizationListViewObject_TypeInfo->_2.naturalAligment,
         viewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v6 = (PartyOrganizationListViewItem_o *)sub_1C2D9AC(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_34037668(v6, v7, v8);
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
      sub_1C2D6EC(this, item);
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

  if ( (byte_4C22D7B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22D7B = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v4 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v8);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
    if ( !MasterData_object )
LABEL_17:
      sub_1C2D6EC(Instance, v6);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v4, 0);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C2267D )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C2267D = 1;
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

  if ( (byte_4C22D6A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C22D6A = 1;
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
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C2D6EC(equipServantEntityList, v4);
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

  if ( (byte_4C22D6F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D6F = 1;
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
                                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C2D6EC(IsNullOrEmpty, v4);
    }
    items = IsNullOrEmpty[2].fields._items;
    v11 = *(_QWORD *)&IsNullOrEmpty[2].fields._size;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = items;
    *(_QWORD *)&v15.fields.fakeValue = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
  }
}


int32_t PartyOrganizationListViewItem__get_EquipLimitCountMax(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *equipServantEntityList; // x0

  if ( (byte_4C22D70 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C22D70 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return 0;
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C2D6EC(equipServantEntityList, v3);
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

  if ( (byte_4C22D71 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D71 = 1;
  }
  v3 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0) )
    return v3;
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                equipServantEntityList,
                                                                                0,
                                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
  {
    sub_1C2D6EC(equipServantEntityList, v4);
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

  if ( (byte_4C22D6D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D6D = 1;
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
                                                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0) )
    {
      sub_1C2D6EC(equipServantEntityList, v6);
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

  if ( (byte_4C22D6E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D6E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)equipServantEntityList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__) )
  {
    if ( v14.fields._current )
    {
      klass = v14.fields._current[1].klass;
      monitor = v14.fields._current[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v15.fields.currentCryptoKey = klass;
      *(_QWORD *)&v15.fields.fakeValue = monitor;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
      if ( !v3 )
        sub_1C2D6EC(v8, (unsigned int)v8);
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(v8, (unsigned int)v8);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v8,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
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

  if ( (byte_4C22D6B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22D6B = 1;
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
                                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0) )
    {
      sub_1C2D6EC(equipUserServantEntityList, v3);
    }
    v8 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
    *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
    *(_OWORD *)&v10.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v9 = v10;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v9, 0);
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

  if ( (byte_4C22D7E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22D7E = 1;
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

  if ( (byte_4C22D67 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4C22D67 = 1;
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
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v9 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v12.fields._current )
          v9 += *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_108);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.atk + v9;
    }
LABEL_23:
    sub_1C2D6EC(equipUserServantEntityList, v3);
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

  if ( (byte_4C22D69 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantEntity__get_Item__);
    byte_4C22D69 = 1;
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
                                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0 )
    {
      sub_1C2D6EC(equipServantEntityList, v6);
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

  if ( (byte_4C22D68 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    byte_4C22D68 = 1;
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
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v9 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v12.fields._current )
          v9 += *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&qword_108 + 4);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.hp + v9;
    }
LABEL_23:
    sub_1C2D6EC(equipUserServantEntityList, v3);
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

  if ( (byte_4C22D64 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D64 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantAddMaster___);
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (ServantAddMaster_o *)Master_object;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, v4);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, v8);
  if ( !v5 )
    sub_1C2D6EC(ServantName, v10);
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

  if ( (byte_4C22D63 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22D63 = 1;
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

  if ( (byte_4C22D65 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19056/*"error"*/);
    byte_4C22D65 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1C2D6EC(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19056/*"error"*/;
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
  sub_1C2D434(
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
  sub_1C2D434(
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

  if ( (byte_4C22D88 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4C22D88 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_1(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4C22D89 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D89 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_2(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1C2D6EC(this, 0);
  return script->fields.eventCampaignBonusDetailName;
}


bool PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__357_3(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4C22D8A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D8A = 1;
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

  if ( (byte_4C22D8B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_long___);
    this = (PartyOrganizationListViewItem___c_o *)sub_1C2D490(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4C22D8B = 1;
  }
  if ( !id )
    sub_1C2D6EC(this, id);
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
    v7 = sub_1C7DCA8(id, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(id, *(_QWORD *)(v7 + 8)) >= 1
      && System_Linq_Enumerable__Count_long_(
           (System_Collections_Generic_IEnumerable_TSource__o *)id,
           (const MethodInfo_30EE90C *)Method_System_Linq_Enumerable_Count_long___) > 1;
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

  if ( (byte_4C22D8C & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem___c_o *)sub_1C2D490(&System_Linq_IGrouping_long__long__TypeInfo);
    byte_4C22D8C = 1;
  }
  if ( !group )
    sub_1C2D6EC(this, group);
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
    v7 = sub_1C7DCA8(group, System_Linq_IGrouping_long__long__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__161_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C2D6EC(this, 0);
  return drop->fields.eventId;
}


int32_t PartyOrganizationListViewItem___c___SetEquipStatus_b__161_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, id);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(equipIdList->max_length) )
    sub_1C2D6F4(this, id, method);
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

  if ( (byte_4C22D8D & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationListViewItem___c__DisplayClass365_1__GetCanOrganizationGrandSvtIdList_b__1__);
    sub_1C2D490(&PartyOrganizationListViewItem___c__DisplayClass365_1_TypeInfo);
    byte_4C22D8D = 1;
  }
  v5 = sub_1C2D6DC(PartyOrganizationListViewItem___c__DisplayClass365_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v9 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyOrganizationListViewItem___c__DisplayClass365_1__GetCanOrganizationGrandSvtIdList_b__1__,
    0);
  return BasicHelper__Any_int__51083888(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
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
    sub_1C2D6EC(0, x);
  return GrandGraphEntity__CanSelectToGrand(grandGraphEntity, x, 0);
}