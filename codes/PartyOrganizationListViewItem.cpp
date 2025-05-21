// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B405C3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v6);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v7);
    byte_4B405C3 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v11, v12, v13);
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_33332208(
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
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct FollowerInfo_o **p_followerInfo; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  void *ReturnTypeByQuestId; // x0
  unsigned __int64 v49; // x1
  FollowerInfo_o *followerInfo; // x28
  int32_t v51; // w2
  int32_t v52; // w0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t followerIndex; // w25
  FollowerInfo_o *v56; // x26
  int32_t v57; // w2
  ServantLeaderInfo_o *v58; // x26
  bool v59; // w8
  int32_t v60; // w27
  FollowerInfo_o *v61; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x25
  int32_t v63; // w2
  Il2CppObject *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w1
  struct ServantEntity_o *servantEntity; // x8
  int32_t v69; // w9
  int32_t v70; // w26
  FollowerInfo_o *v71; // x27
  int32_t v72; // w2
  int32_t v73; // w8
  int32_t v74; // w26
  FollowerInfo_o *v75; // x27
  int32_t v76; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x1
  int32_t v81; // w26
  FollowerInfo_o *v82; // x27
  int32_t v83; // w3
  struct QuestRestrictionInfo_o **v84; // x25
  __int64 v85; // x2
  int v86; // w8
  void *v87; // x23
  unsigned int v88; // w20
  __int64 v89; // x24
  __int64 v90; // x27
  __int64 v91; // x28
  int32_t v92; // w27
  int32_t v93; // w28
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x27
  int32_t Rarity; // w0
  bool IsNpcMulitipleOrOnly; // w8
  bool IsGrandServant_k__BackingField; // w8
  struct QuestRestrictionInfo_o *v99; // x8
  struct QuestRestrictionInfo_o **v100; // x26
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v102; // x8
  UserEventDataLostEntity_o *v103; // x22
  __int64 v104; // x23
  __int64 v105; // x24
  struct ServantEntity_o *v106; // x8
  char v107; // w22
  UserEventDataLostEntity_o *v108; // x23
  __int64 v109; // x24
  __int64 v110; // x25
  struct QuestRestrictionInfo_o *v111; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v113; // x23
  const MethodInfo *v114; // x1
  const MethodInfo *v115; // x2
  const MethodInfo *v116; // x1
  int32_t v117; // w21
  __int64 v118; // x24
  __int64 v119; // x25
  int32_t v120; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v122; // x1
  const MethodInfo *v123; // x2
  struct QuestRestrictionInfo_o *v124; // x8
  bool IsNotClassBoard; // w20
  struct ServantEntity_o **p_servantEntity; // [xsp+0h] [xbp-A0h]
  QuestPhaseEntity_o *v128; // [xsp+20h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *v129; // [xsp+28h] [xbp-78h] BYREF
  bool isWhole; // [xsp+34h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_4B405C5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v19);
    sub_1BDB878(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v20);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v21);
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v22);
    sub_1BDB878(&DataManager_TypeInfo, v23);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v25);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v26);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v27);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v28);
    sub_1BDB878(&NetworkManager_TypeInfo, v29);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    byte_4B405C5 = 1;
  }
  entity = 0LL;
  isWhole = 0;
  v128 = 0LL;
  v129 = 0LL;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v35, v36, v37);
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v38, v39);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v41, v42);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v43,
    v44);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v46, v47);
  this->fields.isFixNpc = isFixNpc;
  followerInfo = this->fields.followerInfo;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  this->fields.followerGrandGraphId = followerGrandGraphId;
  if ( followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
      v51 = (int)ReturnTypeByQuestId;
      if ( !followerInfo )
        goto LABEL_154;
    }
    else
    {
      v51 = 0;
      if ( !followerInfo )
        goto LABEL_154;
    }
  }
  else
  {
    v51 = 2;
    if ( !followerInfo )
      goto LABEL_154;
  }
  v52 = FollowerInfo__getIndex(followerInfo, followerClassId, v51, followerDeckId, followerGrandGraphId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v52;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v53, v54);
  followerIndex = this->fields.followerIndex;
  v56 = this->fields.followerInfo;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
      v57 = (int)ReturnTypeByQuestId;
      if ( !v56 )
        goto LABEL_154;
    }
    else
    {
      v57 = 0;
      if ( !v56 )
        goto LABEL_154;
    }
  }
  else
  {
    v57 = 2;
    if ( !v56 )
      goto LABEL_154;
  }
  ReturnTypeByQuestId = FollowerInfo__getServantLeaderInfo(v56, followerIndex, v57, 0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_154;
  v58 = (ServantLeaderInfo_o *)ReturnTypeByQuestId;
  this->fields._IsGrandServant_k__BackingField = ServantLeaderInfo__get_IsGrandSvt(
                                                   (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                                   0LL);
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  this->fields._EquipFriendShipSkillChange_k__BackingField = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
                                                               v58,
                                                               0LL);
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_154;
    if ( QuestPhaseMaster__TryGetEntity(
           (QuestPhaseMaster_o *)ReturnTypeByQuestId,
           &entity,
           questRestrictionInfo->fields.questId,
           questRestrictionInfo->fields.questPhase,
           0LL) )
    {
      ReturnTypeByQuestId = entity;
      if ( !entity )
        goto LABEL_154;
      v59 = QuestPhaseEntity__IsUseGrandBoard(entity, 0LL) && this->fields._IsGrandServant_k__BackingField;
      this->fields._IsUseGrandBoard_k__BackingField = v59;
    }
  }
  ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_154;
  ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                          (DataManager_o *)ReturnTypeByQuestId,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v60 = this->fields.followerIndex;
  v61 = this->fields.followerInfo;
  v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
      v63 = (int)ReturnTypeByQuestId;
      if ( !v61 )
        goto LABEL_154;
    }
    else
    {
      v63 = 0;
      if ( !v61 )
        goto LABEL_154;
    }
  }
  else
  {
    v63 = 2;
    if ( !v61 )
      goto LABEL_154;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getSvtId(v61, v60, v63, 0LL);
  if ( !v62 )
    goto LABEL_154;
  v64 = DataMasterBase_object__object__int___GetEntity(
          v62,
          (int32_t)ReturnTypeByQuestId,
          (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v64;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v64, v65, v66);
  this->fields.cost = 0;
  ReturnTypeByQuestId = ServantLeaderInfo__GetOverwriteStatus(v58, 0LL);
  if ( !ReturnTypeByQuestId
    || (*(_QWORD *)&this->fields.hp = *((_QWORD *)ReturnTypeByQuestId + 2),
        this->fields.rarityId = *((_DWORD *)ReturnTypeByQuestId + 6),
        v67 = *((_DWORD *)ReturnTypeByQuestId + 10),
        this->fields.actualRarity = v67,
        ReturnTypeByQuestId = (void *)ServantLeaderInfo__GetFrameType(v58, v67, 0LL),
        servantEntity = this->fields.servantEntity,
        this->fields.frameType = (int)ReturnTypeByQuestId,
        !servantEntity) )
  {
LABEL_154:
    sub_1BDBAD4(ReturnTypeByQuestId, v49);
  }
  v69 = this->fields.followerGrandGraphId;
  v70 = this->fields.followerIndex;
  v71 = this->fields.followerInfo;
  this->fields.classId = servantEntity->fields.classId;
  if ( v69 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
      v72 = (int)ReturnTypeByQuestId;
      if ( !v71 )
        goto LABEL_154;
    }
    else
    {
      v72 = 0;
      if ( !v71 )
        goto LABEL_154;
    }
  }
  else
  {
    v72 = 2;
    if ( !v71 )
      goto LABEL_154;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getLimitCount(v71, v70, v72, 0LL);
  v73 = this->fields.followerGrandGraphId;
  v74 = this->fields.followerIndex;
  v75 = this->fields.followerInfo;
  this->fields.svtLimitCount = (int)ReturnTypeByQuestId;
  if ( v73 <= 0 )
  {
    if ( *p_questRestrictionInfo )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
      v76 = (int)ReturnTypeByQuestId;
      if ( !v75 )
        goto LABEL_154;
    }
    else
    {
      v76 = 0;
      if ( !v75 )
        goto LABEL_154;
    }
  }
  else
  {
    v76 = 2;
    if ( !v75 )
      goto LABEL_154;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v75, v74, v76, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v78, v79);
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v80);
  if ( ReturnTypeByQuestId && *p_questRestrictionInfo )
  {
    v81 = this->fields.followerIndex;
    v82 = this->fields.followerInfo;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
      v83 = (int)ReturnTypeByQuestId;
      if ( !v82 )
        goto LABEL_154;
    }
    else
    {
      v83 = 2;
      if ( !v82 )
        goto LABEL_154;
    }
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_40749148(
                                        v82,
                                        questRestrictionInfo,
                                        v81,
                                        v83,
                                        this->fields._InitPos_k__BackingField,
                                        &this->fields.isQuestRestrictionWhole,
                                        0LL);
  }
  else
  {
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  if ( initPos )
    v49 = (unsigned int)initPos;
  else
    v49 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  *(_DWORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v49;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  p_servantEntity = &this->fields.servantEntity;
  if ( !questRestrictionInfo
    || (ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(
                                        questRestrictionInfo,
                                        v49,
                                        0LL),
        ((unsigned __int8)ReturnTypeByQuestId & 1) == 0) )
  {
    if ( *p_questRestrictionInfo )
      IsNpcMulitipleOrOnly = QuestRestrictionInfo__IsNpcMulitipleOrOnly(*p_questRestrictionInfo, 0LL);
    else
      IsNpcMulitipleOrOnly = 0;
    if ( !isFixNpc || !IsNpcMulitipleOrOnly )
    {
      v84 = &this->fields.questRestrictionInfo;
      this->fields.isFixMultipleNpc = 0;
      if ( !questRestrictionInfo )
        goto LABEL_97;
      goto LABEL_95;
    }
    ReturnTypeByQuestId = this->fields.questRestrictionInfo;
    this->fields.isFixMultipleNpc = 1;
    if ( !ReturnTypeByQuestId )
      goto LABEL_154;
    ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsUseOldMaster(
                                    (QuestRestrictionInfo_o *)ReturnTypeByQuestId,
                                    0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_154;
    v84 = &this->fields.questRestrictionInfo;
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
        goto LABEL_94;
    }
    else
    {
      ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0LL);
      if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
        goto LABEL_94;
    }
    if ( !follower )
      goto LABEL_154;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
LABEL_94:
    if ( !questRestrictionInfo )
      goto LABEL_97;
    goto LABEL_95;
  }
  this->fields.isMyServantOrNpcRestriction = 1;
  if ( !follower )
    goto LABEL_154;
  this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
  ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_154;
  ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                          (DataManager_o *)ReturnTypeByQuestId,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !ReturnTypeByQuestId )
    goto LABEL_154;
  v84 = &this->fields.questRestrictionInfo;
  ReturnTypeByQuestId = UserServantMaster__getOrganizationList((UserServantMaster_o *)ReturnTypeByQuestId, 0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_154;
  v86 = *((_DWORD *)ReturnTypeByQuestId + 6);
  v87 = ReturnTypeByQuestId;
  if ( v86 < 1 )
    goto LABEL_94;
  v88 = 0;
  while ( 1 )
  {
    if ( v88 >= v86 )
      sub_1BDBADC(ReturnTypeByQuestId, v49, v85);
    v89 = *((_QWORD *)v87 + (int)v88 + 4);
    if ( !v89 )
      goto LABEL_154;
    v91 = *(_QWORD *)(v89 + 80);
    v90 = *(_QWORD *)(v89 + 88);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v132.fields.currentCryptoKey = v91;
    *(_QWORD *)&v132.fields.fakeValue = v90;
    v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v132, 0LL);
    v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v89 + 96),
            0LL);
    DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v89, 0, 0LL);
    ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                             questRestrictionInfo,
                             v92,
                             v93,
                             DispLimitCount,
                             0LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v89, 0LL);
    ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestriction_42358164(
                                    questRestrictionInfo,
                                    &isWhole,
                                    ServantIndividuality,
                                    Rarity,
                                    *(_DWORD *)(v89 + 256),
                                    this->fields._InitPos_k__BackingField,
                                    1,
                                    0LL);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
    {
      ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_42380456(
                                      questRestrictionInfo,
                                      ServantIndividuality,
                                      this->fields._InitPos_k__BackingField,
                                      0LL);
      if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
        break;
    }
    v86 = *((_DWORD *)v87 + 6);
    if ( (int)++v88 >= v86 )
      goto LABEL_94;
  }
  this->fields.haveIndividualityServant = 1;
LABEL_95:
  if ( QuestRestrictionInfo__IsGrandServantRestriction(questRestrictionInfo, initPos, 0LL) )
  {
    IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
    this->fields.isRestrictionGrandServant = 1;
    this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
  }
LABEL_97:
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  v99 = this->fields.questRestrictionInfo;
  v100 = v84;
  if ( v99 && v99->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v49);
      byte_4B3ED56 = 1;
    }
    ReturnTypeByQuestId = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      ReturnTypeByQuestId = NetworkManager_TypeInfo;
    }
    if ( !*v84 || !Master_object )
      goto LABEL_154;
    ReturnTypeByQuestId = (void *)UserEventDataLostMaster__TryGetEntity(
                                    (UserEventDataLostMaster_o *)Master_object,
                                    &v129,
                                    *(_QWORD *)(*((_QWORD *)ReturnTypeByQuestId + 23) + 64LL),
                                    (*v84)->fields.dataLostBattleId,
                                    0LL);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      v102 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_154;
      v103 = v129;
      v105 = *(_QWORD *)&v102->fields.id.fields.currentCryptoKey;
      v104 = *(_QWORD *)&v102->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v133.fields.currentCryptoKey = v105;
      *(_QWORD *)&v133.fields.fakeValue = v104;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v133, 0LL);
      if ( !v103 )
        goto LABEL_154;
      ReturnTypeByQuestId = (void *)UserEventDataLostEntity__IsRestart(v103, (int32_t)ReturnTypeByQuestId, 0LL);
      v106 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_154;
      v107 = (char)ReturnTypeByQuestId;
      v108 = v129;
      v110 = *(_QWORD *)&v106->fields.id.fields.currentCryptoKey;
      v109 = *(_QWORD *)&v106->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v134.fields.currentCryptoKey = v110;
      *(_QWORD *)&v134.fields.fakeValue = v109;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v134, 0LL);
      if ( !v108 )
        goto LABEL_154;
      if ( (v107 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v108,
                                                         (int32_t)ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v108, (int32_t)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  this->fields.fatigureTime = -1LL;
  this->fields.isFatigureRecover = 0;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  v111 = this->fields.questRestrictionInfo;
  if ( v111 )
  {
    eventId = v111->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_154;
    v113 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = *p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_154;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v114) )
        {
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v116);
          if ( !ReturnTypeByQuestId )
            goto LABEL_154;
          v117 = *((_DWORD *)ReturnTypeByQuestId + 60);
          this->fields._SvtPoint_k__BackingField = v117;
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v49);
          if ( !ReturnTypeByQuestId )
            goto LABEL_154;
          v119 = *((_QWORD *)ReturnTypeByQuestId + 6);
          v118 = *((_QWORD *)ReturnTypeByQuestId + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v135.fields.currentCryptoKey = v119;
          *(_QWORD *)&v135.fields.fakeValue = v118;
          v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v135, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v113, eventId, v117, v120, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v115);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v49) )
    goto LABEL_148;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v122);
  if ( !ReturnTypeByQuestId )
    goto LABEL_154;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v124 = *v100;
    if ( *v100 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *v100 && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v128,
               (*v100)->fields.questId,
               (*v100)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = v128;
          if ( !v128 )
            goto LABEL_154;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v128, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v49);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v124) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_152;
        }
      }
      goto LABEL_154;
    }
  }
  else
  {
LABEL_148:
    LOBYTE(v124) = 0;
  }
LABEL_152:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v124;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v123);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_33375980(
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
  System_Collections_Generic_List_object__o *v39; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_List_object__o *v42; // x19
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 Instance; // x0
  __int64 v57; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x27
  __int64 v60; // x19
  __int64 v61; // x28
  Il2CppObject *v62; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  ServantLimitMaster_o *v66; // x28
  int32_t v67; // w29
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int v70; // w9
  Il2CppObject *v71; // x0
  Il2CppObject *v72; // x25
  struct System_Int32_array *v73; // x0
  struct System_Int32_array **p_equipSvtIdList; // x26
  __int64 v75; // x0
  int32_t v76; // w1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x23
  int32_t v78; // w1
  struct UserServantEntity_o *v79; // x8
  __int64 v80; // x19
  __int64 v81; // x25
  UserServantEntity_o *v82; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  QuestRestrictionInfo_o *v86; // x25
  struct UserServantEntity_o *v87; // x8
  __int64 v88; // x19
  __int64 v89; // x26
  int32_t v90; // w26
  int32_t v91; // w27
  QuestRestrictionInfo_o *v92; // x25
  UserServantEntity_o *v93; // x8
  __int64 v94; // x19
  __int64 v95; // x26
  int32_t v96; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v98; // x2
  struct QuestRestrictionInfo_o *v99; // x8
  UserServantEntity_o *v100; // x9
  UserEventServantFatigueMaster_o *v101; // x24
  int32_t eventId; // w25
  __int64 v103; // x19
  __int64 v104; // x26
  int64_t v105; // x19
  struct QuestRestrictionInfo_o *v106; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v108; // x8
  UserEventAlloutBattleMaster_o *v109; // x25
  __int64 v110; // x19
  __int64 v111; // x26
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v113; // x8
  UserEventDataLostEntity_o *v114; // x24
  __int64 v115; // x19
  __int64 v116; // x25
  UserServantEntity_o *v117; // x8
  char v118; // w24
  UserEventDataLostEntity_o *v119; // x25
  __int64 v120; // x19
  __int64 v121; // x26
  __int64 v122; // x2
  int v123; // w8
  __int64 v124; // x24
  unsigned int v125; // w28
  __int64 v126; // x25
  __int64 v127; // x19
  __int64 v128; // x26
  int32_t v129; // w19
  int32_t v130; // w26
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  bool IsGrandServant_k__BackingField; // w8
  int32_t v135; // w22
  EventServantPointRankMaster_o *v136; // x23
  UserServantEntity_o *v137; // x8
  __int128 v138; // q0
  UserEventServantPointMaster_o *v139; // x24
  int64_t v140; // x25
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v142; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v145; // x2
  UserServantEntity_o *v146; // x8
  __int128 v147; // q0
  Il2CppObject *v148; // x22
  UserServantEntity_o *v149; // x8
  __int128 v150; // q0
  System_Int64_array *v151; // x23
  PartyOrganizationListViewItem_o *v152; // x0
  int32_t v153; // w1
  const MethodInfo *v154; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+90h] [xbp-A0h]
  UserEventServantPointEntity_o *v160; // [xsp+B0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+BCh] [xbp-74h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+C0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16

  if ( (byte_4B405C4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v20);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_1BDB878(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22);
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v24);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v25);
    sub_1BDB878(&DataManager_TypeInfo, v26);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v28);
    sub_1BDB878(&int___TypeInfo, v29);
    sub_1BDB878(&long___TypeInfo, v30);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v32);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v33);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v34);
    sub_1BDB878(&NetworkManager_TypeInfo, v35);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    byte_4B405C4 = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  isWhole = 0;
  v160 = 0LL;
  v39 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v39;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v39, v40, v41);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v42, v43, v44);
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v46, v47);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v48, v49);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v50,
    v51);
  this->fields.followerInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v52, v53);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.followerIndex = 0;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v54, v55);
  this->fields._EquipFriendShipSkillChange_k__BackingField = isChangeFriendShipSvtEquipSkill;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_145;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v58 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_145;
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v61 = *(_QWORD *)&v58[5].fields.currentCryptoKey;
  v60 = *(_QWORD *)&v58[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v164.fields.currentCryptoKey = v61;
  *(_QWORD *)&v164.fields.fakeValue = v60;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v164, 0LL);
  if ( !v59 )
    goto LABEL_145;
  v62 = DataMasterBase_object__object__int___GetEntity(
          v59,
          Instance,
          (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v62;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v62, v64, v65);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_145;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_145;
  v66 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_145;
  v67 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userServantEntity)[6], 0LL);
  if ( !v66 )
    goto LABEL_145;
  ServantLimitMaster__GetEntity(v66, v67, Instance, 0LL);
  if ( initPos )
    v70 = initPos;
  else
    v70 = index + 1;
  this->fields._InitPos_k__BackingField = v70;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v71 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL)) == 0LL )
  {
    v76 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1BDB81C((CGThumbnailListItem_o *)p_equipSvtIdList, v76, v68, v69);
    if ( !userServantEntity )
      goto LABEL_145;
    Instance = (__int64)UserServantEntity__GetOverwriteStatus(userServantEntity, questRestrictionInfo, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_145;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !Instance )
      goto LABEL_145;
    this->fields.cost = *(_DWORD *)(Instance + 28);
    *(_QWORD *)&this->fields.hp = *(_QWORD *)(Instance + 16);
    this->fields.rarityId = *(_DWORD *)(Instance + 24);
    v78 = *(_DWORD *)(Instance + 40);
    this->fields.actualRarity = v78;
    Instance = UserServantEntity__GetFrameType(userServantEntity, v78, 0LL);
    v79 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v79 )
      goto LABEL_145;
    v81 = *(_QWORD *)&v79->fields.limitCount.fields.currentCryptoKey;
    v80 = *(_QWORD *)&v79->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v165.fields.currentCryptoKey = v81;
    *(_QWORD *)&v165.fields.fakeValue = v80;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v165, 0LL);
    v82 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v82 )
      goto LABEL_145;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v82, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v84, v85);
    v86 = this->fields.questRestrictionInfo;
    if ( v86 )
    {
      v87 = this->fields.userServantEntity;
      if ( !v87 )
        goto LABEL_145;
      v89 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v166.fields.currentCryptoKey = v89;
      *(_QWORD *)&v166.fields.fakeValue = v88;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v166, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v90 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716((*p_userServantEntity)[6], 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v91 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_145;
      Instance = QuestRestrictionInfo__IsRestriction_42357884(
                   v86,
                   &this->fields.isQuestRestrictionWhole,
                   v90,
                   v91,
                   Instance,
                   this->fields.rarityId,
                   (*p_userServantEntity)[16].fields.currentCryptoKey,
                   this->fields._InitPos_k__BackingField,
                   1,
                   0LL);
      v92 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v92 )
      {
        v93 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_145;
        v95 = *(_QWORD *)&v93->fields.svtId.fields.currentCryptoKey;
        v94 = *(_QWORD *)&v93->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v167.fields.currentCryptoKey = v95;
        *(_QWORD *)&v167.fields.fakeValue = v94;
        v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v167, 0LL);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v92, v96, 0LL);
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
    this->fields.fatigureTime = -1LL;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    this->fields.isFixMultipleNpc = 0;
    this->fields.npcFollowerSvtId = 0LL;
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
    Instance = UserServantEntity__IsGrandServant(userServantEntity, 0LL);
    v99 = this->fields.questRestrictionInfo;
    *(_WORD *)&this->fields._IsGrandServant_k__BackingField = Instance & 1;
    if ( !v99 )
      goto LABEL_144;
    if ( v99->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_145;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_145;
      v100 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v101 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v104 = *(_QWORD *)&v100->fields.svtId.fields.currentCryptoKey;
      v103 = *(_QWORD *)&v100->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v168.fields.currentCryptoKey = v104;
      *(_QWORD *)&v168.fields.fakeValue = v103;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v168, 0LL);
      if ( !v101 )
        goto LABEL_145;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v101,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v105 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0LL);
        if ( v105 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v106 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_145;
    if ( v106->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v106->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_145;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v108 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v109 = (UserEventAlloutBattleMaster_o *)Instance;
      v111 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
      v110 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v169.fields.currentCryptoKey = v111;
      *(_QWORD *)&v169.fields.fakeValue = v110;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v169, 0LL);
      if ( !*p_questRestrictionInfo || !v109 )
        goto LABEL_145;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v109,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0LL);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_145;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v57);
        byte_4B3ED56 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !*p_questRestrictionInfo || !Master_object )
        goto LABEL_145;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_object,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v113 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_145;
        v114 = entity;
        v116 = *(_QWORD *)&v113->fields.svtId.fields.currentCryptoKey;
        v115 = *(_QWORD *)&v113->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v170.fields.currentCryptoKey = v116;
        *(_QWORD *)&v170.fields.fakeValue = v115;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v170, 0LL);
        if ( !v114 )
          goto LABEL_145;
        Instance = UserEventDataLostEntity__IsRestart(v114, Instance, 0LL);
        v117 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_145;
        v118 = Instance;
        v119 = entity;
        v121 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
        v120 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v171.fields.currentCryptoKey = v121;
        *(_QWORD *)&v171.fields.fakeValue = v120;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v171, 0LL);
        if ( !v119 )
          goto LABEL_145;
        if ( (v118 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v119, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v119, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             0LL) )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_145;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_145;
        v123 = *(_DWORD *)(Instance + 24);
        v124 = Instance;
        if ( v123 >= 1 )
        {
          v125 = 0;
          while ( 1 )
          {
            if ( v125 >= v123 )
              goto LABEL_146;
            v126 = *(_QWORD *)(v124 + 8LL * (int)v125 + 32);
            if ( !v126 )
              goto LABEL_145;
            v128 = *(_QWORD *)(v126 + 80);
            v127 = *(_QWORD *)(v126 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v172.fields.currentCryptoKey = v128;
            *(_QWORD *)&v172.fields.fakeValue = v127;
            v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v172, 0LL);
            v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v126 + 96),
                     0LL);
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v126, 0, 0LL);
            ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                     questRestrictionInfo,
                                     v129,
                                     v130,
                                     DispLimitCount,
                                     0LL);
            Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v126, 0LL);
            Instance = QuestRestrictionInfo__IsRestriction_42358164(
                         questRestrictionInfo,
                         &isWhole,
                         ServantIndividuality,
                         Rarity,
                         *(_DWORD *)(v126 + 256),
                         this->fields._InitPos_k__BackingField,
                         1,
                         0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_42380456(
                           questRestrictionInfo,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0LL);
              if ( (Instance & 1) == 0 )
                break;
            }
            v123 = *(_DWORD *)(v124 + 24);
            if ( (int)++v125 >= v123 )
              goto LABEL_107;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
