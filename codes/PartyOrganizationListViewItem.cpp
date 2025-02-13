void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
}


void __fastcall PartyOrganizationListViewItem___ctor_32981460(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t limitCount,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        FollowerInfo_o *followerInfo,
        int32_t initPos,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  const MethodInfo *v21; // x2
  int v22; // w9

  if ( (byte_4BD8200 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8200 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1C21DDC(&this->fields.userServantEntity, 0LL);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.followerInfo = followerInfo;
  sub_1C21DDC(&this->fields.followerInfo, followerInfo);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C21DDC(&this->fields.servantEntity, Entity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_1C22094(Instance, v18);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_40935128(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1C21DDC(&this->fields.commandCodeIdList, 0LL);
  this->fields.fatigureTime = -1LL;
  *(_DWORD *)&this->fields.isConvertOverwriteImage = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  this->fields.isRestrictionServantPos = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  if ( initPos )
    v22 = initPos;
  else
    v22 = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v22;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v21);
}


void __fastcall PartyOrganizationListViewItem___ctor_32985232(
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
  _BOOL4 v11; // w26
  bool v19; // w25
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  struct FollowerInfo_o **p_followerInfo; // x21
  __int64 ReturnTypeByQuestId; // x0
  unsigned __int64 v23; // x1
  FollowerInfo_o *followerInfo; // x25
  int32_t v25; // w2
  int32_t v26; // w0
  FollowerInfo_o *v27; // x27
  struct QuestRestrictionInfo_o *v28; // x8
  int32_t followerIndex; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x23
  int32_t v31; // w2
  Il2CppObject *v32; // x0
  struct ServantEntity_o **p_servantEntity; // x23
  struct ServantEntity_o *v34; // x8
  ServantLimitMaster_o *v35; // x27
  __int64 v36; // x25
  __int64 v37; // x28
  FollowerInfo_o *v38; // x29
  struct QuestRestrictionInfo_o *v39; // x8
  int32_t v40; // w25
  int32_t v41; // w28
  int32_t v42; // w2
  FollowerInfo_o *v43; // x27
  struct QuestRestrictionInfo_o *v44; // x8
  int32_t v45; // w25
  int32_t v46; // w2
  FollowerInfo_o *v47; // x27
  struct QuestRestrictionInfo_o *v48; // x8
  int32_t v49; // w25
  int32_t v50; // w2
  FollowerInfo_o *v51; // x27
  struct QuestRestrictionInfo_o *v52; // x8
  int32_t v53; // w25
  int32_t v54; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  const MethodInfo *v56; // x1
  FollowerInfo_o *v57; // x27
  int32_t v58; // w25
  int v59; // w8
  __int64 v60; // x24
  unsigned int v61; // w28
  __int64 v62; // x25
  __int64 v63; // x26
  __int64 v64; // x27
  int32_t v65; // w26
  int32_t v66; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v71; // x8
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v73; // x8
  UserEventDataLostEntity_o *v74; // x22
  __int64 v75; // x24
  __int64 v76; // x25
  struct ServantEntity_o *v77; // x8
  char v78; // w22
  UserEventDataLostEntity_o *v79; // x23
  __int64 v80; // x24
  __int64 v81; // x25
  struct QuestRestrictionInfo_o *v82; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v84; // x23
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x1
  int32_t v88; // w21
  __int64 v89; // x24
  __int64 v90; // x25
  int32_t v91; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v93; // x1
  const MethodInfo *v94; // x2
  QuestRestrictionInfo_o *v95; // x8
  bool IsNotClassBoard; // w20
  int32_t v97; // [xsp+4h] [xbp-7Ch]
  QuestPhaseEntity_o *v98; // [xsp+8h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  bool isWhole; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  v11 = isFixNpc;
  v19 = isFixNpc;
  if ( (byte_4BD81FE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD81FE = 1;
  }
  isWhole = 0;
  v98 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1C21DDC(&this->fields.userServantEntity, 0LL);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C21DDC(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  ReturnTypeByQuestId = sub_1C21DDC(&this->fields.followerInfo, follower);
  this->fields.isFixNpc = v19;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v25 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_130;
  }
  else
  {
    v25 = 0;
    if ( !followerInfo )
      goto LABEL_130;
  }
  v26 = FollowerInfo__getIndex(followerInfo, followerClassId, v25, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v26;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = this->fields.followerInfo;
  v28 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( v28 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v28->fields.questId, 0LL);
    v31 = ReturnTypeByQuestId;
    if ( !v27 )
      goto LABEL_130;
  }
  else
  {
    v31 = 0;
    if ( !v27 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v27, followerIndex, v31, 0LL);
  if ( !v30 )
    goto LABEL_130;
  v32 = DataMasterBase_object__object__int___GetEntity(
          v30,
          ReturnTypeByQuestId,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v32;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C21DDC(&this->fields.servantEntity, v32);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v34 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_130;
  v97 = index;
  v35 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v37 = *(_QWORD *)&v34->fields.id.fields.currentCryptoKey;
  v36 = *(_QWORD *)&v34->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v101.fields.currentCryptoKey = v37;
  *(_QWORD *)&v101.fields.fakeValue = v36;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v101, 0LL);
  v38 = this->fields.followerInfo;
  v39 = this->fields.questRestrictionInfo;
  v40 = this->fields.followerIndex;
  v41 = ReturnTypeByQuestId;
  if ( v39 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v39->fields.questId, 0LL);
    v42 = ReturnTypeByQuestId;
    if ( !v38 )
      goto LABEL_130;
  }
  else
  {
    v42 = 0;
    if ( !v38 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v38, v40, v42, 0LL);
  if ( !v35 )
    goto LABEL_130;
  ReturnTypeByQuestId = (__int64)ServantLimitMaster__GetEntity(v35, v41, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_130;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  v43 = this->fields.followerInfo;
  v44 = this->fields.questRestrictionInfo;
  v45 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v44 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v44->fields.questId, 0LL);
    v46 = ReturnTypeByQuestId;
    if ( !v43 )
      goto LABEL_130;
  }
  else
  {
    v46 = 0;
    if ( !v43 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v43, v45, v46, 0LL);
  v47 = this->fields.followerInfo;
  v48 = this->fields.questRestrictionInfo;
  v49 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v48 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v48->fields.questId, 0LL);
    v50 = ReturnTypeByQuestId;
    if ( !v47 )
      goto LABEL_130;
  }
  else
  {
    v50 = 0;
    if ( !v47 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v47, v49, v50, 0LL);
  v51 = this->fields.followerInfo;
  v52 = this->fields.questRestrictionInfo;
  v53 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v52 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v52->fields.questId, 0LL);
    v54 = ReturnTypeByQuestId;
    if ( !v51 )
      goto LABEL_130;
  }
  else
  {
    v54 = 0;
    if ( !v51 )
      goto LABEL_130;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v51, v53, v54, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C21DDC(&this->fields.commandCodeIdList, CommandCodeIdList);
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, v56) && *p_questRestrictionInfo )
  {
    v57 = this->fields.followerInfo;
    v58 = this->fields.followerIndex;
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
    if ( !v57 )
      goto LABEL_130;
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_40179908(
                                        v57,
                                        questRestrictionInfo,
                                        v58,
                                        ReturnTypeByQuestId,
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
    v23 = (unsigned int)initPos;
  else
    v23 = (unsigned int)(v97 + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = v97 + 1;
  this->fields._InitPos_k__BackingField = v23;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, v23, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_130;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    ReturnTypeByQuestId = (__int64)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    v59 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v60 = ReturnTypeByQuestId;
    if ( v59 >= 1 )
    {
      v61 = 0;
      while ( 1 )
      {
        if ( v61 >= v59 )
          sub_1C2209C(ReturnTypeByQuestId, v23);
        v62 = *(_QWORD *)(v60 + 8LL * (int)v61 + 32);
        if ( !v62 )
          goto LABEL_130;
        v64 = *(_QWORD *)(v62 + 80);
        v63 = *(_QWORD *)(v62 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v102.fields.currentCryptoKey = v64;
        *(_QWORD *)&v102.fields.fakeValue = v63;
        v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v102, 0LL);
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v62 + 96),
                0LL);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v62, 0, 0LL);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v65,
                                 v66,
                                 DispLimitCount,
                                 0LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v62, 0LL);
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_41718544(
                                questRestrictionInfo,
                                &isWhole,
                                ServantIndividuality,
                                Rarity,
                                *(_DWORD *)(v62 + 256),
                                this->fields._InitPos_k__BackingField,
                                1,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
        {
          ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(
                                  questRestrictionInfo,
                                  ServantIndividuality,
                                  this->fields._InitPos_k__BackingField,
                                  0LL);
          if ( (ReturnTypeByQuestId & 1) == 0 )
            break;
        }
        v59 = *(_DWORD *)(v60 + 24);
        if ( (int)++v61 >= v59 )
          goto LABEL_74;
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
      ReturnTypeByQuestId = (__int64)this->fields.questRestrictionInfo;
      this->fields.isFixMultipleNpc = 1;
      if ( !ReturnTypeByQuestId )
        goto LABEL_130;
      ReturnTypeByQuestId = QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)ReturnTypeByQuestId, 0LL);
      if ( !*p_questRestrictionInfo )
        goto LABEL_130;
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
          goto LABEL_74;
      }
      else
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          goto LABEL_74;
      }
      if ( !follower )
        goto LABEL_130;
      this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    }
    else
    {
      this->fields.isFixMultipleNpc = 0;
    }
  }
LABEL_74:
  v71 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v71 && v71->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      ReturnTypeByQuestId = (__int64)NetworkManager_TypeInfo;
    }
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_130;
    ReturnTypeByQuestId = UserEventDataLostMaster__TryGetEntity(
                            (UserEventDataLostMaster_o *)Master_object,
                            &entity,
                            *(_QWORD *)(*(_QWORD *)(ReturnTypeByQuestId + 184) + 64LL),
                            (*p_questRestrictionInfo)->fields.dataLostBattleId,
                            0LL);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      v73 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_130;
      v74 = entity;
      v76 = *(_QWORD *)&v73->fields.id.fields.currentCryptoKey;
      v75 = *(_QWORD *)&v73->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v103.fields.currentCryptoKey = v76;
      *(_QWORD *)&v103.fields.fakeValue = v75;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v103, 0LL);
      if ( !v74 )
        goto LABEL_130;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v74, ReturnTypeByQuestId, 0LL);
      v77 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_130;
      v78 = ReturnTypeByQuestId;
      v79 = entity;
      v81 = *(_QWORD *)&v77->fields.id.fields.currentCryptoKey;
      v80 = *(_QWORD *)&v77->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v104.fields.currentCryptoKey = v81;
      *(_QWORD *)&v104.fields.fakeValue = v80;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v104, 0LL);
      if ( !v79 )
        goto LABEL_130;
      if ( (v78 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v79,
                                                         ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v79, ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  this->fields.isFatigureRecover = 0;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields.fatigureTime = -1LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  v82 = this->fields.questRestrictionInfo;
  if ( v82 )
  {
    eventId = v82->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    v84 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (__int64)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_130;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v85) )
        {
          ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v87);
          if ( !ReturnTypeByQuestId )
            goto LABEL_130;
          v88 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v88;
          ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v23);
          if ( !ReturnTypeByQuestId )
            goto LABEL_130;
          v90 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v89 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v105.fields.currentCryptoKey = v90;
          *(_QWORD *)&v105.fields.fakeValue = v89;
          v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v105, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v84, eventId, v88, v91, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v86);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v23) )
    goto LABEL_125;
  ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v93);
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v95 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v98,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v98;
          if ( !v98 )
            goto LABEL_130;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v98, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v23);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v95) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                            (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                            0LL);
          goto LABEL_129;
        }
      }
LABEL_130:
      sub_1C22094(ReturnTypeByQuestId, v23);
    }
  }
  else
  {
LABEL_125:
    LOBYTE(v95) = 0;
  }
LABEL_129:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v95;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v94);
}


