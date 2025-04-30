void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32551548(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t limitCount,
        EventUpValSetupInfo_o *eventUpValSetupInfo,
        QuestRestrictionInfo_o *questRestriction,
        FollowerInfo_o *follower,
        int32_t initPosition,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ServantEntity_o *v35; // x8
  DataManager_o *v36; // x24
  struct ServantEntity_o *servantEntity; // x8
  int32_t m_CancellationTokenSource; // w8
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  int v42; // w9

  if ( (byte_4A4A00F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4A4A00F = 1;
  }
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v21, v22);
  this->fields.questRestrictionInfo = questRestriction;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestriction, v23, v24);
  this->fields.followerInfo = follower;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v25, v26);
  this->fields.setupInfo = eventUpValSetupInfo;
  *(_WORD *)&this->fields.isFollower = follower != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)eventUpValSetupInfo, v27, v28);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v33, v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL);
  v35 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_16;
  v36 = Instance;
  Instance = (DataManager_o *)ServantEntity__GetDispLimitCountFromUserServantCollection(
                                v35,
                                this->fields.imageLimitCount,
                                0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.imageLimitCount = (int)Instance;
  if ( !servantEntity
    || (this->fields.classId = servantEntity->fields.classId, !v36)
    || (m_CancellationTokenSource = (int32_t)v36->fields.m_CancellationTokenSource,
        this->fields.rarityId = m_CancellationTokenSource,
        this->fields.actualRarity = m_CancellationTokenSource,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_16:
    sub_1B86614(Instance, v30);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_40770424(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v39, v40);
  this->fields.fatigureTime = -1LL;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  this->fields.isRestrictionServantPos = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  if ( initPosition )
    v42 = initPosition;
  else
    v42 = index + 1;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._InitPos_k__BackingField = v42;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32555344(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        bool isFixNpc,
        int32_t followerDeckId,
        int32_t initPos,
        const MethodInfo *method)
{
  _BOOL4 v11; // w25
  bool v19; // w28
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct FollowerInfo_o **p_followerInfo; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  void *ReturnTypeByQuestId; // x0
  unsigned __int64 v40; // x1
  FollowerInfo_o *followerInfo; // x28
  int32_t v42; // w2
  int32_t v43; // w0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  FollowerInfo_o *v46; // x23
  struct QuestRestrictionInfo_o *v47; // x8
  int32_t followerIndex; // w27
  int32_t v49; // w2
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  FollowerInfo_o *v51; // x28
  struct QuestRestrictionInfo_o *v52; // x8
  int32_t v53; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x23
  int32_t v55; // w2
  Il2CppObject *v56; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w1
  struct ServantEntity_o *servantEntity; // x8
  int32_t classId; // w9
  FollowerInfo_o *v63; // x27
  struct QuestRestrictionInfo_o *v64; // x8
  int32_t v65; // w28
  int32_t v66; // w2
  FollowerInfo_o *v67; // x27
  struct QuestRestrictionInfo_o *v68; // x8
  int32_t v69; // w28
  int32_t v70; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x1
  FollowerInfo_o *v75; // x28
  int32_t v76; // w27
  int v77; // w8
  void *v78; // x24
  unsigned int v79; // w28
  __int64 v80; // x25
  __int64 v81; // x26
  __int64 v82; // x27
  int32_t v83; // w26
  int32_t v84; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v89; // x8
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v91; // x8
  UserEventDataLostEntity_o *v92; // x22
  __int64 v93; // x24
  __int64 v94; // x25
  struct ServantEntity_o *v95; // x8
  char v96; // w22
  UserEventDataLostEntity_o *v97; // x23
  __int64 v98; // x24
  __int64 v99; // x25
  struct QuestRestrictionInfo_o *v100; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v102; // x23
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x2
  const MethodInfo *v105; // x1
  int32_t v106; // w21
  __int64 v107; // x24
  __int64 v108; // x25
  int32_t v109; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v111; // x1
  const MethodInfo *v112; // x2
  QuestRestrictionInfo_o *v113; // x8
  bool IsNotClassBoard; // w20
  QuestPhaseEntity_o *v115; // [xsp+8h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  bool isWhole; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  v11 = isFixNpc;
  v19 = isFixNpc;
  if ( (byte_4A4A00D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v20);
    sub_1B863B8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v21);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v22);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_1B863B8(&DataManager_TypeInfo, v24);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_1B863B8(&NetworkManager_TypeInfo, v26);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_4A4A00D = 1;
  }
  isWhole = 0;
  v115 = 0LL;
  entity = 0LL;
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v29, v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v32, v33);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v34,
    v35);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)follower, v37, v38);
  this->fields.isFixNpc = v19;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId(
                                    this->fields.questRestrictionInfo->fields.questId,
                                    0LL);
    v42 = (int)ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_122;
  }
  else
  {
    v42 = 0;
    if ( !followerInfo )
      goto LABEL_122;
  }
  v43 = FollowerInfo__getIndex(followerInfo, followerClassId, v42, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v43;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v44, v45);
  v46 = this->fields.followerInfo;
  v47 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( v47 )
  {
    ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId(v47->fields.questId, 0LL);
    v49 = (int)ReturnTypeByQuestId;
    if ( !v46 )
      goto LABEL_122;
  }
  else
  {
    v49 = 0;
    if ( !v46 )
      goto LABEL_122;
  }
  ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v46, followerIndex, v49, 0LL);
  ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_122;
  ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                          (DataManager_o *)ReturnTypeByQuestId,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v51 = this->fields.followerInfo;
  v52 = this->fields.questRestrictionInfo;
  v53 = this->fields.followerIndex;
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( v52 )
  {
    ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId(v52->fields.questId, 0LL);
    v55 = (int)ReturnTypeByQuestId;
    if ( !v51 )
      goto LABEL_122;
  }
  else
  {
    v55 = 0;
    if ( !v51 )
      goto LABEL_122;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getSvtId(v51, v53, v55, 0LL);
  if ( !v54 )
    goto LABEL_122;
  v56 = DataMasterBase_object__object__int___GetEntity(
          v54,
          (int32_t)ReturnTypeByQuestId,
          (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v56;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v56, v58, v59);
  this->fields.cost = 0;
  if ( !ServantLeaderInfo )
    goto LABEL_122;
  ReturnTypeByQuestId = ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo, 0LL);
  if ( !ReturnTypeByQuestId )
    goto LABEL_122;
  *(_QWORD *)&this->fields.hp = *((_QWORD *)ReturnTypeByQuestId + 2);
  this->fields.rarityId = *((_DWORD *)ReturnTypeByQuestId + 6);
  v60 = *((_DWORD *)ReturnTypeByQuestId + 10);
  this->fields.actualRarity = v60;
  ReturnTypeByQuestId = (void *)ServantLeaderInfo__GetFrameType(ServantLeaderInfo, v60, 0LL);
  servantEntity = this->fields.servantEntity;
  this->fields.frameType = (int)ReturnTypeByQuestId;
  if ( !servantEntity )
    goto LABEL_122;
  classId = servantEntity->fields.classId;
  v63 = this->fields.followerInfo;
  v64 = this->fields.questRestrictionInfo;
  v65 = this->fields.followerIndex;
  this->fields.classId = classId;
  if ( v64 )
  {
    ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId(v64->fields.questId, 0LL);
    v66 = (int)ReturnTypeByQuestId;
    if ( !v63 )
      goto LABEL_122;
  }
  else
  {
    v66 = 0;
    if ( !v63 )
      goto LABEL_122;
  }
  ReturnTypeByQuestId = (void *)FollowerInfo__getLimitCount(v63, v65, v66, 0LL);
  v67 = this->fields.followerInfo;
  v68 = this->fields.questRestrictionInfo;
  v69 = this->fields.followerIndex;
  this->fields.svtLimitCount = (int)ReturnTypeByQuestId;
  if ( v68 )
  {
    ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId(v68->fields.questId, 0LL);
    v70 = (int)ReturnTypeByQuestId;
    if ( !v67 )
      goto LABEL_122;
  }
  else
  {
    v70 = 0;
    if ( !v67 )
      goto LABEL_122;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v67, v69, v70, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v72, v73);
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, v74) && *p_questRestrictionInfo )
  {
    v75 = this->fields.followerInfo;
    v76 = this->fields.followerIndex;
    ReturnTypeByQuestId = (void *)FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
    if ( !v75 )
      goto LABEL_122;
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_39899616(
                                        v75,
                                        questRestrictionInfo,
                                        v76,
                                        (int32_t)ReturnTypeByQuestId,
                                        this->fields._InitPos_k__BackingField,
                                        &this->fields.isQuestRestrictionWhole,
                                        0LL);
  }
  else
  {
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v40 = (unsigned int)initPos;
  else
    v40 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v40;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(
                                        questRestrictionInfo,
                                        v40,
                                        0LL),
        ((unsigned __int8)ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_122;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_122;
    ReturnTypeByQuestId = DataManager__GetMasterData_object_(
                            (DataManager_o *)ReturnTypeByQuestId,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_122;
    ReturnTypeByQuestId = UserServantMaster__getOrganizationList((UserServantMaster_o *)ReturnTypeByQuestId, 0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_122;
    v77 = *((_DWORD *)ReturnTypeByQuestId + 6);
    v78 = ReturnTypeByQuestId;
    if ( v77 >= 1 )
    {
      v79 = 0;
      while ( 1 )
      {
        if ( v79 >= v77 )
          sub_1B8661C(ReturnTypeByQuestId, v40);
        v80 = *((_QWORD *)v78 + (int)v79 + 4);
        if ( !v80 )
          goto LABEL_122;
        v82 = *(_QWORD *)(v80 + 80);
        v81 = *(_QWORD *)(v80 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v118.fields.currentCryptoKey = v82;
        *(_QWORD *)&v118.fields.fakeValue = v81;
        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v118, 0LL);
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v80 + 96),
                0LL);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v80, 0, 0LL);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v83,
                                 v84,
                                 DispLimitCount,
                                 0LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v80, 0LL);
        ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestriction_41486800(
                                        questRestrictionInfo,
                                        &isWhole,
                                        ServantIndividuality,
                                        Rarity,
                                        *(_DWORD *)(v80 + 256),
                                        this->fields._InitPos_k__BackingField,
                                        1,
                                        0LL);
        if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
        {
          ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41508816(
                                          questRestrictionInfo,
                                          ServantIndividuality,
                                          this->fields._InitPos_k__BackingField,
                                          0LL);
          if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
            break;
        }
        v77 = *((_DWORD *)v78 + 6);
        if ( (int)++v79 >= v77 )
          goto LABEL_66;
      }
      this->fields.haveIndividualityServant = 1;
    }
  }
  else
  {
    if ( *p_questRestrictionInfo )
      IsNpcMulitipleOrOnly = QuestRestrictionInfo__IsNpcMulitipleOrOnly(*p_questRestrictionInfo, 0LL);
    else
      IsNpcMulitipleOrOnly = 0;
    if ( v11 && IsNpcMulitipleOrOnly )
    {
      ReturnTypeByQuestId = this->fields.questRestrictionInfo;
      this->fields.isFixMultipleNpc = 1;
      if ( !ReturnTypeByQuestId )
        goto LABEL_122;
      ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsUseOldMaster(
                                      (QuestRestrictionInfo_o *)ReturnTypeByQuestId,
                                      0LL);
      if ( !*p_questRestrictionInfo )
        goto LABEL_122;
      if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
          goto LABEL_66;
      }
      else
      {
        ReturnTypeByQuestId = (void *)QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0LL);
        if ( ((unsigned __int8)ReturnTypeByQuestId & 1) == 0 )
          goto LABEL_66;
      }
      if ( !follower )
        goto LABEL_122;
      this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    }
    else
    {
      this->fields.isFixMultipleNpc = 0;
    }
  }
LABEL_66:
  v89 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v89 && v89->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A48C25 )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v40);
      byte_4A48C25 = 1;
    }
    ReturnTypeByQuestId = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      ReturnTypeByQuestId = NetworkManager_TypeInfo;
    }
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_122;
    ReturnTypeByQuestId = (void *)UserEventDataLostMaster__TryGetEntity(
                                    (UserEventDataLostMaster_o *)Master_object,
                                    &entity,
                                    *(_QWORD *)(*((_QWORD *)ReturnTypeByQuestId + 23) + 64LL),
                                    (*p_questRestrictionInfo)->fields.dataLostBattleId,
                                    0LL);
    if ( ((unsigned __int8)ReturnTypeByQuestId & 1) != 0 )
    {
      v91 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_122;
      v92 = entity;
      v94 = *(_QWORD *)&v91->fields.id.fields.currentCryptoKey;
      v93 = *(_QWORD *)&v91->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v119.fields.currentCryptoKey = v94;
      *(_QWORD *)&v119.fields.fakeValue = v93;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v119, 0LL);
      if ( !v92 )
        goto LABEL_122;
      ReturnTypeByQuestId = (void *)UserEventDataLostEntity__IsRestart(v92, (int32_t)ReturnTypeByQuestId, 0LL);
      v95 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_122;
      v96 = (char)ReturnTypeByQuestId;
      v97 = entity;
      v99 = *(_QWORD *)&v95->fields.id.fields.currentCryptoKey;
      v98 = *(_QWORD *)&v95->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v120.fields.currentCryptoKey = v99;
      *(_QWORD *)&v120.fields.fakeValue = v98;
      ReturnTypeByQuestId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v120, 0LL);
      if ( !v97 )
        goto LABEL_122;
      if ( (v96 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v97,
                                                         (int32_t)ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v97, (int32_t)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  v100 = this->fields.questRestrictionInfo;
  this->fields.isFatigureRecover = 0;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields.fatigureTime = -1LL;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v100 )
  {
    eventId = v100->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_122;
    v102 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = *p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_122;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v103) )
        {
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v105);
          if ( !ReturnTypeByQuestId )
            goto LABEL_122;
          v106 = *((_DWORD *)ReturnTypeByQuestId + 56);
          this->fields._SvtPoint_k__BackingField = v106;
          ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v40);
          if ( !ReturnTypeByQuestId )
            goto LABEL_122;
          v108 = *((_QWORD *)ReturnTypeByQuestId + 6);
          v107 = *((_QWORD *)ReturnTypeByQuestId + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v121.fields.currentCryptoKey = v108;
          *(_QWORD *)&v121.fields.fakeValue = v107;
          v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v121, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v102, eventId, v106, v109, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v104);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v40) )
    goto LABEL_117;
  ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, v111);
  if ( !ReturnTypeByQuestId )
    goto LABEL_122;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v113 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v115,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = v115;
          if ( !v115 )
            goto LABEL_122;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v115, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v40);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v113) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_121;
        }
      }
LABEL_122:
      sub_1B86614(ReturnTypeByQuestId, v40);
    }
  }
  else
  {
LABEL_117:
    LOBYTE(v113) = 0;
  }
