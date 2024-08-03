void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31764352(
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
  Il2CppObject *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x2
  int v39; // w9

  if ( (byte_49F83D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_49F83D8 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v21, v22);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v23,
    v24);
  this->fields.followerInfo = followerInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v25, v26);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v32, v33);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_39340080(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v34, v35);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v36, v37);
  if ( initPos )
    v39 = initPos;
  else
    v39 = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v39;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31768112(
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
  FollowerInfo_o *followerInfo; // x24
  int32_t v42; // w2
  int32_t v43; // w0
  int32_t v44; // w2
  int32_t v45; // w3
  FollowerInfo_o *v46; // x24
  struct QuestRestrictionInfo_o *v47; // x8
  int32_t followerIndex; // w27
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x22
  int32_t v50; // w2
  Il2CppObject *v51; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  struct ServantEntity_o *v55; // x8
  ServantLimitMaster_o *v56; // x27
  __int64 v57; // x24
  __int64 v58; // x28
  FollowerInfo_o *v59; // x24
  struct QuestRestrictionInfo_o *v60; // x8
  int32_t v61; // w29
  int32_t v62; // w28
  int32_t v63; // w2
  FollowerInfo_o *v64; // x23
  FollowerInfo_o *v65; // x24
  struct QuestRestrictionInfo_o *v66; // x8
  int32_t v67; // w27
  int32_t v68; // w2
  FollowerInfo_o *v69; // x24
  struct QuestRestrictionInfo_o *v70; // x8
  int32_t v71; // w27
  int32_t v72; // w2
  FollowerInfo_o *v73; // x27
  struct QuestRestrictionInfo_o *v74; // x8
  int32_t v75; // w24
  int32_t v76; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  const MethodInfo *v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  const MethodInfo *v83; // x1
  QuestRestrictionInfo_o *v84; // x27
  __int64 v85; // x24
  __int64 v86; // x28
  int32_t v87; // w23
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x1
  int32_t v90; // w24
  int32_t DispLimitCount; // w24
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  int32_t v94; // w28
  int32_t InitPos_k__BackingField; // w29
  int32_t v96; // w0
  int v97; // w1
  __int64 v98; // x1
  int v99; // w8
  int64_t v100; // x23
  unsigned int v101; // w28
  __int64 v102; // x25
  QuestRestrictionInfo_o *v103; // x24
  __int64 v104; // x26
  __int64 v105; // x27
  int32_t v106; // w26
  int32_t v107; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v109; // x8
  Il2CppObject *Master_object; // x23
  struct ServantEntity_o *v111; // x8
  UserEventDataLostEntity_o *v112; // x23
  __int64 v113; // x24
  __int64 v114; // x25
  struct ServantEntity_o *v115; // x8
  char v116; // w22
  UserEventDataLostEntity_o *v117; // x23
  __int64 v118; // x24
  __int64 v119; // x25
  const MethodInfo *v120; // x1
  struct QuestRestrictionInfo_o *v121; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v123; // x23
  const MethodInfo *v124; // x1
  const MethodInfo *v125; // x2
  const MethodInfo *v126; // x1
  const MethodInfo *v127; // x1
  int32_t v128; // w21
  __int64 v129; // x24
  __int64 v130; // x25
  int32_t v131; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v133; // x1
  const MethodInfo *v134; // x2
  QuestRestrictionInfo_o *v135; // x8
  const MethodInfo *v136; // x1
  bool IsNotClassBoard; // w20
  int32_t v138; // [xsp+Ch] [xbp-84h]
  _BOOL4 v139; // [xsp+14h] [xbp-7Ch]
  FollowerInfo_o *v140; // [xsp+18h] [xbp-78h]
  QuestPhaseEntity_o *v141; // [xsp+20h] [xbp-70h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16

  v11 = isFixNpc;
  v19 = isFixNpc;
  if ( (byte_49F83D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v24);
    sub_1B640C8(&DataManager_TypeInfo, v25);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_1B640C8(&NetworkManager_TypeInfo, v27);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_49F83D6 = 1;
  }
  v141 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v30, v31);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v33,
    v34);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v35,
    v36);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)follower, v38, v39);
  this->fields.isFixNpc = v19;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v42 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_133;
  }
  else
  {
    v42 = 0;
    if ( !followerInfo )
      goto LABEL_133;
  }
  v43 = FollowerInfo__getIndex(followerInfo, followerClassId, v42, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v44, v45);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v46 = this->fields.followerInfo;
  v47 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( v47 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v47->fields.questId, 0LL);
    v50 = ReturnTypeByQuestId;
    if ( !v46 )
      goto LABEL_133;
  }
  else
  {
    v50 = 0;
    if ( !v46 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v46, followerIndex, v50, 0LL);
  if ( !v49 )
    goto LABEL_133;
  v51 = DataMasterBase_object__object__int___GetEntity(
          v49,
          ReturnTypeByQuestId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v51;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v51, v53, v54);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v140 = follower;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v55 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_133;
  v139 = v11;
  v56 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v58 = *(_QWORD *)&v55->fields.id.fields.currentCryptoKey;
  v57 = *(_QWORD *)&v55->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v143.fields.currentCryptoKey = v58;
  *(_QWORD *)&v143.fields.fakeValue = v57;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v143, 0LL);
  v59 = this->fields.followerInfo;
  v60 = this->fields.questRestrictionInfo;
  v61 = this->fields.followerIndex;
  v62 = ReturnTypeByQuestId;
  if ( v60 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v60->fields.questId, 0LL);
    v63 = ReturnTypeByQuestId;
    if ( !v59 )
      goto LABEL_133;
  }
  else
  {
    v63 = 0;
    if ( !v59 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v59, v61, v63, 0LL);
  if ( !v56 )
    goto LABEL_133;
  ReturnTypeByQuestId = (int64_t)ServantLimitMaster__GetEntity(v56, v62, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_133;
  v64 = v140;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  v65 = this->fields.followerInfo;
  v66 = this->fields.questRestrictionInfo;
  v67 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v66 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v66->fields.questId, 0LL);
    v68 = ReturnTypeByQuestId;
    if ( !v65 )
      goto LABEL_133;
  }
  else
  {
    v68 = 0;
    if ( !v65 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v65, v67, v68, 0LL);
  v69 = this->fields.followerInfo;
  v70 = this->fields.questRestrictionInfo;
  v71 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v70 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v70->fields.questId, 0LL);
    v72 = ReturnTypeByQuestId;
    if ( !v69 )
      goto LABEL_133;
  }
  else
  {
    v72 = 0;
    if ( !v69 )
      goto LABEL_133;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v69, v71, v72, 0LL);
  v73 = this->fields.followerInfo;
  v74 = this->fields.questRestrictionInfo;
  v75 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v74 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v74->fields.questId, 0LL);
    v76 = ReturnTypeByQuestId;
    if ( !v73 )
      goto LABEL_133;
  }
  else
  {
    v76 = 0;
    if ( !v73 )
      goto LABEL_133;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v73, v75, v76, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v78,
    v79);
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v80) )
    goto LABEL_47;
  ReturnTypeByQuestId = (int64_t)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_133;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v84 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v83);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v86 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v85 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v144.fields.currentCryptoKey = v86;
    *(_QWORD *)&v144.fields.fakeValue = v85;
    v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v144, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v88);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v90 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v89);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v138 = v90;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v92);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v94 = *(_DWORD *)(ReturnTypeByQuestId + 68);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v96 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v93);
    this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestriction_40101764(
                                        v84,
                                        &this->fields.isQuestRestrictionWhole,
                                        v87,
                                        v138,
                                        DispLimitCount,
                                        v94,
                                        InitPos_k__BackingField,
                                        v96,
                                        0LL);
    v64 = v140;
  }
  else
  {
LABEL_47:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v97 = initPos;
  else
    v97 = index + 1;
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v97;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, v97, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !v64 )
      goto LABEL_133;
    this->fields.npcFollowerSvtId = v64->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    ReturnTypeByQuestId = (int64_t)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v99 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v100 = ReturnTypeByQuestId;
    if ( v99 >= 1 )
    {
      v101 = 0;
      while ( 1 )
      {
        if ( v101 >= v99 )
          sub_1B6432C(ReturnTypeByQuestId, v98);
        v102 = *(_QWORD *)(v100 + 8LL * (int)v101 + 32);
        if ( !v102 )
          goto LABEL_133;
        v103 = *p_questRestrictionInfo;
        v105 = *(_QWORD *)(v102 + 80);
        v104 = *(_QWORD *)(v102 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v145.fields.currentCryptoKey = v105;
        *(_QWORD *)&v145.fields.fakeValue = v104;
        v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v145, 0LL);
        v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v102 + 96),
                 0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v102, 0, 0LL);
        if ( !v103 )
          goto LABEL_133;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v103,
                                v106,
                                v107,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v99 = *(_DWORD *)(v100 + 24);
        if ( (int)++v101 >= v99 )
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
    if ( v139 && IsNpcMulitipleOrOnly )
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
      if ( !v64 )
        goto LABEL_133;
      this->fields.npcFollowerSvtId = v64->fields.npcFollowerSvtId;
    }
    else
    {
      this->fields.isFixMultipleNpc = 0;
    }
  }
