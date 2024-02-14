void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_30700972(
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  void *Instance; // x0
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x2
  int v67; // w9

  if ( (byte_4217DA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4217DA0 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.followerInfo = followerInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_29619684(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v54, v55, v56, v57, v58, v59);
  this->fields.fatigureTime = -1LL;
  this->fields.isFixMultipleNpc = 0;
  *(_WORD *)&this->fields.isServantNumRestriction = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  this->fields.isRestrictionServantPos = 0;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( initPos )
    v67 = initPos;
  else
    v67 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v67;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v66);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_30704360(
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
  _BOOL4 v11; // w24
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
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct FollowerInfo_o **p_followerInfo; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int64_t ReturnTypeByQuestId; // x0
  FollowerInfo_o *followerInfo; // x23
  int32_t v57; // w2
  int32_t v58; // w0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  FollowerInfo_o *v65; // x24
  struct QuestRestrictionInfo_o *v66; // x8
  int32_t followerIndex; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x22
  int32_t v69; // w2
  struct ServantEntity_o *v70; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct ServantEntity_o *v78; // x8
  ServantLimitMaster_o *v79; // x27
  __int64 v80; // x23
  __int64 v81; // x24
  FollowerInfo_o *v82; // x24
  struct QuestRestrictionInfo_o *v83; // x8
  int32_t v84; // w23
  int32_t v85; // w28
  int32_t v86; // w2
  FollowerInfo_o *v87; // x28
  FollowerInfo_o *v88; // x24
  struct QuestRestrictionInfo_o *v89; // x8
  int32_t v90; // w23
  int32_t v91; // w2
  FollowerInfo_o *v92; // x24
  struct QuestRestrictionInfo_o *v93; // x8
  int32_t v94; // w23
  int32_t v95; // w2
  FollowerInfo_o *v96; // x24
  struct QuestRestrictionInfo_o *v97; // x8
  int32_t v98; // w27
  int32_t v99; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  const MethodInfo *v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  _BOOL4 v114; // w23
  const MethodInfo *v115; // x1
  QuestRestrictionInfo_o *v116; // x27
  __int64 v117; // x23
  __int64 v118; // x24
  int32_t v119; // w28
  const MethodInfo *v120; // x1
  const MethodInfo *v121; // x1
  int32_t v122; // w24
  int32_t DispLimitCount; // w23
  const MethodInfo *v124; // x1
  bool IsRestriction_30608704; // w0
  int v126; // w1
  int v127; // w8
  int64_t v128; // x23
  unsigned int v129; // w28
  __int64 v130; // x25
  QuestRestrictionInfo_o *v131; // x24
  __int64 v132; // x26
  __int64 v133; // x27
  int32_t v134; // w26
  int32_t v135; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v137; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x23
  struct ServantEntity_o *v139; // x8
  UserEventDataLostEntity_o *v140; // x23
  __int64 v141; // x24
  __int64 v142; // x25
  struct ServantEntity_o *v143; // x9
  UserEventDataLostEntity_o *v144; // x22
  __int64 v145; // x23
  __int64 v146; // x24
  const MethodInfo *v147; // x1
  struct QuestRestrictionInfo_o *v148; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v150; // x23
  const MethodInfo *v151; // x1
  const MethodInfo *v152; // x2
  const MethodInfo *v153; // x1
  const MethodInfo *v154; // x1
  int32_t v155; // w21
  __int64 v156; // x24
  __int64 v157; // x25
  int32_t v158; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v160; // x1
  const MethodInfo *v161; // x2
  QuestRestrictionInfo_o *v162; // x8
  const MethodInfo *v163; // x1
  bool IsNotClassBoard; // w20
  __int64 v165; // x0
  _BOOL4 v166; // [xsp+4h] [xbp-6Ch]
  FollowerInfo_o *v167; // [xsp+8h] [xbp-68h]
  QuestPhaseEntity_o *v168; // [xsp+10h] [xbp-60h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16

  v11 = isFixNpc;
  if ( (byte_4217D9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_B0D8A4(&DataManager_TypeInfo, v24);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_B0D8A4(&NetworkManager_TypeInfo, v26);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_4217D9E = 1;
  }
  v168 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)follower,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.isFollower = 1;
  this->fields.isFixNpc = v11;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v57 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_147;
  }
  else
  {
    v57 = 0;
    if ( !followerInfo )
      goto LABEL_147;
  }
  v166 = v11;
  v58 = FollowerInfo__getIndex(followerInfo, followerClassId, v57, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v58;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v65 = this->fields.followerInfo;
  v66 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)ReturnTypeByQuestId;
  if ( v66 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v66->fields.questId, 0LL);
    v69 = ReturnTypeByQuestId;
    if ( !v65 )
      goto LABEL_147;
  }
  else
  {
    v69 = 0;
    if ( !v65 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v65, followerIndex, v69, 0LL);
  if ( !v68 )
    goto LABEL_147;
  v70 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v68,
                                    ReturnTypeByQuestId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v70;
  p_servantEntity = &this->fields.servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v70,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v78 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_147;
  v167 = follower;
  v79 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v81 = *(_QWORD *)&v78->fields.id.fields.currentCryptoKey;
  v80 = *(_QWORD *)&v78->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v170.fields.currentCryptoKey = v81;
  *(_QWORD *)&v170.fields.fakeValue = v80;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v170, 0LL);
  v82 = this->fields.followerInfo;
  v83 = this->fields.questRestrictionInfo;
  v84 = this->fields.followerIndex;
  v85 = ReturnTypeByQuestId;
  if ( v83 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v83->fields.questId, 0LL);
    v86 = ReturnTypeByQuestId;
    if ( !v82 )
      goto LABEL_147;
  }
  else
  {
    v86 = 0;
    if ( !v82 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v82, v84, v86, 0LL);
  if ( !v79 )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)ServantLimitMaster__GetEntity(v79, v85, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_147;
  v87 = v167;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  v88 = this->fields.followerInfo;
  v89 = this->fields.questRestrictionInfo;
  v90 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v89 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v89->fields.questId, 0LL);
    v91 = ReturnTypeByQuestId;
    if ( !v88 )
      goto LABEL_147;
  }
  else
  {
    v91 = 0;
    if ( !v88 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v88, v90, v91, 0LL);
  v92 = this->fields.followerInfo;
  v93 = this->fields.questRestrictionInfo;
  v94 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v93 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v93->fields.questId, 0LL);
    v95 = ReturnTypeByQuestId;
    if ( !v92 )
      goto LABEL_147;
  }
  else
  {
    v95 = 0;
    if ( !v92 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v92, v94, v95, 0LL);
  v96 = this->fields.followerInfo;
  v97 = this->fields.questRestrictionInfo;
  v98 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v97 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v97->fields.questId, 0LL);
    v99 = ReturnTypeByQuestId;
    if ( !v96 )
      goto LABEL_147;
  }
  else
  {
    v99 = 0;
    if ( !v96 )
      goto LABEL_147;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v96, v98, v99, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v114 = v166;
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v107) )
    goto LABEL_49;
  ReturnTypeByQuestId = (int64_t)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_147;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v116 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v115);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v118 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v117 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v171.fields.currentCryptoKey = v118;
    *(_QWORD *)&v171.fields.fakeValue = v117;
    v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v171, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v120);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v122 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v121);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v124);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    IsRestriction_30608704 = QuestRestrictionInfo__IsRestriction_30608704(
                               v116,
                               &this->fields.isQuestRestrictionWhole,
                               v119,
                               v122,
                               DispLimitCount,
                               *(_DWORD *)(ReturnTypeByQuestId + 68),
                               this->fields._InitPos_k__BackingField,
                               0LL);
    v87 = v167;
    v114 = v166;
    this->fields.isQuestRestriction = IsRestriction_30608704;
  }
  else
  {
LABEL_49:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v126 = initPos;
  else
    v126 = index + 1;
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v126;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                                questRestrictionInfo,
                                v126,
                                0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !v87 )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = v87->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v127 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v128 = ReturnTypeByQuestId;
    if ( v127 >= 1 )
    {
      v129 = 0;
      while ( 1 )
      {
        if ( v129 >= v127 )
        {
          v165 = sub_B0D9A8(ReturnTypeByQuestId);
          sub_B0D948(v165, 0LL);
        }
        v130 = *(_QWORD *)(v128 + 8LL * (int)v129 + 32);
        if ( !v130 )
          goto LABEL_147;
        v131 = *p_questRestrictionInfo;
        v133 = *(_QWORD *)(v130 + 80);
        v132 = *(_QWORD *)(v130 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v172.fields.currentCryptoKey = v133;
        *(_QWORD *)&v172.fields.fakeValue = v132;
        v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v172, 0LL);
        v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v130 + 96),
                 0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v130, 0, 0LL);
        if ( !v131 )
          goto LABEL_147;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v131,
                                v134,
                                v135,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v127 = *(_DWORD *)(v128 + 24);
        if ( (int)++v129 >= v127 )
          goto LABEL_84;
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
    if ( !IsNpcMulitipleOrOnly || !v114 )
    {
      this->fields.isFixMultipleNpc = 0;
      goto LABEL_84;
    }
    ReturnTypeByQuestId = (int64_t)this->fields.questRestrictionInfo;
    this->fields.isFixMultipleNpc = 1;
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = QuestRestrictionInfo__IsUseOldMaster((QuestRestrictionInfo_o *)ReturnTypeByQuestId, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_147;
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      if ( !(*p_questRestrictionInfo)->fields.isNpcEditablePos )
        goto LABEL_84;
    }
    else
    {
      ReturnTypeByQuestId = QuestRestrictionInfo__IsEditablePos(*p_questRestrictionInfo, initPos, 0LL);
      if ( (ReturnTypeByQuestId & 1) == 0 )
        goto LABEL_84;
    }
    if ( !v87 )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = v87->fields.npcFollowerSvtId;
  }
LABEL_84:
  v137 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v137 && v137->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    ReturnTypeByQuestId = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_147;
    ReturnTypeByQuestId = UserEventDataLostMaster__TryGetEntity(
                            (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
                            &entity,
                            ReturnTypeByQuestId,
                            (*p_questRestrictionInfo)->fields.dataLostBattleId,
                            0LL);
    if ( (ReturnTypeByQuestId & 1) != 0 )
    {
      v139 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v140 = entity;
      v142 = *(_QWORD *)&v139->fields.id.fields.currentCryptoKey;
      v141 = *(_QWORD *)&v139->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v173.fields.currentCryptoKey = v142;
      *(_QWORD *)&v173.fields.fakeValue = v141;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v173, 0LL);
      if ( !v140 )
        goto LABEL_147;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v140, ReturnTypeByQuestId, 0LL);
      v143 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v144 = entity;
      v146 = *(_QWORD *)&v143->fields.id.fields.currentCryptoKey;
      v145 = *(_QWORD *)&v143->fields.id.fields.fakeValue;
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v174.fields.currentCryptoKey = v146;
        *(_QWORD *)&v174.fields.fakeValue = v145;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v174, 0LL);
        if ( !v144 )
          goto LABEL_147;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v144,
                                                         ReturnTypeByQuestId,
                                                         0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v175.fields.currentCryptoKey = v146;
        *(_QWORD *)&v175.fields.fakeValue = v145;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v175, 0LL);
        if ( !v144 )
          goto LABEL_147;
        if ( UserEventDataLostEntity__IsDataLost(v144, ReturnTypeByQuestId, 0LL) )
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v148 = this->fields.questRestrictionInfo;
  if ( v148 )
  {
    eventId = v148->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v150 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_147;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v151) )
        {
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v153);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v155 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v155;
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v154);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v157 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v156 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v176.fields.currentCryptoKey = v157;
          *(_QWORD *)&v176.fields.fakeValue = v156;
          v158 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v176, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v150, eventId, v155, v158, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v152);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v147) )
    goto LABEL_142;
  ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v160);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v162 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v168,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (int64_t)v168;
          if ( !v168 )
            goto LABEL_147;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v168, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v163);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v162) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_146;
        }
      }