LABEL_121:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v113;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v112);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32580988(
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
        const MethodInfo *method)
{
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
  struct UserServantEntity_o **p_userServantEntity; // x23
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 Instance; // x0
  __int64 v46; // x1
  struct UserServantEntity_o *v47; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v48; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x27
  __int64 v50; // x19
  __int64 v51; // x28
  Il2CppObject *v52; // x0
  struct ServantEntity_o **p_servantEntity; // x27
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  ServantLimitMaster_o *v56; // x28
  int32_t v57; // w29
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int v60; // w9
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x25
  struct System_Int32_array *v63; // x0
  struct System_Int32_array **p_equipSvtIdList; // x26
  __int64 v65; // x0
  int32_t v66; // w1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x23
  int32_t v68; // w1
  struct UserServantEntity_o *v69; // x8
  __int64 v70; // x19
  __int64 v71; // x24
  UserServantEntity_o *v72; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x2
  QuestRestrictionInfo_o *v77; // x24
  struct UserServantEntity_o *v78; // x8
  __int64 v79; // x19
  __int64 v80; // x25
  int32_t v81; // w25
  int32_t v82; // w26
  QuestRestrictionInfo_o *v83; // x24
  UserServantEntity_o *v84; // x8
  __int64 v85; // x19
  __int64 v86; // x25
  int32_t v87; // w0
  struct QuestRestrictionInfo_o *v88; // x8
  bool v89; // w9
  UserServantEntity_o *v90; // x9
  UserEventServantFatigueMaster_o *v91; // x24
  int32_t eventId; // w25
  __int64 v93; // x19
  __int64 v94; // x26
  int64_t v95; // x19
  struct QuestRestrictionInfo_o *v96; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v98; // x8
  UserEventAlloutBattleMaster_o *v99; // x25
  __int64 v100; // x19
  __int64 v101; // x26
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v103; // x8
  UserEventDataLostEntity_o *v104; // x24
  __int64 v105; // x19
  __int64 v106; // x25
  UserServantEntity_o *v107; // x8
  char v108; // w24
  UserEventDataLostEntity_o *v109; // x25
  __int64 v110; // x19
  __int64 v111; // x26
  int v112; // w8
  __int64 v113; // x24
  unsigned int v114; // w28
  __int64 v115; // x25
  __int64 v116; // x19
  __int64 v117; // x26
  int32_t v118; // w19
  int32_t v119; // w26
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  int32_t v123; // w22
  EventServantPointRankMaster_o *v124; // x23
  UserServantEntity_o *v125; // x8
  __int128 v126; // q0
  UserEventServantPointMaster_o *v127; // x24
  int64_t v128; // x25
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v130; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v133; // x2
  UserServantEntity_o *v134; // x8
  __int128 v135; // q0
  Il2CppObject *v136; // x22
  UserServantEntity_o *v137; // x8
  __int128 v138; // q0
  System_Int64_array *v139; // x23
  PartyOrganizationListViewItem_o *v140; // x0
  int32_t v141; // w1
  const MethodInfo *v142; // x2
  QuestRestrictionInfo_o *v144; // [xsp+28h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+90h] [xbp-A0h]
  UserEventServantPointEntity_o *v149; // [xsp+B0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+BCh] [xbp-74h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+C0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_4A4A00C & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v19);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v20);
    sub_1B863B8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v21);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v22);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v23);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v24);
    sub_1B863B8(&DataManager_TypeInfo, v25);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v27);
    sub_1B863B8(&int___TypeInfo, v28);
    sub_1B863B8(&long___TypeInfo, v29);
    sub_1B863B8(&NetworkManager_TypeInfo, v30);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4A4A00C = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  isWhole = 0;
  v149 = 0LL;
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v35, v36);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  v144 = questRestrictionInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v37, v38);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v39,
    v40);
  this->fields.followerInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v41, v42);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v43, v44);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_143;
  v48 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v51 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v153.fields.currentCryptoKey = v51;
  *(_QWORD *)&v153.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v153, 0LL);
  if ( !v49 )
    goto LABEL_143;
  v52 = DataMasterBase_object__object__int___GetEntity(
          v49,
          Instance,
          (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v52;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v52, v54, v55);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*v48 )
    goto LABEL_143;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*v48)[5], 0LL);
  if ( !*v48 )
    goto LABEL_143;
  v57 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*v48)[6], 0LL);
  if ( !v56 )
    goto LABEL_143;
  ServantLimitMaster__GetEntity(v56, v57, Instance, 0LL);
  if ( initPos )
    v60 = initPos;
  else
    v60 = index + 1;
  this->fields._InitPos_k__BackingField = v60;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v61 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL)) == 0LL )
  {
    v66 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    p_questRestrictionInfo = &this->fields.questRestrictionInfo;
    sub_1B8635C((CGThumbnailListItem_o *)p_equipSvtIdList, v66, v58, v59);
    if ( !userServantEntity )
      goto LABEL_143;
    Instance = (__int64)UserServantEntity__GetOverwriteStatus(userServantEntity, v144, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_143;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !Instance )
      goto LABEL_143;
    this->fields.cost = *(_DWORD *)(Instance + 28);
    *(_QWORD *)&this->fields.hp = *(_QWORD *)(Instance + 16);
    this->fields.rarityId = *(_DWORD *)(Instance + 24);
    v68 = *(_DWORD *)(Instance + 40);
    this->fields.actualRarity = v68;
    Instance = UserServantEntity__GetFrameType(userServantEntity, v68, 0LL);
    v69 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v69 )
      goto LABEL_143;
    v71 = *(_QWORD *)&v69->fields.limitCount.fields.currentCryptoKey;
    v70 = *(_QWORD *)&v69->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v154.fields.currentCryptoKey = v71;
    *(_QWORD *)&v154.fields.fakeValue = v70;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v154, 0LL);
    v72 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v72 )
      goto LABEL_143;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v72, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v74, v75);
    v77 = this->fields.questRestrictionInfo;
    if ( v77 )
    {
      v78 = this->fields.userServantEntity;
      if ( !v78 )
        goto LABEL_143;
      v80 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
      v79 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v155.fields.currentCryptoKey = v80;
      *(_QWORD *)&v155.fields.fakeValue = v79;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v155, 0LL);
      if ( !*v48 )
        goto LABEL_143;
      v81 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*v48)[6], 0LL);
      if ( !*v48 )
        goto LABEL_143;
      v82 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*v48, 0, 0LL);
      if ( !*v48 )
        goto LABEL_143;
      Instance = QuestRestrictionInfo__IsRestriction_41486520(
                   v77,
                   &this->fields.isQuestRestrictionWhole,
                   v81,
                   v82,
                   Instance,
                   this->fields.rarityId,
                   (*v48)[16].fields.currentCryptoKey,
                   this->fields._InitPos_k__BackingField,
                   1,
                   0LL);
      v83 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v83 )
      {
        v84 = (UserServantEntity_o *)*v48;
        if ( !*v48 )
          goto LABEL_143;
        v86 = *(_QWORD *)&v84->fields.svtId.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v84->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v156.fields.currentCryptoKey = v86;
        *(_QWORD *)&v156.fields.fakeValue = v85;
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v156, 0LL);
        Instance = QuestRestrictionInfo__IsConvertOverwriteImage(v83, v87, 0LL);
        v88 = *p_questRestrictionInfo;
        v89 = Instance & 1;
      }
      else
      {
        v88 = 0LL;
        v89 = 0;
      }
    }
    else
    {
      v88 = 0LL;
      v89 = 0;
      *(_WORD *)&this->fields.isQuestRestriction = 0;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
    }
    this->fields.isConvertOverwriteImage = v89;
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
    if ( !v88 )
      goto LABEL_142;
    if ( v88->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_143;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_143;
      v90 = (UserServantEntity_o *)*v48;
      if ( !*v48 )
        goto LABEL_143;
      v91 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v94 = *(_QWORD *)&v90->fields.svtId.fields.currentCryptoKey;
      v93 = *(_QWORD *)&v90->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v157.fields.currentCryptoKey = v94;
      *(_QWORD *)&v157.fields.fakeValue = v93;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v157, 0LL);
      if ( !v91 )
        goto LABEL_143;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v91,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v95 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0LL);
        if ( v95 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v96 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_143;
    if ( v96->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v96->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_143;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v98 = (UserServantEntity_o *)*v48;
      if ( !*v48 )
        goto LABEL_143;
      v99 = (UserEventAlloutBattleMaster_o *)Instance;
      v101 = *(_QWORD *)&v98->fields.svtId.fields.currentCryptoKey;
      v100 = *(_QWORD *)&v98->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v158.fields.currentCryptoKey = v101;
      *(_QWORD *)&v158.fields.fakeValue = v100;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v158, 0LL);
      if ( !*p_questRestrictionInfo || !v99 )
        goto LABEL_143;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v99,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0LL);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_143;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v46);
        byte_4A48C25 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !*p_questRestrictionInfo || !Master_object )
        goto LABEL_143;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_object,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v103 = (UserServantEntity_o *)*v48;
        if ( !*v48 )
          goto LABEL_143;
        v104 = entity;
        v106 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
        v105 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v159.fields.currentCryptoKey = v106;
        *(_QWORD *)&v159.fields.fakeValue = v105;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v159, 0LL);
        if ( !v104 )
          goto LABEL_143;
        Instance = UserEventDataLostEntity__IsRestart(v104, Instance, 0LL);
        v107 = (UserServantEntity_o *)*v48;
        if ( !*v48 )
          goto LABEL_143;
        v108 = Instance;
        v109 = entity;
        v111 = *(_QWORD *)&v107->fields.svtId.fields.currentCryptoKey;
        v110 = *(_QWORD *)&v107->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v160.fields.currentCryptoKey = v111;
        *(_QWORD *)&v160.fields.fakeValue = v110;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v160, 0LL);
        if ( !v109 )
          goto LABEL_143;
        if ( (v108 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v109, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v109, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( v144 )
    {
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(
                   v144,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_143;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_143;
        v112 = *(_DWORD *)(Instance + 24);
        v113 = Instance;
        if ( v112 >= 1 )
        {
          v114 = 0;
          while ( 1 )
          {
            if ( v114 >= v112 )
              goto LABEL_144;
            v115 = *(_QWORD *)(v113 + 8LL * (int)v114 + 32);
            if ( !v115 )
              goto LABEL_143;
            v117 = *(_QWORD *)(v115 + 80);
            v116 = *(_QWORD *)(v115 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v161.fields.currentCryptoKey = v117;
            *(_QWORD *)&v161.fields.fakeValue = v116;
            v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v161, 0LL);
            v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v115 + 96),
                     0LL);
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v115, 0, 0LL);
            ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v144, v118, v119, DispLimitCount, 0LL);
            Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v115, 0LL);
            Instance = QuestRestrictionInfo__IsRestriction_41486800(
                         v144,
                         &isWhole,
                         ServantIndividuality,
                         Rarity,
                         *(_DWORD *)(v115 + 256),
                         this->fields._InitPos_k__BackingField,
                         1,
                         0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_41508816(
                           v144,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0LL);
              if ( (Instance & 1) == 0 )
                break;
            }
            v112 = *(_DWORD *)(v113 + 24);
            if ( (int)++v114 >= v112 )
              goto LABEL_107;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_107:
    if ( !*p_questRestrictionInfo )
      goto LABEL_143;
    v123 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_143;
    v124 = (EventServantPointRankMaster_o *)Instance;
    Instance = EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v123, 0LL);
    if ( (Instance & 1) != 0 )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v125 = (UserServantEntity_o *)*v48;
      if ( !*v48 )
        goto LABEL_143;
      v126 = *(_OWORD *)&v125->fields.userId.fields.fakeValue;
      v127 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v125->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v148.fields.fakeValue = v126;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v147 = v148;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v147, 0LL);
      if ( !*v48 )
        goto LABEL_143;
      v128 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*v48, 0LL);
      if ( !v127 )
        goto LABEL_143;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v127, &v149, v128, v123, Instance, 0LL) )
      {
        Instance = (__int64)v149;
        if ( !v149 )
          goto LABEL_143;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v149, 0LL);
      }
      Instance = (__int64)*v48;
      if ( !*v48 )
        goto LABEL_143;
      v130 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v124, v123, v130, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v123, v133);
    }
    v134 = (UserServantEntity_o *)*v48;
    if ( !*v48 )
      goto LABEL_143;
    v135 = *(_OWORD *)&v134->fields.id.fields.fakeValue;
    *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v134->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v148.fields.fakeValue = v135;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v146 = v148;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v146, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v136 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1B86460(long___TypeInfo, 1LL);
      v137 = (UserServantEntity_o *)*v48;
      if ( !*v48 )
        goto LABEL_143;
      v138 = *(_OWORD *)&v137->fields.id.fields.fakeValue;
      v139 = (System_Int64_array *)Instance;
      *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v137->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v148.fields.fakeValue = v138;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v145 = v148;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v145, 0LL);
      if ( !v139 )
        goto LABEL_143;
      if ( !v139->max_length )
LABEL_144:
        sub_1B8661C(Instance, v46);
      v139->m_Items[0] = Instance;
      if ( !v136 )
        goto LABEL_143;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v136,
              v139,
              (const MethodInfo_3215DB8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
      {
LABEL_141:
        this->fields._IsDisappearSvt_k__BackingField = 1;
        goto LABEL_142;
      }
    }
    Instance = (__int64)*v48;
    if ( *v48 )
    {
      if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL) )
        goto LABEL_141;
LABEL_142:
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v76);
      return;
    }