LABEL_81:
  v109 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v109 && v109->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v111 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v112 = entity;
      v114 = *(_QWORD *)&v111->fields.id.fields.currentCryptoKey;
      v113 = *(_QWORD *)&v111->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v146.fields.currentCryptoKey = v114;
      *(_QWORD *)&v146.fields.fakeValue = v113;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v146, 0LL);
      if ( !v112 )
        goto LABEL_133;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v112, ReturnTypeByQuestId, 0LL);
      v115 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_133;
      v116 = ReturnTypeByQuestId;
      v117 = entity;
      v119 = *(_QWORD *)&v115->fields.id.fields.currentCryptoKey;
      v118 = *(_QWORD *)&v115->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v147.fields.currentCryptoKey = v119;
      *(_QWORD *)&v147.fields.fakeValue = v118;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v147, 0LL);
      if ( !v117 )
        goto LABEL_133;
      if ( (v116 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v117,
                                                         ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v117, ReturnTypeByQuestId, 0LL) )
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v81, v82);
  v121 = this->fields.questRestrictionInfo;
  if ( v121 )
  {
    eventId = v121->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_133;
    v123 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_133;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v124) )
        {
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v126);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v128 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v128;
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v127);
          if ( !ReturnTypeByQuestId )
            goto LABEL_133;
          v130 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v129 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v148.fields.currentCryptoKey = v130;
          *(_QWORD *)&v148.fields.fakeValue = v129;
          v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v148, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v123, eventId, v128, v131, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v125);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v120) )
    goto LABEL_128;
  ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v133);
  if ( !ReturnTypeByQuestId )
    goto LABEL_133;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v135 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v141,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (int64_t)v141;
          if ( !v141 )
            goto LABEL_133;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v141, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v136);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v135) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_132;
        }
      }
LABEL_133:
      sub_1B64324(ReturnTypeByQuestId);
    }
  }
  else
  {
LABEL_128:
    LOBYTE(v135) = 0;
  }
LABEL_132:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v135;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v134);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31795752(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x26
  __int64 v49; // x27
  __int64 v50; // x28
  Il2CppObject *v51; // x0
  struct ServantEntity_o **p_servantEntity; // x26
  int32_t v53; // w2
  int32_t v54; // w3
  ServantLimitMaster_o *v55; // x27
  int32_t v56; // w28
  int32_t v57; // w2
  int32_t v58; // w3
  ServantLimitEntity_o *v59; // x27
  int v60; // w9
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x24
  struct System_Int32_array *v63; // x0
  struct System_Int32_array **p_equipSvtIdList; // x25
  __int64 v65; // x0
  int32_t v66; // w1
  struct UserServantEntity_o *v67; // x8
  __int64 v68; // x24
  __int64 v69; // x25
  UserServantEntity_o *v70; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w2
  int32_t v75; // w3
  QuestRestrictionInfo_o *v76; // x24
  struct UserServantEntity_o *v77; // x8
  __int64 v78; // x25
  __int64 v79; // x26
  int32_t v80; // w25
  int32_t v81; // w26
  const MethodInfo *v82; // x1
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
  __int64 v118; // x1
  int v119; // w8
  __int64 v120; // x23
  unsigned int v121; // w19
  __int64 v122; // x25
  QuestRestrictionInfo_o *v123; // x24
  __int64 v124; // x26
  __int64 v125; // x27
  int32_t v126; // w26
  int32_t v127; // w27
  int32_t v128; // w22
  EventServantPointRankMaster_o *v129; // x23
  const MethodInfo *v130; // x2
  UserServantEntity_o *v131; // x8
  __int128 v132; // q0
  UserEventServantPointMaster_o *v133; // x24
  int64_t v134; // x25
  int32_t SvtPoint_k__BackingField; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v138; // x2
  struct UserServantEntity_o *v139; // x8
  __int128 v140; // q0
  Il2CppObject *v141; // x22
  UserServantEntity_o *v142; // x8
  __int128 v143; // q0
  System_Int64_array *v144; // x23
  PartyOrganizationListViewItem_o *v145; // x0
  const MethodInfo *v146; // x1
  System_Int64_array *equipIdLista; // [xsp+10h] [xbp-110h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+80h] [xbp-A0h]
  UserEventServantPointEntity_o *v152; // [xsp+A8h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+B0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_49F83D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v24);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v25);
    sub_1B640C8(&DataManager_TypeInfo, v26);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1B640C8(&int___TypeInfo, v28);
    sub_1B640C8(&long___TypeInfo, v29);
    sub_1B640C8(&NetworkManager_TypeInfo, v30);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_49F83D5 = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  v152 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v35,
    v36);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v38,
    v39);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v40,
    v41);
  this->fields.followerInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v42, v43);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v44, v45);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  equipIdLista = equipIdList;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = *(_QWORD *)&v47[5].fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v155.fields.currentCryptoKey = v50;
  *(_QWORD *)&v155.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v155, 0LL);
  if ( !v48 )
    goto LABEL_140;
  v51 = DataMasterBase_object__object__int___GetEntity(
          v48,
          Instance,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v51;
  p_servantEntity = &this->fields.servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v51, v53, v54);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_140;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v55 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_140;
  v56 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userServantEntity)[6], 0LL);
  if ( !v55 )
    goto LABEL_140;
  v59 = ServantLimitMaster__GetEntity(v55, v56, Instance, 0LL);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_equipSvtIdList, v66, v57, v58);
    if ( !*p_servantEntity )
      goto LABEL_140;
    this->fields.classId = (*p_servantEntity)->fields.classId;
    if ( !v59 )
      goto LABEL_140;
    Instance = (__int64)this->fields.userServantEntity;
    this->fields.rarityId = v59->fields.rarity;
    if ( !Instance )
      goto LABEL_140;
    Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
    v67 = this->fields.userServantEntity;
    this->fields.frameType = Instance;
    if ( !v67 )
      goto LABEL_140;
    v69 = *(_QWORD *)&v67->fields.limitCount.fields.currentCryptoKey;
    v68 = *(_QWORD *)&v67->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v156.fields.currentCryptoKey = v69;
    *(_QWORD *)&v156.fields.fakeValue = v68;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v156, 0LL);
    v70 = this->fields.userServantEntity;
    this->fields.svtLimitCount = Instance;
    if ( !v70 )
      goto LABEL_140;
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v70, 0LL);
    this->fields.commandCodeIdList = CommandCodeIdList;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
      (int32_t)CommandCodeIdList,
      v72,
      v73);
    v76 = this->fields.questRestrictionInfo;
    if ( v76 )
    {
      v77 = this->fields.userServantEntity;
      if ( !v77 )
        goto LABEL_140;
      v79 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
      v78 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v157.fields.currentCryptoKey = v79;
      *(_QWORD *)&v157.fields.fakeValue = v78;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v157, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v80 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_userServantEntity)[6], 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v81 = Instance;
      Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      currentCryptoKey = (*p_userServantEntity)[16].fields.currentCryptoKey;
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      v85 = Instance;
      v86 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v82);
      Instance = QuestRestrictionInfo__IsRestriction_40101764(
                   v76,
                   &this->fields.isQuestRestrictionWhole,
                   v80,
                   v81,
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
        *(_QWORD *)&v158.fields.currentCryptoKey = v90;
        *(_QWORD *)&v158.fields.fakeValue = v89;
        v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v158, 0LL);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v74, v75);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
      *(_QWORD *)&v159.fields.currentCryptoKey = v99;
      *(_QWORD *)&v159.fields.fakeValue = v98;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v159, 0LL);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_140;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v103 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v104 = (UserEventAlloutBattleMaster_o *)Instance;
      v106 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v160.fields.currentCryptoKey = v106;
      *(_QWORD *)&v160.fields.fakeValue = v105;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v160, 0LL);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
        *(_QWORD *)&v161.fields.currentCryptoKey = v111;
        *(_QWORD *)&v161.fields.fakeValue = v110;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v161, 0LL);
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
        *(_QWORD *)&v162.fields.currentCryptoKey = v116;
        *(_QWORD *)&v162.fields.fakeValue = v115;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v162, 0LL);
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
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_140;
        Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_140;
        v119 = *(_DWORD *)(Instance + 24);
        v120 = Instance;
        if ( v119 >= 1 )
        {
          v121 = 0;
          while ( 1 )
          {
            if ( v121 >= v119 )
              goto LABEL_141;
            v122 = *(_QWORD *)(v120 + 8LL * (int)v121 + 32);
            if ( !v122 )
              goto LABEL_140;
            v123 = *p_questRestrictionInfo;
            v125 = *(_QWORD *)(v122 + 80);
            v124 = *(_QWORD *)(v122 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v163.fields.currentCryptoKey = v125;
            *(_QWORD *)&v163.fields.fakeValue = v124;
            v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v163, 0LL);
            v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v122 + 96),
                     0LL);
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v122, 0, 0LL);
            if ( !v123 )
              goto LABEL_140;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v123,
                         v126,
                         v127,
                         Instance,
                         this->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            if ( (Instance & 1) == 0 )
              break;
            v119 = *(_DWORD *)(v120 + 24);
            if ( (int)++v121 >= v119 )
              goto LABEL_104;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_104:
    if ( !*p_questRestrictionInfo )
      goto LABEL_140;
    v128 = (*p_questRestrictionInfo)->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_140;
    v129 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v128, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v131 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v132 = *(_OWORD *)&v131->fields.userId.fields.fakeValue;
      v133 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v131->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v151.fields.fakeValue = v132;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v150 = v151;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v150, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v134 = Instance;
      Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
      if ( !v133 )
        goto LABEL_140;
      if ( UserEventServantPointMaster__TryGetEntity(v133, &v152, v134, v128, Instance, 0LL) )
      {
        Instance = (__int64)v152;
        if ( !v152 )
          goto LABEL_140;
        this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v152, 0LL);
      }
      Instance = (__int64)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v129, v128, SvtPoint_k__BackingField, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v128, v138);
    }
    PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 1, v130);
    v139 = this->fields.userServantEntity;
    if ( !v139 )
      goto LABEL_140;
    v140 = *(_OWORD *)&v139->fields.id.fields.fakeValue;
    *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v139->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v151.fields.fakeValue = v140;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v149 = v151;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v149, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v141 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
      Instance = sub_1B64170(long___TypeInfo, 1LL);
      v142 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_140;
      v143 = *(_OWORD *)&v142->fields.id.fields.fakeValue;
      v144 = (System_Int64_array *)Instance;
      *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v142->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v151.fields.fakeValue = v143;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v148 = v151;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v148, 0LL);
      if ( !v144 )
        goto LABEL_140;
      if ( !v144->max_length )
