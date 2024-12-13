void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41548032((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32616132(
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
  void *Instance; // x0
  __int64 v22; // x1
  struct ServantEntity_o **p_servantEntity; // x24
  const MethodInfo *v24; // x2
  int v25; // w9

  if ( (byte_4B32F06 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4B32F06 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41548032((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BD33FC(&this->fields.userServantEntity);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BD33FC(&this->fields.questRestrictionInfo);
  this->fields.followerInfo = followerInfo;
  sub_1BD33FC(&this->fields.followerInfo);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1BD33FC(&this->fields.setupInfo);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                           svtId,
                                                           (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  sub_1BD33FC(&this->fields.servantEntity);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_1BD36B4(Instance, v22);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_40482300(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_1BD33FC(&this->fields.commandCodeIdList);
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
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
  if ( initPos )
    v25 = initPos;
  else
    v25 = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v25;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32619892(
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
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  struct FollowerInfo_o **p_followerInfo; // x21
  __int64 ReturnTypeByQuestId; // x0
  unsigned __int64 v33; // x1
  FollowerInfo_o *followerInfo; // x25
  int32_t v35; // w2
  int32_t v36; // w0
  FollowerInfo_o *v37; // x27
  struct QuestRestrictionInfo_o *v38; // x8
  int32_t followerIndex; // w28
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x23
  int32_t v41; // w2
  struct ServantEntity_o **p_servantEntity; // x23
  struct ServantEntity_o *v43; // x8
  ServantLimitMaster_o *v44; // x27
  __int64 v45; // x25
  __int64 v46; // x28
  FollowerInfo_o *v47; // x29
  struct QuestRestrictionInfo_o *v48; // x8
  int32_t v49; // w25
  int32_t v50; // w28
  int32_t v51; // w2
  FollowerInfo_o *v52; // x27
  struct QuestRestrictionInfo_o *v53; // x8
  int32_t v54; // w25
  int32_t v55; // w2
  FollowerInfo_o *v56; // x27
  struct QuestRestrictionInfo_o *v57; // x8
  int32_t v58; // w25
  int32_t v59; // w2
  FollowerInfo_o *v60; // x27
  struct QuestRestrictionInfo_o *v61; // x8
  int32_t v62; // w25
  int32_t v63; // w2
  const MethodInfo *v64; // x1
  FollowerInfo_o *v65; // x27
  int32_t v66; // w25
  int v67; // w8
  __int64 v68; // x24
  unsigned int v69; // w28
  __int64 v70; // x25
  __int64 v71; // x26
  __int64 v72; // x27
  int32_t v73; // w26
  int32_t v74; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v79; // x8
  Il2CppObject *Master_object; // x22
  struct ServantEntity_o *v81; // x8
  UserEventDataLostEntity_o *v82; // x22
  __int64 v83; // x24
  __int64 v84; // x25
  struct ServantEntity_o *v85; // x8
  char v86; // w22
  UserEventDataLostEntity_o *v87; // x23
  __int64 v88; // x24
  __int64 v89; // x25
  struct QuestRestrictionInfo_o *v90; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v92; // x23
  const MethodInfo *v93; // x1
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x1
  int32_t v96; // w21
  __int64 v97; // x24
  __int64 v98; // x25
  int32_t v99; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x2
  QuestRestrictionInfo_o *v103; // x8
  bool IsNotClassBoard; // w20
  int32_t v105; // [xsp+4h] [xbp-7Ch]
  QuestPhaseEntity_o *v106; // [xsp+8h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  bool isWhole; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  v11 = isFixNpc;
  v19 = isFixNpc;
  if ( (byte_4B32F04 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, v21);
    sub_1BD3458(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestPhaseMaster___, v23);
    sub_1BD3458(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v24);
    sub_1BD3458(&DataManager_TypeInfo, v25);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v26);
    sub_1BD3458(&NetworkManager_TypeInfo, v27);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_4B32F04 = 1;
  }
  isWhole = 0;
  v106 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41548032((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BD33FC(&this->fields.userServantEntity);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BD33FC(&this->fields.questRestrictionInfo);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BD33FC(&this->fields.friendPointCampaignEntityList);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  ReturnTypeByQuestId = sub_1BD33FC(&this->fields.followerInfo);
  this->fields.isFixNpc = v19;
  this->fields.isFollower = 1;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v35 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_130;
  }
  else
  {
    v35 = 0;
    if ( !followerInfo )
      goto LABEL_130;
  }
  v36 = FollowerInfo__getIndex(followerInfo, followerClassId, v35, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v36;
  sub_1BD33FC(&this->fields.setupInfo);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = this->fields.followerInfo;
  v38 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)ReturnTypeByQuestId;
  if ( v38 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v38->fields.questId, 0LL);
    v41 = ReturnTypeByQuestId;
    if ( !v37 )
      goto LABEL_130;
  }
  else
  {
    v41 = 0;
    if ( !v37 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v37, followerIndex, v41, 0LL);
  if ( !v40 )
    goto LABEL_130;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v40,
                                                           ReturnTypeByQuestId,
                                                           (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  sub_1BD33FC(&this->fields.servantEntity);
  ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v43 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_130;
  v105 = index;
  v44 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v46 = *(_QWORD *)&v43->fields.id.fields.currentCryptoKey;
  v45 = *(_QWORD *)&v43->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v46;
  *(_QWORD *)&v109.fields.fakeValue = v45;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v109, 0LL);
  v47 = this->fields.followerInfo;
  v48 = this->fields.questRestrictionInfo;
  v49 = this->fields.followerIndex;
  v50 = ReturnTypeByQuestId;
  if ( v48 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v48->fields.questId, 0LL);
    v51 = ReturnTypeByQuestId;
    if ( !v47 )
      goto LABEL_130;
  }
  else
  {
    v51 = 0;
    if ( !v47 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v47, v49, v51, 0LL);
  if ( !v44 )
    goto LABEL_130;
  ReturnTypeByQuestId = (__int64)ServantLimitMaster__GetEntity(v44, v50, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_130;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  v52 = this->fields.followerInfo;
  v53 = this->fields.questRestrictionInfo;
  v54 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v53 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0LL);
    v55 = ReturnTypeByQuestId;
    if ( !v52 )
      goto LABEL_130;
  }
  else
  {
    v55 = 0;
    if ( !v52 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v52, v54, v55, 0LL);
  v56 = this->fields.followerInfo;
  v57 = this->fields.questRestrictionInfo;
  v58 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v57 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v57->fields.questId, 0LL);
    v59 = ReturnTypeByQuestId;
    if ( !v56 )
      goto LABEL_130;
  }
  else
  {
    v59 = 0;
    if ( !v56 )
      goto LABEL_130;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v56, v58, v59, 0LL);
  v60 = this->fields.followerInfo;
  v61 = this->fields.questRestrictionInfo;
  v62 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v61 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v61->fields.questId, 0LL);
    v63 = ReturnTypeByQuestId;
    if ( !v60 )
      goto LABEL_130;
  }
  else
  {
    v63 = 0;
    if ( !v60 )
      goto LABEL_130;
  }
  this->fields.commandCodeIdList = FollowerInfo__getCommandCodeIdList(v60, v62, v63, 0LL);
  sub_1BD33FC(&this->fields.commandCodeIdList);
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, v64) && *p_questRestrictionInfo )
  {
    v65 = this->fields.followerInfo;
    v66 = this->fields.followerIndex;
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId((*p_questRestrictionInfo)->fields.questId, 0LL);
    if ( !v65 )
      goto LABEL_130;
    this->fields.isQuestRestriction = FollowerInfo__GetQuestRestriction_39711808(
                                        v65,
                                        questRestrictionInfo,
                                        v66,
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
    v33 = (unsigned int)initPos;
  else
    v33 = (unsigned int)(v105 + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = v105 + 1;
  this->fields._InitPos_k__BackingField = v33;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41293216(questRestrictionInfo, v33, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_130;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    ReturnTypeByQuestId = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    ReturnTypeByQuestId = (__int64)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    v67 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v68 = ReturnTypeByQuestId;
    if ( v67 >= 1 )
    {
      v69 = 0;
      while ( 1 )
      {
        if ( v69 >= v67 )
          sub_1BD36BC(ReturnTypeByQuestId, v33);
        v70 = *(_QWORD *)(v68 + 8LL * (int)v69 + 32);
        if ( !v70 )
          goto LABEL_130;
        v72 = *(_QWORD *)(v70 + 80);
        v71 = *(_QWORD *)(v70 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v110.fields.currentCryptoKey = v72;
        *(_QWORD *)&v110.fields.fakeValue = v71;
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v110, 0LL);
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v70 + 96),
                0LL);
        DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v70, 0, 0LL);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                 questRestrictionInfo,
                                 v73,
                                 v74,
                                 DispLimitCount,
                                 0LL);
        Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v70, 0LL);
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestriction_41274568(
                                questRestrictionInfo,
                                &isWhole,
                                ServantIndividuality,
                                Rarity,
                                *(_DWORD *)(v70 + 256),
                                this->fields._InitPos_k__BackingField,
                                1,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
        {
          ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality_41296248(
                                  questRestrictionInfo,
                                  ServantIndividuality,
                                  this->fields._InitPos_k__BackingField,
                                  0LL);
          if ( (ReturnTypeByQuestId & 1) == 0 )
            break;
        }
        v67 = *(_DWORD *)(v68 + 24);
        if ( (int)++v69 >= v67 )
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
  v79 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v79 && v79->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B31D77 )
    {
      sub_1BD3458(&NetworkManager_TypeInfo, v33);
      byte_4B31D77 = 1;
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
      v81 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_130;
      v82 = entity;
      v84 = *(_QWORD *)&v81->fields.id.fields.currentCryptoKey;
      v83 = *(_QWORD *)&v81->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v111.fields.currentCryptoKey = v84;
      *(_QWORD *)&v111.fields.fakeValue = v83;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v111, 0LL);
      if ( !v82 )
        goto LABEL_130;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v82, ReturnTypeByQuestId, 0LL);
      v85 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_130;
      v86 = ReturnTypeByQuestId;
      v87 = entity;
      v89 = *(_QWORD *)&v85->fields.id.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v85->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v89;
      *(_QWORD *)&v112.fields.fakeValue = v88;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v112, 0LL);
      if ( !v87 )
        goto LABEL_130;
      if ( (v86 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v87,
                                                         ReturnTypeByQuestId,
                                                         0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v87, ReturnTypeByQuestId, 0LL) )
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
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
  v90 = this->fields.questRestrictionInfo;
  if ( v90 )
  {
    eventId = v90->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_130;
    v92 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (__int64)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_130;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v93) )
        {
          ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v95);
          if ( !ReturnTypeByQuestId )
            goto LABEL_130;
          v96 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v96;
          ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v33);
          if ( !ReturnTypeByQuestId )
            goto LABEL_130;
          v98 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v97 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v113.fields.currentCryptoKey = v98;
          *(_QWORD *)&v113.fields.fakeValue = v97;
          v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v113, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v92, eventId, v96, v99, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v94);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v33) )
    goto LABEL_125;
  ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, v101);
  if ( !ReturnTypeByQuestId )
    goto LABEL_130;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v103 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      ReturnTypeByQuestId = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v106,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (__int64)v106;
          if ( !v106 )
            goto LABEL_130;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v106, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (__int64)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v33);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v103) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_129;
        }
      }
