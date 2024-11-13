void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32572836(
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  void *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  const MethodInfo *v29; // x2
  int v30; // w9

  if ( (byte_4B11F7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B11F7C = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BCA784(&this->fields.userServantEntity, 0LL);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.followerInfo = followerInfo;
  sub_1BCA784(&this->fields.followerInfo, followerInfo);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(&this->fields.servantEntity, Entity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v26);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_40396124(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1BCA784(&this->fields.commandCodeIdList, 0LL);
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
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  if ( initPos )
    v30 = initPos;
  else
    v30 = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v30;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32576596(
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
  _BOOL4 v11; // w29
  bool v19; // w23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  struct FollowerInfo_o **p_followerInfo; // x21
  __int64 ReturnTypeByQuestId; // x0
  unsigned __int64 v43; // x1
  FollowerInfo_o *followerInfo; // x24
  int32_t v45; // w2
  int32_t v46; // w0
  FollowerInfo_o *v47; // x24
  struct QuestRestrictionInfo_o *v48; // x8
  int32_t followerIndex; // w27
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x22
  int32_t v51; // w2
  Il2CppObject *v52; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  struct ServantEntity_o *v54; // x8
  ServantLimitMaster_o *v55; // x27
  __int64 v56; // x24
  __int64 v57; // x28
  FollowerInfo_o *v58; // x24
  struct QuestRestrictionInfo_o *v59; // x8
  int32_t v60; // w29
  int32_t v61; // w28
  int32_t v62; // w2
  FollowerInfo_o *v63; // x23
  FollowerInfo_o *v64; // x24
  struct QuestRestrictionInfo_o *v65; // x8
  int32_t v66; // w27
  int32_t v67; // w2
  FollowerInfo_o *v68; // x24
  struct QuestRestrictionInfo_o *v69; // x8
  int32_t v70; // w27
  int32_t v71; // w2
  FollowerInfo_o *v72; // x27
  struct QuestRestrictionInfo_o *v73; // x8
  int32_t v74; // w24
  int32_t v75; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x1
  QuestRestrictionInfo_o *v79; // x27
  __int64 v80; // x24
  __int64 v81; // x28
  int32_t v82; // w23
  const MethodInfo *v83; // x1
  int32_t v84; // w24
  int32_t DispLimitCount; // w24
  const MethodInfo *v86; // x1
  int32_t v87; // w28
  int32_t InitPos_k__BackingField; // w29
  int32_t v89; // w0
  int v90; // w8
  __int64 v91; // x23
  unsigned int v92; // w28
  __int64 v93; // x25
  QuestRestrictionInfo_o *v94; // x24
  __int64 v95; // x26
  __int64 v96; // x27
  int32_t v97; // w26
  int32_t v98; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v100; // x8
  __int64 v101; // x1
  Il2CppObject *Master_object; // x23
  struct ServantEntity_o *v103; // x8
  UserEventDataLostEntity_o *v104; // x23
  __int64 v105; // x24
  __int64 v106; // x25
  struct ServantEntity_o *v107; // x8
  char v108; // w22
  UserEventDataLostEntity_o *v109; // x23
  __int64 v110; // x24
  __int64 v111; // x25
  struct QuestRestrictionInfo_o *v112; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v114; // x23
  const MethodInfo *v115; // x1
  const MethodInfo *v116; // x2
  const MethodInfo *v117; // x1
  int32_t v118; // w21
  __int64 v119; // x24
  __int64 v120; // x25
  int32_t v121; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v123; // x1
  const MethodInfo *v124; // x2
  __int64 v125; // x1
  QuestRestrictionInfo_o *v126; // x8
  bool IsNotClassBoard; // w20
  int32_t v128; // [xsp+Ch] [xbp-84h]
  _BOOL4 v129; // [xsp+14h] [xbp-7Ch]
  FollowerInfo_o *v130; // [xsp+18h] [xbp-78h]
  QuestPhaseEntity_o *v131; // [xsp+20h] [xbp-70h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16

  v11 = isFixNpc;
  v19 = isFixNpc;
  if ( (byte_4B11F7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index, follower);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v28, v29);
    sub_1BCA7E0(&DataManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v32, v33);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39);
    byte_4B11F7A = 1;
  }
  v131 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BCA784(&this->fields.userServantEntity, 0LL);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BCA784(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  ReturnTypeByQuestId = sub_1BCA784(&this->fields.followerInfo, follower);
  this->fields.isFixNpc = v19;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v45 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_133;
  }
  else
  {
    v45 = 0;
    if ( !followerInfo )
      goto LABEL_133;
  }
  v46 = FollowerInfo__getIndex(followerInfo, followerClassId, v45, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v46;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = this->fields.followerInfo;
  v48 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( v48 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v48->fields.questId, 0LL);
    v51 = ReturnTypeByQuestId;
    if ( !v47 )
      goto LABEL_133;
  }
  else
  {
    v51 = 0;
    if ( !v47 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v47, followerIndex, v51, 0LL);
  if ( !v50 )
    goto LABEL_133;
  v52 = DataMasterBase_object__object__int___GetEntity(
          v50,
          ReturnTypeByQuestId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v52;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(&this->fields.servantEntity, v52);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v130 = follower;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v54 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_133;
  v129 = v11;
  v55 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v57 = *(_QWORD *)&v54->fields.id.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v54->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
  *(_QWORD *)&v133.fields.currentCryptoKey = v57;
  *(_QWORD *)&v133.fields.fakeValue = v56;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v133, 0LL);
  v58 = this->fields.followerInfo;
  v59 = this->fields.questRestrictionInfo;
  v60 = this->fields.followerIndex;
  v61 = ReturnTypeByQuestId;
  if ( v59 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v59->fields.questId, 0LL);
    v62 = ReturnTypeByQuestId;
    if ( !v58 )
      goto LABEL_133;
  }
  else
  {
    v62 = 0;
    if ( !v58 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v58, v60, v62, 0LL);
  if ( !v55 )
    goto LABEL_133;
  ReturnTypeByQuestId = (__int64)ServantLimitMaster__GetEntity(v55, v61, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_133;
  v63 = v130;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v64 = this->fields.followerInfo;
  v65 = this->fields.questRestrictionInfo;
  v66 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v65 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v65->fields.questId, 0LL);
    v67 = ReturnTypeByQuestId;
    if ( !v64 )
      goto LABEL_133;
  }
  else
  {
    v67 = 0;
    if ( !v64 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v64, v66, v67, 0LL);
  v68 = this->fields.followerInfo;
  v69 = this->fields.questRestrictionInfo;
  v70 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v69 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v69->fields.questId, 0LL);
    v71 = ReturnTypeByQuestId;
    if ( !v68 )
      goto LABEL_133;
  }
  else
  {
    v71 = 0;
    if ( !v68 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v68, v70, v71, 0LL);
  v72 = this->fields.followerInfo;
  v73 = this->fields.questRestrictionInfo;
  v74 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v73 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v73->fields.questId, 0LL);
    v75 = ReturnTypeByQuestId;
    if ( !v72 )
      goto LABEL_133;
  }
  else
  {
    v75 = 0;
    if ( !v72 )
      goto LABEL_133;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v72, v74, v75, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BCA784(&this->fields.commandCodeIdList, CommandCodeIdList);
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v77) )
    goto LABEL_47;
  ReturnTypeByQuestId = (__int64)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_133;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v79 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v78);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v81 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v80 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    *(_QWORD *)&v134.fields.currentCryptoKey = v81;
    *(_QWORD *)&v134.fields.fakeValue = v80;
    v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v134, 0LL);
    ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v83);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v84 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v43);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v128 = v84;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v86);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v87 = *(_DWORD *)(ReturnTypeByQuestId + 68);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v89 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)v43);
    this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestriction_41173688(
                                        v79,
                                        &this->fields.isQuestRestrictionWhole,
                                        v82,
                                        v128,
                                        DispLimitCount,
                                        v87,
                                        InitPos_k__BackingField,
                                        v89,
                                        0LL);
    v63 = v130;
  }
  else
  {
LABEL_47:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v43 = (unsigned int)initPos;
  else
    v43 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v43;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, v43, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !v63 )
      goto LABEL_133;
    this->fields.npcFollowerSvtId = v63->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (__int64)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v90 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v91 = ReturnTypeByQuestId;
    if ( v90 >= 1 )
    {
      v92 = 0;
      while ( 1 )
      {
        if ( v92 >= v90 )
          sub_1BCAA44(ReturnTypeByQuestId, v43);
        v93 = *(_QWORD *)(v91 + 8LL * (int)v92 + 32);
        if ( !v93 )
          goto LABEL_133;
        v94 = *p_questRestrictionInfo;
        v96 = *(_QWORD *)(v93 + 80);
        v95 = *(_QWORD *)(v93 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
        *(_QWORD *)&v135.fields.currentCryptoKey = v96;
        *(_QWORD *)&v135.fields.fakeValue = v95;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v135, 0LL);
        v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v93 + 96),
                0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v93, 0, 0LL);
        if ( !v94 )
          goto LABEL_133;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v94,
                                v97,
                                v98,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v90 = *(_DWORD *)(v91 + 24);
        if ( (int)++v92 >= v90 )
          goto LABEL_81;
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
    if ( v129 && IsNpcMulitipleOrOnly )
    {
      ReturnTypeByQuestId = (__int64)this->fields.questRestrictionInfo;
      this->fields.isFixMultipleNpc = 1;
      if ( !ReturnTypeByQuestId )
        goto LABEL_133;
      ReturnTypeByQuestId = QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)ReturnTypeByQuestId, 0LL);
      if ( !*p_questRestrictionInfo )
        goto LABEL_133;
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
          goto LABEL_81;
      }
      else
      {
        ReturnTypeByQuestId = QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          goto LABEL_81;
      }
      if ( !v63 )
        goto LABEL_133;
      this->fields.npcFollowerSvtId = v63->fields.npcFollowerSvtId;
    }
    else
    {
      this->fields.isFixMultipleNpc = 0;
    }
  }
LABEL_81:
  v100 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v100 && v100->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v101);
    ReturnTypeByQuestId = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_133;
    ReturnTypeByQuestId = UserEventDataLostMaster__TryGetEntity(
                            (UserEventDataLostMaster_o *)Master_object,
                            &entity,
                            ReturnTypeByQuestId,
                            (*p_questRestrictionInfo)->fields.dataLostBattleId,
                            0LL);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      v103 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v104 = entity;
      v106 = *(_QWORD *)&v103->fields.id.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v103->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
      *(_QWORD *)&v136.fields.currentCryptoKey = v106;
      *(_QWORD *)&v136.fields.fakeValue = v105;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v136, 0LL);
      if ( !v104 )
        goto LABEL_133;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v104, ReturnTypeByQuestId, 0LL);
      v107 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v108 = ReturnTypeByQuestId;
      v109 = entity;
      v111 = *(_QWORD *)&v107->fields.id.fields.currentCryptoKey;
      v110 = *(_QWORD *)&v107->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
      *(_QWORD *)&v137.fields.currentCryptoKey = v111;
      *(_QWORD *)&v137.fields.fakeValue = v110;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v137, 0LL);
      if ( !v109 )
        goto LABEL_133;
      if ( (v108 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v109,
                                                         ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v109, ReturnTypeByQuestId, 0LL) )
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
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  v112 = this->fields.questRestrictionInfo;
  if ( v112 )
  {
    eventId = v112->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v114 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (__int64)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_133;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v115) )
        {
          ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v117);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v118 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v118;
          ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v43);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v120 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v119 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
          *(_QWORD *)&v138.fields.currentCryptoKey = v120;
          *(_QWORD *)&v138.fields.fakeValue = v119;
          v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v138, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v114, eventId, v118, v121, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v116);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v43) )
    goto LABEL_128;
  ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v123);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v126 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v125);
      ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v131,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v131;
          if ( !v131 )
            goto LABEL_133;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v131, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v43);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v126) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_132;
        }
      }
LABEL_133:
      sub_1BCAA3C(ReturnTypeByQuestId, v43);
    }
  }
  else
  {
LABEL_128:
    LOBYTE(v126) = 0;
  }