LABEL_141:
        sub_1B6432C(Instance, v118);
      v144->m_Items[0] = Instance;
      if ( !v141 )
        goto LABEL_140;
      if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v141, v144, 0LL) )
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
    sub_1B64324(Instance);
  }
  v62 = v61;
  v63 = (struct System_Int32_array *)sub_1B64204(v61, int___TypeInfo);
  if ( v63 )
  {
    this->fields.equipSvtIdList = v63;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v65 = sub_1B64204(v62, int___TypeInfo);
    if ( v65 )
    {
      v66 = v65;
      goto LABEL_21;
    }
  }
  else
  {
    sub_1B645E4(v62);
  }
  v145 = (PartyOrganizationListViewItem_o *)sub_1B645E4(v62);
  PartyOrganizationListViewItem__GeRestrictionTargetType(v145, v146);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_31804960(
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
  if ( (byte_49F83D7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_49F83D7 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v20, v21);
  this->fields.followerInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v24,
    v25);
  this->fields.isFollower = v15;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.servantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v28, v29);
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
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, v32, 0LL) )
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
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
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
        sub_1B6432C(Instance, v34);
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
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v49, 0LL);
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38->fields.limitCount, 0LL);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v30, v31);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v44, v45);
  v47 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !v47 )
    goto LABEL_37;
  eventId = v47->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_39:
    sub_1B64324(Instance);
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
  const MethodInfo *v15; // x1
  struct UserServantEntity_o *v16; // x8
  int32_t lv; // w26
  int32_t v18; // w27
  int32_t v19; // w25
  int32_t v20; // w0
  struct UserServantEntity_o *v21; // x8
  QuestRestrictionInfo_o *v22; // x22
  __int64 v23; // x23
  __int64 v24; // x24
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w23
  int32_t v27; // w24
  const MethodInfo *v28; // x1
  QuestRestrictionInfo_o *v29; // x22
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t v32; // w23
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  int32_t v35; // w24
  int32_t DispLimitCount; // w25
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  int32_t v39; // w26
  int32_t InitPos_k__BackingField; // w27
  int32_t v41; // w0
  const MethodInfo *v42; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v44; // x23
  __int64 v45; // x24
  int32_t v46; // w23
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  int32_t v49; // w24
  UserServantEntity_o *v50; // x8
  bool IsUniqueIndividualityRestriction_39877124; // w0
  const MethodInfo *v52; // x1
  QuestRestrictionInfo_o *v53; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr00_16
  int32_t v55; // w0
  int32_t v56; // w27
  int32_t v57; // w28
  const MethodInfo *v58; // x1
  int32_t DispImageLimitCount; // w0
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *v61; // x22
  int32_t followerIndex; // w24
  int32_t v63; // w5
  FollowerInfo_o *v64; // x23
  struct QuestRestrictionInfo_o *v65; // x22
  int32_t v66; // w24
  int32_t v67; // w5
  bool IsUniqueIndividualityRestriction_38602364; // w0
  const MethodInfo *v69; // x1
  QuestRestrictionInfo_o *v70; // x22
  ServantLeaderInfo_o *v71; // x0
  bool IsFixedSupportPosition_40106532; // w0
  QuestRestrictionInfo_o *v73; // x8
  const MethodInfo *v74; // x1
  QuestRestrictionInfo_o *v75; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v77; // w0
  int32_t svtLimitCount; // w22
  int32_t v79; // w23
  const MethodInfo *v80; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_49F83E2 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_49F83E2 = 1;
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
    if ( ((unsigned __int8)ServantLeader & 1) == 0 && (v29 = this->fields.questRestrictionInfo) != 0LL )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v28);
      if ( !ServantLeader )
        goto LABEL_72;
      v31 = *((_QWORD *)ServantLeader + 6);
      v30 = *((_QWORD *)ServantLeader + 7);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v83.fields.currentCryptoKey = v31;
      *(_QWORD *)&v83.fields.fakeValue = v30;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v83, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v33);
      if ( !ServantLeader )
        goto LABEL_72;
      v35 = *((_DWORD *)ServantLeader + 16);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v34);
      if ( !ServantLeader )
        goto LABEL_72;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v37);
      if ( !ServantLeader )
        goto LABEL_72;
      v39 = *((_DWORD *)ServantLeader + 17);
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      v41 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v38);
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_40101764(
                                v29,
                                &this->fields.isQuestRestrictionWhole,
                                v32,
                                v35,
                                DispLimitCount,
                                v39,
                                InitPos_k__BackingField,
                                v41,
                                0LL);
      this->fields.isQuestRestriction = (unsigned __int8)ServantLeader & 1;
      if ( ((unsigned __int8)ServantLeader & 1) == 0 )
      {
        ServantLeader = this->fields.questRestrictionInfo;
        if ( !ServantLeader )
          goto LABEL_72;
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
                                  (QuestRestrictionInfo_o *)ServantLeader,
                                  this->fields._InitPos_k__BackingField,
                                  0LL);
        if ( ((unsigned __int8)ServantLeader & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v42);
          if ( !ServantLeader )
            goto LABEL_72;
          v45 = *((_QWORD *)ServantLeader + 6);
          v44 = *((_QWORD *)ServantLeader + 7);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v84.fields.currentCryptoKey = v45;
          *(_QWORD *)&v84.fields.fakeValue = v44;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v84, 0LL);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v47);
          if ( !ServantLeader )
            goto LABEL_72;
          v49 = *((_DWORD *)ServantLeader + 16);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v48);
          if ( !ServantLeader )
            goto LABEL_72;
          ServantLeader = (void *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_72;
          ServantLeader = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                    questRestrictionInfo,
                                    v46,
                                    v49,
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
    v61 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v61 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v61->fields.questId, 0LL);
      v63 = (int)ServantLeader;
      if ( !followerInfo )
        goto LABEL_72;
    }
    else
    {
      v63 = 0;
      if ( !followerInfo )
        goto LABEL_72;
    }
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_38602212(
                              followerInfo,
                              v61,
                              followerIndex,
                              partyItem,
                              num,
                              v63,
                              0LL);
    v64 = this->fields.followerInfo;
    v65 = this->fields.questRestrictionInfo;
    v66 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
    if ( v65 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v65->fields.questId, 0LL);
      v67 = (int)ServantLeader;
      if ( !v64 )
        goto LABEL_72;
    }
    else
    {
      v67 = 0;
      if ( !v64 )
        goto LABEL_72;
    }
    IsUniqueIndividualityRestriction_38602364 = FollowerInfo__IsUniqueIndividualityRestriction_38602364(
                                                  v64,
                                                  v65,
                                                  v66,
                                                  partyItem,
                                                  num,
                                                  v67,
                                                  0LL);
    v70 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_38602364;
    if ( v70 )
    {
      v71 = PartyOrganizationListViewItem__get_ServantLeader(this, v69);
      IsFixedSupportPosition_40106532 = QuestRestrictionInfo__IsFixedSupportPosition_40106532(v70, num, v71, 0LL);
      v73 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_40106532;
      if ( v73 )
      {
        ServantLeader = (void *)QuestRestrictionInfo__IsUseOldMaster(v73, 0LL);
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
          v75 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, v74);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v79 = v77;
          ServantLeader = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v80);
          if ( v75 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v75,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v79,
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
  *(_QWORD *)&v81.fields.currentCryptoKey = v10;
  *(_QWORD *)&v81.fields.fakeValue = v9;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v81, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v16 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_72:
    sub_1B64324(ServantLeader);
  }
  lv = v16->fields.lv;
  v18 = this->fields._InitPos_k__BackingField;
  v19 = (int)ServantLeader;
  v20 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v15);
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_40101764(
                            v8,
                            &this->fields.isQuestRestrictionWhole,
                            v13,
                            v14,
                            v19,
                            lv,
                            v18,
                            v20,
                            0LL);
  this->fields.isQuestRestriction = (unsigned __int8)ServantLeader & 1;
  if ( ((unsigned __int8)ServantLeader & 1) == 0 )
  {
    v21 = this->fields.userServantEntity;
    if ( v21 )
    {
      v22 = this->fields.questRestrictionInfo;
      v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v82.fields.currentCryptoKey = v24;
      *(_QWORD *)&v82.fields.fakeValue = v23;
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v82, 0LL);
      v25 = this->fields.userServantEntity;
      if ( v25 )
      {
        v26 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                  v25->fields.limitCount,
                                  0LL);
        if ( this->fields.userServantEntity )
        {
          v27 = (int)ServantLeader;
          ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
          if ( v22 )
          {
            this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v22,
                                                v26,
                                                v27,
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
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_39876748(
                            (UserServantEntity_o *)ServantLeader,
                            this->fields.questRestrictionInfo,
                            partyItem,
                            num,
                            -1,
                            0LL);
  v50 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
  if ( !v50 )
    goto LABEL_72;
  IsUniqueIndividualityRestriction_39877124 = UserServantEntity__IsUniqueIndividualityRestriction_39877124(
                                                v50,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v53 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_39877124;
  if ( v53 )
  {
    v54 = PartyOrganizationListViewItem__get_SvtId(this, v52);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
    v56 = this->fields.svtLimitCount;
    v57 = v55;
    DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v58);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v53,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v57,
      v56,
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
    sub_1B6432C(this, equipIdList);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v2, v3);
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

  if ( (byte_49F83D9 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_49F83D9 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_1B64314(PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx, method);
  *(_DWORD *)(v6 + 304) = -1;
  *(_DWORD *)(v6 + 360) = -1;
  ListViewItem___ctor_40370988((ListViewItem_o *)v6, index, 0LL);
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
  if ( (byte_49F83E3 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1B640C8(&BalanceConfig_TypeInfo, item);
    byte_49F83E3 = 1;
  }
  if ( !item )
LABEL_26:
    sub_1B64324(this);
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
      sub_1B6432C(this, item);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, 0, v2, v3);
  this->fields.followerInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v5, v6);
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v7, v8);
  this->fields.servantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, 0, v9, v10);
  *(_OWORD *)&this->fields.classId = xmmword_BA4170;
  this->fields.commandCodeIdList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, 0, v11, v12);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, 0, v13, v14);
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
    sub_1B64324(0LL);
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

  if ( (byte_49F83F2 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&UINarrowFigureRender_TypeInfo, v3);
    byte_49F83F2 = 1;
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
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v6;
  *(_QWORD *)&v21.fields.fakeValue = v5;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_20:
    sub_1B64324(SvtId);
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
  UserServantEntity_o *userServantEntity; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v10; // x0

  if ( (byte_49F83F4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F83F4 = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_21:
        sub_1B64324(userServantEntity);
      }
    }
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B64324(v5);
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

  if ( (byte_49F83F1 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49F83F1 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 3LL);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0LL )
LABEL_15:
    sub_1B64324(result);
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
        sub_1B6432C(result, v5);
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

  if ( (byte_49F83F3 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49F83F3 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B64324(v5);
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

  if ( (byte_49F83E4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&long___TypeInfo, v3);
    byte_49F83E4 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v6 = result;
      result = (System_Int64_array *)sub_1B64204(result, long___TypeInfo);
      if ( !result )
      {
        v8 = (PartyOrganizationListViewItem_o *)sub_1B645E4(v6);
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
    return (System_Int64_array *)sub_1B64170(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)eventUpValInfo, (int32_t)v4, (int32_t)method, v3);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_49F83F0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F83F0 = 1;
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

  if ( (byte_49F83EF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F83EF = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1B64324(v5);
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

  if ( (byte_49F83F6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F83F6 = 1;
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

  if ( (byte_49F83F7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F83F7 = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1B64324(v5);
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
  int32_t InitPos_k__BackingField; // w1

  if ( (byte_49F83EC & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10232/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49F83EC = 1;
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
    sub_1B64324(v6);
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
    v6 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10232/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v9 = (System_String_o *)v6;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_61375396(v9, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v6 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
      InitPos_k__BackingField = 0;
    else
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    if ( !v6 )
      goto LABEL_32;
    return QuestRestrictionInfo__GetRestrictionMessage(v6, InitPos_k__BackingField, 0LL);
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

  if ( (byte_49F83EE & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1B640C8(&StringLiteral_44/*"\n\n"*/, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    sub_1B640C8(&StringLiteral_10268/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v7);
    byte_49F83EE = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10268/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_61386656(
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

  if ( (byte_49F83ED & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F83ED = 1;
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
  QuestRestrictionInfo_o *v5; // x0
  struct QuestRestrictionInfo_o *v6; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 1;
  if ( QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL) )
    return !this->fields.isServantNumRestriction
        && !this->fields.isFixMultipleNpcRestriction
        && (!this->fields.isFixMultipleNpc
         || (v6 = this->fields.questRestrictionInfo) != 0LL && v6->fields.isNpcEditablePos)
        && !this->fields.isMyServantOrNpcRestriction;
  v5 = this->fields.questRestrictionInfo;
  if ( !v5 )
    sub_1B64324(0LL);
  return QuestRestrictionInfo__IsEditablePos(v5, this->fields._InitPos_k__BackingField, 0LL);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(
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
  int32_t v6; // w20
  UserServantEntity_o *v7; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_40115904(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v6 = v5;
  v7 = this->fields.userServantEntity;
  if ( !v7 )
    sub_1B64324(0LL);
  return UserServantEntity__getDispLimitCount(v7, 0, 0LL) != v6;
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_49F83DE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_49F83DE = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v13.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v13;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v12, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v10 = Entity;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        sub_1B64324(0LL);
      Entity = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)&this->fields.userServantEntity,
                 v10,
                 (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
    sub_1B64324(this);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, (int32_t)method, v3);
  PartyOrganizationListViewItem__Modify_31807744(this, item, v7);
}


void __fastcall PartyOrganizationListViewItem__Modify_31807744(
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
  if ( (byte_49F83DF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1B640C8(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v8);
    byte_49F83DF = 1;
  }
  if ( !item )
    goto LABEL_21;
  userServantEntity = item->fields.userServantEntity;
  v5->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &v5->fields.userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v5->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v37,
                                              0LL);
  if ( !v12 )
    goto LABEL_21;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)this,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v5->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.servantEntity, (int32_t)Entity, v16, v17);
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v5->fields.userServantEntity;
  *(_QWORD *)&v5->fields.classId = *(_QWORD *)&item->fields.classId;
  v5->fields.frameType = item->fields.frameType;
  if ( !v18 )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v18[6],
                                              0LL);
  v19 = v5->fields.userServantEntity;
  v5->fields.svtLimitCount = (int)this;
  if ( !v19 )
    goto LABEL_21;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v19, 0LL);
  v5->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.commandCodeIdList, (int32_t)CommandCodeIdList, v21, v22);
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
    sub_1B64324(this);
  v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v28;
  *(_QWORD *)&v38.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38, 0LL);
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
  sub_1B6406C(
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.followerInfo, 0, (int32_t)v33, v34);
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
    sub_1B6432C(this, userSvtId);
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
  int32_t v6; // w2
  int32_t v7; // w3
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct ServantEntity_o *servantEntity; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Int32_array *commandCodeIdList; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x21
  struct System_Int32_array *v38; // x0
  struct System_Int32_array **p_equipSvtIdList; // x22
  __int64 v40; // x0
  int32_t v41; // w1
  const MethodInfo *v42; // x2
  PartyOrganizationListViewItem_o *v43; // x0
  System_Int32_array *v44; // x1
  const MethodInfo *v45; // x2

  if ( (byte_49F83DC & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, item);
    byte_49F83DC = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1B64324(v5);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v6, v7);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)followerInfo, v10, v11);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v13, v14);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v16,
    v17);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)friendPointCampaignEntityList,
    v19,
    v20);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v22, v23);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)commandCodeIdList,
    v25,
    v26);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)FriendshipUpValTuple_k__BackingField,
    v28,
    v29);
  *(_QWORD *)&this->fields._InitPos_k__BackingField = *(_QWORD *)&item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)WaveEnemyClassIds_k__BackingField,
    v31,
    v32);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v36 = System_Array__Clone(equipSvtIdList, 0LL)) == 0LL )
  {
    v41 = 0;
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_10;
  }
  v37 = v36;
  v38 = (struct System_Int32_array *)sub_1B64204(v36, int___TypeInfo);
  if ( v38 )
  {
    this->fields.equipSvtIdList = v38;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    v40 = sub_1B64204(v37, int___TypeInfo);
    if ( v40 )
    {
      v41 = v40;
LABEL_10:
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_equipSvtIdList, v41, v33, v34);
      PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v42);
      return;
    }
  }
  else
  {
    sub_1B645E4(v37);
  }
  v43 = (PartyOrganizationListViewItem_o *)sub_1B645E4(v37);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v43, v44, v45);
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
  if ( (byte_49F83DB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1B640C8(&NetworkManager_TypeInfo, v8);
    byte_49F83DB = 1;
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_31;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_31;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_31:
    sub_1B64324(this);
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
  const MethodInfo *v51; // x1
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
  __int64 v80; // x1
  __int64 v81; // x2
  System_Collections_Generic_List_object__o *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x22
  PartyOrganizationListViewItem___c_c *v87; // x0
  System_Func_object__int__o *_9__128_0; // x23
  Il2CppObject *v89; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  __int64 v95; // x2
  __int64 v96; // x8
  int64_t v97; // x22
  unsigned __int64 v98; // x20
  ServantEntity_o *v99; // x24
  int32_t v100; // w25
  EventPersonalMargeUpValInfo_o *v101; // x23
  int32_t v102; // w3
  __int64 v103; // x8
  int64_t v104; // x23
  unsigned __int64 v105; // x24
  Il2CppObject *v106; // x1
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  System_Collections_Generic_List_object__o *v111; // x0
  struct System_Int64_array *v112; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v116; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v117; // x23
  Il2CppClass *v118; // x24
  Il2CppClass *v119; // x25
  Il2CppObject *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x24
  struct System_Int32_array *v125; // x8
  __int64 v126; // x2
  UserServantCollectionEntity_o *v127; // x24
  UserServantEntity_o *v128; // x25
  int32_t v129; // w2
  int32_t v130; // w3
  struct System_Int32_array *v131; // x8
  Il2CppObject *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  struct System_Int64_array *v135; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_39873648; // w0
  __int64 v142; // x1
  __int64 v143; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_object__o *v145; // x23
  __int64 v146; // x1
  __int64 v147; // x2
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v149; // x0
  System_Func_object__int__o *_9__128_1; // x25
  Il2CppObject *v151; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v156; // x0
  __int64 v157; // x2
  __int64 v158; // x8
  int64_t v159; // x24
  unsigned __int64 v160; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v162; // w27
  EventPersonalMargeUpValInfo_o *v163; // x25
  int32_t v164; // w3
  __int64 v165; // x8
  int64_t v166; // x25
  unsigned __int64 v167; // x26
  Il2CppObject *v168; // x1
  struct System_Object_array *items; // x8
  _QWORD *v170; // x9
  __int64 size; // x10
  Il2CppClass **v172; // x0
  System_Object_array *v173; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  const MethodInfo *v176; // x2
  bool v177; // w1
  PartyOrganizationListViewItem_o *v178; // x0
  Il2CppObject *MasterData_object; // x24
  __int64 v180; // x1
  __int64 v181; // x2
  System_Collections_Generic_List_object__o *v182; // x23
  struct System_Int32_array *v183; // x28
  __int64 v184; // x8
  unsigned __int64 v185; // x29
  int32_t v186; // w26
  Il2CppObject *v187; // x0
  __int64 v188; // x2
  ServantEntity_o *v189; // x27
  EventPersonalMargeUpValInfo_o *v190; // x25
  int32_t v191; // w2
  int32_t v192; // w3
  __int64 v193; // x8
  int64_t v194; // x25
  unsigned __int64 v195; // x26
  Il2CppObject *v196; // x1
  struct System_Object_array *v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  Il2CppClass **v200; // x0
  System_Object_array *v201; // x0
  int32_t v202; // w2
  int32_t v203; // w3
  System_Int32_array *v204; // x23
  __int64 v205; // x1
  __int64 v206; // x2
  EventUpValSetupInfo_o *v207; // x24
  int32_t v208; // w2
  int32_t v209; // w3
  UserServantEntity_o *v210; // x22
  EventUpValSetupInfo_o *v211; // x23
  struct QuestRestrictionInfo_o *v212; // x8
  _BOOL8 v213; // x0
  int32_t v214; // w2
  int32_t v215; // w3
  System_Collections_Generic_List_object__o *v216; // x0
  Il2CppObject *current; // x1
  struct System_Object_array *v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  Il2CppClass **v221; // x8
  __int64 v222; // x1
  __int64 v223; // x2
  UserServantEntity_o *v224; // x23
  EventUpValSetupInfo_o *v225; // x22
  struct QuestRestrictionInfo_o *v226; // x8
  ServantEntity_o *v227; // x22
  EventPersonalMargeUpValInfo_o *v228; // x21
  __int64 v229; // x1
  __int64 v230; // x2
  System_Collections_Generic_List_object__o *v231; // x19
  System_Collections_Generic_IEnumerable_T__o *v232; // x0
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  System_Collections_Generic_List_Enumerator_object__o v234; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v235; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v238; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v239; // 0:x0.16

  if ( (byte_49F83DA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, equipIdList);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v14);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v19);
    sub_1B640C8(&EventPersonalMargeUpValInfo_TypeInfo, v20);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v21);
    sub_1B640C8(&System_Func_EventDropUpValInfo__int__TypeInfo, v22);
    sub_1B640C8(&int___TypeInfo, v23);
    sub_1B640C8(&long___TypeInfo, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v30);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v31);
    sub_1B640C8(&NetworkManager_TypeInfo, v32);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1B640C8(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__, v36);
    sub_1B640C8(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__, v37);
    sub_1B640C8(&PartyOrganizationListViewItem___c_TypeInfo, v38);
    sub_1B640C8(&UserServantEntity_TypeInfo, v39);
    byte_49F83DA = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  eventUpVallInfo = 0LL;
  entity = 0LL;
  memset(&v235, 0, sizeof(v235));
  this->fields.equipUserServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v42, v43);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValInfo, 0, v45, v46);
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, 0, v48, v49);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_equipIdList, v69, v52, v53);
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
        v62 = (struct System_Int64_array *)sub_1B64204(v59, long___TypeInfo);
        if ( !v62 )
        {
          sub_1B645E4(v56);
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
      v62 = (struct System_Int64_array *)sub_1B64170(long___TypeInfo, (unsigned int)v79->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v62;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, (int32_t)v62, v60, v61);
    v58 = this->fields.equipIdList;
LABEL_62:
    if ( !v58 )
      goto LABEL_193;
    if ( !v58->max_length )
      goto LABEL_175;
    if ( v58->m_Items[0] >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_193;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      v112 = this->fields.equipIdList;
      if ( !v112 )
        goto LABEL_193;
      if ( !v112->max_length )
        goto LABEL_175;
      if ( !Instance )
        goto LABEL_193;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.equipUserServantEntity,
                   v112->m_Items[0],
                   (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_193;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v238.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v238.fields.fakeValue = parent;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v238, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
          v116 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_193;
          v117 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v119 = v116->_1.declaringType;
          v118 = v116->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v239.fields.currentCryptoKey = v119;
          *(_QWORD *)&v239.fields.fakeValue = v118;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v239, 0LL);
          if ( !v117 )
            goto LABEL_193;
          v120 = DataMasterBase_object__object__int___GetEntity(
                   v117,
                   Instance,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          *p_equipServantEntity = (struct ServantEntity_o *)v120;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v120, v121, v122);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v125 = this->fields.equipSvtIdList;
        if ( !v125 )
          goto LABEL_193;
        if ( !v125->max_length )
          goto LABEL_175;
        if ( !Master_object )
          goto LABEL_193;
        Instance = UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &entity,
                     Instance,
                     v125->m_Items[1],
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v127 = entity;
          v128 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v51, v126);
          UserServantEntity___ctor_39859024(v128, v127, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v128;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity,
            (int32_t)v128,
            v129,
            v130);
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
          v131 = this->fields.equipSvtIdList;
          if ( !v131 )
            goto LABEL_193;
          if ( !v131->max_length )
            goto LABEL_175;
          if ( !Instance )
            goto LABEL_193;
          v132 = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v131->m_Items[1],
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.equipServantEntity = (struct ServantEntity_o *)v132;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v132, v133, v134);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_96:
          v135 = this->fields.equipIdList;
          if ( !v135 )
            goto LABEL_193;
          if ( !v135->max_length )
            goto LABEL_175;
          v135->m_Items[0] = 0LL;
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
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !userServantEntity )
      goto LABEL_193;
    EventUpVal_39873648 = UserServantEntity__getEventUpVal_39873648(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            EquipList,
                            *(_QWORD *)(Instance + 104),
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_39873648;
    if ( questRestrictionInfo )
    {
      v145 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                            System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                            v142,
                                                            v143);
      System_Collections_Generic_List_object____ctor(
        v145,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_193;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v149 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v149 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__128_1 = (System_Func_object__int__o *)v149->static_fields->__9__128_1;
      if ( !_9__128_1 )
      {
        if ( !v149->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v149);
          v149 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v151 = (Il2CppObject *)v149->static_fields->__9;
        _9__128_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventDropUpValInfo__int__TypeInfo, v146, v147);
        System_Func_object__int____ctor(
          _9__128_1,
          v151,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__128_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__128_1, (int32_t)_9__128_1, v153, v154);
      }
      v155 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__128_1,
                                                                    (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v156 = System_Linq_Enumerable__Distinct_int_(
               v155,
               (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                            v156,
                            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_193;
      v158 = *(_QWORD *)(Instance + 24);
      v159 = Instance;
      if ( (int)v158 >= 1 )
      {
        v160 = 0LL;
        while ( 1 )
        {
          if ( v160 >= (unsigned int)v158 )
            goto LABEL_175;
          servantEntity = this->fields.servantEntity;
          v162 = *(_DWORD *)(v159 + 4 * v160 + 32);
          v163 = (EventPersonalMargeUpValInfo_o *)sub_1B64314(EventPersonalMargeUpValInfo_TypeInfo, v51, v157);
          EventPersonalMargeUpValInfo___ctor(v163, v162, servantEntity, 0LL);
          Instance = (int64_t)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_193;
          Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v163 )
            goto LABEL_193;
          EventPersonalMargeUpValInfo__Add(v163, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = EventPersonalMargeUpValInfo__IsEmpty(v163, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v163, 0LL);
            if ( !Instance )
              goto LABEL_193;
            v165 = *(_QWORD *)(Instance + 24);
            v166 = Instance;
            if ( (int)v165 >= 1 )
              break;
          }
LABEL_129:
          LODWORD(v158) = *(_DWORD *)(v159 + 24);
          if ( (__int64)++v160 >= (int)v158 )
            goto LABEL_130;
        }
        v167 = 0LL;
        while ( v167 < (unsigned int)v165 )
        {
          if ( !v145 )
            goto LABEL_193;
          v168 = *(Il2CppObject **)(v166 + 32 + 8 * v167);
          items = v145->fields._items;
          v170 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v145->fields._version;
          if ( !items )
            goto LABEL_193;
          size = v145->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v145,
              v168,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
          }
          else
          {
            v172 = &items->obj.klass + size;
            v145->fields._size = size + 1;
            v172[4] = (Il2CppClass *)v168;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v172 + 4), (int32_t)v168, v157, v164);
          }
          LODWORD(v165) = *(_DWORD *)(v166 + 24);
          if ( (__int64)++v167 >= (int)v165 )
            goto LABEL_129;
        }
        goto LABEL_175;
      }
