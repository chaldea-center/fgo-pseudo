void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40440732((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31794940(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  void *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x2
  int v40; // w9

  if ( (byte_4A04BD7 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4A04BD7 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40440732((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v21, v22);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v23,
    v24);
  this->fields.followerInfo = followerInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v25, v26);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v33, v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B68930(Instance, v30);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_39406500(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v35, v36);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v37, v38);
  if ( initPos )
    v40 = initPos;
  else
    v40 = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v40;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31798700(
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct FollowerInfo_o **p_followerInfo; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  int64_t ReturnTypeByQuestId; // x0
  unsigned __int64 v41; // x1
  FollowerInfo_o *followerInfo; // x24
  int32_t v43; // w2
  int32_t v44; // w0
  int32_t v45; // w2
  int32_t v46; // w3
  FollowerInfo_o *v47; // x24
  struct QuestRestrictionInfo_o *v48; // x8
  int32_t followerIndex; // w27
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x22
  int32_t v51; // w2
  Il2CppObject *v52; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  struct ServantEntity_o *v56; // x8
  ServantLimitMaster_o *v57; // x27
  __int64 v58; // x24
  __int64 v59; // x28
  FollowerInfo_o *v60; // x24
  struct QuestRestrictionInfo_o *v61; // x8
  int32_t v62; // w29
  int32_t v63; // w28
  int32_t v64; // w2
  FollowerInfo_o *v65; // x23
  FollowerInfo_o *v66; // x24
  struct QuestRestrictionInfo_o *v67; // x8
  int32_t v68; // w27
  int32_t v69; // w2
  FollowerInfo_o *v70; // x24
  struct QuestRestrictionInfo_o *v71; // x8
  int32_t v72; // w27
  int32_t v73; // w2
  FollowerInfo_o *v74; // x27
  struct QuestRestrictionInfo_o *v75; // x8
  int32_t v76; // w24
  int32_t v77; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  const MethodInfo *v81; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  const MethodInfo *v84; // x1
  QuestRestrictionInfo_o *v85; // x27
  __int64 v86; // x24
  __int64 v87; // x28
  int32_t v88; // w23
  const MethodInfo *v89; // x1
  int32_t v90; // w24
  int32_t DispLimitCount; // w24
  const MethodInfo *v92; // x1
  int32_t v93; // w28
  int32_t InitPos_k__BackingField; // w29
  int32_t v95; // w0
  int v96; // w8
  int64_t v97; // x23
  unsigned int v98; // w28
  __int64 v99; // x25
  QuestRestrictionInfo_o *v100; // x24
  __int64 v101; // x26
  __int64 v102; // x27
  int32_t v103; // w26
  int32_t v104; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v106; // x8
  Il2CppObject *Master_object; // x23
  struct ServantEntity_o *v108; // x8
  UserEventDataLostEntity_o *v109; // x23
  __int64 v110; // x24
  __int64 v111; // x25
  struct ServantEntity_o *v112; // x8
  char v113; // w22
  UserEventDataLostEntity_o *v114; // x23
  __int64 v115; // x24
  __int64 v116; // x25
  struct QuestRestrictionInfo_o *v117; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v119; // x23
  const MethodInfo *v120; // x1
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // x1
  int32_t v123; // w21
  __int64 v124; // x24
  __int64 v125; // x25
  int32_t v126; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v128; // x1
  const MethodInfo *v129; // x2
  QuestRestrictionInfo_o *v130; // x8
  bool IsNotClassBoard; // w20
  int32_t v132; // [xsp+Ch] [xbp-84h]
  _BOOL4 v133; // [xsp+14h] [xbp-7Ch]
  FollowerInfo_o *v134; // [xsp+18h] [xbp-78h]
  QuestPhaseEntity_o *v135; // [xsp+20h] [xbp-70h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  v11 = isFixNpc;
  v19 = isFixNpc;
  if ( (byte_4A04BD5 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v21);
    sub_1B686D4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22);
    sub_1B686D4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v23);
    sub_1B686D4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v24);
    sub_1B686D4(&DataManager_TypeInfo, v25);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_1B686D4(&NetworkManager_TypeInfo, v27);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_4A04BD5 = 1;
  }
  v135 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40440732((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v30, v31);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v33,
    v34);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v35,
    v36);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)follower, v38, v39);
  this->fields.isFixNpc = v19;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v43 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_133;
  }
  else
  {
    v43 = 0;
    if ( !followerInfo )
      goto LABEL_133;
  }
  v44 = FollowerInfo__getIndex(followerInfo, followerClassId, v43, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v44;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v45, v46);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
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
          (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v52;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v52, v54, v55);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v134 = follower;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v56 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_133;
  v133 = v11;
  v57 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v59 = *(_QWORD *)&v56->fields.id.fields.currentCryptoKey;
  v58 = *(_QWORD *)&v56->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v137.fields.currentCryptoKey = v59;
  *(_QWORD *)&v137.fields.fakeValue = v58;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v137, 0LL);
  v60 = this->fields.followerInfo;
  v61 = this->fields.questRestrictionInfo;
  v62 = this->fields.followerIndex;
  v63 = ReturnTypeByQuestId;
  if ( v61 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v61->fields.questId, 0LL);
    v64 = ReturnTypeByQuestId;
    if ( !v60 )
      goto LABEL_133;
  }
  else
  {
    v64 = 0;
    if ( !v60 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v60, v62, v64, 0LL);
  if ( !v57 )
    goto LABEL_133;
  ReturnTypeByQuestId = (int64_t)ServantLimitMaster__GetEntity(v57, v63, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_133;
  v65 = v134;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v66 = this->fields.followerInfo;
  v67 = this->fields.questRestrictionInfo;
  v68 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v67 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v67->fields.questId, 0LL);
    v69 = ReturnTypeByQuestId;
    if ( !v66 )
      goto LABEL_133;
  }
  else
  {
    v69 = 0;
    if ( !v66 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v66, v68, v69, 0LL);
  v70 = this->fields.followerInfo;
  v71 = this->fields.questRestrictionInfo;
  v72 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v71 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v71->fields.questId, 0LL);
    v73 = ReturnTypeByQuestId;
    if ( !v70 )
      goto LABEL_133;
  }
  else
  {
    v73 = 0;
    if ( !v70 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v70, v72, v73, 0LL);
  v74 = this->fields.followerInfo;
  v75 = this->fields.questRestrictionInfo;
  v76 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v75 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v75->fields.questId, 0LL);
    v77 = ReturnTypeByQuestId;
    if ( !v74 )
      goto LABEL_133;
  }
  else
  {
    v77 = 0;
    if ( !v74 )
      goto LABEL_133;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v74, v76, v77, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v79,
    v80);
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v81) )
    goto LABEL_47;
  ReturnTypeByQuestId = (int64_t)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_133;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v85 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v84);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v87 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v86 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v138.fields.currentCryptoKey = v87;
    *(_QWORD *)&v138.fields.fakeValue = v86;
    v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v138, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v89);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v90 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v41);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v132 = v90;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v92);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v93 = *(_DWORD *)(ReturnTypeByQuestId + 68);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v95 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)v41);
    this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestriction_40171396(
                                        v85,
                                        &this->fields.isQuestRestrictionWhole,
                                        v88,
                                        v132,
                                        DispLimitCount,
                                        v93,
                                        InitPos_k__BackingField,
                                        v95,
                                        0LL);
    v65 = v134;
  }
  else
  {
LABEL_47:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v41 = (unsigned int)initPos;
  else
    v41 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v41;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(questRestrictionInfo, v41, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !v65 )
      goto LABEL_133;
    this->fields.npcFollowerSvtId = v65->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (int64_t)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v96 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v97 = ReturnTypeByQuestId;
    if ( v96 >= 1 )
    {
      v98 = 0;
      while ( 1 )
      {
        if ( v98 >= v96 )
          sub_1B68938(ReturnTypeByQuestId, v41);
        v99 = *(_QWORD *)(v97 + 8LL * (int)v98 + 32);
        if ( !v99 )
          goto LABEL_133;
        v100 = *p_questRestrictionInfo;
        v102 = *(_QWORD *)(v99 + 80);
        v101 = *(_QWORD *)(v99 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v139.fields.currentCryptoKey = v102;
        *(_QWORD *)&v139.fields.fakeValue = v101;
        v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v139, 0LL);
        v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v99 + 96),
                 0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v99, 0, 0LL);
        if ( !v100 )
          goto LABEL_133;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v100,
                                v103,
                                v104,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v96 = *(_DWORD *)(v97 + 24);
        if ( (int)++v98 >= v96 )
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
    if ( v133 && IsNpcMulitipleOrOnly )
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
      if ( !v65 )
        goto LABEL_133;
      this->fields.npcFollowerSvtId = v65->fields.npcFollowerSvtId;
    }
    else
    {
      this->fields.isFixMultipleNpc = 0;
    }
  }
