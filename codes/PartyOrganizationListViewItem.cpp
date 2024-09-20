void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
}


void __fastcall PartyOrganizationListViewItem___ctor_32025764(
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  void *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x2
  int v36; // w9

  if ( (byte_4A5709F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5709F = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v17, v18);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v19,
    v20);
  this->fields.followerInfo = followerInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v21, v22);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v23, v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v29, v30);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(Instance, v26);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_39669416(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v31, v32);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v33, v34);
  if ( initPos )
    v36 = initPos;
  else
    v36 = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v36;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v35);
}


void __fastcall PartyOrganizationListViewItem___ctor_32029524(
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
  int32_t v20; // w2
  int32_t v21; // w3
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct FollowerInfo_o **p_followerInfo; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int64_t ReturnTypeByQuestId; // x0
  unsigned __int64 v31; // x1
  FollowerInfo_o *followerInfo; // x24
  int32_t v33; // w2
  int32_t v34; // w0
  int32_t v35; // w2
  int32_t v36; // w3
  FollowerInfo_o *v37; // x24
  struct QuestRestrictionInfo_o *v38; // x8
  int32_t followerIndex; // w27
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x22
  int32_t v41; // w2
  Il2CppObject *v42; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  struct ServantEntity_o *v46; // x8
  ServantLimitMaster_o *v47; // x27
  __int64 v48; // x24
  __int64 v49; // x28
  FollowerInfo_o *v50; // x24
  struct QuestRestrictionInfo_o *v51; // x8
  int32_t v52; // w29
  int32_t v53; // w28
  int32_t v54; // w2
  FollowerInfo_o *v55; // x23
  FollowerInfo_o *v56; // x24
  struct QuestRestrictionInfo_o *v57; // x8
  int32_t v58; // w27
  int32_t v59; // w2
  FollowerInfo_o *v60; // x24
  struct QuestRestrictionInfo_o *v61; // x8
  int32_t v62; // w27
  int32_t v63; // w2
  FollowerInfo_o *v64; // x27
  struct QuestRestrictionInfo_o *v65; // x8
  int32_t v66; // w24
  int32_t v67; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  const MethodInfo *v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  const MethodInfo *v74; // x1
  QuestRestrictionInfo_o *v75; // x27
  __int64 v76; // x24
  __int64 v77; // x28
  int32_t v78; // w23
  const MethodInfo *v79; // x1
  int32_t v80; // w24
  int32_t DispLimitCount; // w24
  const MethodInfo *v82; // x1
  int32_t v83; // w28
  int32_t InitPos_k__BackingField; // w29
  int32_t v85; // w0
  int v86; // w8
  int64_t v87; // x23
  unsigned int v88; // w28
  __int64 v89; // x25
  QuestRestrictionInfo_o *v90; // x24
  __int64 v91; // x26
  __int64 v92; // x27
  int32_t v93; // w26
  int32_t v94; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v96; // x8
  Il2CppObject *Master_object; // x23
  struct ServantEntity_o *v98; // x8
  UserEventDataLostEntity_o *v99; // x23
  __int64 v100; // x24
  __int64 v101; // x25
  struct ServantEntity_o *v102; // x8
  char v103; // w22
  UserEventDataLostEntity_o *v104; // x23
  __int64 v105; // x24
  __int64 v106; // x25
  struct QuestRestrictionInfo_o *v107; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v109; // x23
  const MethodInfo *v110; // x1
  const MethodInfo *v111; // x2
  const MethodInfo *v112; // x1
  int32_t v113; // w21
  __int64 v114; // x24
  __int64 v115; // x25
  int32_t v116; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x2
  QuestRestrictionInfo_o *v120; // x8
  bool IsNotClassBoard; // w20
  int32_t v122; // [xsp+Ch] [xbp-84h]
  _BOOL4 v123; // [xsp+14h] [xbp-7Ch]
  FollowerInfo_o *v124; // [xsp+18h] [xbp-78h]
  QuestPhaseEntity_o *v125; // [xsp+20h] [xbp-70h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  v11 = isFixNpc;
  v19 = isFixNpc;
  if ( (byte_4A5709D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5709D = 1;
  }
  v125 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v20, v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v23,
    v24);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v25,
    v26);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)follower, v28, v29);
  this->fields.isFixNpc = v19;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v33 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_133;
  }
  else
  {
    v33 = 0;
    if ( !followerInfo )
      goto LABEL_133;
  }
  v34 = FollowerInfo__getIndex(followerInfo, followerClassId, v33, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v35, v36);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = this->fields.followerInfo;
  v38 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( v38 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v38->fields.questId, 0LL);
    v41 = ReturnTypeByQuestId;
    if ( !v37 )
      goto LABEL_133;
  }
  else
  {
    v41 = 0;
    if ( !v37 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v37, followerIndex, v41, 0LL);
  if ( !v40 )
    goto LABEL_133;
  v42 = DataMasterBase_object__object__int___GetEntity(
          v40,
          ReturnTypeByQuestId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v42;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v42, v44, v45);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v124 = follower;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v46 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_133;
  v123 = v11;
  v47 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v49 = *(_QWORD *)&v46->fields.id.fields.currentCryptoKey;
  v48 = *(_QWORD *)&v46->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v127.fields.currentCryptoKey = v49;
  *(_QWORD *)&v127.fields.fakeValue = v48;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v127, 0LL);
  v50 = this->fields.followerInfo;
  v51 = this->fields.questRestrictionInfo;
  v52 = this->fields.followerIndex;
  v53 = ReturnTypeByQuestId;
  if ( v51 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v51->fields.questId, 0LL);
    v54 = ReturnTypeByQuestId;
    if ( !v50 )
      goto LABEL_133;
  }
  else
  {
    v54 = 0;
    if ( !v50 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v50, v52, v54, 0LL);
  if ( !v47 )
    goto LABEL_133;
  ReturnTypeByQuestId = (int64_t)ServantLimitMaster__GetEntity(v47, v53, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_133;
  v55 = v124;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v56 = this->fields.followerInfo;
  v57 = this->fields.questRestrictionInfo;
  v58 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v57 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v57->fields.questId, 0LL);
    v59 = ReturnTypeByQuestId;
    if ( !v56 )
      goto LABEL_133;
  }
  else
  {
    v59 = 0;
    if ( !v56 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v56, v58, v59, 0LL);
  v60 = this->fields.followerInfo;
  v61 = this->fields.questRestrictionInfo;
  v62 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v61 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v61->fields.questId, 0LL);
    v63 = ReturnTypeByQuestId;
    if ( !v60 )
      goto LABEL_133;
  }
  else
  {
    v63 = 0;
    if ( !v60 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v60, v62, v63, 0LL);
  v64 = this->fields.followerInfo;
  v65 = this->fields.questRestrictionInfo;
  v66 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
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
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v64, v66, v67, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v69,
    v70);
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v71) )
    goto LABEL_47;
  ReturnTypeByQuestId = (int64_t)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_133;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v75 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v74);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v77 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v76 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v128.fields.currentCryptoKey = v77;
    *(_QWORD *)&v128.fields.fakeValue = v76;
    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v128, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v79);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v80 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v31);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v122 = v80;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v82);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v83 = *(_DWORD *)(ReturnTypeByQuestId + 68);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v85 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)v31);
    this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestriction_40436712(
                                        v75,
                                        &this->fields.isQuestRestrictionWhole,
                                        v78,
                                        v122,
                                        DispLimitCount,
                                        v83,
                                        InitPos_k__BackingField,
                                        v85,
                                        0LL);
    v55 = v124;
  }
  else
  {
LABEL_47:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v31 = (unsigned int)initPos;
  else
    v31 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v31;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, v31, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !v55 )
      goto LABEL_133;
    this->fields.npcFollowerSvtId = v55->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (int64_t)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v86 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v87 = ReturnTypeByQuestId;
    if ( v86 >= 1 )
    {
      v88 = 0;
      while ( 1 )
      {
        if ( v88 >= v86 )
          sub_1B88814(ReturnTypeByQuestId, v31);
        v89 = *(_QWORD *)(v87 + 8LL * (int)v88 + 32);
        if ( !v89 )
          goto LABEL_133;
        v90 = *p_questRestrictionInfo;
        v92 = *(_QWORD *)(v89 + 80);
        v91 = *(_QWORD *)(v89 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v129.fields.currentCryptoKey = v92;
        *(_QWORD *)&v129.fields.fakeValue = v91;
        v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v129, 0LL);
        v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v89 + 96),
                0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v89, 0, 0LL);
        if ( !v90 )
          goto LABEL_133;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v90,
                                v93,
                                v94,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v86 = *(_DWORD *)(v87 + 24);
        if ( (int)++v88 >= v86 )
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
    if ( v123 && IsNpcMulitipleOrOnly )
    {
      ReturnTypeByQuestId = (int64_t)this->fields.questRestrictionInfo;
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
      if ( !v55 )
        goto LABEL_133;
      this->fields.npcFollowerSvtId = v55->fields.npcFollowerSvtId;
    }
    else
    {
      this->fields.isFixMultipleNpc = 0;
    }
  }