LABEL_130:
      sub_1BD36B4(ReturnTypeByQuestId, v33);
    }
  }
  else
  {
LABEL_125:
    LOBYTE(v103) = 0;
  }
LABEL_129:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v103;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v102);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32647504(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x20
  __int64 Instance; // x0
  __int64 v36; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x26
  __int64 v39; // x27
  __int64 v40; // x28
  struct ServantEntity_o **p_servantEntity; // x26
  ServantLimitMaster_o *v42; // x27
  int32_t v43; // w28
  ServantLimitEntity_o *v44; // x27
  int v45; // w9
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x24
  struct System_Int32_array *v48; // x0
  struct System_Int32_array **p_equipSvtIdList; // x25
  struct UserServantEntity_o *v50; // x8
  __int64 v51; // x24
  __int64 v52; // x25
  UserServantEntity_o *v53; // x8
  QuestRestrictionInfo_o *v54; // x24
  struct UserServantEntity_o *v55; // x8
  __int64 v56; // x25
  __int64 v57; // x26
  int32_t v58; // w25
  int32_t v59; // w26
  QuestRestrictionInfo_o *v60; // x24
  UserServantEntity_o *v61; // x8
  __int64 v62; // x25
  __int64 v63; // x26
  int32_t v64; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v66; // x2
  struct QuestRestrictionInfo_o *v67; // x8
  UserServantEntity_o *v68; // x9
  UserEventServantFatigueMaster_o *v69; // x25
  int32_t eventId; // w26
  __int64 v71; // x27
  __int64 v72; // x28
  int64_t v73; // x24
  struct QuestRestrictionInfo_o *v74; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v76; // x8
  UserEventAlloutBattleMaster_o *v77; // x25
  __int64 v78; // x26
  __int64 v79; // x27
  Il2CppObject *Master_object; // x24
  UserServantEntity_o *v81; // x8
  UserEventDataLostEntity_o *v82; // x24
  __int64 v83; // x25
  __int64 v84; // x26
  UserServantEntity_o *v85; // x8
  char v86; // w24
  UserEventDataLostEntity_o *v87; // x25
  __int64 v88; // x26
  __int64 v89; // x27
  const MethodInfo *v90; // x2
  int v91; // w8
  __int64 v92; // x24
  unsigned int v93; // w29
  __int64 v94; // x25
  __int64 v95; // x26
  __int64 v96; // x27
  int32_t v97; // w26
  int32_t v98; // w27
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x26
  int32_t Rarity; // w0
  int32_t v102; // w22
  EventServantPointRankMaster_o *v103; // x23
  const MethodInfo *v104; // x2
  UserServantEntity_o *v105; // x8
  __int128 v106; // q0
  UserEventServantPointMaster_o *v107; // x24
  int64_t v108; // x25
  int32_t SvtPoint_k__BackingField; // w24
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v112; // x2
  struct UserServantEntity_o *v113; // x8
  __int128 v114; // q0
  Il2CppObject *v115; // x22
  UserServantEntity_o *v116; // x8
  __int128 v117; // q0
  System_Int64_array *v118; // x23
  PartyOrganizationListViewItem_o *v119; // x0
  int32_t v120; // w1
  const MethodInfo *v121; // x2
  System_Int64_array *equipIdLista; // [xsp+18h] [xbp-118h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+28h] [xbp-108h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+30h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+50h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+90h] [xbp-A0h]
  UserEventServantPointEntity_o *v128; // [xsp+B0h] [xbp-80h] BYREF
  bool isWhole; // [xsp+BCh] [xbp-74h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+C0h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  if ( (byte_4B32F03 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v20);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_1BD3458(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v22);
    sub_1BD3458(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_1BD3458(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v24);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v25);
    sub_1BD3458(&DataManager_TypeInfo, v26);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_1BD3458(&int___TypeInfo, v28);
    sub_1BD3458(&long___TypeInfo, v29);
    sub_1BD3458(&NetworkManager_TypeInfo, v30);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4B32F03 = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  isWhole = 0;
  v128 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41548032((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_1BD33FC(&this->fields.userServantEntity);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BD33FC(&this->fields.questRestrictionInfo);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BD33FC(&this->fields.friendPointCampaignEntityList);
  this->fields.followerInfo = 0LL;
  sub_1BD33FC(&this->fields.followerInfo);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_1BD33FC(&this->fields.setupInfo);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_144;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  equipIdLista = equipIdList;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  v37 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_144;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v40 = *(_QWORD *)&v37[5].fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37[5].fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v132.fields.currentCryptoKey = v40;
  *(_QWORD *)&v132.fields.fakeValue = v39;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v132, 0LL);
  if ( !v38 )
    goto LABEL_144;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v38,
                                                           Instance,
                                                           (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  p_servantEntity = &this->fields.servantEntity;
  sub_1BD33FC(&this->fields.servantEntity);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_144;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_144;
  v42 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_144;
  v43 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620((*p_userServantEntity)[6], 0LL);
  if ( !v42 )
    goto LABEL_144;
  v44 = ServantLimitMaster__GetEntity(v42, v43, Instance, 0LL);
  if ( initPos )
    v45 = initPos;
  else
    v45 = index + 1;
  this->fields._InitPos_k__BackingField = v45;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !equipSvtIdList || (v46 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL)) == 0LL )
  {
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    goto LABEL_21;
  }
  v47 = v46;
  v48 = (struct System_Int32_array *)sub_1BD3594(v46, int___TypeInfo);
  if ( v48 )
  {
    this->fields.equipSvtIdList = v48;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    if ( sub_1BD3594(v47, int___TypeInfo) )
    {
LABEL_21:
      Instance = sub_1BD33FC(p_equipSvtIdList);
      if ( !*p_servantEntity )
        goto LABEL_144;
      this->fields.classId = (*p_servantEntity)->fields.classId;
      if ( !v44 )
        goto LABEL_144;
      Instance = (__int64)this->fields.userServantEntity;
      this->fields.rarityId = v44->fields.rarity;
      if ( !Instance )
        goto LABEL_144;
      Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
      v50 = this->fields.userServantEntity;
      this->fields.frameType = Instance;
      if ( !v50 )
        goto LABEL_144;
      v52 = *(_QWORD *)&v50->fields.limitCount.fields.currentCryptoKey;
      v51 = *(_QWORD *)&v50->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v133.fields.currentCryptoKey = v52;
      *(_QWORD *)&v133.fields.fakeValue = v51;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v133, 0LL);
      v53 = this->fields.userServantEntity;
      this->fields.svtLimitCount = Instance;
      if ( !v53 )
        goto LABEL_144;
      this->fields.commandCodeIdList = UserServantEntity__getCommandCodeIdList(v53, 0LL);
      Instance = sub_1BD33FC(&this->fields.commandCodeIdList);
      v54 = this->fields.questRestrictionInfo;
      if ( v54 )
      {
        v55 = this->fields.userServantEntity;
        if ( !v55 )
          goto LABEL_144;
        v57 = *(_QWORD *)&v55->fields.svtId.fields.currentCryptoKey;
        v56 = *(_QWORD *)&v55->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v134.fields.currentCryptoKey = v57;
        *(_QWORD *)&v134.fields.fakeValue = v56;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v134, 0LL);
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v58 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620((*p_userServantEntity)[6], 0LL);
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v59 = Instance;
        Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
        if ( !*p_userServantEntity )
          goto LABEL_144;
        Instance = QuestRestrictionInfo__IsRestriction_41274284(
                     v54,
                     &this->fields.isQuestRestrictionWhole,
                     v58,
                     v59,
                     Instance,
                     (*p_userServantEntity)[16].fields.currentCryptoKey,
                     this->fields._InitPos_k__BackingField,
                     1,
                     0LL);
        v60 = this->fields.questRestrictionInfo;
        this->fields.isQuestRestriction = Instance & 1;
        *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
        this->fields.isFixedServantPositionAgreement = 0;
        if ( v60 )
        {
          v61 = (UserServantEntity_o *)*p_userServantEntity;
          if ( !*p_userServantEntity )
            goto LABEL_144;
          v63 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
          v62 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v135.fields.currentCryptoKey = v63;
          *(_QWORD *)&v135.fields.fakeValue = v62;
          v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v135, 0LL);
          IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v60, v64, 0LL);
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
      Instance = sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
      v67 = this->fields.questRestrictionInfo;
      this->fields._IsNotClassBoardNpc_k__BackingField = 0;
      this->fields._IsClearedWave_k__BackingField = isClearedWave;
      *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
      if ( !v67 )
      {
        PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 0, v66);
        goto LABEL_143;
      }
      if ( v67->fields.isFatigure )
      {
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_144;
        Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_144;
        v68 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v69 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v72 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
        v71 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v136.fields.currentCryptoKey = v72;
        *(_QWORD *)&v136.fields.fakeValue = v71;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v136, 0LL);
        if ( !v69 )
          goto LABEL_144;
        Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                     v69,
                     &recoverAt,
                     &this->fields.isFatigureRecover,
                     eventId,
                     Instance,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v73 = recoverAt;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager__getTime(0LL);
          if ( v73 > Instance )
            this->fields.fatigureTime = recoverAt;
        }
      }
      v74 = *p_questRestrictionInfo;
      if ( !*p_questRestrictionInfo )
        goto LABEL_144;
      if ( v74->fields.isAllOutBattle )
      {
        allOutBattleGroupNo = v74->fields.allOutBattleGroupNo;
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_144;
        Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
        v76 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v77 = (UserEventAlloutBattleMaster_o *)Instance;
        v79 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v78 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v137.fields.currentCryptoKey = v79;
        *(_QWORD *)&v137.fields.fakeValue = v78;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v137, 0LL);
        if ( !*p_questRestrictionInfo || !v77 )
          goto LABEL_144;
        Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                     v77,
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v36);
          byte_4B31D77 = 1;
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
          v81 = (UserServantEntity_o *)*p_userServantEntity;
          if ( !*p_userServantEntity )
            goto LABEL_144;
          v82 = entity;
          v84 = *(_QWORD *)&v81->fields.svtId.fields.currentCryptoKey;
          v83 = *(_QWORD *)&v81->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v138.fields.currentCryptoKey = v84;
          *(_QWORD *)&v138.fields.fakeValue = v83;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v138, 0LL);
          if ( !v82 )
            goto LABEL_144;
          Instance = UserEventDataLostEntity__IsRestart(v82, Instance, 0LL);
          v85 = (UserServantEntity_o *)*p_userServantEntity;
          if ( !*p_userServantEntity )
            goto LABEL_144;
          v86 = Instance;
          v87 = entity;
          v89 = *(_QWORD *)&v85->fields.svtId.fields.currentCryptoKey;
          v88 = *(_QWORD *)&v85->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v139.fields.currentCryptoKey = v89;
          *(_QWORD *)&v139.fields.fakeValue = v88;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v139, 0LL);
          if ( !v87 )
            goto LABEL_144;
          if ( (v86 & 1) != 0 )
          {
            Instance = UserEventDataLostEntity__GetTimesToRestart(v87, Instance, 0LL);
            this->fields._TimesToRestart_k__BackingField = Instance;
          }
          else
          {
            Instance = UserEventDataLostEntity__IsDataLost(v87, Instance, 0LL);
            if ( (Instance & 1) != 0 )
              this->fields._IsDataLost_k__BackingField = 1;
          }
        }
      }
      *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
      if ( questRestrictionInfo )
      {
        Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41293216(
                     questRestrictionInfo,
                     this->fields._InitPos_k__BackingField,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          this->fields.isMyServantOrNpcRestriction = 1;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( !Instance )
            goto LABEL_144;
          Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_144;
          v91 = *(_DWORD *)(Instance + 24);
          v92 = Instance;
          if ( v91 >= 1 )
          {
            v93 = 0;
            while ( 1 )
            {
              if ( v93 >= v91 )
                goto LABEL_145;
              v94 = *(_QWORD *)(v92 + 8LL * (int)v93 + 32);
              if ( !v94 )
                goto LABEL_144;
              v96 = *(_QWORD *)(v94 + 80);
              v95 = *(_QWORD *)(v94 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v140.fields.currentCryptoKey = v96;
              *(_QWORD *)&v140.fields.fakeValue = v95;
              v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v140, 0LL);
              v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v94 + 96),
                      0LL);
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v94, 0, 0LL);
              ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                                       questRestrictionInfo,
                                       v97,
                                       v98,
                                       DispLimitCount,
                                       0LL);
              Rarity = UserServantEntity__getRarity((UserServantEntity_o *)v94, 0LL);
              Instance = QuestRestrictionInfo__IsRestriction_41274568(
                           questRestrictionInfo,
                           &isWhole,
                           ServantIndividuality,
                           Rarity,
                           *(_DWORD *)(v94 + 256),
                           this->fields._InitPos_k__BackingField,
                           1,
                           0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality_41296248(
                             questRestrictionInfo,
                             ServantIndividuality,
                             this->fields._InitPos_k__BackingField,
                             0LL);
                if ( (Instance & 1) == 0 )
                  break;
              }
              v91 = *(_DWORD *)(v92 + 24);
              if ( (int)++v93 >= v91 )
                goto LABEL_108;
            }
            this->fields.haveIndividualityServant = 1;
          }
        }
      }