LABEL_143:
    sub_1B86614(Instance, v46);
  }
  v62 = v61;
  v63 = (struct System_Int32_array *)sub_1B864F4(v61, int___TypeInfo);
  if ( v63 )
  {
    this->fields.equipSvtIdList = v63;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v65 = sub_1B864F4(v62, int___TypeInfo);
    if ( v65 )
    {
      v66 = v65;
      goto LABEL_21;
    }
  }
  v140 = (PartyOrganizationListViewItem_o *)sub_1B868D4(v62);
  PartyOrganizationListViewItem__SetCanGetBuddyPoint(v140, v141, v142);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32589396(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        const MethodInfo *method)
{
  bool v15; // w26
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
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
  UserServantEntity_array *Instance; // x0
  __int64 v34; // x1
  int max_length; // w8
  UserServantEntity_array *v36; // x22
  unsigned int v37; // w26
  UserServantEntity_o *v38; // x23
  __int64 v39; // x24
  __int64 v40; // x25
  int32_t v41; // w24
  int32_t v42; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  const MethodInfo *v46; // x2
  struct QuestRestrictionInfo_o *v47; // x8
  int32_t eventId; // w21
  bool isWhole; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v15 = isFollower;
  if ( (byte_4A4A00E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_1B863B8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1B863B8(&DataManager_TypeInfo, v17);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A4A00E = 1;
  }
  isWhole = 0;
  *(_QWORD *)&this->fields.nameLimitCount = -1LL;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v20, v21);
  this->fields.followerInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
  this->fields.isFollower = v15;
  this->fields.isFixNpc = 0;
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  this->fields.setupInfo = setupInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.servantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v28, v29);
  if ( initPos )
    v32 = initPos;
  else
    v32 = index + 1;
  *(_QWORD *)&this->fields.cost = 0LL;
  *(_QWORD *)&this->fields.atk = 0LL;
  *(_QWORD *)&this->fields.rarityId = 0LL;
  this->fields._InitPos_k__BackingField = v32;
  this->fields._NowPos_k__BackingField = index + 1;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_30:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_31;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(questRestrictionInfo, v32, 0LL) )
  {
    if ( questRestrictionInfo->fields.isNpcOnlyBattle && questRestrictionInfo->fields.myServantNumMax < index )
    {
      this->fields.frameType = 11;
      this->fields.isFixMultipleNpcRestriction = 1;
      goto LABEL_31;
    }
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL)
      && questRestrictionInfo->fields.servantNumMax <= index
      || questRestrictionInfo->fields.isNpcMultipleBattle
      && !questRestrictionInfo->fields.isNpcEditablePos
      && !isMyServant )
    {
      this->fields.frameType = 11;
      this->fields.isServantNumRestriction = 1;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  this->fields.frameType = 9;
  this->fields.isMyServantOrNpcRestriction = 1;
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  max_length = Instance->max_length;
  v36 = Instance;
  if ( max_length >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      if ( v37 >= max_length )
        sub_1B8661C(Instance, v34);
      v38 = v36->m_Items[v37];
      if ( !v38 )
        goto LABEL_39;
      v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v40;
      *(_QWORD *)&v50.fields.fakeValue = v39;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v50, 0LL);
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v38->fields.limitCount, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(v38, 0, 0LL);
      ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                               questRestrictionInfo,
                               v41,
                               v42,
                               DispLimitCount,
                               0LL);
      Rarity = UserServantEntity__getRarity(v38, 0LL);
      Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestriction_41486800(
                                              questRestrictionInfo,
                                              &isWhole,
                                              ServantIndividuality,
                                              Rarity,
                                              v38->fields.lv,
                                              this->fields._InitPos_k__BackingField,
                                              1,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41508816(
                                                questRestrictionInfo,
                                                ServantIndividuality,
                                                this->fields._InitPos_k__BackingField,
                                                0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
      max_length = v36->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_31;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_31:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v30, v31);
  this->fields.fatigureTime = -1LL;
  v47 = this->fields.questRestrictionInfo;
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
  if ( !v47 )
    goto LABEL_37;
  eventId = v47->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_39:
    sub_1B86614(Instance, v34);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v46);
  }
LABEL_37:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v46);
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
  System_Func_object__object__o *_9__315_0; // x20
  Il2CppObject *v69; // x29
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x29
  PartyOrganizationListViewItem___c_c *v74; // x8
  System_Func_object__bool__o *_9__315_1; // x20
  Il2CppObject *v76; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x29
  PartyOrganizationListViewItem___c_c *v81; // x8
  System_Func_object__object__o *_9__315_2; // x20
  Il2CppObject *v83; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x28
  PartyOrganizationListViewItem___c_c *v88; // x8
  System_Func_object__bool__o *_9__315_3; // x20
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
  if ( (byte_4A4A033 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventCampaignMaster___, infoList);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_EventQuestMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___, v12);
    sub_1B863B8(&Method_System_Linq_Enumerable_Single_string___, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16);
    sub_1B863B8(&EventMargeItemUpValInfo_TypeInfo, v17);
    sub_1B863B8(&System_Func_EventEntity_ScriptData__string__TypeInfo, v18);
    sub_1B863B8(&System_Func_string__bool__TypeInfo, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_1B863B8(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_0__, v24);
    sub_1B863B8(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_1__, v25);
    sub_1B863B8(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_2__, v26);
    sub_1B863B8(&Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_3__, v27);
    sub_1B863B8(&PartyOrganizationListViewItem___c_TypeInfo, v28);
    sub_1B863B8(&StringLiteral_1/*""*/, v29);
    byte_4A4A033 = 1;
  }
  memset(&v110, 0, sizeof(v110));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !v30 )
    sub_1B86614(Instance, v32);
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)v30,
                                                                         (int64_t)Instance[6].monitor,
                                                                         0LL);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( FriendshipUpCampaigns )
  {
    v105 = (EventQuestMaster_o *)v34;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v109,
      FriendshipUpCampaigns,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v110 = v109;
    while ( 1 )
    {
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v110,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v36 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v110,
            (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
          return;
        }
        current = (EventCampaignEntity_o *)v110.fields._current;
        if ( !v110.fields._current )
          sub_1B86614(v36, v37);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v110.fields._current[2].monitor;
        if ( !monitor || !monitor[1].monitor )
          goto LABEL_29;
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1B86614(v36, v37);
        v41 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v42 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v111.fields.currentCryptoKey = v41;
        *(_QWORD *)&v111.fields.fakeValue = v42;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v111, 0LL);
        if ( System_Linq_Enumerable__Contains_int_(
               monitor,
               v43,
               (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
LABEL_29:
          if ( !(*v4)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v4);
          v44 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
          v46 = this->fields.userServantEntity;
          if ( !v46 )
            sub_1B86614(v44, v45);
          v47 = (UserServantMaster_o *)v44;
          v48 = *(_QWORD *)&v46->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v46->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v112.fields.currentCryptoKey = v48;
          *(_QWORD *)&v112.fields.fakeValue = v49;
          v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v112, 0LL);
          if ( !v47 )
            sub_1B86614(v50, (unsigned int)v50);
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
              sub_1B86614(HeroineData, v52);
            questId = questRestrictionInfo->fields.questId;
            questPhase = questRestrictionInfo->fields.questPhase;
            v57 = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !v57 )
              sub_1B86614(0LL, v58);
            if ( !v105 )
              sub_1B86614(v57, v58);
            if ( !EventQuestMaster__IsEventNotIncluded(
                    v105,
                    eventId,
                    questId,
                    questPhase,
                    7,
                    (int64_t)v57[6].monitor,
                    0LL) )
              break;
          }
        }
      }
      v59 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_39869604(v59, eventId, 0LL);
      OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId(current, 0LL);
      if ( !v35 )
        sub_1B86614(OnlyMaxFuncGroupId, v61);
      v62 = OnlyMaxFuncGroupId;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v35,
                 eventId,
                 (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Entity )
        sub_1B86614(0LL, v64);
      v65 = v4;
      v66 = (System_Collections_Generic_IEnumerable_TSource__o *)Entity[7].monitor;
      if ( !v66 )
        sub_1B86614(Entity, v64);
      if ( !v66[1].monitor )
        break;
      v67 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v67 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__315_0 = (System_Func_object__object__o *)v67->static_fields->__9__315_0;
      if ( !_9__315_0 )
      {
        if ( !v67->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v67);
          v67 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v69 = (Il2CppObject *)v67->static_fields->__9;
        _9__315_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__315_0,
          v69,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_0__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__315_0 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__315_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__315_0, (int32_t)_9__315_0, v71, v72);
      }
      v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v66,
                                                                   (System_Func_TSource__TResult__o *)_9__315_0,
                                                                   (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v74 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v74 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__315_1 = (System_Func_object__bool__o *)v74->static_fields->__9__315_1;
      if ( !_9__315_1 )
      {
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v76 = (Il2CppObject *)v74->static_fields->__9;
        _9__315_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__315_1,
          v76,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_1__,
          0LL);
        v77 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v77->__9__315_1 = (struct System_Func_string__bool__o *)_9__315_1;
        sub_1B8635C((CGThumbnailListItem_o *)&v77->__9__315_1, (int32_t)_9__315_1, v78, v79);
      }
      v80 = System_Linq_Enumerable__Single_object__49963968(
              v73,
              (System_Func_TSource__bool__o *)_9__315_1,
              (const MethodInfo_2FA63C0 *)Method_System_Linq_Enumerable_Single_string___);
      if ( !v66[1].monitor )
        goto LABEL_61;
      v81 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v81 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__315_2 = (System_Func_object__object__o *)v81->static_fields->__9__315_2;
      if ( !_9__315_2 )
      {
        if ( !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81);
          v81 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v83 = (Il2CppObject *)v81->static_fields->__9;
        _9__315_2 = (System_Func_object__object__o *)sub_1B86604(System_Func_EventEntity_ScriptData__string__TypeInfo);
        System_Func_object__object____ctor(
          _9__315_2,
          v83,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_2__,
          0LL);
        v84 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v84->__9__315_2 = (struct System_Func_EventEntity_ScriptData__string__o *)_9__315_2;
        sub_1B8635C((CGThumbnailListItem_o *)&v84->__9__315_2, (int32_t)_9__315_2, v85, v86);
      }
      v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v66,
                                                                   (System_Func_TSource__TResult__o *)_9__315_2,
                                                                   (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_EventEntity_ScriptData__string___);
      v88 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v88 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__315_3 = (System_Func_object__bool__o *)v88->static_fields->__9__315_3;
      if ( !_9__315_3 )
      {
        if ( !v88->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v88);
          v88 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v90 = (Il2CppObject *)v88->static_fields->__9;
        _9__315_3 = (System_Func_object__bool__o *)sub_1B86604(System_Func_string__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__315_3,
          v90,
          Method_PartyOrganizationListViewItem___c__AddFriendshipUpCampaignInfo_b__315_3__,
          0LL);
        v91 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v91->__9__315_3 = (struct System_Func_string__bool__o *)_9__315_3;
        sub_1B8635C((CGThumbnailListItem_o *)&v91->__9__315_3, (int32_t)_9__315_3, v92, v93);
      }
      v94 = System_Linq_Enumerable__Single_object__49963968(
              v87,
              (System_Func_TSource__bool__o *)_9__315_3,
              (const MethodInfo_2FA63C0 *)Method_System_Linq_Enumerable_Single_string___);
LABEL_62:
      v4 = v65;
      FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
      v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !v59 )
        sub_1B86614(FriendshipBonusValue, v96);
      EventMargeItemUpValInfo__SetFriendshipUpBonus_39869708(
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
        sub_1B86614(0LL, v97);
      items = v100->fields._items;
      v102 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v100->fields._version;
      if ( !items )
        sub_1B86614(v100, v97);
      size = v100->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)v59,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v104 = &items->obj.klass + size;
        v100->fields._size = size + 1;
        v104[4] = (Il2CppClass *)v59;
        sub_1B8635C((CGThumbnailListItem_o *)(v104 + 4), (int32_t)v59, v98, v99);
      }
    }
    v80 = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_61:
    v94 = (Il2CppObject *)StringLiteral_1/*""*/;
    goto LABEL_62;
  }
}