LABEL_81:
  v96 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v96 && v96->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      v98 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v99 = entity;
      v101 = *(_QWORD *)&v98->fields.id.fields.currentCryptoKey;
      v100 = *(_QWORD *)&v98->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v130.fields.currentCryptoKey = v101;
      *(_QWORD *)&v130.fields.fakeValue = v100;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v130, 0LL);
      if ( !v99 )
        goto LABEL_133;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v99, ReturnTypeByQuestId, 0LL);
      v102 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v103 = ReturnTypeByQuestId;
      v104 = entity;
      v106 = *(_QWORD *)&v102->fields.id.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v102->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v131.fields.currentCryptoKey = v106;
      *(_QWORD *)&v131.fields.fakeValue = v105;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v131, 0LL);
      if ( !v104 )
        goto LABEL_133;
      if ( (v103 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v104,
                                                         ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v104, ReturnTypeByQuestId, 0LL) )
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v72, v73);
  v107 = this->fields.questRestrictionInfo;
  if ( v107 )
  {
    eventId = v107->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v109 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_133;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v110) )
        {
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v112);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v113 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v113;
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v31);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v115 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v114 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v132.fields.currentCryptoKey = v115;
          *(_QWORD *)&v132.fields.fakeValue = v114;
          v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v132, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v109, eventId, v113, v116, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v111);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v31) )
    goto LABEL_128;
  ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v118);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v120 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v125,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (int64_t)v125;
          if ( !v125 )
            goto LABEL_133;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v125, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v31);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v120) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_132;
        }
      }
LABEL_133:
      sub_1B8880C(ReturnTypeByQuestId, v31);
    }
  }
  else
  {
LABEL_128:
    LOBYTE(v120) = 0;
  }
LABEL_132:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v120;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v119);
}


void __fastcall PartyOrganizationListViewItem___ctor_32057164(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 Instance; // x0
  const MethodInfo *v32; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x26
  __int64 v35; // x27
  __int64 v36; // x28
  Il2CppObject *v37; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v39; // w2
  int32_t v40; // w3
  ServantLimitMaster_o *v41; // x27
  int32_t v42; // w28
  int32_t v43; // w2
  int32_t v44; // w3
  ServantLimitEntity_o *v45; // x27
  int v46; // w9
  Il2CppObject *v47; // x0
  Il2CppObject *v48; // x24
  struct System_Int32_array *v49; // x0
  struct System_Int32_array **p_equipSvtIdList; // x25
  __int64 v51; // x0
  int32_t v52; // w1
  struct UserServantEntity_o *v53; // x8
  __int64 v54; // x24
  __int64 v55; // x25
  UserServantEntity_o *v56; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  QuestRestrictionInfo_o *v62; // x24
  struct UserServantEntity_o *v63; // x8
  __int64 v64; // x25
  __int64 v65; // x26
  int32_t v66; // w25
  int32_t v67; // w26
  int32_t currentCryptoKey; // w28
  int32_t InitPos_k__BackingField; // w29
  int32_t v70; // w27
  int32_t v71; // w0
  QuestRestrictionInfo_o *v72; // x24
  UserServantEntity_o *v73; // x8
  __int64 v74; // x25
  __int64 v75; // x26
  int32_t v76; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v78; // x2
  struct QuestRestrictionInfo_o *v79; // x8
  UserServantEntity_o *v80; // x9
  UserEventServantFatigueMaster_o *v81; // x25
  int32_t eventId; // w26
  __int64 v83; // x27
  __int64 v84; // x28
  int64_t v85; // x19
  struct QuestRestrictionInfo_o *v86; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v88; // x8
  UserEventAlloutBattleMaster_o *v89; // x25
  __int64 v90; // x26
  __int64 v91; // x27
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v93; // x8
  UserEventDataLostEntity_o *v94; // x24
  __int64 v95; // x25
  __int64 v96; // x26
  UserServantEntity_o *v97; // x8
  char v98; // w24
  UserEventDataLostEntity_o *v99; // x25
  __int64 v100; // x26
  __int64 v101; // x27
  const MethodInfo *v102; // x2
  int v103; // w8
  __int64 v104; // x23
  unsigned int v105; // w19
  __int64 v106; // x25
  QuestRestrictionInfo_o *v107; // x24
  __int64 v108; // x26
  __int64 v109; // x27
  int32_t v110; // w26
  int32_t v111; // w27
  int32_t v112; // w22
  EventServantPointRankMaster_o *v113; // x23
  const MethodInfo *v114; // x2
  UserServantEntity_o *v115; // x8
  __int128 v116; // q0
  UserEventServantPointMaster_o *v117; // x24
  int64_t v118; // x25
  int32_t SvtPoint_k__BackingField; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v122; // x2
  struct UserServantEntity_o *v123; // x8
  __int128 v124; // q0
  Il2CppObject *v125; // x22
  UserServantEntity_o *v126; // x8
  __int128 v127; // q0
  System_Int64_array *v128; // x23
  PartyOrganizationListViewItem_o *v129; // x0
  const MethodInfo *v130; // x1
  System_Int64_array *equipIdLista; // [xsp+10h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+80h] [xbp-A0h]
  UserEventServantPointEntity_o *v136; // [xsp+A8h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+B0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  if ( (byte_4A5709C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5709C = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  v136 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v20,
    v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v23,
    v24);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v25,
    v26);
  this->fields.followerInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v27, v28);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v29, v30);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  equipIdLista = equipIdList;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v33 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v36 = *(_QWORD *)&v33[5].fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v139.fields.currentCryptoKey = v36;
  *(_QWORD *)&v139.fields.fakeValue = v35;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v139, 0LL);
  if ( !v34 )
    goto LABEL_140;
  v37 = DataMasterBase_object__object__int___GetEntity(
          v34,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v37;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v37, v39, v40);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v41 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v42 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userServantEntity)[6], 0LL);
  if ( !v41 )
    goto LABEL_140;
  v45 = ServantLimitMaster__GetEntity(v41, v42, Instance, 0LL);
  if ( initPos )
    v46 = initPos;
  else
    v46 = index + 1;
  this->fields._InitPos_k__BackingField = v46;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v47 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL)) == 0LL )
  {
    v52 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipSvtIdList, v52, v43, v44);
    if ( !*p_servantEntity )
      goto LABEL_140;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !v45 )
      goto LABEL_140;
    Instance = (__int64)this->fields.userServantEntity;
    this->fields.rarityId = v45->fields.rarity;
    if ( !Instance )
      goto LABEL_140;
    Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
    v53 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v53 )
      goto LABEL_140;
    v55 = *(_QWORD *)&v53->fields.limitCount.fields.currentCryptoKey;
    v54 = *(_QWORD *)&v53->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v140.fields.currentCryptoKey = v55;
    *(_QWORD *)&v140.fields.fakeValue = v54;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v140, 0LL);
    v56 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v56 )
      goto LABEL_140;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v56, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v58,
      v59);
    v62 = this->fields.questRestrictionInfo;
    if ( v62 )
    {
      v63 = this->fields.userServantEntity;
      if ( !v63 )
        goto LABEL_140;
      v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
      v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v141.fields.currentCryptoKey = v65;
      *(_QWORD *)&v141.fields.fakeValue = v64;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v141, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v66 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_userServantEntity)[6], 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v67 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      currentCryptoKey = (*p_userServantEntity)[16].fields.currentCryptoKey;
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      v70 = Instance;
      v71 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v32);
      Instance = QuestRestrictionInfo__IsRestriction_40436712(
                   v62,
                   &this->fields.isQuestRestrictionWhole,
                   v66,
                   v67,
                   v70,
                   currentCryptoKey,
                   InitPos_k__BackingField,
                   v71,
                   0LL);
      v72 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v72 )
      {
        v73 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v75 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v142.fields.currentCryptoKey = v75;
        *(_QWORD *)&v142.fields.fakeValue = v74;
        v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v142, 0LL);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v72, v76, 0LL);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v60, v61);
    v79 = this->fields.questRestrictionInfo;
    this->fields._IsNotClassBoardNpc_k__BackingField = 0;
    this->fields._IsClearedWave_k__BackingField = isClearedWave;
    *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
    if ( !v79 )
    {
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 0, v78);
      goto LABEL_139;
    }
    if ( v79->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_140;
      v80 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v81 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v84 = *(_QWORD *)&v80->fields.svtId.fields.currentCryptoKey;
      v83 = *(_QWORD *)&v80->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v143.fields.currentCryptoKey = v84;
      *(_QWORD *)&v143.fields.fakeValue = v83;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v143, 0LL);
      if ( !v81 )
        goto LABEL_140;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v81,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v85 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0LL);
        if ( v85 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v86 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    if ( v86->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v86->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v88 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v89 = (UserEventAlloutBattleMaster_o *)Instance;
      v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
      v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v144.fields.currentCryptoKey = v91;
      *(_QWORD *)&v144.fields.fakeValue = v90;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v144, 0LL);
      if ( !*p_questRestrictionInfo || !v89 )
        goto LABEL_140;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v89,
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
        v93 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v94 = entity;
        v96 = *(_QWORD *)&v93->fields.svtId.fields.currentCryptoKey;
        v95 = *(_QWORD *)&v93->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v145.fields.currentCryptoKey = v96;
        *(_QWORD *)&v145.fields.fakeValue = v95;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v145, 0LL);
        if ( !v94 )
          goto LABEL_140;
        Instance = UserEventDataLostEntity__IsRestart(v94, Instance, 0LL);
        v97 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v98 = Instance;
        v99 = entity;
        v101 = *(_QWORD *)&v97->fields.svtId.fields.currentCryptoKey;
        v100 = *(_QWORD *)&v97->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v146.fields.currentCryptoKey = v101;
        *(_QWORD *)&v146.fields.fakeValue = v100;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v146, 0LL);
        if ( !v99 )
          goto LABEL_140;
        if ( (v98 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v99, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v99, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_140;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_140;
        v103 = *(_DWORD *)(Instance + 24);
        v104 = Instance;
        if ( v103 >= 1 )
        {
          v105 = 0;
          while ( 1 )
          {
            if ( v105 >= v103 )
              goto LABEL_141;
            v106 = *(_QWORD *)(v104 + 8LL * (int)v105 + 32);
            if ( !v106 )
              goto LABEL_140;
            v107 = *p_questRestrictionInfo;
            v109 = *(_QWORD *)(v106 + 80);
            v108 = *(_QWORD *)(v106 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v147.fields.currentCryptoKey = v109;
            *(_QWORD *)&v147.fields.fakeValue = v108;
            v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v147, 0LL);
            v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v106 + 96),
                     0LL);
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v106, 0, 0LL);
            if ( !v107 )
              goto LABEL_140;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v107,
                         v110,
                         v111,
                         Instance,
                         this->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            if ( (Instance & 1) == 0 )
              break;
            v103 = *(_DWORD *)(v104 + 24);
            if ( (int)++v105 >= v103 )
              goto LABEL_104;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_104:
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    v112 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_140;
    v113 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v112, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v115 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v116 = *(_OWORD *)&v115->fields.userId.fields.fakeValue;
      v117 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&v115->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v135.fields.fakeValue = v116;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v134 = v135;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v134, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v118 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
      if ( !v117 )
        goto LABEL_140;
      if ( UserEventServantPointMaster__TryGetEntity(v117, &v136, v118, v112, Instance, 0LL) )
      {
        Instance = (__int64)v136;
        if ( !v136 )
          goto LABEL_140;
        this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v136, 0LL);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v113, v112, SvtPoint_k__BackingField, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v112, v122);
    }
    PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 1, v114);
    v123 = this->fields.userServantEntity;
    if ( !v123 )
      goto LABEL_140;
    v124 = *(_OWORD *)&v123->fields.id.fields.fakeValue;
    *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&v123->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v135.fields.fakeValue = v124;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v133 = v135;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v133, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v125 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1B88658(long___TypeInfo, 1LL);
      v126 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v127 = *(_OWORD *)&v126->fields.id.fields.fakeValue;
      v128 = (System_Int64_array *)Instance;
      *(_OWORD *)&v135.fields.currentCryptoKey = *(_OWORD *)&v126->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v135.fields.fakeValue = v127;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v132 = v135;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v132, 0LL);
      if ( !v128 )
        goto LABEL_140;
      if ( !v128->max_length )