LABEL_81:
  v106 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v106 && v106->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v108 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v109 = entity;
      v111 = *(_QWORD *)&v108->fields.id.fields.currentCryptoKey;
      v110 = *(_QWORD *)&v108->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v140.fields.currentCryptoKey = v111;
      *(_QWORD *)&v140.fields.fakeValue = v110;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v140, 0LL);
      if ( !v109 )
        goto LABEL_133;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v109, ReturnTypeByQuestId, 0LL);
      v112 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v113 = ReturnTypeByQuestId;
      v114 = entity;
      v116 = *(_QWORD *)&v112->fields.id.fields.currentCryptoKey;
      v115 = *(_QWORD *)&v112->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v141.fields.currentCryptoKey = v116;
      *(_QWORD *)&v141.fields.fakeValue = v115;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v141, 0LL);
      if ( !v114 )
        goto LABEL_133;
      if ( (v113 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v114,
                                                         ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v114, ReturnTypeByQuestId, 0LL) )
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v82, v83);
  v117 = this->fields.questRestrictionInfo;
  if ( v117 )
  {
    eventId = v117->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v119 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_133;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v120) )
        {
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v122);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v123 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v123;
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v41);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v125 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v124 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v142.fields.currentCryptoKey = v125;
          *(_QWORD *)&v142.fields.fakeValue = v124;
          v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v142, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v119, eventId, v123, v126, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v121);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v41) )
    goto LABEL_128;
  ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v128);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v130 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v135,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (int64_t)v135;
          if ( !v135 )
            goto LABEL_133;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v135, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v41);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v130) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_132;
        }
      }
LABEL_133:
      sub_1B68930(ReturnTypeByQuestId, v41);
    }
  }
  else
  {
LABEL_128:
    LOBYTE(v130) = 0;
  }
LABEL_132:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v130;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v129);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31826340(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 Instance; // x0
  const MethodInfo *v47; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x26
  __int64 v50; // x27
  __int64 v51; // x28
  Il2CppObject *v52; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v54; // w2
  int32_t v55; // w3
  ServantLimitMaster_o *v56; // x27
  int32_t v57; // w28
  int32_t v58; // w2
  int32_t v59; // w3
  ServantLimitEntity_o *v60; // x27
  int v61; // w9
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x24
  struct System_Int32_array *v64; // x0
  struct System_Int32_array **p_equipSvtIdList; // x25
  __int64 v66; // x0
  int32_t v67; // w1
  struct UserServantEntity_o *v68; // x8
  __int64 v69; // x24
  __int64 v70; // x25
  UserServantEntity_o *v71; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  QuestRestrictionInfo_o *v77; // x24
  struct UserServantEntity_o *v78; // x8
  __int64 v79; // x25
  __int64 v80; // x26
  int32_t v81; // w25
  int32_t v82; // w26
  int32_t currentCryptoKey; // w28
  int32_t InitPos_k__BackingField; // w29
  int32_t v85; // w27
  int32_t v86; // w0
  QuestRestrictionInfo_o *v87; // x24
  UserServantEntity_o *v88; // x8
  __int64 v89; // x25
  __int64 v90; // x26
  int32_t v91; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v93; // x2
  struct QuestRestrictionInfo_o *v94; // x8
  UserServantEntity_o *v95; // x9
  UserEventServantFatigueMaster_o *v96; // x25
  int32_t eventId; // w26
  __int64 v98; // x27
  __int64 v99; // x28
  int64_t v100; // x19
  struct QuestRestrictionInfo_o *v101; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v103; // x8
  UserEventAlloutBattleMaster_o *v104; // x25
  __int64 v105; // x26
  __int64 v106; // x27
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v108; // x8
  UserEventDataLostEntity_o *v109; // x24
  __int64 v110; // x25
  __int64 v111; // x26
  UserServantEntity_o *v112; // x8
  char v113; // w24
  UserEventDataLostEntity_o *v114; // x25
  __int64 v115; // x26
  __int64 v116; // x27
  const MethodInfo *v117; // x2
  int v118; // w8
  __int64 v119; // x23
  unsigned int v120; // w19
  __int64 v121; // x25
  QuestRestrictionInfo_o *v122; // x24
  __int64 v123; // x26
  __int64 v124; // x27
  int32_t v125; // w26
  int32_t v126; // w27
  int32_t v127; // w22
  EventServantPointRankMaster_o *v128; // x23
  const MethodInfo *v129; // x2
  UserServantEntity_o *v130; // x8
  __int128 v131; // q0
  UserEventServantPointMaster_o *v132; // x24
  int64_t v133; // x25
  int32_t SvtPoint_k__BackingField; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v137; // x2
  struct UserServantEntity_o *v138; // x8
  __int128 v139; // q0
  Il2CppObject *v140; // x22
  UserServantEntity_o *v141; // x8
  __int128 v142; // q0
  System_Int64_array *v143; // x23
  PartyOrganizationListViewItem_o *v144; // x0
  const MethodInfo *v145; // x1
  System_Int64_array *equipIdLista; // [xsp+10h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+80h] [xbp-A0h]
  UserEventServantPointEntity_o *v151; // [xsp+A8h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+B0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  if ( (byte_4A04BD4 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v20);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_1B686D4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22);
    sub_1B686D4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_1B686D4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v24);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, v25);
    sub_1B686D4(&DataManager_TypeInfo, v26);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1B686D4(&int___TypeInfo, v28);
    sub_1B686D4(&long___TypeInfo, v29);
    sub_1B686D4(&NetworkManager_TypeInfo, v30);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4A04BD4 = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  v151 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40440732((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v35,
    v36);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v38,
    v39);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v40,
    v41);
  this->fields.followerInfo = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v42, v43);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v44, v45);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  equipIdLista = equipIdList;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  v48 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v51 = *(_QWORD *)&v48[5].fields.currentCryptoKey;
  v50 = *(_QWORD *)&v48[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v154.fields.currentCryptoKey = v51;
  *(_QWORD *)&v154.fields.fakeValue = v50;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v154, 0LL);
  if ( !v49 )
    goto LABEL_140;
  v52 = DataMasterBase_object__object__int___GetEntity(
          v49,
          Instance,
          (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v52;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v52, v54, v55);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v56 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v57 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416((*p_userServantEntity)[6], 0LL);
  if ( !v56 )
    goto LABEL_140;
  v60 = ServantLimitMaster__GetEntity(v56, v57, Instance, 0LL);
  if ( initPos )
    v61 = initPos;
  else
    v61 = index + 1;
  this->fields._InitPos_k__BackingField = v61;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v62 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL)) == 0LL )
  {
    v67 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_21:
    sub_1B68678((ServantStatusBattleListViewItem_o *)p_equipSvtIdList, v67, v58, v59);
    if ( !*p_servantEntity )
      goto LABEL_140;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !v60 )
      goto LABEL_140;
    Instance = (__int64)this->fields.userServantEntity;
    this->fields.rarityId = v60->fields.rarity;
    if ( !Instance )
      goto LABEL_140;
    Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
    v68 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v68 )
      goto LABEL_140;
    v70 = *(_QWORD *)&v68->fields.limitCount.fields.currentCryptoKey;
    v69 = *(_QWORD *)&v68->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v155.fields.currentCryptoKey = v70;
    *(_QWORD *)&v155.fields.fakeValue = v69;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v155, 0LL);
    v71 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v71 )
      goto LABEL_140;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v71, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v73,
      v74);
    v77 = this->fields.questRestrictionInfo;
    if ( v77 )
    {
      v78 = this->fields.userServantEntity;
      if ( !v78 )
        goto LABEL_140;
      v80 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
      v79 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v156.fields.currentCryptoKey = v80;
      *(_QWORD *)&v156.fields.fakeValue = v79;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v156, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v81 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416((*p_userServantEntity)[6], 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v82 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      currentCryptoKey = (*p_userServantEntity)[16].fields.currentCryptoKey;
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      v85 = Instance;
      v86 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v47);
      Instance = QuestRestrictionInfo__IsRestriction_40171396(
                   v77,
                   &this->fields.isQuestRestrictionWhole,
                   v81,
                   v82,
                   v85,
                   currentCryptoKey,
                   InitPos_k__BackingField,
                   v86,
                   0LL);
      v87 = this->fields.questRestrictionInfo;
      this->fields.isQuestRestriction = Instance & 1;
      *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
      this->fields.isFixedServantPositionAgreement = 0;
      if ( v87 )
      {
        v88 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v90 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
        v89 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v157.fields.currentCryptoKey = v90;
        *(_QWORD *)&v157.fields.fakeValue = v89;
        v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v157, 0LL);
        IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v87, v91, 0LL);
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
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v75, v76);
    v94 = this->fields.questRestrictionInfo;
    this->fields._IsNotClassBoardNpc_k__BackingField = 0;
    this->fields._IsClearedWave_k__BackingField = isClearedWave;
    *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
    if ( !v94 )
    {
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 0, v93);
      goto LABEL_139;
    }
    if ( v94->fields.isFatigure )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_140;
      v95 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v96 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v99 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
      v98 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v158.fields.currentCryptoKey = v99;
      *(_QWORD *)&v158.fields.fakeValue = v98;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v158, 0LL);
      if ( !v96 )
        goto LABEL_140;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v96,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v100 = recoverAt;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__getTime(0LL);
        if ( v100 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v101 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    if ( v101->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v101->fields.allOutBattleGroupNo;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v103 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v104 = (UserEventAlloutBattleMaster_o *)Instance;
      v106 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v159.fields.currentCryptoKey = v106;
      *(_QWORD *)&v159.fields.fakeValue = v105;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v159, 0LL);
      if ( !*p_questRestrictionInfo || !v104 )
        goto LABEL_140;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v104,
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
        v108 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v109 = entity;
        v111 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
        v110 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v160.fields.currentCryptoKey = v111;
        *(_QWORD *)&v160.fields.fakeValue = v110;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v160, 0LL);
        if ( !v109 )
          goto LABEL_140;
        Instance = UserEventDataLostEntity__IsRestart(v109, Instance, 0LL);
        v112 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_140;
        v113 = Instance;
        v114 = entity;
        v116 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
        v115 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v161.fields.currentCryptoKey = v116;
        *(_QWORD *)&v161.fields.fakeValue = v115;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v161, 0LL);
        if ( !v114 )
          goto LABEL_140;
        if ( (v113 & 1) != 0 )
        {
          Instance = UserEventDataLostEntity__GetTimesToRestart(v114, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          Instance = UserEventDataLostEntity__IsDataLost(v114, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_140;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_140;
        v118 = *(_DWORD *)(Instance + 24);
        v119 = Instance;
        if ( v118 >= 1 )
        {
          v120 = 0;
          while ( 1 )
          {
            if ( v120 >= v118 )
              goto LABEL_141;
            v121 = *(_QWORD *)(v119 + 8LL * (int)v120 + 32);
            if ( !v121 )
              goto LABEL_140;
            v122 = *p_questRestrictionInfo;
            v124 = *(_QWORD *)(v121 + 80);
            v123 = *(_QWORD *)(v121 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v162.fields.currentCryptoKey = v124;
            *(_QWORD *)&v162.fields.fakeValue = v123;
            v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v162, 0LL);
            v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v121 + 96),
                     0LL);
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v121, 0, 0LL);
            if ( !v122 )
              goto LABEL_140;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v122,
                         v125,
                         v126,
                         Instance,
                         this->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            if ( (Instance & 1) == 0 )
              break;
            v118 = *(_DWORD *)(v119 + 24);
            if ( (int)++v120 >= v118 )
              goto LABEL_104;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_104:
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    v127 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_140;
    v128 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v127, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v130 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v131 = *(_OWORD *)&v130->fields.userId.fields.fakeValue;
      v132 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v150.fields.currentCryptoKey = *(_OWORD *)&v130->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v150.fields.fakeValue = v131;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v149 = v150;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v149, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v133 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
      if ( !v132 )
        goto LABEL_140;
      if ( UserEventServantPointMaster__TryGetEntity(v132, &v151, v133, v127, Instance, 0LL) )
      {
        Instance = (__int64)v151;
        if ( !v151 )
          goto LABEL_140;
        this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v151, 0LL);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v128, v127, SvtPoint_k__BackingField, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v127, v137);
    }
    PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 1, v129);
    v138 = this->fields.userServantEntity;
    if ( !v138 )
      goto LABEL_140;
    v139 = *(_OWORD *)&v138->fields.id.fields.fakeValue;
    *(_OWORD *)&v150.fields.currentCryptoKey = *(_OWORD *)&v138->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v150.fields.fakeValue = v139;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v148 = v150;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v148, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v140 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1B6877C(long___TypeInfo, 1LL);
      v141 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v142 = *(_OWORD *)&v141->fields.id.fields.fakeValue;
      v143 = (System_Int64_array *)Instance;
      *(_OWORD *)&v150.fields.currentCryptoKey = *(_OWORD *)&v141->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v150.fields.fakeValue = v142;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v147 = v150;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v147, 0LL);
      if ( !v143 )
        goto LABEL_140;
      if ( !v143->max_length )