LABEL_107:
      Instance = QuestRestrictionInfo__IsGrandServantRestriction(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
        this->fields.isRestrictionGrandServant = 1;
        this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
      }
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_145;
    v135 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_145;
    v136 = (EventServantPointRankMaster_o *)Instance;
    Instance = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v135, 0LL);
    if ( (Instance & 1) != 0 )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v137 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v138 = *(_OWORD *)&v137->fields.userId.fields.fakeValue;
      v139 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v137->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v159.fields.fakeValue = v138;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v158 = v159;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v158, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v140 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
      if ( !v139 )
        goto LABEL_145;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v139, &v160, v140, v135, Instance, 0LL) )
      {
        Instance = (__int64)v160;
        if ( !v160 )
          goto LABEL_145;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v160, 0LL);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v142 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v136, v135, v142, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v135, v145);
    }
    v146 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_145;
    v147 = *(_OWORD *)&v146->fields.id.fields.fakeValue;
    *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v146->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v159.fields.fakeValue = v147;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v157 = v159;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v157, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v148 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1BDB920(long___TypeInfo, 1LL);
      v149 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_145;
      v150 = *(_OWORD *)&v149->fields.id.fields.fakeValue;
      v151 = (System_Int64_array *)Instance;
      *(_OWORD *)&v159.fields.currentCryptoKey = *(_OWORD *)&v149->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v159.fields.fakeValue = v150;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v156 = v159;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v156, 0LL);
      if ( !v151 )
        goto LABEL_145;
      if ( !v151->max_length )
LABEL_146:
        sub_1BDBADC(Instance, v57, v122);
      v151->m_Items[0] = Instance;
      if ( !v148 )
        goto LABEL_145;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v148,
              v151,
              (const MethodInfo_32E3974 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
      {
LABEL_143:
        this->fields._IsDisappearSvt_k__BackingField = 1;
        goto LABEL_144;
      }
    }
    Instance = (__int64)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL) )
        goto LABEL_143;
LABEL_144:
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v98);
      return;
    }
LABEL_145:
    sub_1BDBAD4(Instance, v57);
  }
  v72 = v71;
  v73 = (struct System_Int32_array *)sub_1BDB9B4(v71, int___TypeInfo);
  if ( v73 )
  {
    this->fields.equipSvtIdList = v73;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v75 = sub_1BDB9B4(v72, int___TypeInfo);
    if ( v75 )
    {
      v76 = v75;
      goto LABEL_21;
    }
  }
  v152 = (PartyOrganizationListViewItem_o *)sub_1BDBD94(v72);
  PartyOrganizationListViewItem__SetCanGetBuddyPoint(v152, v153, v154);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_33386572(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        const MethodInfo *method)
{
  bool v13; // w27
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x26
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *v25; // x26
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
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  int v40; // w1
  UserServantEntity_array *Instance; // x0
  __int64 v42; // x1
  int max_length; // w8
  UserServantEntity_array *v44; // x22
  unsigned int v45; // w26
  UserServantEntity_o *v46; // x23
  __int64 v47; // x24
  __int64 v48; // x25
  int32_t v49; // w24
  int32_t v50; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  bool IsGrandServant_k__BackingField; // w8
  const MethodInfo *v55; // x2
  struct QuestRestrictionInfo_o *v56; // x8
  int32_t eventId; // w21
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v13 = isFollower;
  if ( (byte_4B405C6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_1BDB878(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v14);
    sub_1BDB878(&DataManager_TypeInfo, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v17);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v18);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v19);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4B405C6 = 1;
  }
  isWhole = 0;
  v22 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v22;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v25;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v25, v26, v27);
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v28, v29);
  this->fields.followerInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v30, v31);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v32, v33);
  this->fields.isFollower = v13;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerGrandGraphId = 0LL;
  this->fields.followerClassId = 0;
  this->fields.setupInfo = setupInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v34, v35);
  this->fields.servantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v36, v37);
  if ( initPos )
    v40 = initPos;
  else
    v40 = index + 1;
  *(_QWORD *)&this->fields.cost = 0LL;
  *(_QWORD *)&this->fields.atk = 0LL;
  *(_QWORD *)&this->fields.rarityId = 0LL;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  this->fields.isRestrictionGrandServant = 0;
  this->fields._InitPos_k__BackingField = v40;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._EquipFriendShipSkillChange_k__BackingField = 0;
  if ( !questRestrictionInfo )
  {
LABEL_32:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_33;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(questRestrictionInfo, v40, 0LL) )
  {
    if ( questRestrictionInfo->fields.isNpcOnlyBattle && questRestrictionInfo->fields.myServantNumMax < index )
    {
      this->fields.frameType = 11;
      this->fields.isFixMultipleNpcRestriction = 1;
      goto LABEL_33;
    }
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL)
      && questRestrictionInfo->fields.servantNumMax <= index
      || questRestrictionInfo->fields.isNpcMultipleBattle
      && !questRestrictionInfo->fields.isNpcEditablePos
      && !isMyServant )
    {
      this->fields.frameType = 11;
      this->fields.isServantNumRestriction = 1;
      goto LABEL_33;
    }
    if ( QuestRestrictionInfo__IsGrandServantRestriction(
           questRestrictionInfo,
           this->fields._InitPos_k__BackingField,
           0LL) )
    {
      IsGrandServant_k__BackingField = this->fields._IsGrandServant_k__BackingField;
      this->fields.isRestrictionGrandServant = 1;
      this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant_k__BackingField;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  this->fields.frameType = 9;
  this->fields.isMyServantOrNpcRestriction = 1;
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_41;
  max_length = Instance->max_length;
  v44 = Instance;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= max_length )
        sub_1BDBADC(Instance, v42, v38);
      v46 = v44->m_Items[v45];
      this->fields._IsGrandServant_k__BackingField = 0;
      this->fields._IsUseGrandBoard_k__BackingField = 0;
      if ( !v46 )
        goto LABEL_41;
      v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v48;
      *(_QWORD *)&v61.fields.fakeValue = v47;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v61, 0LL);
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v46->fields.limitCount, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(v46, 0, 0LL);
      ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                               questRestrictionInfo,
                               v49,
                               v50,
                               DispLimitCount,
                               0LL);
      Rarity = UserServantEntity__getRarity(v46, 0LL);
      Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestriction_42358164(
                                              questRestrictionInfo,
                                              &isWhole,
                                              ServantIndividuality,
                                              Rarity,
                                              v46->fields.lv,
                                              this->fields._InitPos_k__BackingField,
                                              1,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_42380456(
                                                questRestrictionInfo,
                                                ServantIndividuality,
                                                this->fields._InitPos_k__BackingField,
                                                0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
      max_length = v44->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_33;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_33:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v38, v39);
  this->fields.fatigureTime = -1LL;
  v56 = this->fields.questRestrictionInfo;
  *(_WORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields.isRestrictionServantPos = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
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
  if ( !v56 )
    goto LABEL_39;
  eventId = v56->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_41:
    sub_1BDBAD4(Instance, v42);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v55);
  }
LABEL_39:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v55);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_33387792(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x27
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  DataManager_o *Instance; // x0
  __int64 v40; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  ServantEntity_o *v45; // x8
  DataManager_o *v46; // x24
  struct ServantEntity_o *servantEntity; // x8
  int32_t m_CancellationTokenSource; // w8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  int v52; // w9

  if ( (byte_4B405C7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v21);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v22);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B405C7 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v25;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v28;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v28, v29, v30);
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v31, v32);
  this->fields.questRestrictionInfo = questRestriction;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestriction, v33, v34);
  this->fields.followerInfo = follower;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v35, v36);
  this->fields.setupInfo = eventUpValSetupInfo;
  *(_WORD *)&this->fields.isFollower = follower != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.followerIndex = 0;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)eventUpValSetupInfo, v37, v38);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v43, v44);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL);
  v45 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_15;
  v46 = Instance;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                v45,
                                this->fields.imageLimitCount,
                                0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.imageLimitCount = (int)Instance;
  if ( !servantEntity
    || (this->fields.classId = servantEntity->fields.classId, !v46)
    || (m_CancellationTokenSource = (int32_t)v46->fields.m_CancellationTokenSource,
        this->fields.rarityId = m_CancellationTokenSource,
        this->fields.actualRarity = m_CancellationTokenSource,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_1BDBAD4(Instance, v40);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_41631980(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             isGrandServant,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v49, v50);
  v52 = initPosition;
  this->fields.fatigureTime = -1LL;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  *(_WORD *)&this->fields.isRestrictionServantPos = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  if ( !initPosition )
    v52 = index + 1;
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
  this->fields._InitPos_k__BackingField = v52;
  *(_WORD *)&this->fields._IsTempGrandServant_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v51);
}


void __fastcall PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(
        PartyOrganizationListViewItem_o *this,
        System_Collections_Generic_List_EventMargeItemUpValInfo__o **infoList,
        bool isQuestStart,
        const MethodInfo *method)
{
  DataManager_c **v4; // x28
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
  Il2CppObject *v30; // x19
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x20
  Il2CppObject *v34; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x23
  _BOOL8 v36; // x0
  __int64 v37; // x1
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v41; // x19
  __int64 v42; // x20
  int32_t v43; // w1
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  struct UserServantEntity_o *v46; // x8
  UserServantMaster_o *v47; // x25
  __int64 v48; // x19
  __int64 v49; // x20
  __int64 v50; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v52; // x1
  int32_t eventId; // w25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w26
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  EventMargeItemUpValInfo_o *v59; // x26
  __int64 OnlyMaxFuncGroupId; // x0
  __int64 v61; // x1
  int32_t v62; // w27
  Il2CppObject *Entity; // x0
  __int64 v64; // x1
  DataManager_c **v65; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x28
  PartyOrganizationListViewItem___c_c *v67; // x8
  System_Func_object__object__o *_9__354_0; // x20
  Il2CppObject *v69; // x29
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x29
  PartyOrganizationListViewItem___c_c *v74; // x8
  System_Func_object__bool__o *_9__354_1; // x20
  Il2CppObject *v76; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x29
  PartyOrganizationListViewItem___c_c *v81; // x8
  System_Func_object__object__o *_9__354_2; // x20
  Il2CppObject *v83; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x28
  PartyOrganizationListViewItem___c_c *v88; // x8
  System_Func_object__bool__o *_9__354_3; // x20
  Il2CppObject *v90; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x20
  __int64 FriendshipBonusValue; // x0
  __int64 v96; // x1
  __int64 v97; // x1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Collections_Generic_List_object__o *v100; // x0
  struct System_Object_array *items; // x8
  _QWORD *v102; // x9
  __int64 size; // x10
  Il2CppClass **v104; // x8
  EventQuestMaster_o *v105; // [xsp+8h] [xbp-B8h]
  Il2CppObject *Master_object; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  v4 = &DataManager_TypeInfo;
  if ( (byte_4B405F6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, infoList);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_EventQuestMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_Single_string___, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16);
    sub_1BDB878(&EventMargeItemUpValInfo_TypeInfo, v17);
    sub_1BDB878(&System_Func_EventEntity_ScriptData__string__TypeInfo, v18);
    sub_1BDB878(&System_Func_string__bool__TypeInfo, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_0__, v24);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_1__, v25);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_2__, v26);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_3__, v27);
    sub_1BDB878(&PartyOrganizationListViewItem___c_TypeInfo, v28);
    sub_1BDB878(&StringLiteral_1/*""*/, v29);
    byte_4B405F6 = 1;
  }
  memset(&v110, 0, sizeof(v110));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v30 )
    sub_1BDBAD4(Instance, v32);
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)v30,
                                                                         (int64_t)Instance[7].klass,
                                                                         0LL);
  v34 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( FriendshipUpCampaigns )
  {
    v105 = (EventQuestMaster_o *)v34;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v109,
      FriendshipUpCampaigns,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v110 = v109;
    while ( 1 )
    {
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v110,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v36 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v110,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          return;
        }
        current = (EventCampaignEntity_o *)v110.fields._current;
        if ( !v110.fields._current )
          sub_1BDBAD4(v36, v37);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v110.fields._current[2].monitor;
        if ( !monitor || !monitor[1].monitor )
          goto LABEL_29;
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1BDBAD4(v36, v37);
        v41 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v42 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v111.fields.currentCryptoKey = v41;
        *(_QWORD *)&v111.fields.fakeValue = v42;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v111, 0LL);
        if ( System_Linq_Enumerable__Contains_int_(
               monitor,
               v43,
               (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
LABEL_29:
          if ( !(*v4)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v4);
          v44 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
          v46 = this->fields.userServantEntity;
          if ( !v46 )
            sub_1BDBAD4(v44, v45);
          v47 = (UserServantMaster_o *)v44;
          v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v112.fields.currentCryptoKey = v48;
          *(_QWORD *)&v112.fields.fakeValue = v49;
          v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v112, 0LL);
          if ( !v47 )
            sub_1BDBAD4(v50, (unsigned int)v50);
          HeroineData = UserServantMaster__getHeroineData(v47, v50, 0LL);
          if ( !HeroineData
            || (HeroineData = (UserServantEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL),
                ((unsigned __int8)HeroineData & 1) != 0) )
          {
            eventId = current->fields.eventId;
            if ( !isQuestStart )
              break;
            questRestrictionInfo = this->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              sub_1BDBAD4(HeroineData, v52);
            questId = questRestrictionInfo->fields.questId;
            questPhase = questRestrictionInfo->fields.questPhase;
            v57 = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !v57 )
              sub_1BDBAD4(0LL, v58);
            if ( !v105 )
              sub_1BDBAD4(v57, v58);
            if ( !EventQuestMaster__IsEventNotIncluded(
                    v105,
                    eventId,
                    questId,
                    questPhase,
                    7,
                    (int64_t)v57[7].klass,
                    0LL) )
              break;
          }
        }
      }
      v59 = (EventMargeItemUpValInfo_o *)sub_1BDBAC4(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_40717544(v59, eventId, 0LL);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId(current, 0LL);
      if ( !v35 )
        sub_1BDBAD4(OnlyMaxFuncGroupId, v61);
      v62 = OnlyMaxFuncGroupId;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v35,
                 eventId,
                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1BDBAD4(0LL, v64);
      v65 = v4;
      v66 = (System_Collections_Generic_IEnumerable_TSource__o *)Entity[7].monitor;
      if ( !v66 )
        sub_1BDBAD4(Entity, v64);
      if ( !v66[1].monitor )
        break;
      v67 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v67 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__354_0 = (System_Func_object__object__o *)v67->static_fields->__9__354_0;
      if ( !_9__354_0 )
      {
        if ( !v67->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v67);
          v67 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v69 = (Il2CppObject *)v67->static_fields->__9;
        _9__354_0 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__354_0,
          v69,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_0__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__354_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__354_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__354_0, (int32_t)_9__354_0, v71, v72);
      }
      v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v66,
                                                                   (System_Func_TSource__TResult__o *)_9__354_0,
                                                                   (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v74 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v74 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__354_1 = (System_Func_object__bool__o *)v74->static_fields->__9__354_1;
      if ( !_9__354_1 )
      {
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v76 = (Il2CppObject *)v74->static_fields->__9;
        _9__354_1 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__354_1,
          v76,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_1__,
          0LL);
        v77 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v77->__9__354_1 = (struct System_Func_string__bool__o *)_9__354_1;
        sub_1BDB81C((CGThumbnailListItem_o *)&v77->__9__354_1, (int32_t)_9__354_1, v78, v79);
      }
      v80 = System_Linq_Enumerable__Single_object__50778768(
              v73,
              (System_Func_TSource__bool__o *)_9__354_1,
              (const MethodInfo_306D290 *)Method_System_Linq_Enumerable_Single_string___);
      if ( !v66[1].monitor )
        goto LABEL_61;
      v81 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v81 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__354_2 = (System_Func_object__object__o *)v81->static_fields->__9__354_2;
      if ( !_9__354_2 )
      {
        if ( !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81);
          v81 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v83 = (Il2CppObject *)v81->static_fields->__9;
        _9__354_2 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__354_2,
          v83,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_2__,
          0LL);
        v84 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v84->__9__354_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__354_2;
        sub_1BDB81C((CGThumbnailListItem_o *)&v84->__9__354_2, (int32_t)_9__354_2, v85, v86);
      }
      v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v66,
                                                                   (System_Func_TSource__TResult__o *)_9__354_2,
                                                                   (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v88 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v88 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__354_3 = (System_Func_object__bool__o *)v88->static_fields->__9__354_3;
      if ( !_9__354_3 )
      {
        if ( !v88->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v88);
          v88 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v90 = (Il2CppObject *)v88->static_fields->__9;
        _9__354_3 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__354_3,
          v90,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__354_3__,
          0LL);
        v91 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v91->__9__354_3 = (struct System_Func_string__bool__o *)_9__354_3;
        sub_1BDB81C((CGThumbnailListItem_o *)&v91->__9__354_3, (int32_t)_9__354_3, v92, v93);
      }
      v94 = System_Linq_Enumerable__Single_object__50778768(
              v87,
              (System_Func_TSource__bool__o *)_9__354_3,
              (const MethodInfo_306D290 *)Method_System_Linq_Enumerable_Single_string___);