LABEL_147:
      sub_B0D97C(ReturnTypeByQuestId);
    }
  }
  else
  {
LABEL_142:
    LOBYTE(v162) = 0;
  }
LABEL_146:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v162;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v161);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_30730744(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *equipIdList,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t initPos,
        const MethodInfo *method)
{
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int64_t Instance; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v62; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x26
  __int64 v64; // x27
  __int64 v65; // x28
  struct ServantEntity_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  ServantLimitMaster_o *v73; // x26
  int32_t v74; // w27
  struct ServantEntity_o *servantEntity; // x8
  int32_t v76; // w10
  int32_t v77; // w8
  struct UserServantEntity_o *v78; // x8
  __int64 v79; // x24
  __int64 v80; // x25
  UserServantEntity_o *v81; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  QuestRestrictionInfo_o *v95; // x24
  struct UserServantEntity_o *v96; // x8
  __int64 v97; // x25
  __int64 v98; // x26
  int32_t v99; // w25
  int32_t v100; // w26
  QuestRestrictionInfo_o *v101; // x24
  UserServantEntity_o *v102; // x8
  __int64 v103; // x25
  __int64 v104; // x26
  int32_t v105; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v107; // x2
  struct QuestRestrictionInfo_o *v108; // x8
  UserServantEntity_o *v109; // x9
  UserEventServantFatigueMaster_o *v110; // x25
  int32_t eventId; // w26
  __int64 v112; // x27
  __int64 v113; // x28
  int64_t v114; // x24
  struct QuestRestrictionInfo_o *v115; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v117; // x8
  UserEventAlloutBattleMaster_o *v118; // x25
  __int64 v119; // x26
  __int64 v120; // x27
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x24
  UserServantEntity_o *v122; // x8
  UserEventDataLostEntity_o *v123; // x24
  __int64 v124; // x25
  __int64 v125; // x26
  UserServantEntity_o *v126; // x9
  UserEventDataLostEntity_o *v127; // x24
  __int64 v128; // x25
  __int64 v129; // x26
  PartyOrganizationListViewItem_o *v130; // x0
  bool v131; // w1
  int v132; // w8
  int64_t v133; // x23
  unsigned int v134; // w28
  __int64 v135; // x25
  QuestRestrictionInfo_o *v136; // x24
  __int64 v137; // x26
  __int64 v138; // x27
  int32_t v139; // w26
  int32_t v140; // w27
  int32_t v141; // w22
  EventServantPointRankMaster_o *v142; // x23
  UserServantEntity_o *v143; // x8
  __int128 v144; // q1
  UserEventServantPointMaster_o *v145; // x24
  int64_t v146; // x25
  int32_t SvtPoint_k__BackingField; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x2
  __int64 v152; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+30h] [xbp-90h]
  UserEventServantPointEntity_o *v156; // [xsp+58h] [xbp-68h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  int64_t recoverAt; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v168; // 0:x0.16

  if ( (byte_4217D9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v22);
    sub_B0D8A4(&DataManager_TypeInfo, v23);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_B0D8A4(&NetworkManager_TypeInfo, v25);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_4217D9D = 1;
  }
  recoverAt = 0LL;
  v156 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.followerInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v49, v50, v51, v52, v53, v54);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v62 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_139;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v65 = *(_QWORD *)&v62[5].fields.currentCryptoKey;
  v64 = *(_QWORD *)&v62[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v159.fields.currentCryptoKey = v65;
  *(_QWORD *)&v159.fields.fakeValue = v64;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v159, 0LL);
  if ( !v63 )
    goto LABEL_139;
  v66 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v63,
                                    Instance,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v66;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_139;
  v73 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_139;
  v74 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_userServantEntity)[6], 0LL);
  if ( !v73 )
    goto LABEL_139;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v73, v74, Instance, 0LL);
  servantEntity = this->fields.servantEntity;
  v76 = initPos ? initPos : index + 1;
  this->fields._InitPos_k__BackingField = v76;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !servantEntity )
    goto LABEL_139;
  this->fields.classId = servantEntity->fields.classId;
  if ( !Instance )
    goto LABEL_139;
  v77 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarityId = v77;
  if ( !Instance )
    goto LABEL_139;
  Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
  v78 = this->fields.userServantEntity;
  this->fields.frameType = Instance;
  if ( !v78 )
    goto LABEL_139;
  v80 = *(_QWORD *)&v78->fields.limitCount.fields.currentCryptoKey;
  v79 = *(_QWORD *)&v78->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v160.fields.currentCryptoKey = v80;
  *(_QWORD *)&v160.fields.fakeValue = v79;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v160, 0LL);
  v81 = this->fields.userServantEntity;
  this->fields.svtLimitCount = Instance;
  if ( !v81 )
    goto LABEL_139;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v81, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v95 = this->fields.questRestrictionInfo;
  if ( v95 )
  {
    v96 = this->fields.userServantEntity;
    if ( !v96 )
      goto LABEL_139;
    v98 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
    v97 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v161.fields.currentCryptoKey = v98;
    *(_QWORD *)&v161.fields.fakeValue = v97;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v161, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_139;
    v99 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_userServantEntity)[6], 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_139;
    v100 = Instance;
    Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_139;
    Instance = QuestRestrictionInfo__IsRestriction_30608704(
                 v95,
                 &this->fields.isQuestRestrictionWhole,
                 v99,
                 v100,
                 Instance,
                 (*p_userServantEntity)[16].fields.currentCryptoKey,
                 this->fields._InitPos_k__BackingField,
                 0LL);
    v101 = this->fields.questRestrictionInfo;
    this->fields.isQuestRestriction = Instance & 1;
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
    if ( v101 )
    {
      v102 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_139;
      v104 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
      v103 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v162.fields.currentCryptoKey = v104;
      *(_QWORD *)&v162.fields.fakeValue = v103;
      v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v162, 0LL);
      IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v101, v105, 0LL);
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
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  v108 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( v108 )
  {
    if ( v108->fields.isFatigure )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_139;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_139;
      v109 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_139;
      v110 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v113 = *(_QWORD *)&v109->fields.svtId.fields.currentCryptoKey;
      v112 = *(_QWORD *)&v109->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v163.fields.currentCryptoKey = v113;
      *(_QWORD *)&v163.fields.fakeValue = v112;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v163, 0LL);
      if ( !v110 )
        goto LABEL_139;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v110,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v114 = recoverAt;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__getTime(0LL);
        if ( v114 > Instance )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v115 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_139;
    if ( v115->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v115->fields.allOutBattleGroupNo;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_139;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v117 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_139;
      v118 = (UserEventAlloutBattleMaster_o *)Instance;
      v120 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
      v119 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v164.fields.currentCryptoKey = v120;
      *(_QWORD *)&v164.fields.fakeValue = v119;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v164, 0LL);
      if ( !*p_questRestrictionInfo || !v118 )
        goto LABEL_139;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v118,
                   Instance,
                   (*p_questRestrictionInfo)->fields.eventId,
                   allOutBattleGroupNo,
                   0LL);
      if ( (Instance & 1) != 0 )
        this->fields._IsAllOutBattle_k__BackingField = 1;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_139;
    if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
        goto LABEL_139;
      Instance = UserEventDataLostMaster__TryGetEntity(
                   (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
                   &entity,
                   Instance,
                   (*p_questRestrictionInfo)->fields.dataLostBattleId,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v122 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_139;
        v123 = entity;
        v125 = *(_QWORD *)&v122->fields.svtId.fields.currentCryptoKey;
        v124 = *(_QWORD *)&v122->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v165.fields.currentCryptoKey = v125;
        *(_QWORD *)&v165.fields.fakeValue = v124;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v165, 0LL);
        if ( !v123 )
          goto LABEL_139;
        Instance = UserEventDataLostEntity__IsRestart(v123, Instance, 0LL);
        v126 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_139;
        v127 = entity;
        v129 = *(_QWORD *)&v126->fields.svtId.fields.currentCryptoKey;
        v128 = *(_QWORD *)&v126->fields.svtId.fields.fakeValue;
        if ( (Instance & 1) != 0 )
        {
          if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v166.fields.currentCryptoKey = v129;
          *(_QWORD *)&v166.fields.fakeValue = v128;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v166, 0LL);
          if ( !v127 )
            goto LABEL_139;
          Instance = UserEventDataLostEntity__GetTimesToRestart(v127, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v167.fields.currentCryptoKey = v129;
          *(_QWORD *)&v167.fields.fakeValue = v128;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v167, 0LL);
          if ( !v127 )
            goto LABEL_139;
          Instance = UserEventDataLostEntity__IsDataLost(v127, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                   questRestrictionInfo,
                   this->fields._InitPos_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        this->fields.isMyServantOrNpcRestriction = 1;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_139;
        Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_139;
        v132 = *(_DWORD *)(Instance + 24);
        v133 = Instance;
        if ( v132 >= 1 )
        {
          v134 = 0;
          while ( 1 )
          {
            if ( v134 >= v132 )
            {
              v152 = sub_B0D9A8(Instance);
              sub_B0D948(v152, 0LL);
            }
            v135 = *(_QWORD *)(v133 + 8LL * (int)v134 + 32);
            if ( !v135 )
              goto LABEL_139;
            v136 = *p_questRestrictionInfo;
            v138 = *(_QWORD *)(v135 + 80);
            v137 = *(_QWORD *)(v135 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v168.fields.currentCryptoKey = v138;
            *(_QWORD *)&v168.fields.fakeValue = v137;
            v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v168, 0LL);
            v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v135 + 96),
                     0LL);
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v135, 0, 0LL);
            if ( !v136 )
              goto LABEL_139;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v136,
                         v139,
                         v140,
                         Instance,
                         this->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            if ( (Instance & 1) == 0 )
              break;
            v132 = *(_DWORD *)(v133 + 24);
            if ( (int)++v134 >= v132 )
              goto LABEL_115;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_115:
    if ( *p_questRestrictionInfo )
    {
      v141 = (*p_questRestrictionInfo)->fields.eventId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      if ( Instance )
      {
        v142 = (EventServantPointRankMaster_o *)Instance;
        if ( !EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v141, 0LL) )
        {
LABEL_137:
          v131 = 1;
          v130 = this;
          goto LABEL_138;
        }
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v143 = (UserServantEntity_o *)*p_userServantEntity;
        if ( *p_userServantEntity )
        {
          v144 = *(_OWORD *)&v143->fields.userId.fields.fakeValue;
          v145 = (UserEventServantPointMaster_o *)Instance;
          *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v143->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v155.fields.fakeValue = v144;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v154 = v155;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v154, 0LL);
          if ( *p_userServantEntity )
          {
            v146 = Instance;
            Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
            if ( v145 )
            {
              if ( UserEventServantPointMaster__TryGetEntity(v145, &v156, v146, v141, Instance, 0LL) )
              {
                Instance = (int64_t)v156;
                if ( !v156 )
                  goto LABEL_139;
                this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v156, 0LL);
              }
              Instance = (int64_t)*p_userServantEntity;
              if ( *p_userServantEntity )
              {
                SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
                SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                                 v142,
                                 v141,
                                 SvtPoint_k__BackingField,
                                 SvtId,
                                 0LL);
                if ( EnableEntity )
                  this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
                PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v141, v150);
                goto LABEL_137;
              }
            }
          }
        }
      }
    }