LABEL_130:
      if ( !v145 )
        goto LABEL_193;
      v173 = System_Collections_Generic_List_object___ToArray(
               v145,
               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v173;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, (int32_t)v173, v174, v175);
      v177 = 1;
      v178 = this;
      goto LABEL_157;
    }
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v182 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                          v180,
                                                          v181);
    System_Collections_Generic_List_object____ctor(
      v182,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_193;
    v183 = (*p_setupInfo)->fields.eventIdList;
    if ( !v183 )
      goto LABEL_193;
    v184 = *(_QWORD *)&v183->max_length;
    if ( (int)v184 < 1 )
    {
LABEL_155:
      if ( !v182 )
        goto LABEL_193;
      v201 = System_Collections_Generic_List_object___ToArray(
               v182,
               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)v201;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValItemList, (int32_t)v201, v202, v203);
      v178 = this;
      v177 = 0;
LABEL_157:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v178, v177, v176);
      p_setupInfo = &this->fields.setupInfo;
LABEL_158:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v204 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
        v207 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v205, v206);
        EventUpValSetupInfo___ctor_38592760(v207, v204, 0, 0, 0, 0LL);
        *p_setupInfo = v207;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_setupInfo, (int32_t)v207, v208, v209);
      }
      if ( this->fields.isEventUpVal )
      {
        v210 = this->fields.userServantEntity;
        v211 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v51);
        v212 = this->fields.questRestrictionInfo;
        if ( !v212 )
          goto LABEL_193;
        if ( !v210 )
          goto LABEL_193;
        Instance = UserServantEntity__GetBonusUpVal(
                     v210,
                     &eventUpVallInfo,
                     v211,
                     (System_Int64_array *)Instance,
                     v212->fields.questId,
                     v212->fields.questPhase,
                     0LL);
        if ( !eventUpVallInfo )
          goto LABEL_193;
        Instance = (int64_t)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_193;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v234,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v235 = v234;
        while ( 1 )
        {
          v213 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v235,
                   (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v213 )
            break;
          if ( !*p_eventUpValInfo )
            sub_1B64324(v213);
          v216 = (System_Collections_Generic_List_object__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v216 )
            sub_1B64324(0LL);
          current = v235.fields._current;
          v218 = v216->fields._items;
          v219 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v216->fields._version;
          if ( !v218 )
            sub_1B64324(v216);
          v220 = v216->fields._size;
          if ( (unsigned int)v220 >= v218->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v216,
              current,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
          }
          else
          {
            v221 = &v218->obj.klass + v220;
            v216->fields._size = v220 + 1;
            v221[4] = (Il2CppClass *)current;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v221 + 4), (int32_t)current, v214, v215);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v235,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v224 = this->fields.userServantEntity;
        v225 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v51);
        v226 = this->fields.questRestrictionInfo;
        if ( !v226 || !v224 )
          goto LABEL_193;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v224,
                                      &this->fields.eventUpValInfo,
                                      v225,
                                      (System_Int64_array *)Instance,
                                      v226->fields.questId,
                                      v226->fields.questPhase,
                                      0LL);
      }
      v227 = this->fields.servantEntity;
      v228 = (EventPersonalMargeUpValInfo_o *)sub_1B64314(EventPersonalMargeUpValInfo_TypeInfo, v222, v223);
      EventPersonalMargeUpValInfo___ctor(v228, 0, v227, 0LL);
      Instance = (int64_t)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v228 )
        {
          EventPersonalMargeUpValInfo__Add(v228, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v228, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v228, 0LL);
            goto LABEL_189;
          }
          v231 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                v229,
                                                                v230);
          System_Collections_Generic_List_object____ctor(
            v231,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v231 )
            goto LABEL_193;
          System_Collections_Generic_List_object___AddRange(
            v231,
            *p_eventUpValItemList,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v232 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v228, 0LL);
          System_Collections_Generic_List_object___AddRange(
            v231,
            v232,
            (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v111 = v231;
LABEL_188:
          List = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                  v111,
                                                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_189:
          v69 = (int)List;
          *p_eventUpValItemList = List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_190;
        }
      }