LABEL_62:
      v4 = v65;
      FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
      v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !v59 )
        sub_1BDBAD4(FriendshipBonusValue, v96);
      EventMargeItemUpValInfo__SetFriendshipUpBonus_40717648(
        v59,
        eventId,
        FriendshipBonusValue,
        v62,
        (System_String_o *)v80,
        (System_String_o *)v94,
        current->fields.calcType,
        0LL);
      v100 = (System_Collections_Generic_List_object__o *)*infoList;
      if ( !*infoList )
        sub_1BDBAD4(0LL, v97);
      items = v100->fields._items;
      v102 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v100->fields._version;
      if ( !items )
        sub_1BDBAD4(v100, v97);
      size = v100->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)v59,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v104 = &items->obj.klass + size;
        v100->fields._size = size + 1;
        v104[4] = (Il2CppClass *)v59;
        sub_1BDB81C((CGThumbnailListItem_o *)(v104 + 4), (int32_t)v59, v98, v99);
      }
    }
    v80 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_61:
    v94 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_62;
  }
}


System_Int64_array *__fastcall PartyOrganizationListViewItem__CheckDuplicationGrandServantEquipment(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_TSource__o *equipIdList; // x19
  PartyOrganizationListViewItem___c_c *v15; // x0
  System_Func_long__long__o *_9__358_0; // x20
  Il2CppObject *v17; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v21; // x0
  PartyOrganizationListViewItem___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__bool__o *_9__358_1; // x20
  Il2CppObject *v25; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  PartyOrganizationListViewItem___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_T__TResult__o *_9__358_2; // x20
  Il2CppObject *v33; // x21
  struct PartyOrganizationListViewItem___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_4B405F8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_GroupBy_long__long___, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_long___, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_IGrouping_long__long____, v5);
    sub_1BDB878(&System_Func_long__long__TypeInfo, v6);
    sub_1BDB878(&System_Func_IGrouping_long__long___long__TypeInfo, v7);
    sub_1BDB878(&System_Func_IGrouping_long__long___bool__TypeInfo, v8);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__358_0__, v9);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__358_1__, v10);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__358_2__, v11);
    sub_1BDB878(&PartyOrganizationListViewItem___c_TypeInfo, v12);
    byte_4B405F8 = 1;
  }
  if ( this->fields.isFollower
    || !this->fields._IsGrandServant_k__BackingField && !this->fields._IsTempGrandServant_k__BackingField
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0LL) )
  {
    return 0LL;
  }
  equipIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.equipIdList;
  v15 = PartyOrganizationListViewItem___c_TypeInfo;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v15 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__358_0 = v15->static_fields->__9__358_0;
  if ( !_9__358_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__358_0 = (System_Func_long__long__o *)sub_1BDBAC4(System_Func_long__long__TypeInfo);
    System_Func_long__long____ctor(
      _9__358_0,
      v17,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__358_0__,
      0LL);
    static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__358_0 = _9__358_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__358_0, (int32_t)_9__358_0, v19, v20);
  }
  v21 = System_Linq_Enumerable__GroupBy_long__long_(
          equipIdList,
          (System_Func_TSource__TKey__o *)_9__358_0,
          (const MethodInfo_305A148 *)Method_System_Linq_Enumerable_GroupBy_long__long___);
  v22 = PartyOrganizationListViewItem___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v22 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__358_1 = (System_Func_object__bool__o *)v22->static_fields->__9__358_1;
  if ( !_9__358_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__358_1 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_IGrouping_long__long___bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__358_1,
      v25,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__358_1__,
      0LL);
    v26 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v26->__9__358_1 = (struct System_Func_IGrouping_long__long___bool__o *)_9__358_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v26->__9__358_1, (int32_t)_9__358_1, v27, v28);
  }
  v29 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)_9__358_1,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_IGrouping_long__long____);
  v30 = PartyOrganizationListViewItem___c_TypeInfo;
  v31 = v29;
  if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
    v30 = PartyOrganizationListViewItem___c_TypeInfo;
  }
  _9__358_2 = (System_Func_T__TResult__o *)v30->static_fields->__9__358_2;
  if ( !_9__358_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = PartyOrganizationListViewItem___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__358_2 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_IGrouping_long__long___long__TypeInfo);
    System_Func_object__long____ctor(
      _9__358_2,
      v33,
      Method_PartyOrganizationListViewItem___c__CheckDuplicationGrandServantEquipment_b__358_2__,
      0LL);
    v34 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
    v34->__9__358_2 = (struct System_Func_IGrouping_long__long___long__o *)_9__358_2;
    sub_1BDB81C((CGThumbnailListItem_o *)&v34->__9__358_2, (int32_t)_9__358_2, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)_9__358_2,
                                                               (const MethodInfo_3068190 *)Method_System_Linq_Enumerable_Select_IGrouping_long__long___long___);
  return System_Linq_Enumerable__ToArray_long_(
           v37,
           (const MethodInfo_3070720 *)Method_System_Linq_Enumerable_ToArray_long___);
}


void __fastcall PartyOrganizationListViewItem__CheckRestriction(
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
  bool IsUniqueIndividualityRestriction_42113112; // w0
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
  bool IsUniqueIndividualityRestriction_40749816; // w0
  const MethodInfo *v67; // x1
  QuestRestrictionInfo_o *v68; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_42364256; // w0
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

  if ( (byte_4B405D2 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_4B405D2 = 1;
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
    if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)userServantEntity, 0LL)
      && (v24 = this->fields.questRestrictionInfo) != 0LL )
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
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v80, 0LL);
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v28);
      if ( !userServantEntity )
        goto LABEL_92;
      limitCount = userServantEntity->fields.limitCount;
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
      if ( !userServantEntity )
        goto LABEL_92;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(userServantEntity, 0LL);
      rarityId = this->fields.rarityId;
      v32 = DispLimitCount;
      userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v33);
      if ( !userServantEntity )
        goto LABEL_92;
      userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_42357884(
                                                   v24,
                                                   &this->fields.isQuestRestrictionWhole,
                                                   v27,
                                                   limitCount,
                                                   v32,
                                                   rarityId,
                                                   userServantEntity->fields.lv,
                                                   this->fields._InitPos_k__BackingField,
                                                   2,
                                                   0LL);
      this->fields.isQuestRestriction = (unsigned __int8)userServantEntity & 1;
      if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      {
        userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !userServantEntity )
          goto LABEL_92;
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(
                                                     (QuestRestrictionInfo_o *)userServantEntity,
                                                     this->fields._InitPos_k__BackingField,
                                                     0LL);
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
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v81, 0LL);
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v38);
          if ( !userServantEntity )
            goto LABEL_92;
          v39 = userServantEntity->fields.limitCount;
          userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v11);
          if ( !userServantEntity )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)ServantLeaderInfo__getDispLimitCount(userServantEntity, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                       questRestrictionInfo,
                                                       v37,
                                                       v39,
                                                       (int32_t)userServantEntity,
                                                       this->fields._InitPos_k__BackingField,
                                                       1,
                                                       0LL);
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
      userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__get_IsNpc((FollowerInfo_o *)userServantEntity, 0LL);
      if ( ((unsigned __int8)userServantEntity & 1) != 0 && (v50 = this->fields.questRestrictionInfo) != 0LL )
      {
        followerInfo = this->fields.followerInfo;
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v50->fields.questId, 0LL);
        if ( !followerInfo )
          goto LABEL_92;
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(
                                        followerInfo,
                                        0,
                                        (int32_t)userServantEntity,
                                        0LL);
        v53 = this->fields.questRestrictionInfo;
        v54 = this->fields.rarityId;
        v55 = NpcServantIndividualityFull;
        userServantEntity = PartyOrganizationListViewItem__get_ServantLeader(this, v56);
        if ( !userServantEntity || !v53 )
          goto LABEL_92;
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_42358164(
                                                     v53,
                                                     &this->fields.isQuestRestrictionWhole,
                                                     v55,
                                                     v54,
                                                     userServantEntity->fields.lv,
                                                     this->fields._InitPos_k__BackingField,
                                                     3,
                                                     0LL);
        this->fields.isQuestRestriction = (unsigned __int8)userServantEntity & 1;
        if ( ((unsigned __int8)userServantEntity & 1) == 0 )
        {
          userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
          if ( !userServantEntity )
            goto LABEL_92;
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_42377380(
                                                       (QuestRestrictionInfo_o *)userServantEntity,
                                                       this->fields._InitPos_k__BackingField,
                                                       0LL);
          if ( ((unsigned __int8)userServantEntity & 1) != 0 )
          {
            userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !userServantEntity )
              goto LABEL_92;
            userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_42380456(
                                                         (QuestRestrictionInfo_o *)userServantEntity,
                                                         v55,
                                                         this->fields._InitPos_k__BackingField,
                                                         0LL);
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
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v59->fields.questId, 0LL);
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
    userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_40749624(
                                                 v58,
                                                 v59,
                                                 followerIndex,
                                                 partyItem,
                                                 num,
                                                 v60,
                                                 0LL);
    followerGrandGraphId = this->fields.followerGrandGraphId;
    v62 = this->fields.followerIndex;
    v63 = this->fields.followerInfo;
    v64 = this->fields.questRestrictionInfo;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)userServantEntity & 1;
    if ( followerGrandGraphId <= 0 )
    {
      if ( v64 )
      {
        userServantEntity = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v64->fields.questId, 0LL);
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
    IsUniqueIndividualityRestriction_40749816 = FollowerInfo__IsUniqueIndividualityRestriction_40749816(
                                                  v63,
                                                  v64,
                                                  v62,
                                                  partyItem,
                                                  num,
                                                  v65,
                                                  0LL);
    v68 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40749816;
    if ( v68 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v67);
      IsFixedSupportPosition_42364256 = QuestRestrictionInfo__IsFixedSupportPosition_42364256(
                                          v68,
                                          num,
                                          ServantLeader,
                                          0LL);
      v71 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_42364256;
      if ( v71 )
      {
        userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsUseOldMaster(v71, 0LL);
        if ( ((unsigned __int8)userServantEntity & 1) == 0 )
          goto LABEL_86;
        if ( !partyItem )
          goto LABEL_92;
        userServantEntity = (ServantLeaderInfo_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( !userServantEntity )
          goto LABEL_92;
        if ( LOBYTE(userServantEntity->fields.afterTransformSvtInfo) )
          goto LABEL_86;
        userServantEntity = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !userServantEntity )
          goto LABEL_92;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport(
               (QuestRestrictionInfo_o *)userServantEntity,
               0LL) )
        {
LABEL_86:
          v72 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, v11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(SvtId, 0LL);
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
              0LL);
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
    userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                 v78,
                                                 0LL);
    v12 = this->fields.userServantEntity;
    if ( v12 )
    {
      v13 = (int)userServantEntity;
      userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                   v12->fields.limitCount,
                                                   0LL);
      if ( this->fields.userServantEntity )
      {
        v14 = (int)userServantEntity;
        userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(
                                                     this->fields.userServantEntity,
                                                     0,
                                                     0LL);
        v15 = this->fields.userServantEntity;
        if ( v15 )
        {
          userServantEntity = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_42357884(
                                                       v8,
                                                       &this->fields.isQuestRestrictionWhole,
                                                       v13,
                                                       v14,
                                                       (int32_t)userServantEntity,
                                                       this->fields.rarityId,
                                                       v15->fields.lv,
                                                       this->fields._InitPos_k__BackingField,
                                                       1,
                                                       0LL);
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
            userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                         v79,
                                                         0LL);
            v21 = this->fields.userServantEntity;
            if ( v21 )
            {
              v22 = (int)userServantEntity;
              userServantEntity = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                                           v21->fields.limitCount,
                                                           0LL);
              if ( this->fields.userServantEntity )
              {
                v23 = (int)userServantEntity;
                userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(
                                                             this->fields.userServantEntity,
                                                             0,
                                                             0LL);
                if ( v18 )
                {
                  this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                      v18,
                                                      v22,
                                                      v23,
                                                      (int32_t)userServantEntity,
                                                      this->fields._InitPos_k__BackingField,
                                                      0,
                                                      0LL);
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
    sub_1BDBAD4(userServantEntity, v11);
  }
  *(_WORD *)&this->fields.isQuestRestriction = 0;
LABEL_42:
  userServantEntity = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_42112732(
                                               (UserServantEntity_o *)userServantEntity,
                                               this->fields.questRestrictionInfo,
                                               partyItem,
                                               num,
                                               -1,
                                               0LL);
  v40 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)userServantEntity & 1;
  if ( !v40 )
    goto LABEL_92;
  IsUniqueIndividualityRestriction_42113112 = UserServantEntity__IsUniqueIndividualityRestriction_42113112(
                                                v40,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v43 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_42113112;
  if ( v43 )
  {
    v44 = PartyOrganizationListViewItem__get_SvtId(this, v42);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v44, 0LL);
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
      0LL);
  }
  else
  {
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
  }
  this->fields.isFixedSupportPositionRestriction = 0;
}


int32_t __fastcall PartyOrganizationListViewItem__ClearEquip(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyOrganizationListViewItem_o *v3; // x19
  struct System_Int64_array *equipIdList; // x8
  int32_t EquipFriendShipSkillChange_k__BackingField; // w20

  v3 = this;
  if ( (byte_4B405D1 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1BDB878(
                                                &Method_System_Collections_Generic_List_ServantEntity__get_Item__,
                                                method);
    byte_4B405D1 = 1;
  }
  equipIdList = v3->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !equipIdList->max_length )
      goto LABEL_16;
    if ( equipIdList->m_Items[0] )
    {
      this = (PartyOrganizationListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                  (System_Collections_ICollection_o *)v3->fields.equipServantEntityList,
                                                  0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        EquipFriendShipSkillChange_k__BackingField = 0;
      }
      else
      {
        this = (PartyOrganizationListViewItem_o *)v3->fields.equipServantEntityList;
        if ( !this )
          goto LABEL_17;
        this = (PartyOrganizationListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    0,
                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
        if ( !this )
          goto LABEL_17;
        EquipFriendShipSkillChange_k__BackingField = this->fields._EquipFriendShipSkillChange_k__BackingField;
      }
      method = (const MethodInfo *)v3->fields.equipIdList;
      if ( method )
      {
        if ( LODWORD(method->name) )
        {
          method->klass = 0LL;
          PartyOrganizationListViewItem__SetEquipStatus(v3, (System_Int64_array *)method, v2);
          return EquipFriendShipSkillChange_k__BackingField;
        }
LABEL_16:
        sub_1BDBADC(this, method, v2);
      }
LABEL_17:
      sub_1BDBAD4(this, method);
    }
  }
  return 0;
}


void __fastcall PartyOrganizationListViewItem__ClearFatigure(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  this->fields.fatigureTime = -1LL;
}


void __fastcall PartyOrganizationListViewItem__ClearFollower(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.followerInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
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

  if ( (byte_4B405C8 & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_4B405C8 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = (PartyOrganizationListViewItem_o *)sub_1BDBAC4(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor(v6, index, v7);
  if ( !v6 )
    sub_1BDBAD4(v8, v9);
  PartyOrganizationListViewItem__Set(v6, this, v10);
  if ( (idx & 0x80000000) == 0 )
  {
    v6->fields.index = idx;
    ListViewItem__SetSortIndex((ListViewItem_o *)v6, idx, 0LL);
  }
  return v6;
}


bool __fastcall PartyOrganizationListViewItem__CompMember(
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
  if ( (byte_4B405D4 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1BDB878(
                                                &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                item);
    byte_4B405D4 = 1;
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
      if ( max_length == v13->max_length )
      {
        if ( max_length >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( max_length == v15 )
              sub_1BDBADC(this, item, method);
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
    this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                &v17,
                                                0LL);
    v9 = item->fields.userServantEntity;
    if ( v9 )
    {
      v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
      v11 = this;
      *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v16.fields.fakeValue = v10;
      this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                  &v16,
                                                  0LL);
      if ( v11 != this )
        return 0;
      goto LABEL_15;
    }
LABEL_29:
    sub_1BDBAD4(this, item);
  }
  return result;
}


void __fastcall PartyOrganizationListViewItem__Empty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
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

  this->fields.userServantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v5, v6);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(_QWORD *)&this->fields.followerIndex = 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  HIDWORD(this->fields.equipIdList) = 0;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_QWORD *)&this->fields.cost = 0LL;
  *(_QWORD *)&this->fields.atk = 0LL;
  *(_QWORD *)&this->fields.rarityId = 0LL;
  *(_QWORD *)&this->fields.frameType = 9LL;
  this->fields.commandCodeIdList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
  this->fields.fatigureTime = -1LL;
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
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v13);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyOrganizationListViewItem__EnableDisplayLimitCountSprite(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0
  int32_t monitor; // w23
  __int64 v11; // x19
  struct System_Object_array *items; // x20
  int32_t EquipLimitCount; // w0
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w22
  int32_t DisplayEquipIndex_k__BackingField; // w21
  int32_t ReturnTypeByQuestId; // w3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B405F5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Count__, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B405F5 = 1;
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
                                                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__);
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
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
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
                          0LL);
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
                                                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !equipServantEntityList )
LABEL_23:
    sub_1BDBAD4(equipServantEntityList, *(_QWORD *)&index);
  items = equipServantEntityList[2].fields._items;
  v11 = *(_QWORD *)&equipServantEntityList[2].fields._size;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = items;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  EquipLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v20, 0LL);
  return monitor > 0 && EquipLimitCount >= monitor;
}


void __fastcall PartyOrganizationListViewItem__Finalize(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetAddNotEditPos(
        PartyOrganizationListViewItem_o *this,
        System_String_o *baseMessage,
        const MethodInfo *method)
{
  return baseMessage;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetAssetName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 SvtId; // x0
  __int64 v8; // x1
  UserServantEntity_o *v9; // x8
  int32_t v10; // w19
  int32_t v11; // w20
  int32_t v12; // w0
  int32_t v13; // w1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v19; // w21
  FollowerInfo_o *v20; // x22
  int32_t v21; // w20
  int32_t v22; // w2
  struct QuestRestrictionInfo_o *v23; // x8
  int32_t CardImageLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B405EC & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BDB878(&UINarrowFigureRender_TypeInfo, v3);
    byte_4B405EC = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
  {
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo )
      return 0LL;
    followerIndex = this->fields.followerIndex;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      else
        ReturnTypeByQuestId = 0;
    }
    else
    {
      ReturnTypeByQuestId = 2;
    }
    SvtId = FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    v19 = this->fields.followerIndex;
    v20 = this->fields.followerInfo;
    v21 = SvtId;
    if ( this->fields.followerGrandGraphId <= 0 )
    {
      v23 = this->fields.questRestrictionInfo;
      if ( v23 )
      {
        SvtId = FollowerInfo__GetReturnTypeByQuestId(v23->fields.questId, 0LL);
        v22 = SvtId;
        if ( !v20 )
          goto LABEL_27;
      }
      else
      {
        v22 = 0;
        if ( !v20 )
          goto LABEL_27;
      }
    }
    else
    {
      v22 = 2;
      if ( !v20 )
        goto LABEL_27;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v20, v19, v22, 0LL);
    if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
    v12 = v21;
    v13 = CardImageLimitCount;
    return UINarrowFigureRender__GetAssetName(v12, v13, 0LL);
  }
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v6;
  *(_QWORD *)&v25.fields.fakeValue = v5;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v25, 0LL);
  v9 = this->fields.userServantEntity;
  if ( !v9 )
LABEL_27:
    sub_1BDBAD4(SvtId, v8);
  v10 = SvtId;
  v11 = UserServantEntity__getCardImageLimitCount(v9, 0, 0LL);
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  v12 = v10;
  v13 = v11;
  return UINarrowFigureRender__GetAssetName(v12, v13, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GetCardImageLimitCount(
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

  if ( (byte_4B405EE & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    byte_4B405EE = 1;
  }
  if ( this->fields.userServantEntity )
  {
    if ( !ConstantMaster__IsOtherImage(0LL) )
      goto LABEL_7;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_23;
    if ( !UserServantEntity__IsOtherImageCancel(userServantEntity, 0LL) )
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_23:
        sub_1BDBAD4(userServantEntity, v3);
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
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v11->fields.questId, 0LL);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      return FollowerInfo__getCardImageLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


int32_t __fastcall PartyOrganizationListViewItem__GetCommandCardLimitCount(
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BDBAD4(v5, 0LL);
    }
    LODWORD(v5) = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
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
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0LL);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      LODWORD(v5) = FollowerInfo__getCommandCardLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  return v5;
}


System_Int32_array *__fastcall PartyOrganizationListViewItem__GetCommandCardList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8
  System_Int32_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantEntity_o *v7; // x8
  struct System_Int32_array *cardIds; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 i; // x9
  il2cpp_array_size_t v11; // w13

  if ( (byte_4B405EB & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    byte_4B405EB = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 3LL);
  v7 = this->fields.servantEntity;
  if ( !v7 || (cardIds = v7->fields.cardIds) == 0LL )
LABEL_15:
    sub_1BDBAD4(result, v5);
  max_length = cardIds->max_length;
  for ( i = 0LL; (__int64)i < (int)max_length; ++i )
  {
    if ( i >= max_length )
      goto LABEL_18;
    v11 = cardIds->m_Items[i + 1] - 1;
    if ( v11 <= 2 )
    {
      if ( !result )
        goto LABEL_15;
      if ( v11 >= result->max_length )
LABEL_18:
        sub_1BDBADC(result, v5, v6);
      ++result->m_Items[v11 + 1];
    }
  }
  return result;
}


System_Int32_array *__fastcall PartyOrganizationListViewItem__GetCommandCodeIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeIdList;
}