LABEL_139:
    sub_B0D97C(Instance);
  }
  v130 = this;
  v131 = 0;
LABEL_138:
  PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v130, v131, v107);
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v151);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_30738796(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  void *Instance; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int v56; // w1
  int v57; // w8
  void *v58; // x22
  unsigned int v59; // w27
  __int64 v60; // x24
  QuestRestrictionInfo_o *v61; // x23
  __int64 v62; // x25
  __int64 v63; // x26
  int32_t v64; // w25
  int32_t v65; // w26
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x2
  struct QuestRestrictionInfo_o *v73; // x8
  int32_t eventId; // w21
  __int64 v75; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4217D9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B0D8A4(&DataManager_TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4217D9F = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.followerInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  *(_WORD *)&this->fields.isFollower = isFollower;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.servantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v43, v44, v45, v46, v47, v48);
  *(_QWORD *)&this->fields.classId = 0LL;
  if ( !this )
    goto LABEL_42;
  if ( initPos )
    v56 = initPos;
  else
    v56 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v56;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_32:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_33;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(questRestrictionInfo, v56, 0LL) )
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
    goto LABEL_32;
  }
  this->fields.frameType = 9;
  this->fields.isMyServantOrNpcRestriction = 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  v57 = *((_DWORD *)Instance + 6);
  v58 = Instance;
  if ( v57 >= 1 )
  {
    v59 = 0;
    while ( 1 )
    {
      if ( v59 >= v57 )
      {
        v75 = sub_B0D9A8(Instance);
        sub_B0D948(v75, 0LL);
      }
      v60 = *((_QWORD *)v58 + (int)v59 + 4);
      if ( !v60 )
        goto LABEL_42;
      v61 = this->fields.questRestrictionInfo;
      v63 = *(_QWORD *)(v60 + 80);
      v62 = *(_QWORD *)(v60 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v76.fields.currentCryptoKey = v63;
      *(_QWORD *)&v76.fields.fakeValue = v62;
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v76, 0LL);
      v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v60 + 96),
              0LL);
      Instance = (void *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)v60, 0, 0LL);
      if ( !v61 )
        goto LABEL_42;
      Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           v61,
                           v64,
                           v65,
                           (int32_t)Instance,
                           this->fields._InitPos_k__BackingField,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      v57 = *((_DWORD *)v58 + 6);
      if ( (int)++v59 >= v57 )
        goto LABEL_33;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_33:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v50, v51, v52, v53, v54, v55);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v73 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( !v73 )
    goto LABEL_40;
  eventId = v73->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_42:
    sub_B0D97C(Instance);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v72);
  }
LABEL_40:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v72);
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
  struct UserServantEntity_o *v16; // x8
  QuestRestrictionInfo_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  struct UserServantEntity_o *v20; // x8
  int32_t v21; // w23
  int32_t v22; // w24
  const MethodInfo *v23; // x1
  QuestRestrictionInfo_o *v24; // x22
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x26
  __int64 v26; // x23
  __int64 v27; // x24
  int32_t v28; // w23
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  int32_t v31; // w24
  int32_t DispLimitCount; // w25
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v36; // x23
  __int64 v37; // x24
  int32_t v38; // w23
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  int32_t v41; // w24
  UserServantEntity_o *v42; // x8
  bool IsUniqueIndividualityRestriction_21269692; // w0
  const MethodInfo *v44; // x1
  QuestRestrictionInfo_o *v45; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // kr00_16
  int32_t v47; // w0
  int32_t v48; // w27
  int32_t v49; // w28
  const MethodInfo *v50; // x1
  int32_t dispLimit; // w0
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *v53; // x22
  int32_t followerIndex; // w24
  int32_t v55; // w5
  FollowerInfo_o *v56; // x23
  struct QuestRestrictionInfo_o *v57; // x22
  int32_t v58; // w24
  int32_t v59; // w5
  bool IsUniqueIndividualityRestriction_21906972; // w0
  const MethodInfo *v61; // x1
  QuestRestrictionInfo_o *v62; // x22
  ServantLeaderInfo_o *v63; // x0
  bool IsFixedSupportPosition_30613260; // w0
  QuestRestrictionInfo_o *v65; // x8
  const MethodInfo *v66; // x1
  QuestRestrictionInfo_o *v67; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v69; // w0
  int32_t svtLimitCount; // w22
  int32_t v71; // w23
  const MethodInfo *v72; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4217DA7 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_4217DA7 = 1;
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
      goto LABEL_53;
    ServantLeader = this->fields.followerInfo;
    if ( !ServantLeader )
      goto LABEL_78;
    ServantLeader = (void *)FollowerInfo__get_IsNpc((FollowerInfo_o *)ServantLeader, 0LL);
    if ( ((unsigned __int8)ServantLeader & 1) == 0
      && (p_questRestrictionInfo = &this->fields.questRestrictionInfo, (v24 = this->fields.questRestrictionInfo) != 0LL) )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v23);
      if ( !ServantLeader )
        goto LABEL_78;
      v27 = *((_QWORD *)ServantLeader + 6);
      v26 = *((_QWORD *)ServantLeader + 7);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v75.fields.currentCryptoKey = v27;
      *(_QWORD *)&v75.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v75, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v29);
      if ( !ServantLeader )
        goto LABEL_78;
      v31 = *((_DWORD *)ServantLeader + 16);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v30);
      if ( !ServantLeader )
        goto LABEL_78;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v33);
      if ( !ServantLeader )
        goto LABEL_78;
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_30608704(
                                v24,
                                &this->fields.isQuestRestrictionWhole,
                                v28,
                                v31,
                                DispLimitCount,
                                *((_DWORD *)ServantLeader + 17),
                                this->fields._InitPos_k__BackingField,
                                0LL);
      this->fields.isQuestRestriction = (unsigned __int8)ServantLeader & 1;
      if ( ((unsigned __int8)ServantLeader & 1) == 0 )
      {
        ServantLeader = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_78;
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_30625648(
                                  (QuestRestrictionInfo_o *)ServantLeader,
                                  this->fields._InitPos_k__BackingField,
                                  0LL);
        if ( ((unsigned __int8)ServantLeader & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v34);
          if ( !ServantLeader )
            goto LABEL_78;
          v37 = *((_QWORD *)ServantLeader + 6);
          v36 = *((_QWORD *)ServantLeader + 7);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v76.fields.currentCryptoKey = v37;
          *(_QWORD *)&v76.fields.fakeValue = v36;
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v76, 0LL);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v39);
          if ( !ServantLeader )
            goto LABEL_78;
          v41 = *((_DWORD *)ServantLeader + 16);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v40);
          if ( !ServantLeader )
            goto LABEL_78;
          ServantLeader = (void *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_78;
          ServantLeader = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                    questRestrictionInfo,
                                    v38,
                                    v41,
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
LABEL_53:
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      *(_WORD *)&this->fields.isQuestRestriction = 0;
    }
    followerInfo = this->fields.followerInfo;
    v53 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v53 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0LL);
      v55 = (int)ServantLeader;
      if ( !followerInfo )
        goto LABEL_78;
    }
    else
    {
      v55 = 0;
      if ( !followerInfo )
        goto LABEL_78;
    }
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_21906796(
                              followerInfo,
                              v53,
                              followerIndex,
                              partyItem,
                              num,
                              v55,
                              0LL);
    v56 = this->fields.followerInfo;
    v57 = this->fields.questRestrictionInfo;
    v58 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
    if ( v57 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v57->fields.questId, 0LL);
      v59 = (int)ServantLeader;
      if ( !v56 )
        goto LABEL_78;
    }
    else
    {
      v59 = 0;
      if ( !v56 )
        goto LABEL_78;
    }
    IsUniqueIndividualityRestriction_21906972 = FollowerInfo__IsUniqueIndividualityRestriction_21906972(
                                                  v56,
                                                  v57,
                                                  v58,
                                                  partyItem,
                                                  num,
                                                  v59,
                                                  0LL);
    v62 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21906972;
    if ( v62 )
    {
      v63 = PartyOrganizationListViewItem__get_ServantLeader(this, v61);
      IsFixedSupportPosition_30613260 = QuestRestrictionInfo__IsFixedSupportPosition_30613260(v62, num, v63, 0LL);
      v65 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_30613260;
      if ( v65 )
      {
        ServantLeader = (void *)QuestRestrictionInfo__IsUseOldMaster(v65, 0LL);
        if ( ((unsigned __int8)ServantLeader & 1) == 0 )
          goto LABEL_71;
        if ( !partyItem )
          goto LABEL_78;
        ServantLeader = PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( !ServantLeader )
          goto LABEL_78;
        if ( *((_BYTE *)ServantLeader + 224) )
          goto LABEL_71;
        ServantLeader = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_78;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport((QuestRestrictionInfo_o *)ServantLeader, 0LL) )
        {
LABEL_71:
          v67 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, v66);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v71 = v69;
          ServantLeader = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v72);
          if ( v67 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v67,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v71,
              svtLimitCount,
              (int32_t)ServantLeader,
              num,
              1,
              0LL);
            return;
          }
          goto LABEL_78;
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
    goto LABEL_44;
  }
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v10;
  *(_QWORD *)&v73.fields.fakeValue = v9;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v73, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v15 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_78:
    sub_B0D97C(ServantLeader);
  }
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_30608704(
                            v8,
                            &this->fields.isQuestRestrictionWhole,
                            v13,
                            v14,
                            (int32_t)ServantLeader,
                            v15->fields.lv,
                            this->fields._InitPos_k__BackingField,
                            0LL);
  this->fields.isQuestRestriction = (unsigned __int8)ServantLeader & 1;
  if ( ((unsigned __int8)ServantLeader & 1) == 0 )
  {
    v16 = this->fields.userServantEntity;
    if ( v16 )
    {
      v17 = this->fields.questRestrictionInfo;
      v19 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v74.fields.currentCryptoKey = v19;
      *(_QWORD *)&v74.fields.fakeValue = v18;
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v74, 0LL);
      v20 = this->fields.userServantEntity;
      if ( v20 )
      {
        v21 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                  v20->fields.limitCount,
                                  0LL);
        if ( this->fields.userServantEntity )
        {
          v22 = (int)ServantLeader;
          ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
          if ( v17 )
          {
            this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v17,
                                                v21,
                                                v22,
                                                (int32_t)ServantLeader,
                                                this->fields._InitPos_k__BackingField,
                                                0,
                                                0LL);
            goto LABEL_44;
          }
        }
      }
    }
    goto LABEL_78;
  }