void __fastcall PartyOrganizationListViewItem___ctor_33012864(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x20
  __int64 Instance; // x0
  __int64 v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x26
  __int64 v24; // x27
  __int64 v25; // x28
  Il2CppObject *v26; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  ServantLimitMaster_o *v28; // x27
  int32_t v29; // w28
  ServantLimitEntity_o *v30; // x27
  int v31; // w9
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x24
  struct System_Int32_array *v34; // x0
  struct System_Int32_array **p_equipSvtIdList; // x25
  __int64 v36; // x0
  __int64 v37; // x1
  struct UserServantEntity_o *v38; // x8
  __int64 v39; // x24
  __int64 v40; // x25
  UserServantEntity_o *v41; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  QuestRestrictionInfo_o *v43; // x24
  struct UserServantEntity_o *v44; // x8
  __int64 v45; // x25
  __int64 v46; // x26
  int32_t v47; // w25
  int32_t v48; // w26
  QuestRestrictionInfo_o *v49; // x24
  UserServantEntity_o *v50; // x8
  __int64 v51; // x25
  __int64 v52; // x26
  int32_t v53; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v55; // x2
  struct QuestRestrictionInfo_o *v56; // x8
  UserServantEntity_o *v57; // x9
  UserEventServantFatigueMaster_o *v58; // x25
  int32_t eventId; // w26
  __int64 v60; // x27
  __int64 v61; // x28
  int64_t v62; // x24
  struct QuestRestrictionInfo_o *v63; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v65; // x8
  UserEventAlloutBattleMaster_o *v66; // x25
  __int64 v67; // x26
  __int64 v68; // x27
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v70; // x8
  UserEventDataLostEntity_o *v71; // x24
  __int64 v72; // x25
  __int64 v73; // x26
  UserServantEntity_o *v74; // x8
  char v75; // w24
  UserEventDataLostEntity_o *v76; // x25
  __int64 v77; // x26
  __int64 v78; // x27
  const MethodInfo *v79; // x2
  int v80; // w8
  __int64 v81; // x24
  unsigned int v82; // w29
  __int64 v83; // x25
  __int64 v84; // x26
  __int64 v85; // x27
  int32_t v86; // w26
  int32_t v87; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  int32_t v91; // w22
  EventServantPointRankMaster_o *v92; // x23
  const MethodInfo *v93; // x2
  UserServantEntity_o *v94; // x8
  __int128 v95; // q0
  UserEventServantPointMaster_o *v96; // x24
  int64_t v97; // x25
  int32_t SvtPoint_k__BackingField; // w24
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v101; // x2
  struct UserServantEntity_o *v102; // x8
  __int128 v103; // q0
  Il2CppObject *v104; // x22
  UserServantEntity_o *v105; // x8
  __int128 v106; // q0
  System_Int64_array *v107; // x23
  PartyOrganizationListViewItem_o *v108; // x0
  int32_t v109; // w1
  const MethodInfo *v110; // x2
  System_Int64_array *equipIdLista; // [xsp+18h] [xbp-118h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+28h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+90h] [xbp-A0h]
  UserEventServantPointEntity_o *v117; // [xsp+B0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+BCh] [xbp-74h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+C0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16

  if ( (byte_4BD81FD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD81FD = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  isWhole = 0;
  v117 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1C21DDC(&this->fields.userServantEntity, userServantEntity);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C21DDC(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  this->fields.followerInfo = 0LL;
  sub_1C21DDC(&this->fields.followerInfo, 0LL);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_144;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  equipIdLista = equipIdList;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_144;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v25 = *(_QWORD *)&v22[5].fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v121.fields.currentCryptoKey = v25;
  *(_QWORD *)&v121.fields.fakeValue = v24;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v121, 0LL);
  if ( !v23 )
    goto LABEL_144;
  v26 = DataMasterBase_object__object__int___GetEntity(
          v23,
          Instance,
          (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v26;
  p_servantEntity = &this->fields.servantEntity;
  sub_1C21DDC(&this->fields.servantEntity, v26);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_144;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_144;
  v28 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_144;
  v29 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userServantEntity)[6], 0LL);
  if ( !v28 )
    goto LABEL_144;
  v30 = ServantLimitMaster__GetEntity(v28, v29, Instance, 0LL);
  if ( initPos )
    v31 = initPos;
  else
    v31 = index + 1;
  this->fields._InitPos_k__BackingField = v31;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v32 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL)) == 0LL )
  {
    v37 = 0LL;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    Instance = sub_1C21DDC(p_equipSvtIdList, v37);
    if ( !*p_servantEntity )
      goto LABEL_144;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !v30 )
      goto LABEL_144;
    Instance = (__int64)this->fields.userServantEntity;
    this->fields.rarityId = v30->fields.rarity;
    if ( !Instance )
      goto LABEL_144;
    Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
    v38 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v38 )
      goto LABEL_144;
    v40 = *(_QWORD *)&v38->fields.limitCount.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v38->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v122.fields.currentCryptoKey = v40;
    *(_QWORD *)&v122.fields.fakeValue = v39;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v122, 0LL);
    v41 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v41 )
      goto LABEL_144;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v41, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    Instance = sub_1C21DDC(&this->fields.commandCodeIdList, CommandCodeIdList);
    v43 = this->fields.questRestrictionInfo;
    if ( v43 )
    {
      v44 = this->fields.userServantEntity;
      if ( !v44 )
        goto LABEL_144;
      v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v123.fields.currentCryptoKey = v46;
      *(_QWORD *)&v123.fields.fakeValue = v45;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v123, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_144;
      v47 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*p_userServantEntity)[6], 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_144;
      v48 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_144;
      Instance = QuestRestrictionInfo__IsRestriction_41718260(
                   v43,
                   &this->fields.isQuestRestrictionWhole,
                   v47,
                   v48,
                   Instance,
                   (*p_userServantEntity)[16].fields.currentCryptoKey,
                   this->fields._InitPos_k__BackingField,
                   1,
                   0LL);
      v49 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v49 )
      {
        v50 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v52 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
        v51 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v124.fields.currentCryptoKey = v52;
        *(_QWORD *)&v124.fields.fakeValue = v51;
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v124, 0LL);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v49, v53, 0LL);
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
    this->fields.isFatigureRecover = 0;
    this->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    this->fields.isFixMultipleNpc = 0;
    this->fields.npcFollowerSvtId = 0LL;
    this->fields.fatigureTime = -1LL;
    *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = 0;
    this->fields._IsNotSupportSingle_k__BackingField = 0;
    this->fields._IsDispSvtPoint_k__BackingField = 0;
    *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
    this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
    Instance = sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
    v56 = this->fields.questRestrictionInfo;
    this->fields._IsNotClassBoardNpc_k__BackingField = 0;
    this->fields._IsClearedWave_k__BackingField = isClearedWave;
    *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
    if ( !v56 )
    {
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 0, v55);
      goto LABEL_143;
    }
    if ( v56->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_144;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_144;
      v57 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_144;
      v58 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v61 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
      v60 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v125.fields.currentCryptoKey = v61;
      *(_QWORD *)&v125.fields.fakeValue = v60;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v125, 0LL);
      if ( !v58 )
        goto LABEL_144;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v58,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v62 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0LL);
        if ( v62 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v63 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_144;
    if ( v63->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v63->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_144;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v65 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_144;
      v66 = (UserEventAlloutBattleMaster_o *)Instance;
      v68 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v126.fields.currentCryptoKey = v68;
      *(_QWORD *)&v126.fields.fakeValue = v67;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v126, 0LL);
      if ( !*p_questRestrictionInfo || !v66 )
        goto LABEL_144;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v66,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0LL);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_144;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      if ( !*p_questRestrictionInfo || !Master_object )
        goto LABEL_144;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_object,
                   &entity,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v70 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v71 = entity;
        v73 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v127.fields.currentCryptoKey = v73;
        *(_QWORD *)&v127.fields.fakeValue = v72;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v127, 0LL);
        if ( !v71 )
          goto LABEL_144;
        Instance = UserEventDataLostEntity__IsRestart(v71, Instance, 0LL);
        v74 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v75 = Instance;
        v76 = entity;
        v78 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
        v77 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v128.fields.currentCryptoKey = v78;
        *(_QWORD *)&v128.fields.fakeValue = v77;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v128, 0LL);
        if ( !v76 )
          goto LABEL_144;
        if ( (v75 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v76, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v76, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_144;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_144;
        v80 = *(_DWORD *)(Instance + 24);
        v81 = Instance;
        if ( v80 >= 1 )
        {
          v82 = 0;
          while ( 1 )
          {
            if ( v82 >= v80 )
              goto LABEL_145;
            v83 = *(_QWORD *)(v81 + 8LL * (int)v82 + 32);
            if ( !v83 )
              goto LABEL_144;
            v85 = *(_QWORD *)(v83 + 80);
            v84 = *(_QWORD *)(v83 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v129.fields.currentCryptoKey = v85;
            *(_QWORD *)&v129.fields.fakeValue = v84;
            v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v129, 0LL);
            v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                    *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v83 + 96),
                    0LL);
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v83, 0, 0LL);
            ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                     questRestrictionInfo,
                                     v86,
                                     v87,
                                     DispLimitCount,
                                     0LL);
            Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v83, 0LL);
            Instance = QuestRestrictionInfo__IsRestriction_41718544(
                         questRestrictionInfo,
                         &isWhole,
                         ServantIndividuality,
                         Rarity,
                         *(_DWORD *)(v83 + 256),
                         this->fields._InitPos_k__BackingField,
                         1,
                         0LL);
            if ( (Instance & 1) == 0 )
            {
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(
                           questRestrictionInfo,
                           ServantIndividuality,
                           this->fields._InitPos_k__BackingField,
                           0LL);
              if ( (Instance & 1) == 0 )
                break;
            }
            v80 = *(_DWORD *)(v81 + 24);
            if ( (int)++v82 >= v80 )
              goto LABEL_108;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_108:
    if ( !*p_questRestrictionInfo )
      goto LABEL_144;
    v91 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_144;
    v92 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v91, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v94 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_144;
      v95 = *(_OWORD *)&v94->fields.userId.fields.fakeValue;
      v96 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&v94->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v116.fields.fakeValue = v95;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v115 = v116;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v115, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_144;
      v97 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
      if ( !v96 )
        goto LABEL_144;
      if ( UserEventServantPointMaster__TryGetEntity(v96, &v117, v97, v91, Instance, 0LL) )
      {
        Instance = (__int64)v117;
        if ( !v117 )
          goto LABEL_144;
        this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v117, 0LL);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_144;
      SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v92, v91, SvtPoint_k__BackingField, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v91, v101);
    }
    PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 1, v93);
    v102 = this->fields.userServantEntity;
    if ( !v102 )
      goto LABEL_144;
    v103 = *(_OWORD *)&v102->fields.id.fields.fakeValue;
    *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&v102->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v116.fields.fakeValue = v103;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v114 = v116;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v114, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v104 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1C21EE0(long___TypeInfo, 1LL);
      v105 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_144;
      v106 = *(_OWORD *)&v105->fields.id.fields.fakeValue;
      v107 = (System_Int64_array *)Instance;
      *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&v105->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v116.fields.fakeValue = v106;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v113 = v116;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v113, 0LL);
      if ( !v107 )
        goto LABEL_144;
      if ( !v107->max_length )
LABEL_145:
        sub_1C2209C(Instance, v21);
      v107->m_Items[0] = Instance;
      if ( !v104 )
        goto LABEL_144;
      if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
              (DataMasterBase_TMaster__TEntity__PKType__o *)v104,
              v107,
              (const MethodInfo_325D900 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
      {
LABEL_142:
        this->fields._IsDisappearSvt_k__BackingField = 1;
        goto LABEL_143;
      }
    }
    Instance = (__int64)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL) )
        goto LABEL_142;
LABEL_143:
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdLista, v79);
      return;
    }
LABEL_144:
    sub_1C22094(Instance, v21);
  }
  v33 = v32;
  v34 = (struct System_Int32_array *)sub_1C21F74(v32, int___TypeInfo);
  if ( v34 )
  {
    this->fields.equipSvtIdList = v34;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v36 = sub_1C21F74(v33, int___TypeInfo);
    if ( v36 )
    {
      v37 = v36;
      goto LABEL_21;
    }
  }
  else
  {
    sub_1C22354(v33);
  }
  v108 = (PartyOrganizationListViewItem_o *)sub_1C22354(v33);
  PartyOrganizationListViewItem__SetCanGetBuddyPoint(v108, v109, v110);
}