void __fastcall PartyOrganizationListViewItem__CheckRestriction(
        PartyOrganizationListViewItem_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  QuestRestrictionInfo_o *v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  ServantLeaderInfo_o *followerInfo; // x0
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w23
  int32_t v14; // w24
  struct UserServantEntity_o *v15; // x8
  struct UserServantEntity_o *v16; // x8
  QuestRestrictionInfo_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w23
  int32_t v22; // w24
  QuestRestrictionInfo_o *v23; // x22
  __int64 v24; // x23
  __int64 v25; // x24
  int32_t v26; // w23
  const MethodInfo *v27; // x1
  int32_t limitCount; // w24
  int32_t DispLimitCount; // w0
  int32_t rarityId; // w25
  int32_t v31; // w26
  const MethodInfo *v32; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v34; // x23
  __int64 v35; // x24
  int32_t v36; // w23
  const MethodInfo *v37; // x1
  int32_t v38; // w24
  UserServantEntity_o *v39; // x8
  bool IsUniqueIndividualityRestriction_41248264; // w0
  const MethodInfo *v41; // x1
  QuestRestrictionInfo_o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // kr00_16
  int32_t v44; // w0
  int32_t v45; // w27
  int32_t v46; // w28
  const MethodInfo *v47; // x1
  int32_t DispImageLimitCount; // w0
  struct QuestRestrictionInfo_o *v49; // x8
  FollowerInfo_o *v50; // x22
  System_Int32_array *NpcServantIndividualityFull; // x0
  QuestRestrictionInfo_o *v52; // x24
  int32_t v53; // w23
  System_Int32_array *v54; // x22
  const MethodInfo *v55; // x1
  FollowerInfo_o *v56; // x23
  struct QuestRestrictionInfo_o *v57; // x22
  int32_t followerIndex; // w24
  int32_t v59; // w5
  FollowerInfo_o *v60; // x23
  struct QuestRestrictionInfo_o *v61; // x22
  int32_t v62; // w24
  int32_t v63; // w5
  bool IsUniqueIndividualityRestriction_39900244; // w0
  const MethodInfo *v65; // x1
  QuestRestrictionInfo_o *v66; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_41492892; // w0
  QuestRestrictionInfo_o *v69; // x8
  QuestRestrictionInfo_o *v70; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v72; // w0
  int32_t svtLimitCount; // w22
  int32_t v74; // w23
  const MethodInfo *v75; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_4A4A019 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_4A4A019 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
  {
    if ( !this->fields.followerInfo )
    {
      this->fields.isFixedServantPositionAgreement = 0;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      return;
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem) )
      goto LABEL_48;
    followerInfo = (ServantLeaderInfo_o *)this->fields.followerInfo;
    if ( !followerInfo )
      goto LABEL_85;
    if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)followerInfo, 0LL)
      && (v23 = this->fields.questRestrictionInfo) != 0LL )
    {
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !followerInfo )
        goto LABEL_85;
      v25 = *(_QWORD *)&followerInfo->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&followerInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v78.fields.currentCryptoKey = v25;
      *(_QWORD *)&v78.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v78, 0LL);
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v27);
      if ( !followerInfo )
        goto LABEL_85;
      limitCount = followerInfo->fields.limitCount;
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !followerInfo )
        goto LABEL_85;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(followerInfo, 0LL);
      rarityId = this->fields.rarityId;
      v31 = DispLimitCount;
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v32);
      if ( !followerInfo )
        goto LABEL_85;
      followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41486520(
                                              v23,
                                              &this->fields.isQuestRestrictionWhole,
                                              v26,
                                              limitCount,
                                              v31,
                                              rarityId,
                                              followerInfo->fields.lv,
                                              this->fields._InitPos_k__BackingField,
                                              2,
                                              0LL);
      this->fields.isQuestRestriction = (unsigned __int8)followerInfo & 1;
      if ( ((unsigned __int8)followerInfo & 1) == 0 )
      {
        followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !followerInfo )
          goto LABEL_85;
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(
                                                (QuestRestrictionInfo_o *)followerInfo,
                                                this->fields._InitPos_k__BackingField,
                                                0LL);
        if ( ((unsigned __int8)followerInfo & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !followerInfo )
            goto LABEL_85;
          v35 = *(_QWORD *)&followerInfo->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&followerInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v35;
          *(_QWORD *)&v79.fields.fakeValue = v34;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v79, 0LL);
          followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v37);
          if ( !followerInfo )
            goto LABEL_85;
          v38 = followerInfo->fields.limitCount;
          followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !followerInfo )
            goto LABEL_85;
          followerInfo = (ServantLeaderInfo_o *)ServantLeaderInfo__getDispLimitCount(followerInfo, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_85;
          followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v36,
                                                  v38,
                                                  (int32_t)followerInfo,
                                                  this->fields._InitPos_k__BackingField,
                                                  1,
                                                  0LL);
          goto LABEL_60;
        }
      }
    }
    else
    {
LABEL_48:
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !followerInfo )
        goto LABEL_61;
      followerInfo = (ServantLeaderInfo_o *)this->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_85;
      followerInfo = (ServantLeaderInfo_o *)FollowerInfo__get_IsNpc((FollowerInfo_o *)followerInfo, 0LL);
      if ( ((unsigned __int8)followerInfo & 1) != 0 && (v49 = this->fields.questRestrictionInfo) != 0LL )
      {
        v50 = this->fields.followerInfo;
        followerInfo = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v49->fields.questId, 0LL);
        if ( !v50 )
          goto LABEL_85;
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v50, 0, (int32_t)followerInfo, 0LL);
        v52 = this->fields.questRestrictionInfo;
        v53 = this->fields.rarityId;
        v54 = NpcServantIndividualityFull;
        followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v55);
        if ( !followerInfo || !v52 )
          goto LABEL_85;
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41486800(
                                                v52,
                                                &this->fields.isQuestRestrictionWhole,
                                                v54,
                                                v53,
                                                followerInfo->fields.lv,
                                                this->fields._InitPos_k__BackingField,
                                                3,
                                                0LL);
        this->fields.isQuestRestriction = (unsigned __int8)followerInfo & 1;
        if ( ((unsigned __int8)followerInfo & 1) == 0 )
        {
          followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
          if ( !followerInfo )
            goto LABEL_85;
          followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(
                                                  (QuestRestrictionInfo_o *)followerInfo,
                                                  this->fields._InitPos_k__BackingField,
                                                  0LL);
          if ( ((unsigned __int8)followerInfo & 1) != 0 )
          {
            followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !followerInfo )
              goto LABEL_85;
            followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41508816(
                                                    (QuestRestrictionInfo_o *)followerInfo,
                                                    v54,
                                                    this->fields._InitPos_k__BackingField,
                                                    0LL);
LABEL_60:
            this->fields.isQuestRestriction = (unsigned __int8)followerInfo & 1;
          }
        }
      }
      else
      {
LABEL_61:
        *(_WORD *)&this->fields.isQuestRestriction = 0;
      }
    }
    v56 = this->fields.followerInfo;
    v57 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v57 )
    {
      followerInfo = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v57->fields.questId, 0LL);
      v59 = (int)followerInfo;
      if ( !v56 )
        goto LABEL_85;
    }
    else
    {
      v59 = 0;
      if ( !v56 )
        goto LABEL_85;
    }
    followerInfo = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_39900084(
                                            v56,
                                            v57,
                                            followerIndex,
                                            partyItem,
                                            num,
                                            v59,
                                            0LL);
    v60 = this->fields.followerInfo;
    v61 = this->fields.questRestrictionInfo;
    v62 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)followerInfo & 1;
    if ( v61 )
    {
      followerInfo = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v61->fields.questId, 0LL);
      v63 = (int)followerInfo;
      if ( !v60 )
        goto LABEL_85;
    }
    else
    {
      v63 = 0;
      if ( !v60 )
        goto LABEL_85;
    }
    IsUniqueIndividualityRestriction_39900244 = FollowerInfo__IsUniqueIndividualityRestriction_39900244(
                                                  v60,
                                                  v61,
                                                  v62,
                                                  partyItem,
                                                  num,
                                                  v63,
                                                  0LL);
    v66 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_39900244;
    if ( v66 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v65);
      IsFixedSupportPosition_41492892 = QuestRestrictionInfo__IsFixedSupportPosition_41492892(
                                          v66,
                                          num,
                                          ServantLeader,
                                          0LL);
      v69 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_41492892;
      if ( v69 )
      {
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsUseOldMaster(v69, 0LL);
        if ( ((unsigned __int8)followerInfo & 1) == 0 )
          goto LABEL_79;
        if ( !partyItem )
          goto LABEL_85;
        followerInfo = (ServantLeaderInfo_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( !followerInfo )
          goto LABEL_85;
        if ( LOBYTE(followerInfo->fields.afterTransformSvtInfo) )
          goto LABEL_79;
        followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !followerInfo )
          goto LABEL_85;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport((QuestRestrictionInfo_o *)followerInfo, 0LL) )
        {
LABEL_79:
          v70 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, (const MethodInfo *)partyItem);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v74 = v72;
          followerInfo = (ServantLeaderInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v75);
          if ( v70 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v70,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v74,
              svtLimitCount,
              (int32_t)followerInfo,
              num,
              1,
              0LL);
            return;
          }
          goto LABEL_85;
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
  if ( !v8 )
  {
    *(_WORD *)&this->fields.isQuestRestriction = 0;
    goto LABEL_40;
  }
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v10;
  *(_QWORD *)&v76.fields.fakeValue = v9;
  followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v76, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12 )
    goto LABEL_85;
  v13 = (int)followerInfo;
  followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                          v12->fields.limitCount,
                                          0LL);
  if ( !this->fields.userServantEntity )
    goto LABEL_85;
  v14 = (int)followerInfo;
  followerInfo = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
  v15 = this->fields.userServantEntity;
  if ( !v15 )
    goto LABEL_85;
  followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41486520(
                                          v8,
                                          &this->fields.isQuestRestrictionWhole,
                                          v13,
                                          v14,
                                          (int32_t)followerInfo,
                                          this->fields.rarityId,
                                          v15->fields.lv,
                                          this->fields._InitPos_k__BackingField,
                                          1,
                                          0LL);
  this->fields.isQuestRestriction = (unsigned __int8)followerInfo & 1;
  if ( ((unsigned __int8)followerInfo & 1) == 0 )
  {
    v16 = this->fields.userServantEntity;
    if ( v16 )
    {
      v17 = this->fields.questRestrictionInfo;
      v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v77.fields.currentCryptoKey = v19;
      *(_QWORD *)&v77.fields.fakeValue = v18;
      followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                              v77,
                                              0LL);
      v20 = this->fields.userServantEntity;
      if ( v20 )
      {
        v21 = (int)followerInfo;
        followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                v20->fields.limitCount,
                                                0LL);
        if ( this->fields.userServantEntity )
        {
          v22 = (int)followerInfo;
          followerInfo = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(
                                                  this->fields.userServantEntity,
                                                  0,
                                                  0LL);
          if ( v17 )
          {
            this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v17,
                                                v21,
                                                v22,
                                                (int32_t)followerInfo,
                                                this->fields._InitPos_k__BackingField,
                                                0,
                                                0LL);
            goto LABEL_40;
          }
        }
      }
    }
LABEL_85:
    sub_1B86614(followerInfo, partyItem);
  }
LABEL_40:
  followerInfo = (ServantLeaderInfo_o *)this->fields.userServantEntity;
  if ( !followerInfo )
    goto LABEL_85;
  followerInfo = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_41247884(
                                          (UserServantEntity_o *)followerInfo,
                                          this->fields.questRestrictionInfo,
                                          partyItem,
                                          num,
                                          -1,
                                          0LL);
  v39 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)followerInfo & 1;
  if ( !v39 )
    goto LABEL_85;
  IsUniqueIndividualityRestriction_41248264 = UserServantEntity__IsUniqueIndividualityRestriction_41248264(
                                                v39,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v42 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41248264;
  if ( v42 )
  {
    v43 = PartyOrganizationListViewItem__get_SvtId(this, v41);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v43, 0LL);
    v45 = this->fields.svtLimitCount;
    v46 = v44;
    DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v47);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v42,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v46,
      v45,
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
  struct System_Int64_array *equipIdList; // x1
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t cost; // w19

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  if ( !equipIdList->max_length )
    sub_1B8661C(this, equipIdList);
  if ( !equipIdList->m_Items[0] )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    cost = equipServantEntity->fields.cost;
  else
    cost = 0;
  equipIdList->m_Items[0] = 0LL;
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v2);
  return cost;
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t index; // w22
  __int64 v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4A4A010 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_4A4A010 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_1B86604(PartyOrganizationListViewItem_TypeInfo);
  *(_QWORD *)(v6 + 320) = -1LL;
  *(_DWORD *)(v6 + 368) = -1;
  ListViewItem___ctor_41775716((ListViewItem_o *)v6, index, 0LL);
  PartyOrganizationListViewItem__Set((PartyOrganizationListViewItem_o *)v6, this, v7);
  if ( (idx & 0x80000000) == 0 )
  {
    *(_DWORD *)(v6 + 20) = idx;
    ListViewItem__SetSortIndex((ListViewItem_o *)v6, idx, 0LL);
  }
  return (PartyOrganizationListViewItem_o *)v6;
}


bool __fastcall PartyOrganizationListViewItem__CompMember(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x20
  __int64 v5; // x1
  _BOOL4 isFollower; // w10
  bool v7; // zf
  int v8; // w10
  char v9; // w9
  bool result; // w0
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o *v12; // x9
  __int128 v13; // q1
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q0
  signed int v16; // w9
  signed int v17; // w22
  signed int v18; // w8
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v20; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-50h]

  v4 = this;
  if ( (byte_4A4A01A & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4A4A01A = 1;
  }
  if ( !item )
    goto LABEL_33;
  if ( v4->fields.npcFollowerSvtId != item->fields.npcFollowerSvtId )
    return 0;
  isFollower = item->fields.isFollower;
  v7 = !isFollower;
  v8 = isFollower || v4->fields.isFollower;
  v9 = v7;
  if ( v8 )
    return v9 ^ v4->fields.isFollower;
  userServantEntity = v4->fields.userServantEntity;
  v12 = item->fields.userServantEntity;
  if ( userServantEntity != v12 )
  {
    result = 0;
    if ( !userServantEntity || !v12 )
      return result;
    v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v23.fields.fakeValue = v13;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v22 = v23;
    this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                &v22,
                                                0LL);
    v14 = item->fields.userServantEntity;
    if ( v14 )
    {
      v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
      *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v21.fields.fakeValue = v15;
      if ( this == (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(
                                                        &v21,
                                                        0LL) )
        goto LABEL_17;
      return 0;
    }
LABEL_33:
    sub_1B86614(this, item);
  }
LABEL_17:
  if ( v4->fields._InitPos_k__BackingField != item->fields._InitPos_k__BackingField )
    return 0;
  if ( !v4->fields.equipIdList || !item->fields.equipIdList )
    return 1;
  v16 = 0;
  this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
  do
  {
    v17 = v16;
    if ( !*(_DWORD *)&this->fields.isQuestRestriction )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v18 = *(_DWORD *)(*(_QWORD *)&this->fields.cost + 40LL);
    if ( v17 >= v18 )
      break;
    equipIdList = v4->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_33;
    if ( v17 >= equipIdList->max_length )
      goto LABEL_34;
    v20 = item->fields.equipIdList;
    if ( !v20 )
      goto LABEL_33;
    if ( v17 >= v20->max_length )
LABEL_34:
      sub_1B8661C(this, item);
    v7 = equipIdList->m_Items[v17] == v20->m_Items[v17];
    v16 = v17 + 1;
  }
  while ( v7 );
  return v17 >= v18;
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v5, v6);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_QWORD *)&this->fields.cost = 0LL;
  *(_QWORD *)&this->fields.atk = 0LL;
  *(_QWORD *)&this->fields.rarityId = 0LL;
  *(_QWORD *)&this->fields.frameType = 9LL;
  this->fields.commandCodeIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v13);
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
  int32_t CardImageLimitCount; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  FollowerInfo_o *v17; // x20
  struct QuestRestrictionInfo_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w2
  int32_t v21; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A4A02A & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B863B8(&UINarrowFigureRender_TypeInfo, v3);
    byte_4A4A02A = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
  {
    followerInfo = this->fields.followerInfo;
    if ( !followerInfo )
      return 0LL;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( questRestrictionInfo )
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
    else
      ReturnTypeByQuestId = 0;
    SvtId = FollowerInfo__getSvtId(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    v17 = this->fields.followerInfo;
    v18 = this->fields.questRestrictionInfo;
    v19 = this->fields.followerIndex;
    v10 = SvtId;
    if ( v18 )
    {
      SvtId = FollowerInfo__GetReturnTypeByQuestId(v18->fields.questId, 0LL);
      v20 = SvtId;
      if ( !v17 )
        goto LABEL_20;
    }
    else
    {
      v20 = 0;
      if ( !v17 )
        goto LABEL_20;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v17, v19, v20, 0LL);
    goto LABEL_16;
  }
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v6;
  *(_QWORD *)&v22.fields.fakeValue = v5;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v22, 0LL);
  v9 = this->fields.userServantEntity;
  if ( !v9 )
LABEL_20:
    sub_1B86614(SvtId, v8);
  v10 = SvtId;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v9, 0, 0LL);