LABEL_132:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v126;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v124);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32604236(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  __int64 Instance; // x0
  const MethodInfo *v52; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v53; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x26
  __int64 v55; // x27
  __int64 v56; // x28
  Il2CppObject *v57; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  ServantLimitMaster_o *v59; // x27
  int32_t v60; // w28
  ServantLimitEntity_o *v61; // x27
  int v62; // w9
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x24
  struct System_Int32_array *v65; // x0
  struct System_Int32_array **p_equipSvtIdList; // x25
  __int64 v67; // x0
  __int64 v68; // x1
  struct UserServantEntity_o *v69; // x8
  __int64 v70; // x24
  __int64 v71; // x25
  UserServantEntity_o *v72; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  QuestRestrictionInfo_o *v74; // x24
  struct UserServantEntity_o *v75; // x8
  __int64 v76; // x25
  __int64 v77; // x26
  int32_t v78; // w25
  int32_t v79; // w26
  int32_t currentCryptoKey; // w28
  int32_t InitPos_k__BackingField; // w29
  int32_t v82; // w27
  int32_t v83; // w0
  QuestRestrictionInfo_o *v84; // x24
  UserServantEntity_o *v85; // x8
  __int64 v86; // x25
  __int64 v87; // x26
  int32_t v88; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v90; // x2
  struct QuestRestrictionInfo_o *v91; // x8
  UserServantEntity_o *v92; // x9
  UserEventServantFatigueMaster_o *v93; // x25
  int32_t eventId; // w26
  __int64 v95; // x27
  __int64 v96; // x28
  int64_t v97; // x19
  struct QuestRestrictionInfo_o *v98; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v100; // x8
  UserEventAlloutBattleMaster_o *v101; // x25
  __int64 v102; // x26
  __int64 v103; // x27
  __int64 v104; // x1
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v106; // x8
  UserEventDataLostEntity_o *v107; // x24
  __int64 v108; // x25
  __int64 v109; // x26
  UserServantEntity_o *v110; // x8
  char v111; // w24
  UserEventDataLostEntity_o *v112; // x25
  __int64 v113; // x26
  __int64 v114; // x27
  const MethodInfo *v115; // x2
  int v116; // w8
  __int64 v117; // x23
  unsigned int v118; // w19
  __int64 v119; // x25
  QuestRestrictionInfo_o *v120; // x24
  __int64 v121; // x26
  __int64 v122; // x27
  int32_t v123; // w26
  int32_t v124; // w27
  int32_t v125; // w22
  EventServantPointRankMaster_o *v126; // x23
  __int64 v127; // x1
  const MethodInfo *v128; // x2
  UserServantEntity_o *v129; // x8
  __int128 v130; // q0
  UserEventServantPointMaster_o *v131; // x24
  int64_t v132; // x25
  int32_t SvtPoint_k__BackingField; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v136; // x2
  struct UserServantEntity_o *v137; // x8
  __int128 v138; // q0
  Il2CppObject *v139; // x22
  UserServantEntity_o *v140; // x8
  __int128 v141; // q0
  System_Int64_array *v142; // x23
  PartyOrganizationListViewItem_o *v143; // x0
  const MethodInfo *v144; // x1
  System_Int64_array *equipIdLista; // [xsp+10h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+80h] [xbp-A0h]
  UserEventServantPointEntity_o *v150; // [xsp+A8h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+B0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  if ( (byte_4B11F79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index, userServantEntity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v31, v32);
    sub_1BCA7E0(&DataManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v35, v36);
    sub_1BCA7E0(&int___TypeInfo, v37, v38);
    sub_1BCA7E0(&long___TypeInfo, v39, v40);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v41, v42);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48);
    byte_4B11F79 = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  v150 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1BCA784(&this->fields.userServantEntity, userServantEntity);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BCA784(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  this->fields.followerInfo = 0LL;
  sub_1BCA784(&this->fields.followerInfo, 0LL);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  equipIdLista = equipIdList;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v53 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v56 = *(_QWORD *)&v53[5].fields.currentCryptoKey;
  v55 = *(_QWORD *)&v53[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
  *(_QWORD *)&v153.fields.currentCryptoKey = v56;
  *(_QWORD *)&v153.fields.fakeValue = v55;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v153, 0LL);
  if ( !v54 )
    goto LABEL_140;
  v57 = DataMasterBase_object__object__int___GetEntity(
          v54,
          Instance,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v57;
  p_servantEntity = &this->fields.servantEntity;
  sub_1BCA784(&this->fields.servantEntity, v57);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v59 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v60 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userServantEntity)[6], 0LL);
  if ( !v59 )
    goto LABEL_140;
  v61 = ServantLimitMaster__GetEntity(v59, v60, Instance, 0LL);
  if ( initPos )
    v62 = initPos;
  else
    v62 = index + 1;
  this->fields._InitPos_k__BackingField = v62;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v63 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL)) == 0LL )
  {
    v68 = 0LL;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    Instance = sub_1BCA784(p_equipSvtIdList, v68);
    if ( !*p_servantEntity )
      goto LABEL_140;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !v61 )
      goto LABEL_140;
    Instance = (__int64)this->fields.userServantEntity;
    this->fields.rarityId = v61->fields.rarity;
    if ( !Instance )
      goto LABEL_140;
    Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
    v69 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v69 )
      goto LABEL_140;
    v71 = *(_QWORD *)&v69->fields.limitCount.fields.currentCryptoKey;
    v70 = *(_QWORD *)&v69->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
    *(_QWORD *)&v154.fields.currentCryptoKey = v71;
    *(_QWORD *)&v154.fields.fakeValue = v70;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v154, 0LL);
    v72 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v72 )
      goto LABEL_140;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v72, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    Instance = sub_1BCA784(&this->fields.commandCodeIdList, CommandCodeIdList);
    v74 = this->fields.questRestrictionInfo;
    if ( v74 )
    {
      v75 = this->fields.userServantEntity;
      if ( !v75 )
        goto LABEL_140;
      v77 = *(_QWORD *)&v75->fields.svtId.fields.currentCryptoKey;
      v76 = *(_QWORD *)&v75->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
      *(_QWORD *)&v155.fields.currentCryptoKey = v77;
      *(_QWORD *)&v155.fields.fakeValue = v76;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v155, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v78 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_userServantEntity)[6], 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v79 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      currentCryptoKey = (*p_userServantEntity)[16].fields.currentCryptoKey;
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      v82 = Instance;
      v83 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v52);
      Instance = QuestRestrictionInfo__IsRestriction_41173688(
                   v74,
                   &this->fields.isQuestRestrictionWhole,
                   v78,
                   v79,
                   v82,
                   currentCryptoKey,
                   InitPos_k__BackingField,
                   v83,
                   0LL);
      v84 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v84 )
      {
        v85 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v87 = *(_QWORD *)&v85->fields.svtId.fields.currentCryptoKey;
        v86 = *(_QWORD *)&v85->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
        *(_QWORD *)&v156.fields.currentCryptoKey = v87;
        *(_QWORD *)&v156.fields.fakeValue = v86;
        v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v156, 0LL);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v84, v88, 0LL);
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
    Instance = sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
    v91 = this->fields.questRestrictionInfo;
    this->fields._IsNotClassBoardNpc_k__BackingField = 0;
    this->fields._IsClearedWave_k__BackingField = isClearedWave;
    *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
    if ( !v91 )
    {
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 0, v90);
      goto LABEL_139;
    }
    if ( v91->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_140;
      v92 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v93 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v96 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
      v95 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
      *(_QWORD *)&v157.fields.currentCryptoKey = v96;
      *(_QWORD *)&v157.fields.fakeValue = v95;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v157, 0LL);
      if ( !v93 )
        goto LABEL_140;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v93,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v97 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52);
        Instance = NetworkManager__getTime(0LL);
        if ( v97 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v98 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    if ( v98->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v98->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v100 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v101 = (UserEventAlloutBattleMaster_o *)Instance;
      v103 = *(_QWORD *)&v100->fields.svtId.fields.currentCryptoKey;
      v102 = *(_QWORD *)&v100->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
      *(_QWORD *)&v158.fields.currentCryptoKey = v103;
      *(_QWORD *)&v158.fields.fakeValue = v102;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v158, 0LL);
      if ( !*p_questRestrictionInfo || !v101 )
        goto LABEL_140;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v101,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0LL);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v104);
      Instance = NetworkManager__get_UserId(0LL);
      if ( !*p_questRestrictionInfo || !Master_object )
        goto LABEL_140;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_object,
                   &entity,
                   Instance,
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v106 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v107 = entity;
        v109 = *(_QWORD *)&v106->fields.svtId.fields.currentCryptoKey;
        v108 = *(_QWORD *)&v106->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
        *(_QWORD *)&v159.fields.currentCryptoKey = v109;
        *(_QWORD *)&v159.fields.fakeValue = v108;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v159, 0LL);
        if ( !v107 )
          goto LABEL_140;
        Instance = UserEventDataLostEntity__IsRestart(v107, Instance, 0LL);
        v110 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v111 = Instance;
        v112 = entity;
        v114 = *(_QWORD *)&v110->fields.svtId.fields.currentCryptoKey;
        v113 = *(_QWORD *)&v110->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
        *(_QWORD *)&v160.fields.currentCryptoKey = v114;
        *(_QWORD *)&v160.fields.fakeValue = v113;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v160, 0LL);
        if ( !v112 )
          goto LABEL_140;
        if ( (v111 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v112, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v112, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_140;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_140;
        v116 = *(_DWORD *)(Instance + 24);
        v117 = Instance;
        if ( v116 >= 1 )
        {
          v118 = 0;
          while ( 1 )
          {
            if ( v118 >= v116 )
              goto LABEL_141;
            v119 = *(_QWORD *)(v117 + 8LL * (int)v118 + 32);
            if ( !v119 )
              goto LABEL_140;
            v120 = *p_questRestrictionInfo;
            v122 = *(_QWORD *)(v119 + 80);
            v121 = *(_QWORD *)(v119 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52);
            *(_QWORD *)&v161.fields.currentCryptoKey = v122;
            *(_QWORD *)&v161.fields.fakeValue = v121;
            v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v161, 0LL);
            v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v119 + 96),
                     0LL);
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v119, 0, 0LL);
            if ( !v120 )
              goto LABEL_140;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v120,
                         v123,
                         v124,
                         Instance,
                         this->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            if ( (Instance & 1) == 0 )
              break;
            v116 = *(_DWORD *)(v117 + 24);
            if ( (int)++v118 >= v116 )
              goto LABEL_104;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_104:
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    v125 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_140;
    v126 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v125, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v127);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v129 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v130 = *(_OWORD *)&v129->fields.userId.fields.fakeValue;
      v131 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v129->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v130;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
      v148 = v149;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v148, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v132 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
      if ( !v131 )
        goto LABEL_140;
      if ( UserEventServantPointMaster__TryGetEntity(v131, &v150, v132, v125, Instance, 0LL) )
      {
        Instance = (__int64)v150;
        if ( !v150 )
          goto LABEL_140;
        this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v150, 0LL);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v126, v125, SvtPoint_k__BackingField, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v125, v136);
    }
    PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 1, v128);
    v137 = this->fields.userServantEntity;
    if ( !v137 )
      goto LABEL_140;
    v138 = *(_OWORD *)&v137->fields.id.fields.fakeValue;
    *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v137->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v149.fields.fakeValue = v138;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
    v147 = v149;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v147, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
      v139 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1BCA888(long___TypeInfo, 1LL);
      v140 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v141 = *(_OWORD *)&v140->fields.id.fields.fakeValue;
      v142 = (System_Int64_array *)Instance;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v140->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v141;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52);
      v146 = v149;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v146, 0LL);
      if ( !v142 )
        goto LABEL_140;
      if ( !v142->max_length )
LABEL_141:
        sub_1BCAA44(Instance, v52);
      v142->m_Items[0] = Instance;
      if ( !v139 )
        goto LABEL_140;
      if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v139, v142, 0LL) )
      {
LABEL_138:
        this->fields._IsDisappearSvt_k__BackingField = 1;
        goto LABEL_139;
      }
    }
    Instance = (__int64)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL) )
        goto LABEL_138;