void __fastcall PartyOrganizationListViewItem___ctor_33022220(
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
  int v16; // w1
  UserServantEntity_array *Instance; // x0
  __int64 v18; // x1
  int max_length; // w8
  UserServantEntity_array *v20; // x22
  unsigned int v21; // w26
  UserServantEntity_o *v22; // x23
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t v25; // w24
  int32_t v26; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  const MethodInfo *v30; // x2
  struct QuestRestrictionInfo_o *v31; // x8
  int32_t eventId; // w21
  bool isWhole; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v15 = isFollower;
  if ( (byte_4BD81FF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD81FF = 1;
  }
  isWhole = 0;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1C21DDC(&this->fields.userServantEntity, 0LL);
  this->fields.followerInfo = 0LL;
  sub_1C21DDC(&this->fields.followerInfo, 0LL);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isFollower = v15;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.servantEntity = 0LL;
  sub_1C21DDC(&this->fields.servantEntity, 0LL);
  if ( initPos )
    v16 = initPos;
  else
    v16 = index + 1;
  *(_QWORD *)&this->fields.classId = 0LL;
  this->fields._InitPos_k__BackingField = v16;
  this->fields._NowPos_k__BackingField = index + 1;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_30:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_31;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, v16, 0LL) )
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
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  max_length = Instance->max_length;
  v20 = Instance;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1C2209C(Instance, v18);
      v22 = v20->m_Items[v21];
      if ( !v22 )
        goto LABEL_39;
      v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v24;
      *(_QWORD *)&v34.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v34, 0LL);
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v22->fields.limitCount, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(v22, 0, 0LL);
      ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                               questRestrictionInfo,
                               v25,
                               v26,
                               DispLimitCount,
                               0LL);
      Rarity = UserServantEntity__getRarity(v22, 0LL);
      Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestriction_41718544(
                                              questRestrictionInfo,
                                              &isWhole,
                                              ServantIndividuality,
                                              Rarity,
                                              v22->fields.lv,
                                              this->fields._InitPos_k__BackingField,
                                              1,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(
                                                questRestrictionInfo,
                                                ServantIndividuality,
                                                this->fields._InitPos_k__BackingField,
                                                0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
      max_length = v20->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_31;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_31:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1C21DDC(&this->fields.commandCodeIdList, 0LL);
  *(_WORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields.isRestrictionServantPos = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields.fatigureTime = -1LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  v31 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !v31 )
    goto LABEL_37;
  eventId = v31->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_39:
    sub_1C22094(Instance, v18);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v30);
  }
LABEL_37:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v30);
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
  int32_t DispLimitCount; // w25
  const MethodInfo *v30; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v32; // x23
  __int64 v33; // x24
  int32_t v34; // w23
  const MethodInfo *v35; // x1
  int32_t v36; // w24
  UserServantEntity_o *v37; // x8
  bool IsUniqueIndividualityRestriction_41484656; // w0
  const MethodInfo *v39; // x1
  QuestRestrictionInfo_o *v40; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // kr00_16
  int32_t v42; // w0
  int32_t v43; // w27
  int32_t v44; // w28
  const MethodInfo *v45; // x1
  int32_t DispImageLimitCount; // w0
  struct QuestRestrictionInfo_o *v47; // x8
  FollowerInfo_o *v48; // x22
  System_Int32_array *NpcServantIndividualityFull; // x0
  QuestRestrictionInfo_o *v50; // x23
  System_Int32_array *v51; // x22
  const MethodInfo *v52; // x1
  int32_t Rarity; // w24
  const MethodInfo *v54; // x1
  FollowerInfo_o *v55; // x23
  struct QuestRestrictionInfo_o *v56; // x22
  int32_t followerIndex; // w24
  int32_t v58; // w5
  FollowerInfo_o *v59; // x23
  struct QuestRestrictionInfo_o *v60; // x22
  int32_t v61; // w24
  int32_t v62; // w5
  bool IsUniqueIndividualityRestriction_40180504; // w0
  const MethodInfo *v64; // x1
  QuestRestrictionInfo_o *v65; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_41724636; // w0
  QuestRestrictionInfo_o *v68; // x8
  QuestRestrictionInfo_o *v69; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v71; // w0
  int32_t svtLimitCount; // w22
  int32_t v73; // w23
  const MethodInfo *v74; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4BD820A & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD820A = 1;
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
      goto LABEL_86;
    if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)followerInfo, 0LL)
      && (v23 = this->fields.questRestrictionInfo) != 0LL )
    {
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !followerInfo )
        goto LABEL_86;
      v25 = *(_QWORD *)&followerInfo->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&followerInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v77.fields.currentCryptoKey = v25;
      *(_QWORD *)&v77.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v77, 0LL);
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v27);
      if ( !followerInfo )
        goto LABEL_86;
      limitCount = followerInfo->fields.limitCount;
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !followerInfo )
        goto LABEL_86;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(followerInfo, 0LL);
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v30);
      if ( !followerInfo )
        goto LABEL_86;
      followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41718260(
                                              v23,
                                              &this->fields.isQuestRestrictionWhole,
                                              v26,
                                              limitCount,
                                              DispLimitCount,
                                              followerInfo->fields.lv,
                                              this->fields._InitPos_k__BackingField,
                                              2,
                                              0LL);
      this->fields.isQuestRestriction = (unsigned __int8)followerInfo & 1;
      if ( ((unsigned __int8)followerInfo & 1) == 0 )
      {
        followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !followerInfo )
          goto LABEL_86;
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
                                                (QuestRestrictionInfo_o *)followerInfo,
                                                this->fields._InitPos_k__BackingField,
                                                0LL);
        if ( ((unsigned __int8)followerInfo & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !followerInfo )
            goto LABEL_86;
          v33 = *(_QWORD *)&followerInfo->fields.svtId.fields.currentCryptoKey;
          v32 = *(_QWORD *)&followerInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v78.fields.currentCryptoKey = v33;
          *(_QWORD *)&v78.fields.fakeValue = v32;
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v78, 0LL);
          followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v35);
          if ( !followerInfo )
            goto LABEL_86;
          v36 = followerInfo->fields.limitCount;
          followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !followerInfo )
            goto LABEL_86;
          followerInfo = (ServantLeaderInfo_o *)ServantLeaderInfo__getDispLimitCount(followerInfo, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_86;
          followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                  questRestrictionInfo,
                                                  v34,
                                                  v36,
                                                  (int32_t)followerInfo,
                                                  this->fields._InitPos_k__BackingField,
                                                  1,
                                                  0LL);
          goto LABEL_61;
        }
      }
    }
    else
    {
LABEL_48:
      followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !followerInfo )
        goto LABEL_62;
      followerInfo = (ServantLeaderInfo_o *)this->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_86;
      followerInfo = (ServantLeaderInfo_o *)FollowerInfo__get_IsNpc((FollowerInfo_o *)followerInfo, 0LL);
      if ( ((unsigned __int8)followerInfo & 1) != 0 && (v47 = this->fields.questRestrictionInfo) != 0LL )
      {
        v48 = this->fields.followerInfo;
        followerInfo = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v47->fields.questId, 0LL);
        if ( !v48 )
          goto LABEL_86;
        NpcServantIndividualityFull = FollowerInfo__GetNpcServantIndividualityFull(v48, 0, (int32_t)followerInfo, 0LL);
        v50 = this->fields.questRestrictionInfo;
        v51 = NpcServantIndividualityFull;
        followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v52);
        if ( !followerInfo )
          goto LABEL_86;
        Rarity = ServantLeaderInfo__getRarity(followerInfo, 0LL);
        followerInfo = PartyOrganizationListViewItem__get_ServantLeader(this, v54);
        if ( !followerInfo || !v50 )
          goto LABEL_86;
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41718544(
                                                v50,
                                                &this->fields.isQuestRestrictionWhole,
                                                v51,
                                                Rarity,
                                                followerInfo->fields.lv,
                                                this->fields._InitPos_k__BackingField,
                                                3,
                                                0LL);
        this->fields.isQuestRestriction = (unsigned __int8)followerInfo & 1;
        if ( ((unsigned __int8)followerInfo & 1) == 0 )
        {
          followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
          if ( !followerInfo )
            goto LABEL_86;
          followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
                                                  (QuestRestrictionInfo_o *)followerInfo,
                                                  this->fields._InitPos_k__BackingField,
                                                  0LL);
          if ( ((unsigned __int8)followerInfo & 1) != 0 )
          {
            followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !followerInfo )
              goto LABEL_86;
            followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(
                                                    (QuestRestrictionInfo_o *)followerInfo,
                                                    v51,
                                                    this->fields._InitPos_k__BackingField,
                                                    0LL);
LABEL_61:
            this->fields.isQuestRestriction = (unsigned __int8)followerInfo & 1;
          }
        }
      }
      else
      {
LABEL_62:
        *(_WORD *)&this->fields.isQuestRestriction = 0;
      }
    }
    v55 = this->fields.followerInfo;
    v56 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v56 )
    {
      followerInfo = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v56->fields.questId, 0LL);
      v58 = (int)followerInfo;
      if ( !v55 )
        goto LABEL_86;
    }
    else
    {
      v58 = 0;
      if ( !v55 )
        goto LABEL_86;
    }
    followerInfo = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_40180344(
                                            v55,
                                            v56,
                                            followerIndex,
                                            partyItem,
                                            num,
                                            v58,
                                            0LL);
    v59 = this->fields.followerInfo;
    v60 = this->fields.questRestrictionInfo;
    v61 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)followerInfo & 1;
    if ( v60 )
    {
      followerInfo = (ServantLeaderInfo_o *)FollowerInfo__GetReturnTypeByQuestId(v60->fields.questId, 0LL);
      v62 = (int)followerInfo;
      if ( !v59 )
        goto LABEL_86;
    }
    else
    {
      v62 = 0;
      if ( !v59 )
        goto LABEL_86;
    }
    IsUniqueIndividualityRestriction_40180504 = FollowerInfo__IsUniqueIndividualityRestriction_40180504(
                                                  v59,
                                                  v60,
                                                  v61,
                                                  partyItem,
                                                  num,
                                                  v62,
                                                  0LL);
    v65 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40180504;
    if ( v65 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v64);
      IsFixedSupportPosition_41724636 = QuestRestrictionInfo__IsFixedSupportPosition_41724636(
                                          v65,
                                          num,
                                          ServantLeader,
                                          0LL);
      v68 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_41724636;
      if ( v68 )
      {
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsUseOldMaster(v68, 0LL);
        if ( ((unsigned __int8)followerInfo & 1) == 0 )
          goto LABEL_80;
        if ( !partyItem )
          goto LABEL_86;
        followerInfo = (ServantLeaderInfo_o *)PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( !followerInfo )
          goto LABEL_86;
        if ( LOBYTE(followerInfo->fields.imagePartsGroupInfo) )
          goto LABEL_80;
        followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
        if ( !followerInfo )
          goto LABEL_86;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport((QuestRestrictionInfo_o *)followerInfo, 0LL) )
        {
LABEL_80:
          v69 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, (const MethodInfo *)partyItem);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v73 = v71;
          followerInfo = (ServantLeaderInfo_o *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v74);
          if ( v69 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v69,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v73,
              svtLimitCount,
              (int32_t)followerInfo,
              num,
              1,
              0LL);
            return;
          }
          goto LABEL_86;
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
  *(_QWORD *)&v75.fields.currentCryptoKey = v10;
  *(_QWORD *)&v75.fields.fakeValue = v9;
  followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v75, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12 )
    goto LABEL_86;
  v13 = (int)followerInfo;
  followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                          v12->fields.limitCount,
                                          0LL);
  if ( !this->fields.userServantEntity )
    goto LABEL_86;
  v14 = (int)followerInfo;
  followerInfo = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
  v15 = this->fields.userServantEntity;
  if ( !v15 )
    goto LABEL_86;
  followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41718260(
                                          v8,
                                          &this->fields.isQuestRestrictionWhole,
                                          v13,
                                          v14,
                                          (int32_t)followerInfo,
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
      *(_QWORD *)&v76.fields.currentCryptoKey = v19;
      *(_QWORD *)&v76.fields.fakeValue = v18;
      followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                              v76,
                                              0LL);
      v20 = this->fields.userServantEntity;
      if ( v20 )
      {
        v21 = (int)followerInfo;
        followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
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
LABEL_86:
    sub_1C22094(followerInfo, partyItem);
  }