int32_t __fastcall PartyOrganizationListViewItem__GetCorrectionIconId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v5; // w0

  if ( (byte_4B405ED & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B405ED = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(SvtId, 0LL);
  return QuestRestrictionInfo__GetCorrectionIconId(questRestrictionInfo, v5, this->fields.isFollower, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GetDispImageLimitCount(
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BDBAD4(v5, 0LL);
    }
    LODWORD(v5) = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0LL);
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
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0LL);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      LODWORD(v5) = FollowerInfo__getDispLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  return v5;
}


System_Int64_array *__fastcall PartyOrganizationListViewItem__GetEquipList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Array_o *equipIdList; // x0
  System_Int64_array *result; // x0
  System_Int64_array *v6; // x19
  BalanceConfig_c *v7; // x0
  PartyOrganizationListViewItem_o *v8; // x0
  System_Collections_Generic_List_EventMargeItemUpValInfo__o **v9; // x1
  bool v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B405D5 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&long___TypeInfo, v3);
    byte_4B405D5 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v6 = result;
      result = (System_Int64_array *)sub_1BDB9B4(result, long___TypeInfo);
      if ( !result )
      {
        v8 = (PartyOrganizationListViewItem_o *)sub_1BDBD94(v6);
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(v8, v9, v10, v11);
      }
    }
  }
  else
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    return (System_Int64_array *)sub_1BDB920(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
  }
  return result;
}


EquipTargetInfo_o *__fastcall PartyOrganizationListViewItem__GetEquipTargetInfoByEquipIdx(
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
    return 0LL;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__GetEquipTargetByEquipIdx(followerInfo, followerIndex, ReturnTypeByQuestId, equipIndex, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall PartyOrganizationListViewItem__GetEquipUserSvtIdByIndex(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x0
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4B405E0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, *(_QWORD *)&index);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B405E0 = 1;
  }
  equipUserServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList;
  if ( !equipUserServantEntityList
    || (equipUserServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    equipUserServantEntityList,
                                                                                    index,
                                                                                    (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0LL )
  {
    sub_1BDBAD4(equipUserServantEntityList, *(_QWORD *)&index);
  }
  v7 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v9, 0LL);
}


bool __fastcall PartyOrganizationListViewItem__GetEventUpVal(
        PartyOrganizationListViewItem_o *this,
        EventUpValInfo_o **eventUpValInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventUpValInfo_o *v4; // x8

  v4 = this->fields.eventUpValInfo;
  *eventUpValInfo = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B405EA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B405EA = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(questRestrictionInfo, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedSupportPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B405E9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B405E9 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(questRestrictionInfo, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


EventCampaignEntity_array *__fastcall PartyOrganizationListViewItem__GetFriendPointCampaignEntityList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.friendPointCampaignEntityList;
}


UserServantGrandInfo_o *__fastcall PartyOrganizationListViewItem__GetGrandServantInfo(
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

  if ( (byte_4B405F7 & 1) == 0 )
  {
    sub_1BDB878(&UserServantGrandInfo_TypeInfo, method);
    byte_4B405F7 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( this->fields._IsTempGrandServant_k__BackingField )
  {
    if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
    return UserServantGrandInfo__Make(userServantEntity, 1, 0LL);
  }
  else if ( !userServantEntity
         || (result = UserServantEntity__get_GrandInfo(this->fields.userServantEntity, 0LL)) == 0LL )
  {
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo
      || ((followerIndex = this->fields.followerIndex, this->fields.followerGrandGraphId <= 0)
        ? ((questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL
         ? (ReturnTypeByQuestId = 0)
         : (ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL)))
        : (ReturnTypeByQuestId = 2),
          (result = FollowerInfo__GetGrandServantInfo(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL)) == 0LL) )
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


int32_t __fastcall PartyOrganizationListViewItem__GetIconLimitCount(
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BDBAD4(v5, 0LL);
    }
    LODWORD(v5) = UserServantEntity__getIconLimitCount(userServantEntity, 0, 0LL);
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
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0LL);
        else
          ReturnTypeByQuestId = 0;
      }
      else
      {
        ReturnTypeByQuestId = 2;
      }
      LODWORD(v5) = FollowerInfo__getIconImageLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  return v5;
}


int32_t __fastcall PartyOrganizationListViewItem__GetImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.imageLimitCount;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B405F0 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B405F0 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             this->fields.haveIndividualityServant,
             0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetMyServantOrSupportRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B405F1 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B405F1 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
             questRestrictionInfo,
             this->fields._InitPos_k__BackingField,
             this->fields.haveIndividualityServant,
             0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int64_t __fastcall PartyOrganizationListViewItem__GetNpcFollowerServantId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.npcFollowerSvtId;
}


int32_t __fastcall PartyOrganizationListViewItem__GetPortraitLimitCount(
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1BDBAD4(v5, 0LL);
  }
  LODWORD(v5) = UserServantEntity__getPortraitLimitCount(userServantEntity, 0, 0LL);
  return v5;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetQuestRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v6; // x0
  struct QuestRestrictionInfo_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *ConfirmRestrictionMessage; // x1

  if ( (byte_4B405E6 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v3);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B405E6 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( v6 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v6, 0LL);
LABEL_32:
    sub_1BDBAD4(v6, method);
  }
  if ( this->fields.index >= 1 )
  {
    v8 = this->fields.questRestrictionInfo;
    if ( v8 )
    {
      if ( v8->fields.isFixedMyServantSingle )
        return QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(v8, 0LL);
    }
  }
  if ( this->fields.isServantNumRestriction )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v6, 0LL);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v6, 0LL);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcMessage(v6, 0LL);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v9 = (System_String_o *)v6;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_62572260(v9, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v6 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
      method = 0LL;
    else
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
    if ( !v6 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetRestrictionMessage(v6, (int32_t)method, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall PartyOrganizationListViewItem__GetServantName(
        PartyOrganizationListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  int32_t maxLimitCount; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  const MethodInfo *v12; // x1
  void *ServantLeader; // x0
  __int64 v14; // x1
  Il2CppObject *Master_object; // x20
  struct ServantEntity_o *servantEntity; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  int64_t v19; // x21
  struct ServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x19
  __int64 v22; // x21
  __int64 v23; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4B405DA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&limitCount);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&NetworkManager_TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B405DA = 1;
  }
  entity = 0LL;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v11;
    *(_QWORD *)&v26.fields.fakeValue = v10;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v26, 0LL);
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, *(const MethodInfo **)&limitCount) )
  {
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v12);
    if ( !ServantLeader )
      goto LABEL_36;
    maxLimitCount = *((_DWORD *)ServantLeader + 16);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v14);
    byte_4B3ED56 = 1;
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
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v19 = *(_QWORD *)(*((_QWORD *)ServantLeader + 23) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v27, 0LL);
  if ( !Master_object )
LABEL_36:
    sub_1BDBAD4(ServantLeader, v14);
  ServantLeader = (void *)UserServantCollectionMaster__TryGetEntity(
                            (UserServantCollectionMaster_o *)Master_object,
                            &entity,
                            v19,
                            (int32_t)ServantLeader,
                            0LL);
  if ( ((unsigned __int8)ServantLeader & 1) == 0 )
  {
    ServantLeader = this->fields.servantEntity;
    if ( ServantLeader )
      return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0, 0LL);
    goto LABEL_36;
  }
  if ( !entity )
    goto LABEL_36;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_26:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v20 = this->fields.servantEntity;
  if ( !v20 )
    goto LABEL_36;
  v21 = (ServantLimitImageMaster_o *)ServantLeader;
  v23 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v23;
  *(_QWORD *)&v28.fields.fakeValue = v22;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v28, 0LL);
  if ( !v21 )
    goto LABEL_36;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v21, (int32_t)ServantLeader, maxLimitCount, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v10; // x0

  if ( (byte_4B405E8 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1BDB878(&StringLiteral_44/*"\n\n"*/, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    sub_1BDB878(&StringLiteral_10299/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v7);
    byte_4B405E8 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  UniqueIndividualityRestrictionMessage = QuestRestrictionInfo__GetUniqueIndividualityRestrictionMessage(
                                            questRestrictionInfo,
                                            isFixMessage,
                                            0LL);
  if ( isFixMessage )
    return UniqueIndividualityRestrictionMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10299/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_62610508(
           v10,
           (System_String_o *)StringLiteral_44/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B405E7 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B405E7 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetUniqueServantRestrictionMessage(questRestrictionInfo, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


bool __fastcall PartyOrganizationListViewItem__HasAtkBoost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantGrandInfo_o *GrandServantInfo; // x0
  __int64 v6; // x1

  if ( PartyOrganizationListViewItem__get_AdjustAtk(this, method) > 0 )
    return 1;
  GrandServantInfo = PartyOrganizationListViewItem__GetGrandServantInfo(this, v3);
  if ( !GrandServantInfo )
    sub_1BDBAD4(0LL, v6);
  return UserServantGrandInfo__get_AddedAtk(GrandServantInfo, 0LL) > 0;
}


bool __fastcall PartyOrganizationListViewItem__HasHpBoost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantGrandInfo_o *GrandServantInfo; // x0
  __int64 v6; // x1

  if ( PartyOrganizationListViewItem__get_AdjustHp(this, method) > 0 )
    return 1;
  GrandServantInfo = PartyOrganizationListViewItem__GetGrandServantInfo(this, v3);
  if ( !GrandServantInfo )
    sub_1BDBAD4(0LL, v6);
  return UserServantGrandInfo__get_AddedHp(GrandServantInfo, 0LL) > 0;
}


bool __fastcall PartyOrganizationListViewItem__IsDataLostBattle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && questRestrictionInfo->fields.isDataLostBattle;
}


bool __fastcall PartyOrganizationListViewItem__IsEditablePos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v4; // x1
  QuestRestrictionInfo_o *v6; // x0
  struct QuestRestrictionInfo_o *v7; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 1;
  if ( QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL) )
    return !this->fields.isServantNumRestriction
        && !this->fields.isFixMultipleNpcRestriction
        && (!this->fields.isFixMultipleNpc
         || (v7 = this->fields.questRestrictionInfo) != 0LL && v7->fields.isNpcEditablePos)
        && !this->fields.isMyServantOrNpcRestriction;
  v6 = this->fields.questRestrictionInfo;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
  return QuestRestrictionInfo__IsEditablePos(v6, this->fields._InitPos_k__BackingField, 0LL);
}


bool __fastcall PartyOrganizationListViewItem__IsEmptyConfigurable(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.frameType == 9;
}


bool __fastcall PartyOrganizationListViewItem__IsFixCostume(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(
                                       questRestrictionInfo,
                                       userServantEntity,
                                       0LL) >= 0;
  }
  else
  {
    LOBYTE(questRestrictionInfo) = 0;
  }
  return (char)questRestrictionInfo;
}


bool __fastcall PartyOrganizationListViewItem__IsFrameNotSupportSingle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo
      && questRestrictionInfo->fields.isNotSingleSupportOnly
      && questRestrictionInfo->fields.servantNumMin > 0;
}


bool __fastcall PartyOrganizationListViewItem__IsModifyFixCostume(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42374456(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1BDBAD4(0LL, v6);
  return UserServantEntity__getDispLimitCount(v8, 0, 0LL) != v7;
}


bool __fastcall PartyOrganizationListViewItem__IsMyServantOrSupportRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo
      && this->fields.isMyServantOrNpcRestriction
      && QuestRestrictionInfo__IsSelectableNormalSupport(
           questRestrictionInfo,
           this->fields._InitPos_k__BackingField,
           0LL);
}


bool __fastcall PartyOrganizationListViewItem__IsQuestRestrictionInfoAlloutBattle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && questRestrictionInfo->fields.isAllOutBattle;
}


bool __fastcall PartyOrganizationListViewItem__IsUniqueIndividualityServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return !questRestrictionInfo || QuestRestrictionInfo__IsUniqueIndividualityServant(questRestrictionInfo, 0LL);
}


void __fastcall PartyOrganizationListViewItem__Modify(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o **p_userServantEntity; // x20
  __int128 v8; // q1
  int64_t v9; // x0
  __int64 v10; // x1
  int64_t v11; // x21
  void *Master_object; // x0
  UserServantEntity_o *v13; // x8
  PartyOrganizationListViewItem_o *IsGrandServant; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  _BOOL4 isRestrictionGrandServant; // w8
  _BOOL4 IsTempGrandServant_k__BackingField; // w9
  int32_t hp; // w20
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-40h]

  if ( (byte_4B405CD & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B405CD = 1;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v24.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v23 = v24;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v23, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v11 = v9;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_21;
      DataMasterBase_object__object__long___TryGetEntity(
        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
        (Il2CppObject **)&this->fields.userServantEntity,
        v11,
        (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    Master_object = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      Master_object = UserServantEntity__GetOverwriteStatus(
                        (UserServantEntity_o *)Master_object,
                        this->fields.questRestrictionInfo,
                        0LL);
      if ( Master_object )
      {
        this->fields.cost = *((_DWORD *)Master_object + 7);
        *(_QWORD *)&this->fields.hp = *((_QWORD *)Master_object + 2);
        this->fields.rarityId = *((_DWORD *)Master_object + 6);
        v10 = *((unsigned int *)Master_object + 10);
        Master_object = this->fields.userServantEntity;
        this->fields.actualRarity = v10;
        if ( Master_object )
        {
          Master_object = (void *)UserServantEntity__GetFrameType((UserServantEntity_o *)Master_object, v10, 0LL);
          v13 = this->fields.userServantEntity;
          this->fields.frameType = (int)Master_object;
          if ( v13 )
          {
            IsGrandServant = (PartyOrganizationListViewItem_o *)UserServantEntity__IsGrandServant(v13, 0LL);
            isRestrictionGrandServant = this->fields.isRestrictionGrandServant;
            this->fields._IsGrandServant_k__BackingField = (unsigned __int8)IsGrandServant & 1;
            IsTempGrandServant_k__BackingField = this->fields._IsTempGrandServant_k__BackingField;
            this->fields._IsUseGrandBoard_k__BackingField = (unsigned __int8)IsGrandServant & isRestrictionGrandServant;
            if ( !IsTempGrandServant_k__BackingField )
            {
LABEL_19:
              PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(IsGrandServant, this, v16);
              return;
            }
            hp = this->fields.hp;
            Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v15);
            if ( Master_object )
            {
              AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Master_object, 0LL);
              atk = this->fields.atk;
              this->fields.hp = AddedHp + hp;
              Master_object = PartyOrganizationListViewItem__GetGrandServantInfo(this, v22);
              if ( Master_object )
              {
                IsGrandServant = (PartyOrganizationListViewItem_o *)UserServantGrandInfo__get_AddedAtk(
                                                                      (UserServantGrandInfo_o *)Master_object,
                                                                      0LL);
                this->fields.atk = (_DWORD)IsGrandServant + atk;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BDBAD4(Master_object, v10);
  }
}


void __fastcall PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  const MethodInfo *v7; // x2

  if ( !item )
    sub_1BDBAD4(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_33393652(this, item, v7);
}


void __fastcall PartyOrganizationListViewItem__Modify_33393652(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyOrganizationListViewItem_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  UserServantEntity_o *v19; // x8
  System_Int32_array *CommandCodeIdList; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x21
  __int64 v28; // x23
  int32_t v29; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  _BOOL4 isMyServantOrNpcRestriction; // w8
  _BOOL4 IsGrandServant; // w0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  int v37; // w8
  int32_t hp; // w20
  int32_t AddedHp; // w0
  int32_t atk; // w21
  const MethodInfo *v41; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v5 = this;
  if ( (byte_4B405CE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1BDB878(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v8);
    byte_4B405CE = 1;
  }
  if ( !item )
    goto LABEL_26;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_26;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v14;
  *(_QWORD *)&v42.fields.fakeValue = v13;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                              v42,
                                              0LL);
  if ( !v12 )
    goto LABEL_26;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)this,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v16, v17);
  v5->fields.classId = item->fields.classId;
  *(_QWORD *)&v5->fields.cost = *(_QWORD *)&item->fields.cost;
  v5->fields.atk = item->fields.atk;
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v18 )
    goto LABEL_26;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                              v18[6],
                                              0LL);
  v19 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v19 )
    goto LABEL_26;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v19, 0LL);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v21, v22);
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  v5->fields.isQuestRestriction = item->fields.isQuestRestriction;
  v5->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  v5->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  v5->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  if ( questRestrictionInfo )
  {
    v26 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_26;
    v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v28;
    *(_QWORD *)&v43.fields.fakeValue = v27;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v43, 0LL);
    IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v29, 0LL);
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
    v5->fields.followerInfo = 0LL;
    v5->fields.isFollower = 0;
    sub_1BDB81C((CGThumbnailListItem_o *)&v5->fields.followerInfo, 0, v23, v24);
  }
  this = (PartyOrganizationListViewItem_o *)v5->fields.userServantEntity;
  *(_WORD *)&v5->fields._IsClearedWave_k__BackingField = 0;
  v5->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !this )
LABEL_26:
    sub_1BDBAD4(this, item);
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0LL);
  v5->fields._IsGrandServant_k__BackingField = IsGrandServant;
  IsGrandSameServant_k__BackingField = item->fields._IsGrandSameServant_k__BackingField;
  v5->fields._IsUseGrandBoard_k__BackingField = 0;
  v37 = IsGrandSameServant_k__BackingField && !IsGrandServant;
  v5->fields._IsTempGrandServant_k__BackingField = v37;
  if ( v37 )
  {
    hp = v5->fields.hp;
    this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v5, v34);
    if ( this )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0LL);
      atk = v5->fields.atk;
      v5->fields.hp = AddedHp + hp;
      this = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__GetGrandServantInfo(v5, v41);
      if ( this )
      {
        v5->fields.atk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0LL) + atk;
        goto LABEL_25;
      }
    }
    goto LABEL_26;
  }
LABEL_25:
  PartyOrganizationListViewItem__SetEquipStatus(v5, v5->fields.equipIdList, v35);
}


int32_t __fastcall PartyOrganizationListViewItem__RemoveEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Int64_array *equipIdList; // x0
  int32_t v7; // w0
  il2cpp_array_size_t v8; // w20
  void *IsNullOrEmpty; // x0
  struct System_Int64_array *v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w21

  if ( (byte_4B405D6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_long___, userSvtId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, v5);
    byte_4B405D6 = 1;
  }
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  v7 = System_Array__IndexOf_long_(
         equipIdList,
         userSvtId,
         (const MethodInfo_3133038 *)Method_System_Array_IndexOf_long___);
  if ( (v7 & 0x80000000) != 0 )
    return 0;
  v8 = v7;
  IsNullOrEmpty = (void *)BasicHelper__IsNullOrEmpty(
                            (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                            0LL);
  v12 = 0;
  if ( !v8 && ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.equipServantEntityList;
    if ( !IsNullOrEmpty
      || (IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                            0,
                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0LL )
    {
LABEL_15:
      sub_1BDBAD4(IsNullOrEmpty, v10);
    }
    v12 = *((_DWORD *)IsNullOrEmpty + 38);
  }
  v10 = this->fields.equipIdList;
  if ( !v10 )
    goto LABEL_15;
  if ( v8 >= v10->max_length )
    sub_1BDBADC(IsNullOrEmpty, v10, v11);
  v10->m_Items[v8] = 0LL;
  PartyOrganizationListViewItem__SetEquipStatus(this, v10, v11);
  return v12;
}


void __fastcall PartyOrganizationListViewItem__ResetPositionRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isFixedServantPositionRestriction )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void __fastcall PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isFixedServantPositionRestriction && this->fields.isRestrictionMyServantPos )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void __fastcall PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isRestrictionNeedStarting )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void __fastcall PartyOrganizationListViewItem__ResetPositionRestrictionServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isFixedServantPositionRestriction && this->fields.isRestrictionServantPos )
    *(_WORD *)&this->fields.isFixedServantPositionRestriction = 0;
}


void __fastcall PartyOrganizationListViewItem__Set(
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

  if ( (byte_4B405CB & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, item);
    byte_4B405CB = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1BDBAD4(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v11, v12);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isRestrictionGrandServant = item->fields.isRestrictionGrandServant;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v17, v18);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v20,
    v21);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v23, v24);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)commandCodeIdList, v26, v27);
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
  sub_1BDB81C(
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
  if ( !equipSvtIdList || (v34 = System_Array__Clone(equipSvtIdList, 0LL)) == 0LL )
  {
    v39 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v35 = v34;
  v36 = (struct System_Int32_array *)sub_1BDB9B4(v34, int___TypeInfo);
  if ( v36 )
  {
    this->fields.equipSvtIdList = v36;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v38 = sub_1BDB9B4(v35, int___TypeInfo);
    if ( v38 )
    {
      v39 = v38;
LABEL_10:
      sub_1BDB81C((CGThumbnailListItem_o *)p_equipSvtIdList, v39, v31, v32);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v40);
      return;
    }
  }
  else
  {
    sub_1BDBD94(v35);
  }
  v41 = (PartyOrganizationListViewItem_o *)sub_1BDBD94(v35);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v41, v42, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__SetCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t questId; // w20
  struct QuestRestrictionInfo_o *v12; // x8
  EventBuddyPointEntity_o *EntityIncludeQuestUnspecified; // x0
  EventBuddyPointEntity_o *v14; // x21
  int32_t PosPoint; // w0
  _BOOL4 HasFlag; // w21
  Il2CppObject *Master_object; // x22

  v4 = this;
  if ( (byte_4B405CA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1BDB878(&NetworkManager_TypeInfo, v8);
    byte_4B405CA = 1;
  }
  if ( !v4->fields.isFollower )
  {
    this = (PartyOrganizationListViewItem_o *)v4->fields.questRestrictionInfo;
    if ( this )
    {
      this = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL);
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
  v10 = v4->fields.questRestrictionInfo;
  if ( !v10 )
    goto LABEL_35;
  questId = v10->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v12 = v4->fields.questRestrictionInfo;
  if ( !v12 || !this )
    goto LABEL_35;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v12->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_34;
  v14 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0LL);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v14, 0LL) )
    goto LABEL_34;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B3ED56 = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1BDBAD4(this, *(_QWORD *)&eventId);
  if ( UserQuestMaster__getClearCountsFromId(
         (UserQuestMaster_o *)Master_object,
         (int64_t)this->fields.servantEntity->fields.ruby,
         questId,
         0LL) < 1
    || !HasFlag )
  {
    v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 1;
    return;
  }