LABEL_139:
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdLista, v115);
      return;
    }
LABEL_140:
    sub_1BCAA3C(Instance, v52);
  }
  v64 = v63;
  v65 = (struct System_Int32_array *)sub_1BCA91C(v63, int___TypeInfo);
  if ( v65 )
  {
    this->fields.equipSvtIdList = v65;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v67 = sub_1BCA91C(v64, int___TypeInfo);
    if ( v67 )
    {
      v68 = v67;
      goto LABEL_21;
    }
  }
  else
  {
    sub_1BCACFC(v64);
  }
  v143 = (PartyOrganizationListViewItem_o *)sub_1BCACFC(v64);
  PartyOrganizationListViewItem__GeRestrictionTargetType(v143, v144);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32613444(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        const MethodInfo *method)
{
  bool v15; // w27
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int v24; // w1
  UserServantEntity_array *Instance; // x0
  __int64 v26; // x1
  int max_length; // w8
  UserServantEntity_array *v28; // x22
  unsigned int v29; // w27
  UserServantEntity_o *v30; // x24
  QuestRestrictionInfo_o *v31; // x23
  __int64 v32; // x25
  __int64 v33; // x26
  int32_t v34; // w25
  int32_t v35; // w26
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  struct QuestRestrictionInfo_o *v38; // x8
  int32_t eventId; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v15 = isFollower;
  if ( (byte_4B11F7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index, isFollower);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B11F7B = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BCA784(&this->fields.userServantEntity, 0LL);
  this->fields.followerInfo = 0LL;
  sub_1BCA784(&this->fields.followerInfo, 0LL);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isFollower = v15;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.servantEntity = 0LL;
  sub_1BCA784(&this->fields.servantEntity, 0LL);
  if ( initPos )
    v24 = initPos;
  else
    v24 = index + 1;
  *(_QWORD *)&this->fields.classId = 0LL;
  this->fields._InitPos_k__BackingField = v24;
  this->fields._NowPos_k__BackingField = index + 1;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_30:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_31;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, v24, 0LL) )
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
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  max_length = Instance->max_length;
  v28 = Instance;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1BCAA44(Instance, v26);
      v30 = v28->m_Items[v29];
      if ( !v30 )
        goto LABEL_39;
      v31 = this->fields.questRestrictionInfo;
      v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
      *(_QWORD *)&v40.fields.currentCryptoKey = v33;
      *(_QWORD *)&v40.fields.fakeValue = v32;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30->fields.limitCount, 0LL);
      Instance = (UserServantEntity_array *)UserServantEntity__getDispLimitCount(v30, 0, 0LL);
      if ( !v31 )
        goto LABEL_39;
      Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v31,
                                              v34,
                                              v35,
                                              (int32_t)Instance,
                                              this->fields._InitPos_k__BackingField,
                                              0,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      max_length = v28->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_31;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_31:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1BCA784(&this->fields.commandCodeIdList, 0LL);
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
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  v38 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !v38 )
    goto LABEL_37;
  eventId = v38->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_39:
    sub_1BCAA3C(Instance, v26);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v37);
  }
LABEL_37:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v37);
}


// local variable allocation has failed, the output may be wrong!
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
  void *ServantLeader; // x0
  struct UserServantEntity_o *v12; // x8
  int32_t v13; // w23
  int32_t v14; // w24
  struct UserServantEntity_o *v15; // x8
  int32_t lv; // w26
  int32_t v17; // w27
  int32_t v18; // w25
  int32_t v19; // w0
  struct UserServantEntity_o *v20; // x8
  QuestRestrictionInfo_o *v21; // x22
  __int64 v22; // x23
  __int64 v23; // x24
  struct UserServantEntity_o *v24; // x8
  int32_t v25; // w23
  int32_t v26; // w24
  QuestRestrictionInfo_o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x24
  int32_t v30; // w23
  const MethodInfo *v31; // x1
  int32_t v32; // w24
  int32_t DispLimitCount; // w25
  const MethodInfo *v34; // x1
  int32_t v35; // w26
  int32_t InitPos_k__BackingField; // w27
  int32_t v37; // w0
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v39; // x23
  __int64 v40; // x24
  int32_t v41; // w23
  const MethodInfo *v42; // x1
  int32_t v43; // w24
  UserServantEntity_o *v44; // x8
  bool IsUniqueIndividualityRestriction_40942144; // w0
  const MethodInfo *v46; // x1
  QuestRestrictionInfo_o *v47; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr00_16
  int32_t v49; // w0
  int32_t v50; // w27
  int32_t v51; // w28
  const MethodInfo *v52; // x1
  int32_t DispImageLimitCount; // w0
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *v55; // x22
  int32_t followerIndex; // w24
  int32_t v57; // w5
  FollowerInfo_o *v58; // x23
  struct QuestRestrictionInfo_o *v59; // x22
  int32_t v60; // w24
  int32_t v61; // w5
  bool IsUniqueIndividualityRestriction_39639272; // w0
  const MethodInfo *v63; // x1
  QuestRestrictionInfo_o *v64; // x22
  ServantLeaderInfo_o *v65; // x0
  bool IsFixedSupportPosition_41179888; // w0
  QuestRestrictionInfo_o *v67; // x8
  QuestRestrictionInfo_o *v68; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v70; // w0
  int32_t svtLimitCount; // w22
  int32_t v72; // w23
  const MethodInfo *v73; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4B11F86 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem, *(_QWORD *)&num);
    byte_4B11F86 = 1;
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
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
    if ( !ServantLeader )
      goto LABEL_48;
    ServantLeader = this->fields.followerInfo;
    if ( !ServantLeader )
      goto LABEL_72;
    ServantLeader = (void *)FollowerInfo__get_IsNpc((FollowerInfo_o *)ServantLeader, 0LL);
    if ( ((unsigned __int8)ServantLeader & 1) == 0 && (v27 = this->fields.questRestrictionInfo) != 0LL )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !ServantLeader )
        goto LABEL_72;
      v29 = *((_QWORD *)ServantLeader + 6);
      v28 = *((_QWORD *)ServantLeader + 7);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
      *(_QWORD *)&v76.fields.currentCryptoKey = v29;
      *(_QWORD *)&v76.fields.fakeValue = v28;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v76, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v31);
      if ( !ServantLeader )
        goto LABEL_72;
      v32 = *((_DWORD *)ServantLeader + 16);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !ServantLeader )
        goto LABEL_72;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v34);
      if ( !ServantLeader )
        goto LABEL_72;
      v35 = *((_DWORD *)ServantLeader + 17);
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      v37 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)partyItem);
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_41173688(
                                v27,
                                &this->fields.isQuestRestrictionWhole,
                                v30,
                                v32,
                                DispLimitCount,
                                v35,
                                InitPos_k__BackingField,
                                v37,
                                0LL);
      this->fields.isQuestRestriction = (unsigned __int8)ServantLeader & 1;
      if ( ((unsigned __int8)ServantLeader & 1) == 0 )
      {
        ServantLeader = this->fields.questRestrictionInfo;
        if ( !ServantLeader )
          goto LABEL_72;
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                                  (QuestRestrictionInfo_o *)ServantLeader,
                                  this->fields._InitPos_k__BackingField,
                                  0LL);
        if ( ((unsigned __int8)ServantLeader & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !ServantLeader )
            goto LABEL_72;
          v40 = *((_QWORD *)ServantLeader + 6);
          v39 = *((_QWORD *)ServantLeader + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
          *(_QWORD *)&v77.fields.currentCryptoKey = v40;
          *(_QWORD *)&v77.fields.fakeValue = v39;
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v77, 0LL);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v42);
          if ( !ServantLeader )
            goto LABEL_72;
          v43 = *((_DWORD *)ServantLeader + 16);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !ServantLeader )
            goto LABEL_72;
          ServantLeader = (void *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_72;
          ServantLeader = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                    questRestrictionInfo,
                                    v41,
                                    v43,
                                    (int32_t)ServantLeader,
                                    this->fields._InitPos_k__BackingField,
                                    1,
                                    0LL);
          this->fields.isQuestRestriction = (unsigned __int8)ServantLeader & 1;
        }
      }
    }
    else
    {
LABEL_48:
      *(_WORD *)&this->fields.isQuestRestriction = 0;
    }
    followerInfo = this->fields.followerInfo;
    v55 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v55 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v55->fields.questId, 0LL);
      v57 = (int)ServantLeader;
      if ( !followerInfo )
        goto LABEL_72;
    }
    else
    {
      v57 = 0;
      if ( !followerInfo )
        goto LABEL_72;
    }
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_39639112(
                              followerInfo,
                              v55,
                              followerIndex,
                              partyItem,
                              num,
                              v57,
                              0LL);
    v58 = this->fields.followerInfo;
    v59 = this->fields.questRestrictionInfo;
    v60 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
    if ( v59 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v59->fields.questId, 0LL);
      v61 = (int)ServantLeader;
      if ( !v58 )
        goto LABEL_72;
    }
    else
    {
      v61 = 0;
      if ( !v58 )
        goto LABEL_72;
    }
    IsUniqueIndividualityRestriction_39639272 = FollowerInfo__IsUniqueIndividualityRestriction_39639272(
                                                  v58,
                                                  v59,
                                                  v60,
                                                  partyItem,
                                                  num,
                                                  v61,
                                                  0LL);
    v64 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_39639272;
    if ( v64 )
    {
      v65 = PartyOrganizationListViewItem__get_ServantLeader(this, v63);
      IsFixedSupportPosition_41179888 = QuestRestrictionInfo__IsFixedSupportPosition_41179888(v64, num, v65, 0LL);
      v67 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_41179888;
      if ( v67 )
      {
        ServantLeader = (void *)QuestRestrictionInfo__IsUseOldMaster(v67, 0LL);
        if ( ((unsigned __int8)ServantLeader & 1) == 0 )
          goto LABEL_66;
        if ( !partyItem )
          goto LABEL_72;
        ServantLeader = PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( !ServantLeader )
          goto LABEL_72;
        if ( *((_BYTE *)ServantLeader + 232) )
          goto LABEL_66;
        ServantLeader = this->fields.questRestrictionInfo;
        if ( !ServantLeader )
          goto LABEL_72;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport((QuestRestrictionInfo_o *)ServantLeader, 0LL) )
        {
LABEL_66:
          v68 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, (const MethodInfo *)partyItem);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              *(_QWORD *)&SvtId.fields.fakeValue);
          v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v72 = v70;
          ServantLeader = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v73);
          if ( v68 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v68,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v72,
              svtLimitCount,
              (int32_t)ServantLeader,
              num,
              1,
              0LL);
            return;
          }
          goto LABEL_72;
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
  *(_QWORD *)&v74.fields.currentCryptoKey = v10;
  *(_QWORD *)&v74.fields.fakeValue = v9;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v74, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v15 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_72:
    sub_1BCAA3C(ServantLeader, partyItem);
  }
  lv = v15->fields.lv;
  v17 = this->fields._InitPos_k__BackingField;
  v18 = (int)ServantLeader;
  v19 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)partyItem);
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_41173688(
                            v8,
                            &this->fields.isQuestRestrictionWhole,
                            v13,
                            v14,
                            v18,
                            lv,
                            v17,
                            v19,
                            0LL);
  this->fields.isQuestRestriction = (unsigned __int8)ServantLeader & 1;
  if ( ((unsigned __int8)ServantLeader & 1) == 0 )
  {
    v20 = this->fields.userServantEntity;
    if ( v20 )
    {
      v21 = this->fields.questRestrictionInfo;
      v23 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
      *(_QWORD *)&v75.fields.currentCryptoKey = v23;
      *(_QWORD *)&v75.fields.fakeValue = v22;
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v75, 0LL);
      v24 = this->fields.userServantEntity;
      if ( v24 )
      {
        v25 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                  v24->fields.limitCount,
                                  0LL);
        if ( this->fields.userServantEntity )
        {
          v26 = (int)ServantLeader;
          ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
          if ( v21 )
          {
            this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v21,
                                                v25,
                                                v26,
                                                (int32_t)ServantLeader,
                                                this->fields._InitPos_k__BackingField,
                                                0,
                                                0LL);
            goto LABEL_40;
          }
        }
      }
    }
    goto LABEL_72;
  }