LABEL_193:
      sub_1B64324(Instance);
    }
    v185 = 0LL;
    while ( 1 )
    {
      if ( v185 >= (unsigned int)v184 )
        goto LABEL_175;
      if ( !MasterData_object )
        goto LABEL_193;
      v186 = v183->m_Items[v185 + 1];
      v187 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v186,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v187
        || (Instance = EventDetailEntity__HasFlag((EventDetailEntity_o *)v187, 0x800000000LL, 0LL), (Instance & 1) == 0) )
      {
        v189 = this->fields.servantEntity;
        v190 = (EventPersonalMargeUpValInfo_o *)sub_1B64314(EventPersonalMargeUpValInfo_TypeInfo, v51, v188);
        EventPersonalMargeUpValInfo___ctor(v190, v186, v189, 0LL);
        Instance = (int64_t)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_193;
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v190 )
          goto LABEL_193;
        EventPersonalMargeUpValInfo__Add(v190, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = EventPersonalMargeUpValInfo__IsEmpty(v190, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v190, 0LL);
          if ( !Instance )
            goto LABEL_193;
          v193 = *(_QWORD *)(Instance + 24);
          v194 = Instance;
          if ( (int)v193 >= 1 )
            break;
        }
      }
LABEL_154:
      LODWORD(v184) = v183->max_length;
      if ( (__int64)++v185 >= (int)v184 )
        goto LABEL_155;
    }
    v195 = 0LL;
    while ( v195 < (unsigned int)v193 )
    {
      if ( !v182 )
        goto LABEL_193;
      v196 = *(Il2CppObject **)(v194 + 32 + 8 * v195);
      v197 = v182->fields._items;
      v198 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v182->fields._version;
      if ( !v197 )
        goto LABEL_193;
      v199 = v182->fields._size;
      if ( (unsigned int)v199 >= v197->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v182,
          v196,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
      }
      else
      {
        v200 = &v197->obj.klass + v199;
        v182->fields._size = v199 + 1;
        v200[4] = (Il2CppClass *)v196;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v200 + 4), (int32_t)v196, v191, v192);
      }
      LODWORD(v193) = *(_DWORD *)(v194 + 24);
      if ( (__int64)++v195 >= (int)v193 )
        goto LABEL_154;
    }