LABEL_34:
  v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 0;
}


void __fastcall PartyOrganizationListViewItem__SetDuplicationGrandQuestEquipmentMarkFlag(
        PartyOrganizationListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  struct System_Boolean_array *IsNullOrEmpty; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BalanceConfig_c *v15; // x0
  __int64 v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_ICollection_o *duplicatedEquipmentUserSvtIdList; // x21
  __int64 v20; // x2
  struct System_Int64_array *equipIdList; // x9
  il2cpp_array_size_t v22; // w8
  System_Predicate_long__o **v23; // x22
  il2cpp_array_size_t max_length; // w10
  System_Predicate_long__o *v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Boolean_array *DuplicationEquipmentFlagList_k__BackingField; // x9
  il2cpp_array_size_t v29; // w10
  char v30; // w10

  if ( (byte_4B405D3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_FindIndex_long___, partyItem);
    sub_1BDB878(&BalanceConfig_TypeInfo, v5);
    sub_1BDB878(&bool___TypeInfo, v6);
    sub_1BDB878(&System_Predicate_long__TypeInfo, v7);
    sub_1BDB878(
      &Method_PartyOrganizationListViewItem___c__DisplayClass175_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__,
      v8);
    sub_1BDB878(&PartyOrganizationListViewItem___c__DisplayClass175_0_TypeInfo, v9);
    byte_4B405D3 = 1;
  }
  v10 = sub_1BDBAC4(PartyOrganizationListViewItem___c__DisplayClass175_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_28;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  if ( this->fields._IsGrandServant_k__BackingField || this->fields._IsTempGrandServant_k__BackingField )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v16 = 52LL;
  }
  else
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v16 = 48LL;
  }
  IsNullOrEmpty = (struct System_Boolean_array *)sub_1BDB920(
                                                   bool___TypeInfo,
                                                   *(unsigned int *)((char *)&v15->static_fields->CriticalRateToAddByQuickFirstBonus
                                                                   + v16));
  if ( !this )
    goto LABEL_28;
  this->fields._DuplicationEquipmentFlagList_k__BackingField = IsNullOrEmpty;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)IsNullOrEmpty,
    v17,
    v18);
  if ( !partyItem )
    goto LABEL_28;
  duplicatedEquipmentUserSvtIdList = (System_Collections_ICollection_o *)partyItem->fields.duplicatedEquipmentUserSvtIdList;
  IsNullOrEmpty = (struct System_Boolean_array *)BasicHelper__IsNullOrEmpty(duplicatedEquipmentUserSvtIdList, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return;
  *(_DWORD *)(v10 + 24) = 0;
  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
LABEL_28:
    sub_1BDBAD4(IsNullOrEmpty, v12);
  v22 = 0;
  v23 = (System_Predicate_long__o **)(v10 + 32);
  while ( 1 )
  {
    max_length = equipIdList->max_length;
    if ( (int)v22 >= (int)max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_32;
    if ( equipIdList->m_Items[v22] >= 1 )
    {
      v25 = *v23;
      if ( !*v23 )
      {
        v25 = (System_Predicate_long__o *)sub_1BDBAC4(System_Predicate_long__TypeInfo);
        System_Predicate_long____ctor(
          v25,
          (Il2CppObject *)v10,
          Method_PartyOrganizationListViewItem___c__DisplayClass175_0__SetDuplicationGrandQuestEquipmentMarkFlag_b__0__,
          0LL);
        *(_QWORD *)(v10 + 32) = v25;
        sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v25, v26, v27);
      }
      IsNullOrEmpty = (struct System_Boolean_array *)System_Array__FindIndex_long_(
                                                       (System_Int64_array *)duplicatedEquipmentUserSvtIdList,
                                                       (System_Predicate_T__o *)v25,
                                                       (const MethodInfo_3131B74 *)Method_System_Array_FindIndex_long___);
      DuplicationEquipmentFlagList_k__BackingField = this->fields._DuplicationEquipmentFlagList_k__BackingField;
      if ( !DuplicationEquipmentFlagList_k__BackingField )
        goto LABEL_28;
      v22 = *(_DWORD *)(v10 + 24);
      v29 = DuplicationEquipmentFlagList_k__BackingField->max_length;
      if ( (_DWORD)IsNullOrEmpty == -1 )
      {
        if ( v22 >= v29 )
LABEL_32:
          sub_1BDBADC(IsNullOrEmpty, v12, v20);
        v30 = 0;
      }
      else
      {
        if ( v22 >= v29 )
          goto LABEL_32;
        v30 = 1;
      }
      DuplicationEquipmentFlagList_k__BackingField->m_Items[v22 + 4] = v30;
    }
    *(_DWORD *)(v10 + 24) = ++v22;
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_28;
  }
}


void __fastcall PartyOrganizationListViewItem__SetEquipStatus(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v49; // x20
  FollowerInfo_o *p_equipUserServantEntityList; // x23
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_List_object__o *v53; // x20
  struct System_Collections_Generic_List_ServantEntity__o **p_equipServantEntityList; // x22
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  EventUpValInfo_o **p_eventUpValInfo; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  void *IsGrandServant; // x0
  Il2CppObject *v63; // x1
  __int64 v64; // x2
  const MethodInfo *v65; // x3
  _BOOL4 isFollower; // w8
  Il2CppObject *v67; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v69; // x8
  Il2CppObject *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Int64_array *v73; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct System_Int64_array **p_equipIdList; // x0
  int32_t v76; // w1
  BalanceConfig_c *v77; // x0
  int32_t followerIndex; // w23
  FollowerInfo_o *followerInfo; // x24
  int32_t v80; // w2
  struct QuestRestrictionInfo_o *v81; // x8
  unsigned __int64 v82; // x29
  unsigned __int64 max_length; // x9
  struct System_Int64_array *v84; // x8
  const MethodInfo *v85; // x3
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x25
  struct System_Int32_array *v92; // x8
  System_Collections_Generic_List_object__o *v93; // x25
  UserServantCollectionEntity_o *v94; // x27
  UserServantEntity_o *v95; // x26
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  struct System_Int64_array *v102; // x8
  System_Collections_Generic_List_object__o *v103; // x25
  UserServantEntity_o *v104; // x26
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  struct System_Collections_Generic_List_ServantEntity__o *v111; // x25
  ServantEntity_o *v112; // x26
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  struct ServantEntity_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x0
  CGThumbnailListItem_o *v119; // x0
  int32_t v120; // w1
  __int64 v121; // x8
  Il2CppObject *v122; // x1
  void *monitor; // x25
  Il2CppClass *klass; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v125; // x25
  void *v126; // x26
  Il2CppClass *v127; // x27
  Il2CppObject *v128; // x25
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  System_Collections_Generic_List_object__o *v133; // x25
  struct System_Int32_array *v134; // x8
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass *v140; // x1
  Il2CppClass **v141; // x0
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *v143; // x23
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x29
  struct System_Int32_array *v145; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_42109612; // w0
  struct QuestRestrictionInfo_o *v149; // x8
  System_Collections_Generic_List_object__o *v150; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x24
  PartyOrganizationListViewItem___c_c *v152; // x0
  System_Func_object__int__o *_9__161_1; // x25
  Il2CppObject *v154; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v158; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v159; // x0
  const MethodInfo *v160; // x3
  __int64 v161; // x8
  _DWORD *v162; // x24
  unsigned __int64 v163; // x20
  ServantEntity_o *v164; // x26
  int32_t v165; // w27
  EventPersonalMargeUpValInfo_o *v166; // x25
  __int64 v167; // x8
  _QWORD *v168; // x25
  unsigned __int64 v169; // x26
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  System_Collections_Generic_List_object__o *v174; // x23
  const MethodInfo_39166A8 *v175; // x0
  const MethodInfo *v176; // x3
  EventUpValInfo_o **v177; // x25
  struct EventMargeItemUpValInfo_array *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  const MethodInfo *v181; // x1
  System_Int32_array *v182; // x23
  EventUpValSetupInfo_o *v183; // x24
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  UserServantEntity_o *v186; // x22
  EventUpValSetupInfo_o *v187; // x23
  struct QuestRestrictionInfo_o *v188; // x8
  _BOOL8 v189; // x0
  __int64 v190; // x1
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  System_Collections_Generic_List_object__o *v193; // x0
  Il2CppObject *v194; // x1
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  Il2CppClass **v198; // x8
  Il2CppObject *v199; // x24
  System_Collections_Generic_List_object__o *v200; // x23
  const MethodInfo *v201; // x3
  struct System_Int32_array *v202; // x21
  __int64 v203; // x8
  unsigned __int64 v204; // x28
  int32_t v205; // w26
  Il2CppObject *v206; // x0
  ServantEntity_o *v207; // x27
  EventPersonalMargeUpValInfo_o *v208; // x25
  __int64 v209; // x8
  _QWORD *v210; // x25
  unsigned __int64 v211; // x26
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  Il2CppClass **v215; // x0
  System_Collections_ICollection_o *EquipSvtIds; // x23
  int32_t current; // w24
  System_Collections_Generic_List_object__o *v218; // x23
  Il2CppObject *Instance; // x0
  __int64 v220; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v222; // x1
  Il2CppObject *v223; // x0
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  Il2CppObject *v226; // x1
  struct System_Object_array *items; // x8
  _QWORD *v228; // x9
  __int64 size; // x10
  Il2CppClass **v230; // x0
  ServantEntity_o *v231; // x24
  __int64 v232; // x0
  __int64 v233; // x1
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  struct System_Object_array *v236; // x8
  _QWORD *v237; // x9
  __int64 v238; // x10
  Il2CppClass **v239; // x0
  UserServantEntity_o *v240; // x23
  EventUpValSetupInfo_o *v241; // x22
  struct QuestRestrictionInfo_o *v242; // x8
  ServantEntity_o *v243; // x22
  EventPersonalMargeUpValInfo_o *v244; // x21
  System_Collections_Generic_List_object__o *v245; // x19
  EventMargeItemUpValInfo_array *v246; // x0
  int32_t v247; // w23
  FollowerInfo_o *v248; // x24
  int32_t v249; // w2
  struct QuestRestrictionInfo_o *v250; // x8
  System_Collections_Generic_List_object__o *v251; // x22
  int32_t v252; // w24
  FollowerInfo_o *v253; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v254; // x23
  int32_t v255; // w2
  struct QuestRestrictionInfo_o *v256; // x8
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  struct System_Object_array *v259; // x8
  _QWORD *v260; // x9
  __int64 v261; // x10
  Il2CppClass *v262; // x1
  Il2CppClass **v263; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  struct System_Int32_array *eventIdList; // x8
  int32_t v266; // w23
  FollowerInfo_o *v267; // x24
  int32_t v268; // w4
  struct QuestRestrictionInfo_o *v269; // x8
  System_Collections_Generic_List_object__o *v270; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x22
  PartyOrganizationListViewItem___c_c *v273; // x0
  System_Func_object__int__o *_9__161_0; // x23
  Il2CppObject *v275; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v277; // w2
  const MethodInfo *v278; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v279; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v280; // x0
  __int64 v281; // x8
  _DWORD *v282; // x22
  unsigned __int64 v283; // x20
  ServantEntity_o *servantEntity; // x24
  int32_t v285; // w25
  EventPersonalMargeUpValInfo_o *v286; // x23
  const MethodInfo *v287; // x3
  __int64 v288; // x8
  _QWORD *v289; // x23
  unsigned __int64 v290; // x24
  struct System_Object_array *v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  Il2CppClass **v294; // x0
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *AdjustUpValInfoArray; // x21
  struct EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  int32_t v297; // w2
  const MethodInfo *v298; // x3
  EventUpValInfo_o **eventUpVallInfo; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v300; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v301; // [xsp+30h] [xbp-E0h] BYREF
  EventUpValInfo_o *v302; // [xsp+48h] [xbp-C8h] BYREF
  bool v303; // [xsp+54h] [xbp-BCh] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v304; // [xsp+58h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+64h] [xbp-ACh] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v307; // [xsp+70h] [xbp-A0h] BYREF
  UserServantCollectionEntity_o *v308; // [xsp+78h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+80h] [xbp-90h] BYREF
  bool v310; // [xsp+8Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v311; // [xsp+90h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v312; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v313; // 0:x0.16

  if ( (byte_4B405C9 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, equipIdList);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_Distinct_int___, v13);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v14);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v21);
    sub_1BDB878(&EventPersonalMargeUpValInfo_TypeInfo, v22);
    sub_1BDB878(&EventUpValSetupInfo_TypeInfo, v23);
    sub_1BDB878(&System_Func_EventDropUpValInfo__int__TypeInfo, v24);
    sub_1BDB878(&int___TypeInfo, v25);
    sub_1BDB878(&long___TypeInfo, v26);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__Add__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v30);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v32);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__GetEnumerator__, v33);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v35);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity___ctor__, v36);
    sub_1BDB878(&System_Collections_Generic_List_ServantEntity__TypeInfo, v37);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v38);
    sub_1BDB878(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v39);
    sub_1BDB878(&NetworkManager_TypeInfo, v40);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_1BDB878(&ServantEntity_TypeInfo, v42);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__, v45);
    sub_1BDB878(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__, v46);
    sub_1BDB878(&PartyOrganizationListViewItem___c_TypeInfo, v47);
    sub_1BDB878(&UserServantEntity_TypeInfo, v48);
    byte_4B405C9 = 1;
  }
  memset(&v311, 0, sizeof(v311));
  v310 = 0;
  v308 = 0LL;
  entity = 0LL;
  infoList = 0LL;
  v307 = 0LL;
  isDuplicate = 0;
  v304 = 0LL;
  v303 = 0;
  v302 = 0LL;
  memset(&v301, 0, sizeof(v301));
  v49 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  p_equipUserServantEntityList = (FollowerInfo_o *)&this->fields.equipUserServantEntityList;
  this->fields.equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v49;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntityList, (int32_t)v49, v51, v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
  p_equipServantEntityList = &this->fields.equipServantEntityList;
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_ServantEntity__o *)v53;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v53, v55, v56);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUpValInfo, 0, v58, v59);
  this->fields.eventUpValItemList = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, 0, v60, v61);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( isFollower )
  {
    this->fields.equipIdList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v64, v65);
    p_equipUserServantEntityList = this->fields.followerInfo;
    if ( !p_equipUserServantEntityList )
      return;
    LODWORD(v67) = this->fields.followerIndex;
    if ( this->fields.followerGrandGraphId > 0 )
    {
      ReturnTypeByQuestId = 2;
      goto LABEL_20;
    }
LABEL_13:
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
LABEL_20:
    IsGrandServant = (void *)FollowerInfo__IsGrandServant(
                               p_equipUserServantEntityList,
                               (int32_t)v67,
                               ReturnTypeByQuestId,
                               0LL);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      followerIndex = this->fields.followerIndex;
      followerInfo = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v81 = this->fields.questRestrictionInfo;
        if ( v81 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v81->fields.questId, 0LL);
          v80 = (int)IsGrandServant;
        }
        else
        {
          v80 = 0;
        }
      }
      else
      {
        v80 = 2;
      }
      if ( !followerInfo )
        goto LABEL_288;
      EquipSvtIds = (System_Collections_ICollection_o *)FollowerInfo__GetEquipSvtIds(
                                                          followerInfo,
                                                          followerIndex,
                                                          v80,
                                                          0LL);
      IsGrandServant = (void *)BasicHelper__IsNullOrEmpty(EquipSvtIds, 0LL);
      if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
      {
        if ( !EquipSvtIds )
          goto LABEL_288;
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v300,
          (System_Collections_Generic_List_int__o *)EquipSvtIds,
          (const MethodInfo_36B9874 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v311 = v300;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v311,
                  (const MethodInfo_34661D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          current = (int32_t)v311.fields._current;
          v218 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
          if ( LODWORD(v311.fields._current) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              sub_1BDBAD4(0LL, v220);
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
            if ( !MasterData_object )
              sub_1BDBAD4(0LL, v222);
            v223 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     current,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v226 = v223;
            if ( !v218 )
              sub_1BDBAD4(v223, v223);
            items = v218->fields._items;
            v228 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v218->fields._version;
            if ( !items )
              sub_1BDBAD4(v223, v223);
            size = v218->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v218,
                v223,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
            }
            else
            {
              v230 = &items->obj.klass + size;
              v218->fields._size = size + 1;
              v230[4] = (Il2CppClass *)v226;
              sub_1BDB81C((CGThumbnailListItem_o *)(v230 + 4), (int32_t)v226, v224, v225);
            }
          }
          else
          {
            v231 = (ServantEntity_o *)sub_1BDBAC4(ServantEntity_TypeInfo);
            ServantEntity___ctor(v231, 0LL);
            if ( !v218 )
              sub_1BDBAD4(v232, v233);
            v236 = v218->fields._items;
            v237 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v218->fields._version;
            if ( !v236 )
              sub_1BDBAD4(v232, v233);
            v238 = v218->fields._size;
            if ( (unsigned int)v238 >= v236->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v218,
                (Il2CppObject *)v231,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
            }
            else
            {
              v239 = &v236->obj.klass + v238;
              v218->fields._size = v238 + 1;
              v239[4] = (Il2CppClass *)v231;
              sub_1BDB81C((CGThumbnailListItem_o *)(v239 + 4), (int32_t)v231, v234, v235);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v311,
          (const MethodInfo_34661D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        p_eventUpValInfo = &this->fields.eventUpValInfo;
      }
    }
    else
    {
      v247 = this->fields.followerIndex;
      v248 = this->fields.followerInfo;
      if ( this->fields.followerGrandGraphId <= 0 )
      {
        v250 = this->fields.questRestrictionInfo;
        if ( v250 )
        {
          IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v250->fields.questId, 0LL);
          v249 = (int)IsGrandServant;
        }
        else
        {
          v249 = 0;
        }
      }
      else
      {
        v249 = 2;
      }
      if ( !v248 )
        goto LABEL_288;
      IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v248, v247, v249, 0LL);
      if ( (int)IsGrandServant >= 1 )
      {
        v251 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
        v252 = this->fields.followerIndex;
        v253 = this->fields.followerInfo;
        v254 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v256 = this->fields.questRestrictionInfo;
          if ( v256 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v256->fields.questId, 0LL);
            v255 = (int)IsGrandServant;
          }
          else
          {
            v255 = 0;
          }
        }
        else
        {
          v255 = 2;
        }
        if ( !v253 )
          goto LABEL_288;
        IsGrandServant = (void *)FollowerInfo__getEquipSvtId(v253, v252, v255, 0LL);
        if ( !v254 )
          goto LABEL_288;
        IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                           v254,
                           (int32_t)IsGrandServant,
                           (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !v251 )
          goto LABEL_288;
        v259 = v251->fields._items;
        v260 = Method_System_Collections_Generic_List_ServantEntity__Add__;
        ++v251->fields._version;
        if ( !v259 )
          goto LABEL_288;
        v261 = v251->fields._size;
        v262 = (Il2CppClass *)IsGrandServant;
        if ( (unsigned int)v261 >= v259->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v251,
            (Il2CppObject *)IsGrandServant,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
        }
        else
        {
          v263 = &v259->obj.klass + v261;
          v251->fields._size = v261 + 1;
          v263[4] = v262;
          sub_1BDB81C((CGThumbnailListItem_o *)(v263 + 4), (int32_t)v262, v257, v258);
        }
      }
    }
    setupInfo = this->fields.setupInfo;
    if ( setupInfo )
    {
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_288;
      if ( *(_QWORD *)&eventIdList->max_length )
      {
        v266 = this->fields.followerIndex;
        v267 = this->fields.followerInfo;
        if ( this->fields.followerGrandGraphId <= 0 )
        {
          v269 = this->fields.questRestrictionInfo;
          if ( v269 )
          {
            IsGrandServant = (void *)FollowerInfo__GetReturnTypeByQuestId(v269->fields.questId, 0LL);
            v268 = (int)IsGrandServant;
          }
          else
          {
            v268 = 0;
          }
        }
        else
        {
          v268 = 2;
        }
        if ( !v267 )
          goto LABEL_288;
        this->fields.isEventUpVal = FollowerInfo__getEventUpVal_40748740(
                                      v267,
                                      p_eventUpValInfo,
                                      setupInfo,
                                      v266,
                                      v268,
                                      0LL);
        v270 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v270,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        eventUpValInfo = this->fields.eventUpValInfo;
        if ( !eventUpValInfo )
          goto LABEL_288;
        dropList = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v273 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v273 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__161_0 = (System_Func_object__int__o *)v273->static_fields->__9__161_0;
        if ( !_9__161_0 )
        {
          if ( !v273->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v273);
            v273 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v275 = (Il2CppObject *)v273->static_fields->__9;
          _9__161_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__161_0,
            v275,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_0__,
            0LL);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          static_fields->__9__161_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_0;
          sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__161_0, (int32_t)_9__161_0, v277, v278);
        }
        v279 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      dropList,
                                                                      (System_Func_TSource__TResult__o *)_9__161_0,
                                                                      (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v280 = System_Linq_Enumerable__Distinct_int_(
                 v279,
                 (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
        IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                           v280,
                           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !IsGrandServant )
          goto LABEL_288;
        v281 = *((_QWORD *)IsGrandServant + 3);
        v282 = IsGrandServant;
        if ( (int)v281 >= 1 )
        {
          v283 = 0LL;
          while ( 1 )
          {
            if ( v283 >= (unsigned int)v281 )
              goto LABEL_289;
            servantEntity = this->fields.servantEntity;
            v285 = v282[v283 + 8];
            v286 = (EventPersonalMargeUpValInfo_o *)sub_1BDBAC4(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v286, v285, servantEntity, 0LL);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_288;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0LL);
            if ( !v286 )
              goto LABEL_288;
            EventPersonalMargeUpValInfo__Add(v286, (EventDropItemUpValInfo_array *)IsGrandServant, 0LL);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v286, 0LL);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v286, 0LL);
              if ( !IsGrandServant )
                goto LABEL_288;
              v288 = *((_QWORD *)IsGrandServant + 3);
              v289 = IsGrandServant;
              if ( (int)v288 >= 1 )
                break;
            }