LABEL_40:
  ServantLeader = this->fields.userServantEntity;
  if ( !ServantLeader )
    goto LABEL_72;
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_40941764(
                            (UserServantEntity_o *)ServantLeader,
                            this->fields.questRestrictionInfo,
                            partyItem,
                            num,
                            -1,
                            0LL);
  v44 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
  if ( !v44 )
    goto LABEL_72;
  IsUniqueIndividualityRestriction_40942144 = UserServantEntity__IsUniqueIndividualityRestriction_40942144(
                                                v44,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v47 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40942144;
  if ( v47 )
  {
    v48 = PartyOrganizationListViewItem__get_SvtId(this, v46);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&v48.fields.fakeValue);
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL);
    v50 = this->fields.svtLimitCount;
    v51 = v49;
    DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v52);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v47,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v51,
      v50,
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
    sub_1BCAA44(this, equipIdList);
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
  sub_1BCA784(&this->fields.followerInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t index; // w22
  __int64 v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4B11F7D & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx, method);
    byte_4B11F7D = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v7 = sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx, method, v3);
  *(_DWORD *)(v7 + 304) = -1;
  *(_DWORD *)(v7 + 360) = -1;
  ListViewItem___ctor_41447164((ListViewItem_o *)v7, index, 0LL);
  PartyOrganizationListViewItem__Set((PartyOrganizationListViewItem_o *)v7, this, v8);
  if ( (idx & 0x80000000) == 0 )
  {
    *(_DWORD *)(v7 + 20) = idx;
    ListViewItem__SetSortIndex((ListViewItem_o *)v7, idx, 0LL);
  }
  return (PartyOrganizationListViewItem_o *)v7;
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
  if ( (byte_4B11F87 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, item, method);
    byte_4B11F87 = 1;
  }
  if ( !item )
LABEL_26:
    sub_1BCAA3C(this, item);
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
      j_il2cpp_runtime_class_init_0(this, item);
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
      sub_1BCAA44(this, item);
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
  sub_1BCA784(&this->fields.userServantEntity, 0LL);
  this->fields.followerInfo = 0LL;
  sub_1BCA784(&this->fields.followerInfo, 0LL);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_1BCA784(&this->fields.equipIdList, 0LL);
  this->fields.servantEntity = 0LL;
  sub_1BCA784(&this->fields.servantEntity, 0LL);
  *(_OWORD *)&this->fields.classId = xmmword_BD3B90;
  this->fields.commandCodeIdList = 0LL;
  sub_1BCA784(&this->fields.commandCodeIdList, 0LL);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, 0LL);
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v3);
}


void __fastcall PartyOrganizationListViewItem__Finalize(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GeRestrictionTargetType(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x0

  if ( !this->fields.isFollower )
    return 1;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    sub_1BCAA3C(0LL, method);
  if ( FollowerInfo__get_IsNpc(followerInfo, 0LL) )
    return 99;
  else
    return 2;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 SvtId; // x0
  __int64 v10; // x1
  UserServantEntity_o *v11; // x8
  int32_t v12; // w19
  int32_t CardImageLimitCount; // w0
  __int64 v14; // x1
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  FollowerInfo_o *v20; // x20
  struct QuestRestrictionInfo_o *v21; // x8
  int32_t v22; // w21
  int32_t v23; // w2
  int32_t v24; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B11F97 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&UINarrowFigureRender_TypeInfo, v4, v5);
    byte_4B11F97 = 1;
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
    v20 = this->fields.followerInfo;
    v21 = this->fields.questRestrictionInfo;
    v22 = this->fields.followerIndex;
    v12 = SvtId;
    if ( v21 )
    {
      SvtId = FollowerInfo__GetReturnTypeByQuestId(v21->fields.questId, 0LL);
      v23 = SvtId;
      if ( !v20 )
        goto LABEL_20;
    }
    else
    {
      v23 = 0;
      if ( !v20 )
        goto LABEL_20;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v20, v22, v23, 0LL);
    goto LABEL_16;
  }
  v8 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v25.fields.currentCryptoKey = v8;
  *(_QWORD *)&v25.fields.fakeValue = v7;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  v11 = this->fields.userServantEntity;
  if ( !v11 )
LABEL_20:
    sub_1BCAA3C(SvtId, v10);
  v12 = SvtId;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v11, 0, 0LL);