LABEL_40:
  followerInfo = (ServantLeaderInfo_o *)this->fields.userServantEntity;
  if ( !followerInfo )
    goto LABEL_86;
  followerInfo = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_41484276(
                                          (UserServantEntity_o *)followerInfo,
                                          this->fields.questRestrictionInfo,
                                          partyItem,
                                          num,
                                          -1,
                                          0LL);
  v37 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)followerInfo & 1;
  if ( !v37 )
    goto LABEL_86;
  IsUniqueIndividualityRestriction_41484656 = UserServantEntity__IsUniqueIndividualityRestriction_41484656(
                                                v37,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v40 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41484656;
  if ( v40 )
  {
    v41 = PartyOrganizationListViewItem__get_SvtId(this, v39);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v41, 0LL);
    v43 = this->fields.svtLimitCount;
    v44 = v42;
    DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v45);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v40,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v44,
      v43,
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
    sub_1C2209C(this, equipIdList);
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
  this->fields.followerInfo = 0LL;
  sub_1C21DDC(&this->fields.followerInfo, 0LL);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t index; // w22
  __int64 v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4BD8201 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    byte_4BD8201 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
  *(_DWORD *)(v6 + 304) = -1;
  *(_DWORD *)(v6 + 360) = -1;
  ListViewItem___ctor_41996612((ListViewItem_o *)v6, index, 0LL);
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
  _BOOL4 isFollower; // w10
  bool v6; // zf
  int v7; // w10
  char v8; // w9
  signed int v10; // w9
  signed int v11; // w22
  signed int v12; // w8
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v14; // x10

  v4 = this;
  if ( (byte_4BD820B & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD820B = 1;
  }
  if ( !item )
LABEL_26:
    sub_1C22094(this, item);
  if ( v4->fields.npcFollowerSvtId != item->fields.npcFollowerSvtId )
    return 0;
  isFollower = item->fields.isFollower;
  v6 = !isFollower;
  v7 = isFollower || v4->fields.isFollower;
  v8 = v6;
  if ( v7 )
    return v8 ^ v4->fields.isFollower;
  if ( v4->fields.userServantEntity != item->fields.userServantEntity
    || v4->fields._InitPos_k__BackingField != item->fields._InitPos_k__BackingField )
  {
    return 0;
  }
  if ( !v4->fields.equipIdList || !item->fields.equipIdList )
    return 1;
  v10 = 0;
  this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
  do
  {
    v11 = v10;
    if ( !LODWORD(this->fields.npcFollowerSvtId) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v12 = *(_DWORD *)(*(_QWORD *)&this->fields.classId + 40LL);
    if ( v11 >= v12 )
      break;
    equipIdList = v4->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_26;
    if ( v11 >= equipIdList->max_length )
      goto LABEL_27;
    v14 = item->fields.equipIdList;
    if ( !v14 )
      goto LABEL_26;
    if ( v11 >= v14->max_length )
LABEL_27:
      sub_1C2209C(this, item);
    v6 = equipIdList->m_Items[v11] == v14->m_Items[v11];
    v10 = v11 + 1;
  }
  while ( v6 );
  return v11 >= v12;
}


void __fastcall PartyOrganizationListViewItem__Empty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  this->fields.userServantEntity = 0LL;
  sub_1C21DDC(&this->fields.userServantEntity, 0LL);
  this->fields.followerInfo = 0LL;
  sub_1C21DDC(&this->fields.followerInfo, 0LL);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_1C21DDC(&this->fields.equipIdList, 0LL);
  this->fields.servantEntity = 0LL;
  sub_1C21DDC(&this->fields.servantEntity, 0LL);
  *(_OWORD *)&this->fields.classId = xmmword_BFF4B0;
  this->fields.commandCodeIdList = 0LL;
  sub_1C21DDC(&this->fields.commandCodeIdList, 0LL);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v3);
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 SvtId; // x0
  __int64 v7; // x1
  UserServantEntity_o *v8; // x8
  int32_t v9; // w19
  int32_t CardImageLimitCount; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  FollowerInfo_o *v16; // x20
  struct QuestRestrictionInfo_o *v17; // x8
  int32_t v18; // w21
  int32_t v19; // w2
  int32_t v20; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4BD821B & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&UINarrowFigureRender_TypeInfo);
    byte_4BD821B = 1;
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
    v16 = this->fields.followerInfo;
    v17 = this->fields.questRestrictionInfo;
    v18 = this->fields.followerIndex;
    v9 = SvtId;
    if ( v17 )
    {
      SvtId = FollowerInfo__GetReturnTypeByQuestId(v17->fields.questId, 0LL);
      v19 = SvtId;
      if ( !v16 )
        goto LABEL_20;
    }
    else
    {
      v19 = 0;
      if ( !v16 )
        goto LABEL_20;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v16, v18, v19, 0LL);
    goto LABEL_16;
  }
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v5;
  *(_QWORD *)&v21.fields.fakeValue = v4;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v21, 0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_20:
    sub_1C22094(SvtId, v7);
  v9 = SvtId;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v8, 0, 0LL);