LABEL_283:
            LODWORD(v281) = v282[6];
            if ( (__int64)++v283 >= (int)v281 )
              goto LABEL_284;
          }
          v290 = 0LL;
          while ( v290 < (unsigned int)v288 )
          {
            if ( !v270 )
              goto LABEL_288;
            v63 = (Il2CppObject *)v289[v290 + 4];
            v291 = v270->fields._items;
            v292 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v270->fields._version;
            if ( !v291 )
              goto LABEL_288;
            v293 = v270->fields._size;
            if ( (unsigned int)v293 >= v291->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v270,
                v63,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
            }
            else
            {
              v294 = &v291->obj.klass + v293;
              v270->fields._size = v293 + 1;
              v294[4] = (Il2CppClass *)v63;
              sub_1BDB81C((CGThumbnailListItem_o *)(v294 + 4), (int32_t)v63, v64, v287);
            }
            LODWORD(v288) = *((_DWORD *)v289 + 6);
            if ( (__int64)++v290 >= (int)v288 )
              goto LABEL_283;
          }
          goto LABEL_289;
        }
LABEL_284:
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        AdjustUpValInfoArray = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray((PartyOrganizationUtility_o *)IsGrandServant, &v310, (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v270, 0LL);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                          (PartyOrganizationUtility_o *)IsGrandServant,
                          AdjustUpValInfoArray,
                          0LL);
        this->fields.eventUpValItemList = AddUpValInfos;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, (int32_t)AddUpValInfos, v297, v298);
        this->fields._IsDuplicateBonus_k__BackingField = v310;
      }
    }
    return;
  }
  if ( !this->fields.userServantEntity )
  {
    this->fields.equipIdList = 0LL;
    p_equipIdList = &this->fields.equipIdList;
    v76 = 0;
    goto LABEL_229;
  }
  eventUpVallInfo = &this->fields.eventUpValInfo;
  if ( !equipIdList )
  {
    v77 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v77 = BalanceConfig_TypeInfo;
    }
    v73 = (struct System_Int64_array *)sub_1BDB920(long___TypeInfo, (unsigned int)v77->static_fields->SvtEquipMax);
LABEL_26:
    this->fields.equipIdList = v73;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v73, v71, v72);
    v69 = this->fields.equipIdList;
    goto LABEL_27;
  }
  v69 = this->fields.equipIdList;
  if ( v69 != equipIdList )
  {
    v70 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
    if ( v70 )
    {
      v67 = v70;
      v73 = (struct System_Int64_array *)sub_1BDB9B4(v70, long___TypeInfo);
      if ( !v73 )
      {
        sub_1BDBD94(v67);
        goto LABEL_13;
      }
    }
    else
    {
      v73 = 0LL;
    }
    goto LABEL_26;
  }
LABEL_27:
  if ( !v69 )
    goto LABEL_288;
  v82 = 0LL;
  while ( 1 )
  {
    max_length = v69->max_length;
    if ( (__int64)v82 >= (int)max_length )
      break;
    if ( v82 >= max_length )
      goto LABEL_289;
    if ( v69->m_Items[v82] < 1 )
      goto LABEL_63;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
    v84 = this->fields.equipIdList;
    if ( !v84 )
      goto LABEL_288;
    if ( v82 >= v84->max_length )
      goto LABEL_289;
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = (void *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                               &entity,
                               v84->m_Items[v82],
                               (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)IsGrandServant & 1) != 0 )
    {
      IsGrandServant = p_equipUserServantEntityList->klass;
      if ( !p_equipUserServantEntityList->klass )
        goto LABEL_288;
      v63 = entity;
      v86 = *((_QWORD *)IsGrandServant + 2);
      v87 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v86 )
        goto LABEL_288;
      v88 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v63,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = v86 + 8 * v88;
        *((_DWORD *)IsGrandServant + 6) = v88 + 1;
        *(_QWORD *)(v89 + 32) = v63;
        sub_1BDB81C((CGThumbnailListItem_o *)(v89 + 32), (int32_t)v63, v64, v85);
      }
      if ( !entity )
        goto LABEL_288;
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v312.fields.currentCryptoKey = klass;
      *(_QWORD *)&v312.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v312, 0LL) <= 0 )
      {
        v128 = (Il2CppObject *)sub_1BDBAC4(ServantEntity_TypeInfo);
        ServantEntity___ctor((ServantEntity_o *)v128, 0LL);
      }
      else
      {
        IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = DataManager__GetMasterData_object_(
                           (DataManager_o *)IsGrandServant,
                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !entity )
          goto LABEL_288;
        v125 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant;
        v127 = entity[5].klass;
        v126 = entity[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v313.fields.currentCryptoKey = v127;
        *(_QWORD *)&v313.fields.fakeValue = v126;
        IsGrandServant = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v313, 0LL);
        if ( !v125 )
          goto LABEL_288;
        v128 = DataMasterBase_object__object__int___GetEntity(
                 v125,
                 (int32_t)IsGrandServant,
                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      }
      IsGrandServant = *p_equipServantEntityList;
      if ( !*p_equipServantEntityList )
        goto LABEL_288;
      v129 = *((_QWORD *)IsGrandServant + 2);
      v130 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++*((_DWORD *)IsGrandServant + 7);
      if ( !v129 )
        goto LABEL_288;
      v131 = *((int *)IsGrandServant + 6);
      if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
      {
        v121 = v130[4];
        v122 = v128;
        goto LABEL_91;
      }
      v132 = v129 + 8 * v131;
      *((_DWORD *)IsGrandServant + 6) = v131 + 1;
      *(_QWORD *)(v132 + 32) = v128;
      v119 = (CGThumbnailListItem_o *)(v132 + 32);
      v120 = (int)v128;
      goto LABEL_89;
    }
    equipSvtIdList = this->fields.equipSvtIdList;
    if ( !equipSvtIdList )
      goto LABEL_60;
    if ( v82 >= equipSvtIdList->max_length )
      goto LABEL_289;
    if ( equipSvtIdList->m_Items[v82 + 1] < 1 )
      goto LABEL_60;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v63);
      byte_4B3ED56 = 1;
    }
    IsGrandServant = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      IsGrandServant = NetworkManager_TypeInfo;
    }
    v92 = this->fields.equipSvtIdList;
    if ( !v92 )
      goto LABEL_288;
    if ( v82 >= v92->max_length )
      goto LABEL_289;
    if ( !Master_object )
      goto LABEL_288;
    IsGrandServant = (void *)UserServantCollectionMaster__TryGetEntity(
                               (UserServantCollectionMaster_o *)Master_object,
                               &v308,
                               *(_QWORD *)(*((_QWORD *)IsGrandServant + 23) + 64LL),
                               v92->m_Items[v82 + 1],
                               0LL);
    if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
    {
LABEL_60:
      v102 = this->fields.equipIdList;
      if ( !v102 )
        goto LABEL_288;
      if ( v82 >= v102->max_length )
        goto LABEL_289;
      v102->m_Items[v82] = 0LL;
LABEL_63:
      v103 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
      v104 = (UserServantEntity_o *)sub_1BDBAC4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v104, 0LL);
      if ( !v103 )
        goto LABEL_288;
      v107 = v103->fields._items;
      v108 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v103->fields._version;
      if ( !v107 )
        goto LABEL_288;
      v109 = v103->fields._size;
      if ( (unsigned int)v109 >= v107->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v103,
          (Il2CppObject *)v104,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = &v107->obj.klass + v109;
        v103->fields._size = v109 + 1;
        v110[4] = (Il2CppClass *)v104;
        sub_1BDB81C((CGThumbnailListItem_o *)(v110 + 4), (int32_t)v104, v105, v106);
      }
      v111 = *p_equipServantEntityList;
      v112 = (ServantEntity_o *)sub_1BDBAC4(ServantEntity_TypeInfo);
      ServantEntity___ctor(v112, 0LL);
      if ( !v111 )
        goto LABEL_288;
      v115 = v111->fields._items;
      v116 = Method_System_Collections_Generic_List_ServantEntity__Add__;
      ++v111->fields._version;
      if ( !v115 )
        goto LABEL_288;
      v117 = v111->fields._size;
      if ( (unsigned int)v117 >= v115->max_length )
      {
        v121 = v116[4];
        IsGrandServant = v111;
        v122 = (Il2CppObject *)v112;
LABEL_91:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsGrandServant,
          v122,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v121 + 192) + 112LL));
        goto LABEL_92;
      }
      v118 = (__int64)v115 + 8 * v117;
      v111->fields._size = v117 + 1;
      *(_QWORD *)(v118 + 32) = v112;
      v119 = (CGThumbnailListItem_o *)(v118 + 32);
      v120 = (int)v112;
LABEL_89:
      sub_1BDB81C(v119, v120, v113, v114);
      goto LABEL_92;
    }
    v93 = (System_Collections_Generic_List_object__o *)p_equipUserServantEntityList->klass;
    v94 = v308;
    v95 = (UserServantEntity_o *)sub_1BDBAC4(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_42095544(v95, v94, 0LL);
    if ( !v93 )
      goto LABEL_288;
    v98 = v93->fields._items;
    v99 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v93->fields._version;
    if ( !v98 )
      goto LABEL_288;
    v100 = v93->fields._size;
    if ( (unsigned int)v100 >= v98->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v93,
        (Il2CppObject *)v95,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v101 = &v98->obj.klass + v100;
      v93->fields._size = v100 + 1;
      v101[4] = (Il2CppClass *)v95;
      sub_1BDB81C((CGThumbnailListItem_o *)(v101 + 4), (int32_t)v95, v96, v97);
    }
    v133 = (System_Collections_Generic_List_object__o *)*p_equipServantEntityList;
    IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataManager__GetMasterData_object_(
                       (DataManager_o *)IsGrandServant,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
    v134 = this->fields.equipSvtIdList;
    if ( !v134 )
      goto LABEL_288;
    if ( v82 >= v134->max_length )
      goto LABEL_289;
    if ( !IsGrandServant )
      goto LABEL_288;
    IsGrandServant = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)IsGrandServant,
                       v134->m_Items[v82 + 1],
                       (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v133 )
      goto LABEL_288;
    v137 = v133->fields._items;
    v138 = Method_System_Collections_Generic_List_ServantEntity__Add__;
    ++v133->fields._version;
    if ( !v137 )
      goto LABEL_288;
    v139 = v133->fields._size;
    v140 = (Il2CppClass *)IsGrandServant;
    if ( (unsigned int)v139 >= v137->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v133,
        (Il2CppObject *)IsGrandServant,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
    }
    else
    {
      v141 = &v137->obj.klass + v139;
      v133->fields._size = v139 + 1;
      v141[4] = v140;
      sub_1BDB81C((CGThumbnailListItem_o *)(v141 + 4), (int32_t)v140, v135, v136);
    }
    this->fields._IsDisappearEquip_k__BackingField = 1;
LABEL_92:
    v69 = this->fields.equipIdList;
    ++v82;
    if ( !v69 )
      goto LABEL_288;
  }
  p_setupInfo = &this->fields.setupInfo;
  v143 = this->fields.setupInfo;
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  if ( !v143 )
    goto LABEL_138;
  v145 = v143->fields.eventIdList;
  if ( !v145 )
    goto LABEL_288;
  if ( !*(_QWORD *)&v145->max_length )
  {
LABEL_138:
    v174 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v174,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v304 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v174;
    if ( this->fields.questRestrictionInfo )
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v304, 1, v176);
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v177 = &this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_288;
      v174 = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                            (PartyOrganizationUtility_o *)IsGrandServant,
                                                            &v303,
                                                            (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v174,
                                                            0LL);
      this->fields._IsDuplicateBonus_k__BackingField = v303;
      IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsGrandServant )
        goto LABEL_288;
    }
    else
    {
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v304, 0, v176);
      v175 = (const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
LABEL_143:
      IsGrandServant = SingletonTemplate_object___get_Instance(v175);
      v177 = &this->fields.eventUpValInfo;
      if ( !IsGrandServant )
        goto LABEL_288;
    }
    v178 = PartyOrganizationUtility__GetAddUpValInfos(
             (PartyOrganizationUtility_o *)IsGrandServant,
             (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v174,
             0LL);
    goto LABEL_145;
  }
  userServantEntity = this->fields.userServantEntity;
  EquipList = PartyOrganizationListViewItem__GetEquipList(this, (const MethodInfo *)v63);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant || !userServantEntity )
    goto LABEL_288;
  EventUpVal_42109612 = UserServantEntity__getEventUpVal_42109612(
                          userServantEntity,
                          eventUpVallInfo,
                          v143,
                          EquipList,
                          *((_QWORD *)IsGrandServant + 14),
                          0LL);
  v149 = this->fields.questRestrictionInfo;
  this->fields.isEventUpVal = EventUpVal_42109612;
  if ( v149 )
  {
    v150 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v150,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    infoList = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v150;
    if ( *eventUpVallInfo )
    {
      v151 = (System_Collections_Generic_IEnumerable_TSource__o *)(*eventUpVallInfo)->fields.dropList;
      v152 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v152 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__161_1 = (System_Func_object__int__o *)v152->static_fields->__9__161_1;
      if ( !_9__161_1 )
      {
        if ( !v152->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v152);
          v152 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v154 = (Il2CppObject *)v152->static_fields->__9;
        _9__161_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__161_1,
          v154,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__161_1__,
          0LL);
        v155 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v155->__9__161_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__161_1;
        sub_1BDB81C((CGThumbnailListItem_o *)&v155->__9__161_1, (int32_t)_9__161_1, v156, v157);
      }
      v158 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    v151,
                                                                    (System_Func_TSource__TResult__o *)_9__161_1,
                                                                    (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v159 = System_Linq_Enumerable__Distinct_int_(
               v158,
               (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
      IsGrandServant = System_Linq_Enumerable__ToArray_int_(
                         v159,
                         (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( IsGrandServant )
      {
        v161 = *((_QWORD *)IsGrandServant + 3);
        v162 = IsGrandServant;
        if ( (int)v161 >= 1 )
        {
          v163 = 0LL;
          while ( 1 )
          {
            if ( v163 >= (unsigned int)v161 )
              goto LABEL_289;
            v164 = this->fields.servantEntity;
            v165 = v162[v163 + 8];
            v166 = (EventPersonalMargeUpValInfo_o *)sub_1BDBAC4(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v166, v165, v164, 0LL);
            IsGrandServant = this->fields.eventUpValInfo;
            if ( !IsGrandServant )
              goto LABEL_288;
            IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0LL);
            if ( !v166 )
              goto LABEL_288;
            EventPersonalMargeUpValInfo__Add(v166, (EventDropItemUpValInfo_array *)IsGrandServant, 0LL);
            IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v166, 0LL);
            if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
            {
              IsGrandServant = EventPersonalMargeUpValInfo__GetList(v166, 0LL);
              if ( !IsGrandServant )
                goto LABEL_288;
              v167 = *((_QWORD *)IsGrandServant + 3);
              v168 = IsGrandServant;
              if ( (int)v167 >= 1 )
                break;
            }
LABEL_135:
            LODWORD(v161) = v162[6];
            if ( (__int64)++v163 >= (int)v161 )
              goto LABEL_136;
          }
          v169 = 0LL;
          while ( v169 < (unsigned int)v167 )
          {
            if ( !v150 )
              goto LABEL_288;
            v63 = (Il2CppObject *)v168[v169 + 4];
            v170 = v150->fields._items;
            v171 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v150->fields._version;
            if ( !v170 )
              goto LABEL_288;
            v172 = v150->fields._size;
            if ( (unsigned int)v172 >= v170->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v150,
                v63,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
            }
            else
            {
              v173 = &v170->obj.klass + v172;
              v150->fields._size = v172 + 1;
              v173[4] = (Il2CppClass *)v63;
              sub_1BDB81C((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v63, v64, v160);
            }
            LODWORD(v167) = *((_DWORD *)v168 + 6);
            if ( (__int64)++v169 >= (int)v167 )
              goto LABEL_135;
          }
          goto LABEL_289;
        }
LABEL_136:
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 1, v160);
        IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsGrandServant )
        {
          v174 = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                (PartyOrganizationUtility_o *)IsGrandServant,
                                                                &isDuplicate,
                                                                (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v150,
                                                                0LL);
          this->fields._IsDuplicateBonus_k__BackingField = isDuplicate;
          v175 = (const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
          goto LABEL_143;
        }
      }
    }
    goto LABEL_288;
  }
  IsGrandServant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_288;
  v199 = DataManager__GetMasterData_object_(
           (DataManager_o *)IsGrandServant,
           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  v200 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v200,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v307 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v200;
  if ( !*p_setupInfo )
    goto LABEL_288;
  v202 = (*p_setupInfo)->fields.eventIdList;
  if ( !v202 )
    goto LABEL_288;
  v203 = *(_QWORD *)&v202->max_length;
  if ( (int)v203 >= 1 )
  {
    v204 = 0LL;
    while ( 1 )
    {
      if ( v204 >= (unsigned int)v203 )
        goto LABEL_289;
      if ( !v199 )
        goto LABEL_288;
      v205 = v202->m_Items[v204 + 1];
      v206 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)v199,
               v205,
               (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v206
        || (IsGrandServant = (void *)EventDetailEntity__HasFlag((EventDetailEntity_o *)v206, 0x800000000LL, 0LL),
            ((unsigned __int8)IsGrandServant & 1) == 0) )
      {
        v207 = this->fields.servantEntity;
        v208 = (EventPersonalMargeUpValInfo_o *)sub_1BDBAC4(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v208, v205, v207, 0LL);
        IsGrandServant = this->fields.eventUpValInfo;
        if ( !IsGrandServant )
          goto LABEL_288;
        IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0LL);
        if ( !v208 )
          goto LABEL_288;
        EventPersonalMargeUpValInfo__Add(v208, (EventDropItemUpValInfo_array *)IsGrandServant, 0LL);
        IsGrandServant = (void *)EventPersonalMargeUpValInfo__IsEmpty(v208, 0LL);
        if ( ((unsigned __int8)IsGrandServant & 1) == 0 )
        {
          IsGrandServant = EventPersonalMargeUpValInfo__GetList(v208, 0LL);
          if ( !IsGrandServant )
            goto LABEL_288;
          v209 = *((_QWORD *)IsGrandServant + 3);
          v210 = IsGrandServant;
          if ( (int)v209 >= 1 )
            break;
        }
      }
LABEL_185:
      LODWORD(v203) = v202->max_length;
      if ( (__int64)++v204 >= (int)v203 )
        goto LABEL_186;
    }
    v211 = 0LL;
    while ( v211 < (unsigned int)v209 )
    {
      if ( !v200 )
        goto LABEL_288;
      v63 = (Il2CppObject *)v210[v211 + 4];
      v212 = v200->fields._items;
      v213 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v200->fields._version;
      if ( !v212 )
        goto LABEL_288;
      v214 = v200->fields._size;
      if ( (unsigned int)v214 >= v212->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v200,
          v63,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
      }
      else
      {
        v215 = &v212->obj.klass + v214;
        v200->fields._size = v214 + 1;
        v215[4] = (Il2CppClass *)v63;
        sub_1BDB81C((CGThumbnailListItem_o *)(v215 + 4), (int32_t)v63, v64, v201);
      }
      LODWORD(v209) = *((_DWORD *)v210 + 6);
      if ( (__int64)++v211 >= (int)v209 )
        goto LABEL_185;
    }
LABEL_289:
    sub_1BDBADC(IsGrandServant, v63, v64);
  }
LABEL_186:
  PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v307, 0, v201);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
    goto LABEL_288;
  v178 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v200,
           0LL);
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  v177 = &this->fields.eventUpValInfo;
LABEL_145:
  this->fields.eventUpValItemList = v178;
  sub_1BDB81C((CGThumbnailListItem_o *)p_eventUpValItemList, (int32_t)v178, v179, v180);
  if ( !this->fields.questRestrictionInfo )
    return;
  if ( !*p_setupInfo )
  {
    v182 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
    v183 = (EventUpValSetupInfo_o *)sub_1BDBAC4(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_40737364(v183, v182, 0, 0, 0, 0LL);
    *p_setupInfo = v183;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)v183, v184, v185);
  }
  if ( this->fields.isEventUpVal && *v177 )
  {
    v186 = this->fields.userServantEntity;
    v187 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v181);
    v188 = this->fields.questRestrictionInfo;
    if ( !v188 )
      goto LABEL_288;
    if ( !v186 )
      goto LABEL_288;
    IsGrandServant = (void *)UserServantEntity__GetBonusUpVal(
                               v186,
                               &v302,
                               v187,
                               (System_Int64_array *)IsGrandServant,
                               v188->fields.questId,
                               v188->fields.questPhase,
                               0LL);
    if ( !v302 )
      goto LABEL_288;
    IsGrandServant = v302->fields.dropList;
    if ( !IsGrandServant )
      goto LABEL_288;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v300,
      (System_Collections_Generic_List_object__o *)IsGrandServant,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    v301 = v300;
    while ( 1 )
    {
      v189 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v301,
               (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
      if ( !v189 )
        break;
      if ( !*v177 )
        sub_1BDBAD4(v189, v190);
      v193 = (System_Collections_Generic_List_object__o *)(*v177)->fields.dropList;
      if ( !v193 )
        sub_1BDBAD4(0LL, v190);
      v194 = v301.fields._current;
      v195 = v193->fields._items;
      v196 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
      ++v193->fields._version;
      if ( !v195 )
        sub_1BDBAD4(v193, v194);
      v197 = v193->fields._size;
      if ( (unsigned int)v197 >= v195->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v193,
          v194,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
      }
      else
      {
        v198 = &v195->obj.klass + v197;
        v193->fields._size = v197 + 1;
        v198[4] = (Il2CppClass *)v194;
        sub_1BDB81C((CGThumbnailListItem_o *)(v198 + 4), (int32_t)v194, v191, v192);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v301,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  }
  else
  {
    v240 = this->fields.userServantEntity;
    v241 = this->fields.setupInfo;
    IsGrandServant = PartyOrganizationListViewItem__GetEquipList(this, v181);
    v242 = this->fields.questRestrictionInfo;
    if ( !v242 || !v240 )
      goto LABEL_288;
    this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                  v240,
                                  v177,
                                  v241,
                                  (System_Int64_array *)IsGrandServant,
                                  v242->fields.questId,
                                  v242->fields.questPhase,
                                  0LL);
  }
  v243 = this->fields.servantEntity;
  v244 = (EventPersonalMargeUpValInfo_o *)sub_1BDBAC4(EventPersonalMargeUpValInfo_TypeInfo);
  EventPersonalMargeUpValInfo___ctor(v244, 0, v243, 0LL);
  IsGrandServant = this->fields.eventUpValInfo;
  if ( !IsGrandServant )
    goto LABEL_288;
  IsGrandServant = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)IsGrandServant, 0, 0LL);
  if ( !v244 )
    goto LABEL_288;
  EventPersonalMargeUpValInfo__Add(v244, (EventDropItemUpValInfo_array *)IsGrandServant, 0LL);
  if ( EventPersonalMargeUpValInfo__IsEmpty(v244, 0LL) )
    return;
  v245 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v245,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v63 = (Il2CppObject *)*p_eventUpValItemList;
  if ( *p_eventUpValItemList )
  {
    if ( !v245 )
      goto LABEL_288;
    System_Collections_Generic_List_object___AddRange(
      v245,
      (System_Collections_Generic_IEnumerable_T__o *)v63,
      (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v244, 0LL);
  }
  else
  {
    IsGrandServant = EventPersonalMargeUpValInfo__GetList(v244, 0LL);
    if ( !v245 )
      goto LABEL_288;
  }
  System_Collections_Generic_List_object___AddRange(
    v245,
    (System_Collections_Generic_IEnumerable_T__o *)IsGrandServant,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
  IsGrandServant = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsGrandServant )
LABEL_288:
    sub_1BDBAD4(IsGrandServant, v63);
  v246 = PartyOrganizationUtility__GetAddUpValInfos(
           (PartyOrganizationUtility_o *)IsGrandServant,
           (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v245,
           0LL);
  v76 = (int)v246;
  *p_eventUpValItemList = v246;
  p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
LABEL_229:
  sub_1BDB81C((CGThumbnailListItem_o *)p_equipIdList, v76, v64, v65);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__SetEquipUserServantId(
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
    if ( equipIdList->max_length <= index )
      sub_1BDBADC(this, userSvtId, *(_QWORD *)&index);
    equipIdList->m_Items[index] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, index, method);
    PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v6);
  }
}