LABEL_16:
  v21 = CardImageLimitCount;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  return UINarrowFigureRender__GetAssetName(v10, v21, 0LL);
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
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v11; // x0

  if ( (byte_4A4A02C & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    byte_4A4A02C = 1;
  }
  if ( this->fields.userServantEntity )
  {
    if ( !ConstantMaster__IsOtherImage(0LL) )
      goto LABEL_7;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_21;
    if ( !UserServantEntity__IsOtherImageCancel(userServantEntity, 0LL) )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      return v11->static_fields->OtherImageLimitCount;
    }
    else
    {
LABEL_7:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_21:
        sub_1B86614(userServantEntity, v3);
      }
    }
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      v8 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v8 )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v8->fields.questId, 0LL);
      else
        ReturnTypeByQuestId = 0;
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
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B86614(v5, 0LL);
    }
    LODWORD(v5) = UserServantEntity__getCommandCardLimitCount(userServantEntity, 0, 0LL);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      v7 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v7 )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v7->fields.questId, 0LL);
      else
        ReturnTypeByQuestId = 0;
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
  struct ServantEntity_o *v6; // x8
  struct System_Int32_array *cardIds; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 i; // x9
  il2cpp_array_size_t v10; // w13

  if ( (byte_4A4A029 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    byte_4A4A029 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1B86460(int___TypeInfo, 3LL);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0LL )
LABEL_15:
    sub_1B86614(result, v5);
  max_length = cardIds->max_length;
  for ( i = 0LL; (__int64)i < (int)max_length; ++i )
  {
    if ( i >= max_length )
      goto LABEL_18;
    v10 = cardIds->m_Items[i + 1] - 1;
    if ( v10 <= 2 )
    {
      if ( !result )
        goto LABEL_15;
      if ( v10 >= result->max_length )
LABEL_18:
        sub_1B8661C(result, v5);
      ++result->m_Items[v10 + 1];
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

  if ( (byte_4A4A02B & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4A02B = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
  return QuestRestrictionInfo__GetCorrectionIconId(questRestrictionInfo, v5, this->fields.isFollower, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GetDispImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B86614(v5, 0LL);
    }
    LODWORD(v5) = UserServantEntity__getDispLimitCount(userServantEntity, 0, 0LL);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      v7 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v7 )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v7->fields.questId, 0LL);
      else
        ReturnTypeByQuestId = 0;
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
  const MethodInfo *v9; // x1

  if ( (byte_4A4A01B & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&long___TypeInfo, v3);
    byte_4A4A01B = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v6 = result;
      result = (System_Int64_array *)sub_1B864F4(result, long___TypeInfo);
      if ( !result )
      {
        v8 = (PartyOrganizationListViewItem_o *)sub_1B868D4(v6);
        return (System_Int64_array *)PartyOrganizationListViewItem__get_Level(v8, v9);
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
    return (System_Int64_array *)sub_1B86460(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
  }
  return result;
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
  sub_1B8635C((CGThumbnailListItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4A4A028 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A028 = 1;
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

  if ( (byte_4A4A027 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A027 = 1;
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


int32_t __fastcall PartyOrganizationListViewItem__GetFriendPointUpVal(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x19
  System_Int64_array *EquipList; // x1
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    EquipList = PartyOrganizationListViewItem__GetEquipList(this, method);
    return UserServantEntity__getFriendPointUpVal(userServantEntity, EquipList, 0LL);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( questRestrictionInfo )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      else
        ReturnTypeByQuestId = 0;
      return FollowerInfo__getFriendPointUpVal(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      return 0;
    }
  }
}


int32_t __fastcall PartyOrganizationListViewItem__GetIconLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B86614(v5, 0LL);
    }
    LODWORD(v5) = UserServantEntity__getIconLimitCount(userServantEntity, 0, 0LL);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      v7 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v7 )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v7->fields.questId, 0LL);
      else
        ReturnTypeByQuestId = 0;
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

  if ( (byte_4A4A02E & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A02E = 1;
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

  if ( (byte_4A4A02F & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A02F = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1B86614(v5, 0LL);
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

  if ( (byte_4A4A024 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_10112/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v3);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4A024 = 1;
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
    sub_1B86614(v6, method);
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
    v6 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10112/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v9 = (System_String_o *)v6;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_61645176(v9, ConfirmRestrictionMessage, 0LL);
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
  if ( (byte_4A4A01F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&limitCount);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4A4A01F = 1;
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
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v26, 0LL);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    byte_4A48C25 = 1;
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v27, 0LL);
  if ( !Master_object )
LABEL_36:
    sub_1B86614(ServantLeader, v14);
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
  ServantLeader = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v28, 0LL);
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

  if ( (byte_4A4A026 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1B863B8(&StringLiteral_44/*"\n\n"*/, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    sub_1B863B8(&StringLiteral_10149/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v7);
    byte_4A4A026 = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10149/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_61683424(
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

  if ( (byte_4A4A025 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A025 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return QuestRestrictionInfo__GetUniqueServantRestrictionMessage(questRestrictionInfo, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
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
    sub_1B86614(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41502848(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1B86614(0LL, v6);
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
  __int64 list_low; // x1
  int64_t v11; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  PartyOrganizationListViewItem_o *FrameType; // x0
  const MethodInfo *v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-40h]

  if ( (byte_4A4A015 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4A4A015 = 1;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v15 = v16;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v15, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v11 = v9;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        goto LABEL_16;
      DataMasterBase_object__object__long___TryGetEntity(
        Master_object,
        (Il2CppObject **)&this->fields.userServantEntity,
        v11,
        (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantEntity__GetOverwriteStatus(
                                                                      (UserServantEntity_o *)Master_object,
                                                                      this->fields.questRestrictionInfo,
                                                                      0LL);
      if ( Master_object )
      {
        this->fields.cost = HIDWORD(Master_object->fields._MasterName_k__BackingField);
        *(_QWORD *)&this->fields.hp = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
        this->fields.rarityId = (int32_t)Master_object->fields._MasterName_k__BackingField;
        list_low = LODWORD(Master_object->fields.list);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantEntity;
        this->fields.actualRarity = list_low;
        if ( Master_object )
        {
          FrameType = (PartyOrganizationListViewItem_o *)UserServantEntity__GetFrameType(
                                                           (UserServantEntity_o *)Master_object,
                                                           list_low,
                                                           0LL);
          this->fields.frameType = (int)FrameType;
          PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(FrameType, this, v14);
          return;
        }
      }
    }
LABEL_16:
    sub_1B86614(Master_object, list_low);
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
    sub_1B86614(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_32594360(this, item, v7);
}


void __fastcall PartyOrganizationListViewItem__Modify_32594360(
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
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x21
  __int64 v28; // x23
  int32_t v29; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  _BOOL4 isMyServantOrNpcRestriction; // w8
  System_Int64_array *equipIdList; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v5 = this;
  if ( (byte_4A4A016 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1B863B8(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v8);
    byte_4A4A016 = 1;
  }
  if ( !item )
    goto LABEL_21;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_21;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v14;
  *(_QWORD *)&v34.fields.fakeValue = v13;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                              v34,
                                              0LL);
  if ( !v12 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)this,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v16, v17);
  v5->fields.classId = item->fields.classId;
  *(_QWORD *)&v5->fields.cost = *(_QWORD *)&item->fields.cost;
  v5->fields.atk = item->fields.atk;
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v18 )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                              v18[6],
                                              0LL);
  v19 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v19 )
    goto LABEL_21;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v19, 0LL);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v21, v22);
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  v5->fields.isQuestRestriction = item->fields.isQuestRestriction;
  v5->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  v5->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  v5->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  if ( !questRestrictionInfo )
  {
    IsConvertOverwriteImage = 0;
    goto LABEL_17;
  }
  v26 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_21:
    sub_1B86614(this, item);
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v28;
  *(_QWORD *)&v35.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v35, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v29, 0LL);
LABEL_17:
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
    sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.followerInfo, 0, (int32_t)v23, v24);
  }
  equipIdList = v5->fields.equipIdList;
  *(_WORD *)&v5->fields._IsClearedWave_k__BackingField = 0;
  v5->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(v5, equipIdList, v23);
}


int32_t __fastcall PartyOrganizationListViewItem__RemoveEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w19
  System_Int64_array *v6; // x1

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  if ( !equipIdList->max_length )
    sub_1B8661C(this, userSvtId);
  if ( equipIdList->m_Items[0] != userSvtId )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    cost = equipServantEntity->fields.cost;
  else
    cost = 0;
  v6 = this->fields.equipIdList;
  equipIdList->m_Items[0] = 0LL;
  PartyOrganizationListViewItem__SetEquipStatus(this, v6, method);
  return cost;
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

  if ( (byte_4A4A013 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, item);
    byte_4A4A013 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1B86614(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v11, v12);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v17, v18);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v20,
    v21);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v23, v24);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)commandCodeIdList, v26, v27);
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
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)WaveEnemyClassIds_k__BackingField,
    v29,
    v30);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v34 = System_Array__Clone(equipSvtIdList, 0LL)) == 0LL )
  {
    v39 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v35 = v34;
  v36 = (struct System_Int32_array *)sub_1B864F4(v34, int___TypeInfo);
  if ( v36 )
  {
    this->fields.equipSvtIdList = v36;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v38 = sub_1B864F4(v35, int___TypeInfo);
    if ( v38 )
    {
      v39 = v38;
LABEL_10:
      sub_1B8635C((CGThumbnailListItem_o *)p_equipSvtIdList, v39, v31, v32);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v40);
      return;
    }
  }
  else
  {
    sub_1B868D4(v35);
  }
  v41 = (PartyOrganizationListViewItem_o *)sub_1B868D4(v35);
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
  if ( (byte_4A4A012 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1B863B8(&NetworkManager_TypeInfo, v8);
    byte_4A4A012 = 1;
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A48C25 = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1B86614(this, *(_QWORD *)&eventId);
  if ( UserQuestMaster__getClearCountsFromId(
         (UserQuestMaster_o *)Master_object,
         *(_QWORD *)(*(_QWORD *)&this->fields.cost + 64LL),
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


void __fastcall PartyOrganizationListViewItem__SetEquipStatus(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  FollowerInfo_o *p_equipUserServantEntity; // x23
  struct ServantEntity_o **p_equipServantEntity; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct EventUpValInfo_o **p_eventUpValInfo; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x29
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  void *Instance; // x0
  MethodInfo *v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  _BOOL4 isFollower; // w8
  struct QuestRestrictionInfo_o *v55; // x8
  Il2CppObject *v56; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v58; // x8
  Il2CppObject *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Int64_array *v62; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v64; // x8
  int32_t followerIndex; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x23
  int32_t v67; // w2
  struct System_Int64_array **p_equipIdList; // x0
  int32_t v69; // w1
  Il2CppObject *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct EventUpValSetupInfo_o *v73; // x22
  struct System_Int32_array *v74; // x8
  FollowerInfo_o *v75; // x24
  struct QuestRestrictionInfo_o *v76; // x8
  int32_t v77; // w23
  int32_t v78; // w4
  BalanceConfig_c *v79; // x0
  System_Collections_Generic_List_object__o *v80; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x22
  PartyOrganizationListViewItem___c_c *v83; // x0
  System_Func_object__int__o *_9__133_0; // x23
  Il2CppObject *v85; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  __int64 v91; // x8
  _DWORD *v92; // x22
  unsigned __int64 v93; // x20
  ServantEntity_o *v94; // x24
  int32_t v95; // w25
  EventPersonalMargeUpValInfo_o *v96; // x23
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  __int64 v99; // x8
  _QWORD *v100; // x23
  unsigned __int64 v101; // x24
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v106; // x21
  struct EventMargeItemUpValInfo_array *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  struct System_Int64_array *v110; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v114; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v115; // x23
  Il2CppClass *v116; // x24
  Il2CppClass *v117; // x25
  Il2CppObject *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x24
  struct System_Int32_array *v123; // x8
  UserServantCollectionEntity_o *v124; // x24
  UserServantEntity_o *v125; // x25
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  struct System_Int32_array *v128; // x8
  Il2CppObject *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  struct System_Int64_array *v132; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_41244764; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_object__o *v140; // x23
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v142; // x0
  System_Func_object__int__o *_9__133_1; // x25
  Il2CppObject *v144; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x0
  const MethodInfo *v150; // x3
  __int64 v151; // x8
  _DWORD *v152; // x24
  unsigned __int64 v153; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v155; // w27
  EventPersonalMargeUpValInfo_o *v156; // x25
  int32_t v157; // w2
  __int64 v158; // x8
  _QWORD *v159; // x25
  unsigned __int64 v160; // x26
  struct System_Object_array *items; // x8
  _QWORD *v162; // x9
  __int64 size; // x10
  Il2CppClass **v164; // x0
  System_Collections_Generic_List_object__o *AdjustUpValInfoArray; // x23
  const MethodInfo *v166; // x3
  const MethodInfo_3839AA0 *v167; // x0
  struct EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  const MethodInfo *v171; // x1
  System_Int32_array *v172; // x23
  EventUpValSetupInfo_o *v173; // x24
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  UserServantEntity_o *v176; // x22
  EventUpValSetupInfo_o *v177; // x23
  struct QuestRestrictionInfo_o *v178; // x8
  _BOOL8 v179; // x0
  __int64 v180; // x1
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  System_Collections_Generic_List_object__o *v183; // x0
  Il2CppObject *current; // x1
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  Il2CppClass **v188; // x8
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v190; // x23
  const MethodInfo *v191; // x3
  struct System_Int32_array *v192; // x29
  __int64 v193; // x8
  unsigned __int64 v194; // x28
  int32_t v195; // w26
  Il2CppObject *v196; // x0
  ServantEntity_o *v197; // x27
  EventPersonalMargeUpValInfo_o *v198; // x25
  int32_t v199; // w2
  __int64 v200; // x8
  _QWORD *v201; // x25
  unsigned __int64 v202; // x26
  struct System_Object_array *v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  Il2CppClass **v206; // x0
  UserServantEntity_o *v207; // x23
  EventUpValSetupInfo_o *v208; // x22
  struct QuestRestrictionInfo_o *v209; // x8
  ServantEntity_o *v210; // x22
  EventPersonalMargeUpValInfo_o *v211; // x21
  System_Collections_Generic_List_object__o *v212; // x19
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  struct EventMargeItemUpValInfo_array *v214; // x0
  System_Collections_Generic_List_Enumerator_object__o v215; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v216; // [xsp+30h] [xbp-C0h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-A0h] BYREF
  bool v218; // [xsp+5Ch] [xbp-94h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v219; // [xsp+60h] [xbp-90h] BYREF
  bool v220; // [xsp+6Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *infoList; // [xsp+70h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventMargeItemUpValInfo__o *v222; // [xsp+78h] [xbp-78h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+80h] [xbp-70h] BYREF
  bool isDuplicate; // [xsp+8Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v225; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16

  if ( (byte_4A4A011 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, equipIdList);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v13);
    sub_1B863B8(&Method_System_Linq_Enumerable_Distinct_int___, v14);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v15);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v19);
    sub_1B863B8(&EventPersonalMargeUpValInfo_TypeInfo, v20);
    sub_1B863B8(&EventUpValSetupInfo_TypeInfo, v21);
    sub_1B863B8(&System_Func_EventDropUpValInfo__int__TypeInfo, v22);
    sub_1B863B8(&int___TypeInfo, v23);
    sub_1B863B8(&long___TypeInfo, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v30);
    sub_1B863B8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v31);
    sub_1B863B8(&NetworkManager_TypeInfo, v32);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1B863B8(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__133_0__, v36);
    sub_1B863B8(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__133_1__, v37);
    sub_1B863B8(&PartyOrganizationListViewItem___c_TypeInfo, v38);
    sub_1B863B8(&UserServantEntity_TypeInfo, v39);
    byte_4A4A011 = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  isDuplicate = 0;
  v222 = 0LL;
  entity = 0LL;
  infoList = 0LL;
  v220 = 0;
  v219 = 0LL;
  v218 = 0;
  eventUpVallInfo = 0LL;
  memset(&v216, 0, sizeof(v216));
  this->fields.equipUserServantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v42, v43);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventUpValInfo, 0, v45, v46);
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, 0, v48, v49);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v69 = 0;
      goto LABEL_201;
    }
    if ( equipIdList )
    {
      v58 = this->fields.equipIdList;
      if ( v58 == equipIdList )
        goto LABEL_63;
      v59 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
      if ( v59 )
      {
        v56 = v59;
        v62 = (struct System_Int64_array *)sub_1B864F4(v59, long___TypeInfo);
        if ( !v62 )
        {
          sub_1B868D4(v56);
          goto LABEL_13;
        }
      }
      else
      {
        v62 = 0LL;
      }
    }
    else
    {
      v79 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v79 = BalanceConfig_TypeInfo;
      }
      v62 = (struct System_Int64_array *)sub_1B86460(long___TypeInfo, (unsigned int)v79->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v62;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, (int32_t)v62, v60, v61);
    v58 = this->fields.equipIdList;