LABEL_141:
        sub_1B68938(Instance, v47);
      v143->m_Items[0] = Instance;
      if ( !v140 )
        goto LABEL_140;
      if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v140, v143, 0LL) )
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
      PartyOrganizationListViewItem__SetEquipStatus(this, equipIdLista, v117);
      return;
    }
LABEL_140:
    sub_1B68930(Instance, v47);
  }
  v63 = v62;
  v64 = (struct System_Int32_array *)sub_1B68810(v62, int___TypeInfo);
  if ( v64 )
  {
    this->fields.equipSvtIdList = v64;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v66 = sub_1B68810(v63, int___TypeInfo);
    if ( v66 )
    {
      v67 = v66;
      goto LABEL_21;
    }
  }
  else
  {
    sub_1B68BF0(v63);
  }
  v144 = (PartyOrganizationListViewItem_o *)sub_1B68BF0(v63);
  PartyOrganizationListViewItem__GeRestrictionTargetType(v144, v145);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31835548(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int v32; // w1
  UserServantEntity_array *Instance; // x0
  __int64 v34; // x1
  int max_length; // w8
  UserServantEntity_array *v36; // x22
  unsigned int v37; // w27
  UserServantEntity_o *v38; // x24
  QuestRestrictionInfo_o *v39; // x23
  __int64 v40; // x25
  __int64 v41; // x26
  int32_t v42; // w25
  int32_t v43; // w26
  int32_t v44; // w2
  int32_t v45; // w3
  const MethodInfo *v46; // x2
  struct QuestRestrictionInfo_o *v47; // x8
  int32_t eventId; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v15 = isFollower;
  if ( (byte_4A04BD6 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_1B686D4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1B686D4(&DataManager_TypeInfo, v17);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A04BD6 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40440732((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v20, v21);
  this->fields.followerInfo = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v24,
    v25);
  this->fields.isFollower = v15;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.servantEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v28, v29);
  if ( initPos )
    v32 = initPos;
  else
    v32 = index + 1;
  *(_QWORD *)&this->fields.classId = 0LL;
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
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(questRestrictionInfo, v32, 0LL) )
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
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
        sub_1B68938(Instance, v34);
      v38 = v36->m_Items[v37];
      if ( !v38 )
        goto LABEL_39;
      v39 = this->fields.questRestrictionInfo;
      v41 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v41;
      *(_QWORD *)&v49.fields.fakeValue = v40;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v49, 0LL);
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v38->fields.limitCount, 0LL);
      Instance = (UserServantEntity_array *)UserServantEntity__getDispLimitCount(v38, 0, 0LL);
      if ( !v39 )
        goto LABEL_39;
      Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v39,
                                              v42,
                                              v43,
                                              (int32_t)Instance,
                                              this->fields._InitPos_k__BackingField,
                                              0,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v30, v31);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v44, v45);
  v47 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !v47 )
    goto LABEL_37;
  eventId = v47->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_39:
    sub_1B68930(Instance, v34);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v46);
  }