LABEL_44:
  ServantLeader = this->fields.userServantEntity;
  if ( !ServantLeader )
    goto LABEL_78;
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_21269292(
                            (UserServantEntity_o *)ServantLeader,
                            this->fields.questRestrictionInfo,
                            partyItem,
                            num,
                            -1,
                            0LL);
  v42 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
  if ( !v42 )
    goto LABEL_78;
  IsUniqueIndividualityRestriction_21269692 = UserServantEntity__IsUniqueIndividualityRestriction_21269692(
                                                v42,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v45 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21269692;
  if ( v45 )
  {
    v46 = PartyOrganizationListViewItem__get_SvtId(this, v44);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v46, 0LL);
    v48 = this->fields.svtLimitCount;
    v49 = v47;
    dispLimit = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v50);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v45,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v49,
      v48,
      dispLimit,
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
  struct System_Int64_array *equipIdList; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w19
  __int64 v7; // x0

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  if ( !equipIdList->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  if ( !equipIdList->m_Items[0] )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    cost = equipServantEntity->fields.cost;
  else
    cost = 0;
  equipIdList->m_Items[0] = 0LL;
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v2);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.followerInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t index; // w22
  __int64 v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4217DA1 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_4217DA1 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_B0D974(PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx, method);
  *(_DWORD *)(v6 + 296) = -1;
  *(_DWORD *)(v6 + 352) = -1;
  ListViewItem___ctor_23700744((ListViewItem_o *)v6, index, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  PartyOrganizationListViewItem__Set((PartyOrganizationListViewItem_o *)v6, this, v8);
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
  bool v9; // w8
  il2cpp_array_size_t v10; // w22
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v12; // x10
  int64_t v13; // x9
  int64_t v14; // x10
  __int64 v16; // x0

  v4 = this;
  if ( (byte_4217DA8 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    byte_4217DA8 = 1;
  }
  if ( !item )
LABEL_28:
    sub_B0D97C(this);
  if ( v4->fields.npcFollowerSvtId != item->fields.npcFollowerSvtId )
    return 0;
  isFollower = item->fields.isFollower;
  v6 = !isFollower;
  v7 = v4->fields.isFollower || isFollower;
  v8 = !v6;
  if ( v7 )
    return v8 ^ !v4->fields.isFollower;
  if ( v4->fields.userServantEntity != item->fields.userServantEntity
    || v4->fields._InitPos_k__BackingField != item->fields._InitPos_k__BackingField )
  {
    return 0;
  }
  if ( v4->fields.equipIdList && item->fields.equipIdList )
  {
    v10 = 0;
    this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( (this->fields._SvtPoint_k__BackingField & 0x4000000) != 0
        && !*(_DWORD *)&this->fields.isMyServantOrNpcRestriction )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (signed int)v10 >= *(_DWORD *)(*(_QWORD *)&this->fields.frameType + 40LL) )
        break;
      equipIdList = v4->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_28;
      if ( v10 >= equipIdList->max_length )
        goto LABEL_29;
      v12 = item->fields.equipIdList;
      if ( !v12 )
        goto LABEL_28;
      if ( v10 >= v12->max_length )
      {
LABEL_29:
        v16 = sub_B0D9A8(this);
        sub_B0D948(v16, 0LL);
      }
      v13 = equipIdList->m_Items[v10];
      v14 = v12->m_Items[v10];
      v9 = 0;
      ++v10;
      if ( v13 != v14 )
        return v9;
    }
  }
  return 1;
}


void __fastcall PartyOrganizationListViewItem__Empty(PartyOrganizationListViewItem_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x2

  this->fields.userServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.followerInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.servantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  *(_OWORD *)&this->fields.classId = xmmword_3215960;
  this->fields.commandCodeIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v39);
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

  if ( (byte_4217DB7 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&UINarrowFigureRender_TypeInfo, v3);
    byte_4217DB7 = 1;
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
        goto LABEL_22;
    }
    else
    {
      v19 = 0;
      if ( !v16 )
        goto LABEL_22;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v16, v18, v19, 0LL);
    goto LABEL_17;
  }
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v6;
  *(_QWORD *)&v21.fields.fakeValue = v5;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_22:
    sub_B0D97C(SvtId);
  v9 = SvtId;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v8, 0, 0LL);