LABEL_141:
        sub_1B88814(Instance, v32);
      v128->m_Items[0] = Instance;
      if ( !v125 )
        goto LABEL_140;
      if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v125, v128, 0LL) )
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
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdLista, v102);
      return;
    }
LABEL_140:
    sub_1B8880C(Instance, v32);
  }
  v48 = v47;
  v49 = (struct System_Int32_array *)sub_1B886EC(v47, int___TypeInfo);
  if ( v49 )
  {
    this->fields.equipSvtIdList = v49;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v51 = sub_1B886EC(v48, int___TypeInfo);
    if ( v51 )
    {
      v52 = v51;
      goto LABEL_21;
    }
  }
  else
  {
    sub_1B88ACC(v48);
  }
  v129 = (PartyOrganizationListViewItem_o *)sub_1B88ACC(v48);
  PartyOrganizationListViewItem__GeRestrictionTargetType(v129, v130);
}


void __fastcall PartyOrganizationListViewItem___ctor_32066372(
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w1
  UserServantEntity_array *Instance; // x0
  __int64 v30; // x1
  int max_length; // w8
  UserServantEntity_array *v32; // x22
  unsigned int v33; // w27
  UserServantEntity_o *v34; // x24
  QuestRestrictionInfo_o *v35; // x23
  __int64 v36; // x25
  __int64 v37; // x26
  int32_t v38; // w25
  int32_t v39; // w26
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x2
  struct QuestRestrictionInfo_o *v43; // x8
  int32_t eventId; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v15 = isFollower;
  if ( (byte_4A5709E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5709E = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v16, v17);
  this->fields.followerInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v18, v19);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v20,
    v21);
  this->fields.isFollower = v15;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
  this->fields.servantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v24, v25);
  if ( initPos )
    v28 = initPos;
  else
    v28 = index + 1;
  *(_QWORD *)&this->fields.classId = 0LL;
  this->fields._InitPos_k__BackingField = v28;
  this->fields._NowPos_k__BackingField = index + 1;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_30:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_31;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, v28, 0LL) )
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
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  max_length = Instance->max_length;
  v32 = Instance;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
        sub_1B88814(Instance, v30);
      v34 = v32->m_Items[v33];
      if ( !v34 )
        goto LABEL_39;
      v35 = this->fields.questRestrictionInfo;
      v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
      v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v37;
      *(_QWORD *)&v45.fields.fakeValue = v36;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34->fields.limitCount, 0LL);
      Instance = (UserServantEntity_array *)UserServantEntity__getDispLimitCount(v34, 0, 0LL);
      if ( !v35 )
        goto LABEL_39;
      Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v35,
                                              v38,
                                              v39,
                                              (int32_t)Instance,
                                              this->fields._InitPos_k__BackingField,
                                              0,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      max_length = v32->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_31;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_31:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v26, v27);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v40, v41);
  v43 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !v43 )
    goto LABEL_37;
  eventId = v43->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_39:
    sub_1B8880C(Instance, v30);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v42);
  }