LABEL_16:
  v24 = CardImageLimitCount;
  if ( !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, v14);
  return UINarrowFigureRender__GetAssetName(v12, v24, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GetCardImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UserServantEntity_o *userServantEntity; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v9; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v12; // x0

  if ( (byte_4B11F99 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11F99 = 1;
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
      v12 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
        v12 = BalanceConfig_TypeInfo;
      }
      return v12->static_fields->OtherImageLimitCount;
    }
    else
    {
LABEL_7:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_21:
        sub_1BCAA3C(userServantEntity, v4);
      }
    }
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      v9 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v9 )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v9->fields.questId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BCAA3C(v5, 0LL);
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
  __int64 v2; // x2
  struct ServantEntity_o *servantEntity; // x8
  System_Int32_array *result; // x0
  __int64 v6; // x1
  struct ServantEntity_o *v7; // x8
  struct System_Int32_array *cardIds; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 i; // x9
  il2cpp_array_size_t v11; // w13

  if ( (byte_4B11F96 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B11F96 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
  v7 = this->fields.servantEntity;
  if ( !v7 || (cardIds = v7->fields.cardIds) == 0LL )
LABEL_15:
    sub_1BCAA3C(result, v6);
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
        sub_1BCAA44(result, v6);
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
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v6; // w0

  if ( (byte_4B11F98 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B11F98 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&SvtId.fields.fakeValue);
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
  return QuestRestrictionInfo__GetCorrectionIconId(questRestrictionInfo, v6, this->fields.isFollower, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BCAA3C(v5, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Array_o *equipIdList; // x0
  System_Int64_array *result; // x0
  System_Int64_array *v8; // x19
  BalanceConfig_c *v9; // x0
  PartyOrganizationListViewItem_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B11F88 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&long___TypeInfo, v4, v5);
    byte_4B11F88 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v8 = result;
      result = (System_Int64_array *)sub_1BCA91C(result, long___TypeInfo);
      if ( !result )
      {
        v10 = (PartyOrganizationListViewItem_o *)sub_1BCACFC(v8);
        return (System_Int64_array *)*(_OWORD *)&PartyOrganizationListViewItem__get_EquipSvtId(v10, v11);
      }
    }
  }
  else
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v9 = BalanceConfig_TypeInfo;
    }
    return (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
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
  sub_1BCA784(eventUpValInfo, v3);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B11F95 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F95 = 1;
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
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B11F94 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F94 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BCAA3C(v5, 0LL);
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
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B11F9B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F9B = 1;
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
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B11F9C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F9C = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1BCAA3C(v5, 0LL);
  }
  LODWORD(v5) = UserServantEntity__getPortraitLimitCount(userServantEntity, 0, 0LL);
  return v5;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetQuestRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v9; // x0
  struct QuestRestrictionInfo_o *v11; // x0
  System_String_o *v12; // x20
  System_String_o *ConfirmRestrictionMessage; // x1

  if ( (byte_4B11F91 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10414/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B11F91 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
  {
    v9 = this->fields.questRestrictionInfo;
    if ( v9 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v9, 0LL);
LABEL_32:
    sub_1BCAA3C(v9, method);
  }
  if ( this->fields.index >= 1 )
  {
    v11 = this->fields.questRestrictionInfo;
    if ( v11 )
    {
      if ( v11->fields.isFixedMyServantSingle )
        return QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(v11, 0LL);
    }
  }
  if ( this->fields.isServantNumRestriction )
  {
    v9 = this->fields.questRestrictionInfo;
    if ( !v9 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v9, 0LL);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v9 = this->fields.questRestrictionInfo;
    if ( !v9 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v9, 0LL);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v9 = this->fields.questRestrictionInfo;
    if ( !v9 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetFixNpcMessage(v9, 0LL);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v9 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10414/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v12 = (System_String_o *)v9;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_62401220(v12, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v9 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
      method = 0LL;
    else
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
    if ( !v9 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetRestrictionMessage(v9, (int32_t)method, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v14; // x20
  __int64 v15; // x21
  const MethodInfo *v16; // x1
  int64_t ServantLeader; // x0
  __int64 v18; // x1
  Il2CppObject *Master_object; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  struct ServantEntity_o *v24; // x8
  ServantLimitImageMaster_o *v25; // x19
  __int64 v26; // x21
  __int64 v27; // x22
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4B11F8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B11F8C = 1;
  }
  entity = 0LL;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&limitCount);
    *(_QWORD *)&v30.fields.currentCryptoKey = v15;
    *(_QWORD *)&v30.fields.fakeValue = v14;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30, 0LL);
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, *(const MethodInfo **)&limitCount) )
  {
    ServantLeader = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v16);
    if ( !ServantLeader )
      goto LABEL_32;
    maxLimitCount = *(_DWORD *)(ServantLeader + 64);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_32;
  v21 = ServantLeader;
  v23 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v31.fields.currentCryptoKey = v23;
  *(_QWORD *)&v31.fields.fakeValue = v22;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  if ( !Master_object )
LABEL_32:
    sub_1BCAA3C(ServantLeader, v16);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    (UserServantCollectionMaster_o *)Master_object,
                    &entity,
                    v21,
                    ServantLeader,
                    0LL);
  if ( (ServantLeader & 1) == 0 )
  {
    ServantLeader = (int64_t)this->fields.servantEntity;
    if ( ServantLeader )
      return ServantEntity__getName((ServantEntity_o *)ServantLeader, -1, -1, 0LL);
    goto LABEL_32;
  }
  if ( !entity )
    goto LABEL_32;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_22:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  ServantLeader = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v24 = this->fields.servantEntity;
  if ( !v24 )
    goto LABEL_32;
  v25 = (ServantLimitImageMaster_o *)ServantLeader;
  v27 = *(_QWORD *)&v24->fields.id.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v32.fields.currentCryptoKey = v27;
  *(_QWORD *)&v32.fields.fakeValue = v26;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
  if ( !v25 )
    goto LABEL_32;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v25, ServantLeader, maxLimitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v12; // x1
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v14; // x0

  if ( (byte_4B11F93 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isFixMessage, method);
    sub_1BCA7E0(&StringLiteral_44/*"\n\n"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_10450/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v9, v10);
    byte_4B11F93 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_10450/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_62412480(
           v14,
           (System_String_o *)StringLiteral_44/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B11F92 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F92 = 1;
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
    sub_1BCAA3C(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41189504(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v11; // q1
  int64_t Entity; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int64_t v15; // x21
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-40h]

  if ( (byte_4B11F82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    byte_4B11F82 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v19.fields.fakeValue = v11;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    v18 = v19;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v18, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v15 = Entity;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        sub_1BCAA3C(0LL, v17);
      Entity = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)&this->fields.userServantEntity,
                 v15,
                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
      (PartyOrganizationListViewItem_o *)Entity,
      this,
      v14);
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
    sub_1BCAA3C(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  PartyOrganizationListViewItem__Modify_32616228(this, item, v6);
}


void __fastcall PartyOrganizationListViewItem__Modify_32616228(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  UserServantEntity_o *v19; // x8
  System_Int32_array *CommandCodeIdList; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v22; // x8
  __int64 v23; // x21
  __int64 v24; // x23
  int32_t v25; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  const MethodInfo *v29; // x2
  _BOOL4 isMyServantOrNpcRestriction; // w8
  System_Int64_array *equipIdList; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  v4 = this;
  if ( (byte_4B11F83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, item, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    this = (PartyOrganizationListViewItem_o *)sub_1BCA7E0(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v9,
                                                v10);
    byte_4B11F83 = 1;
  }
  if ( !item )
    goto LABEL_21;
  userServantEntity = item->fields.userServantEntity;
  v4->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v4->fields.userServantEntity;
  sub_1BCA784(&v4->fields.userServantEntity, userServantEntity);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_21;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
  *(_QWORD *)&v32.fields.currentCryptoKey = v16;
  *(_QWORD *)&v32.fields.fakeValue = v15;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v32,
                                              0LL);
  if ( !v14 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)this,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v4->fields.servantEntity = (struct ServantEntity_o *)Entity;
  this = (PartyOrganizationListViewItem_o *)sub_1BCA784(&v4->fields.servantEntity, Entity);
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  *(_QWORD *)&v4->fields.classId = *(_QWORD *)&item->fields.classId;
  v4->fields.frameType = item->fields.frameType;
  if ( !v18 )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v18[6],
                                              0LL);
  v19 = v4->fields.userServantEntity;
  v4->fields.svtLimitCount = (int)this;
  if ( !v19 )
    goto LABEL_21;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v19, 0LL);
  v4->fields.commandCodeIdList = CommandCodeIdList;
  this = (PartyOrganizationListViewItem_o *)sub_1BCA784(&v4->fields.commandCodeIdList, CommandCodeIdList);
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
  v22 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_21:
    sub_1BCAA3C(this, item);
  v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
  *(_QWORD *)&v33.fields.currentCryptoKey = v24;
  *(_QWORD *)&v33.fields.fakeValue = v23;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v25, 0LL);
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
  sub_1BCA784(&v4->fields._FriendshipUpValTuple_k__BackingField, FriendshipUpValTuple_k__BackingField);
  isMyServantOrNpcRestriction = v4->fields.isMyServantOrNpcRestriction;
  v4->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v4->fields.isFollower )
  {
    v4->fields.followerInfo = 0LL;
    v4->fields.isFollower = 0;
    sub_1BCA784(&v4->fields.followerInfo, 0LL);
  }
  equipIdList = v4->fields.equipIdList;
  *(_WORD *)&v4->fields._IsClearedWave_k__BackingField = 0;
  v4->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(v4, equipIdList, v29);
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
    sub_1BCAA44(this, userSvtId);
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

  if ( (byte_4B11F80 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, item, method);
    byte_4B11F80 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1BCAA3C(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1BCA784(&this->fields.userServantEntity, userServantEntity);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1BCA784(&this->fields.followerInfo, followerInfo);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BCA784(&this->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1BCA784(&this->fields.servantEntity, servantEntity);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1BCA784(&this->fields.commandCodeIdList, commandCodeIdList);
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
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, FriendshipUpValTuple_k__BackingField);
  *(_QWORD *)&this->fields._InitPos_k__BackingField = *(_QWORD *)&item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_1BCA784(&this->fields._WaveEnemyClassIds_k__BackingField, WaveEnemyClassIds_k__BackingField);
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
  v19 = (struct System_Int32_array *)sub_1BCA91C(v17, int___TypeInfo);
  if ( v19 )
  {
    this->fields.equipSvtIdList = v19;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v21 = sub_1BCA91C(v18, int___TypeInfo);
    if ( v21 )
    {
      v22 = v21;
LABEL_10:
      sub_1BCA784(p_equipSvtIdList, v22);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v23);
      return;
    }
  }
  else
  {
    sub_1BCACFC(v18);
  }
  v24 = (PartyOrganizationListViewItem_o *)sub_1BCACFC(v18);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v24, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__SetCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v14; // x8
  int32_t questId; // w20
  struct QuestRestrictionInfo_o *v16; // x8
  EventBuddyPointEntity_o *EntityIncludeQuestUnspecified; // x0
  EventBuddyPointEntity_o *v18; // x21
  int32_t PosPoint; // w0
  __int64 v20; // x1
  _BOOL4 HasFlag; // w21
  __int64 v22; // x1
  Il2CppObject *Master_object; // x22

  v4 = this;
  if ( (byte_4B11F7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    this = (PartyOrganizationListViewItem_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    byte_4B11F7F = 1;
  }
  if ( !v4->fields.isFollower )
  {
    this = (PartyOrganizationListViewItem_o *)v4->fields.questRestrictionInfo;
    if ( this )
    {
      this = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_30;
    }
  }
  if ( v4->fields.index >= 1 )
  {
    questRestrictionInfo = v4->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantSingle )
        goto LABEL_30;
    }
  }
  if ( v4->fields.isServantNumRestriction || v4->fields.isFixMultipleNpcRestriction || v4->fields.isFixMultipleNpc )
    goto LABEL_30;
  v14 = v4->fields.questRestrictionInfo;
  if ( !v14 )
    goto LABEL_31;
  questId = v14->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v16 = v4->fields.questRestrictionInfo;
  if ( !v16 || !this )
    goto LABEL_31;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v16->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_30;
  v18 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0LL);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v18, 0LL) )
    goto LABEL_30;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_31;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_31;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_31:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  if ( UserQuestMaster__getClearCountsFromId((UserQuestMaster_o *)Master_object, (int64_t)this, questId, 0LL) < 1
    || !HasFlag )
  {
    v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 1;
    return;
  }
LABEL_30:
  v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 0;
}


void __fastcall PartyOrganizationListViewItem__SetEquipStatus(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *equipIdList,
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
  FollowerInfo_o *p_equipUserServantEntity; // x23
  struct ServantEntity_o **p_equipServantEntity; // x22
  struct EventUpValInfo_o **p_eventUpValInfo; // x21
  System_Collections_Generic_IEnumerable_T__o **p_eventUpValItemList; // x29
  __int64 Instance; // x0
  MethodInfo *v78; // x1
  _BOOL4 isFollower; // w8
  struct QuestRestrictionInfo_o *v80; // x8
  Il2CppObject *v81; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v83; // x8
  Il2CppObject *v84; // x0
  struct System_Int64_array *v85; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v87; // x8
  int32_t followerIndex; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v89; // x23
  int32_t v90; // w2
  struct System_Int64_array **p_equipIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v92; // x1
  Il2CppObject *v93; // x0
  struct EventUpValSetupInfo_o *v94; // x22
  struct System_Int32_array *v95; // x8
  FollowerInfo_o *v96; // x24
  struct QuestRestrictionInfo_o *v97; // x8
  int32_t v98; // w23
  int32_t v99; // w4
  BalanceConfig_c *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  System_Collections_Generic_List_object__o *v104; // x21
  __int64 v105; // x2
  __int64 v106; // x3
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x22
  PartyOrganizationListViewItem___c_c *v109; // x0
  System_Func_object__int__o *_9__128_0; // x23
  Il2CppObject *v111; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v112; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x8
  __int64 v118; // x22
  unsigned __int64 v119; // x20
  ServantEntity_o *v120; // x24
  int32_t v121; // w25
  EventPersonalMargeUpValInfo_o *v122; // x23
  __int64 v123; // x8
  __int64 v124; // x23
  unsigned __int64 v125; // x24
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  System_Collections_Generic_List_object__o *v130; // x0
  struct System_Int64_array *v131; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v135; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v136; // x23
  Il2CppClass *v137; // x24
  Il2CppClass *v138; // x25
  Il2CppObject *v139; // x0
  struct System_Int32_array *equipSvtIdList; // x8
  __int64 v141; // x1
  Il2CppObject *Master_object; // x24
  struct System_Int32_array *v143; // x8
  __int64 v144; // x2
  __int64 v145; // x3
  UserServantCollectionEntity_o *v146; // x24
  UserServantEntity_o *v147; // x25
  struct System_Int32_array *v148; // x8
  Il2CppObject *v149; // x0
  struct System_Int64_array *v150; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_40938664; // w0
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_object__o *v161; // x23
  __int64 v162; // x2
  __int64 v163; // x3
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v165; // x0
  System_Func_object__int__o *_9__128_1; // x25
  Il2CppObject *v167; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v169; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v170; // x0
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x8
  __int64 v174; // x24
  unsigned __int64 v175; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v177; // w27
  EventPersonalMargeUpValInfo_o *v178; // x25
  __int64 v179; // x8
  __int64 v180; // x25
  unsigned __int64 v181; // x26
  struct System_Object_array *items; // x8
  _QWORD *v183; // x9
  __int64 size; // x10
  Il2CppClass **v185; // x0
  System_Object_array *v186; // x0
  const MethodInfo *v187; // x2
  bool v188; // w1
  PartyOrganizationListViewItem_o *v189; // x0
  Il2CppObject *MasterData_object; // x24
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x3
  System_Collections_Generic_List_object__o *v194; // x23
  struct System_Int32_array *v195; // x28
  __int64 v196; // x8
  unsigned __int64 v197; // x29
  int32_t v198; // w26
  Il2CppObject *v199; // x0
  __int64 v200; // x2
  __int64 v201; // x3
  ServantEntity_o *v202; // x27
  EventPersonalMargeUpValInfo_o *v203; // x25
  __int64 v204; // x8
  __int64 v205; // x25
  unsigned __int64 v206; // x26
  struct System_Object_array *v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  Il2CppClass **v210; // x0
  System_Object_array *v211; // x0
  System_Int32_array *v212; // x23
  __int64 v213; // x1
  __int64 v214; // x2
  __int64 v215; // x3
  EventUpValSetupInfo_o *v216; // x24
  UserServantEntity_o *v217; // x22
  EventUpValSetupInfo_o *v218; // x23
  struct QuestRestrictionInfo_o *v219; // x8
  _BOOL8 v220; // x0
  __int64 v221; // x1
  System_Collections_Generic_List_object__o *v222; // x0
  Il2CppObject *current; // x1
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  Il2CppClass **v227; // x8
  __int64 v228; // x1
  __int64 v229; // x2
  __int64 v230; // x3
  UserServantEntity_o *v231; // x23
  EventUpValSetupInfo_o *v232; // x22
  struct QuestRestrictionInfo_o *v233; // x8
  ServantEntity_o *v234; // x22
  EventPersonalMargeUpValInfo_o *v235; // x21
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x3
  System_Collections_Generic_List_object__o *v239; // x19
  System_Collections_Generic_IEnumerable_T__o *v240; // x0
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  System_Collections_Generic_List_Enumerator_object__o v242; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v243; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v246; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v247; // 0:x0.16

  if ( (byte_4B11F7E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, equipIdList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v23, v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v31, v32);
    sub_1BCA7E0(&EventPersonalMargeUpValInfo_TypeInfo, v33, v34);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Func_EventDropUpValInfo__int__TypeInfo, v37, v38);
    sub_1BCA7E0(&int___TypeInfo, v39, v40);
    sub_1BCA7E0(&long___TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v53, v54);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v55, v56);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v57, v58);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59, v60);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v61, v62);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v63, v64);
    sub_1BCA7E0(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__, v65, v66);
    sub_1BCA7E0(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__, v67, v68);
    sub_1BCA7E0(&PartyOrganizationListViewItem___c_TypeInfo, v69, v70);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v71, v72);
    byte_4B11F7E = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  eventUpVallInfo = 0LL;
  entity = 0LL;
  memset(&v243, 0, sizeof(v243));
  this->fields.equipUserServantEntity = 0LL;
  sub_1BCA784(&this->fields.equipUserServantEntity, 0LL);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1BCA784(&this->fields.equipServantEntity, 0LL);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1BCA784(&this->fields.eventUpValInfo, 0LL);
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  Instance = sub_1BCA784(&this->fields.eventUpValItemList, 0LL);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v92 = 0LL;
LABEL_190:
      sub_1BCA784(p_equipIdList, v92);
      return;
    }
    if ( equipIdList )
    {
      v83 = this->fields.equipIdList;
      if ( v83 == equipIdList )
        goto LABEL_62;
      v84 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
      if ( v84 )
      {
        v81 = v84;
        v85 = (struct System_Int64_array *)sub_1BCA91C(v84, long___TypeInfo);
        if ( !v85 )
        {
          sub_1BCACFC(v81);
          goto LABEL_13;
        }
      }
      else
      {
        v85 = 0LL;
      }
    }
    else
    {
      v100 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v78);
        v100 = BalanceConfig_TypeInfo;
      }
      v85 = (struct System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v100->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v85;
    Instance = sub_1BCA784(&this->fields.equipIdList, v85);
    v83 = this->fields.equipIdList;
LABEL_62:
    if ( !v83 )
      goto LABEL_193;
    if ( !v83->max_length )
      goto LABEL_175;
    if ( v83->m_Items[0] >= 1 )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_193;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v131 = this->fields.equipIdList;
      if ( !v131 )
        goto LABEL_193;
      if ( !v131->max_length )
        goto LABEL_175;
      if ( !Instance )
        goto LABEL_193;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.equipUserServantEntity,
                   v131->m_Items[0],
                   (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_193;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v78);
        *(_QWORD *)&v246.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v246.fields.fakeValue = parent;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v246, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
          v135 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_193;
          v136 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v138 = v135->_1.declaringType;
          v137 = v135->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v78);
          *(_QWORD *)&v247.fields.currentCryptoKey = v138;
          *(_QWORD *)&v247.fields.fakeValue = v137;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v247, 0LL);
          if ( !v136 )
            goto LABEL_193;
          v139 = DataMasterBase_object__object__int___GetEntity(
                   v136,
                   Instance,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          *p_equipServantEntity = (struct ServantEntity_o *)v139;
          Instance = sub_1BCA784(&this->fields.equipServantEntity, v139);
        }
      }
      else
      {
        equipSvtIdList = this->fields.equipSvtIdList;
        if ( !equipSvtIdList )
          goto LABEL_96;
        if ( !equipSvtIdList->max_length )
          goto LABEL_175;
        if ( equipSvtIdList->m_Items[1] < 1 )
          goto LABEL_96;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v78);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v141);
        Instance = NetworkManager__get_UserId(0LL);
        v143 = this->fields.equipSvtIdList;
        if ( !v143 )
          goto LABEL_193;
        if ( !v143->max_length )
          goto LABEL_175;
        if ( !Master_object )
          goto LABEL_193;
        Instance = UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &entity,
                     Instance,
                     v143->m_Items[1],
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v146 = entity;
          v147 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v78, v144, v145);
          UserServantEntity___ctor_40924048(v147, v146, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v147;
          sub_1BCA784(&this->fields.equipUserServantEntity, v147);
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
          v148 = this->fields.equipSvtIdList;
          if ( !v148 )
            goto LABEL_193;
          if ( !v148->max_length )
            goto LABEL_175;
          if ( !Instance )
            goto LABEL_193;
          v149 = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v148->m_Items[1],
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.equipServantEntity = (struct ServantEntity_o *)v149;
          Instance = sub_1BCA784(&this->fields.equipServantEntity, v149);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_96:
          v150 = this->fields.equipIdList;
          if ( !v150 )
            goto LABEL_193;
          if ( !v150->max_length )
            goto LABEL_175;
          v150->m_Items[0] = 0LL;
        }
      }
    }
    p_setupInfo = &this->fields.setupInfo;
    setupInfo = this->fields.setupInfo;
    if ( !setupInfo )
      goto LABEL_158;
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_193;
    if ( !*(_QWORD *)&eventIdList->max_length )
      goto LABEL_158;
    userServantEntity = this->fields.userServantEntity;
    EquipList = PartyOrganizationListViewItem__GetEquipList(this, v78);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !userServantEntity )
      goto LABEL_193;
    EventUpVal_40938664 = UserServantEntity__getEventUpVal_40938664(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            EquipList,
                            *(_QWORD *)(Instance + 104),
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_40938664;
    if ( questRestrictionInfo )
    {
      v161 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                            v157,
                                                            v158,
                                                            v159);
      System_Collections_Generic_List_object____ctor(
        v161,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_193;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v165 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v78);
        v165 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__128_1 = (System_Func_object__int__o *)v165->static_fields->__9__128_1;
      if ( !_9__128_1 )
      {
        if ( !v165->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v165, v78);
          v165 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v167 = (Il2CppObject *)v165->static_fields->__9;
        _9__128_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                    System_Func_EventDropUpValInfo__int__TypeInfo,
                                                    v78,
                                                    v162,
                                                    v163);
        System_Func_object__int____ctor(
          _9__128_1,
          v167,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__128_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_1;
        sub_1BCA784(&static_fields->__9__128_1, _9__128_1);
      }
      v169 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__128_1,
                                                                    (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v170 = System_Linq_Enumerable__Distinct_int_(
               v169,
               (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                            v170,
                            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_193;
      v173 = *(_QWORD *)(Instance + 24);
      v174 = Instance;
      if ( (int)v173 >= 1 )
      {
        v175 = 0LL;
        while ( 1 )
        {
          if ( v175 >= (unsigned int)v173 )
            goto LABEL_175;
          servantEntity = this->fields.servantEntity;
          v177 = *(_DWORD *)(v174 + 4 * v175 + 32);
          v178 = (EventPersonalMargeUpValInfo_o *)sub_1BCAA2C(EventPersonalMargeUpValInfo_TypeInfo, v78, v171, v172);
          EventPersonalMargeUpValInfo___ctor(v178, v177, servantEntity, 0LL);
          Instance = (__int64)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_193;
          Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v178 )
            goto LABEL_193;
          EventPersonalMargeUpValInfo__Add(v178, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = EventPersonalMargeUpValInfo__IsEmpty(v178, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v178, 0LL);
            if ( !Instance )
              goto LABEL_193;
            v179 = *(_QWORD *)(Instance + 24);
            v180 = Instance;
            if ( (int)v179 >= 1 )
              break;
          }
LABEL_129:
          LODWORD(v173) = *(_DWORD *)(v174 + 24);
          if ( (__int64)++v175 >= (int)v173 )
            goto LABEL_130;
        }
        v181 = 0LL;
        while ( v181 < (unsigned int)v179 )
        {
          if ( !v161 )
            goto LABEL_193;
          v78 = *(MethodInfo **)(v180 + 32 + 8 * v181);
          items = v161->fields._items;
          v183 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v161->fields._version;
          if ( !items )
            goto LABEL_193;
          size = v161->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v161,
              (Il2CppObject *)v78,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
          }
          else
          {
            v185 = &items->obj.klass + size;
            v161->fields._size = size + 1;
            v185[4] = (Il2CppClass *)v78;
            Instance = sub_1BCA784(v185 + 4, v78);
          }
          LODWORD(v179) = *(_DWORD *)(v180 + 24);
          if ( (__int64)++v181 >= (int)v179 )
            goto LABEL_129;
        }
        goto LABEL_175;
      }
LABEL_130:
      if ( !v161 )
        goto LABEL_193;
      v186 = System_Collections_Generic_List_object___ToArray(
               v161,
               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v186;
      sub_1BCA784(&this->fields.eventUpValItemList, v186);
      v188 = 1;
      v189 = this;
      goto LABEL_157;
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v194 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                          v191,
                                                          v192,
                                                          v193);
    System_Collections_Generic_List_object____ctor(
      v194,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_193;
    v195 = (*p_setupInfo)->fields.eventIdList;
    if ( !v195 )
      goto LABEL_193;
    v196 = *(_QWORD *)&v195->max_length;
    if ( (int)v196 < 1 )
    {
LABEL_155:
      if ( !v194 )
        goto LABEL_193;
      v211 = System_Collections_Generic_List_object___ToArray(
               v194,
               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v211;
      sub_1BCA784(&this->fields.eventUpValItemList, v211);
      v189 = this;
      v188 = 0;
LABEL_157:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v189, v188, v187);
      p_setupInfo = &this->fields.setupInfo;
LABEL_158:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v212 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
        v216 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v213, v214, v215);
        EventUpValSetupInfo___ctor_39629568(v216, v212, 0, 0, 0, 0LL);
        *p_setupInfo = v216;
        sub_1BCA784(p_setupInfo, v216);
      }
      if ( this->fields.isEventUpVal )
      {
        v217 = this->fields.userServantEntity;
        v218 = this->fields.setupInfo;
        Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(this, v78);
        v219 = this->fields.questRestrictionInfo;
        if ( !v219 )
          goto LABEL_193;
        if ( !v217 )
          goto LABEL_193;
        Instance = UserServantEntity__GetBonusUpVal(
                     v217,
                     &eventUpVallInfo,
                     v218,
                     (System_Int64_array *)Instance,
                     v219->fields.questId,
                     v219->fields.questPhase,
                     0LL);
        if ( !eventUpVallInfo )
          goto LABEL_193;
        Instance = (__int64)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_193;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v242,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v243 = v242;
        while ( 1 )
        {
          v220 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v243,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v220 )
            break;
          if ( !*p_eventUpValInfo )
            sub_1BCAA3C(v220, v221);
          v222 = (System_Collections_Generic_List_object__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v222 )
            sub_1BCAA3C(0LL, v221);
          current = v243.fields._current;
          v224 = v222->fields._items;
          v225 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v222->fields._version;
          if ( !v224 )
            sub_1BCAA3C(v222, current);
          v226 = v222->fields._size;
          if ( (unsigned int)v226 >= v224->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v222,
              current,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
          }
          else
          {
            v227 = &v224->obj.klass + v226;
            v222->fields._size = v226 + 1;
            v227[4] = (Il2CppClass *)current;
            sub_1BCA784(v227 + 4, current);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v243,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v231 = this->fields.userServantEntity;
        v232 = this->fields.setupInfo;
        Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(this, v78);
        v233 = this->fields.questRestrictionInfo;
        if ( !v233 || !v231 )
          goto LABEL_193;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v231,
                                      &this->fields.eventUpValInfo,
                                      v232,
                                      (System_Int64_array *)Instance,
                                      v233->fields.questId,
                                      v233->fields.questPhase,
                                      0LL);
      }
      v234 = this->fields.servantEntity;
      v235 = (EventPersonalMargeUpValInfo_o *)sub_1BCAA2C(EventPersonalMargeUpValInfo_TypeInfo, v228, v229, v230);
      EventPersonalMargeUpValInfo___ctor(v235, 0, v234, 0LL);
      Instance = (__int64)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v235 )
        {
          EventPersonalMargeUpValInfo__Add(v235, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v235, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v235, 0LL);
            goto LABEL_189;
          }
          v239 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                v236,
                                                                v237,
                                                                v238);
          System_Collections_Generic_List_object____ctor(
            v239,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v239 )
            goto LABEL_193;
          System_Collections_Generic_List_object___AddRange(
            v239,
            *p_eventUpValItemList,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v240 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v235, 0LL);
          System_Collections_Generic_List_object___AddRange(
            v239,
            v240,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v130 = v239;
LABEL_188:
          List = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                  v130,
                                                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_189:
          v92 = List;
          *p_eventUpValItemList = List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_190;
        }
      }
LABEL_193:
      sub_1BCAA3C(Instance, v78);
    }
    v197 = 0LL;
    while ( 1 )
    {
      if ( v197 >= (unsigned int)v196 )
        goto LABEL_175;
      if ( !MasterData_object )
        goto LABEL_193;
      v198 = v195->m_Items[v197 + 1];
      v199 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v198,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v199
        || (Instance = EventDetailEntity__HasFlag((EventDetailEntity_o *)v199, 0x800000000LL, 0LL), (Instance & 1) == 0) )
      {
        v202 = this->fields.servantEntity;
        v203 = (EventPersonalMargeUpValInfo_o *)sub_1BCAA2C(EventPersonalMargeUpValInfo_TypeInfo, v78, v200, v201);
        EventPersonalMargeUpValInfo___ctor(v203, v198, v202, 0LL);
        Instance = (__int64)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_193;
        Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v203 )
          goto LABEL_193;
        EventPersonalMargeUpValInfo__Add(v203, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = EventPersonalMargeUpValInfo__IsEmpty(v203, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v203, 0LL);
          if ( !Instance )
            goto LABEL_193;
          v204 = *(_QWORD *)(Instance + 24);
          v205 = Instance;
          if ( (int)v204 >= 1 )
            break;
        }
      }
LABEL_154:
      LODWORD(v196) = v195->max_length;
      if ( (__int64)++v197 >= (int)v196 )
        goto LABEL_155;
    }
    v206 = 0LL;
    while ( v206 < (unsigned int)v204 )
    {
      if ( !v194 )
        goto LABEL_193;
      v78 = *(MethodInfo **)(v205 + 32 + 8 * v206);
      v207 = v194->fields._items;
      v208 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v194->fields._version;
      if ( !v207 )
        goto LABEL_193;
      v209 = v194->fields._size;
      if ( (unsigned int)v209 >= v207->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v194,
          (Il2CppObject *)v78,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
      }
      else
      {
        v210 = &v207->obj.klass + v209;
        v194->fields._size = v209 + 1;
        v210[4] = (Il2CppClass *)v78;
        Instance = sub_1BCA784(v210 + 4, v78);
      }
      LODWORD(v204) = *(_DWORD *)(v205 + 24);
      if ( (__int64)++v206 >= (int)v204 )
        goto LABEL_154;
    }
LABEL_175:
    sub_1BCAA44(Instance, v78);
  }
  this->fields.equipIdList = 0LL;
  sub_1BCA784(&this->fields.equipIdList, 0LL);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v80 = this->fields.questRestrictionInfo;
  LODWORD(v81) = this->fields.followerIndex;
  if ( v80 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v80->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v81, ReturnTypeByQuestId, 0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v87 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v89 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v87 )
    {
      Instance = FollowerInfo__GetReturnTypeByQuestId(v87->fields.questId, 0LL);
      v90 = Instance;
      if ( !followerInfo )
        goto LABEL_193;
    }
    else
    {
      v90 = 0;
      if ( !followerInfo )
        goto LABEL_193;
    }
    Instance = FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v90, 0LL);
    if ( !v89 )
      goto LABEL_193;
    v93 = DataMasterBase_object__object__int___GetEntity(
            v89,
            Instance,
            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    *p_equipServantEntity = (struct ServantEntity_o *)v93;
    Instance = sub_1BCA784(&this->fields.equipServantEntity, v93);
  }
  v94 = this->fields.setupInfo;
  if ( v94 )
  {
    v95 = v94->fields.eventIdList;
    if ( !v95 )
      goto LABEL_193;
    if ( *(_QWORD *)&v95->max_length )
    {
      v96 = this->fields.followerInfo;
      v97 = this->fields.questRestrictionInfo;
      v98 = this->fields.followerIndex;
      if ( v97 )
      {
        Instance = FollowerInfo__GetReturnTypeByQuestId(v97->fields.questId, 0LL);
        v99 = Instance;
        if ( !v96 )
          goto LABEL_193;
      }
      else
      {
        v99 = 0;
        if ( !v96 )
          goto LABEL_193;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_39638752(
                                    v96,
                                    &this->fields.eventUpValInfo,
                                    v94,
                                    v98,
                                    v99,
                                    0LL);
      v104 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                            v101,
                                                            v102,
                                                            v103);
      System_Collections_Generic_List_object____ctor(
        v104,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v108 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v109 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo, v78);
          v109 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__128_0 = (System_Func_object__int__o *)v109->static_fields->__9__128_0;
        if ( !_9__128_0 )
        {
          if ( !v109->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v109, v78);
            v109 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v111 = (Il2CppObject *)v109->static_fields->__9;
          _9__128_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                      System_Func_EventDropUpValInfo__int__TypeInfo,
                                                      v78,
                                                      v105,
                                                      v106);
          System_Func_object__int____ctor(
            _9__128_0,
            v111,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__,
            0LL);
          v112 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v112->__9__128_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_0;
          sub_1BCA784(&v112->__9__128_0, _9__128_0);
        }
        v113 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v108,
                                                                      (System_Func_TSource__TResult__o *)_9__128_0,
                                                                      (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v114 = System_Linq_Enumerable__Distinct_int_(
                 v113,
                 (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                              v114,
                              (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v117 = *(_QWORD *)(Instance + 24);
          v118 = Instance;
          if ( (int)v117 >= 1 )
          {
            v119 = 0LL;
            while ( 1 )
            {
              if ( v119 >= (unsigned int)v117 )
                goto LABEL_175;
              v120 = this->fields.servantEntity;
              v121 = *(_DWORD *)(v118 + 4 * v119 + 32);
              v122 = (EventPersonalMargeUpValInfo_o *)sub_1BCAA2C(EventPersonalMargeUpValInfo_TypeInfo, v78, v115, v116);
              EventPersonalMargeUpValInfo___ctor(v122, v121, v120, 0LL);
              Instance = (__int64)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_193;
              Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v122 )
                goto LABEL_193;
              EventPersonalMargeUpValInfo__Add(v122, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = EventPersonalMargeUpValInfo__IsEmpty(v122, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v122, 0LL);
                if ( !Instance )
                  goto LABEL_193;
                v123 = *(_QWORD *)(Instance + 24);
                v124 = Instance;
                if ( (int)v123 >= 1 )
                  break;
              }
LABEL_57:
              LODWORD(v117) = *(_DWORD *)(v118 + 24);
              if ( (__int64)++v119 >= (int)v117 )
                goto LABEL_58;
            }
            v125 = 0LL;
            while ( v125 < (unsigned int)v123 )
            {
              if ( !v104 )
                goto LABEL_193;
              v78 = *(MethodInfo **)(v124 + 32 + 8 * v125);
              v126 = v104->fields._items;
              v127 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v104->fields._version;
              if ( !v126 )
                goto LABEL_193;
              v128 = v104->fields._size;
              if ( (unsigned int)v128 >= v126->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v104,
                  (Il2CppObject *)v78,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
              }
              else
              {
                v129 = &v126->obj.klass + v128;
                v104->fields._size = v128 + 1;
                v129[4] = (Il2CppClass *)v78;
                Instance = sub_1BCA784(v129 + 4, v78);
              }
              LODWORD(v123) = *(_DWORD *)(v124 + 24);
              if ( (__int64)++v125 >= (int)v123 )
                goto LABEL_57;
            }
            goto LABEL_175;
          }
LABEL_58:
          if ( !v104 )
            goto LABEL_193;
          v130 = v104;
          goto LABEL_188;
        }
      }
      goto LABEL_193;
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
      sub_1BCAA44(this, userSvtId);
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1BCA784(&this->fields.equipSvtIdList, 0LL);
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
  sub_1BCA784(&this->fields._WaveEnemyClassIds_k__BackingField, classIds);
}


void __fastcall PartyOrganizationListViewItem__Set_32615264(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o *v20; // x8
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B11F81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, item, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B11F81 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_12;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(&this->fields.userServantEntity, userServantEntity);
  this->fields.followerInfo = 0LL;
  sub_1BCA784(&this->fields.followerInfo, 0LL);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_12;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  if ( !v16 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             (int32_t)Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  Instance = (Il2CppObject *)sub_1BCA784(&this->fields.servantEntity, Entity);
  v20 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&item->fields.classId;
  this->fields.frameType = item->fields.frameType;
  if ( !v20
    || (Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                     v20->fields.limitCount,
                                     0LL),
        v21 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v21) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v21, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1BCA784(&this->fields.commandCodeIdList, CommandCodeIdList);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v26);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B11F84 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, item, notChangeInitPos);
    byte_4B11F84 = 1;
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
    sub_1BCAA3C(p_userServantEntity, item);
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
  sub_1BCA784(p_userServantEntity, v14);
  v15 = item->fields.followerInfo;
  this->fields.followerInfo = v15;
  sub_1BCA784(&this->fields.followerInfo, v15);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  v16 = item->fields.servantEntity;
  this->fields.servantEntity = v16;
  sub_1BCA784(&this->fields.servantEntity, v16);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  v17 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v17;
  sub_1BCA784(&this->fields.commandCodeIdList, v17);
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
  v22 = sub_1BCA91C(v20, int___TypeInfo);
  if ( !v22
    || (*p_equipSvtIdList = (struct System_Int32_array *)v22,
        equipSvtIdList = v32,
        (v23 = sub_1BCA91C(v21, int___TypeInfo)) == 0) )
  {
    sub_1BCACFC(v21);
LABEL_9:
    v23 = 0LL;
    *p_equipSvtIdList = 0LL;
  }
  sub_1BCA784(&this->fields.equipSvtIdList, v23);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v24);
  v25 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v25;
  sub_1BCA784(&this->fields.friendPointCampaignEntityList, v25);
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
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, v26);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_1BCA784(&item->fields.userServantEntity, userServantEntity);
  item->fields.followerInfo = followerInfo;
  sub_1BCA784(&item->fields.followerInfo, followerInfo);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  sub_1BCA784(&item->fields.servantEntity, servantEntity);
  *(_QWORD *)&item->fields.classId = v11;
  *(_QWORD *)&item->fields.frameType = v10;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1BCA784(&item->fields.commandCodeIdList, commandCodeIdList);
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
  v29 = sub_1BCA91C(v27, int___TypeInfo);
  if ( !v29 || (*v19 = (struct System_Int32_array *)v29, (v30 = sub_1BCA91C(v28, int___TypeInfo)) == 0) )
  {
    sub_1BCACFC(v28);
LABEL_17:
    v30 = 0LL;
    *v19 = 0LL;
  }
  sub_1BCA784(&item->fields.equipSvtIdList, v30);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v31);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BCA784(&item->fields.friendPointCampaignEntityList, friendPointCampaignEntityList);
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v13;
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  item->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  item->fields._IsAllOutBattle_k__BackingField = IsAllOutBattle_k__BackingField;
  item->fields._IsDataLost_k__BackingField = IsDataLost_k__BackingField;
  item->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  item->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  sub_1BCA784(&item->fields._FriendshipUpValTuple_k__BackingField, FriendshipUpValTuple_k__BackingField);
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
  if ( (byte_4B11F85 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1BCA7E0(&int___TypeInfo, item, method);
    byte_4B11F85 = 1;
  }
  p_equipSvtIdList = &v4->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)v4->fields.equipSvtIdList;
  if ( !item )
    sub_1BCAA3C(this, item);
  equipIdList = v4->fields.equipIdList;
  v9 = &item->fields.equipSvtIdList;
  v8 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v8 )
    goto LABEL_9;
  v10 = System_Array__Clone(v8, 0LL);
  if ( !v10 )
    goto LABEL_9;
  v11 = v10;
  v12 = sub_1BCA91C(v10, int___TypeInfo);
  if ( !v12 || (*p_equipSvtIdList = v12, (v13 = sub_1BCA91C(v11, int___TypeInfo)) == 0) )
  {
    sub_1BCACFC(v11);
LABEL_9:
    v13 = 0LL;
    *p_equipSvtIdList = 0LL;
  }
  sub_1BCA784(&v4->fields.equipSvtIdList, v13);
  PartyOrganizationListViewItem__SetEquipStatus(v4, item->fields.equipIdList, v14);
  if ( !equipSvtIdList )
    goto LABEL_15;
  v15 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v15 )
    goto LABEL_15;
  v16 = v15;
  v17 = sub_1BCA91C(v15, int___TypeInfo);
  if ( !v17 || (*v9 = (struct System_Int32_array *)v17, (v18 = sub_1BCA91C(v16, int___TypeInfo)) == 0) )
  {
    sub_1BCACFC(v16);
LABEL_15:
    v18 = 0LL;
    *v9 = 0LL;
  }
  sub_1BCA784(&item->fields.equipSvtIdList, v18);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        bool isQuestTarget,
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
  Il2CppObject *Master_object; // x20
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x23
  Il2CppObject *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_T__o *v43; // x20
  _BOOL8 v44; // x0
  __int64 v45; // x1
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v49; // x25
  __int64 v50; // x26
  int32_t v51; // w1
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  struct UserServantEntity_o *v54; // x8
  UserServantMaster_o *v55; // x24
  __int64 v56; // x25
  __int64 v57; // x26
  __int64 v58; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v60; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w25
  int32_t questPhase; // w26
  int32_t eventId; // w24
  Il2CppObject *v65; // x0
  __int64 v66; // x1
  int32_t v67; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v70; // w2
  const MethodInfo_38FB32C *v71; // x5
  __int64 v72; // x0
  __int64 v73; // x1
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v77; // x0
  System_Collections_Generic_List_Enumerator_object__o item; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v80; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v81; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4B11F9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, isQuestTarget, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventQuestMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21, v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v23,
      v24);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__,
      v25,
      v26);
    sub_1BCA7E0(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v33, v34);
    byte_4B11F9F = 1;
  }
  memset(&v79, 0, sizeof(v79));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isQuestTarget);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_47;
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[6].monitor,
                                                                         0LL);
  v39 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventQuestMaster___);
  v43 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo,
                                                  v40,
                                                  v41,
                                                  v42);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v43,
    (const MethodInfo_355320C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&item,
      FriendshipUpCampaigns,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v79 = item;
    while ( 1 )
    {
      v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v79,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v44 )
        break;
      current = (EventCampaignEntity_o *)v79.fields._current;
      if ( !v79.fields._current )
        sub_1BCAA3C(v44, v45);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v79.fields._current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1BCAA3C(v44, v45);
        v50 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
        *(_QWORD *)&v82.fields.currentCryptoKey = v50;
        *(_QWORD *)&v82.fields.fakeValue = v49;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v82, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v51,
                (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
      v52 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
      v54 = this->fields.userServantEntity;
      if ( !v54 )
        sub_1BCAA3C(v52, v53);
      v55 = (UserServantMaster_o *)v52;
      v57 = *(_QWORD *)&v54->fields.svtId.fields.currentCryptoKey;
      v56 = *(_QWORD *)&v54->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
      *(_QWORD *)&v83.fields.currentCryptoKey = v57;
      *(_QWORD *)&v83.fields.fakeValue = v56;
      v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
      if ( !v55 )
        sub_1BCAA3C(v58, (unsigned int)v58);
      HeroineData = UserServantMaster__getHeroineData(v55, v58, 0LL);
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
        sub_1BCAA3C(HeroineData, v60);
      questId = questRestrictionInfo->fields.questId;
      questPhase = questRestrictionInfo->fields.questPhase;
      eventId = current->fields.eventId;
      v65 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v65 )
        sub_1BCAA3C(0LL, v66);
      if ( !v39 )
        sub_1BCAA3C(v65, v66);
      if ( !EventQuestMaster__IsEventNotIncluded(
              (EventQuestMaster_o *)v39,
              eventId,
              questId,
              questPhase,
              7,
              (int64_t)v65[6].monitor,
              0LL) )
      {
LABEL_30:
        v67 = current->fields.eventId;
        FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
        calcType = current->fields.calcType;
        v70 = FriendshipBonusValue;
        item.fields._index = 0;
        item.fields._list = 0LL;
        *(_QWORD *)&v80.fields.Item1 = &item;
        v80.fields.Item3 = v67;
        System_ValueTuple_int__int__Int32Enum____ctor(
          v80,
          v70,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v71);
        if ( !v43 )
          sub_1BCAA3C(v72, v73);
        *(_QWORD *)&v81.fields.Item1 = item.fields._list;
        v81.fields.Item3 = item.fields._index;
        items = v43->fields._items;
        v75 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
        ++v43->fields._version;
        if ( !items )
          sub_1BCAA3C(v72, *(_QWORD *)&v81.fields.Item1);
        size = v43->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
            v43,
            v81,
            *(const MethodInfo_3553A98 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v43->fields._size = size + 1;
          *((System_ValueTuple_int__int__Int32Enum__o *)items->m_Items + size) = v81;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v79,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v43 )
LABEL_47:
    sub_1BCAA3C(Instance, v37);
  v77 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                   v43,
                                                                                   (const MethodInfo_355565C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v77;
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, v77);
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
  struct UserServantEntity_o **p_equipUserServantEntity; // x20
  Il2CppObject *Master_object; // x21
  __int64 Instance; // x0
  __int64 v21; // x1
  struct UserServantEntity_o *v22; // x8
  __int128 v23; // q1
  System_Int64_array *v24; // x22
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  Il2CppObject *Entity; // x0
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v30; // x21
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q1
  System_Int64_array *v33; // x22
  __int64 v34; // x1
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x21
  Il2CppObject *v38; // x0
  struct UserServantEntity_o *v39; // x8
  ServantLimitMaster_o *v40; // x21
  __int64 v41; // x22
  __int64 v42; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v43; // x8
  int32_t v44; // w20
  int32_t v45; // w8
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v47; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B11FA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8, v9);
    sub_1BCA7E0(&long___TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B11FA0 = 1;
  }
  if ( this->fields.equipUserServantEntity && !this->fields._IsDisappearEquip_k__BackingField )
  {
    p_equipUserServantEntity = &this->fields.equipUserServantEntity;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1BCA888(long___TypeInfo, 1LL);
    v22 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_54;
    v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
    v24 = (System_Int64_array *)Instance;
    *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v53.fields.fakeValue = v23;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    v52 = v53;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v52, 0LL);
    if ( !v24 )
      goto LABEL_54;
    if ( !v24->max_length )
LABEL_55:
      sub_1BCAA44(Instance, v21);
    v24->m_Items[0] = Instance;
    if ( !Master_object )
      goto LABEL_54;
    if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)Master_object, v24, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
      v25 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_54;
      v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
      v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v53.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
      v51 = v53;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v51, 0LL);
      if ( !v27 )
        goto LABEL_54;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 v27,
                 Instance,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      *p_equipUserServantEntity = (struct UserServantEntity_o *)Entity;
      sub_1BCA784(&this->fields.equipUserServantEntity, Entity);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v30 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1BCA888(long___TypeInfo, 1LL);
    v31 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_54;
    v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
    v33 = (System_Int64_array *)Instance;
    *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v53.fields.fakeValue = v32;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    v50 = v53;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v50, 0LL);
    if ( !v33 )
      goto LABEL_54;
    if ( v33->max_length )
    {
      v33->m_Items[0] = Instance;
      if ( v30 )
      {
        if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v30, v33, 0LL) )
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
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
          v35 = *p_userServantEntity;
          if ( *p_userServantEntity )
          {
            v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
            v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v53.fields.fakeValue = v36;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
            v49 = v53;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v49, 0LL);
            if ( v37 )
            {
              v38 = DataMasterBase_object__object__long___GetEntity(
                      v37,
                      Instance,
                      (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              *p_userServantEntity = (struct UserServantEntity_o *)v38;
              sub_1BCA784(&this->fields.userServantEntity, v38);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                v39 = *p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  v40 = (ServantLimitMaster_o *)Instance;
                  v42 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
                  v41 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
                  *(_QWORD *)&v54.fields.currentCryptoKey = v42;
                  *(_QWORD *)&v54.fields.fakeValue = v41;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
                  v43 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userServantEntity;
                  if ( *p_userServantEntity )
                  {
                    v44 = Instance;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v43[6], 0LL);
                    if ( v40 )
                    {
                      Instance = (__int64)ServantLimitMaster__GetEntity(v40, v44, Instance, 0LL);
                      if ( Instance )
                      {
                        v45 = *(_DWORD *)(Instance + 24);
                        Instance = (__int64)this->fields.userServantEntity;
                        this->fields.rarityId = v45;
                        if ( Instance )
                        {
                          Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
                          userServantEntity = this->fields.userServantEntity;
                          this->fields.frameType = Instance;
                          if ( userServantEntity )
                          {
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                         userServantEntity->fields.limitCount,
                                         0LL);
                            v47 = this->fields.userServantEntity;
                            this->fields.svtLimitCount = Instance;
                            if ( v47 )
                            {
                              CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v47, 0LL);
                              this->fields.commandCodeIdList = CommandCodeIdList;
                              sub_1BCA784(&this->fields.commandCodeIdList, CommandCodeIdList);
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
      sub_1BCAA3C(Instance, v21);
    }
    goto LABEL_55;
  }
}


void __fastcall PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *viewObject; // x20
  __int64 methodPtr_low; // x9
  PartyOrganizationListViewItem_o *v8; // x0
  PartyServantListViewItem_o *v9; // x1
  const MethodInfo *v10; // x2

  v3 = item;
  if ( (byte_4B11F9E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    this = (PartyOrganizationListViewItem_o *)sub_1BCA7E0(&PartyOrganizationListViewObject_TypeInfo, v4, v5);
    byte_4B11F9E = 1;
  }
  if ( !v3 )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)v3->fields.viewObject;
  if ( viewObject
    && ((item = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewObject_TypeInfo,
         methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v8 = (PartyOrganizationListViewItem_o *)sub_1BCACFC(v3->fields.viewObject);
    PartyOrganizationListViewItem__Modify_32616228(v8, v9, v10);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( viewObject )
      {
        PartyOrganizationListViewObject__UpdateStartingMemberFriendshipUp(
          (PartyOrganizationListViewObject_o *)viewObject,
          v3,
          0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, item);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t DispImageLimitCount; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w19
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v21; // x0

  if ( (byte_4B11F9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B11F9A = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v13 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v17);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&SvtId.fields.fakeValue);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1BCAA3C(Instance, v15);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v13, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    byte_4B1194D = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
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
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserServantEntity; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B11F8F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B11F8F = 1;
  }
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v6 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v12.fields.currentCryptoKey = v6;
    *(_QWORD *)&v12.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
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
  __int64 v2; // x2
  ServantEntity_o *equipServantEntity; // x0

  if ( (byte_4B11F90 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F90 = 1;
  }
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return ServantEntity__getName(equipServantEntity, -1, -1, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall PartyOrganizationListViewItem__get_EquipSvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0 OVERLAPPED
  __int64 v5; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  struct ServantEntity_o *equipServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4B11F8E & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B11F8E = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  v5 = *(_QWORD *)&v6.fields.fakeValue;
  v4 = *(_QWORD *)&v6.fields.currentCryptoKey;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    v4 = *(_QWORD *)&equipServantEntity->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&equipServantEntity->fields.id.fields.fakeValue;
  }
  *(_QWORD *)&result.fields.fakeValue = v5;
  *(_QWORD *)&result.fields.currentCryptoKey = v4;
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
  __int64 v2; // x2
  struct UserServantEntity_o *equipUserServantEntity; // x8
  __int128 v5; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+40h] [xbp-40h]

  if ( (byte_4B11F8D & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B11F8D = 1;
  }
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v5 = *(_OWORD *)&equipUserServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&equipUserServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v9.fields.fakeValue = v5;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v8, 0LL, 0LL);
    v9 = v8;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t NowPos_k__BackingField; // w19

  if ( (byte_4B11F9D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11F9D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v4 = BalanceConfig_TypeInfo;
  }
  return NowPos_k__BackingField <= v4->static_fields->DeckMainMemberMax;
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
      sub_1BCAA3C(Atk, v11);
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
      sub_1BCAA3C(Hp, v11);
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
  const MethodInfo *v2; // x2

  if ( (byte_4B11F8A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11F8A = 1;
  }
  if ( this->fields.servantEntity )
    return PartyOrganizationListViewItem__GetServantName(this, -1, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall PartyOrganizationListViewItem__get_SvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0 OVERLAPPED
  __int64 v5; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4B11F89 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B11F89 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  v5 = *(_QWORD *)&v6.fields.fakeValue;
  v4 = *(_QWORD *)&v6.fields.currentCryptoKey;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    v4 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  *(_QWORD *)&result.fields.fakeValue = v5;
  *(_QWORD *)&result.fields.currentCryptoKey = v4;
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

  if ( (byte_4B11F8B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, method, v2);
    byte_4B11F8B = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0LL)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1BCAA3C(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19249/*"error"*/;
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
  sub_1BCA784(&this->fields._FriendshipUpValTuple_k__BackingField, value);
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
  sub_1BCA784(&this->fields._WaveEnemyClassIds_k__BackingField, value);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B12059 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewItem___c_TypeInfo, v1, v2);
    byte_4B12059 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PartyOrganizationListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v4;
  sub_1BCA784(PartyOrganizationListViewItem___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1BCAA3C(this, 0LL);
  return drop->fields.eventId;
}