LABEL_17:
  v20 = CardImageLimitCount;
  if ( (BYTE3(UINarrowFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  }
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

  if ( (byte_4217DB9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4217DB9 = 1;
  }
  if ( this->fields.userServantEntity )
  {
    if ( !ConstantMaster__IsOtherImage(0LL) )
      goto LABEL_7;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_22;
    if ( !UserServantEntity__IsOtherImageCancel(userServantEntity, 0LL) )
    {
      v10 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_22:
        sub_B0D97C(userServantEntity);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B0D97C(v5);
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
  struct ServantEntity_o *v5; // x9
  unsigned __int64 v6; // x8
  struct System_Int32_array *cardIds; // x10
  unsigned __int64 max_length; // x11
  il2cpp_array_size_t v9; // w10
  __int64 v10; // x0

  if ( (byte_4217DB6 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4217DB6 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity && servantEntity->fields.cardIds )
  {
    result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
    v5 = this->fields.servantEntity;
    if ( v5 )
    {
      v6 = 0LL;
      do
      {
        cardIds = v5->fields.cardIds;
        if ( !cardIds )
          break;
        max_length = cardIds->max_length;
        if ( (__int64)v6 >= (int)max_length )
          return result;
        if ( v6 >= max_length )
          goto LABEL_18;
        v9 = cardIds->m_Items[v6 + 1] - 1;
        if ( v9 <= 2 )
        {
          if ( !result )
            break;
          if ( v9 >= result->max_length )
          {
LABEL_18:
            v10 = sub_B0D9A8(result);
            sub_B0D948(v10, 0LL);
          }
          ++result->m_Items[v9 + 1];
          v5 = this->fields.servantEntity;
        }
        ++v6;
      }
      while ( v5 );
    }
    sub_B0D97C(result);
  }
  return 0LL;
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

  if ( (byte_4217DB8 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4217DB8 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return -1;
  SvtId = PartyOrganizationListViewItem__get_SvtId(this, method);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B0D97C(v5);
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

  if ( (byte_4217DA9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&long___TypeInfo, v3);
    byte_4217DA9 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( !result )
      return result;
    v6 = result;
    result = (System_Int64_array *)sub_B0D964(result, long___TypeInfo);
    if ( result )
      return result;
    sub_B0DC70(v6);
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B0D8BC(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


bool __fastcall PartyOrganizationListViewItem__GetEventUpVal(
        PartyOrganizationListViewItem_o *this,
        EventUpValInfo_o **eventUpValInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EventUpValInfo_o *v8; // x8

  v8 = this->fields.eventUpValInfo;
  *eventUpValInfo = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)eventUpValInfo,
    (System_Int32_array **)v8,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return this->fields.isEventUpVal;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetFixedServantPositionRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4217DB5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217DB5 = 1;
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

  if ( (byte_4217DB4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217DB4 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B0D97C(v5);
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

  if ( (byte_4217DBB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217DBB = 1;
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

  if ( (byte_4217DBC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217DBC = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_B0D97C(v5);
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

  if ( (byte_4217DB1 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_10386/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4217DB1 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( v6 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v6, 0LL);
LABEL_33:
    sub_B0D97C(v6);
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
      goto LABEL_33;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v6, 0LL);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v6, 0LL);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcMessage(v6, 0LL);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10386/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_33;
    v9 = (System_String_o *)v6;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_43849904(v9, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v6 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
    {
      InitPos_k__BackingField = 0;
      if ( !v6 )
        goto LABEL_33;
    }
    else
    {
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      if ( !v6 )
        goto LABEL_33;
    }
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

  if ( (byte_4217DB3 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, isFixMessage);
    sub_B0D8A4(&StringLiteral_27/*"\n\n"*/, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    sub_B0D8A4(&StringLiteral_10420/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v7);
    byte_4217DB3 = 1;
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
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10420/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_43852188(
           v10,
           (System_String_o *)StringLiteral_27/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_4217DB2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217DB2 = 1;
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
    sub_B0D97C(0LL);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_30622660(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v6 = v5;
  v7 = this->fields.userServantEntity;
  if ( !v7 )
    sub_B0D97C(0LL);
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
  int64_t v8; // x21
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  _BOOL8 Entity; // x0
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-40h]

  if ( (byte_4217DA5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4217DA5 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v13.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v12 = v13;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v12, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               Master_WarQuestSelectionMaster,
               &this->fields.userServantEntity,
               v8,
               (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
      (PartyOrganizationListViewItem_o *)Entity,
      this,
      v11);
  }
}


void __fastcall PartyOrganizationListViewItem__ModifyFromWarBoard(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  const MethodInfo *v11; // x2

  if ( !item )
    sub_B0D97C(this);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__Modify_30741308(this, item, v11);
}


void __fastcall PartyOrganizationListViewItem__Modify_30741308(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationListViewItem_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Int32_array **userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v15; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  System_Int32_array **Entity; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  UserServantEntity_o *v27; // x8
  System_Int32_array **CommandCodeIdList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x21
  __int64 v44; // x23
  int32_t v45; // w0
  bool IsConvertOverwriteImage; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  System_Int32_array **FriendshipUpValTuple_k__BackingField; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  _BOOL4 isMyServantOrNpcRestriction; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v9 = this;
  if ( (byte_4217DA6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    this = (PartyOrganizationListViewItem_o *)sub_B0D8A4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v12);
    byte_4217DA6 = 1;
  }
  if ( !item )
    goto LABEL_23;
  userServantEntity = (System_Int32_array **)item->fields.userServantEntity;
  v9->fields.userServantEntity = (struct UserServantEntity_o *)userServantEntity;
  p_userServantEntity = &v9->fields.userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.userServantEntity,
    userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v15 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_23;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v56.fields.currentCryptoKey = v18;
  *(_QWORD *)&v56.fields.fakeValue = v17;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v56,
                                              0LL);
  if ( !v16 )
    goto LABEL_23;
  Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v16,
                                    (int32_t)this,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v9->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_B0D840((BattleServantConfConponent_o *)&v9->fields.servantEntity, Entity, v20, v21, v22, v23, v24, v25);
  v9->fields.classId = item->fields.classId;
  v9->fields.rarityId = item->fields.rarityId;
  v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v9->fields.userServantEntity;
  v9->fields.frameType = item->fields.frameType;
  if ( !v26 )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v26[6],
                                              0LL);
  v27 = v9->fields.userServantEntity;
  v9->fields.svtLimitCount = (int)this;
  if ( !v27 )
    goto LABEL_23;
  CommandCodeIdList = (System_Int32_array **)UserServantEntity__getCommandCodeIdList(v27, 0LL);
  v9->fields.commandCodeIdList = (struct System_Int32_array *)CommandCodeIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.commandCodeIdList,
    CommandCodeIdList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  questRestrictionInfo = v9->fields.questRestrictionInfo;
  v9->fields.isQuestRestriction = item->fields.isQuestRestriction;
  v9->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  v9->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  v9->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  if ( !questRestrictionInfo )
  {
    IsConvertOverwriteImage = 0;
    goto LABEL_19;
  }
  v42 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_23:
    sub_B0D97C(this);
  v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v44;
  *(_QWORD *)&v57.fields.fakeValue = v43;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v57, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v45, 0LL);
LABEL_19:
  v9->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  v9->fields.fatigureTime = item->fields.fatigureTime;
  v9->fields.isFatigureRecover = item->fields.isFatigureRecover;
  v9->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  v9->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  v9->fields._IsNotSupportSingle_k__BackingField = 0;
  v9->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  v9->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  v9->fields._SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
  v9->fields._SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
  FriendshipUpValTuple_k__BackingField = (System_Int32_array **)item->fields._FriendshipUpValTuple_k__BackingField;
  v9->fields._FriendshipUpValTuple_k__BackingField = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)FriendshipUpValTuple_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields._FriendshipUpValTuple_k__BackingField,
    FriendshipUpValTuple_k__BackingField,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  isMyServantOrNpcRestriction = v9->fields.isMyServantOrNpcRestriction;
  v9->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v9->fields.isFollower )
  {
    v9->fields.followerInfo = 0LL;
    v9->fields.isFollower = 0;
    sub_B0D840((BattleServantConfConponent_o *)&v9->fields.followerInfo, 0LL, v49, v50, v51, v52, v53, v54);
  }
  PartyOrganizationListViewItem__SetEquipStatus(v9, v9->fields.equipIdList, (const MethodInfo *)v49);
}


int32_t __fastcall PartyOrganizationListViewItem__RemoveEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w19
  __int64 v7; // x0

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  if ( !equipIdList->max_length )
  {
    v7 = sub_B0D9A8(this);
    sub_B0D948(v7, 0LL);
  }
  if ( equipIdList->m_Items[0] != userSvtId )
    return 0;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    cost = equipServantEntity->fields.cost;
  else
    cost = 0;
  equipIdList->m_Items[0] = 0LL;
  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, method);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ServantEntity_o *servantEntity; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct System_Int32_array *commandCodeIdList; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2

  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_B0D97C(v5);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)commandCodeIdList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.isQuestRestriction = item->fields.isQuestRestriction;
  this->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  this->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  this->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  this->fields.isFixedSupportPositionRestriction = item->fields.isFixedSupportPositionRestriction;
  this->fields.isFixedServantPositionRestriction = item->fields.isFixedServantPositionRestriction;
  this->fields.isFixedServantPositionAgreement = item->fields.isFixedServantPositionAgreement;
  this->fields.isServantNumRestriction = item->fields.isServantNumRestriction;
  this->fields.isFixMultipleNpcRestriction = item->fields.isFixMultipleNpcRestriction;
  this->fields.isFixMultipleNpc = item->fields.isFixMultipleNpc;
  this->fields.npcFollowerSvtId = item->fields.npcFollowerSvtId;
  this->fields.isConvertOverwriteImage = item->fields.isConvertOverwriteImage;
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
  this->fields._SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
  this->fields._SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
  this->fields._CanGetBuddyPoint_k__BackingField = item->fields._CanGetBuddyPoint_k__BackingField;
  this->fields._IsDispCanGetBuddyPoint_k__BackingField = item->fields._IsDispCanGetBuddyPoint_k__BackingField;
  FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  this->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)FriendshipUpValTuple_k__BackingField,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)WaveEnemyClassIds_k__BackingField,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v69);
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
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x22

  v4 = this;
  if ( (byte_4217DA3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    byte_4217DA3 = 1;
  }
  if ( !v4->fields.isFollower )
  {
    this = (PartyOrganizationListViewItem_o *)v4->fields.questRestrictionInfo;
    if ( this )
    {
      this = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_33;
    }
  }
  if ( v4->fields.index >= 1 )
  {
    questRestrictionInfo = v4->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantSingle )
        goto LABEL_33;
    }
  }
  if ( v4->fields.isServantNumRestriction || v4->fields.isFixMultipleNpcRestriction || v4->fields.isFixMultipleNpc )
    goto LABEL_33;
  v10 = v4->fields.questRestrictionInfo;
  if ( !v10 )
    goto LABEL_34;
  questId = v10->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v12 = v4->fields.questRestrictionInfo;
  if ( !v12 || !this )
    goto LABEL_34;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v12->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_33;
  v14 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0LL);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v14, 0LL) )
    goto LABEL_33;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_34;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_34;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_34:
    sub_B0D97C(this);
  if ( UserQuestMaster__getClearCountsFromId(Master_WarQuestSelectionMaster, (int64_t)this, questId, 0LL) < 1
    || !HasFlag )
  {
    v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 1;
    return;
  }
LABEL_33:
  v4->fields._IsDispCanGetBuddyPoint_k__BackingField = 0;
}


void __fastcall PartyOrganizationListViewItem__SetEquipStatus(
        PartyOrganizationListViewItem_o *this,
        System_Int64_array *equipIdList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int64_array *v8; // x24
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
  BattleServantConfConponent_o *p_equipServantEntity; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  EventUpValInfo_o **p_eventUpValInfo; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x28
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  DataManager_o *Instance; // x0
  const MethodInfo *v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct QuestRestrictionInfo_o *v70; // x8
  Il2CppObject *v71; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array **v73; // x25
  Il2CppObject *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct System_Int64_array *v81; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v83; // x8
  int32_t followerIndex; // w25
  DataMasterBase_WarMaster__WarEntity__int__o *v85; // x23
  int32_t v86; // w2
  struct System_Int64_array **p_equipIdList; // x0
  System_Int32_array **v88; // x1
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct EventUpValSetupInfo_o *v96; // x22
  struct System_Int32_array *v97; // x8
  FollowerInfo_o *v98; // x24
  struct QuestRestrictionInfo_o *v99; // x8
  int32_t v100; // w23
  int32_t v101; // w4
  BalanceConfig_c *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // x21
  __int64 v106; // x1
  __int64 v107; // x2
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x22
  PartyOrganizationListViewItem___c_c *v110; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *v111; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__115_0; // x23
  Il2CppObject *v113; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x0
  __int64 v123; // x1
  __int64 v124; // x2
  struct DataMasterBase_array *v125; // x8
  DataManager_o *v126; // x22
  unsigned __int64 v127; // x20
  ServantEntity_o *v128; // x24
  int32_t v129; // w25
  EventPersonalMargeUpValInfo_o *v130; // x23
  struct DataMasterBase_array *v131; // x8
  DataManager_o *v132; // x23
  unsigned __int64 v133; // x24
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v134; // x0
  struct System_Int64_array *v135; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v139; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v140; // x23
  Il2CppClass *v141; // x24
  Il2CppClass *v142; // x25
  System_Int32_array **Entity; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  struct System_Int64_array *v150; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  bool EventUpVal_21266016; // w0
  __int64 v156; // x1
  __int64 v157; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v159; // x23
  __int64 v160; // x1
  __int64 v161; // x2
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v163; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__115_1; // x25
  Il2CppObject *v166; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v174; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v175; // x0
  __int64 v176; // x1
  __int64 v177; // x2
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v179; // x24
  unsigned __int64 v180; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v182; // w27
  EventPersonalMargeUpValInfo_o *v183; // x25
  struct DataMasterBase_array *v184; // x8
  DataManager_o *v185; // x25
  unsigned __int64 v186; // x26
  struct EventMargeItemUpValInfo_array *v187; // x0
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  const MethodInfo *v194; // x2
  bool v195; // w1
  PartyOrganizationListViewItem_o *v196; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  __int64 v198; // x1
  __int64 v199; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v200; // x23
  struct System_Int32_array *v201; // x28
  __int64 v202; // x8
  unsigned __int64 v203; // x20
  int32_t v204; // w26
  EventDetailEntity_o *v205; // x0
  __int64 v206; // x1
  __int64 v207; // x2
  ServantEntity_o *v208; // x27
  EventPersonalMargeUpValInfo_o *v209; // x25
  struct DataMasterBase_array *v210; // x8
  DataManager_o *v211; // x25
  unsigned __int64 v212; // x26
  struct EventMargeItemUpValInfo_array *v213; // x0
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  System_Int32_array *v220; // x23
  __int64 v221; // x1
  __int64 v222; // x2
  EventUpValSetupInfo_o *v223; // x24
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  UserServantEntity_o *v230; // x22
  EventUpValSetupInfo_o *v231; // x23
  struct QuestRestrictionInfo_o *v232; // x8
  _BOOL8 v233; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v234; // x0
  __int64 v235; // x1
  __int64 v236; // x2
  __int64 v237; // x0
  UserServantEntity_o *v238; // x23
  EventUpValSetupInfo_o *v239; // x22
  struct QuestRestrictionInfo_o *v240; // x8
  ServantEntity_o *v241; // x22
  EventPersonalMargeUpValInfo_o *v242; // x21
  __int64 v243; // x1
  __int64 v244; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v245; // x19
  System_Collections_Generic_IEnumerable_T__o *v246; // x0
  System_Int32_array **List; // x0
  System_Collections_Generic_List_Enumerator_T__o v248; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v251; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v252; // 0:x0.16

  v8 = equipIdList;
  if ( (byte_4217DA2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, equipIdList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v21);
    sub_B0D8A4(&EventPersonalMargeUpValInfo_TypeInfo, v22);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v23);
    sub_B0D8A4(&Method_System_Func_EventDropUpValInfo__int___ctor__, v24);
    sub_B0D8A4(&System_Func_EventDropUpValInfo__int__TypeInfo, v25);
    sub_B0D8A4(&int___TypeInfo, v26);
    sub_B0D8A4(&long___TypeInfo, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v33);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v34);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36);
    sub_B0D8A4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_0__, v37);
    sub_B0D8A4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_1__, v38);
    sub_B0D8A4(&PartyOrganizationListViewItem___c_TypeInfo, v39);
    byte_4217DA2 = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_equipServantEntity = (BattleServantConfConponent_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v42, v43, v44, v45, v46, v47);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventUpValInfo, 0LL, v49, v50, v51, v52, v53, v54);
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v56, v57, v58, v59, v60, v61);
  if ( !this->fields.isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v88 = 0LL;
LABEL_163:
      sub_B0D840((BattleServantConfConponent_o *)p_equipIdList, v88, v64, v65, v66, v67, v68, v69);
      return;
    }
    if ( v8 )
    {
      v73 = &this->fields.equipIdList;
      if ( this->fields.equipIdList == v8 )
        goto LABEL_61;
      v74 = System_Array__Clone((System_Array_o *)v8, 0LL);
      if ( v74 )
      {
        v71 = v74;
        v81 = (struct System_Int64_array *)sub_B0D964(v74, long___TypeInfo);
        if ( !v81 )
        {
          sub_B0DC70(v71);
          goto LABEL_13;
        }
      }
      else
      {
        v81 = 0LL;
      }
    }
    else
    {
      v102 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v102 = BalanceConfig_TypeInfo;
      }
      v81 = (struct System_Int64_array *)sub_B0D8BC(long___TypeInfo, (unsigned int)v102->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v81;
    v73 = &this->fields.equipIdList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.equipIdList,
      (System_Int32_array **)v81,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    v8 = this->fields.equipIdList;
    if ( !v8 )
      goto LABEL_166;
LABEL_61:
    if ( !v8->max_length )
      goto LABEL_149;
    if ( v8->m_Items[0] >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_166;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v135 = *v73;
      if ( !*v73 )
        goto LABEL_166;
      if ( !v135->max_length )
        goto LABEL_149;
      if ( !Instance )
        goto LABEL_166;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                    &this->fields.equipUserServantEntity,
                                    v135->m_Items[0],
                                    (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_166;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v251.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v251.fields.fakeValue = parent;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v251, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_166;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
          v139 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_166;
          v140 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v142 = v139->_1.declaringType;
          v141 = v139->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v252.fields.currentCryptoKey = v142;
          *(_QWORD *)&v252.fields.fakeValue = v141;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v252, 0LL);
          if ( !v140 )
            goto LABEL_166;
          Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v140,
                                            (int32_t)Instance,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (BattleServantConfConponent_c *)Entity;
          sub_B0D840(p_equipServantEntity, Entity, v144, v145, v146, v147, v148, v149);
        }
      }
      else
      {
        v150 = *v73;
        if ( !*v73 )
          goto LABEL_166;
        if ( !v150->max_length )
          goto LABEL_149;
        v150->m_Items[0] = 0LL;
      }
    }
    p_setupInfo = &this->fields.setupInfo;
    setupInfo = this->fields.setupInfo;
    if ( !setupInfo )
      goto LABEL_135;
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_166;
    if ( !*(_QWORD *)&eventIdList->max_length )
      goto LABEL_135;
    userServantEntity = this->fields.userServantEntity;
    Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v63);
    if ( !userServantEntity )
      goto LABEL_166;
    EventUpVal_21266016 = UserServantEntity__getEventUpVal_21266016(
                            userServantEntity,
                            p_eventUpValInfo,
                            setupInfo,
                            (System_Int64_array *)Instance,
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_21266016;
    if ( questRestrictionInfo )
    {
      v159 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v156, v157);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v159,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_166;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v163 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( (BYTE3(PartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v163 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      static_fields = v163->static_fields;
      _9__115_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__115_1;
      if ( !_9__115_1 )
      {
        if ( (BYTE3(v163->vtable._0_Equals.methodPtr) & 4) != 0 && !v163->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v163);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        }
        v166 = (Il2CppObject *)static_fields->__9;
        _9__115_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                      System_Func_EventDropUpValInfo__int__TypeInfo,
                                                                                      v160,
                                                                                      v161);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__115_1,
          v166,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_1__,
          (const MethodInfo_2619564 *)Method_System_Func_EventDropUpValInfo__int___ctor__);
        v167 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v167->__9__115_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__115_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v167->__9__115_1,
          (System_Int32_array **)_9__115_1,
          v168,
          v169,
          v170,
          v171,
          v172,
          v173);
      }
      v174 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__115_1,
                                                                    (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v175 = System_Linq_Enumerable__Distinct_int_(
               v174,
               (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                    v175,
                                    (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_166;
      datalist = Instance->fields.datalist;
      v179 = Instance;
      if ( (int)datalist >= 1 )
      {
        v180 = 0LL;
        while ( 1 )
        {
          if ( v180 >= (unsigned int)datalist )
            goto LABEL_149;
          servantEntity = this->fields.servantEntity;
          v182 = *((_DWORD *)&v179->fields.lookup + v180);
          v183 = (EventPersonalMargeUpValInfo_o *)sub_B0D974(EventPersonalMargeUpValInfo_TypeInfo, v176, v177);
          EventPersonalMargeUpValInfo___ctor(v183, v182, servantEntity, 0LL);
          Instance = (DataManager_o *)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_166;
          Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v183 )
            goto LABEL_166;
          EventPersonalMargeUpValInfo__Add(v183, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = (DataManager_o *)EventPersonalMargeUpValInfo__IsEmpty(v183, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            Instance = (DataManager_o *)EventPersonalMargeUpValInfo__GetList(v183, 0LL);
            if ( !Instance )
              goto LABEL_166;
            v184 = Instance->fields.datalist;
            v185 = Instance;
            if ( (int)v184 >= 1 )
              break;
          }
LABEL_110:
          LODWORD(datalist) = v179->fields.datalist;
          if ( (__int64)++v180 >= (int)datalist )
            goto LABEL_111;
        }
        v186 = 0LL;
        while ( v186 < (unsigned int)v184 )
        {
          if ( !v159 )
            goto LABEL_166;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v159,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v185->fields.lookup + v186),
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          LODWORD(v184) = v185->fields.datalist;
          if ( (__int64)++v186 >= (int)v184 )
            goto LABEL_110;
        }
        goto LABEL_149;
      }
LABEL_111:
      if ( !v159 )
        goto LABEL_166;
      v187 = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v159,
                                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      this->fields.eventUpValItemList = v187;
      sub_B0D840(
        (BattleServantConfConponent_o *)p_eventUpValItemList,
        (System_Int32_array **)v187,
        v188,
        v189,
        v190,
        v191,
        v192,
        v193);
      v195 = 1;
      v196 = this;
      goto LABEL_134;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_166;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v200 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                     v198,
                                                                                                     v199);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v200,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_166;
    v201 = (*p_setupInfo)->fields.eventIdList;
    if ( !v201 )
      goto LABEL_166;
    v202 = *(_QWORD *)&v201->max_length;
    if ( (int)v202 < 1 )
    {
LABEL_132:
      if ( !v200 )
        goto LABEL_166;
      v213 = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v200,
                                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = &this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = v213;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.eventUpValItemList,
        (System_Int32_array **)v213,
        v214,
        v215,
        v216,
        v217,
        v218,
        v219);
      v196 = this;
      v195 = 0;
LABEL_134:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v196, v195, v194);
      p_setupInfo = &this->fields.setupInfo;
LABEL_135:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v220 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
        v223 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v221, v222);
        EventUpValSetupInfo___ctor_25655088(v223, v220, 0, 0, 0, 0LL);
        *p_setupInfo = v223;
        sub_B0D840(
          (BattleServantConfConponent_o *)p_setupInfo,
          (System_Int32_array **)v223,
          v224,
          v225,
          v226,
          v227,
          v228,
          v229);
      }
      if ( this->fields.isEventUpVal )
      {
        v230 = this->fields.userServantEntity;
        v231 = this->fields.setupInfo;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v63);
        v232 = this->fields.questRestrictionInfo;
        if ( !v232 )
          goto LABEL_166;
        if ( !v230 )
          goto LABEL_166;
        Instance = (DataManager_o *)UserServantEntity__GetBonusUpVal(
                                      v230,
                                      &eventUpVallInfo,
                                      v231,
                                      (System_Int64_array *)Instance,
                                      v232->fields.questId,
                                      v232->fields.questPhase,
                                      0LL);
        if ( !eventUpVallInfo )
          goto LABEL_166;
        Instance = (DataManager_o *)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_166;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v248,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        for ( i = v248;
              ;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v234,
                (EventMissionProgressRequest_Argument_ProgressData_o *)i.fields.current,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__) )
        {
          v233 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &i,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v233 )
            break;
          if ( !*p_eventUpValInfo )
            sub_B0D97C(v233);
          v234 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v234 )
            sub_B0D97C(0LL);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v238 = this->fields.userServantEntity;
        v239 = this->fields.setupInfo;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v63);
        v240 = this->fields.questRestrictionInfo;
        if ( !v240 || !v238 )
          goto LABEL_166;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v238,
                                      p_eventUpValInfo,
                                      v239,
                                      (System_Int64_array *)Instance,
                                      v240->fields.questId,
                                      v240->fields.questPhase,
                                      0LL);
      }
      v241 = this->fields.servantEntity;
      v242 = (EventPersonalMargeUpValInfo_o *)sub_B0D974(EventPersonalMargeUpValInfo_TypeInfo, v235, v236);
      EventPersonalMargeUpValInfo___ctor(v242, 0, v241, 0LL);
      Instance = (DataManager_o *)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v242 )
        {
          EventPersonalMargeUpValInfo__Add(v242, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v242, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v242, 0LL);
            goto LABEL_162;
          }
          v245 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v243, v244);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v245,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v245 )
            goto LABEL_166;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v245,
            (System_Collections_Generic_IEnumerable_T__o *)*p_eventUpValItemList,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v246 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v242, 0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v245,
            v246,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v134 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v245;