LABEL_63:
    if ( !v58 )
      goto LABEL_203;
    if ( !v58->max_length )
      goto LABEL_186;
    if ( v58->m_Items[0] >= 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_203;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v110 = this->fields.equipIdList;
      if ( !v110 )
        goto LABEL_203;
      if ( !v110->max_length )
        goto LABEL_186;
      if ( !Instance )
        goto LABEL_203;
      Instance = (void *)DataMasterBase_object__object__long___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           (Il2CppObject **)&this->fields.equipUserServantEntity,
                           v110->m_Items[0],
                           (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_203;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v225.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v225.fields.fakeValue = parent;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v225, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_203;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
          v114 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_203;
          v115 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v117 = v114->_1.declaringType;
          v116 = v114->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v226.fields.currentCryptoKey = v117;
          *(_QWORD *)&v226.fields.fakeValue = v116;
          Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v226, 0LL);
          if ( !v115 )
            goto LABEL_203;
          v118 = DataMasterBase_object__object__int___GetEntity(
                   v115,
                   (int32_t)Instance,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          *p_equipServantEntity = (struct ServantEntity_o *)v118;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, (int32_t)v118, v119, v120);
        }
      }
      else
      {
        equipSvtIdList = this->fields.equipSvtIdList;
        if ( !equipSvtIdList )
          goto LABEL_101;
        if ( !equipSvtIdList->max_length )
          goto LABEL_186;
        if ( equipSvtIdList->m_Items[1] < 1 )
          goto LABEL_101;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v51);
          byte_4A48C25 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        v123 = this->fields.equipSvtIdList;
        if ( !v123 )
          goto LABEL_203;
        if ( !v123->max_length )
          goto LABEL_186;
        if ( !Master_object )
          goto LABEL_203;
        Instance = (void *)UserServantCollectionMaster__TryGetEntity(
                             (UserServantCollectionMaster_o *)Master_object,
                             &entity,
                             *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                             v123->m_Items[1],
                             0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v124 = entity;
          v125 = (UserServantEntity_o *)sub_1B86604(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_41230020(v125, v124, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v125;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, (int32_t)v125, v126, v127);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_203;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
          v128 = this->fields.equipSvtIdList;
          if ( !v128 )
            goto LABEL_203;
          if ( !v128->max_length )
            goto LABEL_186;
          if ( !Instance )
            goto LABEL_203;
          v129 = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v128->m_Items[1],
                   (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.equipServantEntity = (struct ServantEntity_o *)v129;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, (int32_t)v129, v130, v131);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_101:
          v132 = this->fields.equipIdList;
          if ( !v132 )
            goto LABEL_203;
          if ( !v132->max_length )
            goto LABEL_186;
          v132->m_Items[0] = 0LL;
        }
      }
    }
    p_setupInfo = &this->fields.setupInfo;
    setupInfo = this->fields.setupInfo;
    if ( !setupInfo )
      goto LABEL_138;
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_203;
    if ( !*(_QWORD *)&eventIdList->max_length )
    {
LABEL_138:
      AdjustUpValInfoArray = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        AdjustUpValInfoArray,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v219 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
      if ( this->fields.questRestrictionInfo )
      {
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v219, 1, v166);
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_203;
        AdjustUpValInfoArray = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                              (PartyOrganizationUtility_o *)Instance,
                                                                              &v218,
                                                                              (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray,
                                                                              0LL);
        this->fields._IsDuplicateBonus_k__BackingField = v218;
        v167 = (const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
      }
      else
      {
        PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v219, 0, v166);
        v167 = (const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
      }
      Instance = SingletonTemplate_object___get_Instance(v167);
      if ( !Instance )
        goto LABEL_203;
LABEL_143:
      AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                        (PartyOrganizationUtility_o *)Instance,
                        (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray,
                        0LL);
      goto LABEL_144;
    }
    userServantEntity = this->fields.userServantEntity;
    EquipList = PartyOrganizationListViewItem__GetEquipList(this, v51);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !userServantEntity )
      goto LABEL_203;
    EventUpVal_41244764 = UserServantEntity__getEventUpVal_41244764(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            EquipList,
                            *((_QWORD *)Instance + 13),
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_41244764;
    if ( questRestrictionInfo )
    {
      v140 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v140,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      infoList = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v140;
      if ( !*p_eventUpValInfo )
        goto LABEL_203;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v142 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v142 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__133_1 = (System_Func_object__int__o *)v142->static_fields->__9__133_1;
      if ( !_9__133_1 )
      {
        if ( !v142->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v142);
          v142 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v144 = (Il2CppObject *)v142->static_fields->__9;
        _9__133_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__133_1,
          v144,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__133_1__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__133_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__133_1;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__133_1, (int32_t)_9__133_1, v146, v147);
      }
      v148 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__133_1,
                                                                    (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v149 = System_Linq_Enumerable__Distinct_int_(
               v148,
               (const MethodInfo_2F8E360 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = System_Linq_Enumerable__ToArray_int_(
                   v149,
                   (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_203;
      v151 = *((_QWORD *)Instance + 3);
      v152 = Instance;
      if ( (int)v151 >= 1 )
      {
        v153 = 0LL;
        while ( 1 )
        {
          if ( v153 >= (unsigned int)v151 )
            goto LABEL_186;
          servantEntity = this->fields.servantEntity;
          v155 = v152[v153 + 8];
          v156 = (EventPersonalMargeUpValInfo_o *)sub_1B86604(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v156, v155, servantEntity, 0LL);
          Instance = this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_203;
          Instance = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v156 )
            goto LABEL_203;
          EventPersonalMargeUpValInfo__Add(v156, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = (void *)EventPersonalMargeUpValInfo__IsEmpty(v156, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            Instance = EventPersonalMargeUpValInfo__GetList(v156, 0LL);
            if ( !Instance )
              goto LABEL_203;
            v158 = *((_QWORD *)Instance + 3);
            v159 = Instance;
            if ( (int)v158 >= 1 )
              break;
          }
LABEL_134:
          LODWORD(v151) = v152[6];
          if ( (__int64)++v153 >= (int)v151 )
            goto LABEL_135;
        }
        v160 = 0LL;
        while ( v160 < (unsigned int)v158 )
        {
          if ( !v140 )
            goto LABEL_203;
          v51 = (MethodInfo *)v159[v160 + 4];
          items = v140->fields._items;
          v162 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v140->fields._version;
          if ( !items )
            goto LABEL_203;
          size = v140->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v140,
              (Il2CppObject *)v51,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
          }
          else
          {
            v164 = &items->obj.klass + size;
            v140->fields._size = size + 1;
            v164[4] = (Il2CppClass *)v51;
            sub_1B8635C((CGThumbnailListItem_o *)(v164 + 4), (int32_t)v51, v157, v150);
          }
          LODWORD(v158) = *((_DWORD *)v159 + 6);
          if ( (__int64)++v160 >= (int)v158 )
            goto LABEL_134;
        }
        goto LABEL_186;
      }
LABEL_135:
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &infoList, 1, v150);
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_203;
      AdjustUpValInfoArray = (System_Collections_Generic_List_object__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                            (PartyOrganizationUtility_o *)Instance,
                                                                            &v220,
                                                                            (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v140,
                                                                            0LL);
      this->fields._IsDuplicateBonus_k__BackingField = v220;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      p_setupInfo = &this->fields.setupInfo;
      if ( !Instance )
        goto LABEL_203;
      goto LABEL_143;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_203;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v190 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v190,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v222 = (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v190;
    if ( !*p_setupInfo )
      goto LABEL_203;
    v192 = (*p_setupInfo)->fields.eventIdList;
    if ( !v192 )
      goto LABEL_203;
    v193 = *(_QWORD *)&v192->max_length;
    if ( (int)v193 < 1 )
    {
LABEL_184:
      PartyOrganizationListViewItem__AddFriendshipUpCampaignInfo(this, &v222, 0, v191);
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_203;
      AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                        (PartyOrganizationUtility_o *)Instance,
                        (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v190,
                        0LL);
      p_eventUpValItemList = &this->fields.eventUpValItemList;
      p_setupInfo = &this->fields.setupInfo;
LABEL_144:
      this->fields.eventUpValItemList = AddUpValInfos;
      sub_1B8635C((CGThumbnailListItem_o *)p_eventUpValItemList, (int32_t)AddUpValInfos, v169, v170);
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v172 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 1LL);
        v173 = (EventUpValSetupInfo_o *)sub_1B86604(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_39889424(v173, v172, 0, 0, 0, 0LL);
        *p_setupInfo = v173;
        sub_1B8635C((CGThumbnailListItem_o *)p_setupInfo, (int32_t)v173, v174, v175);
      }
      if ( this->fields.isEventUpVal )
      {
        v176 = this->fields.userServantEntity;
        v177 = this->fields.setupInfo;
        Instance = PartyOrganizationListViewItem__GetEquipList(this, v171);
        v178 = this->fields.questRestrictionInfo;
        if ( !v178 )
          goto LABEL_203;
        if ( !v176 )
          goto LABEL_203;
        Instance = (void *)UserServantEntity__GetBonusUpVal(
                             v176,
                             &eventUpVallInfo,
                             v177,
                             (System_Int64_array *)Instance,
                             v178->fields.questId,
                             v178->fields.questPhase,
                             0LL);
        if ( !eventUpVallInfo )
          goto LABEL_203;
        Instance = eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_203;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v215,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v216 = v215;
        while ( 1 )
        {
          v179 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v216,
                   (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v179 )
            break;
          if ( !*p_eventUpValInfo )
            sub_1B86614(v179, v180);
          v183 = (System_Collections_Generic_List_object__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v183 )
            sub_1B86614(0LL, v180);
          current = v216.fields._current;
          v185 = v183->fields._items;
          v186 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v183->fields._version;
          if ( !v185 )
            sub_1B86614(v183, current);
          v187 = v183->fields._size;
          if ( (unsigned int)v187 >= v185->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v183,
              current,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
          }
          else
          {
            v188 = &v185->obj.klass + v187;
            v183->fields._size = v187 + 1;
            v188[4] = (Il2CppClass *)current;
            sub_1B8635C((CGThumbnailListItem_o *)(v188 + 4), (int32_t)current, v181, v182);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v216,
          (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v207 = this->fields.userServantEntity;
        v208 = this->fields.setupInfo;
        Instance = PartyOrganizationListViewItem__GetEquipList(this, v171);
        v209 = this->fields.questRestrictionInfo;
        if ( !v209 || !v207 )
          goto LABEL_203;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v207,
                                      &this->fields.eventUpValInfo,
                                      v208,
                                      (System_Int64_array *)Instance,
                                      v209->fields.questId,
                                      v209->fields.questPhase,
                                      0LL);
      }
      v210 = this->fields.servantEntity;
      v211 = (EventPersonalMargeUpValInfo_o *)sub_1B86604(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v211, 0, v210, 0LL);
      Instance = this->fields.eventUpValInfo;
      if ( !Instance )
        goto LABEL_203;
      Instance = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
      if ( !v211 )
        goto LABEL_203;
      EventPersonalMargeUpValInfo__Add(v211, (EventDropItemUpValInfo_array *)Instance, 0LL);
      if ( EventPersonalMargeUpValInfo__IsEmpty(v211, 0LL) )
        return;
      if ( *p_eventUpValItemList )
      {
        v212 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v212,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        if ( !v212 )
          goto LABEL_203;
        System_Collections_Generic_List_object___AddRange(
          v212,
          (System_Collections_Generic_IEnumerable_T__o *)*p_eventUpValItemList,
          (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
        List = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v211, 0LL);
        System_Collections_Generic_List_object___AddRange(
          v212,
          List,
          (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
        v214 = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                         v212,
                                                         (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      }
      else
      {
        v214 = EventPersonalMargeUpValInfo__GetList(v211, 0LL);
      }
      v69 = (int)v214;
      *p_eventUpValItemList = v214;
      p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
LABEL_201:
      sub_1B8635C((CGThumbnailListItem_o *)p_equipIdList, v69, v52, v53);
      return;
    }
    v194 = 0LL;
    while ( 1 )
    {
      if ( v194 >= (unsigned int)v193 )
        goto LABEL_186;
      if ( !MasterData_object )
        goto LABEL_203;
      v195 = v192->m_Items[v194 + 1];
      v196 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v195,
               (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v196
        || (Instance = (void *)EventDetailEntity__HasFlag((EventDetailEntity_o *)v196, 0x800000000LL, 0LL),
            ((unsigned __int8)Instance & 1) == 0) )
      {
        v197 = this->fields.servantEntity;
        v198 = (EventPersonalMargeUpValInfo_o *)sub_1B86604(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v198, v195, v197, 0LL);
        Instance = this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_203;
        Instance = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v198 )
          goto LABEL_203;
        EventPersonalMargeUpValInfo__Add(v198, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = (void *)EventPersonalMargeUpValInfo__IsEmpty(v198, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = EventPersonalMargeUpValInfo__GetList(v198, 0LL);
          if ( !Instance )
            goto LABEL_203;
          v200 = *((_QWORD *)Instance + 3);
          v201 = Instance;
          if ( (int)v200 >= 1 )
            break;
        }
      }
LABEL_183:
      LODWORD(v193) = v192->max_length;
      if ( (__int64)++v194 >= (int)v193 )
        goto LABEL_184;
    }
    v202 = 0LL;
    while ( v202 < (unsigned int)v200 )
    {
      if ( !v190 )
        goto LABEL_203;
      v51 = (MethodInfo *)v201[v202 + 4];
      v203 = v190->fields._items;
      v204 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v190->fields._version;
      if ( !v203 )
        goto LABEL_203;
      v205 = v190->fields._size;
      if ( (unsigned int)v205 >= v203->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v190,
          (Il2CppObject *)v51,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
      }
      else
      {
        v206 = &v203->obj.klass + v205;
        v190->fields._size = v205 + 1;
        v206[4] = (Il2CppClass *)v51;
        sub_1B8635C((CGThumbnailListItem_o *)(v206 + 4), (int32_t)v51, v199, v191);
      }
      LODWORD(v200) = *((_DWORD *)v201 + 6);
      if ( (__int64)++v202 >= (int)v200 )
        goto LABEL_183;
    }
LABEL_186:
    sub_1B8661C(Instance, v51);
  }
  this->fields.equipIdList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v52, v53);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v55 = this->fields.questRestrictionInfo;
  LODWORD(v56) = this->fields.followerIndex;
  if ( v55 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v55->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = (void *)FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v56, ReturnTypeByQuestId, 0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_203;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v64 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v64 )
    {
      Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(v64->fields.questId, 0LL);
      v67 = (int)Instance;
      if ( !followerInfo )
        goto LABEL_203;
    }
    else
    {
      v67 = 0;
      if ( !followerInfo )
        goto LABEL_203;
    }
    Instance = (void *)FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v67, 0LL);
    if ( !v66 )
      goto LABEL_203;
    v70 = DataMasterBase_object__object__int___GetEntity(
            v66,
            (int32_t)Instance,
            (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    *p_equipServantEntity = (struct ServantEntity_o *)v70;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipServantEntity, (int32_t)v70, v71, v72);
  }
  v73 = this->fields.setupInfo;
  if ( v73 )
  {
    v74 = v73->fields.eventIdList;
    if ( !v74 )
      goto LABEL_203;
    if ( *(_QWORD *)&v74->max_length )
    {
      v75 = this->fields.followerInfo;
      v76 = this->fields.questRestrictionInfo;
      v77 = this->fields.followerIndex;
      if ( v76 )
      {
        Instance = (void *)FollowerInfo__GetReturnTypeByQuestId(v76->fields.questId, 0LL);
        v78 = (int)Instance;
        if ( !v75 )
          goto LABEL_203;
      }
      else
      {
        v78 = 0;
        if ( !v75 )
          goto LABEL_203;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_39899264(
                                    v75,
                                    &this->fields.eventUpValInfo,
                                    v73,
                                    v77,
                                    v78,
                                    0LL);
      v80 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v80,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v82 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v83 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v83 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__133_0 = (System_Func_object__int__o *)v83->static_fields->__9__133_0;
        if ( !_9__133_0 )
        {
          if ( !v83->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v83);
            v83 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v85 = (Il2CppObject *)v83->static_fields->__9;
          _9__133_0 = (System_Func_object__int__o *)sub_1B86604(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__133_0,
            v85,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__133_0__,
            0LL);
          v86 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v86->__9__133_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__133_0;
          sub_1B8635C((CGThumbnailListItem_o *)&v86->__9__133_0, (int32_t)_9__133_0, v87, v88);
        }
        v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v82,
                                                                     (System_Func_TSource__TResult__o *)_9__133_0,
                                                                     (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v90 = System_Linq_Enumerable__Distinct_int_(
                v89,
                (const MethodInfo_2F8E360 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = System_Linq_Enumerable__ToArray_int_(
                     v90,
                     (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v91 = *((_QWORD *)Instance + 3);
          v92 = Instance;
          if ( (int)v91 >= 1 )
          {
            v93 = 0LL;
            while ( 1 )
            {
              if ( v93 >= (unsigned int)v91 )
                goto LABEL_186;
              v94 = this->fields.servantEntity;
              v95 = v92[v93 + 8];
              v96 = (EventPersonalMargeUpValInfo_o *)sub_1B86604(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v96, v95, v94, 0LL);
              Instance = this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_203;
              Instance = EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v96 )
                goto LABEL_203;
              EventPersonalMargeUpValInfo__Add(v96, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = (void *)EventPersonalMargeUpValInfo__IsEmpty(v96, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = EventPersonalMargeUpValInfo__GetList(v96, 0LL);
                if ( !Instance )
                  goto LABEL_203;
                v99 = *((_QWORD *)Instance + 3);
                v100 = Instance;
                if ( (int)v99 >= 1 )
                  break;
              }
LABEL_57:
              LODWORD(v91) = v92[6];
              if ( (__int64)++v93 >= (int)v91 )
                goto LABEL_58;
            }
            v101 = 0LL;
            while ( v101 < (unsigned int)v99 )
            {
              if ( !v80 )
                goto LABEL_203;
              v51 = (MethodInfo *)v100[v101 + 4];
              v102 = v80->fields._items;
              v103 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v80->fields._version;
              if ( !v102 )
                goto LABEL_203;
              v104 = v80->fields._size;
              if ( (unsigned int)v104 >= v102->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v80,
                  (Il2CppObject *)v51,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
              }
              else
              {
                v105 = &v102->obj.klass + v104;
                v80->fields._size = v104 + 1;
                v105[4] = (Il2CppClass *)v51;
                sub_1B8635C((CGThumbnailListItem_o *)(v105 + 4), (int32_t)v51, v97, v98);
              }
              LODWORD(v99) = *((_DWORD *)v100 + 6);
              if ( (__int64)++v101 >= (int)v99 )
                goto LABEL_57;
            }
            goto LABEL_186;
          }
LABEL_58:
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            v106 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                                                                          (PartyOrganizationUtility_o *)Instance,
                                                                                          &isDuplicate,
                                                                                          (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v80,
                                                                                          0LL);
            Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( Instance )
            {
              v107 = PartyOrganizationUtility__GetAddUpValInfos((PartyOrganizationUtility_o *)Instance, v106, 0LL);
              this->fields.eventUpValItemList = v107;
              sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventUpValItemList, (int32_t)v107, v108, v109);
              this->fields._IsDuplicateBonus_k__BackingField = isDuplicate;
              return;
            }
          }
        }
      }
LABEL_203:
      sub_1B86614(Instance, v51);
    }
  }
}


void __fastcall PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v6; // x2

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !equipIdList->max_length )
      sub_1B8661C(this, userSvtId);
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, 0, (int32_t)method, v3);
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
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem__Set_32593628(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
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
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v31; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A4A014 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4A014 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_12;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v10, v11);
  this->fields.followerInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, 0, v14, v15);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v16 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_12;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v19;
  *(_QWORD *)&v32.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v32, 0LL);
  if ( !v17 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v21, v22);
  this->fields.classId = item->fields.classId;
  *(_QWORD *)&this->fields.cost = *(_QWORD *)&item->fields.cost;
  this->fields.atk = item->fields.atk;
  v23 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.rarityId = *(_QWORD *)&item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  if ( !v23
    || (Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                     v23->fields.limitCount,
                                     0LL),
        v24 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v24) )
  {
LABEL_12:
    sub_1B86614(Instance, v9);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v24, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v26, v27);
  equipIdList = this->fields.equipIdList;
  this->fields.isQuestRestriction = item->fields.isQuestRestriction;
  this->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  this->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  *(_DWORD *)&this->fields.isFixedSupportPositionRestriction = 0;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(int64_t *)((char *)&this->fields.npcFollowerSvtId + 5) = 0LL;
  this->fields.isUniqueIndividualityRestriction = isUniqueIndividualityRestriction;
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v31);
}


void __fastcall PartyOrganizationListViewItem__Swap(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userServantEntity; // x0
  __int64 v8; // d14
  struct System_Int32_array **p_equipSvtIdList; // x20
  __int64 v10; // d12
  __int64 v11; // d13
  __int64 v12; // d10
  __int64 v13; // d11
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
  int32_t InitPos_k__BackingField; // [xsp+10h] [xbp-150h]
  bool IsAllOutBattle_k__BackingField; // [xsp+14h] [xbp-14Ch]
  bool IsDataLost_k__BackingField; // [xsp+18h] [xbp-148h]
  int32_t TimesToRestart_k__BackingField; // [xsp+1Ch] [xbp-144h]
  bool IsNotSupportSingle_k__BackingField; // [xsp+20h] [xbp-140h]
  bool IsDisappearEquip_k__BackingField; // [xsp+24h] [xbp-13Ch]
  bool IsDisappearSvt_k__BackingField; // [xsp+28h] [xbp-138h]
  bool IsClearedWave_k__BackingField; // [xsp+2Ch] [xbp-134h]
  int32_t NowPos_k__BackingField; // [xsp+30h] [xbp-130h]
  bool IsNotClassBoardNpc_k__BackingField; // [xsp+34h] [xbp-12Ch]
  bool isRestrictionMyServantPos; // [xsp+44h] [xbp-11Ch]
  bool isRestrictionNeedStarting; // [xsp+48h] [xbp-118h]
  bool isRestrictionServantPos; // [xsp+4Ch] [xbp-114h]
  System_Array_o *equipSvtIdList; // [xsp+50h] [xbp-110h]
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // [xsp+58h] [xbp-108h]
  bool IsDispSvtPoint_k__BackingField; // [xsp+64h] [xbp-FCh]
  System_Int64_array *equipIdList; // [xsp+68h] [xbp-F8h]
  struct FollowerInfo_o *followerInfo; // [xsp+70h] [xbp-F0h]
  bool isFollower; // [xsp+78h] [xbp-E8h]
  bool isFixNpc; // [xsp+7Ch] [xbp-E4h]
  struct ServantEntity_o *servantEntity; // [xsp+80h] [xbp-E0h]
  struct System_Int32_array *commandCodeIdList; // [xsp+88h] [xbp-D8h]
  bool isServantNumRestriction; // [xsp+90h] [xbp-D0h]
  bool isFixMultipleNpcRestriction; // [xsp+94h] [xbp-CCh]
  bool isFixMultipleNpc; // [xsp+98h] [xbp-C8h]
  bool isMyServantOrNpcRestriction; // [xsp+9Ch] [xbp-C4h]
  int64_t npcFollowerSvtId; // [xsp+A0h] [xbp-C0h]
  bool haveIndividualityServant; // [xsp+ACh] [xbp-B4h]
  struct UserServantEntity_o *userServantEntity; // [xsp+B0h] [xbp-B0h]
  int64_t fatigureTime; // [xsp+B8h] [xbp-A8h]
  bool isFatigureRecover; // [xsp+C8h] [xbp-98h]

  if ( (byte_4A4A017 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, item);
    byte_4A4A017 = 1;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  followerInfo = this->fields.followerInfo;
  v8 = *(_QWORD *)&this->fields.followerClassId;
  isFollower = this->fields.isFollower;
  isFixNpc = this->fields.isFixNpc;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  v11 = *(_QWORD *)&this->fields.cost;
  v10 = *(_QWORD *)&this->fields.atk;
  v13 = *(_QWORD *)&this->fields.rarityId;
  v12 = *(_QWORD *)&this->fields.frameType;
  servantEntity = this->fields.servantEntity;
  v14 = *(_QWORD *)&this->fields.isQuestRestriction;
  commandCodeIdList = this->fields.commandCodeIdList;
  isServantNumRestriction = this->fields.isServantNumRestriction;
  isFixMultipleNpcRestriction = this->fields.isFixMultipleNpcRestriction;
  npcFollowerSvtId = this->fields.npcFollowerSvtId;
  fatigureTime = this->fields.fatigureTime;
  isFatigureRecover = this->fields.isFatigureRecover;
  isFixMultipleNpc = this->fields.isFixMultipleNpc;
  isMyServantOrNpcRestriction = this->fields.isMyServantOrNpcRestriction;
  haveIndividualityServant = this->fields.haveIndividualityServant;
  v15 = *(_QWORD *)&this->fields._SvtPoint_k__BackingField;
  if ( !item )
    sub_1B86614(p_userServantEntity, item);
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
  isRestrictionServantPos = this->fields.isRestrictionServantPos;
  IsDisappearSvt_k__BackingField = this->fields._IsDisappearSvt_k__BackingField;
  IsClearedWave_k__BackingField = this->fields._IsClearedWave_k__BackingField;
  IsDisappearEquip_k__BackingField = this->fields._IsDisappearEquip_k__BackingField;
  v16 = item->fields.userServantEntity;
  this->fields.userServantEntity = v16;
  sub_1B8635C((CGThumbnailListItem_o *)p_userServantEntity, (int32_t)v16, notChangeInitPos, method);
  v17 = item->fields.followerInfo;
  this->fields.followerInfo = v17;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.followerInfo, (int32_t)v17, v18, v19);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  v20 = item->fields.servantEntity;
  this->fields.servantEntity = v20;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v20, v21, v22);
  *(_OWORD *)&this->fields.cost = *(_OWORD *)&item->fields.cost;
  *(_OWORD *)&this->fields.rarityId = *(_OWORD *)&item->fields.rarityId;
  v23 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v23;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.commandCodeIdList, (int32_t)v23, v24, v25);
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
  v29 = &item->fields.equipSvtIdList;
  v28 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v28 )
    goto LABEL_9;
  v30 = System_Array__Clone(v28, 0LL);
  if ( !v30 )
    goto LABEL_9;
  v31 = v30;
  v32 = sub_1B864F4(v30, int___TypeInfo);
  if ( !v32
    || (*p_equipSvtIdList = (struct System_Int32_array *)v32, v33 = sub_1B864F4(v31, int___TypeInfo), v34 = v33, !v33) )
  {
    sub_1B868D4(v31);
LABEL_9:
    v34 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipSvtIdList, v34, v26, v27);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v35);
  v36 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v36;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v36, v37, v38);
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
  item->fields.userServantEntity = userServantEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&item->fields.userServantEntity, (int32_t)userServantEntity, v39, v40);
  item->fields.followerInfo = followerInfo;
  sub_1B8635C((CGThumbnailListItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v41, v42);
  *(_QWORD *)&item->fields.followerClassId = v8;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  sub_1B8635C((CGThumbnailListItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v43, v44);
  *(_QWORD *)&item->fields.cost = v11;
  *(_QWORD *)&item->fields.atk = v10;
  *(_QWORD *)&item->fields.rarityId = v13;
  *(_QWORD *)&item->fields.frameType = v12;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1B8635C((CGThumbnailListItem_o *)&item->fields.commandCodeIdList, (int32_t)commandCodeIdList, v45, v46);
  *(_QWORD *)&item->fields.isQuestRestriction = v14;
  item->fields.isServantNumRestriction = isServantNumRestriction;
  item->fields.isFixMultipleNpcRestriction = isFixMultipleNpcRestriction;
  item->fields.isFixMultipleNpc = isFixMultipleNpc;
  item->fields.npcFollowerSvtId = npcFollowerSvtId;
  item->fields.isMyServantOrNpcRestriction = isMyServantOrNpcRestriction;
  item->fields.haveIndividualityServant = haveIndividualityServant;
  item->fields.isRestrictionMyServantPos = isRestrictionMyServantPos;
  item->fields.isRestrictionNeedStarting = isRestrictionNeedStarting;
  item->fields.isRestrictionServantPos = isRestrictionServantPos;
  item->fields.fatigureTime = fatigureTime;
  item->fields.isFatigureRecover = isFatigureRecover;
  if ( !equipSvtIdList )
    goto LABEL_17;
  v49 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v49 )
    goto LABEL_17;
  v50 = v49;
  v51 = sub_1B864F4(v49, int___TypeInfo);
  if ( !v51 || (*v29 = (struct System_Int32_array *)v51, v52 = sub_1B864F4(v50, int___TypeInfo), v53 = v52, !v52) )
  {
    sub_1B868D4(v50);
LABEL_17:
    v53 = 0;
    *v29 = 0LL;
  }
  sub_1B8635C((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v53, v47, v48);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v54);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B8635C(
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
}


void __fastcall PartyOrganizationListViewItem__SwapEquip(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PartyOrganizationListViewItem_o *v5; // x22
  System_Array_o *equipSvtIdList; // x23
  _QWORD *p_equipSvtIdList; // x24
  System_Int64_array *equipIdList; // x20
  System_Array_o *v9; // x0
  struct System_Int32_array **v10; // x21
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x0
  int32_t v23; // w1
  const MethodInfo *v24; // x2

  v5 = this;
  if ( (byte_4A4A018 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1B863B8(&int___TypeInfo, item);
    byte_4A4A018 = 1;
  }
  p_equipSvtIdList = &v5->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)v5->fields.equipSvtIdList;
  if ( !item )
    sub_1B86614(this, item);
  equipIdList = v5->fields.equipIdList;
  v10 = &item->fields.equipSvtIdList;
  v9 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v9 )
    goto LABEL_9;
  v11 = System_Array__Clone(v9, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v12 = v11;
  v13 = sub_1B864F4(v11, int___TypeInfo);
  if ( !v13 || (*p_equipSvtIdList = v13, v14 = sub_1B864F4(v12, int___TypeInfo), v15 = v14, !v14) )
  {
    sub_1B868D4(v12);
LABEL_9:
    v15 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.equipSvtIdList, v15, (int32_t)method, v3);
  PartyOrganizationListViewItem__SetEquipStatus(v5, item->fields.equipIdList, v16);
  if ( !equipSvtIdList )
    goto LABEL_15;
  v19 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v19 )
    goto LABEL_15;
  v20 = v19;
  v21 = sub_1B864F4(v19, int___TypeInfo);
  if ( !v21 || (*v10 = (struct System_Int32_array *)v21, v22 = sub_1B864F4(v20, int___TypeInfo), v23 = v22, !v22) )
  {
    sub_1B868D4(v20);
LABEL_15:
    v23 = 0;
    *v10 = 0LL;
  }
  sub_1B8635C((CGThumbnailListItem_o *)&item->fields.equipSvtIdList, v23, v17, v18);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v24);
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
  struct UserServantEntity_o **p_equipUserServantEntity; // x20
  Il2CppObject *Master_object; // x21
  __int64 OverwriteStatus; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q1
  System_Int64_array *v15; // x22
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  Il2CppObject *Entity; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v23; // x21
  struct UserServantEntity_o *v24; // x8
  __int128 v25; // q1
  System_Int64_array *v26; // x22
  struct UserServantEntity_o *v27; // x8
  __int128 v28; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v34; // x20
  __int64 v35; // x21
  UserServantEntity_o *v36; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A4A032 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v5);
    sub_1B863B8(&long___TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    byte_4A4A032 = 1;
  }
  if ( this->fields.equipUserServantEntity && !this->fields._IsDisappearEquip_k__BackingField )
  {
    p_equipUserServantEntity = &this->fields.equipUserServantEntity;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
    OverwriteStatus = sub_1B86460(long___TypeInfo, 1LL);
    v13 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_51;
    v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
    v15 = (System_Int64_array *)OverwriteStatus;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v43 = v44;
    OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v43, 0LL);
    if ( !v15 )
      goto LABEL_51;
    if ( !v15->max_length )