LABEL_108:
      if ( !*p_questRestrictionInfo )
        goto LABEL_144;
      v102 = (*p_questRestrictionInfo)->fields.eventId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      if ( !Instance )
        goto LABEL_144;
      v103 = (EventServantPointRankMaster_o *)Instance;
      if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v102, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v105 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v106 = *(_OWORD *)&v105->fields.userId.fields.fakeValue;
        v107 = (UserEventServantPointMaster_o *)Instance;
        *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v105->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v127.fields.fakeValue = v106;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v126 = v127;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v126, 0LL);
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v108 = Instance;
        Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
        if ( !v107 )
          goto LABEL_144;
        if ( UserEventServantPointMaster__TryGetEntity(v107, &v128, v108, v102, Instance, 0LL) )
        {
          Instance = (__int64)v128;
          if ( !v128 )
            goto LABEL_144;
          this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v128, 0LL);
        }
        Instance = (__int64)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
        SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
        EnableEntity = EventServantPointRankMaster__GetEnableEntity(v103, v102, SvtPoint_k__BackingField, SvtId, 0LL);
        if ( EnableEntity )
          this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v102, v112);
      }
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 1, v104);
      v113 = this->fields.userServantEntity;
      if ( !v113 )
        goto LABEL_144;
      v114 = *(_OWORD *)&v113->fields.id.fields.fakeValue;
      *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v113->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v127.fields.fakeValue = v114;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v125 = v127;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v125, 0LL) >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v115 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
        Instance = sub_1BD3500(long___TypeInfo, 1LL);
        v116 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_144;
        v117 = *(_OWORD *)&v116->fields.id.fields.fakeValue;
        v118 = (System_Int64_array *)Instance;
        *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v116->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v127.fields.fakeValue = v117;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v124 = v127;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v124, 0LL);
        if ( !v118 )
          goto LABEL_144;
        if ( !v118->max_length )
LABEL_145:
          sub_1BD36BC(Instance, v36);
        v118->m_Items[0] = Instance;
        if ( !v115 )
          goto LABEL_144;
        if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v115, v118, 0LL) )
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
        PartyOrganizationListViewItem__SetEquipStatus(this, equipIdLista, v90);
        return;
      }