LABEL_175:
    sub_1B6432C(Instance, v51);
  }
  this->fields.equipIdList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v52, v53);
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
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_193;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    *p_equipServantEntity = (struct ServantEntity_o *)v70;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, (int32_t)v70, v71, v72);
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
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_38601852(
                                    v75,
                                    &this->fields.eventUpValInfo,
                                    v73,
                                    v77,
                                    v78,
                                    0LL);
      v82 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                           v80,
                                                           v81);
      System_Collections_Generic_List_object____ctor(
        v82,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v86 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v87 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v87 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__128_0 = (System_Func_object__int__o *)v87->static_fields->__9__128_0;
        if ( !_9__128_0 )
        {
          if ( !v87->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v87);
            v87 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v89 = (Il2CppObject *)v87->static_fields->__9;
          _9__128_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventDropUpValInfo__int__TypeInfo, v83, v84);
          System_Func_object__int____ctor(
            _9__128_0,
            v89,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__,
            0LL);
          v90 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v90->__9__128_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v90->__9__128_0, (int32_t)_9__128_0, v91, v92);
        }
        v93 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v86,
                                                                     (System_Func_TSource__TResult__o *)_9__128_0,
                                                                     (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v94 = System_Linq_Enumerable__Distinct_int_(
                v93,
                (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                              v94,
                              (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v96 = *(_QWORD *)(Instance + 24);
          v97 = Instance;
          if ( (int)v96 >= 1 )
          {
            v98 = 0LL;
            while ( 1 )
            {
              if ( v98 >= (unsigned int)v96 )
                goto LABEL_175;
              v99 = this->fields.servantEntity;
              v100 = *(_DWORD *)(v97 + 4 * v98 + 32);
              v101 = (EventPersonalMargeUpValInfo_o *)sub_1B64314(EventPersonalMargeUpValInfo_TypeInfo, v51, v95);
              EventPersonalMargeUpValInfo___ctor(v101, v100, v99, 0LL);
              Instance = (int64_t)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_193;
              Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v101 )
                goto LABEL_193;
              EventPersonalMargeUpValInfo__Add(v101, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = EventPersonalMargeUpValInfo__IsEmpty(v101, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v101, 0LL);
                if ( !Instance )
                  goto LABEL_193;
                v103 = *(_QWORD *)(Instance + 24);
                v104 = Instance;
                if ( (int)v103 >= 1 )
                  break;
              }
LABEL_57:
              LODWORD(v96) = *(_DWORD *)(v97 + 24);
              if ( (__int64)++v98 >= (int)v96 )
                goto LABEL_58;
            }
            v105 = 0LL;
            while ( v105 < (unsigned int)v103 )
            {
              if ( !v82 )
                goto LABEL_193;
              v106 = *(Il2CppObject **)(v104 + 32 + 8 * v105);
              v107 = v82->fields._items;
              v108 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v82->fields._version;
              if ( !v107 )
                goto LABEL_193;
              v109 = v82->fields._size;
              if ( (unsigned int)v109 >= v107->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v82,
                  v106,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
              }
              else
              {
                v110 = &v107->obj.klass + v109;
                v82->fields._size = v109 + 1;
                v110[4] = (Il2CppClass *)v106;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v106, v95, v102);
              }
              LODWORD(v103) = *(_DWORD *)(v104 + 24);
              if ( (__int64)++v105 >= (int)v103 )
                goto LABEL_57;
            }
            goto LABEL_175;
          }
LABEL_58:
          if ( !v82 )
            goto LABEL_193;
          v111 = v82;
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
      sub_1B6432C(this, userSvtId);
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIdList, 0, (int32_t)method, v3);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)classIds,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem__Set_31806780(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct UserServantEntity_o *v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  Il2CppObject *Entity; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct UserServantEntity_o *v22; // x8
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v30; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_49F83DD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49F83DD = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_12;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v9, v10);
  this->fields.followerInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, 0, v13, v14);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_12;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v18;
  *(_QWORD *)&v31.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
  if ( !v16 )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v16,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v20, v21);
  v22 = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&item->fields.classId;
  this->fields.frameType = item->fields.frameType;
  if ( !v22
    || (Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                     v22->fields.limitCount,
                                     0LL),
        v23 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v23) )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v23, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList,
    (int32_t)CommandCodeIdList,
    v25,
    v26);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v30);
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

  if ( (byte_49F83E0 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, item);
    byte_49F83E0 = 1;
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
    sub_1B64324(p_userServantEntity);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_userServantEntity, (int32_t)v14, notChangeInitPos, (int32_t)method);
  v15 = item->fields.followerInfo;
  this->fields.followerInfo = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.followerInfo, (int32_t)v15, v16, v17);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  v18 = item->fields.servantEntity;
  this->fields.servantEntity = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v18, v19, v20);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  v21 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandCodeIdList, (int32_t)v21, v22, v23);
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
  v30 = sub_1B64204(v28, int___TypeInfo);
  if ( !v30
    || (*p_equipSvtIdList = (struct System_Int32_array *)v30,
        v31 = sub_1B64204(v29, int___TypeInfo),
        equipSvtIdList = v60,
        v32 = v31,
        !v31) )
  {
    sub_1B645E4(v29);
LABEL_9:
    v32 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipSvtIdList, v32, v24, v25);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v33);
  v34 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList, (int32_t)v34, v35, v36);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v39,
    v37,
    v38);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&item->fields.userServantEntity,
    (int32_t)userServantEntity,
    v40,
    v41);
  item->fields.followerInfo = followerInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&item->fields.followerInfo, (int32_t)followerInfo, v42, v43);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&item->fields.servantEntity, (int32_t)servantEntity, v44, v45);
  *(_QWORD *)&item->fields.classId = v11;
  *(_QWORD *)&item->fields.frameType = v10;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1B6406C(
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
  v52 = sub_1B64204(v50, int___TypeInfo);
  if ( !v52 || (*v27 = (struct System_Int32_array *)v52, v53 = sub_1B64204(v51, int___TypeInfo), v54 = v53, !v53) )
  {
    sub_1B645E4(v51);
LABEL_17:
    v54 = 0;
    *v27 = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&item->fields.equipSvtIdList, v54, v48, v49);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v55);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1B6406C(
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
  sub_1B6406C(
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
  if ( (byte_49F83E1 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1B640C8(&int___TypeInfo, item);
    byte_49F83E1 = 1;
  }
  p_equipSvtIdList = &v5->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)v5->fields.equipSvtIdList;
  if ( !item )
    sub_1B64324(this);
  equipIdList = v5->fields.equipIdList;
  v10 = &item->fields.equipSvtIdList;
  v9 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v9 )
    goto LABEL_9;
  v11 = System_Array__Clone(v9, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v12 = v11;
  v13 = sub_1B64204(v11, int___TypeInfo);
  if ( !v13 || (*p_equipSvtIdList = v13, v14 = sub_1B64204(v12, int___TypeInfo), v15 = v14, !v14) )
  {
    sub_1B645E4(v12);
LABEL_9:
    v15 = 0;
    *p_equipSvtIdList = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.equipSvtIdList, v15, (int32_t)method, v3);
  PartyOrganizationListViewItem__SetEquipStatus(v5, item->fields.equipIdList, v16);
  if ( !equipSvtIdList )
    goto LABEL_15;
  v19 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v19 )
    goto LABEL_15;
  v20 = v19;
  v21 = sub_1B64204(v19, int___TypeInfo);
  if ( !v21 || (*v10 = (struct System_Int32_array *)v21, v22 = sub_1B64204(v20, int___TypeInfo), v23 = v22, !v22) )
  {
    sub_1B645E4(v20);
LABEL_15:
    v23 = 0;
    *v10 = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&item->fields.equipSvtIdList, v23, v17, v18);
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
  System_Collections_Generic_List_object__o *FriendshipUpCampaigns; // x23
  Il2CppObject *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_T__o *v26; // x20
  _BOOL8 v27; // x0
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v31; // x25
  __int64 v32; // x26
  int32_t v33; // w1
  Il2CppObject *v34; // x0
  struct UserServantEntity_o *v35; // x8
  UserServantMaster_o *v36; // x24
  __int64 v37; // x25
  __int64 v38; // x26
  __int64 v39; // x0
  UserServantEntity_o *HeroineData; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w25
  int32_t questPhase; // w26
  int32_t eventId; // w24
  Il2CppObject *v45; // x0
  int32_t v46; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v49; // w2
  const MethodInfo_38022D4 *v50; // x5
  __int64 v51; // x0
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_Collections_Generic_List_Enumerator_object__o item; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v60; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v61; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_49F83FA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventCampaignMaster___, isQuestTarget);
    sub_1B640C8(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1B640C8(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v19);
    byte_49F83FA = 1;
  }
  memset(&v59, 0, sizeof(v59));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_47;
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[6].monitor,
                                                                         0LL);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v26 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo,
                                                  v24,
                                                  v25);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v26,
    (const MethodInfo_345D7D8 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&item,
      FriendshipUpCampaigns,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v59 = item;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v27 )
        break;
      current = (EventCampaignEntity_o *)v59.fields._current;
      if ( !v59.fields._current )
        sub_1B64324(v27);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v59.fields._current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1B64324(v27);
        v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v32;
        *(_QWORD *)&v62.fields.fakeValue = v31;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v62, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v33,
                (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v34 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
      v35 = this->fields.userServantEntity;
      if ( !v35 )
        sub_1B64324(v34);
      v36 = (UserServantMaster_o *)v34;
      v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = v38;
      *(_QWORD *)&v63.fields.fakeValue = v37;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v63, 0LL);
      if ( !v36 )
        sub_1B64324(v39);
      HeroineData = UserServantMaster__getHeroineData(v36, v39, 0LL);
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
        sub_1B64324(HeroineData);
      questId = questRestrictionInfo->fields.questId;
      questPhase = questRestrictionInfo->fields.questPhase;
      eventId = current->fields.eventId;
      v45 = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v45 )
        sub_1B64324(0LL);
      if ( !v23 )
        sub_1B64324(v45);
      if ( !EventQuestMaster__IsEventNotIncluded(
              (EventQuestMaster_o *)v23,
              eventId,
              questId,
              questPhase,
              7,
              (int64_t)v45[6].monitor,
              0LL) )
      {
LABEL_30:
        v46 = current->fields.eventId;
        FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
        calcType = current->fields.calcType;
        v49 = FriendshipBonusValue;
        item.fields._index = 0;
        item.fields._list = 0LL;
        *(_QWORD *)&v60.fields.Item1 = &item;
        v60.fields.Item3 = v46;
        System_ValueTuple_int__int__Int32Enum____ctor(
          v60,
          v49,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v50);
        if ( !v26 )
          sub_1B64324(v51);
        *(_QWORD *)&v61.fields.Item1 = item.fields._list;
        v61.fields.Item3 = item.fields._index;
        items = v26->fields._items;
        v53 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
        ++v26->fields._version;
        if ( !items )
          sub_1B64324(v51);
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
            v26,
            v61,
            *(const MethodInfo_345E064 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v26->fields._size = size + 1;
          *((System_ValueTuple_int__int__Int32Enum__o *)items->m_Items + size) = v61;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v59,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v26 )
LABEL_47:
    sub_1B64324(Instance);
  v55 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                   v26,
                                                                                   (const MethodInfo_345FCE4 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v55;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v55,
    v56,
    v57);
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
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q1
  System_Int64_array *v15; // x22
  __int64 v16; // x1
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

  if ( (byte_49F83FB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1B640C8(&long___TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49F83FB = 1;
  }
  if ( this->fields.equipUserServantEntity && !this->fields._IsDisappearEquip_k__BackingField )
  {
    p_equipUserServantEntity = &this->fields.equipUserServantEntity;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1B64170(long___TypeInfo, 1LL);
    v13 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_54;
    v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
    v15 = (System_Int64_array *)Instance;
    *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v50.fields.fakeValue = v14;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v49 = v50;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v49, 0LL);
    if ( !v15 )
      goto LABEL_54;
    if ( !v15->max_length )
LABEL_55:
      sub_1B6432C(Instance, v16);
    v15->m_Items[0] = Instance;
    if ( !Master_object )
      goto LABEL_54;
    if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)Master_object, v15, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
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
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v48, 0LL);
      if ( !v19 )
        goto LABEL_54;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 v19,
                 Instance,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      *p_equipUserServantEntity = (struct UserServantEntity_o *)Entity;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, (int32_t)Entity, v21, v22);
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
    v24 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1B64170(long___TypeInfo, 1LL);
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
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v47, 0LL);
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
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
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
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v46, 0LL);
            if ( v30 )
            {
              v31 = DataMasterBase_object__object__long___GetEntity(
                      v30,
                      Instance,
                      (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              *p_userServantEntity = (struct UserServantEntity_o *)v31;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity, (int32_t)v31, v32, v33);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v51, 0LL);
                  v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userServantEntity;
                  if ( *p_userServantEntity )
                  {
                    v39 = Instance;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38[6], 0LL);
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
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                         userServantEntity->fields.limitCount,
                                         0LL);
                            v42 = this->fields.userServantEntity;
                            this->fields.svtLimitCount = Instance;
                            if ( v42 )
                            {
                              CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v42, 0LL);
                              this->fields.commandCodeIdList = CommandCodeIdList;
                              sub_1B6406C(
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
      sub_1B64324(Instance);
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

  if ( (byte_49F83F9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_1B640C8(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_49F83F9 = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v7 = (PartyOrganizationListViewItem_o *)sub_1B645E4(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_31807744(v7, v8, v9);
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
      sub_1B64324(this);
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
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v15; // x0

  if ( (byte_49F83F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F83F5 = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v11);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1B64324(Instance);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    byte_49F7D6A = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  return v15->static_fields->unknownNameText;
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

  if ( (byte_49F83EA & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49F83EA = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v11, 0LL);
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

  if ( (byte_49F83EB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F83EB = 1;
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

  if ( (byte_49F83E9 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49F83E9 = 1;
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

  if ( (byte_49F83E8 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49F83E8 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v6, 0LL);
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

  if ( (byte_49F83F8 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F83F8 = 1;
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
  FollowerInfo_o *v11; // x21
  struct QuestRestrictionInfo_o *v12; // x8
  int32_t v13; // w20
  int32_t v14; // w2

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
      v11 = this->fields.followerInfo;
      v12 = this->fields.questRestrictionInfo;
      v13 = this->fields.followerIndex;
      if ( v12 )
      {
        Atk = FollowerInfo__GetReturnTypeByQuestId(v12->fields.questId, 0LL);
        v14 = Atk;
        if ( v11 )
        {
LABEL_11:
          LODWORD(followerInfo) = FollowerInfo__getEquipAtk(v11, v13, v14, 0LL) + (_DWORD)followerInfo;
          return (int)followerInfo;
        }
      }
      else
      {
        v14 = 0;
        if ( v11 )
          goto LABEL_11;
      }
      sub_1B64324(Atk);
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
  FollowerInfo_o *v11; // x21
  struct QuestRestrictionInfo_o *v12; // x8
  int32_t v13; // w20
  int32_t v14; // w2

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
      v11 = this->fields.followerInfo;
      v12 = this->fields.questRestrictionInfo;
      v13 = this->fields.followerIndex;
      if ( v12 )
      {
        Hp = FollowerInfo__GetReturnTypeByQuestId(v12->fields.questId, 0LL);
        v14 = Hp;
        if ( v11 )
        {
LABEL_11:
          LODWORD(followerInfo) = FollowerInfo__getEquipHp(v11, v13, v14, 0LL) + (_DWORD)followerInfo;
          return (int)followerInfo;
        }
      }
      else
      {
        v14 = 0;
        if ( v11 )
          goto LABEL_11;
      }
      sub_1B64324(Hp);
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
  Il2CppObject *Master_object; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  struct ServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_49F83E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49F83E6 = 1;
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
    *(_QWORD *)&v26.fields.currentCryptoKey = v10;
    *(_QWORD *)&v26.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_37;
  v17 = ServantLeader;
  v19 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
  if ( !Master_object )
LABEL_37:
    sub_1B64324(ServantLeader);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    (UserServantCollectionMaster_o *)Master_object,
                    &entity,
                    v17,
                    ServantLeader,
                    0LL);
  if ( (ServantLeader & 1) == 0 )
  {
    ServantLeader = (int64_t)this->fields.servantEntity;
    if ( ServantLeader )
    {
      v24 = -1;
      return ServantEntity__getName((ServantEntity_o *)ServantLeader, v24, -1, 0LL);
    }
    goto LABEL_37;
  }
  if ( !entity )
    goto LABEL_37;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_25:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v20 = this->fields.servantEntity;
  if ( !v20 )
    goto LABEL_37;
  v21 = (ServantLimitImageMaster_o *)ServantLeader;
  v23 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v23;
  *(_QWORD *)&v28.fields.fakeValue = v22;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
  if ( !v21 )
    goto LABEL_37;
  ServantLeader = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, ServantLeader, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_37;
  v24 = ServantLeader;
  ServantLeader = (int64_t)this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, v24, -1, 0LL);
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

  if ( (byte_49F83E5 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49F83E5 = 1;
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
  const MethodInfo *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_49F83E7 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B640C8(&StringLiteral_18979/*"error"*/, v3);
    byte_49F83E7 = 1;
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
    return (System_String_o *)StringLiteral_18979/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    nameLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
  }
  else
  {
    nameLimitCount = this->fields.nameLimitCount;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    IsNpc = PartyOrganizationListViewItem__get_ServantLeader(this, v12);
    if ( !IsNpc )
      goto LABEL_19;
    nameLimitCount = *((_DWORD *)IsNpc + 16);
  }
  IsNpc = this->fields.servantEntity;
  if ( !IsNpc )
LABEL_19:
    sub_1B64324(IsNpc);
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
  sub_1B6406C(
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F84B2 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_49F84B2 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PartyOrganizationListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)PartyOrganizationListViewItem___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1B64324(this);
  return drop->fields.eventId;
}