LABEL_16:
  v20 = CardImageLimitCount;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  return UINarrowFigureRender__GetAssetName(v9, v20, 0LL);
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

  if ( (byte_4BD821D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD821D = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_21:
        sub_1C22094(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C22094(v5, 0LL);
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

  if ( (byte_4BD821A & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BD821A = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 3LL);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0LL )
LABEL_15:
    sub_1C22094(result, v5);
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
        sub_1C2209C(result, v5);
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

  if ( (byte_4BD821C & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD821C = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C22094(v5, 0LL);
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
  System_Array_o *equipIdList; // x0
  System_Int64_array *result; // x0
  System_Int64_array *v5; // x19
  BalanceConfig_c *v6; // x0
  PartyOrganizationListViewItem_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BD820C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    byte_4BD820C = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v5 = result;
      result = (System_Int64_array *)sub_1C21F74(result, long___TypeInfo);
      if ( !result )
      {
        v7 = (PartyOrganizationListViewItem_o *)sub_1C22354(v5);
        return (System_Int64_array *)*(_OWORD *)&PartyOrganizationListViewItem__get_EquipSvtId(v7, v8);
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
    return (System_Int64_array *)sub_1C21EE0(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax);
  }
  return result;
}


bool __fastcall PartyOrganizationListViewItem__GetEventUpVal(
        PartyOrganizationListViewItem_o *this,
        EventUpValInfo_o **eventUpValInfo,
        const MethodInfo *method)
{
  EventUpValInfo_o *v3; // x8

  v3 = this->fields.eventUpValInfo;
  *eventUpValInfo = v3;
  sub_1C21DDC(eventUpValInfo, v3);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4BD8219 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8219 = 1;
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

  if ( (byte_4BD8218 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8218 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1C22094(v5, 0LL);
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


System_String_o *__fastcall PartyOrganizationListViewItem__GetMyServantOrNpcRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4BD821F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD821F = 1;
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

  if ( (byte_4BD8220 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8220 = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C22094(v5, 0LL);
  }
  LODWORD(v5) = UserServantEntity__getPortraitLimitCount(userServantEntity, 0, 0LL);
  return v5;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetQuestRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v4; // x0
  struct QuestRestrictionInfo_o *v6; // x0
  System_String_o *v7; // x20
  System_String_o *ConfirmRestrictionMessage; // x1

  if ( (byte_4BD8215 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10484/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8215 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( v4 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v4, 0LL);
LABEL_32:
    sub_1C22094(v4, method);
  }
  if ( this->fields.index >= 1 )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( v6 )
    {
      if ( v6->fields.isFixedMyServantSingle )
        return QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(v6, 0LL);
    }
  }
  if ( this->fields.isServantNumRestriction )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v4, 0LL);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v4, 0LL);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcMessage(v4, 0LL);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v7 = (System_String_o *)v4;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_63115476(v7, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v4 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
      method = 0LL;
    else
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
    if ( !v4 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetRestrictionMessage(v4, (int32_t)method, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall PartyOrganizationListViewItem__GetServantName(
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
  if ( (byte_4BD8210 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD8210 = 1;
  }
  entity = 0LL;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v7;
    *(_QWORD *)&v22.fields.fakeValue = v6;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v22, 0LL);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v23, 0LL);
  if ( !Master_object )
LABEL_36:
    sub_1C22094(ServantLeader, v10);
  ServantLeader = (void *)UserServantCollectionMaster__TryGetEntity(
                            (UserServantCollectionMaster_o *)Master_object,
                            &entity,
                            v15,
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
  ServantLeader = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v24, 0LL);
  if ( !v17 )
    goto LABEL_36;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v17, (int32_t)ServantLeader, maxLimitCount, 0, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v7; // x0

  if ( (byte_4BD8217 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_44/*"\n\n"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_10521/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_4BD8217 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10521/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_63126736(
           v7,
           (System_String_o *)StringLiteral_44/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4BD8216 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8216 = 1;
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
    sub_1C22094(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41734096(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1C22094(0LL, v6);
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v4; // q1
  int64_t Entity; // x0
  const MethodInfo *v6; // x2
  int64_t v7; // x21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_4BD8206 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BD8206 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v11.fields.fakeValue = v4;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v10 = v11;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v10, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v7 = Entity;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        sub_1C22094(0LL, v9);
      Entity = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)&this->fields.userServantEntity,
                 v7,
                 (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp((PartyOrganizationListViewItem_o *)Entity, this, v6);
  }
}


void __fastcall PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  struct EventUpValSetupInfo_o *setupInfo; // x1
  const MethodInfo *v6; // x2

  if ( !item )
    sub_1C22094(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  PartyOrganizationListViewItem__Modify_33025068(this, item, v6);
}


void __fastcall PartyOrganizationListViewItem__Modify_33025068(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x19
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v12; // x8
  UserServantEntity_o *v13; // x8
  System_Int32_array *CommandCodeIdList; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x21
  __int64 v18; // x23
  int32_t v19; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  const MethodInfo *v23; // x2
  _BOOL4 isMyServantOrNpcRestriction; // w8
  System_Int64_array *equipIdList; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  v4 = this;
  if ( (byte_4BD8207 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8207 = 1;
  }
  if ( !item )
    goto LABEL_21;
  userServantEntity = item->fields.userServantEntity;
  v4->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v4->fields.userServantEntity;
  sub_1C21DDC(&v4->fields.userServantEntity, userServantEntity);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_21;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v10 = *(_QWORD *)&v7->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v7->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v10;
  *(_QWORD *)&v26.fields.fakeValue = v9;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                              v26,
                                              0LL);
  if ( !v8 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v8,
             (int32_t)this,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v4->fields.servantEntity = (struct ServantEntity_o *)Entity;
  this = (PartyOrganizationListViewItem_o *)sub_1C21DDC(&v4->fields.servantEntity, Entity);
  v12 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  *(_QWORD *)&v4->fields.classId = *(_QWORD *)&item->fields.classId;
  v4->fields.frameType = item->fields.frameType;
  if ( !v12 )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                              v12[6],
                                              0LL);
  v13 = v4->fields.userServantEntity;
  v4->fields.svtLimitCount = (int)this;
  if ( !v13 )
    goto LABEL_21;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v13, 0LL);
  v4->fields.commandCodeIdList = CommandCodeIdList;
  this = (PartyOrganizationListViewItem_o *)sub_1C21DDC(&v4->fields.commandCodeIdList, CommandCodeIdList);
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  v4->fields.isQuestRestriction = item->fields.isQuestRestriction;
  v4->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  v4->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  v4->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  if ( !questRestrictionInfo )
  {
    IsConvertOverwriteImage = 0;
    goto LABEL_17;
  }
  v16 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_21:
    sub_1C22094(this, item);
  v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v27, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v19, 0LL);
LABEL_17:
  v4->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  v4->fields.fatigureTime = item->fields.fatigureTime;
  v4->fields.isFatigureRecover = item->fields.isFatigureRecover;
  v4->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  v4->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  v4->fields._IsNotSupportSingle_k__BackingField = 0;
  v4->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  v4->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&v4->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  v4->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  sub_1C21DDC(&v4->fields._FriendshipUpValTuple_k__BackingField, FriendshipUpValTuple_k__BackingField);
  isMyServantOrNpcRestriction = v4->fields.isMyServantOrNpcRestriction;
  v4->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v4->fields.isFollower )
  {
    v4->fields.followerInfo = 0LL;
    v4->fields.isFollower = 0;
    sub_1C21DDC(&v4->fields.followerInfo, 0LL);
  }
  equipIdList = v4->fields.equipIdList;
  *(_WORD *)&v4->fields._IsClearedWave_k__BackingField = 0;
  v4->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(v4, equipIdList, v23);
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
    sub_1C2209C(this, userSvtId);
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
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  struct ServantEntity_o *servantEntity; // x1
  struct System_Int32_array *commandCodeIdList; // x1
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  struct System_Int32_array *v19; // x0
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  PartyOrganizationListViewItem_o *v24; // x0
  System_Int32_array *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_4BD8204 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BD8204 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1C22094(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1C21DDC(&this->fields.userServantEntity, userServantEntity);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1C21DDC(&this->fields.followerInfo, followerInfo);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C21DDC(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1C21DDC(&this->fields.servantEntity, servantEntity);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1C21DDC(&this->fields.commandCodeIdList, commandCodeIdList);
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
  FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  this->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, FriendshipUpValTuple_k__BackingField);
  *(_QWORD *)&this->fields._InitPos_k__BackingField = *(_QWORD *)&item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_1C21DDC(&this->fields._WaveEnemyClassIds_k__BackingField, WaveEnemyClassIds_k__BackingField);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v17 = System_Array__Clone(equipSvtIdList, 0LL)) == 0LL )
  {
    v22 = 0LL;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v18 = v17;
  v19 = (struct System_Int32_array *)sub_1C21F74(v17, int___TypeInfo);
  if ( v19 )
  {
    this->fields.equipSvtIdList = v19;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v21 = sub_1C21F74(v18, int___TypeInfo);
    if ( v21 )
    {
      v22 = v21;
LABEL_10:
      sub_1C21DDC(p_equipSvtIdList, v22);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v23);
      return;
    }
  }
  else
  {
    sub_1C22354(v18);
  }
  v24 = (PartyOrganizationListViewItem_o *)sub_1C22354(v18);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__SetCanGetBuddyPoint(
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
  if ( (byte_4BD8203 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD8203 = 1;
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
  v6 = v4->fields.questRestrictionInfo;
  if ( !v6 )
    goto LABEL_35;
  questId = v6->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v8 = v4->fields.questRestrictionInfo;
  if ( !v8 || !this )
    goto LABEL_35;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v8->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_34;
  v10 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0LL);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v10, 0LL) )
    goto LABEL_34;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1C22094(this, *(_QWORD *)&eventId);
  if ( UserQuestMaster__getClearCountsFromId(
         (UserQuestMaster_o *)Master_object,
         *(_QWORD *)(*(_QWORD *)&this->fields.classId + 64LL),
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
  FollowerInfo_o *p_equipUserServantEntity; // x23
  struct ServantEntity_o **p_equipServantEntity; // x22
  struct EventUpValInfo_o **p_eventUpValInfo; // x21
  System_Collections_Generic_IEnumerable_T__o **p_eventUpValItemList; // x29
  __int64 Instance; // x0
  MethodInfo *v10; // x1
  _BOOL4 isFollower; // w8
  struct QuestRestrictionInfo_o *v12; // x8
  Il2CppObject *v13; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v15; // x8
  Il2CppObject *v16; // x0
  struct System_Int64_array *v17; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v19; // x8
  int32_t followerIndex; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x23
  int32_t v22; // w2
  struct System_Int64_array **p_equipIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x1
  Il2CppObject *v25; // x0
  struct EventUpValSetupInfo_o *v26; // x22
  struct System_Int32_array *v27; // x8
  FollowerInfo_o *v28; // x24
  struct QuestRestrictionInfo_o *v29; // x8
  int32_t v30; // w23
  int32_t v31; // w4
  BalanceConfig_c *v32; // x0
  System_Collections_Generic_List_object__o *v33; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x22
  PartyOrganizationListViewItem___c_c *v36; // x0
  System_Func_object__int__o *_9__128_0; // x23
  Il2CppObject *v38; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x8
  __int64 v43; // x22
  unsigned __int64 v44; // x20
  ServantEntity_o *v45; // x24
  int32_t v46; // w25
  EventPersonalMargeUpValInfo_o *v47; // x23
  __int64 v48; // x8
  __int64 v49; // x23
  unsigned __int64 v50; // x24
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  System_Collections_Generic_List_object__o *v55; // x0
  struct System_Int64_array *v56; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v60; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v61; // x23
  Il2CppClass *v62; // x24
  Il2CppClass *v63; // x25
  Il2CppObject *v64; // x0
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x24
  struct System_Int32_array *v67; // x8
  UserServantCollectionEntity_o *v68; // x24
  UserServantEntity_o *v69; // x25
  struct System_Int32_array *v70; // x8
  Il2CppObject *v71; // x0
  struct System_Int64_array *v72; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_41481176; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_object__o *v80; // x23
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v82; // x0
  System_Func_object__int__o *_9__128_1; // x25
  Il2CppObject *v84; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  __int64 v88; // x8
  __int64 v89; // x24
  unsigned __int64 v90; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v92; // w27
  EventPersonalMargeUpValInfo_o *v93; // x25
  __int64 v94; // x8
  __int64 v95; // x25
  unsigned __int64 v96; // x26
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  System_Object_array *v101; // x0
  const MethodInfo *v102; // x2
  bool v103; // w1
  PartyOrganizationListViewItem_o *v104; // x0
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v106; // x23
  struct System_Int32_array *v107; // x28
  __int64 v108; // x8
  unsigned __int64 v109; // x29
  int32_t v110; // w26
  Il2CppObject *v111; // x0
  ServantEntity_o *v112; // x27
  EventPersonalMargeUpValInfo_o *v113; // x25
  __int64 v114; // x8
  __int64 v115; // x25
  unsigned __int64 v116; // x26
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  System_Object_array *v121; // x0
  System_Int32_array *v122; // x23
  EventUpValSetupInfo_o *v123; // x24
  UserServantEntity_o *v124; // x22
  EventUpValSetupInfo_o *v125; // x23
  struct QuestRestrictionInfo_o *v126; // x8
  _BOOL8 v127; // x0
  __int64 v128; // x1
  System_Collections_Generic_List_object__o *v129; // x0
  Il2CppObject *current; // x1
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x8
  UserServantEntity_o *v135; // x23
  EventUpValSetupInfo_o *v136; // x22
  struct QuestRestrictionInfo_o *v137; // x8
  ServantEntity_o *v138; // x22
  EventPersonalMargeUpValInfo_o *v139; // x21
  System_Collections_Generic_List_object__o *v140; // x19
  System_Collections_Generic_IEnumerable_T__o *v141; // x0
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  if ( (byte_4BD8202 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C21E38(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C21E38(&EventUpValSetupInfo_TypeInfo);
    sub_1C21E38(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__);
    sub_1C21E38(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__);
    sub_1C21E38(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1C21E38(&UserServantEntity_TypeInfo);
    byte_4BD8202 = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  eventUpVallInfo = 0LL;
  entity = 0LL;
  memset(&v144, 0, sizeof(v144));
  this->fields.equipUserServantEntity = 0LL;
  sub_1C21DDC(&this->fields.equipUserServantEntity, 0LL);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1C21DDC(&this->fields.equipServantEntity, 0LL);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1C21DDC(&this->fields.eventUpValInfo, 0LL);
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  Instance = sub_1C21DDC(&this->fields.eventUpValItemList, 0LL);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v24 = 0LL;
LABEL_194:
      sub_1C21DDC(p_equipIdList, v24);
      return;
    }
    if ( equipIdList )
    {
      v15 = this->fields.equipIdList;
      if ( v15 == equipIdList )
        goto LABEL_62;
      v16 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
      if ( v16 )
      {
        v13 = v16;
        v17 = (struct System_Int64_array *)sub_1C21F74(v16, long___TypeInfo);
        if ( !v17 )
        {
          sub_1C22354(v13);
          goto LABEL_13;
        }
      }
      else
      {
        v17 = 0LL;
      }
    }
    else
    {
      v32 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v32 = BalanceConfig_TypeInfo;
      }
      v17 = (struct System_Int64_array *)sub_1C21EE0(long___TypeInfo, (unsigned int)v32->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v17;
    Instance = sub_1C21DDC(&this->fields.equipIdList, v17);
    v15 = this->fields.equipIdList;
LABEL_62:
    if ( !v15 )
      goto LABEL_197;
    if ( !v15->max_length )
      goto LABEL_179;
    if ( v15->m_Items[0] >= 1 )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_197;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v56 = this->fields.equipIdList;
      if ( !v56 )
        goto LABEL_197;
      if ( !v56->max_length )
        goto LABEL_179;
      if ( !Instance )
        goto LABEL_197;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.equipUserServantEntity,
                   v56->m_Items[0],
                   (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_197;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v147.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v147.fields.fakeValue = parent;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v147, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_197;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
          v60 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_197;
          v61 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v63 = v60->_1.declaringType;
          v62 = v60->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v148.fields.currentCryptoKey = v63;
          *(_QWORD *)&v148.fields.fakeValue = v62;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v148, 0LL);
          if ( !v61 )
            goto LABEL_197;
          v64 = DataMasterBase_object__object__int___GetEntity(
                  v61,
                  Instance,
                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          *p_equipServantEntity = (struct ServantEntity_o *)v64;
          Instance = sub_1C21DDC(&this->fields.equipServantEntity, v64);
        }
      }
      else
      {
        equipSvtIdList = this->fields.equipSvtIdList;
        if ( !equipSvtIdList )
          goto LABEL_100;
        if ( !equipSvtIdList->max_length )
          goto LABEL_179;
        if ( equipSvtIdList->m_Items[1] < 1 )
          goto LABEL_100;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        v67 = this->fields.equipSvtIdList;
        if ( !v67 )
          goto LABEL_197;
        if ( !v67->max_length )
          goto LABEL_179;
        if ( !Master_object )
          goto LABEL_197;
        Instance = UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &entity,
                     *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                     v67->m_Items[1],
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v68 = entity;
          v69 = (UserServantEntity_o *)sub_1C22084(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_41466424(v69, v68, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v69;
          sub_1C21DDC(&this->fields.equipUserServantEntity, v69);
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_197;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
          v70 = this->fields.equipSvtIdList;
          if ( !v70 )
            goto LABEL_197;
          if ( !v70->max_length )
            goto LABEL_179;
          if ( !Instance )
            goto LABEL_197;
          v71 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  v70->m_Items[1],
                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.equipServantEntity = (struct ServantEntity_o *)v71;
          Instance = sub_1C21DDC(&this->fields.equipServantEntity, v71);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_100:
          v72 = this->fields.equipIdList;
          if ( !v72 )
            goto LABEL_197;
          if ( !v72->max_length )
            goto LABEL_179;
          v72->m_Items[0] = 0LL;
        }
      }
    }
    p_setupInfo = &this->fields.setupInfo;
    setupInfo = this->fields.setupInfo;
    if ( !setupInfo )
      goto LABEL_162;
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_197;
    if ( !*(_QWORD *)&eventIdList->max_length )
      goto LABEL_162;
    userServantEntity = this->fields.userServantEntity;
    EquipList = PartyOrganizationListViewItem__GetEquipList(this, v10);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !userServantEntity )
      goto LABEL_197;
    EventUpVal_41481176 = UserServantEntity__getEventUpVal_41481176(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            EquipList,
                            *(_QWORD *)(Instance + 104),
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_41481176;
    if ( questRestrictionInfo )
    {
      v80 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v80,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_197;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v82 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v82 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__128_1 = (System_Func_object__int__o *)v82->static_fields->__9__128_1;
      if ( !_9__128_1 )
      {
        if ( !v82->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v82);
          v82 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v84 = (Il2CppObject *)v82->static_fields->__9;
        _9__128_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__128_1,
          v84,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__128_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_1;
        sub_1C21DDC(&static_fields->__9__128_1, _9__128_1);
      }
      v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   dropList,
                                                                   (System_Func_TSource__TResult__o *)_9__128_1,
                                                                   (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v87 = System_Linq_Enumerable__Distinct_int_(
              v86,
              (const MethodInfo_2FCD204 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                            v87,
                            (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_197;
      v88 = *(_QWORD *)(Instance + 24);
      v89 = Instance;
      if ( (int)v88 >= 1 )
      {
        v90 = 0LL;
        while ( 1 )
        {
          if ( v90 >= (unsigned int)v88 )
            goto LABEL_179;
          servantEntity = this->fields.servantEntity;
          v92 = *(_DWORD *)(v89 + 4 * v90 + 32);
          v93 = (EventPersonalMargeUpValInfo_o *)sub_1C22084(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v93, v92, servantEntity, 0LL);
          Instance = (__int64)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_197;
          Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v93 )
            goto LABEL_197;
          EventPersonalMargeUpValInfo__Add(v93, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = EventPersonalMargeUpValInfo__IsEmpty(v93, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v93, 0LL);
            if ( !Instance )
              goto LABEL_197;
            v94 = *(_QWORD *)(Instance + 24);
            v95 = Instance;
            if ( (int)v94 >= 1 )
              break;
          }
LABEL_133:
          LODWORD(v88) = *(_DWORD *)(v89 + 24);
          if ( (__int64)++v90 >= (int)v88 )
            goto LABEL_134;
        }
        v96 = 0LL;
        while ( v96 < (unsigned int)v94 )
        {
          if ( !v80 )
            goto LABEL_197;
          v10 = *(MethodInfo **)(v95 + 32 + 8 * v96);
          items = v80->fields._items;
          v98 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v80->fields._version;
          if ( !items )
            goto LABEL_197;
          size = v80->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v80,
              (Il2CppObject *)v10,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
          }
          else
          {
            v100 = &items->obj.klass + size;
            v80->fields._size = size + 1;
            v100[4] = (Il2CppClass *)v10;
            Instance = sub_1C21DDC(v100 + 4, v10);
          }
          LODWORD(v94) = *(_DWORD *)(v95 + 24);
          if ( (__int64)++v96 >= (int)v94 )
            goto LABEL_133;
        }
        goto LABEL_179;
      }
LABEL_134:
      if ( !v80 )
        goto LABEL_197;
      v101 = System_Collections_Generic_List_object___ToArray(
               v80,
               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v101;
      sub_1C21DDC(&this->fields.eventUpValItemList, v101);
      v103 = 1;
      v104 = this;
      goto LABEL_161;
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_197;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v106 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v106,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_197;
    v107 = (*p_setupInfo)->fields.eventIdList;
    if ( !v107 )
      goto LABEL_197;
    v108 = *(_QWORD *)&v107->max_length;
    if ( (int)v108 < 1 )
    {
LABEL_159:
      if ( !v106 )
        goto LABEL_197;
      v121 = System_Collections_Generic_List_object___ToArray(
               v106,
               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v121;
      sub_1C21DDC(&this->fields.eventUpValItemList, v121);
      v104 = this;
      v103 = 0;
LABEL_161:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v104, v103, v102);
      p_setupInfo = &this->fields.setupInfo;
LABEL_162:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v122 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
        v123 = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_40169720(v123, v122, 0, 0, 0, 0LL);
        *p_setupInfo = v123;
        sub_1C21DDC(p_setupInfo, v123);
      }
      if ( this->fields.isEventUpVal )
      {
        v124 = this->fields.userServantEntity;
        v125 = this->fields.setupInfo;
        Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(this, v10);
        v126 = this->fields.questRestrictionInfo;
        if ( !v126 )
          goto LABEL_197;
        if ( !v124 )
          goto LABEL_197;
        Instance = UserServantEntity__GetBonusUpVal(
                     v124,
                     &eventUpVallInfo,
                     v125,
                     (System_Int64_array *)Instance,
                     v126->fields.questId,
                     v126->fields.questPhase,
                     0LL);
        if ( !eventUpVallInfo )
          goto LABEL_197;
        Instance = (__int64)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_197;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v143,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v144 = v143;
        while ( 1 )
        {
          v127 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v144,
                   (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v127 )
            break;
          if ( !*p_eventUpValInfo )
            sub_1C22094(v127, v128);
          v129 = (System_Collections_Generic_List_object__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v129 )
            sub_1C22094(0LL, v128);
          current = v144.fields._current;
          v131 = v129->fields._items;
          v132 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v129->fields._version;
          if ( !v131 )
            sub_1C22094(v129, current);
          v133 = v129->fields._size;
          if ( (unsigned int)v133 >= v131->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v129,
              current,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
          }
          else
          {
            v134 = &v131->obj.klass + v133;
            v129->fields._size = v133 + 1;
            v134[4] = (Il2CppClass *)current;
            sub_1C21DDC(v134 + 4, current);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v144,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v135 = this->fields.userServantEntity;
        v136 = this->fields.setupInfo;
        Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(this, v10);
        v137 = this->fields.questRestrictionInfo;
        if ( !v137 || !v135 )
          goto LABEL_197;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v135,
                                      &this->fields.eventUpValInfo,
                                      v136,
                                      (System_Int64_array *)Instance,
                                      v137->fields.questId,
                                      v137->fields.questPhase,
                                      0LL);
      }
      v138 = this->fields.servantEntity;
      v139 = (EventPersonalMargeUpValInfo_o *)sub_1C22084(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v139, 0, v138, 0LL);
      Instance = (__int64)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v139 )
        {
          EventPersonalMargeUpValInfo__Add(v139, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v139, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v139, 0LL);
            goto LABEL_193;
          }
          v140 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v140,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v140 )
            goto LABEL_197;
          System_Collections_Generic_List_object___AddRange(
            v140,
            *p_eventUpValItemList,
            (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v141 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v139, 0LL);
          System_Collections_Generic_List_object___AddRange(
            v140,
            v141,
            (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v55 = v140;
LABEL_192:
          List = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                  v55,
                                                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_193:
          v24 = List;
          *p_eventUpValItemList = List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_194;
        }
      }
LABEL_197:
      sub_1C22094(Instance, v10);
    }
    v109 = 0LL;
    while ( 1 )
    {
      if ( v109 >= (unsigned int)v108 )
        goto LABEL_179;
      if ( !MasterData_object )
        goto LABEL_197;
      v110 = v107->m_Items[v109 + 1];
      v111 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v110,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v111
        || (Instance = EventDetailEntity__HasFlag((EventDetailEntity_o *)v111, 0x800000000LL, 0LL), (Instance & 1) == 0) )
      {
        v112 = this->fields.servantEntity;
        v113 = (EventPersonalMargeUpValInfo_o *)sub_1C22084(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v113, v110, v112, 0LL);
        Instance = (__int64)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_197;
        Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v113 )
          goto LABEL_197;
        EventPersonalMargeUpValInfo__Add(v113, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = EventPersonalMargeUpValInfo__IsEmpty(v113, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v113, 0LL);
          if ( !Instance )
            goto LABEL_197;
          v114 = *(_QWORD *)(Instance + 24);
          v115 = Instance;
          if ( (int)v114 >= 1 )
            break;
        }
      }
LABEL_158:
      LODWORD(v108) = v107->max_length;
      if ( (__int64)++v109 >= (int)v108 )
        goto LABEL_159;
    }
    v116 = 0LL;
    while ( v116 < (unsigned int)v114 )
    {
      if ( !v106 )
        goto LABEL_197;
      v10 = *(MethodInfo **)(v115 + 32 + 8 * v116);
      v117 = v106->fields._items;
      v118 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v106->fields._version;
      if ( !v117 )
        goto LABEL_197;
      v119 = v106->fields._size;
      if ( (unsigned int)v119 >= v117->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v106,
          (Il2CppObject *)v10,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &v117->obj.klass + v119;
        v106->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)v10;
        Instance = sub_1C21DDC(v120 + 4, v10);
      }
      LODWORD(v114) = *(_DWORD *)(v115 + 24);
      if ( (__int64)++v116 >= (int)v114 )
        goto LABEL_158;
    }
LABEL_179:
    sub_1C2209C(Instance, v10);
  }
  this->fields.equipIdList = 0LL;
  sub_1C21DDC(&this->fields.equipIdList, 0LL);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v12 = this->fields.questRestrictionInfo;
  LODWORD(v13) = this->fields.followerIndex;
  if ( v12 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v12->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v13, ReturnTypeByQuestId, 0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_197;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v19 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v19 )
    {
      Instance = FollowerInfo__GetReturnTypeByQuestId(v19->fields.questId, 0LL);
      v22 = Instance;
      if ( !followerInfo )
        goto LABEL_197;
    }
    else
    {
      v22 = 0;
      if ( !followerInfo )
        goto LABEL_197;
    }
    Instance = FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v22, 0LL);
    if ( !v21 )
      goto LABEL_197;
    v25 = DataMasterBase_object__object__int___GetEntity(
            v21,
            Instance,
            (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    *p_equipServantEntity = (struct ServantEntity_o *)v25;
    Instance = sub_1C21DDC(&this->fields.equipServantEntity, v25);
  }
  v26 = this->fields.setupInfo;
  if ( v26 )
  {
    v27 = v26->fields.eventIdList;
    if ( !v27 )
      goto LABEL_197;
    if ( *(_QWORD *)&v27->max_length )
    {
      v28 = this->fields.followerInfo;
      v29 = this->fields.questRestrictionInfo;
      v30 = this->fields.followerIndex;
      if ( v29 )
      {
        Instance = FollowerInfo__GetReturnTypeByQuestId(v29->fields.questId, 0LL);
        v31 = Instance;
        if ( !v28 )
          goto LABEL_197;
      }
      else
      {
        v31 = 0;
        if ( !v28 )
          goto LABEL_197;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_40179560(
                                    v28,
                                    &this->fields.eventUpValInfo,
                                    v26,
                                    v30,
                                    v31,
                                    0LL);
      v33 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v35 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v36 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v36 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__128_0 = (System_Func_object__int__o *)v36->static_fields->__9__128_0;
        if ( !_9__128_0 )
        {
          if ( !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            v36 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v38 = (Il2CppObject *)v36->static_fields->__9;
          _9__128_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__128_0,
            v38,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__,
            0LL);
          v39 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v39->__9__128_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_0;
          sub_1C21DDC(&v39->__9__128_0, _9__128_0);
        }
        v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v35,
                                                                     (System_Func_TSource__TResult__o *)_9__128_0,
                                                                     (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v41 = System_Linq_Enumerable__Distinct_int_(
                v40,
                (const MethodInfo_2FCD204 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                              v41,
                              (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v42 = *(_QWORD *)(Instance + 24);
          v43 = Instance;
          if ( (int)v42 >= 1 )
          {
            v44 = 0LL;
            while ( 1 )
            {
              if ( v44 >= (unsigned int)v42 )
                goto LABEL_179;
              v45 = this->fields.servantEntity;
              v46 = *(_DWORD *)(v43 + 4 * v44 + 32);
              v47 = (EventPersonalMargeUpValInfo_o *)sub_1C22084(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v47, v46, v45, 0LL);
              Instance = (__int64)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_197;
              Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v47 )
                goto LABEL_197;
              EventPersonalMargeUpValInfo__Add(v47, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = EventPersonalMargeUpValInfo__IsEmpty(v47, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v47, 0LL);
                if ( !Instance )
                  goto LABEL_197;
                v48 = *(_QWORD *)(Instance + 24);
                v49 = Instance;
                if ( (int)v48 >= 1 )
                  break;
              }
LABEL_57:
              LODWORD(v42) = *(_DWORD *)(v43 + 24);
              if ( (__int64)++v44 >= (int)v42 )
                goto LABEL_58;
            }
            v50 = 0LL;
            while ( v50 < (unsigned int)v48 )
            {
              if ( !v33 )
                goto LABEL_197;
              v10 = *(MethodInfo **)(v49 + 32 + 8 * v50);
              v51 = v33->fields._items;
              v52 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v33->fields._version;
              if ( !v51 )
                goto LABEL_197;
              v53 = v33->fields._size;
              if ( (unsigned int)v53 >= v51->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v33,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              }
              else
              {
                v54 = &v51->obj.klass + v53;
                v33->fields._size = v53 + 1;
                v54[4] = (Il2CppClass *)v10;
                Instance = sub_1C21DDC(v54 + 4, v10);
              }
              LODWORD(v48) = *(_DWORD *)(v49 + 24);
              if ( (__int64)++v50 >= (int)v48 )
                goto LABEL_57;
            }
            goto LABEL_179;
          }
LABEL_58:
          if ( !v33 )
            goto LABEL_197;
          v55 = v33;
          goto LABEL_192;
        }
      }
      goto LABEL_197;
    }
  }
}


void __fastcall PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v5; // x2

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !equipIdList->max_length )
      sub_1C2209C(this, userSvtId);
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1C21DDC(&this->fields.equipSvtIdList, 0LL);
    PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v5);
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
  this->fields._WaveEnemyClassIds_k__BackingField = classIds;
  sub_1C21DDC(&this->fields._WaveEnemyClassIds_k__BackingField, classIds);
}


void __fastcall PartyOrganizationListViewItem__Set_33024104(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x22
  __int64 v12; // x23
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o *v14; // x8
  UserServantEntity_o *v15; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4BD8205 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8205 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_12;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C21DDC(&this->fields.userServantEntity, userServantEntity);
  this->fields.followerInfo = 0LL;
  sub_1C21DDC(&this->fields.followerInfo, 0LL);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_12;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v21, 0LL);
  if ( !v10 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v10,
             (int32_t)Instance,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  Instance = (Il2CppObject *)sub_1C21DDC(&this->fields.servantEntity, Entity);
  v14 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&item->fields.classId;
  this->fields.frameType = item->fields.frameType;
  if ( !v14
    || (Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                     v14->fields.limitCount,
                                     0LL),
        v15 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v15) )
  {
LABEL_12:
    sub_1C22094(Instance, v6);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v15, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1C21DDC(&this->fields.commandCodeIdList, CommandCodeIdList);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v20);
}


void __fastcall PartyOrganizationListViewItem__Swap(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userServantEntity; // x0
  __int64 v7; // d12
  struct System_Int32_array *equipSvtIdList; // x21
  struct System_Int32_array **p_equipSvtIdList; // x26
  __int64 v10; // d10
  __int64 v11; // d11
  __int64 v12; // d9
  __int64 v13; // d8
  struct UserServantEntity_o *v14; // x1
  struct FollowerInfo_o *v15; // x1
  struct ServantEntity_o *v16; // x1
  struct System_Int32_array *v17; // x1
  System_Array_o *v18; // x0
  struct System_Int32_array **v19; // x22
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x29
  __int64 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  struct EventCampaignEntity_array *v25; // x1
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v26; // x1
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  struct System_Int32_array *v32; // [xsp+8h] [xbp-158h]
  int32_t InitPos_k__BackingField; // [xsp+14h] [xbp-14Ch]
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // [xsp+18h] [xbp-148h]
  bool IsNotSupportSingle_k__BackingField; // [xsp+24h] [xbp-13Ch]
  System_Int64_array *equipIdList; // [xsp+28h] [xbp-138h]
  bool IsDispSvtPoint_k__BackingField; // [xsp+30h] [xbp-130h]
  bool IsAllOutBattle_k__BackingField; // [xsp+34h] [xbp-12Ch]
  bool IsDataLost_k__BackingField; // [xsp+38h] [xbp-128h]
  int32_t TimesToRestart_k__BackingField; // [xsp+3Ch] [xbp-124h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // [xsp+40h] [xbp-120h]
  bool IsClearedWave_k__BackingField; // [xsp+4Ch] [xbp-114h]
  bool IsDisappearSvt_k__BackingField; // [xsp+50h] [xbp-110h]
  int32_t NowPos_k__BackingField; // [xsp+54h] [xbp-10Ch]
  bool IsDisappearEquip_k__BackingField; // [xsp+58h] [xbp-108h]
  bool IsNotClassBoardNpc_k__BackingField; // [xsp+5Ch] [xbp-104h]
  bool isRestrictionMyServantPos; // [xsp+6Ch] [xbp-F4h]
  bool isRestrictionNeedStarting; // [xsp+70h] [xbp-F0h]
  bool isRestrictionServantPos; // [xsp+74h] [xbp-ECh]
  struct FollowerInfo_o *followerInfo; // [xsp+80h] [xbp-E0h]
  bool isFollower; // [xsp+88h] [xbp-D8h]
  bool isFixNpc; // [xsp+8Ch] [xbp-D4h]
  struct ServantEntity_o *servantEntity; // [xsp+90h] [xbp-D0h]
  struct System_Int32_array *commandCodeIdList; // [xsp+98h] [xbp-C8h]
  bool isServantNumRestriction; // [xsp+A0h] [xbp-C0h]
  bool isFixMultipleNpcRestriction; // [xsp+A4h] [xbp-BCh]
  bool isFixMultipleNpc; // [xsp+A8h] [xbp-B8h]
  bool isMyServantOrNpcRestriction; // [xsp+ACh] [xbp-B4h]
  int64_t npcFollowerSvtId; // [xsp+B0h] [xbp-B0h]
  bool haveIndividualityServant; // [xsp+BCh] [xbp-A4h]
  int64_t fatigureTime; // [xsp+C0h] [xbp-A0h]
  struct UserServantEntity_o *userServantEntity; // [xsp+C8h] [xbp-98h]
  bool isFatigureRecover; // [xsp+D8h] [xbp-88h]

  if ( (byte_4BD8208 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    byte_4BD8208 = 1;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  userServantEntity = this->fields.userServantEntity;
  followerInfo = this->fields.followerInfo;
  v7 = *(_QWORD *)&this->fields.followerClassId;
  isFollower = this->fields.isFollower;
  isFixNpc = this->fields.isFixNpc;
  p_equipSvtIdList = &this->fields.equipSvtIdList;
  equipSvtIdList = this->fields.equipSvtIdList;
  v11 = *(_QWORD *)&this->fields.classId;
  v10 = *(_QWORD *)&this->fields.frameType;
  servantEntity = this->fields.servantEntity;
  v12 = *(_QWORD *)&this->fields.isQuestRestriction;
  commandCodeIdList = this->fields.commandCodeIdList;
  isServantNumRestriction = this->fields.isServantNumRestriction;
  isFixMultipleNpcRestriction = this->fields.isFixMultipleNpcRestriction;
  npcFollowerSvtId = this->fields.npcFollowerSvtId;
  fatigureTime = this->fields.fatigureTime;
  isFatigureRecover = this->fields.isFatigureRecover;
  isFixMultipleNpc = this->fields.isFixMultipleNpc;
  isMyServantOrNpcRestriction = this->fields.isMyServantOrNpcRestriction;
  haveIndividualityServant = this->fields.haveIndividualityServant;
  v13 = *(_QWORD *)&this->fields._SvtPoint_k__BackingField;
  if ( !item )
    sub_1C22094(p_userServantEntity, item);
  FriendshipUpValTuple_k__BackingField = this->fields._FriendshipUpValTuple_k__BackingField;
  equipIdList = this->fields.equipIdList;
  IsNotSupportSingle_k__BackingField = this->fields._IsNotSupportSingle_k__BackingField;
  friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
  IsDispSvtPoint_k__BackingField = this->fields._IsDispSvtPoint_k__BackingField;
  IsAllOutBattle_k__BackingField = this->fields._IsAllOutBattle_k__BackingField;
  InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
  IsDataLost_k__BackingField = this->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = this->fields._TimesToRestart_k__BackingField;
  isRestrictionMyServantPos = this->fields.isRestrictionMyServantPos;
  isRestrictionNeedStarting = this->fields.isRestrictionNeedStarting;
  isRestrictionServantPos = this->fields.isRestrictionServantPos;
  IsClearedWave_k__BackingField = this->fields._IsClearedWave_k__BackingField;
  IsDisappearSvt_k__BackingField = this->fields._IsDisappearSvt_k__BackingField;
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  IsDisappearEquip_k__BackingField = this->fields._IsDisappearEquip_k__BackingField;
  IsNotClassBoardNpc_k__BackingField = this->fields._IsNotClassBoardNpc_k__BackingField;
  v14 = item->fields.userServantEntity;
  this->fields.userServantEntity = v14;
  sub_1C21DDC(p_userServantEntity, v14);
  v15 = item->fields.followerInfo;
  this->fields.followerInfo = v15;
  sub_1C21DDC(&this->fields.followerInfo, v15);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  v16 = item->fields.servantEntity;
  this->fields.servantEntity = v16;
  sub_1C21DDC(&this->fields.servantEntity, v16);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  v17 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v17;
  sub_1C21DDC(&this->fields.commandCodeIdList, v17);
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
  v19 = &item->fields.equipSvtIdList;
  v18 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v18 )
    goto LABEL_9;
  v20 = System_Array__Clone(v18, 0LL);
  if ( !v20 )
    goto LABEL_9;
  v32 = equipSvtIdList;
  equipSvtIdList = (struct System_Int32_array *)&int___TypeInfo;
  v21 = v20;
  v22 = sub_1C21F74(v20, int___TypeInfo);
  if ( !v22
    || (*p_equipSvtIdList = (struct System_Int32_array *)v22,
        equipSvtIdList = v32,
        (v23 = sub_1C21F74(v21, int___TypeInfo)) == 0) )
  {
    sub_1C22354(v21);
LABEL_9:
    v23 = 0LL;
    *p_equipSvtIdList = 0LL;
  }
  sub_1C21DDC(&this->fields.equipSvtIdList, v23);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v24);
  v25 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v25;
  sub_1C21DDC(&this->fields.friendPointCampaignEntityList, v25);
  this->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  this->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = item->fields._IsNotSupportSingle_k__BackingField;
  if ( !notChangeInitPos )
    this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  v26 = item->fields._FriendshipUpValTuple_k__BackingField;
  this->fields._FriendshipUpValTuple_k__BackingField = v26;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, v26);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_1C21DDC(&item->fields.userServantEntity, userServantEntity);
  item->fields.followerInfo = followerInfo;
  sub_1C21DDC(&item->fields.followerInfo, followerInfo);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  sub_1C21DDC(&item->fields.servantEntity, servantEntity);
  *(_QWORD *)&item->fields.classId = v11;
  *(_QWORD *)&item->fields.frameType = v10;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1C21DDC(&item->fields.commandCodeIdList, commandCodeIdList);
  *(_QWORD *)&item->fields.isQuestRestriction = v12;
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
  v27 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL);
  if ( !v27 )
    goto LABEL_17;
  v28 = v27;
  v29 = sub_1C21F74(v27, int___TypeInfo);
  if ( !v29 || (*v19 = (struct System_Int32_array *)v29, (v30 = sub_1C21F74(v28, int___TypeInfo)) == 0) )
  {
    sub_1C22354(v28);
LABEL_17:
    v30 = 0LL;
    *v19 = 0LL;
  }
  sub_1C21DDC(&item->fields.equipSvtIdList, v30);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v31);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1C21DDC(&item->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v13;
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  item->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  item->fields._IsAllOutBattle_k__BackingField = IsAllOutBattle_k__BackingField;
  item->fields._IsDataLost_k__BackingField = IsDataLost_k__BackingField;
  item->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  item->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  sub_1C21DDC(&item->fields._FriendshipUpValTuple_k__BackingField, FriendshipUpValTuple_k__BackingField);
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
  PartyOrganizationListViewItem_o *v4; // x22
  System_Array_o *equipSvtIdList; // x23
  _QWORD *p_equipSvtIdList; // x24
  System_Int64_array *equipIdList; // x20
  System_Array_o *v8; // x0
  struct System_Int32_array **v9; // x21
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x25
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2

  v4 = this;
  if ( (byte_4BD8209 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1C21E38(&int___TypeInfo);
    byte_4BD8209 = 1;
  }
  p_equipSvtIdList = &v4->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)v4->fields.equipSvtIdList;
  if ( !item )
    sub_1C22094(this, item);
  equipIdList = v4->fields.equipIdList;
  v9 = &item->fields.equipSvtIdList;
  v8 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v8 )
    goto LABEL_9;
  v10 = System_Array__Clone(v8, 0LL);
  if ( !v10 )
    goto LABEL_9;
  v11 = v10;
  v12 = sub_1C21F74(v10, int___TypeInfo);
  if ( !v12 || (*p_equipSvtIdList = v12, (v13 = sub_1C21F74(v11, int___TypeInfo)) == 0) )
  {
    sub_1C22354(v11);
LABEL_9:
    v13 = 0LL;
    *p_equipSvtIdList = 0LL;
  }
  sub_1C21DDC(&v4->fields.equipSvtIdList, v13);
  PartyOrganizationListViewItem__SetEquipStatus(v4, item->fields.equipIdList, v14);
  if ( !equipSvtIdList )
    goto LABEL_15;
  v15 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v15 )
    goto LABEL_15;
  v16 = v15;
  v17 = sub_1C21F74(v15, int___TypeInfo);
  if ( !v17 || (*v9 = (struct System_Int32_array *)v17, (v18 = sub_1C21F74(v16, int___TypeInfo)) == 0) )
  {
    sub_1C22354(v16);
LABEL_15:
    v18 = 0LL;
    *v9 = 0LL;
  }
  sub_1C21DDC(&item->fields.equipSvtIdList, v18);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v19);
}


void __fastcall PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        bool isQuestTarget,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x23
  Il2CppObject *v9; // x22
  System_Collections_Generic_List_T__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v16; // x25
  __int64 v17; // x26
  int32_t v18; // w1
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  struct UserServantEntity_o *v21; // x8
  UserServantMaster_o *v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  __int64 v25; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v27; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w25
  int32_t questPhase; // w26
  int32_t eventId; // w24
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  int32_t v34; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v37; // w2
  const MethodInfo_39AAD44 *v38; // x5
  __int64 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v44; // x0
  System_Collections_Generic_List_Enumerator_object__o item; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v47; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v48; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4BD8223 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_4BD8223 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_47;
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[6].monitor,
                                                                         0LL);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v10 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v10,
    (const MethodInfo_3600664 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&item,
      FriendshipUpCampaigns,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v46 = item;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v11 )
        break;
      current = (EventCampaignEntity_o *)v46.fields._current;
      if ( !v46.fields._current )
        sub_1C22094(v11, v12);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v46.fields._current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1C22094(v11, v12);
        v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v17;
        *(_QWORD *)&v49.fields.fakeValue = v16;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v49, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v18,
                (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v19 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
      v21 = this->fields.userServantEntity;
      if ( !v21 )
        sub_1C22094(v19, v20);
      v22 = (UserServantMaster_o *)v19;
      v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v24;
      *(_QWORD *)&v50.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v50, 0LL);
      if ( !v22 )
        sub_1C22094(v25, (unsigned int)v25);
      HeroineData = UserServantMaster__getHeroineData(v22, v25, 0LL);
      if ( HeroineData )
      {
        HeroineData = (UserServantEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
        if ( ((unsigned __int8)HeroineData & 1) == 0 )
          continue;
      }
      if ( !isQuestTarget )
        goto LABEL_30;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        sub_1C22094(HeroineData, v27);
      questId = questRestrictionInfo->fields.questId;
      questPhase = questRestrictionInfo->fields.questPhase;
      eventId = current->fields.eventId;
      v32 = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v32 )
        sub_1C22094(0LL, v33);
      if ( !v9 )
        sub_1C22094(v32, v33);
      if ( !EventQuestMaster__IsEventNotIncluded(
              (EventQuestMaster_o *)v9,
              eventId,
              questId,
              questPhase,
              7,
              (int64_t)v32[6].monitor,
              0LL) )
      {
LABEL_30:
        v34 = current->fields.eventId;
        FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
        calcType = current->fields.calcType;
        v37 = FriendshipBonusValue;
        item.fields._index = 0;
        item.fields._list = 0LL;
        *(_QWORD *)&v47.fields.Item1 = &item;
        v47.fields.Item3 = v34;
        System_ValueTuple_int__int__Int32Enum____ctor(
          v47,
          v37,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v38);
        if ( !v10 )
          sub_1C22094(v39, v40);
        *(_QWORD *)&v48.fields.Item1 = item.fields._list;
        v48.fields.Item3 = item.fields._index;
        items = v10->fields._items;
        v42 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1C22094(v39, *(_QWORD *)&v48.fields.Item1);
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
            v10,
            v48,
            *(const MethodInfo_3600EF0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          *((System_ValueTuple_int__int__Int32Enum__o *)items->m_Items + size) = v48;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v10 )
LABEL_47:
    sub_1C22094(Instance, v7);
  v44 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                   v10,
                                                                                   (const MethodInfo_3602AB4 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v44;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, v44);
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
  struct UserServantEntity_o **p_equipUserServantEntity; // x20
  Il2CppObject *Master_object; // x21
  __int64 Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q1
  System_Int64_array *v9; // x22
  struct UserServantEntity_o *v10; // x8
  __int128 v11; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v15; // x21
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  System_Int64_array *v18; // x22
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  Il2CppObject *v22; // x0
  struct UserServantEntity_o *v23; // x8
  ServantLimitMaster_o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v27; // x8
  int32_t v28; // w20
  int32_t v29; // w8
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v31; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4BD8224 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8224 = 1;
  }
  if ( this->fields.equipUserServantEntity && !this->fields._IsDisappearEquip_k__BackingField )
  {
    p_equipUserServantEntity = &this->fields.equipUserServantEntity;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1C21EE0(long___TypeInfo, 1LL);
    v7 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_54;
    v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
    v9 = (System_Int64_array *)Instance;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v36 = v37;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v36, 0LL);
    if ( !v9 )
      goto LABEL_54;
    if ( !v9->max_length )
LABEL_55:
      sub_1C2209C(Instance, v6);
    v9->m_Items[0] = Instance;
    if ( !Master_object )
      goto LABEL_54;
    if ( DataMasterBase_object__object__long___isEntityExistsFromId(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           v9,
           (const MethodInfo_325D900 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
      v10 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_54;
      v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v35 = v37;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v35, 0LL);
      if ( !v12 )
        goto LABEL_54;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 v12,
                 Instance,
                 (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      *p_equipUserServantEntity = (struct UserServantEntity_o *)Entity;
      sub_1C21DDC(&this->fields.equipUserServantEntity, Entity);
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
    v15 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1C21EE0(long___TypeInfo, 1LL);
    v16 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_54;
    v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
    v18 = (System_Int64_array *)Instance;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v34 = v37;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v34, 0LL);
    if ( !v18 )
      goto LABEL_54;
    if ( v18->max_length )
    {
      v18->m_Items[0] = Instance;
      if ( v15 )
      {
        if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                v18,
                (const MethodInfo_325D900 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
        {
LABEL_35:
          this->fields._IsDisappearSvt_k__BackingField = 1;
          return;
        }
        Instance = (__int64)*p_userServantEntity;
        if ( *p_userServantEntity )
        {
          if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL) )
            goto LABEL_35;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
          v19 = *p_userServantEntity;
          if ( *p_userServantEntity )
          {
            v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
            v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v37.fields.fakeValue = v20;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v33 = v37;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v33, 0LL);
            if ( v21 )
            {
              v22 = DataMasterBase_object__object__long___GetEntity(
                      v21,
                      Instance,
                      (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              *p_userServantEntity = (struct UserServantEntity_o *)v22;
              sub_1C21DDC(&this->fields.userServantEntity, v22);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                v23 = *p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  v24 = (ServantLimitMaster_o *)Instance;
                  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
                  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v38.fields.currentCryptoKey = v26;
                  *(_QWORD *)&v38.fields.fakeValue = v25;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v38, 0LL);
                  v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userServantEntity;
                  if ( *p_userServantEntity )
                  {
                    v28 = Instance;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v27[6], 0LL);
                    if ( v24 )
                    {
                      Instance = (__int64)ServantLimitMaster__GetEntity(v24, v28, Instance, 0LL);
                      if ( Instance )
                      {
                        v29 = *(_DWORD *)(Instance + 24);
                        Instance = (__int64)this->fields.userServantEntity;
                        this->fields.rarityId = v29;
                        if ( Instance )
                        {
                          Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
                          userServantEntity = this->fields.userServantEntity;
                          this->fields.frameType = Instance;
                          if ( userServantEntity )
                          {
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                         userServantEntity->fields.limitCount,
                                         0LL);
                            v31 = this->fields.userServantEntity;
                            this->fields.svtLimitCount = Instance;
                            if ( v31 )
                            {
                              CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v31, 0LL);
                              this->fields.commandCodeIdList = CommandCodeIdList;
                              sub_1C21DDC(&this->fields.commandCodeIdList, CommandCodeIdList);
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
LABEL_54:
      sub_1C22094(Instance, v6);
    }
    goto LABEL_55;
  }
}


void __fastcall PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20
  __int64 methodPtr_low; // x9
  PartyOrganizationListViewItem_o *v6; // x0
  PartyServantListViewItem_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BD8222 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1C21E38(&PartyOrganizationListViewObject_TypeInfo);
    byte_4BD8222 = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v6 = (PartyOrganizationListViewItem_o *)sub_1C22354(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_33025068(v6, v7, v8);
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
      sub_1C22094(this, item);
    }
  }
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
  int32_t DispImageLimitCount; // w0
  int32_t v4; // w19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v12; // x0

  if ( (byte_4BD821E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD821E = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v4 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v8);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1C22094(Instance, v6);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v4, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4BD7BC3 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BD7BC3 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  return v12->static_fields->unknownNameText;
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

  if ( (byte_4BD8213 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD8213 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v11, 0LL);
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

  if ( (byte_4BD8214 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8214 = 1;
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

  if ( (byte_4BD8212 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD8212 = 1;
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

  if ( (byte_4BD8211 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BD8211 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v6, 0LL);
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


System_ValueTuple_int__int__EventCombineEntity_CalcType__array *__fastcall PartyOrganizationListViewItem__get_FriendshipUpValTuple(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipUpValTuple_k__BackingField;
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

  if ( (byte_4BD8221 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8221 = 1;
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


int32_t __fastcall PartyOrganizationListViewItem__get_MainCost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct ServantEntity_o *servantEntity; // x8

  if ( this->fields.isFollower )
    return 0;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return 0;
  else
    return servantEntity->fields.cost;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeAtk(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  FollowerInfo_o *followerInfo; // x19
  struct ServantEntity_o *equipServantEntity; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t v9; // w2
  __int64 Atk; // x0
  __int64 v11; // x1
  FollowerInfo_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x8
  int32_t v14; // w20
  int32_t v15; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    equipUserServantEntity = this->fields.equipUserServantEntity;
    LODWORD(followerInfo) = userServantEntity->fields.atk;
    if ( equipUserServantEntity )
      LODWORD(followerInfo) = equipUserServantEntity->fields.atk + (_DWORD)followerInfo;
    return (int)followerInfo;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    equipServantEntity = this->fields.equipServantEntity;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v9 = questRestrictionInfo ? FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL) : 0;
    Atk = FollowerInfo__getAtk(followerInfo, followerIndex, v9, 0LL);
    LODWORD(followerInfo) = Atk;
    if ( equipServantEntity )
    {
      v12 = this->fields.followerInfo;
      v13 = this->fields.questRestrictionInfo;
      v14 = this->fields.followerIndex;
      if ( v13 )
      {
        Atk = FollowerInfo__GetReturnTypeByQuestId(v13->fields.questId, 0LL);
        v15 = Atk;
        if ( v12 )
        {
LABEL_11:
          LODWORD(followerInfo) = FollowerInfo__getEquipAtk(v12, v14, v15, 0LL) + (_DWORD)followerInfo;
          return (int)followerInfo;
        }
      }
      else
      {
        v15 = 0;
        if ( v12 )
          goto LABEL_11;
      }
      sub_1C22094(Atk, v11);
    }
  }
  return (int)followerInfo;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeCost(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9

  if ( this->fields.isFollower )
    return 0;
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  result = servantEntity->fields.cost;
  if ( equipServantEntity )
    result += equipServantEntity->fields.cost;
  return result;
}


int32_t __fastcall PartyOrganizationListViewItem__get_MargeHp(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userServantEntity; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  FollowerInfo_o *followerInfo; // x19
  struct ServantEntity_o *equipServantEntity; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t v9; // w2
  __int64 Hp; // x0
  __int64 v11; // x1
  FollowerInfo_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x8
  int32_t v14; // w20
  int32_t v15; // w2

  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    equipUserServantEntity = this->fields.equipUserServantEntity;
    LODWORD(followerInfo) = userServantEntity->fields.hp;
    if ( equipUserServantEntity )
      LODWORD(followerInfo) = equipUserServantEntity->fields.hp + (_DWORD)followerInfo;
    return (int)followerInfo;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    equipServantEntity = this->fields.equipServantEntity;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v9 = questRestrictionInfo ? FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL) : 0;
    Hp = FollowerInfo__getHp(followerInfo, followerIndex, v9, 0LL);
    LODWORD(followerInfo) = Hp;
    if ( equipServantEntity )
    {
      v12 = this->fields.followerInfo;
      v13 = this->fields.questRestrictionInfo;
      v14 = this->fields.followerIndex;
      if ( v13 )
      {
        Hp = FollowerInfo__GetReturnTypeByQuestId(v13->fields.questId, 0LL);
        v15 = Hp;
        if ( v12 )
        {
LABEL_11:
          LODWORD(followerInfo) = FollowerInfo__getEquipHp(v12, v14, v15, 0LL) + (_DWORD)followerInfo;
          return (int)followerInfo;
        }
      }
      else
      {
        v15 = 0;
        if ( v12 )
          goto LABEL_11;
      }
      sub_1C22094(Hp, v11);
    }
  }
  return (int)followerInfo;
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
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x1
  ServantAddMaster_o *v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  System_String_o *ServantName; // x0
  __int64 v10; // x1

  if ( (byte_4BD820E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD820E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantAddMaster___);
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (ServantAddMaster_o *)Master_object;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, v4);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL);
  ServantName = PartyOrganizationListViewItem__GetServantName(this, -1, v8);
  if ( !v5 )
    sub_1C22094(ServantName, v10);
  return ServantAddMaster__AddIdentifyText(v5, v7, ServantName, 0LL);
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

  if ( (byte_4BD820D & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD820D = 1;
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

  if ( (byte_4BD820F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19380/*"error"*/);
    byte_4BD820F = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0LL)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1C22094(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19380/*"error"*/;
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


void __fastcall PartyOrganizationListViewItem__set_FriendshipUpValTuple(
        PartyOrganizationListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1C21DDC(&this->fields._FriendshipUpValTuple_k__BackingField, value);
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
  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_1C21DDC(&this->fields._WaveEnemyClassIds_k__BackingField, value);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD82E0 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4BD82E0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_1C21DDC(PartyOrganizationListViewItem___c_TypeInfo->static_fields, v1);
}


void __fastcall PartyOrganizationListViewItem___c___ctor(
        PartyOrganizationListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C22094(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1C22094(this, 0LL);
  return drop->fields.eventId;
}