LABEL_144:
      sub_1BD36B4(Instance, v36);
    }
  }
  else
  {
    sub_1BD3974(v47);
  }
  v119 = (PartyOrganizationListViewItem_o *)sub_1BD3974(v47);
  PartyOrganizationListViewItem__SetCanGetBuddyPoint(v119, v120, v121);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32656840(
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
  int v20; // w1
  UserServantEntity_array *Instance; // x0
  __int64 v22; // x1
  int max_length; // w8
  UserServantEntity_array *v24; // x22
  unsigned int v25; // w26
  UserServantEntity_o *v26; // x23
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t v29; // w24
  int32_t v30; // w25
  int32_t DispLimitCount; // w0
  System_Int32_array *ServantIndividuality; // x24
  int32_t Rarity; // w0
  const MethodInfo *v34; // x2
  struct QuestRestrictionInfo_o *v35; // x8
  int32_t eventId; // w21
  bool isWhole; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v15 = isFollower;
  if ( (byte_4B32F05 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_1BD3458(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1BD3458(&DataManager_TypeInfo, v17);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B32F05 = 1;
  }
  isWhole = 0;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_41548032((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_1BD33FC(&this->fields.userServantEntity);
  this->fields.followerInfo = 0LL;
  sub_1BD33FC(&this->fields.followerInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BD33FC(&this->fields.questRestrictionInfo);
  this->fields.isFollower = v15;
  this->fields.isFixNpc = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_1BD33FC(&this->fields.setupInfo);
  this->fields.servantEntity = 0LL;
  sub_1BD33FC(&this->fields.servantEntity);
  if ( initPos )
    v20 = initPos;
  else
    v20 = index + 1;
  *(_QWORD *)&this->fields.classId = 0LL;
  this->fields._InitPos_k__BackingField = v20;
  this->fields._NowPos_k__BackingField = index + 1;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_30:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_31;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41293216(questRestrictionInfo, v20, 0LL) )
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
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  max_length = Instance->max_length;
  v24 = Instance;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1BD36BC(Instance, v22);
      v26 = v24->m_Items[v25];
      if ( !v26 )
        goto LABEL_39;
      v28 = *(_QWORD *)&v26->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&v26->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = v28;
      *(_QWORD *)&v38.fields.fakeValue = v27;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v38, 0LL);
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v26->fields.limitCount, 0LL);
      DispLimitCount = UserServantEntity__getDispLimitCount(v26, 0, 0LL);
      ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(
                               questRestrictionInfo,
                               v29,
                               v30,
                               DispLimitCount,
                               0LL);
      Rarity = UserServantEntity__getRarity(v26, 0LL);
      Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestriction_41274568(
                                              questRestrictionInfo,
                                              &isWhole,
                                              ServantIndividuality,
                                              Rarity,
                                              v26->fields.lv,
                                              this->fields._InitPos_k__BackingField,
                                              1,
                                              0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (UserServantEntity_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41296248(
                                                questRestrictionInfo,
                                                ServantIndividuality,
                                                this->fields._InitPos_k__BackingField,
                                                0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
      }
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_31;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_31:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_1BD33FC(&this->fields.commandCodeIdList);
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
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
  v35 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !v35 )
    goto LABEL_37;
  eventId = v35->fields.eventId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_39:
    sub_1BD36B4(Instance, v22);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v34);
  }
LABEL_37:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v34);
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
  bool IsUniqueIndividualityRestriction_41038440; // w0
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
  bool IsUniqueIndividualityRestriction_39712404; // w0
  const MethodInfo *v64; // x1
  QuestRestrictionInfo_o *v65; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  bool IsFixedSupportPosition_41280660; // w0
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

  if ( (byte_4B32F10 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_4B32F10 = 1;
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
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v77, 0LL);
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
      followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41274284(
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
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41293216(
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
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v78, 0LL);
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
        followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41274568(
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
          followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_41293216(
                                                  (QuestRestrictionInfo_o *)followerInfo,
                                                  this->fields._InitPos_k__BackingField,
                                                  0LL);
          if ( ((unsigned __int8)followerInfo & 1) != 0 )
          {
            followerInfo = (ServantLeaderInfo_o *)this->fields.questRestrictionInfo;
            if ( !followerInfo )
              goto LABEL_86;
            followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41296248(
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
    followerInfo = (ServantLeaderInfo_o *)FollowerInfo__getUniqueSvtRestriction_39712244(
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
    IsUniqueIndividualityRestriction_39712404 = FollowerInfo__IsUniqueIndividualityRestriction_39712404(
                                                  v59,
                                                  v60,
                                                  v61,
                                                  partyItem,
                                                  num,
                                                  v62,
                                                  0LL);
    v65 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_39712404;
    if ( v65 )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v64);
      IsFixedSupportPosition_41280660 = QuestRestrictionInfo__IsFixedSupportPosition_41280660(
                                          v65,
                                          num,
                                          ServantLeader,
                                          0LL);
      v68 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_41280660;
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
        if ( LOBYTE(followerInfo->fields.limitChangeDic) )
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
          v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(SvtId, 0LL);
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
  followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v75, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12 )
    goto LABEL_86;
  v13 = (int)followerInfo;
  followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                          v12->fields.limitCount,
                                          0LL);
  if ( !this->fields.userServantEntity )
    goto LABEL_86;
  v14 = (int)followerInfo;
  followerInfo = (ServantLeaderInfo_o *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
  v15 = this->fields.userServantEntity;
  if ( !v15 )
    goto LABEL_86;
  followerInfo = (ServantLeaderInfo_o *)QuestRestrictionInfo__IsRestriction_41274284(
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
      followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                              v76,
                                              0LL);
      v20 = this->fields.userServantEntity;
      if ( v20 )
      {
        v21 = (int)followerInfo;
        followerInfo = (ServantLeaderInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
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
    sub_1BD36B4(followerInfo, partyItem);
  }
LABEL_40:
  followerInfo = (ServantLeaderInfo_o *)this->fields.userServantEntity;
  if ( !followerInfo )
    goto LABEL_86;
  followerInfo = (ServantLeaderInfo_o *)UserServantEntity__getUniqueSvtRestriction_41038060(
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
  IsUniqueIndividualityRestriction_41038440 = UserServantEntity__IsUniqueIndividualityRestriction_41038440(
                                                v37,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v40 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41038440;
  if ( v40 )
  {
    v41 = PartyOrganizationListViewItem__get_SvtId(this, v39);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v41, 0LL);
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
    sub_1BD36BC(this, equipIdList);
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
  sub_1BD33FC(&this->fields.followerInfo);
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

  if ( (byte_4B32F07 & 1) == 0 )
  {
    sub_1BD3458(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_4B32F07 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_1BD36A4(PartyOrganizationListViewItem_TypeInfo);
  *(_DWORD *)(v6 + 304) = -1;
  *(_DWORD *)(v6 + 360) = -1;
  ListViewItem___ctor_41548032((ListViewItem_o *)v6, index, 0LL);
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
  if ( (byte_4B32F11 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1BD3458(&BalanceConfig_TypeInfo, item);
    byte_4B32F11 = 1;
  }
  if ( !item )
LABEL_26:
    sub_1BD36B4(this, item);
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
      sub_1BD36BC(this, item);
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
  sub_1BD33FC(&this->fields.userServantEntity);
  this->fields.followerInfo = 0LL;
  sub_1BD33FC(&this->fields.followerInfo);
  this->fields.isFollower = 0;
  this->fields.npcFollowerSvtId = 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_1BD33FC(&this->fields.equipIdList);
  this->fields.servantEntity = 0LL;
  sub_1BD33FC(&this->fields.servantEntity);
  *(_OWORD *)&this->fields.classId = xmmword_BD8FB0;
  this->fields.commandCodeIdList = 0LL;
  sub_1BD33FC(&this->fields.commandCodeIdList);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
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

  if ( (byte_4B32F21 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BD3458(&UINarrowFigureRender_TypeInfo, v3);
    byte_4B32F21 = 1;
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
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v22, 0LL);
  v9 = this->fields.userServantEntity;
  if ( !v9 )
LABEL_20:
    sub_1BD36B4(SvtId, v8);
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

  if ( (byte_4B32F23 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    byte_4B32F23 = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41290364(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_21:
        sub_1BD36B4(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41290364(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BD36B4(v5, 0LL);
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

  if ( (byte_4B32F20 & 1) == 0 )
  {
    sub_1BD3458(&int___TypeInfo, method);
    byte_4B32F20 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity || !servantEntity->fields.cardIds )
    return 0LL;
  result = (System_Int32_array *)sub_1BD3500(int___TypeInfo, 3LL);
  v6 = this->fields.servantEntity;
  if ( !v6 || (cardIds = v6->fields.cardIds) == 0LL )
LABEL_15:
    sub_1BD36B4(result, v5);
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
        sub_1BD36BC(result, v5);
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

  if ( (byte_4B32F22 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B32F22 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41290364(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BD36B4(v5, 0LL);
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

  if ( (byte_4B32F12 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&long___TypeInfo, v3);
    byte_4B32F12 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( result )
    {
      v6 = result;
      result = (System_Int64_array *)sub_1BD3594(result, long___TypeInfo);
      if ( !result )
      {
        v8 = (PartyOrganizationListViewItem_o *)sub_1BD3974(v6);
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
    return (System_Int64_array *)sub_1BD3500(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
  }
  return result;
}


bool __fastcall PartyOrganizationListViewItem__GetEventUpVal(
        PartyOrganizationListViewItem_o *this,
        EventUpValInfo_o **eventUpValInfo,
        const MethodInfo *method)
{
  *eventUpValInfo = this->fields.eventUpValInfo;
  sub_1BD33FC(eventUpValInfo);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4B32F1F & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B32F1F = 1;
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

  if ( (byte_4B32F1E & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B32F1E = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41290364(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_1BD36B4(v5, 0LL);
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

  if ( (byte_4B32F25 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B32F25 = 1;
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

  if ( (byte_4B32F26 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B32F26 = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41290364(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1BD36B4(v5, 0LL);
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

  if ( (byte_4B32F1B & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_10429/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v3);
    sub_1BD3458(&StringLiteral_1/*""*/, v4);
    byte_4B32F1B = 1;
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
    sub_1BD36B4(v6, method);
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
    v6 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10429/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_32;
    v9 = (System_String_o *)v6;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_62525248(v9, ConfirmRestrictionMessage, 0LL);
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
  int32_t ruby; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  const MethodInfo *v12; // x1
  ServantEntity_o *ServantLeader; // x0
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

  ruby = limitCount;
  if ( (byte_4B32F16 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&limitCount);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&NetworkManager_TypeInfo, v7);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4B32F16 = 1;
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
    ruby = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v26, 0LL);
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, *(const MethodInfo **)&limitCount) )
  {
    ServantLeader = (ServantEntity_o *)PartyOrganizationListViewItem__get_ServantLeader(this, v12);
    if ( !ServantLeader )
      goto LABEL_36;
    ruby = (int32_t)ServantLeader->fields.ruby;
  }
  if ( ruby != -1 )
    goto LABEL_26;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v14);
    byte_4B31D77 = 1;
  }
  ServantLeader = (ServantEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ServantLeader = (ServantEntity_o *)NetworkManager_TypeInfo;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_36;
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  v19 = *(_QWORD *)(*(_QWORD *)&ServantLeader->fields.starRate + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  ServantLeader = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v27, 0LL);
  if ( !Master_object )
LABEL_36:
    sub_1BD36B4(ServantLeader, v14);
  ServantLeader = (ServantEntity_o *)UserServantCollectionMaster__TryGetEntity(
                                       (UserServantCollectionMaster_o *)Master_object,
                                       &entity,
                                       v19,
                                       (int32_t)ServantLeader,
                                       0LL);
  if ( ((unsigned __int8)ServantLeader & 1) == 0 )
  {
    ServantLeader = this->fields.servantEntity;
    if ( ServantLeader )
      return ServantEntity__getName(ServantLeader, -1, -1, 0LL);
    goto LABEL_36;
  }
  if ( !entity )
    goto LABEL_36;
  ruby = entity->fields.maxLimitCount;
LABEL_26:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (ServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  ServantLeader = (ServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v28, 0LL);
  if ( !v21 )
    goto LABEL_36;
  return ServantLimitImageMaster__GetLimitCountSealedServantName(v21, (int32_t)ServantLeader, ruby, 0LL);
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

  if ( (byte_4B32F1D & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, isFixMessage);
    sub_1BD3458(&StringLiteral_44/*"\n\n"*/, v5);
    sub_1BD3458(&StringLiteral_1/*""*/, v6);
    sub_1BD3458(&StringLiteral_10465/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v7);
    byte_4B32F1D = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10465/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_62536508(
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

  if ( (byte_4B32F1C & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B32F1C = 1;
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
    sub_1BD36B4(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41290364(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_41290364(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_1BD36B4(0LL, v6);
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

  if ( (byte_4B32F0C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B32F0C = 1;
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
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v13, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v10 = Entity;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_object )
        sub_1BD36B4(0LL, v12);
      Entity = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 (Il2CppObject **)&this->fields.userServantEntity,
                 v10,
                 (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp((PartyOrganizationListViewItem_o *)Entity, this, v9);
  }
}


void __fastcall PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !item )
    sub_1BD36B4(this, 0LL);
  this->fields.setupInfo = item->fields.setupInfo;
  sub_1BD33FC(&this->fields.setupInfo);
  PartyOrganizationListViewItem__Modify_32659688(this, item, v5);
}


void __fastcall PartyOrganizationListViewItem__Modify_32659688(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *userServantEntity; // x8
  UserServantEntity_o *v14; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v16; // x8
  __int64 v17; // x21
  __int64 v18; // x23
  int32_t v19; // w0
  bool IsConvertOverwriteImage; // w0
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v22; // x2
  _BOOL4 isMyServantOrNpcRestriction; // w8
  System_Int64_array *equipIdList; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v4 = this;
  if ( (byte_4B32F0D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    this = (PartyOrganizationListViewItem_o *)sub_1BD3458(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v7);
    byte_4B32F0D = 1;
  }
  if ( !item )
    goto LABEL_21;
  v4->fields.userServantEntity = item->fields.userServantEntity;
  p_userServantEntity = &v4->fields.userServantEntity;
  sub_1BD33FC(&v4->fields.userServantEntity);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  v9 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_21;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v12 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v12;
  *(_QWORD *)&v25.fields.fakeValue = v11;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                              v25,
                                              0LL);
  if ( !v10 )
    goto LABEL_21;
  v4->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v10,
                                                         (int32_t)this,
                                                         (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this = (PartyOrganizationListViewItem_o *)sub_1BD33FC(&v4->fields.servantEntity);
  userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.userServantEntity;
  *(_QWORD *)&v4->fields.classId = *(_QWORD *)&item->fields.classId;
  v4->fields.frameType = item->fields.frameType;
  if ( !userServantEntity )
    goto LABEL_21;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                              userServantEntity[6],
                                              0LL);
  v14 = v4->fields.userServantEntity;
  v4->fields.svtLimitCount = (int)this;
  if ( !v14 )
    goto LABEL_21;
  v4->fields.commandCodeIdList = UserServantEntity__getCommandCodeIdList(v14, 0LL);
  this = (PartyOrganizationListViewItem_o *)sub_1BD33FC(&v4->fields.commandCodeIdList);
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
    sub_1BD36B4(this, item);
  v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  *(_QWORD *)&v26.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v26, 0LL);
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
  v4->fields._FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  sub_1BD33FC(&v4->fields._FriendshipUpValTuple_k__BackingField);
  isMyServantOrNpcRestriction = v4->fields.isMyServantOrNpcRestriction;
  v4->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v4->fields.isFollower )
  {
    v4->fields.followerInfo = 0LL;
    v4->fields.isFollower = 0;
    sub_1BD33FC(&v4->fields.followerInfo);
  }
  equipIdList = v4->fields.equipIdList;
  *(_WORD *)&v4->fields._IsClearedWave_k__BackingField = 0;
  v4->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(v4, equipIdList, v22);
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
    sub_1BD36BC(this, userSvtId);
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
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x21
  struct System_Int32_array *v10; // x0
  struct System_Int32_array **p_equipSvtIdList; // x22
  const MethodInfo *v12; // x2
  PartyOrganizationListViewItem_o *v13; // x0
  System_Int32_array *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4B32F0A & 1) == 0 )
  {
    sub_1BD3458(&int___TypeInfo, item);
    byte_4B32F0A = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_1BD36B4(v5, v6);
  this->fields.userServantEntity = item->fields.userServantEntity;
  sub_1BD33FC(&this->fields.userServantEntity);
  this->fields.followerInfo = item->fields.followerInfo;
  sub_1BD33FC(&this->fields.followerInfo);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.setupInfo = item->fields.setupInfo;
  sub_1BD33FC(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = item->fields.questRestrictionInfo;
  sub_1BD33FC(&this->fields.questRestrictionInfo);
  this->fields.friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  sub_1BD33FC(&this->fields.friendPointCampaignEntityList);
  this->fields.servantEntity = item->fields.servantEntity;
  sub_1BD33FC(&this->fields.servantEntity);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  this->fields.commandCodeIdList = item->fields.commandCodeIdList;
  sub_1BD33FC(&this->fields.commandCodeIdList);
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
  this->fields._FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
  *(_QWORD *)&this->fields._InitPos_k__BackingField = *(_QWORD *)&item->fields._InitPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  sub_1BD33FC(&this->fields._WaveEnemyClassIds_k__BackingField);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList || (v8 = System_Array__Clone(equipSvtIdList, 0LL)) == 0LL )
  {
    this->fields.equipSvtIdList = 0LL;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
LABEL_10:
    sub_1BD33FC(p_equipSvtIdList);
    PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v12);
    return;
  }
  v9 = v8;
  v10 = (struct System_Int32_array *)sub_1BD3594(v8, int___TypeInfo);
  if ( v10 )
  {
    this->fields.equipSvtIdList = v10;
    p_equipSvtIdList = &this->fields.equipSvtIdList;
    if ( sub_1BD3594(v9, int___TypeInfo) )
      goto LABEL_10;
  }
  else
  {
    sub_1BD3974(v9);
  }
  v13 = (PartyOrganizationListViewItem_o *)sub_1BD3974(v9);
  PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(v13, v14, v15);
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
  if ( (byte_4B32F09 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_1BD3458(&DataManager_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_1BD3458(&NetworkManager_TypeInfo, v8);
    byte_4B32F09 = 1;
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_35;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_35;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4B31D77 = 1;
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_35:
    sub_1BD36B4(this, *(_QWORD *)&eventId);
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
  FollowerInfo_o *p_equipUserServantEntity; // x23
  struct ServantEntity_o **p_equipServantEntity; // x22
  struct EventUpValInfo_o **p_eventUpValInfo; // x21
  System_Collections_Generic_IEnumerable_T__o **p_eventUpValItemList; // x29
  __int64 Instance; // x0
  MethodInfo *v44; // x1
  _BOOL4 isFollower; // w8
  struct QuestRestrictionInfo_o *v46; // x8
  Il2CppObject *v47; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array *v49; // x8
  Il2CppObject *v50; // x0
  struct System_Int64_array *v51; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v53; // x8
  int32_t followerIndex; // w25
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x23
  int32_t v56; // w2
  struct System_Int64_array **p_equipIdList; // x0
  struct EventUpValSetupInfo_o *v58; // x22
  struct System_Int32_array *v59; // x8
  FollowerInfo_o *v60; // x24
  struct QuestRestrictionInfo_o *v61; // x8
  int32_t v62; // w23
  int32_t v63; // w4
  BalanceConfig_c *v64; // x0
  System_Collections_Generic_List_object__o *v65; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x22
  PartyOrganizationListViewItem___c_c *v68; // x0
  System_Func_object__int__o *_9__128_0; // x23
  Il2CppObject *v70; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v71; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  __int64 v74; // x8
  __int64 v75; // x22
  unsigned __int64 v76; // x20
  ServantEntity_o *v77; // x24
  int32_t v78; // w25
  EventPersonalMargeUpValInfo_o *v79; // x23
  __int64 v80; // x8
  __int64 v81; // x23
  unsigned __int64 v82; // x24
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  System_Collections_Generic_List_object__o *v87; // x0
  struct System_Int64_array *v88; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v92; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v93; // x23
  Il2CppClass *v94; // x24
  Il2CppClass *v95; // x25
  struct System_Int32_array *equipSvtIdList; // x8
  Il2CppObject *Master_object; // x24
  struct System_Int32_array *v98; // x8
  UserServantCollectionEntity_o *v99; // x24
  UserServantEntity_o *v100; // x25
  struct System_Int32_array *v101; // x8
  struct System_Int64_array *v102; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  System_Int64_array *EquipList; // x25
  bool EventUpVal_41034960; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_object__o *v110; // x23
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v112; // x0
  System_Func_object__int__o *_9__128_1; // x25
  Il2CppObject *v114; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  __int64 v118; // x8
  __int64 v119; // x24
  unsigned __int64 v120; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v122; // w27
  EventPersonalMargeUpValInfo_o *v123; // x25
  __int64 v124; // x8
  __int64 v125; // x25
  unsigned __int64 v126; // x26
  struct System_Object_array *items; // x8
  _QWORD *v128; // x9
  __int64 size; // x10
  Il2CppClass **v130; // x0
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
  __int64 v143; // x8
  __int64 v144; // x25
  unsigned __int64 v145; // x26
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  Il2CppClass **v149; // x0
  System_Int32_array *v150; // x23
  EventUpValSetupInfo_o *v151; // x24
  UserServantEntity_o *v152; // x22
  EventUpValSetupInfo_o *v153; // x23
  struct QuestRestrictionInfo_o *v154; // x8
  _BOOL8 v155; // x0
  __int64 v156; // x1
  System_Collections_Generic_List_object__o *v157; // x0
  Il2CppObject *current; // x1
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  Il2CppClass **v162; // x8
  UserServantEntity_o *v163; // x23
  EventUpValSetupInfo_o *v164; // x22
  struct QuestRestrictionInfo_o *v165; // x8
  ServantEntity_o *v166; // x22
  EventPersonalMargeUpValInfo_o *v167; // x21
  System_Collections_Generic_List_object__o *v168; // x19
  System_Collections_Generic_IEnumerable_T__o *v169; // x0
  System_Collections_Generic_IEnumerable_T__o *List; // x0
  System_Collections_Generic_List_Enumerator_object__o v171; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v172; // [xsp+30h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  if ( (byte_4B32F08 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, equipIdList);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v8);
    sub_1BD3458(&DataManager_TypeInfo, v9);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v12);
    sub_1BD3458(&Method_System_Linq_Enumerable_Distinct_int___, v13);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v14);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_int___, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v18);
    sub_1BD3458(&EventPersonalMargeUpValInfo_TypeInfo, v19);
    sub_1BD3458(&EventUpValSetupInfo_TypeInfo, v20);
    sub_1BD3458(&System_Func_EventDropUpValInfo__int__TypeInfo, v21);
    sub_1BD3458(&int___TypeInfo, v22);
    sub_1BD3458(&long___TypeInfo, v23);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v24);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v25);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v26);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v27);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v28);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v29);
    sub_1BD3458(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v30);
    sub_1BD3458(&NetworkManager_TypeInfo, v31);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1BD3458(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v34);
    sub_1BD3458(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__, v35);
    sub_1BD3458(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__, v36);
    sub_1BD3458(&PartyOrganizationListViewItem___c_TypeInfo, v37);
    sub_1BD3458(&UserServantEntity_TypeInfo, v38);
    byte_4B32F08 = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  eventUpVallInfo = 0LL;
  entity = 0LL;
  memset(&v172, 0, sizeof(v172));
  this->fields.equipUserServantEntity = 0LL;
  sub_1BD33FC(&this->fields.equipUserServantEntity);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1BD33FC(&this->fields.equipServantEntity);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_1BD33FC(&this->fields.eventUpValInfo);
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  Instance = sub_1BD33FC(&this->fields.eventUpValItemList);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
LABEL_194:
      sub_1BD33FC(p_equipIdList);
      return;
    }
    if ( equipIdList )
    {
      v49 = this->fields.equipIdList;
      if ( v49 == equipIdList )
        goto LABEL_62;
      v50 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
      if ( v50 )
      {
        v47 = v50;
        v51 = (struct System_Int64_array *)sub_1BD3594(v50, long___TypeInfo);
        if ( !v51 )
        {
          sub_1BD3974(v47);
          goto LABEL_13;
        }
      }
      else
      {
        v51 = 0LL;
      }
    }
    else
    {
      v64 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v64 = BalanceConfig_TypeInfo;
      }
      v51 = (struct System_Int64_array *)sub_1BD3500(long___TypeInfo, (unsigned int)v64->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v51;
    Instance = sub_1BD33FC(&this->fields.equipIdList);
    v49 = this->fields.equipIdList;
LABEL_62:
    if ( !v49 )
      goto LABEL_197;
    if ( !v49->max_length )
      goto LABEL_179;
    if ( v49->m_Items[0] >= 1 )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_197;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v88 = this->fields.equipIdList;
      if ( !v88 )
        goto LABEL_197;
      if ( !v88->max_length )
        goto LABEL_179;
      if ( !Instance )
        goto LABEL_197;
      Instance = DataMasterBase_object__object__long___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   (Il2CppObject **)&this->fields.equipUserServantEntity,
                   v88->m_Items[0],
                   (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_197;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v175.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v175.fields.fakeValue = parent;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v175, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_197;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
          v92 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_197;
          v93 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v95 = v92->_1.declaringType;
          v94 = v92->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v176.fields.currentCryptoKey = v95;
          *(_QWORD *)&v176.fields.fakeValue = v94;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v176, 0LL);
          if ( !v93 )
            goto LABEL_197;
          *p_equipServantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                              v93,
                                                              Instance,
                                                              (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          Instance = sub_1BD33FC(&this->fields.equipServantEntity);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v44);
          byte_4B31D77 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        v98 = this->fields.equipSvtIdList;
        if ( !v98 )
          goto LABEL_197;
        if ( !v98->max_length )
          goto LABEL_179;
        if ( !Master_object )
          goto LABEL_197;
        Instance = UserServantCollectionMaster__TryGetEntity(
                     (UserServantCollectionMaster_o *)Master_object,
                     &entity,
                     *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                     v98->m_Items[1],
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v99 = entity;
          v100 = (UserServantEntity_o *)sub_1BD36A4(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_41020212(v100, v99, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v100;
          sub_1BD33FC(&this->fields.equipUserServantEntity);
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_197;
          Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
          v101 = this->fields.equipSvtIdList;
          if ( !v101 )
            goto LABEL_197;
          if ( !v101->max_length )
            goto LABEL_179;
          if ( !Instance )
            goto LABEL_197;
          this->fields.equipServantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                                        v101->m_Items[1],
                                                                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          Instance = sub_1BD33FC(&this->fields.equipServantEntity);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_100:
          v102 = this->fields.equipIdList;
          if ( !v102 )
            goto LABEL_197;
          if ( !v102->max_length )
            goto LABEL_179;
          v102->m_Items[0] = 0LL;
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
    EquipList = PartyOrganizationListViewItem__GetEquipList(this, v44);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !userServantEntity )
      goto LABEL_197;
    EventUpVal_41034960 = UserServantEntity__getEventUpVal_41034960(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            EquipList,
                            *(_QWORD *)(Instance + 104),
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_41034960;
    if ( questRestrictionInfo )
    {
      v110 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v110,
        (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_197;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v112 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v112 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      _9__128_1 = (System_Func_object__int__o *)v112->static_fields->__9__128_1;
      if ( !_9__128_1 )
      {
        if ( !v112->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v112);
          v112 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v114 = (Il2CppObject *)v112->static_fields->__9;
        _9__128_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__128_1,
          v114,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__,
          0LL);
        static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        static_fields->__9__128_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_1;
        sub_1BD33FC(&static_fields->__9__128_1);
      }
      v116 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__128_1,
                                                                    (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v117 = System_Linq_Enumerable__Distinct_int_(
               v116,
               (const MethodInfo_2F4EA68 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                            v117,
                            (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_197;
      v118 = *(_QWORD *)(Instance + 24);
      v119 = Instance;
      if ( (int)v118 >= 1 )
      {
        v120 = 0LL;
        while ( 1 )
        {
          if ( v120 >= (unsigned int)v118 )
            goto LABEL_179;
          servantEntity = this->fields.servantEntity;
          v122 = *(_DWORD *)(v119 + 4 * v120 + 32);
          v123 = (EventPersonalMargeUpValInfo_o *)sub_1BD36A4(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v123, v122, servantEntity, 0LL);
          Instance = (__int64)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_197;
          Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v123 )
            goto LABEL_197;
          EventPersonalMargeUpValInfo__Add(v123, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = EventPersonalMargeUpValInfo__IsEmpty(v123, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v123, 0LL);
            if ( !Instance )
              goto LABEL_197;
            v124 = *(_QWORD *)(Instance + 24);
            v125 = Instance;
            if ( (int)v124 >= 1 )
              break;
          }
LABEL_133:
          LODWORD(v118) = *(_DWORD *)(v119 + 24);
          if ( (__int64)++v120 >= (int)v118 )
            goto LABEL_134;
        }
        v126 = 0LL;
        while ( v126 < (unsigned int)v124 )
        {
          if ( !v110 )
            goto LABEL_197;
          v44 = *(MethodInfo **)(v125 + 32 + 8 * v126);
          items = v110->fields._items;
          v128 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v110->fields._version;
          if ( !items )
            goto LABEL_197;
          size = v110->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)v44,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
          }
          else
          {
            v130 = &items->obj.klass + size;
            v110->fields._size = size + 1;
            v130[4] = (Il2CppClass *)v44;
            Instance = sub_1BD33FC(v130 + 4);
          }
          LODWORD(v124) = *(_DWORD *)(v125 + 24);
          if ( (__int64)++v126 >= (int)v124 )
            goto LABEL_133;
        }
        goto LABEL_179;
      }
LABEL_134:
      if ( !v110 )
        goto LABEL_197;
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v110,
                                                                                  (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      sub_1BD33FC(&this->fields.eventUpValItemList);
      v132 = 1;
      v133 = this;
      goto LABEL_161;
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_197;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v135 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v135,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_197;
    v136 = (*p_setupInfo)->fields.eventIdList;
    if ( !v136 )
      goto LABEL_197;
    v137 = *(_QWORD *)&v136->max_length;
    if ( (int)v137 < 1 )
    {
LABEL_159:
      if ( !v135 )
        goto LABEL_197;
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                                                  v135,
                                                                                  (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      sub_1BD33FC(&this->fields.eventUpValItemList);
      v133 = this;
      v132 = 0;
LABEL_161:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v133, v132, v131);
      p_setupInfo = &this->fields.setupInfo;
LABEL_162:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v150 = (System_Int32_array *)sub_1BD3500(int___TypeInfo, 1LL);
        v151 = (EventUpValSetupInfo_o *)sub_1BD36A4(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_39701620(v151, v150, 0, 0, 0, 0LL);
        *p_setupInfo = v151;
        sub_1BD33FC(p_setupInfo);
      }
      if ( this->fields.isEventUpVal )
      {
        v152 = this->fields.userServantEntity;
        v153 = this->fields.setupInfo;
        Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(this, v44);
        v154 = this->fields.questRestrictionInfo;
        if ( !v154 )
          goto LABEL_197;
        if ( !v152 )
          goto LABEL_197;
        Instance = UserServantEntity__GetBonusUpVal(
                     v152,
                     &eventUpVallInfo,
                     v153,
                     (System_Int64_array *)Instance,
                     v154->fields.questId,
                     v154->fields.questPhase,
                     0LL);
        if ( !eventUpVallInfo )
          goto LABEL_197;
        Instance = (__int64)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_197;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v171,
          (System_Collections_Generic_List_object__o *)Instance,
          (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v172 = v171;
        while ( 1 )
        {
          v155 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v172,
                   (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v155 )
            break;
          if ( !*p_eventUpValInfo )
            sub_1BD36B4(v155, v156);
          v157 = (System_Collections_Generic_List_object__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v157 )
            sub_1BD36B4(0LL, v156);
          current = v172.fields._current;
          v159 = v157->fields._items;
          v160 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v157->fields._version;
          if ( !v159 )
            sub_1BD36B4(v157, current);
          v161 = v157->fields._size;
          if ( (unsigned int)v161 >= v159->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v157,
              current,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
          }
          else
          {
            v162 = &v159->obj.klass + v161;
            v157->fields._size = v161 + 1;
            v162[4] = (Il2CppClass *)current;
            sub_1BD33FC(v162 + 4);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v172,
          (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v163 = this->fields.userServantEntity;
        v164 = this->fields.setupInfo;
        Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(this, v44);
        v165 = this->fields.questRestrictionInfo;
        if ( !v165 || !v163 )
          goto LABEL_197;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v163,
                                      &this->fields.eventUpValInfo,
                                      v164,
                                      (System_Int64_array *)Instance,
                                      v165->fields.questId,
                                      v165->fields.questPhase,
                                      0LL);
      }
      v166 = this->fields.servantEntity;
      v167 = (EventPersonalMargeUpValInfo_o *)sub_1BD36A4(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v167, 0, v166, 0LL);
      Instance = (__int64)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v167 )
        {
          EventPersonalMargeUpValInfo__Add(v167, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v167, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v167, 0LL);
            goto LABEL_193;
          }
          v168 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v168,
            (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v168 )
            goto LABEL_197;
          System_Collections_Generic_List_object___AddRange(
            v168,
            *p_eventUpValItemList,
            (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v169 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v167, 0LL);
          System_Collections_Generic_List_object___AddRange(
            v168,
            v169,
            (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v87 = v168;
LABEL_192:
          List = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                  v87,
                                                                  (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_193:
          *p_eventUpValItemList = List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_194;
        }
      }
LABEL_197:
      sub_1BD36B4(Instance, v44);
    }
    v138 = 0LL;
    while ( 1 )
    {
      if ( v138 >= (unsigned int)v137 )
        goto LABEL_179;
      if ( !MasterData_object )
        goto LABEL_197;
      v139 = v136->m_Items[v138 + 1];
      v140 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v139,
               (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v140
        || (Instance = EventDetailEntity__HasFlag((EventDetailEntity_o *)v140, 0x800000000LL, 0LL), (Instance & 1) == 0) )
      {
        v141 = this->fields.servantEntity;
        v142 = (EventPersonalMargeUpValInfo_o *)sub_1BD36A4(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v142, v139, v141, 0LL);
        Instance = (__int64)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_197;
        Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v142 )
          goto LABEL_197;
        EventPersonalMargeUpValInfo__Add(v142, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = EventPersonalMargeUpValInfo__IsEmpty(v142, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v142, 0LL);
          if ( !Instance )
            goto LABEL_197;
          v143 = *(_QWORD *)(Instance + 24);
          v144 = Instance;
          if ( (int)v143 >= 1 )
            break;
        }
      }
LABEL_158:
      LODWORD(v137) = v136->max_length;
      if ( (__int64)++v138 >= (int)v137 )
        goto LABEL_159;
    }
    v145 = 0LL;
    while ( v145 < (unsigned int)v143 )
    {
      if ( !v135 )
        goto LABEL_197;
      v44 = *(MethodInfo **)(v144 + 32 + 8 * v145);
      v146 = v135->fields._items;
      v147 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v135->fields._version;
      if ( !v146 )
        goto LABEL_197;
      v148 = v135->fields._size;
      if ( (unsigned int)v148 >= v146->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v135,
          (Il2CppObject *)v44,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
      }
      else
      {
        v149 = &v146->obj.klass + v148;
        v135->fields._size = v148 + 1;
        v149[4] = (Il2CppClass *)v44;
        Instance = sub_1BD33FC(v149 + 4);
      }
      LODWORD(v143) = *(_DWORD *)(v144 + 24);
      if ( (__int64)++v145 >= (int)v143 )
        goto LABEL_158;
    }
LABEL_179:
    sub_1BD36BC(Instance, v44);
  }
  this->fields.equipIdList = 0LL;
  sub_1BD33FC(&this->fields.equipIdList);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v46 = this->fields.questRestrictionInfo;
  LODWORD(v47) = this->fields.followerIndex;
  if ( v46 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v46->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v47, ReturnTypeByQuestId, 0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_197;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v53 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    if ( v53 )
    {
      Instance = FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0LL);
      v56 = Instance;
      if ( !followerInfo )
        goto LABEL_197;
    }
    else
    {
      v56 = 0;
      if ( !followerInfo )
        goto LABEL_197;
    }
    Instance = FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v56, 0LL);
    if ( !v55 )
      goto LABEL_197;
    *p_equipServantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                        v55,
                                                        Instance,
                                                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    Instance = sub_1BD33FC(&this->fields.equipServantEntity);
  }
  v58 = this->fields.setupInfo;
  if ( v58 )
  {
    v59 = v58->fields.eventIdList;
    if ( !v59 )
      goto LABEL_197;
    if ( *(_QWORD *)&v59->max_length )
    {
      v60 = this->fields.followerInfo;
      v61 = this->fields.questRestrictionInfo;
      v62 = this->fields.followerIndex;
      if ( v61 )
      {
        Instance = FollowerInfo__GetReturnTypeByQuestId(v61->fields.questId, 0LL);
        v63 = Instance;
        if ( !v60 )
          goto LABEL_197;
      }
      else
      {
        v63 = 0;
        if ( !v60 )
          goto LABEL_197;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_39711460(
                                    v60,
                                    &this->fields.eventUpValInfo,
                                    v58,
                                    v62,
                                    v63,
                                    0LL);
      v65 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v65,
        (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v67 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v68 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v68 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        _9__128_0 = (System_Func_object__int__o *)v68->static_fields->__9__128_0;
        if ( !_9__128_0 )
        {
          if ( !v68->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v68);
            v68 = PartyOrganizationListViewItem___c_TypeInfo;
          }
          v70 = (Il2CppObject *)v68->static_fields->__9;
          _9__128_0 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__128_0,
            v70,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__,
            0LL);
          v71 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v71->__9__128_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_0;
          sub_1BD33FC(&v71->__9__128_0);
        }
        v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v67,
                                                                     (System_Func_TSource__TResult__o *)_9__128_0,
                                                                     (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v73 = System_Linq_Enumerable__Distinct_int_(
                v72,
                (const MethodInfo_2F4EA68 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                              v73,
                              (const MethodInfo_2F6AC1C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v74 = *(_QWORD *)(Instance + 24);
          v75 = Instance;
          if ( (int)v74 >= 1 )
          {
            v76 = 0LL;
            while ( 1 )
            {
              if ( v76 >= (unsigned int)v74 )
                goto LABEL_179;
              v77 = this->fields.servantEntity;
              v78 = *(_DWORD *)(v75 + 4 * v76 + 32);
              v79 = (EventPersonalMargeUpValInfo_o *)sub_1BD36A4(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v79, v78, v77, 0LL);
              Instance = (__int64)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_197;
              Instance = (__int64)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v79 )
                goto LABEL_197;
              EventPersonalMargeUpValInfo__Add(v79, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = EventPersonalMargeUpValInfo__IsEmpty(v79, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v79, 0LL);
                if ( !Instance )
                  goto LABEL_197;
                v80 = *(_QWORD *)(Instance + 24);
                v81 = Instance;
                if ( (int)v80 >= 1 )
                  break;
              }
LABEL_57:
              LODWORD(v74) = *(_DWORD *)(v75 + 24);
              if ( (__int64)++v76 >= (int)v74 )
                goto LABEL_58;
            }
            v82 = 0LL;
            while ( v82 < (unsigned int)v80 )
            {
              if ( !v65 )
                goto LABEL_197;
              v44 = *(MethodInfo **)(v81 + 32 + 8 * v82);
              v83 = v65->fields._items;
              v84 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v65->fields._version;
              if ( !v83 )
                goto LABEL_197;
              v85 = v65->fields._size;
              if ( (unsigned int)v85 >= v83->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v65,
                  (Il2CppObject *)v44,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
              }
              else
              {
                v86 = &v83->obj.klass + v85;
                v65->fields._size = v85 + 1;
                v86[4] = (Il2CppClass *)v44;
                Instance = sub_1BD33FC(v86 + 4);
              }
              LODWORD(v80) = *(_DWORD *)(v81 + 24);
              if ( (__int64)++v82 >= (int)v80 )
                goto LABEL_57;
            }
            goto LABEL_179;
          }
LABEL_58:
          if ( !v65 )
            goto LABEL_197;
          v87 = v65;
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
      sub_1BD36BC(this, userSvtId);
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_1BD33FC(&this->fields.equipSvtIdList);
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
  sub_1BD33FC(&this->fields._WaveEnemyClassIds_k__BackingField);
}


void __fastcall PartyOrganizationListViewItem__Set_32658724(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v16; // x8
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B32F0B & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B32F0B = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_12;
  this->fields.userServantEntity = item->fields.userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BD33FC(&this->fields.userServantEntity);
  this->fields.followerInfo = 0LL;
  sub_1BD33FC(&this->fields.followerInfo);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_12;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  *(_QWORD *)&v21.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v21, 0LL);
  if ( !v12 )
    goto LABEL_12;
  this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                           v12,
                                                           (int32_t)Instance,
                                                           (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (Il2CppObject *)sub_1BD33FC(&this->fields.servantEntity);
  userServantEntity = this->fields.userServantEntity;
  *(_QWORD *)&this->fields.classId = *(_QWORD *)&item->fields.classId;
  this->fields.frameType = item->fields.frameType;
  if ( !userServantEntity
    || (Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                     userServantEntity->fields.limitCount,
                                     0LL),
        v16 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v16) )
  {
LABEL_12:
    sub_1BD36B4(Instance, v9);
  }
  this->fields.commandCodeIdList = UserServantEntity__getCommandCodeIdList(v16, 0LL);
  sub_1BD33FC(&this->fields.commandCodeIdList);
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
  System_Array_o *v14; // x0
  struct System_Int32_array **v15; // x22
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x29
  __int64 v18; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x20
  __int64 v22; // x0
  const MethodInfo *v23; // x2
  struct System_Int32_array *v24; // [xsp+8h] [xbp-158h]
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

  if ( (byte_4B32F0E & 1) == 0 )
  {
    sub_1BD3458(&int___TypeInfo, item);
    byte_4B32F0E = 1;
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
    sub_1BD36B4(p_userServantEntity, item);
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
  this->fields.userServantEntity = item->fields.userServantEntity;
  sub_1BD33FC(p_userServantEntity);
  this->fields.followerInfo = item->fields.followerInfo;
  sub_1BD33FC(&this->fields.followerInfo);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&item->fields.followerClassId;
  this->fields.servantEntity = item->fields.servantEntity;
  sub_1BD33FC(&this->fields.servantEntity);
  *(_OWORD *)&this->fields.classId = *(_OWORD *)&item->fields.classId;
  this->fields.commandCodeIdList = item->fields.commandCodeIdList;
  sub_1BD33FC(&this->fields.commandCodeIdList);
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
  v15 = &item->fields.equipSvtIdList;
  v14 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v14 )
    goto LABEL_9;
  v16 = System_Array__Clone(v14, 0LL);
  if ( !v16 )
    goto LABEL_9;
  v24 = equipSvtIdList;
  equipSvtIdList = (struct System_Int32_array *)&int___TypeInfo;
  v17 = v16;
  v18 = sub_1BD3594(v16, int___TypeInfo);
  if ( !v18
    || (*p_equipSvtIdList = (struct System_Int32_array *)v18, equipSvtIdList = v24, !sub_1BD3594(v17, int___TypeInfo)) )
  {
    sub_1BD3974(v17);
LABEL_9:
    *p_equipSvtIdList = 0LL;
  }
  sub_1BD33FC(&this->fields.equipSvtIdList);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v19);
  this->fields.friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  sub_1BD33FC(&this->fields.friendPointCampaignEntityList);
  this->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = *(_QWORD *)&item->fields._SvtPoint_k__BackingField;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  this->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = item->fields._IsNotSupportSingle_k__BackingField;
  if ( !notChangeInitPos )
    this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  this->fields._FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_1BD33FC(&item->fields.userServantEntity);
  item->fields.followerInfo = followerInfo;
  sub_1BD33FC(&item->fields.followerInfo);
  *(_QWORD *)&item->fields.followerClassId = v7;
  item->fields.isFollower = isFollower;
  item->fields.servantEntity = servantEntity;
  item->fields.isFixNpc = isFixNpc;
  sub_1BD33FC(&item->fields.servantEntity);
  *(_QWORD *)&item->fields.classId = v11;
  *(_QWORD *)&item->fields.frameType = v10;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_1BD33FC(&item->fields.commandCodeIdList);
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
  v20 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL);
  if ( !v20 )
    goto LABEL_17;
  v21 = v20;
  v22 = sub_1BD3594(v20, int___TypeInfo);
  if ( !v22 || (*v15 = (struct System_Int32_array *)v22, !sub_1BD3594(v21, int___TypeInfo)) )
  {
    sub_1BD3974(v21);
LABEL_17:
    *v15 = 0LL;
  }
  sub_1BD33FC(&item->fields.equipSvtIdList);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v23);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_1BD33FC(&item->fields.friendPointCampaignEntityList);
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v13;
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  item->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  item->fields._IsAllOutBattle_k__BackingField = IsAllOutBattle_k__BackingField;
  item->fields._IsDataLost_k__BackingField = IsDataLost_k__BackingField;
  item->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  item->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  sub_1BD33FC(&item->fields._FriendshipUpValTuple_k__BackingField);
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
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x22
  __int64 v16; // x0
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_4B32F0F & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_1BD3458(&int___TypeInfo, item);
    byte_4B32F0F = 1;
  }
  p_equipSvtIdList = &v4->fields.equipSvtIdList;
  equipSvtIdList = (System_Array_o *)v4->fields.equipSvtIdList;
  if ( !item )
    sub_1BD36B4(this, item);
  equipIdList = v4->fields.equipIdList;
  v9 = &item->fields.equipSvtIdList;
  v8 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v8 )
    goto LABEL_9;
  v10 = System_Array__Clone(v8, 0LL);
  if ( !v10 )
    goto LABEL_9;
  v11 = v10;
  v12 = sub_1BD3594(v10, int___TypeInfo);
  if ( !v12 || (*p_equipSvtIdList = v12, !sub_1BD3594(v11, int___TypeInfo)) )
  {
    sub_1BD3974(v11);
LABEL_9:
    *p_equipSvtIdList = 0LL;
  }
  sub_1BD33FC(&v4->fields.equipSvtIdList);
  PartyOrganizationListViewItem__SetEquipStatus(v4, item->fields.equipIdList, v13);
  if ( !equipSvtIdList )
    goto LABEL_15;
  v14 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v14 )
    goto LABEL_15;
  v15 = v14;
  v16 = sub_1BD3594(v14, int___TypeInfo);
  if ( !v16 || (*v9 = (struct System_Int32_array *)v16, !sub_1BD3594(v15, int___TypeInfo)) )
  {
    sub_1BD3974(v15);
LABEL_15:
    *v9 = 0LL;
  }
  sub_1BD33FC(&item->fields.equipSvtIdList);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v17);
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
  const MethodInfo_39197A8 *v53; // x5
  __int64 v54; // x0
  __int64 v55; // x1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o item; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v61; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v62; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4B32F29 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_EventCampaignMaster___, isQuestTarget);
    sub_1BD3458(&Method_DataManager_GetMaster_EventQuestMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BD3458(&DataManager_TypeInfo, v7);
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v13);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v15);
    sub_1BD3458(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v16);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BD3458(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1BD3458(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v19);
    byte_4B32F29 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_47;
  FriendshipUpCampaigns = (System_Collections_Generic_List_object__o *)EventCampaignMaster__GetFriendshipUpCampaigns(
                                                                         (EventCampaignMaster_o *)Master_object,
                                                                         (int64_t)Instance[6].monitor,
                                                                         0LL);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v25 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v25,
    (const MethodInfo_3572340 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&item,
      FriendshipUpCampaigns,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v60 = item;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v60,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v26 )
        break;
      current = (EventCampaignEntity_o *)v60.fields._current;
      if ( !v60.fields._current )
        sub_1BD36B4(v26, v27);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v60.fields._current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_1BD36B4(v26, v27);
        v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v63.fields.currentCryptoKey = v32;
        *(_QWORD *)&v63.fields.fakeValue = v31;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v63, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v33,
                (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v34 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
      v36 = this->fields.userServantEntity;
      if ( !v36 )
        sub_1BD36B4(v34, v35);
      v37 = (UserServantMaster_o *)v34;
      v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v64.fields.currentCryptoKey = v39;
      *(_QWORD *)&v64.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v64, 0LL);
      if ( !v37 )
        sub_1BD36B4(v40, (unsigned int)v40);
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
        sub_1BD36B4(HeroineData, v42);
      questId = questRestrictionInfo->fields.questId;
      questPhase = questRestrictionInfo->fields.questPhase;
      eventId = current->fields.eventId;
      v47 = SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v47 )
        sub_1BD36B4(0LL, v48);
      if ( !v24 )
        sub_1BD36B4(v47, v48);
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
        *(_QWORD *)&v61.fields.Item1 = &item;
        v61.fields.Item3 = v49;
        System_ValueTuple_int__int__Int32Enum____ctor(
          v61,
          v52,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v53);
        if ( !v25 )
          sub_1BD36B4(v54, v55);
        *(_QWORD *)&v62.fields.Item1 = item.fields._list;
        v62.fields.Item3 = item.fields._index;
        items = v25->fields._items;
        v57 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
        ++v25->fields._version;
        if ( !items )
          sub_1BD36B4(v54, *(_QWORD *)&v62.fields.Item1);
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
            v25,
            v62,
            *(const MethodInfo_3572BCC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = size + 1;
          *((System_ValueTuple_int__int__Int32Enum__o *)items->m_Items + size) = v62;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v60,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v25 )
LABEL_47:
    sub_1BD36B4(Instance, v22);
  this->fields._FriendshipUpValTuple_k__BackingField = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(v25, (const MethodInfo_3574790 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
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
  struct UserServantEntity_o **p_userServantEntity; // x20
  Il2CppObject *v21; // x21
  struct UserServantEntity_o *v22; // x8
  __int128 v23; // q1
  System_Int64_array *v24; // x22
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x21
  struct UserServantEntity_o *v28; // x8
  ServantLimitMaster_o *v29; // x21
  __int64 v30; // x22
  __int64 v31; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  int32_t v33; // w20
  int32_t v34; // w8
  struct UserServantEntity_o *userServantEntity; // x8
  UserServantEntity_o *v36; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+60h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4B32F2A & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_1BD3458(&long___TypeInfo, v6);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B32F2A = 1;
  }
  if ( this->fields.equipUserServantEntity && !this->fields._IsDisappearEquip_k__BackingField )
  {
    p_equipUserServantEntity = &this->fields.equipUserServantEntity;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1BD3500(long___TypeInfo, 1LL);
    v14 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_54;
    v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
    v16 = (System_Int64_array *)Instance;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.fakeValue = v15;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v40 = v41;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v40, 0LL);
    if ( !v16 )
      goto LABEL_54;
    if ( !v16->max_length )
LABEL_55:
      sub_1BD36BC(Instance, v13);
    v16->m_Items[0] = Instance;
    if ( !Master_object )
      goto LABEL_54;
    if ( DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)Master_object, v16, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
      v17 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_54;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v41;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v39, 0LL);
      if ( !v19 )
        goto LABEL_54;
      *p_equipUserServantEntity = (struct UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                                                  v19,
                                                                  Instance,
                                                                  (const MethodInfo_31D209C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      sub_1BD33FC(&this->fields.equipUserServantEntity);
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
    v21 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_1BD3500(long___TypeInfo, 1LL);
    v22 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_54;
    v23 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
    v24 = (System_Int64_array *)Instance;
    *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v41.fields.fakeValue = v23;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v38 = v41;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v38, 0LL);
    if ( !v24 )
      goto LABEL_54;
    if ( v24->max_length )
    {
      v24->m_Items[0] = Instance;
      if ( v21 )
      {
        if ( !DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v21, v24, 0LL) )
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
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
          v25 = *p_userServantEntity;
          if ( *p_userServantEntity )
          {
            v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
            v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v41.fields.fakeValue = v26;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v37 = v41;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v37, 0LL);
            if ( v27 )
            {
              *p_userServantEntity = (struct UserServantEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                                                     v27,
                                                                     Instance,
                                                                     (const MethodInfo_31D209C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              sub_1BD33FC(&this->fields.userServantEntity);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = (__int64)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                v28 = *p_userServantEntity;
                if ( *p_userServantEntity )
                {
                  v29 = (ServantLimitMaster_o *)Instance;
                  v31 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
                  v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v42.fields.currentCryptoKey = v31;
                  *(_QWORD *)&v42.fields.fakeValue = v30;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v42, 0LL);
                  v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_userServantEntity;
                  if ( *p_userServantEntity )
                  {
                    v33 = Instance;
                    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v32[6], 0LL);
                    if ( v29 )
                    {
                      Instance = (__int64)ServantLimitMaster__GetEntity(v29, v33, Instance, 0LL);
                      if ( Instance )
                      {
                        v34 = *(_DWORD *)(Instance + 24);
                        Instance = (__int64)this->fields.userServantEntity;
                        this->fields.rarityId = v34;
                        if ( Instance )
                        {
                          Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
                          userServantEntity = this->fields.userServantEntity;
                          this->fields.frameType = Instance;
                          if ( userServantEntity )
                          {
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                         userServantEntity->fields.limitCount,
                                         0LL);
                            v36 = this->fields.userServantEntity;
                            this->fields.svtLimitCount = Instance;
                            if ( v36 )
                            {
                              this->fields.commandCodeIdList = UserServantEntity__getCommandCodeIdList(v36, 0LL);
                              sub_1BD33FC(&this->fields.commandCodeIdList);
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
      sub_1BD36B4(Instance, v13);
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

  if ( (byte_4B32F28 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_1BD3458(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_4B32F28 = 1;
  }
  if ( !item )
    goto LABEL_13;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((methodPtr_low = LOBYTE(PartyOrganizationListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(viewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    v7 = (PartyOrganizationListViewItem_o *)sub_1BD3974(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_32659688(v7, v8, v9);
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
      sub_1BD36B4(this, item);
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

  if ( (byte_4B32F24 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v3);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B32F24 = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v12);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(SvtId, 0LL);
    if ( !MasterData_object )
LABEL_17:
      sub_1BD36B4(Instance, v10);
    Entity = ServantCostumeMaster__GetEntity((ServantCostumeMaster_o *)MasterData_object, (int32_t)Instance, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B32906 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, v7);
    byte_4B32906 = 1;
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

  if ( (byte_4B32F19 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B32F19 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v11, 0LL);
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

  if ( (byte_4B32F1A & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B32F1A = 1;
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

  if ( (byte_4B32F18 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B32F18 = 1;
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

  if ( (byte_4B32F17 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B32F17 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v6, 0LL);
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

  if ( (byte_4B32F27 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    byte_4B32F27 = 1;
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
      sub_1BD36B4(Atk, v11);
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
      sub_1BD36B4(Hp, v11);
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

  if ( (byte_4B32F14 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B32F14 = 1;
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

  if ( (byte_4B32F13 & 1) == 0 )
  {
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B32F13 = 1;
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

  if ( (byte_4B32F15 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_19278/*"error"*/, method);
    byte_4B32F15 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo && (IsNpc = FollowerInfo__get_IsNpc(followerInfo, 0LL)) )
  {
    v7 = this->fields.followerInfo;
    if ( !v7 )
      sub_1BD36B4(IsNpc, v6);
    return v7->fields.userName;
  }
  else if ( this->fields.servantEntity )
  {
    return PartyOrganizationListViewItem__GetServantName(this, this->fields.nameLimitCount, v2);
  }
  else
  {
    return (System_String_o *)StringLiteral_19278/*"error"*/;
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
  sub_1BD33FC(&this->fields._FriendshipUpValTuple_k__BackingField);
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
  sub_1BD33FC(&this->fields._WaveEnemyClassIds_k__BackingField);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B32FE3 & 1) == 0 )
  {
    sub_1BD3458(&PartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4B32FE3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyOrganizationListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v2;
  sub_1BD33FC(PartyOrganizationListViewItem___c_TypeInfo->static_fields);
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
    sub_1BD36B4(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_1BD36B4(this, 0LL);
  return drop->fields.eventId;
}