LABEL_161:
          List = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          v134,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_162:
          v88 = List;
          *p_eventUpValItemList = (struct EventMargeItemUpValInfo_array *)List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_163;
        }
      }
LABEL_166:
      sub_B0D97C(Instance);
    }
    v203 = 0LL;
    while ( 1 )
    {
      if ( v203 >= (unsigned int)v202 )
        goto LABEL_149;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_166;
      v204 = v201->m_Items[v203 + 1];
      v205 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v204,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v205
        || (Instance = (DataManager_o *)EventDetailEntity__HasFlag(v205, 0x800000000LL, 0LL),
            ((unsigned __int8)Instance & 1) == 0) )
      {
        v208 = this->fields.servantEntity;
        v209 = (EventPersonalMargeUpValInfo_o *)sub_B0D974(EventPersonalMargeUpValInfo_TypeInfo, v206, v207);
        EventPersonalMargeUpValInfo___ctor(v209, v204, v208, 0LL);
        Instance = (DataManager_o *)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_166;
        Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v209 )
          goto LABEL_166;
        EventPersonalMargeUpValInfo__Add(v209, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = (DataManager_o *)EventPersonalMargeUpValInfo__IsEmpty(v209, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)EventPersonalMargeUpValInfo__GetList(v209, 0LL);
          if ( !Instance )
            goto LABEL_166;
          v210 = Instance->fields.datalist;
          v211 = Instance;
          if ( (int)v210 >= 1 )
            break;
        }
      }
LABEL_131:
      LODWORD(v202) = v201->max_length;
      if ( (__int64)++v203 >= (int)v202 )
        goto LABEL_132;
    }
    v212 = 0LL;
    while ( v212 < (unsigned int)v210 )
    {
      if ( !v200 )
        goto LABEL_166;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v200,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v211->fields.lookup + v212),
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
      LODWORD(v210) = v211->fields.datalist;
      if ( (__int64)++v212 >= (int)v210 )
        goto LABEL_131;
    }
LABEL_149:
    v237 = sub_B0D9A8(Instance);
    sub_B0D948(v237, 0LL);
  }
  this->fields.equipIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v64, v65, v66, v67, v68, v69);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v70 = this->fields.questRestrictionInfo;
  LODWORD(v71) = this->fields.followerIndex;
  if ( v70 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v70->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = (DataManager_o *)FollowerInfo__getEquipSvtId(
                                p_equipUserServantEntity,
                                (int32_t)v71,
                                ReturnTypeByQuestId,
                                0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_166;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v83 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v85 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( v83 )
    {
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(v83->fields.questId, 0LL);
      v86 = (int)Instance;
      if ( !followerInfo )
        goto LABEL_166;
    }
    else
    {
      v86 = 0;
      if ( !followerInfo )
        goto LABEL_166;
    }
    Instance = (DataManager_o *)FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v86, 0LL);
    if ( !v85 )
      goto LABEL_166;
    v89 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v85,
                                   (int32_t)Instance,
                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_equipServantEntity->klass = (BattleServantConfConponent_c *)v89;
    sub_B0D840(p_equipServantEntity, v89, v90, v91, v92, v93, v94, v95);
  }
  v96 = this->fields.setupInfo;
  if ( v96 )
  {
    v97 = v96->fields.eventIdList;
    if ( !v97 )
      goto LABEL_166;
    if ( *(_QWORD *)&v97->max_length )
    {
      v98 = this->fields.followerInfo;
      v99 = this->fields.questRestrictionInfo;
      v100 = this->fields.followerIndex;
      if ( v99 )
      {
        Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(v99->fields.questId, 0LL);
        v101 = (int)Instance;
        if ( !v98 )
          goto LABEL_166;
      }
      else
      {
        v101 = 0;
        if ( !v98 )
          goto LABEL_166;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_21906432(v98, p_eventUpValInfo, v96, v100, v101, 0LL);
      v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v103, v104);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v105,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v109 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v110 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( (BYTE3(PartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v110 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v111 = v110->static_fields;
        _9__115_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v111->__9__115_0;
        if ( !_9__115_0 )
        {
          if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v110);
            v111 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          }
          v113 = (Il2CppObject *)v111->__9;
          _9__115_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                        System_Func_EventDropUpValInfo__int__TypeInfo,
                                                                                        v106,
                                                                                        v107);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__115_0,
            v113,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_0__,
            (const MethodInfo_2619564 *)Method_System_Func_EventDropUpValInfo__int___ctor__);
          v114 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v114->__9__115_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__115_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v114->__9__115_0,
            (System_Int32_array **)_9__115_0,
            v115,
            v116,
            v117,
            v118,
            v119,
            v120);
        }
        v121 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                      v109,
                                                                      (System_Func_TSource__TResult__o *)_9__115_0,
                                                                      (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v122 = System_Linq_Enumerable__Distinct_int_(
                 v121,
                 (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                      v122,
                                      (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v125 = Instance->fields.datalist;
          v126 = Instance;
          if ( (int)v125 >= 1 )
          {
            v127 = 0LL;
            while ( 1 )
            {
              if ( v127 >= (unsigned int)v125 )
                goto LABEL_149;
              v128 = this->fields.servantEntity;
              v129 = *((_DWORD *)&v126->fields.lookup + v127);
              v130 = (EventPersonalMargeUpValInfo_o *)sub_B0D974(EventPersonalMargeUpValInfo_TypeInfo, v123, v124);
              EventPersonalMargeUpValInfo___ctor(v130, v129, v128, 0LL);
              Instance = (DataManager_o *)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_166;
              Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v130 )
                goto LABEL_166;
              EventPersonalMargeUpValInfo__Add(v130, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = (DataManager_o *)EventPersonalMargeUpValInfo__IsEmpty(v130, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = (DataManager_o *)EventPersonalMargeUpValInfo__GetList(v130, 0LL);
                if ( !Instance )
                  goto LABEL_166;
                v131 = Instance->fields.datalist;
                v132 = Instance;
                if ( (int)v131 >= 1 )
                  break;
              }
LABEL_56:
              LODWORD(v125) = v126->fields.datalist;
              if ( (__int64)++v127 >= (int)v125 )
                goto LABEL_57;
            }
            v133 = 0LL;
            while ( v133 < (unsigned int)v131 )
            {
              if ( !v105 )
                goto LABEL_166;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v105,
                *((EventMissionProgressRequest_Argument_ProgressData_o **)&v132->fields.lookup + v133),
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(v131) = v132->fields.datalist;
              if ( (__int64)++v133 >= (int)v131 )
                goto LABEL_56;
            }
            goto LABEL_149;
          }
LABEL_57:
          if ( !v105 )
            goto LABEL_166;
          v134 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v105;
          goto LABEL_161;
        }
      }
      goto LABEL_166;
    }
  }
}