void __fastcall PartyOrganizationListViewItem__SetNameLimitCount(
        PartyOrganizationListViewItem_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = limit;
}


void __fastcall PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
        PartyOrganizationListViewItem_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._WaveEnemyClassIds_k__BackingField = classIds;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem__Set_33392084(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UserServantEntity_o *v16; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  Il2CppObject *Entity; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UserServantEntity_o *v23; // x8
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
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

  if ( (byte_4B405CC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B405CC = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_17;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v10, v11);
  this->fields.followerInfo = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v14, v15);
  *(_QWORD *)&this->fields.followerGrandGraphId = 0LL;
  this->fields.followerClassId = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_17;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v19;
  *(_QWORD *)&v39.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v39, 0LL);
  if ( !v17 )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v21, v22);
  this->fields.classId = item->fields.classId;
  *(_QWORD *)&this->fields.cost = *(_QWORD *)&item->fields.cost;
  this->fields.atk = item->fields.atk;
  v23 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  if ( !v23 )
    goto LABEL_17;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(
                                v23->fields.limitCount,
                                0LL);
  v24 = this->fields.userServantEntity;
  this->fields.svtLimitCount = (int)Instance;
  if ( !v24 )
    goto LABEL_17;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v24, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v26, v27);
  Instance = (DataManager_o *)this->fields.userServantEntity;
  this->fields.isQuestRestriction = item->fields.isQuestRestriction;
  this->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  this->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  *(_DWORD *)&this->fields.isFixedSupportPositionRestriction = 0;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(int64_t *)((char *)&this->fields.npcFollowerSvtId + 6) = 0LL;
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
  IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)Instance, 0LL);
  this->fields._IsGrandServant_k__BackingField = IsGrandServant;
  IsGrandSameServant_k__BackingField = item->fields._IsGrandSameServant_k__BackingField;
  this->fields._IsUseGrandBoard_k__BackingField = 0;
  v34 = IsGrandSameServant_k__BackingField && !IsGrandServant;
  this->fields._IsTempGrandServant_k__BackingField = v34;
  if ( v34 )
  {
    hp = this->fields.hp;
    Instance = (DataManager_o *)PartyOrganizationListViewItem__GetGrandServantInfo(this, v31);
    if ( Instance )
    {
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)Instance, 0LL);
      atk = this->fields.atk;
      this->fields.hp = AddedHp + hp;
      Instance = (DataManager_o *)PartyOrganizationListViewItem__GetGrandServantInfo(this, v38);
      if ( Instance )
      {
        this->fields.atk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)Instance, 0LL) + atk;
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_1BDBAD4(Instance, v9);
  }
LABEL_16:
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v32);
}


void __fastcall PartyOrganizationListViewItem__Swap(
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

  if ( (byte_4B405CF & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, item);
    byte_4B405CF = 1;
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
    sub_1BDBAD4(p_userServantEntity, item);
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
  sub_1BDB81C((CGThumbnailListItem_o *)p_userServantEntity, (int32_t)v16, notChangeInitPos, method);
  v17 = item->fields.followerInfo;
  this->fields.followerInfo = v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)v17, v18, v19);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  v20 = item->fields.servantEntity;
  this->fields.servantEntity = v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v20, v21, v22);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  v23 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v23, v24, v25);
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
  v30 = System_Array__Clone(v28, 0LL);
  if ( !v30 )
    goto LABEL_9;
  v57 = (char)v13;
  v13 = &int___TypeInfo;
  v31 = v30;
  v32 = sub_1BDB9B4(v30, int___TypeInfo);
  if ( !v32
    || (*p_equipSvtIdList = (struct System_Int32_array *)v32,
        v33 = sub_1BDB9B4(v31, int___TypeInfo),
        LOBYTE(v13) = v57,
        v34 = v33,
        !v33) )
  {
    sub_1BDBD94(v31);
LABEL_9:
    v34 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v34, v26, v27);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v35);
  v36 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v36;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v36, v37, v38);
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
  sub_1BDB81C((CGThumbnailListItem_o *)&item->fields.userServantEntity, (int32_t)userServantEntity, v39, v40);
  item->fields.followerInfo = followerInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v41, v42);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  item->fields.followerIndex = followerIndex;
  sub_1BDB81C((CGThumbnailListItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v43, v44);
  *(_QWORD *)&item->fields.cost = v10;
  *(_QWORD *)&item->fields.atk = v9;
  *(_QWORD *)&item->fields.rarityId = v12;
  *(_QWORD *)&item->fields.frameType = v11;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1BDB81C((CGThumbnailListItem_o *)&item->fields.commandCodeIdList, (int32_t)commandCodeIdList, v45, v46);
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
  v49 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v49 )
    goto LABEL_17;
  v50 = v49;
  v51 = sub_1BDB9B4(v49, int___TypeInfo);
  if ( !v51 || (*v29 = (struct System_Int32_array *)v51, v52 = sub_1BDB9B4(v50, int___TypeInfo), v53 = v52, !v52) )
  {
    sub_1BDBD94(v50);
LABEL_17:
    v53 = 0;
    *v29 = 0LL;
  }
  sub_1BDB81C((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v53, v47, v48);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v54);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BDB81C(
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


void __fastcall PartyOrganizationListViewItem__SwapEquip(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Int64_array **p_equipIdList; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Int64_array **v12; // x22
  const MethodInfo *v13; // x2
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int64_array *v17; // x8
  struct System_Int64_array *v18; // x9
  int64_t v19; // x10
  struct System_Int32_array **p_equipSvtIdList; // x21
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Int32_array **v24; // x22
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *v28; // x8
  struct System_Int32_array *v29; // x9
  int32_t v30; // w11
  const MethodInfo *v31; // x2

  if ( (byte_4B405D0 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, item);
    sub_1BDB878(&long___TypeInfo, v5);
    byte_4B405D0 = 1;
  }
  p_equipIdList = &this->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipIdList, 0LL);
  if ( IsNullOrEmpty )
  {
    v9 = sub_1BDB920(long___TypeInfo, 1LL);
    *p_equipIdList = (struct System_Int64_array *)v9;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipIdList, v9, v10, v11);
  }
  if ( !item )
    goto LABEL_22;
  v12 = &item->fields.equipIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipIdList, 0LL);
  if ( IsNullOrEmpty )
  {
    v14 = sub_1BDB920(long___TypeInfo, 1LL);
    *v12 = (struct System_Int64_array *)v14;
    sub_1BDB81C((CGThumbnailListItem_o *)&item->fields.equipIdList, v14, v15, v16);
  }
  v17 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_22;
  if ( !v17->max_length )
    goto LABEL_23;
  v18 = *v12;
  if ( !*v12 )
    goto LABEL_22;
  if ( !v18->max_length || (v19 = v17->m_Items[0], v17->m_Items[0] = v18->m_Items[0], !v18->max_length) )
LABEL_23:
    sub_1BDBADC(IsNullOrEmpty, v8, v13);
  v18->m_Items[0] = v19;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipSvtIdList, 0LL) )
  {
    v21 = sub_1BDB920(int___TypeInfo, 1LL);
    *p_equipSvtIdList = (struct System_Int32_array *)v21;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v21, v22, v23);
  }
  v24 = &item->fields.equipSvtIdList;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)item->fields.equipSvtIdList, 0LL);
  if ( IsNullOrEmpty )
  {
    v25 = sub_1BDB920(int___TypeInfo, 1LL);
    *v24 = (struct System_Int32_array *)v25;
    sub_1BDB81C((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v25, v26, v27);
  }
  v28 = *p_equipSvtIdList;
  if ( !*p_equipSvtIdList )
    goto LABEL_22;
  if ( !v28->max_length )
    goto LABEL_23;
  v29 = *v24;
  if ( !*v24 )
LABEL_22:
    sub_1BDBAD4(IsNullOrEmpty, v8);
  if ( !v29->max_length )
    goto LABEL_23;
  v30 = v28->m_Items[1];
  v28->m_Items[1] = v29->m_Items[1];
  v29->m_Items[1] = v30;
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v13);
  PartyOrganizationListViewItem__SetEquipStatus(item, item->fields.equipIdList, v31);
}


void __fastcall PartyOrganizationListViewItem__UpdateEventEffect(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v2);
}


void __fastcall PartyOrganizationListViewItem__UpdateServantInfo(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
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
  __int64 IsNullOrEmpty; // x0
  __int64 v13; // x1
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v15; // x21
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  System_Int64_array *v18; // x22
  __int64 v19; // x2
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x8
  int32_t v21; // w20
  Il2CppObject *Master_object; // x21
  System_Int64_array *v23; // x22
  __int128 v24; // q0
  struct System_Collections_Generic_List_UserServantEntity__o *v25; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x22
  __int128 v27; // q0
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  Il2CppObject *Entity; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v35; // x20
  __int64 v36; // x21
  UserServantEntity_o *v37; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  bool IsGrandServant; // w0
  _BOOL4 isRestrictionGrandServant; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+70h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+90h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B405F4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v5);
    sub_1BDB878(&long___TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__set_Item__, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    byte_4B405F4 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList,
                    0LL);
  if ( (IsNullOrEmpty & 1) != 0 && !this->fields._IsDisappearEquip_k__BackingField )
  {
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( !equipUserServantEntityList )
      goto LABEL_43;
    v21 = 0;
    while ( v21 < equipUserServantEntityList->fields._size )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
      IsNullOrEmpty = sub_1BDB920(long___TypeInfo, 1LL);
      if ( !this->fields.equipUserServantEntityList )
        goto LABEL_43;
      v23 = (System_Int64_array *)IsNullOrEmpty;
      IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                 v21,
                                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !IsNullOrEmpty )
        goto LABEL_43;
      v24 = *(_OWORD *)(IsNullOrEmpty + 32);
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
      *(_OWORD *)&v47.fields.fakeValue = v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v46 = v47;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v46, 0LL);
      if ( !v23 )
        goto LABEL_43;
      if ( !v23->max_length )
        goto LABEL_60;
      v23->m_Items[0] = IsNullOrEmpty;
      if ( !Master_object )
        goto LABEL_43;
      IsNullOrEmpty = DataMasterBase_object__object__long___isEntityExistsFromId(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                        v23,
                        (const MethodInfo_32E3974 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        v25 = this->fields.equipUserServantEntityList;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !this->fields.equipUserServantEntityList )
          goto LABEL_43;
        v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
        IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList,
                                   v21,
                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !IsNullOrEmpty )
          goto LABEL_43;
        v27 = *(_OWORD *)(IsNullOrEmpty + 32);
        *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(IsNullOrEmpty + 16);
        *(_OWORD *)&v47.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v47;
        IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v45, 0LL);
        if ( !v26 )
          goto LABEL_43;
        IsNullOrEmpty = (__int64)DataMasterBase_object__object__long___GetEntity(
                                   v26,
                                   IsNullOrEmpty,
                                   (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !v25 )
          goto LABEL_43;
        System_Collections_Generic_List_object___set_Item(
          (System_Collections_Generic_List_object__o *)v25,
          v21,
          (Il2CppObject *)IsNullOrEmpty,
          (const MethodInfo_36D5B48 *)Method_System_Collections_Generic_List_UserServantEntity__set_Item__);
      }
      else
      {
        this->fields._IsDisappearEquip_k__BackingField = 1;
      }
      equipUserServantEntityList = this->fields.equipUserServantEntityList;
      ++v21;
      if ( !equipUserServantEntityList )
        goto LABEL_43;
    }
  }
  p_userServantEntity = &this->fields.userServantEntity;
  if ( this->fields.userServantEntity && !this->fields._IsDisappearSvt_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
    IsNullOrEmpty = sub_1BDB920(long___TypeInfo, 1LL);
    v16 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      v18 = (System_Int64_array *)IsNullOrEmpty;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v47;
      IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v44, 0LL);
      if ( v18 )
      {
        if ( !v18->max_length )
LABEL_60:
          sub_1BDBADC(IsNullOrEmpty, v13, v19);
        v18->m_Items[0] = IsNullOrEmpty;
        if ( v15 )
        {
          if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                  v18,
                  (const MethodInfo_32E3974 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
          {
LABEL_18:
            this->fields._IsDisappearSvt_k__BackingField = 1;
            return;
          }
          IsNullOrEmpty = (__int64)*p_userServantEntity;
          if ( *p_userServantEntity )
          {
            if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)IsNullOrEmpty, 0LL) )
              goto LABEL_18;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
            v28 = *p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
              v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
              *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v47.fields.fakeValue = v29;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v43 = v47;
              IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v43, 0LL);
              if ( v30 )
              {
                Entity = DataMasterBase_object__object__long___GetEntity(
                           v30,
                           IsNullOrEmpty,
                           (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                *p_userServantEntity = (struct UserServantEntity_o *)Entity;
                sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)Entity, v32, v33);
                IsNullOrEmpty = (__int64)*p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  IsNullOrEmpty = (__int64)UserServantEntity__GetOverwriteStatus(
                                             (UserServantEntity_o *)IsNullOrEmpty,
                                             this->fields.questRestrictionInfo,
                                             0LL);
                  if ( IsNullOrEmpty )
                  {
                    this->fields.cost = *(_DWORD *)(IsNullOrEmpty + 28);
                    *(_QWORD *)&this->fields.hp = *(_QWORD *)(IsNullOrEmpty + 16);
                    this->fields.rarityId = *(_DWORD *)(IsNullOrEmpty + 24);
                    v13 = *(unsigned int *)(IsNullOrEmpty + 40);
                    IsNullOrEmpty = (__int64)this->fields.userServantEntity;
                    this->fields.actualRarity = v13;
                    if ( IsNullOrEmpty )
                    {
                      IsNullOrEmpty = UserServantEntity__GetFrameType((UserServantEntity_o *)IsNullOrEmpty, v13, 0LL);
                      userServantEntity = this->fields.userServantEntity;
                      this->fields.frameType = IsNullOrEmpty;
                      if ( userServantEntity )
                      {
                        v36 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                        v35 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v48.fields.currentCryptoKey = v36;
                        *(_QWORD *)&v48.fields.fakeValue = v35;
                        IsNullOrEmpty = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v48, 0LL);
                        v37 = this->fields.userServantEntity;
                        this->fields.svtLimitCount = IsNullOrEmpty;
                        if ( v37 )
                        {
                          CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v37, 0LL);
                          this->fields.commandCodeIdList = CommandCodeIdList;
                          sub_1BDB81C(
                            (CGThumbnailListItem_o *)&this->fields.commandCodeIdList,
                            (int32_t)CommandCodeIdList,
                            v39,
                            v40);
                          IsNullOrEmpty = (__int64)this->fields.userServantEntity;
                          if ( IsNullOrEmpty )
                          {
                            IsGrandServant = UserServantEntity__IsGrandServant(
                                               (UserServantEntity_o *)IsNullOrEmpty,
                                               0LL);
                            isRestrictionGrandServant = this->fields.isRestrictionGrandServant;
                            this->fields._IsGrandServant_k__BackingField = IsGrandServant;
                            this->fields._IsUseGrandBoard_k__BackingField = IsGrandServant && isRestrictionGrandServant;
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
LABEL_43:
    sub_1BDBAD4(IsNullOrEmpty, v13);
  }
}


void __fastcall PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *viewObject; // x20
  __int64 methodPtr_low; // x9
  PartyOrganizationListViewItem_o *v7; // x0
  PartyServantListViewItem_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B405F3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_1BDB878(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_4B405F3 = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v7 = (PartyOrganizationListViewItem_o *)sub_1BDBD94(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_33393652(v7, v8, v9);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( viewObject )
      {
        PartyOrganizationListViewObject__UpdateStartingMemberFriendshipUp(
          (PartyOrganizationListViewObject_o *)viewObject,
          item,
          0LL);
        return;
      }
LABEL_13:
      sub_1BDBAD4(this, item);
    }
  }
}


int32_t __fastcall PartyOrganizationListViewItem__get_ActualRarity(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t __fastcall PartyOrganizationListViewItem__get_AdjustAtk(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
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
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getAdjustAtk(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__get_AdjustHp(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
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
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getAdjustHp(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__get_CanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CanGetBuddyPoint_k__BackingField;
}


int32_t __fastcall PartyOrganizationListViewItem__get_ClassId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.classId;
}


System_String_o *__fastcall PartyOrganizationListViewItem__get_CostumeName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t DispImageLimitCount; // w0
  __int64 v7; // x1
  int32_t v8; // w19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v16; // x0

  if ( (byte_4B405EF & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B405EF = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v12);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1BDBAD4(Instance, v10);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B3FEFD )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    byte_4B3FEFD = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}


int32_t __fastcall PartyOrganizationListViewItem__get_DisplayEquipIndex(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DisplayEquipIndex_k__BackingField;
}


EquipTargetInfo_o *__fastcall PartyOrganizationListViewItem__get_DisplayFollowerInfoEquipTarget(
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
    return 0LL;
}


int32_t __fastcall PartyOrganizationListViewItem__get_DisplayServantType(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( this->fields.followerGrandGraphId > 0 )
    return 2;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    return 0;
}


System_Boolean_array *__fastcall PartyOrganizationListViewItem__get_DuplicationEquipmentFlagList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._DuplicationEquipmentFlagList_k__BackingField;
}


int32_t __fastcall PartyOrganizationListViewItem__get_EquipCost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v4; // x1
  void *equipServantEntityList; // x0

  if ( (byte_4B405DE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, method);
    byte_4B405DE = 1;
  }
  if ( this->fields.isFollower
    || !this->fields.servantEntity
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0LL) )
  {
    return -1;
  }
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0LL )
  {
    sub_1BDBAD4(equipServantEntityList, v4);
  }
  return *((_DWORD *)equipServantEntityList + 38);
}