LABEL_52:
      sub_1B8661C(OverwriteStatus, v12);
    v15->m_Items[0] = OverwriteStatus;
    if ( !Master_object )
      goto LABEL_51;
    if ( DataMasterBase_object__object__long___isEntityExistsFromId(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           v15,
           (const MethodInfo_3215DB8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      OverwriteStatus = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
      v16 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_51;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)OverwriteStatus;
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v44.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v42 = v44;
      OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v42, 0LL);
      if ( !v18 )
        goto LABEL_51;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 v18,
                 OverwriteStatus,
                 (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      *p_equipUserServantEntity = (struct UserServantEntity_o *)Entity;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, (int32_t)Entity, v20, v21);
    }
    else
    {
      this->fields._IsDisappearEquip_k__BackingField = 1;
    }
  }
  p_userServantEntity = &this->fields.userServantEntity;
  if ( this->fields.userServantEntity && !this->fields._IsDisappearSvt_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v23 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
    OverwriteStatus = sub_1B86460(long___TypeInfo, 1LL);
    v24 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_51;
    v25 = *(_OWORD *)&v24->fields.id.fields.fakeValue;
    v26 = (System_Int64_array *)OverwriteStatus;
    *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v24->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v44.fields.fakeValue = v25;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v41 = v44;
    OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v41, 0LL);
    if ( !v26 )
      goto LABEL_51;
    if ( v26->max_length )
    {
      v26->m_Items[0] = OverwriteStatus;
      if ( v23 )
      {
        if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v23,
                v26,
                (const MethodInfo_3215DB8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
        {
LABEL_35:
          this->fields._IsDisappearSvt_k__BackingField = 1;
          return;
        }
        OverwriteStatus = (__int64)*p_userServantEntity;
        if ( *p_userServantEntity )
        {
          if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)OverwriteStatus, 0LL) )
            goto LABEL_35;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          OverwriteStatus = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
          v27 = *p_userServantEntity;
          if ( *p_userServantEntity )
          {
            v28 = *(_OWORD *)&v27->fields.id.fields.fakeValue;
            v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)OverwriteStatus;
            *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v27->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v44.fields.fakeValue = v28;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v40 = v44;
            OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v40, 0LL);
            if ( v29 )
            {
              v30 = DataMasterBase_object__object__long___GetEntity(
                      v29,
                      OverwriteStatus,
                      (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              *p_userServantEntity = (struct UserServantEntity_o *)v30;
              sub_1B8635C((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)v30, v31, v32);
              OverwriteStatus = (__int64)*p_userServantEntity;
              if ( *p_userServantEntity )
              {
                OverwriteStatus = (__int64)UserServantEntity__GetOverwriteStatus(
                                             (UserServantEntity_o *)OverwriteStatus,
                                             this->fields.questRestrictionInfo,
                                             0LL);
                if ( OverwriteStatus )
                {
                  this->fields.cost = *(_DWORD *)(OverwriteStatus + 28);
                  *(_QWORD *)&this->fields.hp = *(_QWORD *)(OverwriteStatus + 16);
                  this->fields.rarityId = *(_DWORD *)(OverwriteStatus + 24);
                  v12 = *(unsigned int *)(OverwriteStatus + 40);
                  OverwriteStatus = (__int64)this->fields.userServantEntity;
                  this->fields.actualRarity = v12;
                  if ( OverwriteStatus )
                  {
                    OverwriteStatus = UserServantEntity__GetFrameType((UserServantEntity_o *)OverwriteStatus, v12, 0LL);
                    userServantEntity = this->fields.userServantEntity;
                    this->fields.frameType = OverwriteStatus;
                    if ( userServantEntity )
                    {
                      v35 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
                      v34 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v45.fields.currentCryptoKey = v35;
                      *(_QWORD *)&v45.fields.fakeValue = v34;
                      OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v45, 0LL);
                      v36 = this->fields.userServantEntity;
                      this->fields.svtLimitCount = OverwriteStatus;
                      if ( v36 )
                      {
                        CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v36, 0LL);
                        this->fields.commandCodeIdList = CommandCodeIdList;
                        sub_1B8635C(
                          (CGThumbnailListItem_o *)&this->fields.commandCodeIdList,
                          (int32_t)CommandCodeIdList,
                          v38,
                          v39);
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
LABEL_51:
      sub_1B86614(OverwriteStatus, v12);
    }
    goto LABEL_52;
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

  if ( (byte_4A4A031 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_1B863B8(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_4A4A031 = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v7 = (PartyOrganizationListViewItem_o *)sub_1B868D4(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_32594360(v7, v8, v9);
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
      sub_1B86614(this, item);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustAtk;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getAdjustAtk(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__get_AdjustHp(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.adjustHp;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
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

  if ( (byte_4A4A02D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4A02D = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v12);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1B86614(Instance, v10);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A49A43 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    byte_4A49A43 = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}


int32_t __fastcall PartyOrganizationListViewItem__get_DisplayServantType(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    return FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    return 0;
}


int32_t __fastcall PartyOrganizationListViewItem__get_EquipCost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  if ( !this->fields.isFollower
    && this->fields.servantEntity
    && (equipServantEntity = this->fields.equipServantEntity) != 0LL )
  {
    return equipServantEntity->fields.cost;
  }
  else
  {
    return -1;
  }
}


int32_t __fastcall PartyOrganizationListViewItem__get_EquipLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserServantEntity; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4A4A022 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4A022 = 1;
  }
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v5 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v11.fields.currentCryptoKey = v5;
    *(_QWORD *)&v11.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v11, 0LL);
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( questRestrictionInfo )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
      else
        ReturnTypeByQuestId = 0;
      return FollowerInfo__getEquipLimitCount(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
    }
    else
    {
      return 0;
    }
  }
}


int32_t __fastcall PartyOrganizationListViewItem__get_EquipLimitCountMax(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.limitMax;
  else
    return 0;
}


System_String_o *__fastcall PartyOrganizationListViewItem__get_EquipName(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  ServantEntity_o *equipServantEntity; // x0

  if ( (byte_4A4A023 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, method);
    byte_4A4A023 = 1;
  }
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return ServantEntity__getName(equipServantEntity, -1, -1, 0, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall PartyOrganizationListViewItem__get_EquipSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0 OVERLAPPED
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // kr00_16
  struct ServantEntity_o *equipServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4A4A021 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4A021 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  v4 = *(_QWORD *)&v5.fields.fakeValue;
  v3 = *(_QWORD *)&v5.fields.currentCryptoKey;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    v3 = *(_QWORD *)&equipServantEntity->fields.id.fields.currentCryptoKey;
    v4 = *(_QWORD *)&equipServantEntity->fields.id.fields.fakeValue;
  }
  *(_QWORD *)&result.fields.fakeValue = v4;
  *(_QWORD *)&result.fields.currentCryptoKey = v3;
  return result;
}


EquipTargetInfo_o *__fastcall PartyOrganizationListViewItem__get_EquipTarget1(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
  return FollowerInfo__getEquipTarget1(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
}


int64_t __fastcall PartyOrganizationListViewItem__get_EquipUserSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserServantEntity; // x8
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4A4A020 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A4A020 = 1;
  }
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v4 = *(_OWORD *)&equipUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v4;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0LL, 0LL);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v6, 0LL);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.exceedCount;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
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

  if ( (byte_4A4A030 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    byte_4A4A030 = 1;
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


int32_t __fastcall PartyOrganizationListViewItem__get_Level(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return userServantEntity->fields.lv;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
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
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int32_t atk; // w19
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2

  if ( this->fields.userServantEntity )
  {
    equipUserServantEntity = this->fields.equipUserServantEntity;
    atk = this->fields.atk;
    if ( equipUserServantEntity )
      atk += equipUserServantEntity->fields.atk;
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      atk = this->fields.atk;
      if ( this->fields.equipServantEntity )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        followerIndex = this->fields.followerIndex;
        if ( questRestrictionInfo )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        else
          ReturnTypeByQuestId = 0;
        atk += FollowerInfo__getEquipAtk(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
      }
    }
    else
    {
      return 0;
    }
  }
  return atk;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeCost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0
  struct ServantEntity_o *equipServantEntity; // x8

  if ( this->fields.isFollower || !this->fields.servantEntity )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  result = this->fields.cost;
  if ( equipServantEntity )
    result += equipServantEntity->fields.cost;
  return result;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeHp(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int32_t hp; // w19
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2

  if ( this->fields.userServantEntity )
  {
    equipUserServantEntity = this->fields.equipUserServantEntity;
    hp = this->fields.hp;
    if ( equipUserServantEntity )
      hp += equipUserServantEntity->fields.hp;
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      hp = this->fields.hp;
      if ( this->fields.equipServantEntity )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        followerIndex = this->fields.followerIndex;
        if ( questRestrictionInfo )
          ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        else
          ReturnTypeByQuestId = 0;
        hp += FollowerInfo__getEquipHp(followerInfo, followerIndex, ReturnTypeByQuestId, 0LL);
      }
    }
    else
    {
      return 0;
    }
  }
  return hp;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MaxLevel(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  if ( this->fields.userServantEntity )
    return UserServantEntity__getLevelMax(this->fields.userServantEntity, 0LL);
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2

  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    return 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  if ( questRestrictionInfo )
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
  else
    ReturnTypeByQuestId = 0;
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

  if ( (byte_4A4A01D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantAddMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4A01D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantAddMaster___);
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = (ServantAddMaster_o *)Master_object;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, v7);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(SvtId, 0LL);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, v11);
  if ( !v8 )
    sub_1B86614(ServantName, v13);
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

  if ( (byte_4A4A01C & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A4A01C = 1;
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

  if ( (byte_4A4A01E & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18829/*"error"*/, method);
    byte_4A4A01E = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0LL)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1B86614(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_18829/*"error"*/;
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
  sub_1B8635C(
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

  if ( (byte_4A4A1E2 & 1) == 0 )
  {
    sub_1B863B8(&PartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4A4A1E2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall PartyOrganizationListViewItem___c___ctor(
        PartyOrganizationListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__315_0(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1B86614(this, 0LL);
  return script->fields.eventCampaignBonusDetailNameTotal;
}


bool __fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__315_1(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4A4A1E3 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, names);
    byte_4A4A1E3 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__315_2(
        PartyOrganizationListViewItem___c_o *this,
        EventEntity_ScriptData_o *script,
        const MethodInfo *method)
{
  if ( !script )
    sub_1B86614(this, 0LL);
  return script->fields.eventCampaignBonusDetailName;
}


bool __fastcall PartyOrganizationListViewItem___c___AddFriendshipUpCampaignInfo_b__315_3(
        PartyOrganizationListViewItem___c_o *this,
        System_String_o *names,
        const MethodInfo *method)
{
  if ( (byte_4A4A1E4 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_1/*""*/, names);
    byte_4A4A1E4 = 1;
  }
  return System_String__op_Inequality(names, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__133_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1B86614(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__133_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1B86614(this, 0LL);
  return drop->fields.eventId;
}