LABEL_37:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v46);
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
  bool IsUniqueIndividualityRestriction_39944516; // w0
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
  bool IsUniqueIndividualityRestriction_38665472; // w0
  const MethodInfo *v63; // x1
  QuestRestrictionInfo_o *v64; // x22
  ServantLeaderInfo_o *v65; // x0
  bool IsFixedSupportPosition_40176164; // w0
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

  if ( (byte_4A04BE1 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_4A04BE1 = 1;
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
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v76, 0LL);
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
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_40171396(
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
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40188344(
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
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v77, 0LL);
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
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_38665320(
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
    IsUniqueIndividualityRestriction_38665472 = FollowerInfo__IsUniqueIndividualityRestriction_38665472(
                                                  v58,
                                                  v59,
                                                  v60,
                                                  partyItem,
                                                  num,
                                                  v61,
                                                  0LL);
    v64 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_38665472;
    if ( v64 )
    {
      v65 = PartyOrganizationListViewItem__get_ServantLeader(this, v63);
      IsFixedSupportPosition_40176164 = QuestRestrictionInfo__IsFixedSupportPosition_40176164(v64, num, v65, 0LL);
      v67 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_40176164;
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
          v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(SvtId, 0LL);
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v74, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v15 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_72:
    sub_1B68930(ServantLeader, partyItem);
  }
  lv = v15->fields.lv;
  v17 = this->fields._InitPos_k__BackingField;
  v18 = (int)ServantLeader;
  v19 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)partyItem);
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_40171396(
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
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v75, 0LL);
      v24 = this->fields.userServantEntity;
      if ( v24 )
      {
        v25 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
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
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_39944140(
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
  IsUniqueIndividualityRestriction_39944516 = UserServantEntity__IsUniqueIndividualityRestriction_39944516(
                                                v44,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v47 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_39944516;
  if ( v47 )
  {
    v48 = PartyOrganizationListViewItem__get_SvtId(this, v46);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v48, 0LL);
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
    sub_1B68938(this, equipIdList);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v2, v3);
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

  if ( (byte_4A04BD8 & 1) == 0 )
  {
    sub_1B686D4(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_4A04BD8 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_1B68920(PartyOrganizationListViewItem_TypeInfo);
  *(_DWORD *)(v6 + 304) = -1;
  *(_DWORD *)(v6 + 360) = -1;
  ListViewItem___ctor_40440732((ListViewItem_o *)v6, index, 0LL);
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
  if ( (byte_4A04BE2 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1B686D4(&BalanceConfig_TypeInfo, item);
    byte_4A04BE2 = 1;
  }
  if ( !item )
LABEL_26:
    sub_1B68930(this, item);
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
      sub_1B68938(this, item);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v5, v6);
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_OWORD *)&this->fields.classId = xmmword_BA7610;
  this->fields.commandCodeIdList = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v13, v14);
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
    sub_1B68930(0LL, method);
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

  if ( (byte_4A04BF1 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B686D4(&UINarrowFigureRender_TypeInfo, v3);
    byte_4A04BF1 = 1;
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
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v22, 0LL);
  v9 = this->fields.userServantEntity;
  if ( !v9 )
LABEL_20:
    sub_1B68930(SvtId, v8);
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

  if ( (byte_4A04BF3 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    byte_4A04BF3 = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_21:
        sub_1B68930(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B68930(v5, 0LL);
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

  if ( (byte_4A04BF0 & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, method);
    byte_4A04BF0 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1B6877C(int___TypeInfo, 3LL);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0LL )
LABEL_15:
    sub_1B68930(result, v5);
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
        sub_1B68938(result, v5);
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

  if ( (byte_4A04BF2 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A04BF2 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B68930(v5, 0LL);
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

  if ( (byte_4A04BE3 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    sub_1B686D4(&long___TypeInfo, v3);
    byte_4A04BE3 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v6 = result;
      result = (System_Int64_array *)sub_1B68810(result, long___TypeInfo);
      if ( !result )
      {
        v8 = (PartyOrganizationListViewItem_o *)sub_1B68BF0(v6);
        return (System_Int64_array *)*(_OWORD *)&PartyOrganizationListViewItem__get_EquipSvtId(v8, v9);
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
    return (System_Int64_array *)sub_1B6877C(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4A04BEF & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04BEF = 1;
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

  if ( (byte_4A04BEE & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04BEE = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B68930(v5, 0LL);
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

  if ( (byte_4A04BF5 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04BF5 = 1;
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

  if ( (byte_4A04BF6 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04BF6 = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1B68930(v5, 0LL);
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

  if ( (byte_4A04BEB & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_10236/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v3);
    sub_1B686D4(&StringLiteral_1/*""*/, v4);
    byte_4A04BEB = 1;
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
    sub_1B68930(v6, method);
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
    v6 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10236/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v9 = (System_String_o *)v6;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_61419468(v9, ConfirmRestrictionMessage, 0LL);
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

  if ( (byte_4A04BED & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1B686D4(&StringLiteral_44/*"\n\n"*/, v5);
    sub_1B686D4(&StringLiteral_1/*""*/, v6);
    sub_1B686D4(&StringLiteral_10272/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v7);
    byte_4A04BED = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_61430728(
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

  if ( (byte_4A04BEC & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04BEC = 1;
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
    sub_1B68930(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40185536(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1B68930(0LL, v6);
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
  __int128 v7; // q1
  int64_t Entity; // x0
  const MethodInfo *v9; // x2
  int64_t v10; // x21
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-40h]

  if ( (byte_4A04BDD & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4A04BDD = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v14.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v13 = v14;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v13, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v10 = Entity;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        sub_1B68930(0LL, v12);
      Entity = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)&this->fields.userServantEntity,
                 v10,
                 (const MethodInfo_30E46C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp((PartyOrganizationListViewItem_o *)Entity, this, v9);
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
    sub_1B68930(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_31838332(this, item, v7);
}


void __fastcall PartyOrganizationListViewItem__Modify_31838332(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  int32_t v17; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  UserServantEntity_o *v19; // x8
  System_Int32_array *CommandCodeIdList; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v26; // x8
  __int64 v27; // x21
  __int64 v28; // x23
  int32_t v29; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  const MethodInfo *v33; // x2
  int32_t v34; // w3
  _BOOL4 isMyServantOrNpcRestriction; // w8
  System_Int64_array *equipIdList; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v5 = this;
  if ( (byte_4A04BDE & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1B686D4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v8);
    byte_4A04BDE = 1;
  }
  if ( !item )
    goto LABEL_21;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v5->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_21;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v14;
  *(_QWORD *)&v37.fields.fakeValue = v13;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                              v37,
                                              0LL);
  if ( !v12 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)this,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v16, v17);
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.classId = *(_QWORD *)&item->fields.classId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v18 )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                              v18[6],
                                              0LL);
  v19 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v19 )
    goto LABEL_21;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v19, 0LL);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v21, v22);
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
    sub_1B68930(this, item);
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v28;
  *(_QWORD *)&v38.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v38, 0LL);
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
  FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  v5->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v5->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)FriendshipUpValTuple_k__BackingField,
    v23,
    v24);
  isMyServantOrNpcRestriction = v5->fields.isMyServantOrNpcRestriction;
  v5->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v5->fields.isFollower )
  {
    v5->fields.followerInfo = 0LL;
    v5->fields.isFollower = 0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v5->fields.followerInfo, 0, (int32_t)v33, v34);
  }
  equipIdList = v5->fields.equipIdList;
  *(_WORD *)&v5->fields._IsClearedWave_k__BackingField = 0;
  v5->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(v5, equipIdList, v33);
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
    sub_1B68938(this, userSvtId);
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

  if ( (byte_4A04BDB & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, item);
    byte_4A04BDB = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1B68930(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v7, v8);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v11, v12);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v17,
    v18);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v20,
    v21);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v23, v24);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1B68678(
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)FriendshipUpValTuple_k__BackingField,
    v29,
    v30);
  *(_QWORD *)&this->fields._InitPos_k__BackingField = *(_QWORD *)&item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_1B68678(
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
  v39 = (struct System_Int32_array *)sub_1B68810(v37, int___TypeInfo);
  if ( v39 )
  {
    this->fields.equipSvtIdList = v39;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v41 = sub_1B68810(v38, int___TypeInfo);
    if ( v41 )
    {
      v42 = v41;
LABEL_10:
      sub_1B68678((ServantStatusBattleListViewItem_o *)p_equipSvtIdList, v42, v34, v35);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v43);
      return;
    }
  }
  else
  {
    sub_1B68BF0(v38);
  }
  v44 = (PartyOrganizationListViewItem_o *)sub_1B68BF0(v38);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v44, v45, v46);
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
  if ( (byte_4A04BDA & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_1B686D4(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1B686D4(&NetworkManager_TypeInfo, v8);
    byte_4A04BDA = 1;
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
  v10 = v4->fields.questRestrictionInfo;
  if ( !v10 )
    goto LABEL_31;
  questId = v10->fields.questId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v12 = v4->fields.questRestrictionInfo;
  if ( !v12 || !this )
    goto LABEL_31;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v12->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_30;
  v14 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0LL);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v14, 0LL) )
    goto LABEL_30;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_31;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_31;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_31:
    sub_1B68930(this, *(_QWORD *)&eventId);
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
  int32_t v43; // w3
  struct EventUpValInfo_o **p_eventUpValInfo; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  System_Collections_Generic_IEnumerable_T__o **p_eventUpValItemList; // x29
  int32_t v48; // w2
  int32_t v49; // w3
  int64_t Instance; // x0
  MethodInfo *v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  _BOOL4 isFollower; // w8
  struct QuestRestrictionInfo_o *v55; // x8
  Il2CppObject *v56; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v58; // x8
  Il2CppObject *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
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
  int32_t v72; // w3
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
  System_Func_object__int__o *_9__128_0; // x23
  Il2CppObject *v85; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  __int64 v91; // x8
  int64_t v92; // x22
  unsigned __int64 v93; // x20
  ServantEntity_o *v94; // x24
  int32_t v95; // w25
  EventPersonalMargeUpValInfo_o *v96; // x23
  int32_t v97; // w2
  int32_t v98; // w3
  __int64 v99; // x8
  int64_t v100; // x23
  unsigned __int64 v101; // x24
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  System_Collections_Generic_List_object__o *v106; // x0
  struct System_Int64_array *v107; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v111; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v112; // x23
  Il2CppClass *v113; // x24
  Il2CppClass *v114; // x25
  Il2CppObject *v115; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x24
  struct System_Int32_array *v120; // x8
  UserServantCollectionEntity_o *v121; // x24
  UserServantEntity_o *v122; // x25
  int32_t v123; // w2
  int32_t v124; // w3
  struct System_Int32_array *v125; // x8
  Il2CppObject *v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  struct System_Int64_array *v129; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_39941040; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_object__o *v137; // x23
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v139; // x0
  System_Func_object__int__o *_9__128_1; // x25
  Il2CppObject *v141; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0
  __int64 v147; // x8
  int64_t v148; // x24
  unsigned __int64 v149; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v151; // w27
  EventPersonalMargeUpValInfo_o *v152; // x25
  int32_t v153; // w2
  int32_t v154; // w3
  __int64 v155; // x8
  int64_t v156; // x25
  unsigned __int64 v157; // x26
  struct System_Object_array *items; // x8
  _QWORD *v159; // x9
  __int64 size; // x10
  Il2CppClass **v161; // x0
  System_Object_array *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  const MethodInfo *v165; // x2
  bool v166; // w1
  PartyOrganizationListViewItem_o *v167; // x0
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v169; // x23
  struct System_Int32_array *v170; // x28
  __int64 v171; // x8
  unsigned __int64 v172; // x29
  int32_t v173; // w26
  Il2CppObject *v174; // x0
  ServantEntity_o *v175; // x27
  EventPersonalMargeUpValInfo_o *v176; // x25
  int32_t v177; // w2
  int32_t v178; // w3
  __int64 v179; // x8
  int64_t v180; // x25
  unsigned __int64 v181; // x26
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  Il2CppClass **v185; // x0
  System_Object_array *v186; // x0
  int32_t v187; // w2
  int32_t v188; // w3
  System_Int32_array *v189; // x23
  EventUpValSetupInfo_o *v190; // x24
  int32_t v191; // w2
  int32_t v192; // w3
  UserServantEntity_o *v193; // x22
  EventUpValSetupInfo_o *v194; // x23
  struct QuestRestrictionInfo_o *v195; // x8
  _BOOL8 v196; // x0
  __int64 v197; // x1
  int32_t v198; // w2
  int32_t v199; // w3
  System_Collections_Generic_List_object__o *v200; // x0
  Il2CppObject *current; // x1
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  Il2CppClass **v205; // x8
  UserServantEntity_o *v206; // x23
  EventUpValSetupInfo_o *v207; // x22
  struct QuestRestrictionInfo_o *v208; // x8
  ServantEntity_o *v209; // x22
  EventPersonalMargeUpValInfo_o *v210; // x21
  System_Collections_Generic_List_object__o *v211; // x19
  System_Collections_Generic_IEnumerable_T__o *v212; // x0
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  System_Collections_Generic_List_Enumerator_object__o v214; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v215; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16

  if ( (byte_4A04BD9 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, equipIdList);
    sub_1B686D4(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B686D4(&DataManager_TypeInfo, v10);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B686D4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v13);
    sub_1B686D4(&Method_System_Linq_Enumerable_Distinct_int___, v14);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v15);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v19);
    sub_1B686D4(&EventPersonalMargeUpValInfo_TypeInfo, v20);
    sub_1B686D4(&EventUpValSetupInfo_TypeInfo, v21);
    sub_1B686D4(&System_Func_EventDropUpValInfo__int__TypeInfo, v22);
    sub_1B686D4(&int___TypeInfo, v23);
    sub_1B686D4(&long___TypeInfo, v24);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v25);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v26);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v27);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v28);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v29);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v30);
    sub_1B686D4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v31);
    sub_1B686D4(&NetworkManager_TypeInfo, v32);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B686D4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1B686D4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__, v36);
    sub_1B686D4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__, v37);
    sub_1B686D4(&PartyOrganizationListViewItem___c_TypeInfo, v38);
    sub_1B686D4(&UserServantEntity_TypeInfo, v39);
    byte_4A04BD9 = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  eventUpVallInfo = 0LL;
  entity = 0LL;
  memset(&v215, 0, sizeof(v215));
  this->fields.equipUserServantEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v42, v43);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValInfo, 0, v45, v46);
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, 0, v48, v49);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v69 = 0;
LABEL_190:
      sub_1B68678((ServantStatusBattleListViewItem_o *)p_equipIdList, v69, v52, v53);
      return;
    }
    if ( equipIdList )
    {
      v58 = this->fields.equipIdList;
      if ( v58 == equipIdList )
        goto LABEL_62;
      v59 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
      if ( v59 )
      {
        v56 = v59;
        v62 = (struct System_Int64_array *)sub_1B68810(v59, long___TypeInfo);
        if ( !v62 )
        {
          sub_1B68BF0(v56);
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
      v62 = (struct System_Int64_array *)sub_1B6877C(long___TypeInfo, (unsigned int)v79->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v62;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)v62, v60, v61);
    v58 = this->fields.equipIdList;
LABEL_62:
    if ( !v58 )
      goto LABEL_193;
    if ( !v58->max_length )
      goto LABEL_175;
    if ( v58->m_Items[0] >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_193;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v107 = this->fields.equipIdList;
      if ( !v107 )
        goto LABEL_193;
      if ( !v107->max_length )
        goto LABEL_175;
      if ( !Instance )
        goto LABEL_193;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.equipUserServantEntity,
                   v107->m_Items[0],
                   (const MethodInfo_30E46C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_193;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v218.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v218.fields.fakeValue = parent;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v218, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
          v111 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_193;
          v112 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v114 = v111->_1.declaringType;
          v113 = v111->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v219.fields.currentCryptoKey = v114;
          *(_QWORD *)&v219.fields.fakeValue = v113;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v219, 0LL);
          if ( !v112 )
            goto LABEL_193;
          v115 = DataMasterBase_object__object__int___GetEntity(
                   v112,
                   Instance,
                   (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          *p_equipServantEntity = (struct ServantEntity_o *)v115;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v115, v116, v117);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v120 = this->fields.equipSvtIdList;
        if ( !v120 )
          goto LABEL_193;
        if ( !v120->max_length )
          goto LABEL_175;
        if ( !Master_object )
          goto LABEL_193;
        Instance = UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &entity,
                     Instance,
                     v120->m_Items[1],
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v121 = entity;
          v122 = (UserServantEntity_o *)sub_1B68920(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_39926416(v122, v121, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v122;
          sub_1B68678(
            (ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity,
            (int32_t)v122,
            v123,
            v124);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
          v125 = this->fields.equipSvtIdList;
          if ( !v125 )
            goto LABEL_193;
          if ( !v125->max_length )
            goto LABEL_175;
          if ( !Instance )
            goto LABEL_193;
          v126 = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v125->m_Items[1],
                   (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.equipServantEntity = (struct ServantEntity_o *)v126;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v126, v127, v128);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_96:
          v129 = this->fields.equipIdList;
          if ( !v129 )
            goto LABEL_193;
          if ( !v129->max_length )
            goto LABEL_175;
          v129->m_Items[0] = 0LL;
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
    EquipList = PartyOrganizationListViewItem__GetEquipList(this, v51);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !userServantEntity )
      goto LABEL_193;
    EventUpVal_39941040 = UserServantEntity__getEventUpVal_39941040(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            EquipList,
                            *(_QWORD *)(Instance + 104),
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_39941040;
    if ( questRestrictionInfo )
    {
      v137 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v137,
        (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_193;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v139 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v139 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__128_1 = (System_Func_object__int__o *)v139->static_fields->__9__128_1;
      if ( !_9__128_1 )
      {
        if ( !v139->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v139);
          v139 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v141 = (Il2CppObject *)v139->static_fields->__9;
        _9__128_1 = (System_Func_object__int__o *)sub_1B68920(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__128_1,
          v141,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__128_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_1;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__128_1, (int32_t)_9__128_1, v143, v144);
      }
      v145 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__128_1,
                                                                    (const MethodInfo_2E79760 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v146 = System_Linq_Enumerable__Distinct_int_(
               v145,
               (const MethodInfo_2E68A30 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                            v146,
                            (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_193;
      v147 = *(_QWORD *)(Instance + 24);
      v148 = Instance;
      if ( (int)v147 >= 1 )
      {
        v149 = 0LL;
        while ( 1 )
        {
          if ( v149 >= (unsigned int)v147 )
            goto LABEL_175;
          servantEntity = this->fields.servantEntity;
          v151 = *(_DWORD *)(v148 + 4 * v149 + 32);
          v152 = (EventPersonalMargeUpValInfo_o *)sub_1B68920(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v152, v151, servantEntity, 0LL);
          Instance = (int64_t)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v152 )
            goto LABEL_193;
          EventPersonalMargeUpValInfo__Add(v152, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = EventPersonalMargeUpValInfo__IsEmpty(v152, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v152, 0LL);
            if ( !Instance )
              goto LABEL_193;
            v155 = *(_QWORD *)(Instance + 24);
            v156 = Instance;
            if ( (int)v155 >= 1 )
              break;
          }
LABEL_129:
          LODWORD(v147) = *(_DWORD *)(v148 + 24);
          if ( (__int64)++v149 >= (int)v147 )
            goto LABEL_130;
        }
        v157 = 0LL;
        while ( v157 < (unsigned int)v155 )
        {
          if ( !v137 )
            goto LABEL_193;
          v51 = *(MethodInfo **)(v156 + 32 + 8 * v157);
          items = v137->fields._items;
          v159 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v137->fields._version;
          if ( !items )
            goto LABEL_193;
          size = v137->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v137,
              (Il2CppObject *)v51,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
          }
          else
          {
            v161 = &items->obj.klass + size;
            v137->fields._size = size + 1;
            v161[4] = (Il2CppClass *)v51;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v161 + 4), (int32_t)v51, v153, v154);
          }
          LODWORD(v155) = *(_DWORD *)(v156 + 24);
          if ( (__int64)++v157 >= (int)v155 )
            goto LABEL_129;
        }
        goto LABEL_175;
      }
LABEL_130:
      if ( !v137 )
        goto LABEL_193;
      v162 = System_Collections_Generic_List_object___ToArray(
               v137,
               (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v162;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, (int32_t)v162, v163, v164);
      v166 = 1;
      v167 = this;
      goto LABEL_157;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v169 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v169,
      (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_193;
    v170 = (*p_setupInfo)->fields.eventIdList;
    if ( !v170 )
      goto LABEL_193;
    v171 = *(_QWORD *)&v170->max_length;
    if ( (int)v171 < 1 )
    {
LABEL_155:
      if ( !v169 )
        goto LABEL_193;
      v186 = System_Collections_Generic_List_object___ToArray(
               v169,
               (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v186;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, (int32_t)v186, v187, v188);
      v167 = this;
      v166 = 0;
LABEL_157:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v167, v166, v165);
      p_setupInfo = &this->fields.setupInfo;
LABEL_158:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v189 = (System_Int32_array *)sub_1B6877C(int___TypeInfo, 1LL);
        v190 = (EventUpValSetupInfo_o *)sub_1B68920(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_38655868(v190, v189, 0, 0, 0, 0LL);
        *p_setupInfo = v190;
        sub_1B68678((ServantStatusBattleListViewItem_o *)p_setupInfo, (int32_t)v190, v191, v192);
      }
      if ( this->fields.isEventUpVal )
      {
        v193 = this->fields.userServantEntity;
        v194 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v51);
        v195 = this->fields.questRestrictionInfo;
        if ( !v195 )
          goto LABEL_193;
        if ( !v193 )
          goto LABEL_193;
        Instance = UserServantEntity__GetBonusUpVal(
                     v193,
                     &eventUpVallInfo,
                     v194,
                     (System_Int64_array *)Instance,
                     v195->fields.questId,
                     v195->fields.questPhase,
                     0LL);
        if ( !eventUpVallInfo )
          goto LABEL_193;
        Instance = (int64_t)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_193;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v214,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v215 = v214;
        while ( 1 )
        {
          v196 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v215,
                   (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v196 )
            break;
          if ( !*p_eventUpValInfo )
            sub_1B68930(v196, v197);
          v200 = (System_Collections_Generic_List_object__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v200 )
            sub_1B68930(0LL, v197);
          current = v215.fields._current;
          v202 = v200->fields._items;
          v203 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v200->fields._version;
          if ( !v202 )
            sub_1B68930(v200, current);
          v204 = v200->fields._size;
          if ( (unsigned int)v204 >= v202->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v200,
              current,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
          }
          else
          {
            v205 = &v202->obj.klass + v204;
            v200->fields._size = v204 + 1;
            v205[4] = (Il2CppClass *)current;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v205 + 4), (int32_t)current, v198, v199);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v215,
          (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v206 = this->fields.userServantEntity;
        v207 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v51);
        v208 = this->fields.questRestrictionInfo;
        if ( !v208 || !v206 )
          goto LABEL_193;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v206,
                                      &this->fields.eventUpValInfo,
                                      v207,
                                      (System_Int64_array *)Instance,
                                      v208->fields.questId,
                                      v208->fields.questPhase,
                                      0LL);
      }
      v209 = this->fields.servantEntity;
      v210 = (EventPersonalMargeUpValInfo_o *)sub_1B68920(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v210, 0, v209, 0LL);
      Instance = (int64_t)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v210 )
        {
          EventPersonalMargeUpValInfo__Add(v210, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v210, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v210, 0LL);
            goto LABEL_189;
          }
          v211 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v211,
            (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v211 )
            goto LABEL_193;
          System_Collections_Generic_List_object___AddRange(
            v211,
            *p_eventUpValItemList,
            (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v212 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v210, 0LL);
          System_Collections_Generic_List_object___AddRange(
            v211,
            v212,
            (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v106 = v211;
LABEL_188:
          List = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                  v106,
                                                                  (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_189:
          v69 = (int)List;
          *p_eventUpValItemList = List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_190;
        }
      }
LABEL_193:
      sub_1B68930(Instance, v51);
    }
    v172 = 0LL;
    while ( 1 )
    {
      if ( v172 >= (unsigned int)v171 )
        goto LABEL_175;
      if ( !MasterData_object )
        goto LABEL_193;
      v173 = v170->m_Items[v172 + 1];
      v174 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v173,
               (const MethodInfo_30E44C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v174
        || (Instance = EventDetailEntity__HasFlag((EventDetailEntity_o *)v174, 0x800000000LL, 0LL), (Instance & 1) == 0) )
      {
        v175 = this->fields.servantEntity;
        v176 = (EventPersonalMargeUpValInfo_o *)sub_1B68920(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v176, v173, v175, 0LL);
        Instance = (int64_t)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_193;
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v176 )
          goto LABEL_193;
        EventPersonalMargeUpValInfo__Add(v176, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = EventPersonalMargeUpValInfo__IsEmpty(v176, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v176, 0LL);
          if ( !Instance )
            goto LABEL_193;
          v179 = *(_QWORD *)(Instance + 24);
          v180 = Instance;
          if ( (int)v179 >= 1 )
            break;
        }
      }
LABEL_154:
      LODWORD(v171) = v170->max_length;
      if ( (__int64)++v172 >= (int)v171 )
        goto LABEL_155;
    }
    v181 = 0LL;
    while ( v181 < (unsigned int)v179 )
    {
      if ( !v169 )
        goto LABEL_193;
      v51 = *(MethodInfo **)(v180 + 32 + 8 * v181);
      v182 = v169->fields._items;
      v183 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v169->fields._version;
      if ( !v182 )
        goto LABEL_193;
      v184 = v169->fields._size;
      if ( (unsigned int)v184 >= v182->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v169,
          (Il2CppObject *)v51,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
      }
      else
      {
        v185 = &v182->obj.klass + v184;
        v169->fields._size = v184 + 1;
        v185[4] = (Il2CppClass *)v51;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v185 + 4), (int32_t)v51, v177, v178);
      }
      LODWORD(v179) = *(_DWORD *)(v180 + 24);
      if ( (__int64)++v181 >= (int)v179 )
        goto LABEL_154;
    }
LABEL_175:
    sub_1B68938(Instance, v51);
  }
  this->fields.equipIdList = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v52, v53);
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
  Instance = FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v56, ReturnTypeByQuestId, 0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v64 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v64 )
    {
      Instance = FollowerInfo__GetReturnTypeByQuestId(v64->fields.questId, 0LL);
      v67 = Instance;
      if ( !followerInfo )
        goto LABEL_193;
    }
    else
    {
      v67 = 0;
      if ( !followerInfo )
        goto LABEL_193;
    }
    Instance = FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v67, 0LL);
    if ( !v66 )
      goto LABEL_193;
    v70 = DataMasterBase_object__object__int___GetEntity(
            v66,
            Instance,
            (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    *p_equipServantEntity = (struct ServantEntity_o *)v70;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v70, v71, v72);
  }
  v73 = this->fields.setupInfo;
  if ( v73 )
  {
    v74 = v73->fields.eventIdList;
    if ( !v74 )
      goto LABEL_193;
    if ( *(_QWORD *)&v74->max_length )
    {
      v75 = this->fields.followerInfo;
      v76 = this->fields.questRestrictionInfo;
      v77 = this->fields.followerIndex;
      if ( v76 )
      {
        Instance = FollowerInfo__GetReturnTypeByQuestId(v76->fields.questId, 0LL);
        v78 = Instance;
        if ( !v75 )
          goto LABEL_193;
      }
      else
      {
        v78 = 0;
        if ( !v75 )
          goto LABEL_193;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_38664960(
                                    v75,
                                    &this->fields.eventUpValInfo,
                                    v73,
                                    v77,
                                    v78,
                                    0LL);
      v80 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v80,
        (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
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
        _9__128_0 = (System_Func_object__int__o *)v83->static_fields->__9__128_0;
        if ( !_9__128_0 )
        {
          if ( !v83->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v83);
            v83 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v85 = (Il2CppObject *)v83->static_fields->__9;
          _9__128_0 = (System_Func_object__int__o *)sub_1B68920(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__128_0,
            v85,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__,
            0LL);
          v86 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v86->__9__128_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_0;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v86->__9__128_0, (int32_t)_9__128_0, v87, v88);
        }
        v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v82,
                                                                     (System_Func_TSource__TResult__o *)_9__128_0,
                                                                     (const MethodInfo_2E79760 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v90 = System_Linq_Enumerable__Distinct_int_(
                v89,
                (const MethodInfo_2E68A30 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                              v90,
                              (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v91 = *(_QWORD *)(Instance + 24);
          v92 = Instance;
          if ( (int)v91 >= 1 )
          {
            v93 = 0LL;
            while ( 1 )
            {
              if ( v93 >= (unsigned int)v91 )
                goto LABEL_175;
              v94 = this->fields.servantEntity;
              v95 = *(_DWORD *)(v92 + 4 * v93 + 32);
              v96 = (EventPersonalMargeUpValInfo_o *)sub_1B68920(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v96, v95, v94, 0LL);
              Instance = (int64_t)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_193;
              Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v96 )
                goto LABEL_193;
              EventPersonalMargeUpValInfo__Add(v96, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = EventPersonalMargeUpValInfo__IsEmpty(v96, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v96, 0LL);
                if ( !Instance )
                  goto LABEL_193;
                v99 = *(_QWORD *)(Instance + 24);
                v100 = Instance;
                if ( (int)v99 >= 1 )
                  break;
              }
LABEL_57:
              LODWORD(v91) = *(_DWORD *)(v92 + 24);
              if ( (__int64)++v93 >= (int)v91 )
                goto LABEL_58;
            }
            v101 = 0LL;
            while ( v101 < (unsigned int)v99 )
            {
              if ( !v80 )
                goto LABEL_193;
              v51 = *(MethodInfo **)(v100 + 32 + 8 * v101);
              v102 = v80->fields._items;
              v103 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v80->fields._version;
              if ( !v102 )
                goto LABEL_193;
              v104 = v80->fields._size;
              if ( (unsigned int)v104 >= v102->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v80,
                  (Il2CppObject *)v51,
                  *(const MethodInfo_34BC278 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
              }
              else
              {
                v105 = &v102->obj.klass + v104;
                v80->fields._size = v104 + 1;
                v105[4] = (Il2CppClass *)v51;
                sub_1B68678((ServantStatusBattleListViewItem_o *)(v105 + 4), (int32_t)v51, v97, v98);
              }
              LODWORD(v99) = *(_DWORD *)(v100 + 24);
              if ( (__int64)++v101 >= (int)v99 )
                goto LABEL_57;
            }
            goto LABEL_175;
          }
LABEL_58:
          if ( !v80 )
            goto LABEL_193;
          v106 = v80;
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
      sub_1B68938(this, userSvtId);
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIdList, 0, (int32_t)method, v3);
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem__Set_31837368(
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
  int32_t v11; // w3
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  struct UserServantEntity_o *v16; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  Il2CppObject *Entity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserServantEntity_o *v23; // x8
  UserServantEntity_o *v24; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v31; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A04BDC & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A04BDC = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_12;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v10,
    v11);
  this->fields.followerInfo = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v14, v15);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
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
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v32, 0LL);
  if ( !v17 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v17,
             (int32_t)Instance,
             (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v21, v22);
  v23 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&item->fields.classId;
  this->fields.frameType = item->fields.frameType;
  if ( !v23
    || (Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                     v23->fields.limitCount,
                                     0LL),
        v24 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v24) )
  {
LABEL_12:
    sub_1B68930(Instance, v9);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v24, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v26,
    v27);
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

  if ( (byte_4A04BDF & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, item);
    byte_4A04BDF = 1;
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
    sub_1B68930(p_userServantEntity, item);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_userServantEntity, (int32_t)v14, notChangeInitPos, (int32_t)method);
  v15 = item->fields.followerInfo;
  this->fields.followerInfo = v15;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)v15, v16, v17);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  v18 = item->fields.servantEntity;
  this->fields.servantEntity = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v18, v19, v20);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  v21 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v21;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, (int32_t)v21, v22, v23);
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
  v30 = sub_1B68810(v28, int___TypeInfo);
  if ( !v30
    || (*p_equipSvtIdList = (struct System_Int32_array *)v30,
        v31 = sub_1B68810(v29, int___TypeInfo),
        equipSvtIdList = v60,
        v32 = v31,
        !v31) )
  {
    sub_1B68BF0(v29);
LABEL_9:
    v32 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIdList, v32, v24, v25);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v33);
  v34 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v34;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v34, v35, v36);
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v39,
    v37,
    v38);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&item->fields.userServantEntity,
    (int32_t)userServantEntity,
    v40,
    v41);
  item->fields.followerInfo = followerInfo;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v42, v43);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v44, v45);
  *(_QWORD *)&item->fields.classId = v11;
  *(_QWORD *)&item->fields.frameType = v10;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1B68678(
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
  v52 = sub_1B68810(v50, int___TypeInfo);
  if ( !v52 || (*v27 = (struct System_Int32_array *)v52, v53 = sub_1B68810(v51, int___TypeInfo), v54 = v53, !v53) )
  {
    sub_1B68BF0(v51);
LABEL_17:
    v54 = 0;
    *v27 = 0LL;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)&item->fields.equipSvtIdList, v54, v48, v49);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v55);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B68678(
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
  sub_1B68678(
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
  if ( (byte_4A04BE0 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1B686D4(&int___TypeInfo, item);
    byte_4A04BE0 = 1;
  }
  p_equipSvtIdList = &v5->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)v5->fields.equipSvtIdList;
  if ( !item )
    sub_1B68930(this, item);
  equipIdList = v5->fields.equipIdList;
  v10 = &item->fields.equipSvtIdList;
  v9 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v9 )
    goto LABEL_9;
  v11 = System_Array__Clone(v9, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v12 = v11;
  v13 = sub_1B68810(v11, int___TypeInfo);
  if ( !v13 || (*p_equipSvtIdList = v13, v14 = sub_1B68810(v12, int___TypeInfo), v15 = v14, !v14) )
  {
    sub_1B68BF0(v12);
LABEL_9:
    v15 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v5->fields.equipSvtIdList, v15, (int32_t)method, v3);
  PartyOrganizationListViewItem__SetEquipStatus(v5, item->fields.equipIdList, v16);
  if ( !equipSvtIdList )
    goto LABEL_15;
  v19 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v19 )
    goto LABEL_15;
  v20 = v19;
  v21 = sub_1B68810(v19, int___TypeInfo);
  if ( !v21 || (*v10 = (struct System_Int32_array *)v21, v22 = sub_1B68810(v20, int___TypeInfo), v23 = v22, !v22) )
  {
    sub_1B68BF0(v20);
LABEL_15:
    v23 = 0;
    *v10 = 0LL;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)&item->fields.equipSvtIdList, v23, v17, v18);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        bool isQuestTarget,
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
  Il2CppObject *Master_object; // x20
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x23
  Il2CppObject *v24; // x22
  System_Collections_Generic_List_T__o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v31; // x25
  __int64 v32; // x26
  int32_t v33; // w1
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  struct UserServantEntity_o *v36; // x8
  UserServantMaster_o *v37; // x24
  __int64 v38; // x25
  __int64 v39; // x26
  __int64 v40; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v42; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w25
  int32_t questPhase; // w26
  int32_t eventId; // w24
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  int32_t v49; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v52; // w2
  const MethodInfo_380CFC0 *v53; // x5
  __int64 v54; // x0
  __int64 v55; // x1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_List_Enumerator_object__o item; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v64; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v65; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4A04BF9 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_EventCampaignMaster___, isQuestTarget);
    sub_1B686D4(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    sub_1B686D4(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v13);
    sub_1B686D4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v15);
    sub_1B686D4(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v16);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B686D4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1B686D4(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v19);
    byte_4A04BF9 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_47;
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[6].monitor,
                                                                         0LL);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventQuestMaster___);
  v25 = (System_Collections_Generic_List_T__o *)sub_1B68920(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v25,
    (const MethodInfo_346D828 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&item,
      FriendshipUpCampaigns,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v63 = item;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v63,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v26 )
        break;
      current = (EventCampaignEntity_o *)v63.fields._current;
      if ( !v63.fields._current )
        sub_1B68930(v26, v27);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v63.fields._current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1B68930(v26, v27);
        v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v66.fields.currentCryptoKey = v32;
        *(_QWORD *)&v66.fields.fakeValue = v31;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v66, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v33,
                (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v34 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        sub_1B68930(v34, v35);
      v37 = (UserServantMaster_o *)v34;
      v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = v39;
      *(_QWORD *)&v67.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v67, 0LL);
      if ( !v37 )
        sub_1B68930(v40, (unsigned int)v40);
      HeroineData = UserServantMaster__getHeroineData(v37, v40, 0LL);
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
        sub_1B68930(HeroineData, v42);
      questId = questRestrictionInfo->fields.questId;
      questPhase = questRestrictionInfo->fields.questPhase;
      eventId = current->fields.eventId;
      v47 = SingletonTemplate_object___get_Instance((const MethodInfo_36F7ABC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v47 )
        sub_1B68930(0LL, v48);
      if ( !v24 )
        sub_1B68930(v47, v48);
      if ( !EventQuestMaster__IsEventNotIncluded(
              (EventQuestMaster_o *)v24,
              eventId,
              questId,
              questPhase,
              7,
              (int64_t)v47[6].monitor,
              0LL) )
      {
LABEL_30:
        v49 = current->fields.eventId;
        FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
        calcType = current->fields.calcType;
        v52 = FriendshipBonusValue;
        item.fields._index = 0;
        item.fields._list = 0LL;
        *(_QWORD *)&v64.fields.Item1 = &item;
        v64.fields.Item3 = v49;
        System_ValueTuple_int__int__Int32Enum____ctor(
          v64,
          v52,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v53);
        if ( !v25 )
          sub_1B68930(v54, v55);
        *(_QWORD *)&v65.fields.Item1 = item.fields._list;
        v65.fields.Item3 = item.fields._index;
        items = v25->fields._items;
        v57 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
        ++v25->fields._version;
        if ( !items )
          sub_1B68930(v54, *(_QWORD *)&v65.fields.Item1);
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
            v25,
            v65,
            *(const MethodInfo_346E0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = size + 1;
          *((System_ValueTuple_int__int__Int32Enum__o *)items->m_Items + size) = v65;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v63,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v25 )
LABEL_47:
    sub_1B68930(Instance, v22);
  v59 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                   v25,
                                                                                   (const MethodInfo_346FC78 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v59;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v59,
    v60,
    v61);
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
  struct UserServantEntity_o **p_equipUserServantEntity; // x20
  Il2CppObject *Master_object; // x21
  __int64 Instance; // x0
  __int64 v13; // x1
  struct UserServantEntity_o *v14; // x8
  __int128 v15; // q1
  System_Int64_array *v16; // x22
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  Il2CppObject *Entity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v24; // x21
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  System_Int64_array *v27; // x22
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct UserServantEntity_o *v34; // x8
  ServantLimitMaster_o *v35; // x21
  __int64 v36; // x22
  __int64 v37; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  int32_t v39; // w20
  int32_t v40; // w8
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v42; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4A04BFA & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B686D4(&long___TypeInfo, v6);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A04BFA = 1;
  }
  if ( this->fields.equipUserServantEntity && !this->fields._IsDisappearEquip_k__BackingField )
  {
    p_equipUserServantEntity = &this->fields.equipUserServantEntity;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1B6877C(long___TypeInfo, 1LL);
    v14 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_54;
    v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
    v16 = (System_Int64_array *)Instance;
    *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v50.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v49 = v50;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v49, 0LL);
    if ( !v16 )
      goto LABEL_54;
    if ( !v16->max_length )
LABEL_55:
      sub_1B68938(Instance, v13);
    v16->m_Items[0] = Instance;
    if ( !Master_object )
      goto LABEL_54;
    if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)Master_object, v16, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
      v17 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_54;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v50.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v50;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v48, 0LL);
      if ( !v19 )
        goto LABEL_54;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 v19,
                 Instance,
                 (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      *p_equipUserServantEntity = (struct UserServantEntity_o *)Entity;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, (int32_t)Entity, v21, v22);
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
    v24 = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1B6877C(long___TypeInfo, 1LL);
    v25 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_54;
    v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
    v27 = (System_Int64_array *)Instance;
    *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v50.fields.fakeValue = v26;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v47 = v50;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v47, 0LL);
    if ( !v27 )
      goto LABEL_54;
    if ( v27->max_length )
    {
      v27->m_Items[0] = Instance;
      if ( v24 )
      {
        if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v24, v27, 0LL) )
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
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
          v28 = *p_userServantEntity;
          if ( *p_userServantEntity )
          {
            v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
            v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v50.fields.fakeValue = v29;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v46 = v50;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v46, 0LL);
            if ( v30 )
            {
              v31 = DataMasterBase_object__object__long___GetEntity(
                      v30,
                      Instance,
                      (const MethodInfo_30E466C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              *p_userServantEntity = (struct UserServantEntity_o *)v31;
              sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)v31, v32, v33);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                v34 = *p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  v35 = (ServantLimitMaster_o *)Instance;
                  v37 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
                  v36 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v51.fields.currentCryptoKey = v37;
                  *(_QWORD *)&v51.fields.fakeValue = v36;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v51, 0LL);
                  v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userServantEntity;
                  if ( *p_userServantEntity )
                  {
                    v39 = Instance;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v38[6], 0LL);
                    if ( v35 )
                    {
                      Instance = (__int64)ServantLimitMaster__GetEntity(v35, v39, Instance, 0LL);
                      if ( Instance )
                      {
                        v40 = *(_DWORD *)(Instance + 24);
                        Instance = (__int64)this->fields.userServantEntity;
                        this->fields.rarityId = v40;
                        if ( Instance )
                        {
                          Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
                          userServantEntity = this->fields.userServantEntity;
                          this->fields.frameType = Instance;
                          if ( userServantEntity )
                          {
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(
                                         userServantEntity->fields.limitCount,
                                         0LL);
                            v42 = this->fields.userServantEntity;
                            this->fields.svtLimitCount = Instance;
                            if ( v42 )
                            {
                              CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v42, 0LL);
                              this->fields.commandCodeIdList = CommandCodeIdList;
                              sub_1B68678(
                                (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
                                (int32_t)CommandCodeIdList,
                                v44,
                                v45);
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
      sub_1B68930(Instance, v13);
    }
    goto LABEL_55;
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

  if ( (byte_4A04BF8 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_1B686D4(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_4A04BF8 = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v7 = (PartyOrganizationListViewItem_o *)sub_1B68BF0(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_31838332(v7, v8, v9);
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
      sub_1B68930(this, item);
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

  if ( (byte_4A04BF4 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_1B686D4(&LocalizationManager_TypeInfo, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A04BF4 = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v12);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1B68930(Instance, v10);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A04569 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    byte_4A04569 = 1;
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

  if ( (byte_4A04BE9 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A04BE9 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v11, 0LL);
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

  if ( (byte_4A04BEA & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04BEA = 1;
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

  if ( (byte_4A04BE8 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A04BE8 = 1;
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

  if ( (byte_4A04BE7 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A04BE7 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v6, 0LL);
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

  if ( (byte_4A04BF7 & 1) == 0 )
  {
    sub_1B686D4(&BalanceConfig_TypeInfo, method);
    byte_4A04BF7 = 1;
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
      sub_1B68930(Atk, v11);
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
      sub_1B68930(Hp, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t maxLimitCount; // w20
  const MethodInfo *v13; // x1
  int64_t ServantLeader; // x0
  __int64 v15; // x1
  Il2CppObject *Master_object; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  struct ServantEntity_o *v21; // x8
  ServantLimitImageMaster_o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A04BE5 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&NetworkManager_TypeInfo, v5);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_1/*""*/, v7);
    byte_4A04BE5 = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v10;
    *(_QWORD *)&v27.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v27, 0LL);
  }
  else
  {
    maxLimitCount = -1;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v13);
    if ( !ServantLeader )
      goto LABEL_37;
    maxLimitCount = *(_DWORD *)(ServantLeader + 64);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_37;
  v18 = ServantLeader;
  v20 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v20;
  *(_QWORD *)&v28.fields.fakeValue = v19;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v28, 0LL);
  if ( !Master_object )
LABEL_37:
    sub_1B68930(ServantLeader, v15);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    (UserServantCollectionMaster_o *)Master_object,
                    &entity,
                    v18,
                    ServantLeader,
                    0LL);
  if ( (ServantLeader & 1) == 0 )
  {
    ServantLeader = (int64_t)this->fields.servantEntity;
    if ( ServantLeader )
    {
      v25 = -1;
      return ServantEntity__getName((ServantEntity_o *)ServantLeader, v25, -1, 0LL);
    }
    goto LABEL_37;
  }
  if ( !entity )
    goto LABEL_37;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_25:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v21 = this->fields.servantEntity;
  if ( !v21 )
    goto LABEL_37;
  v22 = (ServantLimitImageMaster_o *)ServantLeader;
  v24 = *(_QWORD *)&v21->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v24;
  *(_QWORD *)&v29.fields.fakeValue = v23;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v29, 0LL);
  if ( !v22 )
    goto LABEL_37;
  ServantLeader = ServantLimitImageMaster__GetServantLimitCountSealAfter(v22, ServantLeader, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_37;
  v25 = ServantLeader;
  ServantLeader = (int64_t)this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, v25, -1, 0LL);
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

  if ( (byte_4A04BE4 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A04BE4 = 1;
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
  __int64 v3; // x1
  FollowerInfo_o *followerInfo; // x0
  void *IsNpc; // x0
  struct FollowerInfo_o *v6; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t nameLimitCount; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4A04BE6 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B686D4(&StringLiteral_18984/*"error"*/, v3);
    byte_4A04BE6 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    IsNpc = (void *)FollowerInfo__get_IsNpc(followerInfo, 0LL);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      v6 = this->fields.followerInfo;
      if ( v6 )
        return v6->fields.userName;
      goto LABEL_19;
    }
  }
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_18984/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v12.fields.currentCryptoKey = v10;
    *(_QWORD *)&v12.fields.fakeValue = v9;
    nameLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v12, 0LL);
  }
  else
  {
    nameLimitCount = this->fields.nameLimitCount;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    IsNpc = PartyOrganizationListViewItem__get_ServantLeader(this, method);
    if ( !IsNpc )
      goto LABEL_19;
    nameLimitCount = *((_DWORD *)IsNpc + 16);
  }
  IsNpc = this->fields.servantEntity;
  if ( !IsNpc )
LABEL_19:
    sub_1B68930(IsNpc, method);
  return ServantEntity__getName((ServantEntity_o *)IsNpc, nameLimitCount, -1, 0LL);
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
  sub_1B68678(
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
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A04CB1 & 1) == 0 )
  {
    sub_1B686D4(&PartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4A04CB1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1B68930(this, 0LL);
  return drop->fields.eventId;
}