int32_t __fastcall PartyOrganizationListViewItem__get_EquipFriendShipSkillChange(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipFriendShipSkillChange_k__BackingField;
}


System_Int64_array *__fastcall PartyOrganizationListViewItem__get_EquipIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipIdList;
}


int32_t __fastcall PartyOrganizationListViewItem__get_EquipLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  FollowerInfo_o *followerInfo; // x20
  int32_t followerIndex; // w22
  int32_t DisplayEquipIndex_k__BackingField; // w21
  int32_t ReturnTypeByQuestId; // w3
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x8
  int32_t v12; // w1
  __int64 v13; // x19
  struct System_Object_array *items; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B405E3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4B405E3 = 1;
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList,
                                                                 0LL);
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
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
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
               0LL);
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
      || (IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.equipUserServantEntityList) == 0LL
      || (equipServantEntityList->fields._size <= this->fields._DisplayEquipIndex_k__BackingField
        ? (v12 = 0)
        : (v12 = this->fields._DisplayEquipIndex_k__BackingField),
          (IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          IsNullOrEmpty,
                                                                          v12,
                                                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0LL) )
    {
      sub_1BDBAD4(IsNullOrEmpty, v6);
    }
    items = IsNullOrEmpty[2].fields._items;
    v13 = *(_QWORD *)&IsNullOrEmpty[2].fields._size;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = items;
    *(_QWORD *)&v17.fields.fakeValue = v13;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v17, 0LL);
  }
}


int32_t __fastcall PartyOrganizationListViewItem__get_EquipLimitCountMax(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *equipServantEntityList; // x0

  if ( (byte_4B405E4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, method);
    byte_4B405E4 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0LL) )
    return 0;
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)equipServantEntityList,
                                   0,
                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0LL )
  {
    sub_1BDBAD4(equipServantEntityList, v3);
  }
  return *((_DWORD *)equipServantEntityList + 22);
}


System_String_o *__fastcall PartyOrganizationListViewItem__get_EquipName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0

  if ( (byte_4B405E5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v3);
    byte_4B405E5 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0LL) )
    return v4;
  equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
  if ( !equipServantEntityList
    || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                equipServantEntityList,
                                                                                0,
                                                                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0LL )
  {
    sub_1BDBAD4(equipServantEntityList, v5);
  }
  return ServantEntity__getName((ServantEntity_o *)equipServantEntityList, -1, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall PartyOrganizationListViewItem__get_EquipSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Object_array *items; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // kr00_16
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w1
  struct System_Object_array *v11; // x0 OVERLAPPED
  __int64 v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4B405E1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4B405E1 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  v6 = *(_QWORD *)&v7.fields.fakeValue;
  items = *(struct System_Object_array **)&v7.fields.currentCryptoKey;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipServantEntityList, 0LL) )
  {
    equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
    if ( !equipServantEntityList
      || (equipServantEntityList->fields._size <= this->fields._DisplayEquipIndex_k__BackingField
        ? (DisplayEquipIndex_k__BackingField = 0)
        : (DisplayEquipIndex_k__BackingField = this->fields._DisplayEquipIndex_k__BackingField),
          (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   equipServantEntityList,
                                                                                   DisplayEquipIndex_k__BackingField,
                                                                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0LL) )
    {
      sub_1BDBAD4(equipServantEntityList, v8);
    }
    items = equipServantEntityList->fields._items;
    v6 = *(_QWORD *)&equipServantEntityList->fields._size;
  }
  v11 = items;
  v12 = v6;
  *(_QWORD *)&result.fields.fakeValue = v12;
  *(_QWORD *)&result.fields.currentCryptoKey = v11;
  return result;
}


System_Collections_Generic_List_int__o *__fastcall PartyOrganizationListViewItem__get_EquipSvtIdList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 v11; // x1
  struct System_Collections_Generic_List_ServantEntity__o *equipServantEntityList; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  __int64 v15; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B405E2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B405E2 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v10 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  equipServantEntityList = this->fields.equipServantEntityList;
  if ( !equipServantEntityList )
    sub_1BDBAD4(0LL, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)equipServantEntityList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__) )
  {
    if ( v21.fields._current )
    {
      klass = v21.fields._current[1].klass;
      monitor = v21.fields._current[1].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = klass;
      *(_QWORD *)&v22.fields.fakeValue = monitor;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v22, 0LL);
      if ( !v10 )
        sub_1BDBAD4(v15, (unsigned int)v15);
      items = v10->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1BDBAD4(v15, (unsigned int)v15);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          v15,
          *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = v15;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
  return v10;
}


EquipTargetInfo_o *__fastcall PartyOrganizationListViewItem__get_EquipTarget1(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getEquipTarget1(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall PartyOrganizationListViewItem__get_EquipUserServantEntityList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.equipUserServantEntityList;
}


int64_t __fastcall PartyOrganizationListViewItem__get_EquipUserSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  bool IsNullOrEmpty; // w8
  int64_t result; // x0
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x0
  int32_t DisplayEquipIndex_k__BackingField; // w1
  __int128 v10; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  if ( (byte_4B405DF & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    byte_4B405DF = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.equipUserServantEntityList,
                    0LL);
  result = 0LL;
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
                                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__)) == 0LL) )
    {
      sub_1BDBAD4(equipUserServantEntityList, v5);
    }
    v10 = *(_OWORD *)&equipUserServantEntityList->fields._syncRoot;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntityList->fields._items;
    *(_OWORD *)&v12.fields.fakeValue = v10;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v11 = v12;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v11, 0LL);
  }
  return result;
}


EventMargeItemUpValInfo_array *__fastcall PartyOrganizationListViewItem__get_EventUpValItemList(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUpValItemList;
}


int32_t __fastcall PartyOrganizationListViewItem__get_ExceedCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
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
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getExceedCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


int64_t __fastcall PartyOrganizationListViewItem__get_FatigureTime(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.fatigureTime;
}


FollowerInfo_o *__fastcall PartyOrganizationListViewItem__get_FollowerData(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.followerInfo;
}


int32_t __fastcall PartyOrganizationListViewItem__get_FrameType(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.frameType;
}


bool __fastcall PartyOrganizationListViewItem__get_HaveIndividualityServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.haveIndividualityServant;
}


int32_t __fastcall PartyOrganizationListViewItem__get_InitPos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._InitPos_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsAllOutBattle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAllOutBattle_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsClearedWave(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsConvertOverwriteImage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isConvertOverwriteImage;
}


bool __fastcall PartyOrganizationListViewItem__get_IsDataLost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDataLost_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsDisappearEquip(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisappearEquip_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsDisappearSvt(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisappearSvt_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsDispCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDispCanGetBuddyPoint_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsDispSvtPoint(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDispSvtPoint_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsDuplicateBonus(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDuplicateBonus_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsEmpty(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return !this->fields.userServantEntity && !this->fields.isFollower;
}


bool __fastcall PartyOrganizationListViewItem__get_IsErrorNeedIndividuality(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsErrorNeedIndividuality_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsEventJoin(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LOBYTE(userServantEntity) = UserServantEntity__IsEventJoin(userServantEntity, 0LL);
  return (char)userServantEntity;
}


bool __fastcall PartyOrganizationListViewItem__get_IsEventUpVal(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isEventUpVal;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFatigureRecover(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFatigureRecover;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFixMultipleNpc(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixMultipleNpc;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFixMultipleNpcRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixMultipleNpcRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFixNpc(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixNpc;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFixedMyServantSingle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  return this->fields.index >= 1
      && (questRestrictionInfo = this->fields.questRestrictionInfo) != 0LL
      && questRestrictionInfo->fields.isFixedMyServantSingle;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFixedServantPositionAgreement(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedServantPositionAgreement;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFixedServantPositionRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedServantPositionRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFixedSupportPositionRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedSupportPositionRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsFollower(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isFollower;
}


bool __fastcall PartyOrganizationListViewItem__get_IsGrandServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandServant_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsLeave(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    LOBYTE(userServantEntity) = UserServantEntity__IsLeave(userServantEntity, 0LL);
  return (char)userServantEntity;
}


bool __fastcall PartyOrganizationListViewItem__get_IsMyServantOrNpcRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isMyServantOrNpcRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsNotClassBoardNpc(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotClassBoardNpc_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsNotSupportSingle(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsNotSupportSingle_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsNpcEditablePos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && questRestrictionInfo->fields.isNpcEditablePos;
}


bool __fastcall PartyOrganizationListViewItem__get_IsQuestRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *v3; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  return !this->fields.isFollower
      && (questRestrictionInfo = this->fields.questRestrictionInfo) != 0LL
      && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL)
      || this->fields.index >= 1 && (v3 = this->fields.questRestrictionInfo) != 0LL && v3->fields.isFixedMyServantSingle
      || this->fields.isQuestRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsQuestRestrictionWhole(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isQuestRestrictionWhole;
}


bool __fastcall PartyOrganizationListViewItem__get_IsRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  return questRestrictionInfo && !questRestrictionInfo->fields.isRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsRestrictionGrandServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionGrandServant;
}


bool __fastcall PartyOrganizationListViewItem__get_IsRestrictionMyServantPos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionMyServantPos;
}


bool __fastcall PartyOrganizationListViewItem__get_IsRestrictionNeedStarting(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionNeedStarting;
}


bool __fastcall PartyOrganizationListViewItem__get_IsRestrictionServantPos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isRestrictionServantPos;
}


bool __fastcall PartyOrganizationListViewItem__get_IsServantNumRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isServantNumRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsStartingMember(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t NowPos_k__BackingField; // w19

  if ( (byte_4B405F2 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    byte_4B405F2 = 1;
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


bool __fastcall PartyOrganizationListViewItem__get_IsSupportOnly(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  return !this->fields.isFollower
      && (questRestrictionInfo = this->fields.questRestrictionInfo) != 0LL
      && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL);
}


bool __fastcall PartyOrganizationListViewItem__get_IsTempGrandServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTempGrandServant_k__BackingField;
}


bool __fastcall PartyOrganizationListViewItem__get_IsUniqueIndividualityRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueIndividualityRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsUniqueSvtRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueSvtRestriction;
}


bool __fastcall PartyOrganizationListViewItem__get_IsUseGrandBoard(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUseGrandBoard_k__BackingField;
}


int32_t __fastcall PartyOrganizationListViewItem__get_Level(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
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
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getLv(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__get_MainAtk(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.userServantEntity || this->fields.followerInfo )
    return this->fields.atk;
  else
    return 0;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MainCost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isFollower || !this->fields.servantEntity )
    return 0;
  else
    return this->fields.cost;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MainHp(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.userServantEntity || this->fields.followerInfo )
    return this->fields.hp;
  else
    return 0;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeAtk(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t atk; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v11; // w2
  int v12; // w22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B405DB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v5);
    byte_4B405DB = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( this->fields.userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0LL) )
      return this->fields.atk;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v12 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v15,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v15.fields._current )
          v12 += LODWORD(v15.fields._current[16].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.atk + v12;
    }
LABEL_23:
    sub_1BDBAD4(equipUserServantEntityList, v6);
  }
  if ( !this->fields.followerInfo )
    return 0;
  equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)BasicHelper__IsNullOrEmpty(
                                                                                                (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                                                                                                0LL);
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
        equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        v11 = (int)equipUserServantEntityList;
      }
      else
      {
        v11 = 0;
      }
    }
    else
    {
      v11 = 2;
    }
    if ( followerInfo )
    {
      atk += FollowerInfo__getEquipAtk(followerInfo, followerIndex, v11, 0LL);
      return atk;
    }
    goto LABEL_23;
  }
  return atk;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeCost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t cost; // w19
  bool IsNullOrEmpty; // w0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *equipServantEntityList; // x0

  if ( (byte_4B405DD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantEntity__get_Item__, method);
    byte_4B405DD = 1;
  }
  if ( this->fields.isFollower || !this->fields.servantEntity )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                    0LL);
  cost = this->fields.cost;
  if ( !IsNullOrEmpty )
  {
    equipServantEntityList = (System_Collections_Generic_List_object__o *)this->fields.equipServantEntityList;
    if ( !equipServantEntityList
      || (equipServantEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  equipServantEntityList,
                                                                                  0,
                                                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ServantEntity__get_Item__)) == 0LL )
    {
      sub_1BDBAD4(equipServantEntityList, v6);
    }
    cost += LODWORD(equipServantEntityList[3].fields._syncRoot);
  }
  return cost;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeHp(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t hp; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *equipUserServantEntityList; // x0
  int32_t followerIndex; // w21
  FollowerInfo_o *followerInfo; // x22
  int32_t v11; // w2
  int v12; // w22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B405DC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v5);
    byte_4B405DC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( this->fields.userServantEntity )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.equipUserServantEntityList, 0LL) )
      return this->fields.hp;
    equipUserServantEntityList = this->fields.equipUserServantEntityList;
    if ( equipUserServantEntityList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)equipUserServantEntityList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v12 = 0;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v15,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v15.fields._current )
          v12 += HIDWORD(v15.fields._current[16].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      return this->fields.hp + v12;
    }
LABEL_23:
    sub_1BDBAD4(equipUserServantEntityList, v6);
  }
  if ( !this->fields.followerInfo )
    return 0;
  equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)BasicHelper__IsNullOrEmpty(
                                                                                                (System_Collections_ICollection_o *)this->fields.equipServantEntityList,
                                                                                                0LL);
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
        equipUserServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        v11 = (int)equipUserServantEntityList;
      }
      else
      {
        v11 = 0;
      }
    }
    else
    {
      v11 = 2;
    }
    if ( followerInfo )
    {
      hp += FollowerInfo__getEquipHp(followerInfo, followerIndex, v11, 0LL);
      return hp;
    }
    goto LABEL_23;
  }
  return hp;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MaxLevel(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  if ( this->fields.userServantEntity )
    return UserServantEntity__getLevelMax(this->fields.userServantEntity, 0LL);
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getMaxLv(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__get_NowPos(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._NowPos_k__BackingField;
}


QuestRestrictionInfo_o *__fastcall PartyOrganizationListViewItem__get_QuestRestriction(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall PartyOrganizationListViewItem__get_RarityId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rarityId;
}


ServantEntity_o *__fastcall PartyOrganizationListViewItem__get_Servant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}


ServantLeaderInfo_o *__fastcall PartyOrganizationListViewItem__get_ServantLeader(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  followerIndex = this->fields.followerIndex;
  if ( this->fields.followerGrandGraphId <= 0 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
  }
  else
  {
    ReturnTypeByQuestId = 2;
  }
  return FollowerInfo__getServantLeaderInfo(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__get_ServantName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x1
  ServantAddMaster_o *v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v10; // w21
  const MethodInfo *v11; // x2
  System_String_o *ServantName; // x0
  __int64 v13; // x1

  if ( (byte_4B405D8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantAddMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B405D8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantAddMaster___);
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = (ServantAddMaster_o *)Master_object;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, v7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(SvtId, 0LL);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, v11);
  if ( !v8 )
    sub_1BDBAD4(ServantName, v13);
  return ServantAddMaster__AddIdentifyText(v8, v10, ServantName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall PartyOrganizationListViewItem__get_SvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0 OVERLAPPED
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // kr00_16
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4B405D7 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B405D7 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
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


int32_t __fastcall PartyOrganizationListViewItem__get_SvtLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtLimitCount;
}


System_String_o *__fastcall PartyOrganizationListViewItem__get_SvtNameText(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FollowerInfo_o *followerInfo; // x0
  _BOOL8 IsNpc; // x0
  __int64 v6; // x1
  struct FollowerInfo_o *v7; // x8

  if ( (byte_4B405D9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19073/*"error"*/, method);
    byte_4B405D9 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0LL)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1BDBAD4(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19073/*"error"*/;
  }
}


int32_t __fastcall PartyOrganizationListViewItem__get_SvtPoint(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtPoint_k__BackingField;
}


int32_t __fastcall PartyOrganizationListViewItem__get_SvtPointRank(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtPointRank_k__BackingField;
}


int32_t __fastcall PartyOrganizationListViewItem__get_TimesToRestart(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TimesToRestart_k__BackingField;
}


UserServantEntity_o *__fastcall PartyOrganizationListViewItem__get_UserServant(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


int32_t __fastcall PartyOrganizationListViewItem__get_WarBoardPieceIndex(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.warBoardPieceIndex;
}


System_Int32_array *__fastcall PartyOrganizationListViewItem__get_WaveEnemyClassIds(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._WaveEnemyClassIds_k__BackingField;
}


void __fastcall PartyOrganizationListViewItem__set_CanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CanGetBuddyPoint_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_DisplayEquipIndex(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DisplayEquipIndex_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_DuplicationEquipmentFlagList(
        PartyOrganizationListViewItem_o *this,
        System_Boolean_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DuplicationEquipmentFlagList_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._DuplicationEquipmentFlagList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem__set_EquipFriendShipSkillChange(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipFriendShipSkillChange_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_InitPos(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._InitPos_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsAllOutBattle(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAllOutBattle_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsClearedWave(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsDataLost(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsDisappearEquip(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDisappearEquip_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsDisappearSvt(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDisappearSvt_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsDispCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispCanGetBuddyPoint_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsDispSvtPoint(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispSvtPoint_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsDuplicateBonus(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDuplicateBonus_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsErrorNeedIndividuality(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsErrorNeedIndividuality_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsGrandServant(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandServant_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsNotClassBoardNpc(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotClassBoardNpc_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsNotSupportSingle(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNotSupportSingle_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsTempGrandServant(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTempGrandServant_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_IsUseGrandBoard(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUseGrandBoard_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_NowPos(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NowPos_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_SvtPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtPoint_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_SvtPointRank(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtPointRank_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_TimesToRestart(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TimesToRestart_k__BackingField = value;
}


void __fastcall PartyOrganizationListViewItem__set_WarBoardPieceIndex(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.warBoardPieceIndex = value;
}


void __fastcall PartyOrganizationListViewItem__set_WaveEnemyClassIds(
        PartyOrganizationListViewItem_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B405F9 & 1) == 0 )
  {
    sub_1BDB878(&PartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4B405F9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall PartyOrganizationListViewItem___c___ctor(
        PartyOrganizationListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__354_0(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1BDBAD4(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__354_1(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4B405FA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, names);
    byte_4B405FA = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__354_2(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1BDBAD4(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__354_3(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4B405FB & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, names);
    byte_4B405FB = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


int64_t __fastcall PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__358_0(
        PartyOrganizationListViewItem___c_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return id;
}


bool __fastcall PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__358_1(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B405FC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Count_long___, id);
    this = (PartyOrganizationListViewItem___c_o *)sub_1BDB878(&System_Linq_IGrouping_long__long__TypeInfo, v4);
    byte_4B405FC = 1;
  }
  if ( !id )
    sub_1BDBAD4(this, id);
  klass = id->klass;
  v6 = *(unsigned __int16 *)(&id->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&id->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_long__long__c **)p_offset - 1) != System_Linq_IGrouping_long__long__TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(id, System_Linq_IGrouping_long__long__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))p_method)(
           id,
           *(_QWORD *)(p_method + 8)) >= 1
      && System_Linq_Enumerable__Count_long_(
           (System_Collections_Generic_IEnumerable_TSource__o *)id,
           (const MethodInfo_304FA5C *)Method_System_Linq_Enumerable_Count_long___) > 1;
}


int64_t __fastcall PartyOrganizationListViewItem___c___CheckDuplicationGrandServantEquipment_b__358_2(
        PartyOrganizationListViewItem___c_o *this,
        System_Linq_IGrouping_long__long__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_long__long__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B405FD & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem___c_o *)sub_1BDB878(&System_Linq_IGrouping_long__long__TypeInfo, group);
    byte_4B405FD = 1;
  }
  if ( !group )
    sub_1BDBAD4(this, group);
  klass = group->klass;
  v5 = *(unsigned __int16 *)(&group->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&group->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_long__long__c **)p_offset - 1) != System_Linq_IGrouping_long__long__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(group, System_Linq_IGrouping_long__long__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_long__long__o *, _QWORD))p_method)(
           group,
           *(_QWORD *)(p_method + 8));
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__161_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1BDBAD4(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__161_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1BDBAD4(this, 0LL);
  return drop->fields.eventId;
}


void __fastcall PartyOrganizationListViewItem___c__DisplayClass175_0___ctor(
        PartyOrganizationListViewItem___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyOrganizationListViewItem___c__DisplayClass175_0___SetDuplicationGrandQuestEquipmentMarkFlag_b__0(
        PartyOrganizationListViewItem___c__DisplayClass175_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *_4__this; // x8
  struct System_Int64_array *equipIdList; // x8
  __int64 i; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || (equipIdList = _4__this->fields.equipIdList) == 0LL )
    sub_1BDBAD4(this, id);
  i = this->fields.i;
  if ( (unsigned int)i >= equipIdList->max_length )
    sub_1BDBADC(this, id, method);
  return equipIdList->m_Items[i] == id;
}