void __fastcall PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Int64_array *equipIdList; // x8
  __int64 v4; // x0

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !equipIdList->max_length )
    {
      v4 = sub_B0D9A8(this);
      sub_B0D948(v4, 0LL);
    }
    equipIdList->m_Items[0] = userSvtId;
    PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, method);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._WaveEnemyClassIds_k__BackingField = classIds;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)classIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationListViewItem__Set_30740556(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserServantEntity_o *v23; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x21
  __int64 v25; // x22
  __int64 v26; // x23
  struct ServantEntity_o *Entity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UserServantEntity_o *v34; // x8
  UserServantEntity_o *v35; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v46; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4217DA4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4217DA4 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_13;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.followerInfo = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_13;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v26 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v26;
  *(_QWORD *)&v47.fields.fakeValue = v25;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v47, 0LL);
  if ( !v24 )
    goto LABEL_13;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v24,
                                       (int32_t)Instance,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  v34 = this->fields.userServantEntity;
  this->fields.frameType = item->fields.frameType;
  if ( !v34
    || (Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      v34->fields.limitCount,
                                      0LL),
        v35 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v35) )
  {
LABEL_13:
    sub_B0D97C(Instance);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v35, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  equipIdList = this->fields.equipIdList;
  this->fields.isQuestRestriction = item->fields.isQuestRestriction;
  this->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  this->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  this->fields.isFixMultipleNpc = 0;
  *(_WORD *)&this->fields.isServantNumRestriction = 0;
  *(_DWORD *)&this->fields.isFixedSupportPositionRestriction = 0;
  *(int64_t *)((char *)&this->fields.npcFollowerSvtId + 5) = 0LL;
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isUniqueIndividualityRestriction = isUniqueIndividualityRestriction;
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__Swap(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o **p_userServantEntity; // x0
  struct UserServantEntity_o *userServantEntity; // t1
  BattleServantConfConponent_o *v11; // x24
  BattleServantConfConponent_o *v12; // x26
  BattleServantConfConponent_o *v13; // x27
  BattleServantConfConponent_o *v14; // x23
  BattleServantConfConponent_o *v15; // x22
  struct UserServantEntity_o *v18; // x1
  struct UserServantEntity_o **v19; // x21
  struct FollowerInfo_o *followerInfo; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ServantEntity_o *servantEntity; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Int32_array *commandCodeIdList; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x2
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  const MethodInfo *v80; // x2
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  int32_t v93; // [xsp+Ch] [xbp-144h]
  struct FollowerInfo_o *v94; // [xsp+10h] [xbp-140h]
  char v95; // [xsp+18h] [xbp-138h]
  char v96; // [xsp+1Ch] [xbp-134h]
  __int64 v97; // [xsp+20h] [xbp-130h]
  struct ServantEntity_o *v98; // [xsp+28h] [xbp-128h]
  struct UserServantEntity_o *v99; // [xsp+30h] [xbp-120h]
  struct UserServantEntity_o *v100; // [xsp+38h] [xbp-118h]
  char v101; // [xsp+44h] [xbp-10Ch]
  char v102; // [xsp+48h] [xbp-108h]
  char v103; // [xsp+4Ch] [xbp-104h]
  struct System_Int32_array *v104; // [xsp+50h] [xbp-100h]
  char v105; // [xsp+58h] [xbp-F8h]
  char v106; // [xsp+5Ch] [xbp-F4h]
  char v107; // [xsp+60h] [xbp-F0h]
  char v108; // [xsp+64h] [xbp-ECh]
  char v109; // [xsp+68h] [xbp-E8h]
  char v110; // [xsp+6Ch] [xbp-E4h]
  char v111; // [xsp+70h] [xbp-E0h]
  char v112; // [xsp+74h] [xbp-DCh]
  char v113; // [xsp+78h] [xbp-D8h]
  char v114; // [xsp+7Ch] [xbp-D4h]
  char v115; // [xsp+80h] [xbp-D0h]
  char v116; // [xsp+84h] [xbp-CCh]
  int64_t v117; // [xsp+88h] [xbp-C8h]
  char v118; // [xsp+94h] [xbp-BCh]
  int64_t v119; // [xsp+98h] [xbp-B8h]
  char v120; // [xsp+A4h] [xbp-ACh]
  struct UserServantEntity_o *v121; // [xsp+A8h] [xbp-A8h]
  char v122; // [xsp+B4h] [xbp-9Ch]
  struct EventCampaignEntity_array *v123; // [xsp+B8h] [xbp-98h]
  char v124; // [xsp+C4h] [xbp-8Ch]
  struct UserServantEntity_o *v125; // [xsp+C8h] [xbp-88h]
  char v126; // [xsp+D4h] [xbp-7Ch]
  char v127; // [xsp+D8h] [xbp-78h]
  int32_t v128; // [xsp+DCh] [xbp-74h]
  System_Int64_array *v129; // [xsp+E0h] [xbp-70h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v130; // [xsp+E8h] [xbp-68h]
  int32_t v131; // [xsp+F0h] [xbp-60h]
  char v132; // [xsp+F4h] [xbp-5Ch]

  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  v121 = userServantEntity;
  v11 = (BattleServantConfConponent_o *)(p_userServantEntity + 1);
  v94 = (struct FollowerInfo_o *)p_userServantEntity[1];
  v95 = *((_BYTE *)p_userServantEntity + 16);
  v96 = *((_BYTE *)p_userServantEntity + 17);
  v97 = *(__int64 *)((char *)p_userServantEntity + 20);
  v129 = (System_Int64_array *)p_userServantEntity[4];
  v12 = (BattleServantConfConponent_o *)(p_userServantEntity + 7);
  v98 = (struct ServantEntity_o *)p_userServantEntity[7];
  v99 = p_userServantEntity[8];
  v100 = p_userServantEntity[9];
  v13 = (BattleServantConfConponent_o *)(p_userServantEntity + 10);
  v104 = (struct System_Int32_array *)p_userServantEntity[10];
  v105 = *((_BYTE *)p_userServantEntity + 88);
  v106 = *((_BYTE *)p_userServantEntity + 89);
  v107 = *((_BYTE *)p_userServantEntity + 90);
  v108 = *((_BYTE *)p_userServantEntity + 91);
  v109 = *((_BYTE *)p_userServantEntity + 92);
  v110 = *((_BYTE *)p_userServantEntity + 93);
  v111 = *((_BYTE *)p_userServantEntity + 94);
  v112 = *((_BYTE *)p_userServantEntity + 96);
  v113 = *((_BYTE *)p_userServantEntity + 97);
  v115 = *((_BYTE *)p_userServantEntity + 98);
  v117 = (int64_t)p_userServantEntity[13];
  v119 = (int64_t)p_userServantEntity[15];
  v120 = *((_BYTE *)p_userServantEntity + 128);
  v114 = *((_BYTE *)p_userServantEntity + 95);
  v116 = *((_BYTE *)p_userServantEntity + 112);
  v118 = *((_BYTE *)p_userServantEntity + 113);
  v14 = (BattleServantConfConponent_o *)(p_userServantEntity + 22);
  v123 = (struct EventCampaignEntity_array *)p_userServantEntity[22];
  v124 = *((_BYTE *)p_userServantEntity + 188);
  v125 = p_userServantEntity[24];
  v126 = *((_BYTE *)p_userServantEntity + 205);
  v127 = *((_BYTE *)p_userServantEntity + 206);
  v128 = *((_DWORD *)p_userServantEntity + 52);
  v15 = (BattleServantConfConponent_o *)(p_userServantEntity + 27);
  v130 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)p_userServantEntity[27];
  if ( !item )
    sub_B0D97C(p_userServantEntity);
  v122 = *((_BYTE *)p_userServantEntity + 224);
  v93 = *((_DWORD *)p_userServantEntity + 57);
  v131 = *((_DWORD *)p_userServantEntity + 58);
  v132 = *((_BYTE *)p_userServantEntity + 237);
  v101 = *((_BYTE *)p_userServantEntity + 114);
  v102 = *((_BYTE *)p_userServantEntity + 115);
  v103 = *((_BYTE *)p_userServantEntity + 116);
  v19 = &item->fields.userServantEntity;
  v18 = item->fields.userServantEntity;
  this->fields.userServantEntity = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_userServantEntity,
    (System_Int32_array **)v18,
    (System_String_array **)notChangeInitPos,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_B0D840(v11, (System_Int32_array **)followerInfo, v21, v22, v23, v24, v25, v26);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B0D840(v12, (System_Int32_array **)servantEntity, v28, v29, v30, v31, v32, v33);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B0D840(v13, (System_Int32_array **)commandCodeIdList, v35, v36, v37, v38, v39, v40);
  this->fields.isQuestRestriction = item->fields.isQuestRestriction;
  this->fields.isQuestRestrictionWhole = item->fields.isQuestRestrictionWhole;
  this->fields.isUniqueSvtRestriction = item->fields.isUniqueSvtRestriction;
  this->fields.isUniqueIndividualityRestriction = item->fields.isUniqueIndividualityRestriction;
  this->fields.isFixedSupportPositionRestriction = item->fields.isFixedSupportPositionRestriction;
  this->fields.isFixedServantPositionRestriction = item->fields.isFixedServantPositionRestriction;
  this->fields.isFixedServantPositionAgreement = item->fields.isFixedServantPositionAgreement;
  this->fields.isServantNumRestriction = item->fields.isServantNumRestriction;
  this->fields.isFixMultipleNpcRestriction = item->fields.isFixMultipleNpcRestriction;
  this->fields.isFixMultipleNpc = item->fields.isFixMultipleNpc;
  this->fields.npcFollowerSvtId = item->fields.npcFollowerSvtId;
  this->fields.isConvertOverwriteImage = item->fields.isConvertOverwriteImage;
  this->fields.isMyServantOrNpcRestriction = item->fields.isMyServantOrNpcRestriction;
  this->fields.haveIndividualityServant = item->fields.haveIndividualityServant;
  this->fields.isRestrictionMyServantPos = item->fields.isRestrictionMyServantPos;
  this->fields.isRestrictionNeedStarting = item->fields.isRestrictionNeedStarting;
  this->fields.isRestrictionServantPos = item->fields.isRestrictionServantPos;
  this->fields.fatigureTime = item->fields.fatigureTime;
  this->fields.isFatigureRecover = item->fields.isFatigureRecover;
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v41);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B0D840(v14, (System_Int32_array **)friendPointCampaignEntityList, v43, v44, v45, v46, v47, v48);
  this->fields._IsDispSvtPoint_k__BackingField = item->fields._IsDispSvtPoint_k__BackingField;
  this->fields._SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
  this->fields._SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
  this->fields._IsAllOutBattle_k__BackingField = item->fields._IsAllOutBattle_k__BackingField;
  this->fields._IsDataLost_k__BackingField = item->fields._IsDataLost_k__BackingField;
  this->fields._TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
  this->fields._IsNotSupportSingle_k__BackingField = item->fields._IsNotSupportSingle_k__BackingField;
  if ( !notChangeInitPos )
    this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  FriendshipUpValTuple_k__BackingField = item->fields._FriendshipUpValTuple_k__BackingField;
  this->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  sub_B0D840(v15, (System_Int32_array **)FriendshipUpValTuple_k__BackingField, v49, v50, v51, v52, v53, v54);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  item->fields.userServantEntity = v121;
  sub_B0D840((BattleServantConfConponent_o *)v19, (System_Int32_array **)v121, v56, v57, v58, v59, v60, v61);
  item->fields.followerInfo = v94;
  sub_B0D840(
    (BattleServantConfConponent_o *)&item->fields.followerInfo,
    (System_Int32_array **)v94,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  item->fields.isFollower = v95;
  item->fields.isFixNpc = v96;
  *(_QWORD *)&item->fields.followerClassId = v97;
  item->fields.servantEntity = v98;
  sub_B0D840(
    (BattleServantConfConponent_o *)&item->fields.servantEntity,
    (System_Int32_array **)v98,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  *(_QWORD *)&item->fields.classId = v99;
  *(_QWORD *)&item->fields.frameType = v100;
  item->fields.commandCodeIdList = v104;
  sub_B0D840(
    (BattleServantConfConponent_o *)&item->fields.commandCodeIdList,
    (System_Int32_array **)v104,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  item->fields.isQuestRestriction = v105;
  item->fields.isQuestRestrictionWhole = v106;
  item->fields.isUniqueSvtRestriction = v107;
  item->fields.isUniqueIndividualityRestriction = v108;
  item->fields.isFixedSupportPositionRestriction = v109;
  item->fields.isFixedServantPositionRestriction = v110;
  item->fields.isFixedServantPositionAgreement = v111;
  item->fields.isServantNumRestriction = v112;
  item->fields.isFixMultipleNpcRestriction = v113;
  item->fields.isFixMultipleNpc = v115;
  item->fields.npcFollowerSvtId = v117;
  item->fields.isConvertOverwriteImage = v114;
  item->fields.isMyServantOrNpcRestriction = v116;
  item->fields.haveIndividualityServant = v118;
  item->fields.isRestrictionMyServantPos = v101;
  item->fields.isRestrictionNeedStarting = v102;
  item->fields.isRestrictionServantPos = v103;
  item->fields.fatigureTime = v119;
  item->fields.isFatigureRecover = v120;
  PartyOrganizationListViewItem__SetEquipStatus(item, v129, v80);
  item->fields.friendPointCampaignEntityList = v123;
  sub_B0D840(
    (BattleServantConfConponent_o *)&item->fields.friendPointCampaignEntityList,
    (System_Int32_array **)v123,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  item->fields._IsDispSvtPoint_k__BackingField = v124;
  item->fields._FriendshipUpValTuple_k__BackingField = v130;
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v125;
  item->fields._IsAllOutBattle_k__BackingField = v126;
  item->fields._IsDataLost_k__BackingField = v127;
  item->fields._TimesToRestart_k__BackingField = v128;
  item->fields._IsNotSupportSingle_k__BackingField = v122;
  sub_B0D840(
    (BattleServantConfConponent_o *)&item->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)v130,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  if ( !notChangeInitPos )
    item->fields._InitPos_k__BackingField = v93;
  item->fields._NowPos_k__BackingField = v131;
  item->fields._IsNotClassBoardNpc_k__BackingField = v132;
}


void __fastcall PartyOrganizationListViewItem__SwapEquip(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  System_Int64_array *equipIdList; // x20
  const MethodInfo *v5; // x2

  if ( !item )
    sub_B0D97C(this);
  equipIdList = this->fields.equipIdList;
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, method);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        bool isQuestTarget,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  EventCampaignMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x23
  EventQuestMaster_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *v23; // x20
  _BOOL8 v24; // x0
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v28; // x25
  __int64 v29; // x26
  int32_t v30; // w1
  WarQuestSelectionMaster_o *v31; // x0
  struct UserServantEntity_o *v32; // x8
  UserServantMaster_o *v33; // x24
  __int64 v34; // x25
  __int64 v35; // x26
  __int64 v36; // x0
  UserServantEntity_o *HeroineData; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v42; // w2
  const MethodInfo_2AD2138 *v43; // x5
  __int64 v44; // x0
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_Enumerator_T__o item; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v55; // 0:x0.12
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v56; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4217DBF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCampaignMaster___, isQuestTarget);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventQuestMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B0D8A4(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v17);
    byte_4217DBF = 1;
  }
  memset(&v54, 0, sizeof(v54));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_44;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns(Master_WarQuestSelectionMaster, 0LL);
  v20 = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v23 = (System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType_____ctor(
    v23,
    (const MethodInfo_2F2EF94 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &item,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendshipUpCampaigns,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v54 = item;
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v54,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v24 )
        break;
      current = (EventCampaignEntity_o *)v54.fields.current;
      if ( !v54.fields.current )
        sub_B0D97C(v24);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v54.fields.current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B0D97C(v24);
        v29 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v57.fields.currentCryptoKey = v29;
        *(_QWORD *)&v57.fields.fakeValue = v28;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v57, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v30,
                (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v31 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
      v32 = this->fields.userServantEntity;
      if ( !v32 )
        sub_B0D97C(v31);
      v33 = (UserServantMaster_o *)v31;
      v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v58.fields.currentCryptoKey = v35;
      *(_QWORD *)&v58.fields.fakeValue = v34;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v58, 0LL);
      if ( !v33 )
        sub_B0D97C(v36);
      HeroineData = UserServantMaster__getHeroineData(v33, v36, 0LL);
      if ( HeroineData )
      {
        HeroineData = (UserServantEntity_o *)UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0LL);
        if ( ((unsigned __int8)HeroineData & 1) == 0 )
          continue;
      }
      if ( !isQuestTarget )
        goto LABEL_32;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        sub_B0D97C(HeroineData);
      if ( !v20 )
        sub_B0D97C(HeroineData);
      if ( !EventQuestMaster__IsEventNotIncluded(
              v20,
              current->fields.eventId,
              questRestrictionInfo->fields.questId,
              questRestrictionInfo->fields.questPhase,
              7,
              0LL) )
      {
LABEL_32:
        eventId = current->fields.eventId;
        FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
        calcType = current->fields.calcType;
        v42 = FriendshipBonusValue;
        item.fields.index = 0;
        item.fields.list = 0LL;
        *(_QWORD *)&v55.fields.Item1 = &item;
        v55.fields.Item3 = eventId;
        System_ValueTuple_int__int__EventCombineEntity_CalcType____ctor(
          v55,
          v42,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v43);
        if ( !v23 )
          sub_B0D97C(v44);
        *(_QWORD *)&v56.fields.Item1 = item.fields.list;
        v56.fields.Item3 = item.fields.index;
        System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____Add(
          v23,
          v56,
          (const MethodInfo_2F2FD38 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v54,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v23 )
LABEL_44:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v45 = System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ToArray(
          v23,
          (const MethodInfo_2F32000 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
}


void __fastcall PartyOrganizationListViewItem__UpdateEventEffect(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v2);
}


void __fastcall PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *viewObject; // x20
  __int64 v6; // x9
  PartyOrganizationListViewItem_o *v7; // x0
  PartyServantListViewItem_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4217DBE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_B0D8A4(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_4217DBE = 1;
  }
  if ( !item )
    goto LABEL_14;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&viewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    sub_B0DC70(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_30741308(v7, v8, v9);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
LABEL_14:
      sub_B0D97C(this);
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
  WebViewManager_o *Instance; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v15; // x0

  if ( (byte_4217DBA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4217DBA = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v11);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(SvtId, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B0D97C(Instance);
    Entity = ServantCostumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4212885 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    byte_4212885 = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4217DAF & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4217DAF = 1;
  }
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v5 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v11.fields.currentCryptoKey = v5;
    *(_QWORD *)&v11.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v11, 0LL);
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

  if ( (byte_4217DB0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217DB0 = 1;
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

  if ( (byte_4217DAE & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4217DAE = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
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
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8[2]; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4217DAD & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4217DAD = 1;
  }
  memset(&v8[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v5 = *(_OWORD *)&equipUserServantEntity->fields.id.fields.currentCryptoKey;
    v4 = *(_OWORD *)&equipUserServantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v8, 0LL, 0LL);
    v5 = *(_OWORD *)&v8[0].fields.currentCryptoKey;
    v4 = *(_OWORD *)&v8[0].fields.fakeValue;
  }
  *(_OWORD *)&v8[1].fields.currentCryptoKey = v5;
  *(_OWORD *)&v8[1].fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8[1];
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v7, 0LL);
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
  int32_t NowPos_k__BackingField; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4217DBD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4217DBD = 1;
  }
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
      sub_B0D97C(Atk);
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
      sub_B0D97C(Hp);
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
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  struct ServantEntity_o *v20; // x8
  ServantLimitImageMaster_o *v21; // x21
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4217DAB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4217DAB = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v26.fields.currentCryptoKey = v10;
    *(_QWORD *)&v26.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v26, 0LL);
  }
  else
  {
    maxLimitCount = -1;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v13);
    if ( !ServantLeader )
      goto LABEL_42;
    maxLimitCount = *(_DWORD *)(ServantLeader + 64);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_29;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_42;
  v17 = ServantLeader;
  v19 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_42:
    sub_B0D97C(ServantLeader);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    Master_WarQuestSelectionMaster,
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
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_42;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_29:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v20 = this->fields.servantEntity;
  if ( !v20 )
    goto LABEL_42;
  v21 = (ServantLimitImageMaster_o *)ServantLeader;
  v23 = *(_QWORD *)&v20->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&v20->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v23;
  *(_QWORD *)&v28.fields.fakeValue = v22;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v28, 0LL);
  if ( !v21 )
    goto LABEL_42;
  ServantLeader = ServantLimitImageMaster__GetServantLimitCountSealAfter(v21, ServantLeader, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_42;
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

  if ( (byte_4217DAA & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4217DAA = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
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

  if ( (byte_4217DAC & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18452/*"error"*/, v3);
    byte_4217DAC = 1;
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
      goto LABEL_20;
    }
  }
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_18452/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    nameLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
  }
  else
  {
    nameLimitCount = this->fields.nameLimitCount;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    IsNpc = PartyOrganizationListViewItem__get_ServantLeader(this, v12);
    if ( !IsNpc )
      goto LABEL_20;
    nameLimitCount = *((_DWORD *)IsNpc + 16);
  }
  IsNpc = this->fields.servantEntity;
  if ( !IsNpc )
LABEL_20:
    sub_B0D97C(IsNpc);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void __fastcall PartyOrganizationListViewItem__set_IsDataLost(
        PartyOrganizationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_4212181 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationListViewItem___c_TypeInfo, v1);
    byte_4212181 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(PartyOrganizationListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall PartyOrganizationListViewItem___c___ctor(
        PartyOrganizationListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__115_0(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_B0D97C(this);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__115_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_B0D97C(this);
  return drop->fields.eventId;
}