LABEL_37:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v42);
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
  bool IsUniqueIndividualityRestriction_40210708; // w0
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
  bool IsUniqueIndividualityRestriction_38919672; // w0
  const MethodInfo *v63; // x1
  QuestRestrictionInfo_o *v64; // x22
  ServantLeaderInfo_o *v65; // x0
  bool IsFixedSupportPosition_40441480; // w0
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

  if ( (byte_4A570A9 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A570A9 = 1;
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v76.fields.currentCryptoKey = v29;
      *(_QWORD *)&v76.fields.fakeValue = v28;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v76, 0LL);
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
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_40436712(
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
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v77.fields.currentCryptoKey = v40;
          *(_QWORD *)&v77.fields.fakeValue = v39;
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v77, 0LL);
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
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_38919520(
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
    IsUniqueIndividualityRestriction_38919672 = FollowerInfo__IsUniqueIndividualityRestriction_38919672(
                                                  v58,
                                                  v59,
                                                  v60,
                                                  partyItem,
                                                  num,
                                                  v61,
                                                  0LL);
    v64 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_38919672;
    if ( v64 )
    {
      v65 = PartyOrganizationListViewItem__get_ServantLeader(this, v63);
      IsFixedSupportPosition_40441480 = QuestRestrictionInfo__IsFixedSupportPosition_40441480(v64, num, v65, 0LL);
      v67 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_40441480;
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
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v74.fields.currentCryptoKey = v10;
  *(_QWORD *)&v74.fields.fakeValue = v9;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v74, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v15 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_72:
    sub_1B8880C(ServantLeader, partyItem);
  }
  lv = v15->fields.lv;
  v17 = this->fields._InitPos_k__BackingField;
  v18 = (int)ServantLeader;
  v19 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)partyItem);
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_40436712(
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
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v75.fields.currentCryptoKey = v23;
      *(_QWORD *)&v75.fields.fakeValue = v22;
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v75, 0LL);
      v24 = this->fields.userServantEntity;
      if ( v24 )
      {
        v25 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_40210332(
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
  IsUniqueIndividualityRestriction_40210708 = UserServantEntity__IsUniqueIndividualityRestriction_40210708(
                                                v44,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v47 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40210708;
  if ( v47 )
  {
    v48 = PartyOrganizationListViewItem__get_SvtId(this, v46);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v48, 0LL);
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
    sub_1B88814(this, equipIdList);
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
  int32_t v3; // w3

  this->fields.followerInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v2, v3);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t index; // w22
  __int64 v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4A570A0 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4A570A0 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
  *(_DWORD *)(v6 + 304) = -1;
  *(_DWORD *)(v6 + 360) = -1;
  ListViewItem___ctor_40706472((ListViewItem_o *)v6, index, 0LL);
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
  if ( (byte_4A570AA & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A570AA = 1;
  }
  if ( !item )
LABEL_26:
    sub_1B8880C(this, item);
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
      sub_1B88814(this, item);
    v6 = equipIdList->m_Items[v11] == v14->m_Items[v11];
    v10 = v11 + 1;
  }
  while ( v6 );
  return v11 >= v12;
}


void __fastcall PartyOrganizationListViewItem__Empty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2

  this->fields.userServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v5, v6);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_OWORD *)&this->fields.classId = xmmword_BB59A0;
  this->fields.commandCodeIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v13, v14);
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v15);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A570BA & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UINarrowFigureRender_TypeInfo);
    byte_4A570BA = 1;
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
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_20:
    sub_1B8880C(SvtId, v7);
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

  if ( (byte_4A570BC & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A570BC = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_21:
        sub_1B8880C(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B8880C(v5, 0LL);
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

  if ( (byte_4A570B9 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A570B9 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 3LL);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0LL )
LABEL_15:
    sub_1B8880C(result, v5);
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
        sub_1B88814(result, v5);
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

  if ( (byte_4A570BB & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A570BB = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B8880C(v5, 0LL);
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

  if ( (byte_4A570AB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    byte_4A570AB = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v5 = result;
      result = (System_Int64_array *)sub_1B886EC(result, long___TypeInfo);
      if ( !result )
      {
        v7 = (PartyOrganizationListViewItem_o *)sub_1B88ACC(v5);
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
    return (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax);
  }
  return result;
}


bool __fastcall PartyOrganizationListViewItem__GetEventUpVal(
        PartyOrganizationListViewItem_o *this,
        EventUpValInfo_o **eventUpValInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  EventUpValInfo_o *v4; // x8

  v4 = this->fields.eventUpValInfo;
  *eventUpValInfo = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4A570B8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570B8 = 1;
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

  if ( (byte_4A570B7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570B7 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B8880C(v5, 0LL);
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

  if ( (byte_4A570BE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570BE = 1;
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

  if ( (byte_4A570BF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570BF = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1B8880C(v5, 0LL);
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

  if ( (byte_4A570B4 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10281/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570B4 = 1;
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
    sub_1B8880C(v4, method);
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
    v4 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v7 = (System_String_o *)v4;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_61707032(v7, ConfirmRestrictionMessage, 0LL);
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
  int64_t ServantLeader; // x0
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  struct ServantEntity_o *v16; // x8
  ServantLimitImageMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4A570AF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A570AF = 1;
  }
  entity = 0LL;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v7;
    *(_QWORD *)&v23.fields.fakeValue = v6;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, *(const MethodInfo **)&limitCount) )
  {
    ServantLeader = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v8);
    if ( !ServantLeader )
      goto LABEL_33;
    maxLimitCount = *(_DWORD *)(ServantLeader + 64);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_22;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_33;
  v13 = ServantLeader;
  v15 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  if ( !Master_object )
LABEL_33:
    sub_1B8880C(ServantLeader, v10);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    (UserServantCollectionMaster_o *)Master_object,
                    &entity,
                    v13,
                    ServantLeader,
                    0LL);
  if ( (ServantLeader & 1) == 0 )
  {
    ServantLeader = (int64_t)this->fields.servantEntity;
    if ( ServantLeader )
    {
      v20 = -1;
      return ServantEntity__getName((ServantEntity_o *)ServantLeader, v20, -1, 0LL);
    }
    goto LABEL_33;
  }
  if ( !entity )
    goto LABEL_33;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_22:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = this->fields.servantEntity;
  if ( !v16 )
    goto LABEL_33;
  v17 = (ServantLimitImageMaster_o *)ServantLeader;
  v19 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v19;
  *(_QWORD *)&v25.fields.fakeValue = v18;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
  if ( !v17 )
    goto LABEL_33;
  ServantLeader = ServantLimitImageMaster__GetServantLimitCountSealAfter(v17, ServantLeader, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_33;
  v20 = ServantLeader;
  ServantLeader = (int64_t)this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, v20, -1, 0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v7; // x0

  if ( (byte_4A570B6 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_44/*"\n\n"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_4A570B6 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_61718292(
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

  if ( (byte_4A570B5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570B5 = 1;
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
    sub_1B8880C(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40451096(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1B8880C(0LL, v6);
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

  if ( (byte_4A570A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A570A5 = 1;
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
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v10, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v7 = Entity;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        sub_1B8880C(0LL, v9);
      Entity = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)&this->fields.userServantEntity,
                 v7,
                 (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp((PartyOrganizationListViewItem_o *)Entity, this, v6);
  }
}


void __fastcall PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  const MethodInfo *v7; // x2

  if ( !item )
    sub_1B8880C(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_32069156(this, item, v7);
}


void __fastcall PartyOrganizationListViewItem__Modify_32069156(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  PartyOrganizationListViewItem_o *v5; // x19
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  Il2CppObject *Entity; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  UserServantEntity_o *v16; // x8
  System_Int32_array *CommandCodeIdList; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v23; // x8
  __int64 v24; // x21
  __int64 v25; // x23
  int32_t v26; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  const MethodInfo *v30; // x2
  int32_t v31; // w3
  _BOOL4 isMyServantOrNpcRestriction; // w8
  System_Int64_array *equipIdList; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v5 = this;
  if ( (byte_4A570A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A570A6 = 1;
  }
  if ( !item )
    goto LABEL_21;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v5->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_21;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v11;
  *(_QWORD *)&v34.fields.fakeValue = v10;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v34,
                                              0LL);
  if ( !v9 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v9,
             (int32_t)this,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v13, v14);
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.classId = *(_QWORD *)&item->fields.classId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v15 )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v15[6],
                                              0LL);
  v16 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v16 )
    goto LABEL_21;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v16, 0LL);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v18, v19);
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
  v23 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_21:
    sub_1B8880C(this, item);
  v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v25;
  *(_QWORD *)&v35.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v26, 0LL);
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
  FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  v5->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v5->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)FriendshipUpValTuple_k__BackingField,
    v20,
    v21);
  isMyServantOrNpcRestriction = v5->fields.isMyServantOrNpcRestriction;
  v5->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v5->fields.isFollower )
  {
    v5->fields.followerInfo = 0LL;
    v5->fields.isFollower = 0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.followerInfo, 0, (int32_t)v30, v31);
  }
  equipIdList = v5->fields.equipIdList;
  *(_WORD *)&v5->fields._IsClearedWave_k__BackingField = 0;
  v5->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(v5, equipIdList, v30);
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
    sub_1B88814(this, userSvtId);
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
  int32_t v8; // w3
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct ServantEntity_o *servantEntity; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Int32_array *commandCodeIdList; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x21
  struct System_Int32_array *v39; // x0
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v41; // x0
  int32_t v42; // w1
  const MethodInfo *v43; // x2
  PartyOrganizationListViewItem_o *v44; // x0
  System_Int32_array *v45; // x1
  const MethodInfo *v46; // x2

  if ( (byte_4A570A3 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A570A3 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1B8880C(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v11, v12);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v17,
    v18);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v20,
    v21);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v23, v24);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)commandCodeIdList,
    v26,
    v27);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)FriendshipUpValTuple_k__BackingField,
    v29,
    v30);
  *(_QWORD *)&this->fields._InitPos_k__BackingField = *(_QWORD *)&item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)WaveEnemyClassIds_k__BackingField,
    v32,
    v33);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v37 = System_Array__Clone(equipSvtIdList, 0LL)) == 0LL )
  {
    v42 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v38 = v37;
  v39 = (struct System_Int32_array *)sub_1B886EC(v37, int___TypeInfo);
  if ( v39 )
  {
    this->fields.equipSvtIdList = v39;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v41 = sub_1B886EC(v38, int___TypeInfo);
    if ( v41 )
    {
      v42 = v41;
LABEL_10:
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipSvtIdList, v42, v34, v35);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v43);
      return;
    }
  }
  else
  {
    sub_1B88ACC(v38);
  }
  v44 = (PartyOrganizationListViewItem_o *)sub_1B88ACC(v38);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v44, v45, v46);
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
  if ( (byte_4A570A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A570A2 = 1;
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
  v6 = v4->fields.questRestrictionInfo;
  if ( !v6 )
    goto LABEL_31;
  questId = v6->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v8 = v4->fields.questRestrictionInfo;
  if ( !v8 || !this )
    goto LABEL_31;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v8->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_30;
  v10 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0LL);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v10, 0LL) )
    goto LABEL_30;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_31;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_31;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_31:
    sub_1B8880C(this, *(_QWORD *)&eventId);
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
  int32_t v3; // w3
  FollowerInfo_o *p_equipUserServantEntity; // x23
  struct ServantEntity_o **p_equipServantEntity; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  struct EventUpValInfo_o **p_eventUpValInfo; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_T__o **p_eventUpValItemList; // x29
  int32_t v14; // w2
  int32_t v15; // w3
  int64_t Instance; // x0
  MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  _BOOL4 isFollower; // w8
  struct QuestRestrictionInfo_o *v21; // x8
  Il2CppObject *v22; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v24; // x8
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Int64_array *v28; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v30; // x8
  int32_t followerIndex; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x23
  int32_t v33; // w2
  struct System_Int64_array **p_equipIdList; // x0
  int32_t v35; // w1
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct EventUpValSetupInfo_o *v39; // x22
  struct System_Int32_array *v40; // x8
  FollowerInfo_o *v41; // x24
  struct QuestRestrictionInfo_o *v42; // x8
  int32_t v43; // w23
  int32_t v44; // w4
  BalanceConfig_c *v45; // x0
  System_Collections_Generic_List_object__o *v46; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x22
  PartyOrganizationListViewItem___c_c *v49; // x0
  System_Func_object__int__o *_9__128_0; // x23
  Il2CppObject *v51; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  __int64 v57; // x8
  int64_t v58; // x22
  unsigned __int64 v59; // x20
  ServantEntity_o *v60; // x24
  int32_t v61; // w25
  EventPersonalMargeUpValInfo_o *v62; // x23
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x8
  int64_t v66; // x23
  unsigned __int64 v67; // x24
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  System_Collections_Generic_List_object__o *v72; // x0
  struct System_Int64_array *v73; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v77; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v78; // x23
  Il2CppClass *v79; // x24
  Il2CppClass *v80; // x25
  Il2CppObject *v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x24
  struct System_Int32_array *v86; // x8
  UserServantCollectionEntity_o *v87; // x24
  UserServantEntity_o *v88; // x25
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Int32_array *v91; // x8
  Il2CppObject *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  struct System_Int64_array *v95; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_40207232; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_object__o *v103; // x23
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v105; // x0
  System_Func_object__int__o *_9__128_1; // x25
  Il2CppObject *v107; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  __int64 v113; // x8
  int64_t v114; // x24
  unsigned __int64 v115; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v117; // w27
  EventPersonalMargeUpValInfo_o *v118; // x25
  int32_t v119; // w2
  int32_t v120; // w3
  __int64 v121; // x8
  int64_t v122; // x25
  unsigned __int64 v123; // x26
  struct System_Object_array *items; // x8
  _QWORD *v125; // x9
  __int64 size; // x10
  Il2CppClass **v127; // x0
  System_Object_array *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  const MethodInfo *v131; // x2
  bool v132; // w1
  PartyOrganizationListViewItem_o *v133; // x0
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v135; // x23
  struct System_Int32_array *v136; // x28
  __int64 v137; // x8
  unsigned __int64 v138; // x29
  int32_t v139; // w26
  Il2CppObject *v140; // x0
  ServantEntity_o *v141; // x27
  EventPersonalMargeUpValInfo_o *v142; // x25
  int32_t v143; // w2
  int32_t v144; // w3
  __int64 v145; // x8
  int64_t v146; // x25
  unsigned __int64 v147; // x26
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  System_Object_array *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  System_Int32_array *v155; // x23
  EventUpValSetupInfo_o *v156; // x24
  int32_t v157; // w2
  int32_t v158; // w3
  UserServantEntity_o *v159; // x22
  EventUpValSetupInfo_o *v160; // x23
  struct QuestRestrictionInfo_o *v161; // x8
  _BOOL8 v162; // x0
  __int64 v163; // x1
  int32_t v164; // w2
  int32_t v165; // w3
  System_Collections_Generic_List_object__o *v166; // x0
  Il2CppObject *current; // x1
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x8
  UserServantEntity_o *v172; // x23
  EventUpValSetupInfo_o *v173; // x22
  struct QuestRestrictionInfo_o *v174; // x8
  ServantEntity_o *v175; // x22
  EventPersonalMargeUpValInfo_o *v176; // x21
  System_Collections_Generic_List_object__o *v177; // x19
  System_Collections_Generic_IEnumerable_T__o *v178; // x0
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  System_Collections_Generic_List_Enumerator_object__o v180; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v181; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16

  if ( (byte_4A570A1 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1B885B0(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__);
    sub_1B885B0(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__);
    sub_1B885B0(&PartyOrganizationListViewItem___c_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A570A1 = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  eventUpVallInfo = 0LL;
  entity = 0LL;
  memset(&v181, 0, sizeof(v181));
  this->fields.equipUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v8, v9);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValInfo, 0, v11, v12);
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, 0, v14, v15);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v35 = 0;
LABEL_190:
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipIdList, v35, v18, v19);
      return;
    }
    if ( equipIdList )
    {
      v24 = this->fields.equipIdList;
      if ( v24 == equipIdList )
        goto LABEL_62;
      v25 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
      if ( v25 )
      {
        v22 = v25;
        v28 = (struct System_Int64_array *)sub_1B886EC(v25, long___TypeInfo);
        if ( !v28 )
        {
          sub_1B88ACC(v22);
          goto LABEL_13;
        }
      }
      else
      {
        v28 = 0LL;
      }
    }
    else
    {
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      v28 = (struct System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v45->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v28;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)v28, v26, v27);
    v24 = this->fields.equipIdList;
LABEL_62:
    if ( !v24 )
      goto LABEL_193;
    if ( !v24->max_length )
      goto LABEL_175;
    if ( v24->m_Items[0] >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_193;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v73 = this->fields.equipIdList;
      if ( !v73 )
        goto LABEL_193;
      if ( !v73->max_length )
        goto LABEL_175;
      if ( !Instance )
        goto LABEL_193;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.equipUserServantEntity,
                   v73->m_Items[0],
                   (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_193;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v184.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v184.fields.fakeValue = parent;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v184, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
          v77 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_193;
          v78 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v80 = v77->_1.declaringType;
          v79 = v77->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v185.fields.currentCryptoKey = v80;
          *(_QWORD *)&v185.fields.fakeValue = v79;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v185, 0LL);
          if ( !v78 )
            goto LABEL_193;
          v81 = DataMasterBase_object__object__int___GetEntity(
                  v78,
                  Instance,
                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          *p_equipServantEntity = (struct ServantEntity_o *)v81;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v81, v82, v83);
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v86 = this->fields.equipSvtIdList;
        if ( !v86 )
          goto LABEL_193;
        if ( !v86->max_length )
          goto LABEL_175;
        if ( !Master_object )
          goto LABEL_193;
        Instance = UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &entity,
                     Instance,
                     v86->m_Items[1],
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v87 = entity;
          v88 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_40192616(v88, v87, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v88;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, (int32_t)v88, v89, v90);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
          v91 = this->fields.equipSvtIdList;
          if ( !v91 )
            goto LABEL_193;
          if ( !v91->max_length )
            goto LABEL_175;
          if ( !Instance )
            goto LABEL_193;
          v92 = DataMasterBase_object__object__int___GetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  v91->m_Items[1],
                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.equipServantEntity = (struct ServantEntity_o *)v92;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v92, v93, v94);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_96:
          v95 = this->fields.equipIdList;
          if ( !v95 )
            goto LABEL_193;
          if ( !v95->max_length )
            goto LABEL_175;
          v95->m_Items[0] = 0LL;
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
    EquipList = PartyOrganizationListViewItem__GetEquipList(this, v17);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !userServantEntity )
      goto LABEL_193;
    EventUpVal_40207232 = UserServantEntity__getEventUpVal_40207232(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            EquipList,
                            *(_QWORD *)(Instance + 104),
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_40207232;
    if ( questRestrictionInfo )
    {
      v103 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v103,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_193;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v105 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v105 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__128_1 = (System_Func_object__int__o *)v105->static_fields->__9__128_1;
      if ( !_9__128_1 )
      {
        if ( !v105->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v105);
          v105 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v107 = (Il2CppObject *)v105->static_fields->__9;
        _9__128_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__128_1,
          v107,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__128_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__128_1, (int32_t)_9__128_1, v109, v110);
      }
      v111 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__128_1,
                                                                    (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v112 = System_Linq_Enumerable__Distinct_int_(
               v111,
               (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                            v112,
                            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_193;
      v113 = *(_QWORD *)(Instance + 24);
      v114 = Instance;
      if ( (int)v113 >= 1 )
      {
        v115 = 0LL;
        while ( 1 )
        {
          if ( v115 >= (unsigned int)v113 )
            goto LABEL_175;
          servantEntity = this->fields.servantEntity;
          v117 = *(_DWORD *)(v114 + 4 * v115 + 32);
          v118 = (EventPersonalMargeUpValInfo_o *)sub_1B887FC(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v118, v117, servantEntity, 0LL);
          Instance = (int64_t)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v118 )
            goto LABEL_193;
          EventPersonalMargeUpValInfo__Add(v118, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = EventPersonalMargeUpValInfo__IsEmpty(v118, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v118, 0LL);
            if ( !Instance )
              goto LABEL_193;
            v121 = *(_QWORD *)(Instance + 24);
            v122 = Instance;
            if ( (int)v121 >= 1 )
              break;
          }
LABEL_129:
          LODWORD(v113) = *(_DWORD *)(v114 + 24);
          if ( (__int64)++v115 >= (int)v113 )
            goto LABEL_130;
        }
        v123 = 0LL;
        while ( v123 < (unsigned int)v121 )
        {
          if ( !v103 )
            goto LABEL_193;
          v17 = *(MethodInfo **)(v122 + 32 + 8 * v123);
          items = v103->fields._items;
          v125 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v103->fields._version;
          if ( !items )
            goto LABEL_193;
          size = v103->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v103,
              (Il2CppObject *)v17,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
          }
          else
          {
            v127 = &items->obj.klass + size;
            v103->fields._size = size + 1;
            v127[4] = (Il2CppClass *)v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v127 + 4), (int32_t)v17, v119, v120);
          }
          LODWORD(v121) = *(_DWORD *)(v122 + 24);
          if ( (__int64)++v123 >= (int)v121 )
            goto LABEL_129;
        }
        goto LABEL_175;
      }
LABEL_130:
      if ( !v103 )
        goto LABEL_193;
      v128 = System_Collections_Generic_List_object___ToArray(
               v103,
               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v128;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, (int32_t)v128, v129, v130);
      v132 = 1;
      v133 = this;
      goto LABEL_157;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v135 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v135,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_193;
    v136 = (*p_setupInfo)->fields.eventIdList;
    if ( !v136 )
      goto LABEL_193;
    v137 = *(_QWORD *)&v136->max_length;
    if ( (int)v137 < 1 )
    {
LABEL_155:
      if ( !v135 )
        goto LABEL_193;
      v152 = System_Collections_Generic_List_object___ToArray(
               v135,
               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v152;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, (int32_t)v152, v153, v154);
      v133 = this;
      v132 = 0;
LABEL_157:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v133, v132, v131);
      p_setupInfo = &this->fields.setupInfo;
LABEL_158:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v155 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
        v156 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_38910068(v156, v155, 0, 0, 0, 0LL);
        *p_setupInfo = v156;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_setupInfo, (int32_t)v156, v157, v158);
      }
      if ( this->fields.isEventUpVal )
      {
        v159 = this->fields.userServantEntity;
        v160 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v17);
        v161 = this->fields.questRestrictionInfo;
        if ( !v161 )
          goto LABEL_193;
        if ( !v159 )
          goto LABEL_193;
        Instance = UserServantEntity__GetBonusUpVal(
                     v159,
                     &eventUpVallInfo,
                     v160,
                     (System_Int64_array *)Instance,
                     v161->fields.questId,
                     v161->fields.questPhase,
                     0LL);
        if ( !eventUpVallInfo )
          goto LABEL_193;
        Instance = (int64_t)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_193;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v180,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v181 = v180;
        while ( 1 )
        {
          v162 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v181,
                   (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v162 )
            break;
          if ( !*p_eventUpValInfo )
            sub_1B8880C(v162, v163);
          v166 = (System_Collections_Generic_List_object__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v166 )
            sub_1B8880C(0LL, v163);
          current = v181.fields._current;
          v168 = v166->fields._items;
          v169 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v166->fields._version;
          if ( !v168 )
            sub_1B8880C(v166, current);
          v170 = v166->fields._size;
          if ( (unsigned int)v170 >= v168->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v166,
              current,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
          }
          else
          {
            v171 = &v168->obj.klass + v170;
            v166->fields._size = v170 + 1;
            v171[4] = (Il2CppClass *)current;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v171 + 4), (int32_t)current, v164, v165);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v181,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v172 = this->fields.userServantEntity;
        v173 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v17);
        v174 = this->fields.questRestrictionInfo;
        if ( !v174 || !v172 )
          goto LABEL_193;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v172,
                                      &this->fields.eventUpValInfo,
                                      v173,
                                      (System_Int64_array *)Instance,
                                      v174->fields.questId,
                                      v174->fields.questPhase,
                                      0LL);
      }
      v175 = this->fields.servantEntity;
      v176 = (EventPersonalMargeUpValInfo_o *)sub_1B887FC(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v176, 0, v175, 0LL);
      Instance = (int64_t)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v176 )
        {
          EventPersonalMargeUpValInfo__Add(v176, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v176, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v176, 0LL);
            goto LABEL_189;
          }
          v177 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v177,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v177 )
            goto LABEL_193;
          System_Collections_Generic_List_object___AddRange(
            v177,
            *p_eventUpValItemList,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v178 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v176, 0LL);
          System_Collections_Generic_List_object___AddRange(
            v177,
            v178,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v72 = v177;
LABEL_188:
          List = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                  v72,
                                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_189:
          v35 = (int)List;
          *p_eventUpValItemList = List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_190;
        }
      }
LABEL_193:
      sub_1B8880C(Instance, v17);
    }
    v138 = 0LL;
    while ( 1 )
    {
      if ( v138 >= (unsigned int)v137 )
        goto LABEL_175;
      if ( !MasterData_object )
        goto LABEL_193;
      v139 = v136->m_Items[v138 + 1];
      v140 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v139,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v140
        || (Instance = EventDetailEntity__HasFlag((EventDetailEntity_o *)v140, 0x800000000LL, 0LL), (Instance & 1) == 0) )
      {
        v141 = this->fields.servantEntity;
        v142 = (EventPersonalMargeUpValInfo_o *)sub_1B887FC(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v142, v139, v141, 0LL);
        Instance = (int64_t)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_193;
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v142 )
          goto LABEL_193;
        EventPersonalMargeUpValInfo__Add(v142, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = EventPersonalMargeUpValInfo__IsEmpty(v142, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v142, 0LL);
          if ( !Instance )
            goto LABEL_193;
          v145 = *(_QWORD *)(Instance + 24);
          v146 = Instance;
          if ( (int)v145 >= 1 )
            break;
        }
      }
LABEL_154:
      LODWORD(v137) = v136->max_length;
      if ( (__int64)++v138 >= (int)v137 )
        goto LABEL_155;
    }
    v147 = 0LL;
    while ( v147 < (unsigned int)v145 )
    {
      if ( !v135 )
        goto LABEL_193;
      v17 = *(MethodInfo **)(v146 + 32 + 8 * v147);
      v148 = v135->fields._items;
      v149 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v135->fields._version;
      if ( !v148 )
        goto LABEL_193;
      v150 = v135->fields._size;
      if ( (unsigned int)v150 >= v148->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v135,
          (Il2CppObject *)v17,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
      }
      else
      {
        v151 = &v148->obj.klass + v150;
        v135->fields._size = v150 + 1;
        v151[4] = (Il2CppClass *)v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v151 + 4), (int32_t)v17, v143, v144);
      }
      LODWORD(v145) = *(_DWORD *)(v146 + 24);
      if ( (__int64)++v147 >= (int)v145 )
        goto LABEL_154;
    }
LABEL_175:
    sub_1B88814(Instance, v17);
  }
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v18, v19);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v21 = this->fields.questRestrictionInfo;
  LODWORD(v22) = this->fields.followerIndex;
  if ( v21 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v21->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v22, ReturnTypeByQuestId, 0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v30 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v30 )
    {
      Instance = FollowerInfo__GetReturnTypeByQuestId(v30->fields.questId, 0LL);
      v33 = Instance;
      if ( !followerInfo )
        goto LABEL_193;
    }
    else
    {
      v33 = 0;
      if ( !followerInfo )
        goto LABEL_193;
    }
    Instance = FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v33, 0LL);
    if ( !v32 )
      goto LABEL_193;
    v36 = DataMasterBase_object__object__int___GetEntity(
            v32,
            Instance,
            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    *p_equipServantEntity = (struct ServantEntity_o *)v36;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v36, v37, v38);
  }
  v39 = this->fields.setupInfo;
  if ( v39 )
  {
    v40 = v39->fields.eventIdList;
    if ( !v40 )
      goto LABEL_193;
    if ( *(_QWORD *)&v40->max_length )
    {
      v41 = this->fields.followerInfo;
      v42 = this->fields.questRestrictionInfo;
      v43 = this->fields.followerIndex;
      if ( v42 )
      {
        Instance = FollowerInfo__GetReturnTypeByQuestId(v42->fields.questId, 0LL);
        v44 = Instance;
        if ( !v41 )
          goto LABEL_193;
      }
      else
      {
        v44 = 0;
        if ( !v41 )
          goto LABEL_193;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_38919160(
                                    v41,
                                    &this->fields.eventUpValInfo,
                                    v39,
                                    v43,
                                    v44,
                                    0LL);
      v46 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v46,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v48 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v49 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v49 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__128_0 = (System_Func_object__int__o *)v49->static_fields->__9__128_0;
        if ( !_9__128_0 )
        {
          if ( !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            v49 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v51 = (Il2CppObject *)v49->static_fields->__9;
          _9__128_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__128_0,
            v51,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__,
            0LL);
          v52 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v52->__9__128_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v52->__9__128_0, (int32_t)_9__128_0, v53, v54);
        }
        v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v48,
                                                                     (System_Func_TSource__TResult__o *)_9__128_0,
                                                                     (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v56 = System_Linq_Enumerable__Distinct_int_(
                v55,
                (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                              v56,
                              (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v57 = *(_QWORD *)(Instance + 24);
          v58 = Instance;
          if ( (int)v57 >= 1 )
          {
            v59 = 0LL;
            while ( 1 )
            {
              if ( v59 >= (unsigned int)v57 )
                goto LABEL_175;
              v60 = this->fields.servantEntity;
              v61 = *(_DWORD *)(v58 + 4 * v59 + 32);
              v62 = (EventPersonalMargeUpValInfo_o *)sub_1B887FC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v62, v61, v60, 0LL);
              Instance = (int64_t)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_193;
              Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v62 )
                goto LABEL_193;
              EventPersonalMargeUpValInfo__Add(v62, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = EventPersonalMargeUpValInfo__IsEmpty(v62, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v62, 0LL);
                if ( !Instance )
                  goto LABEL_193;
                v65 = *(_QWORD *)(Instance + 24);
                v66 = Instance;
                if ( (int)v65 >= 1 )
                  break;
              }
LABEL_57:
              LODWORD(v57) = *(_DWORD *)(v58 + 24);
              if ( (__int64)++v59 >= (int)v57 )
                goto LABEL_58;
            }
            v67 = 0LL;
            while ( v67 < (unsigned int)v65 )
            {
              if ( !v46 )
                goto LABEL_193;
              v17 = *(MethodInfo **)(v66 + 32 + 8 * v67);
              v68 = v46->fields._items;
              v69 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v46->fields._version;
              if ( !v68 )
                goto LABEL_193;
              v70 = v46->fields._size;
              if ( (unsigned int)v70 >= v68->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v46,
                  (Il2CppObject *)v17,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
              }
              else
              {
                v71 = &v68->obj.klass + v70;
                v46->fields._size = v70 + 1;
                v71[4] = (Il2CppClass *)v17;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v17, v63, v64);
              }
              LODWORD(v65) = *(_DWORD *)(v66 + 24);
              if ( (__int64)++v67 >= (int)v65 )
                goto LABEL_57;
            }
            goto LABEL_175;
          }
LABEL_58:
          if ( !v46 )
            goto LABEL_193;
          v72 = v46;
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
  int32_t v3; // w3
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v6; // x2

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !equipIdList->max_length )
      sub_1B88814(this, userSvtId);
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIdList, 0, (int32_t)method, v3);
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
  int32_t v3; // w3

  this->fields._WaveEnemyClassIds_k__BackingField = classIds;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem__Set_32068192(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct UserServantEntity_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  Il2CppObject *Entity; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct UserServantEntity_o *v20; // x8
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A570A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A570A4 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_12;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  this->fields.followerInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v11, v12);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_12;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v16;
  *(_QWORD *)&v29.fields.fakeValue = v15;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL);
  if ( !v14 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v18, v19);
  v20 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&item->fields.classId;
  this->fields.frameType = item->fields.frameType;
  if ( !v20
    || (Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                     v20->fields.limitCount,
                                     0LL),
        v21 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v21) )
  {
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v21, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v23,
    v24);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v28);
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
  char v16; // w2
  int32_t v17; // w3
  struct ServantEntity_o *v18; // x1
  char v19; // w2
  int32_t v20; // w3
  struct System_Int32_array *v21; // x1
  char v22; // w2
  int32_t v23; // w3
  char v24; // w2
  int32_t v25; // w3
  System_Array_o *v26; // x0
  struct System_Int32_array **v27; // x22
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x29
  __int64 v30; // x0
  __int64 v31; // x0
  int32_t v32; // w1
  const MethodInfo *v33; // x2
  struct EventCampaignEntity_array *v34; // x1
  char v35; // w2
  int32_t v36; // w3
  char v37; // w2
  int32_t v38; // w3
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v39; // x1
  char v40; // w2
  int32_t v41; // w3
  char v42; // w2
  int32_t v43; // w3
  char v44; // w2
  int32_t v45; // w3
  char v46; // w2
  int32_t v47; // w3
  char v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x0
  Il2CppObject *v51; // x20
  __int64 v52; // x0
  __int64 v53; // x0
  int32_t v54; // w1
  const MethodInfo *v55; // x2
  char v56; // w2
  int32_t v57; // w3
  char v58; // w2
  int32_t v59; // w3
  struct System_Int32_array *v60; // [xsp+8h] [xbp-158h]
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

  if ( (byte_4A570A7 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A570A7 = 1;
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
    sub_1B8880C(p_userServantEntity, item);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_userServantEntity, (int32_t)v14, notChangeInitPos, (int32_t)method);
  v15 = item->fields.followerInfo;
  this->fields.followerInfo = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)v15, v16, v17);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  v18 = item->fields.servantEntity;
  this->fields.servantEntity = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v18, v19, v20);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  v21 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, (int32_t)v21, v22, v23);
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
  v27 = &item->fields.equipSvtIdList;
  v26 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v26 )
    goto LABEL_9;
  v28 = System_Array__Clone(v26, 0LL);
  if ( !v28 )
    goto LABEL_9;
  v60 = equipSvtIdList;
  equipSvtIdList = (struct System_Int32_array *)&int___TypeInfo;
  v29 = v28;
  v30 = sub_1B886EC(v28, int___TypeInfo);
  if ( !v30
    || (*p_equipSvtIdList = (struct System_Int32_array *)v30,
        v31 = sub_1B886EC(v29, int___TypeInfo),
        equipSvtIdList = v60,
        v32 = v31,
        !v31) )
  {
    sub_1B88ACC(v29);
LABEL_9:
    v32 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIdList, v32, v24, v25);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v33);
  v34 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v34, v35, v36);
  this->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  this->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = item->fields._IsNotSupportSingle_k__BackingField;
  if ( !notChangeInitPos )
    this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  v39 = item->fields._FriendshipUpValTuple_k__BackingField;
  this->fields._FriendshipUpValTuple_k__BackingField = v39;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v39,
    v37,
    v38);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&item->fields.userServantEntity,
    (int32_t)userServantEntity,
    v40,
    v41);
  item->fields.followerInfo = followerInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v42, v43);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v44, v45);
  *(_QWORD *)&item->fields.classId = v11;
  *(_QWORD *)&item->fields.frameType = v10;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&item->fields.commandCodeIdList,
    (int32_t)commandCodeIdList,
    v46,
    v47);
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
  v50 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL);
  if ( !v50 )
    goto LABEL_17;
  v51 = v50;
  v52 = sub_1B886EC(v50, int___TypeInfo);
  if ( !v52 || (*v27 = (struct System_Int32_array *)v52, v53 = sub_1B886EC(v51, int___TypeInfo), v54 = v53, !v53) )
  {
    sub_1B88ACC(v51);
LABEL_17:
    v54 = 0;
    *v27 = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&item->fields.equipSvtIdList, v54, v48, v49);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v55);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&item->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v56,
    v57);
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v13;
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  item->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  item->fields._IsAllOutBattle_k__BackingField = IsAllOutBattle_k__BackingField;
  item->fields._IsDataLost_k__BackingField = IsDataLost_k__BackingField;
  item->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  item->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&item->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)FriendshipUpValTuple_k__BackingField,
    v58,
    v59);
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
  int32_t v3; // w3
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
  int32_t v18; // w3
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x0
  int32_t v23; // w1
  const MethodInfo *v24; // x2

  v5 = this;
  if ( (byte_4A570A8 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1B885B0(&int___TypeInfo);
    byte_4A570A8 = 1;
  }
  p_equipSvtIdList = &v5->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)v5->fields.equipSvtIdList;
  if ( !item )
    sub_1B8880C(this, item);
  equipIdList = v5->fields.equipIdList;
  v10 = &item->fields.equipSvtIdList;
  v9 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v9 )
    goto LABEL_9;
  v11 = System_Array__Clone(v9, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v12 = v11;
  v13 = sub_1B886EC(v11, int___TypeInfo);
  if ( !v13 || (*p_equipSvtIdList = v13, v14 = sub_1B886EC(v12, int___TypeInfo), v15 = v14, !v14) )
  {
    sub_1B88ACC(v12);
LABEL_9:
    v15 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.equipSvtIdList, v15, (int32_t)method, v3);
  PartyOrganizationListViewItem__SetEquipStatus(v5, item->fields.equipIdList, v16);
  if ( !equipSvtIdList )
    goto LABEL_15;
  v19 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v19 )
    goto LABEL_15;
  v20 = v19;
  v21 = sub_1B886EC(v19, int___TypeInfo);
  if ( !v21 || (*v10 = (struct System_Int32_array *)v21, v22 = sub_1B886EC(v20, int___TypeInfo), v23 = v22, !v22) )
  {
    sub_1B88ACC(v20);
LABEL_15:
    v23 = 0;
    *v10 = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&item->fields.equipSvtIdList, v23, v17, v18);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v24);
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
  const MethodInfo_3851B80 *v38; // x5
  __int64 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Collections_Generic_List_Enumerator_object__o item; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v49; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v50; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4A570C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_4A570C2 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_47;
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[6].monitor,
                                                                         0LL);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v10 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v10,
    (const MethodInfo_34AEDE4 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&item,
      FriendshipUpCampaigns,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v48 = item;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v11 )
        break;
      current = (EventCampaignEntity_o *)v48.fields._current;
      if ( !v48.fields._current )
        sub_1B8880C(v11, v12);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v48.fields._current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1B8880C(v11, v12);
        v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v17;
        *(_QWORD *)&v51.fields.fakeValue = v16;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v18,
                (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v19 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
      v21 = this->fields.userServantEntity;
      if ( !v21 )
        sub_1B8880C(v19, v20);
      v22 = (UserServantMaster_o *)v19;
      v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = v24;
      *(_QWORD *)&v52.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL);
      if ( !v22 )
        sub_1B8880C(v25, (unsigned int)v25);
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
        sub_1B8880C(HeroineData, v27);
      questId = questRestrictionInfo->fields.questId;
      questPhase = questRestrictionInfo->fields.questPhase;
      eventId = current->fields.eventId;
      v32 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v32 )
        sub_1B8880C(0LL, v33);
      if ( !v9 )
        sub_1B8880C(v32, v33);
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
        *(_QWORD *)&v49.fields.Item1 = &item;
        v49.fields.Item3 = v34;
        System_ValueTuple_int__int__Int32Enum____ctor(
          v49,
          v37,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v38);
        if ( !v10 )
          sub_1B8880C(v39, v40);
        *(_QWORD *)&v50.fields.Item1 = item.fields._list;
        v50.fields.Item3 = item.fields._index;
        items = v10->fields._items;
        v42 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1B8880C(v39, *(_QWORD *)&v50.fields.Item1);
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
            v10,
            v50,
            *(const MethodInfo_34AF670 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = size + 1;
          *((System_ValueTuple_int__int__Int32Enum__o *)items->m_Items + size) = v50;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v10 )
LABEL_47:
    sub_1B8880C(Instance, v7);
  v44 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                   v10,
                                                                                   (const MethodInfo_34B1234 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v44;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v44,
    v45,
    v46);
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
  int32_t v14; // w2
  int32_t v15; // w3
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v17; // x21
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  System_Int64_array *v20; // x22
  struct UserServantEntity_o *v21; // x8
  __int128 v22; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct UserServantEntity_o *v27; // x8
  ServantLimitMaster_o *v28; // x21
  __int64 v29; // x22
  __int64 v30; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  int32_t v32; // w20
  int32_t v33; // w8
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v35; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4A570C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A570C3 = 1;
  }
  if ( this->fields.equipUserServantEntity && !this->fields._IsDisappearEquip_k__BackingField )
  {
    p_equipUserServantEntity = &this->fields.equipUserServantEntity;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1B88658(long___TypeInfo, 1LL);
    v7 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_54;
    v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
    v9 = (System_Int64_array *)Instance;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v43.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v42 = v43;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
    if ( !v9 )
      goto LABEL_54;
    if ( !v9->max_length )
LABEL_55:
      sub_1B88814(Instance, v6);
    v9->m_Items[0] = Instance;
    if ( !Master_object )
      goto LABEL_54;
    if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)Master_object, v9, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
      v10 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_54;
      v11 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v43.fields.fakeValue = v11;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v41 = v43;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
      if ( !v12 )
        goto LABEL_54;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 v12,
                 Instance,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      *p_equipUserServantEntity = (struct UserServantEntity_o *)Entity;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, (int32_t)Entity, v14, v15);
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
    v17 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1B88658(long___TypeInfo, 1LL);
    v18 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_54;
    v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
    v20 = (System_Int64_array *)Instance;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v43.fields.fakeValue = v19;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v40 = v43;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
    if ( !v20 )
      goto LABEL_54;
    if ( v20->max_length )
    {
      v20->m_Items[0] = Instance;
      if ( v17 )
      {
        if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v17, v20, 0LL) )
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
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
          v21 = *p_userServantEntity;
          if ( *p_userServantEntity )
          {
            v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
            v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v43.fields.fakeValue = v22;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v39 = v43;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
            if ( v23 )
            {
              v24 = DataMasterBase_object__object__long___GetEntity(
                      v23,
                      Instance,
                      (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              *p_userServantEntity = (struct UserServantEntity_o *)v24;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)v24, v25, v26);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                v27 = *p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  v28 = (ServantLimitMaster_o *)Instance;
                  v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
                  v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v44.fields.currentCryptoKey = v30;
                  *(_QWORD *)&v44.fields.fakeValue = v29;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v44, 0LL);
                  v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userServantEntity;
                  if ( *p_userServantEntity )
                  {
                    v32 = Instance;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31[6], 0LL);
                    if ( v28 )
                    {
                      Instance = (__int64)ServantLimitMaster__GetEntity(v28, v32, Instance, 0LL);
                      if ( Instance )
                      {
                        v33 = *(_DWORD *)(Instance + 24);
                        Instance = (__int64)this->fields.userServantEntity;
                        this->fields.rarityId = v33;
                        if ( Instance )
                        {
                          Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
                          userServantEntity = this->fields.userServantEntity;
                          this->fields.frameType = Instance;
                          if ( userServantEntity )
                          {
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                         userServantEntity->fields.limitCount,
                                         0LL);
                            v35 = this->fields.userServantEntity;
                            this->fields.svtLimitCount = Instance;
                            if ( v35 )
                            {
                              CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v35, 0LL);
                              this->fields.commandCodeIdList = CommandCodeIdList;
                              sub_1B88554(
                                (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
                                (int32_t)CommandCodeIdList,
                                v37,
                                v38);
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
      sub_1B8880C(Instance, v6);
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

  if ( (byte_4A570C1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_1B885B0(&PartyOrganizationListViewObject_TypeInfo);
    byte_4A570C1 = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v6 = (PartyOrganizationListViewItem_o *)sub_1B88ACC(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_32069156(v6, v7, v8);
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
      sub_1B8880C(this, item);
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

  if ( (byte_4A570BD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A570BD = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v4 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v8);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1B8880C(Instance, v6);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v4, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A56A2D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A56A2D = 1;
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

  if ( (byte_4A570B2 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A570B2 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
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

  if ( (byte_4A570B3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570B3 = 1;
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
  __int64 v3; // x0 OVERLAPPED
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // kr00_16
  struct ServantEntity_o *equipServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4A570B1 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A570B1 = 1;
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

  if ( (byte_4A570B0 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A570B0 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
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

  if ( (byte_4A570C0 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A570C0 = 1;
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
      sub_1B8880C(Atk, v11);
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
      sub_1B8880C(Hp, v11);
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

  if ( (byte_4A570AD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A570AD = 1;
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
  __int64 v3; // x0 OVERLAPPED
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v5; // kr00_16
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_4A570AC & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A570AC = 1;
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

  if ( (byte_4A570AE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A570AE = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0LL)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1B8880C(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19052/*"error"*/;
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
  int32_t v3; // w3

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5717C & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_4A5717C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1B8880C(this, 0LL);
  return drop->fields.eventId;
}