void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_29725208(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
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
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  void *Instance; // x0
  __int64 v54; // x1
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  const MethodInfo *v75; // x2
  int v76; // w9

  if ( (byte_42EB0D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, index, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42EB0D5 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.followerInfo = followerInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v54);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_30842504(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v63, v64, v65, v66, v67, v68);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  if ( initPos )
    v76 = initPos;
  else
    v76 = index + 1;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v76;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v75);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_29728604(
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
  _BOOL4 v11; // w28
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
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
  struct FollowerInfo_o **p_followerInfo; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  int64_t ReturnTypeByQuestId; // x0
  unsigned __int64 v76; // x1
  FollowerInfo_o *followerInfo; // x23
  int32_t v78; // w2
  int32_t v79; // w0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  FollowerInfo_o *v86; // x24
  struct QuestRestrictionInfo_o *v87; // x8
  int32_t followerIndex; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v89; // x22
  int32_t v90; // w2
  struct ServantEntity_o *v91; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct ServantEntity_o *v99; // x8
  ServantLimitMaster_o *v100; // x27
  __int64 v101; // x23
  __int64 v102; // x24
  FollowerInfo_o *v103; // x28
  struct QuestRestrictionInfo_o *v104; // x8
  int32_t v105; // w23
  int32_t v106; // w24
  int32_t v107; // w2
  _BOOL4 v108; // w28
  FollowerInfo_o *v109; // x24
  struct QuestRestrictionInfo_o *v110; // x8
  int32_t v111; // w23
  int32_t v112; // w2
  FollowerInfo_o *v113; // x24
  struct QuestRestrictionInfo_o *v114; // x8
  int32_t v115; // w23
  int32_t v116; // w2
  FollowerInfo_o *v117; // x24
  struct QuestRestrictionInfo_o *v118; // x8
  int32_t v119; // w27
  int32_t v120; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  const MethodInfo *v128; // x1
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  int32_t v135; // w23
  const MethodInfo *v136; // x1
  QuestRestrictionInfo_o *v137; // x27
  __int64 v138; // x23
  __int64 v139; // x24
  int32_t v140; // w23
  const MethodInfo *v141; // x1
  int32_t v142; // w24
  int32_t DispLimitCount; // w28
  const MethodInfo *v144; // x1
  int32_t v145; // w23
  int32_t InitPos_k__BackingField; // w24
  int32_t v147; // w0
  int v148; // w8
  int64_t v149; // x23
  unsigned int v150; // w28
  __int64 v151; // x25
  QuestRestrictionInfo_o *v152; // x24
  __int64 v153; // x26
  __int64 v154; // x27
  int32_t v155; // w26
  int32_t v156; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v158; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x23
  struct ServantEntity_o *v160; // x8
  UserEventDataLostEntity_o *v161; // x23
  __int64 v162; // x24
  __int64 v163; // x25
  struct ServantEntity_o *v164; // x9
  UserEventDataLostEntity_o *v165; // x22
  __int64 v166; // x23
  __int64 v167; // x24
  struct QuestRestrictionInfo_o *v168; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v170; // x23
  const MethodInfo *v171; // x1
  const MethodInfo *v172; // x2
  const MethodInfo *v173; // x1
  int32_t v174; // w21
  __int64 v175; // x24
  __int64 v176; // x25
  int32_t v177; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v179; // x1
  const MethodInfo *v180; // x2
  QuestRestrictionInfo_o *v181; // x8
  bool IsNotClassBoard; // w20
  __int64 v183; // x0
  int32_t v184; // [xsp+8h] [xbp-78h]
  int32_t v185; // [xsp+Ch] [xbp-74h]
  int32_t v186; // [xsp+18h] [xbp-68h]
  _BOOL4 v187; // [xsp+1Ch] [xbp-64h]
  QuestPhaseEntity_o *v188; // [xsp+20h] [xbp-60h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v193; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v195; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // 0:x0.16

  v11 = isFixNpc;
  if ( (byte_42EB0D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ServantLimitMaster___,
      index,
      (_DWORD)follower,
      *(_QWORD *)&followerClassId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v31, v32, v33);
    sub_B5D5C4(&DataManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v37, v38, v39);
    sub_B5D5C4(&NetworkManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47, v48);
    byte_42EB0D3 = 1;
  }
  v188 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v49, v50, v51, v52, v53, v54);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)follower,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.isFollower = 1;
  this->fields.isFixNpc = v11;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v78 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_147;
  }
  else
  {
    v78 = 0;
    if ( !followerInfo )
      goto LABEL_147;
  }
  v186 = index;
  v79 = FollowerInfo__getIndex(followerInfo, followerClassId, v78, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v79;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v86 = this->fields.followerInfo;
  v87 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v89 = (DataMasterBase_WarMaster__WarEntity__int__o *)ReturnTypeByQuestId;
  if ( v87 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v87->fields.questId, 0LL);
    v90 = ReturnTypeByQuestId;
    if ( !v86 )
      goto LABEL_147;
  }
  else
  {
    v90 = 0;
    if ( !v86 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v86, followerIndex, v90, 0LL);
  if ( !v89 )
    goto LABEL_147;
  v91 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v89,
                                    ReturnTypeByQuestId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v91;
  p_servantEntity = &this->fields.servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v91,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v99 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_147;
  v187 = v11;
  v100 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v102 = *(_QWORD *)&v99->fields.id.fields.currentCryptoKey;
  v101 = *(_QWORD *)&v99->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v190.fields.currentCryptoKey = v102;
  *(_QWORD *)&v190.fields.fakeValue = v101;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v190, 0LL);
  v103 = this->fields.followerInfo;
  v104 = this->fields.questRestrictionInfo;
  v105 = this->fields.followerIndex;
  v106 = ReturnTypeByQuestId;
  if ( v104 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v104->fields.questId, 0LL);
    v107 = ReturnTypeByQuestId;
    if ( !v103 )
      goto LABEL_147;
  }
  else
  {
    v107 = 0;
    if ( !v103 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v103, v105, v107, 0LL);
  if ( !v100 )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)ServantLimitMaster__GetEntity(v100, v106, ReturnTypeByQuestId, 0LL);
  v108 = v187;
  if ( !*p_servantEntity )
    goto LABEL_147;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  v109 = this->fields.followerInfo;
  v110 = this->fields.questRestrictionInfo;
  v111 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v110 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v110->fields.questId, 0LL);
    v112 = ReturnTypeByQuestId;
    if ( !v109 )
      goto LABEL_147;
  }
  else
  {
    v112 = 0;
    if ( !v109 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v109, v111, v112, 0LL);
  v113 = this->fields.followerInfo;
  v114 = this->fields.questRestrictionInfo;
  v115 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v114 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v114->fields.questId, 0LL);
    v116 = ReturnTypeByQuestId;
    if ( !v113 )
      goto LABEL_147;
  }
  else
  {
    v116 = 0;
    if ( !v113 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v113, v115, v116, 0LL);
  v117 = this->fields.followerInfo;
  v118 = this->fields.questRestrictionInfo;
  v119 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v118 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v118->fields.questId, 0LL);
    v120 = ReturnTypeByQuestId;
    if ( !v117 )
      goto LABEL_147;
  }
  else
  {
    v120 = 0;
    if ( !v117 )
      goto LABEL_147;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v117, v119, v120, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v135 = v186;
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v128) )
    goto LABEL_49;
  ReturnTypeByQuestId = (int64_t)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_147;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v137 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v136);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v139 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v138 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v191.fields.currentCryptoKey = v139;
    *(_QWORD *)&v191.fields.fakeValue = v138;
    v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v191, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v141);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v142 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v76);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v184 = v142;
    v185 = v140;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v144);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v145 = *(_DWORD *)(ReturnTypeByQuestId + 68);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v147 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)v76);
    this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestriction_34264504(
                                        v137,
                                        &this->fields.isQuestRestrictionWhole,
                                        v185,
                                        v184,
                                        DispLimitCount,
                                        v145,
                                        InitPos_k__BackingField,
                                        v147,
                                        0LL);
    v135 = v186;
    v108 = v187;
  }
  else
  {
LABEL_49:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v76 = (unsigned int)initPos;
  else
    v76 = (unsigned int)(v135 + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = v135 + 1;
  this->fields._InitPos_k__BackingField = v76;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(questRestrictionInfo, v76, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v148 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v149 = ReturnTypeByQuestId;
    if ( v148 >= 1 )
    {
      v150 = 0;
      while ( 1 )
      {
        if ( v150 >= v148 )
        {
          v183 = sub_B5D6C8(ReturnTypeByQuestId);
          sub_B5D668(v183, 0LL);
        }
        v151 = *(_QWORD *)(v149 + 8LL * (int)v150 + 32);
        if ( !v151 )
          goto LABEL_147;
        v152 = *p_questRestrictionInfo;
        v154 = *(_QWORD *)(v151 + 80);
        v153 = *(_QWORD *)(v151 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v192.fields.currentCryptoKey = v154;
        *(_QWORD *)&v192.fields.fakeValue = v153;
        v155 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v192, 0LL);
        v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v151 + 96),
                 0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v151, 0, 0LL);
        if ( !v152 )
          goto LABEL_147;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v152,
                                v155,
                                v156,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v148 = *(_DWORD *)(v149 + 24);
        if ( (int)++v150 >= v148 )
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
    if ( !IsNpcMulitipleOrOnly || !v108 )
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
    if ( !follower )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
  }
LABEL_84:
  v158 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v158 && v158->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v160 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v161 = entity;
      v163 = *(_QWORD *)&v160->fields.id.fields.currentCryptoKey;
      v162 = *(_QWORD *)&v160->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v193.fields.currentCryptoKey = v163;
      *(_QWORD *)&v193.fields.fakeValue = v162;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v193, 0LL);
      if ( !v161 )
        goto LABEL_147;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v161, ReturnTypeByQuestId, 0LL);
      v164 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v165 = entity;
      v167 = *(_QWORD *)&v164->fields.id.fields.currentCryptoKey;
      v166 = *(_QWORD *)&v164->fields.id.fields.fakeValue;
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v194.fields.currentCryptoKey = v167;
        *(_QWORD *)&v194.fields.fakeValue = v166;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v194, 0LL);
        if ( !v165 )
          goto LABEL_147;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v165,
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
        *(_QWORD *)&v195.fields.currentCryptoKey = v167;
        *(_QWORD *)&v195.fields.fakeValue = v166;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v195, 0LL);
        if ( !v165 )
          goto LABEL_147;
        if ( UserEventDataLostEntity__IsDataLost(v165, ReturnTypeByQuestId, 0LL) )
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v168 = this->fields.questRestrictionInfo;
  if ( v168 )
  {
    eventId = v168->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v170 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_147;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v171) )
        {
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v173);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v174 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v174;
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v76);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v176 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v175 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v196.fields.currentCryptoKey = v176;
          *(_QWORD *)&v196.fields.fakeValue = v175;
          v177 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v196, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v170, eventId, v174, v177, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v172);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v76) )
    goto LABEL_142;
  ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v179);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v181 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v188,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (int64_t)v188;
          if ( !v188 )
            goto LABEL_147;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v188, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v76);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v181) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_146;
        }
      }
LABEL_147:
      sub_B5D69C(ReturnTypeByQuestId, v76);
    }
  }
  else
  {
LABEL_142:
    LOBYTE(v181) = 0;
  }
LABEL_146:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v181;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v180);
}


void __fastcall PartyOrganizationListViewItem___ctor_29755084(
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
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
  __int64 Instance; // x0
  const MethodInfo *v96; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v98; // x26
  __int64 v99; // x27
  __int64 v100; // x28
  struct ServantEntity_o *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  ServantLimitMaster_o *v108; // x26
  int32_t v109; // w27
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  ServantLimitEntity_o *v116; // x26
  int v117; // w9
  Il2CppObject *v118; // x0
  Il2CppObject *v119; // x24
  struct System_Int32_array *v120; // x1
  struct ServantEntity_o *servantEntity; // x8
  struct UserServantEntity_o *v122; // x8
  __int64 v123; // x24
  __int64 v124; // x25
  UserServantEntity_o *v125; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  QuestRestrictionInfo_o *v139; // x24
  struct UserServantEntity_o *v140; // x8
  __int64 v141; // x25
  __int64 v142; // x26
  int32_t v143; // w25
  int32_t v144; // w26
  int32_t currentCryptoKey; // w28
  int32_t InitPos_k__BackingField; // w19
  int32_t v147; // w27
  int32_t v148; // w0
  QuestRestrictionInfo_o *v149; // x24
  UserServantEntity_o *v150; // x8
  __int64 v151; // x25
  __int64 v152; // x26
  int32_t v153; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v155; // x2
  struct QuestRestrictionInfo_o *v156; // x8
  UserServantEntity_o *v157; // x9
  UserEventServantFatigueMaster_o *v158; // x25
  int32_t eventId; // w26
  __int64 v160; // x27
  __int64 v161; // x28
  int64_t v162; // x19
  struct QuestRestrictionInfo_o *v163; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v165; // x8
  UserEventAlloutBattleMaster_o *v166; // x25
  __int64 v167; // x26
  __int64 v168; // x27
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x24
  UserServantEntity_o *v170; // x8
  UserEventDataLostEntity_o *v171; // x24
  __int64 v172; // x25
  __int64 v173; // x26
  UserServantEntity_o *v174; // x9
  UserEventDataLostEntity_o *v175; // x24
  __int64 v176; // x25
  __int64 v177; // x26
  const MethodInfo *v178; // x2
  int v179; // w8
  __int64 v180; // x23
  unsigned int v181; // w19
  __int64 v182; // x25
  QuestRestrictionInfo_o *v183; // x24
  __int64 v184; // x26
  __int64 v185; // x27
  int32_t v186; // w26
  int32_t v187; // w27
  int32_t v188; // w22
  EventServantPointRankMaster_o *v189; // x23
  const MethodInfo *v190; // x2
  UserServantEntity_o *v191; // x8
  __int128 v192; // q1
  UserEventServantPointMaster_o *v193; // x24
  int64_t v194; // x25
  int32_t SvtPoint_k__BackingField; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v198; // x2
  struct UserServantEntity_o *v199; // x8
  __int128 v200; // q1
  DataMasterBase_o *v201; // x22
  UserServantEntity_o *v202; // x8
  __int128 v203; // q0
  System_Int64_array *v204; // x23
  __int64 v205; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v208; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v209; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v210; // [xsp+80h] [xbp-90h]
  UserEventServantPointEntity_o *v211; // [xsp+A0h] [xbp-70h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+A8h] [xbp-68h] BYREF
  int64_t recoverAt[2]; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v214; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v215; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v216; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v217; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v218; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v220; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16

  if ( (byte_42EB0D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, index, (_DWORD)userServantEntity, equipIdList);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v36, v37, v38);
    sub_B5D5C4(&DataManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v42, v43, v44);
    sub_B5D5C4(&int___TypeInfo, v45, v46, v47);
    sub_B5D5C4(&long___TypeInfo, v48, v49, v50);
    sub_B5D5C4(&NetworkManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v60, v61, v62);
    byte_42EB0D2 = 1;
  }
  entity = 0LL;
  recoverAt[0] = 0LL;
  v211 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields.followerInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v83, v84, v85, v86, v87, v88);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v97 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v98 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v100 = *(_QWORD *)&v97[5].fields.currentCryptoKey;
  v99 = *(_QWORD *)&v97[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v214.fields.currentCryptoKey = v100;
  *(_QWORD *)&v214.fields.fakeValue = v99;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v214, 0LL);
  if ( !v98 )
    goto LABEL_162;
  v101 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v98,
                                     Instance,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v101;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_162;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v108 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_162;
  v109 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userServantEntity)[6], 0LL);
  if ( !v108 )
    goto LABEL_162;
  v116 = ServantLimitMaster__GetEntity(v108, v109, Instance, 0LL);
  if ( initPos )
    v117 = initPos;
  else
    v117 = index + 1;
  this->fields._InitPos_k__BackingField = v117;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( equipSvtIdList )
  {
    v118 = System_Array__Clone((System_Array_o *)equipSvtIdList, 0LL);
    if ( v118 )
    {
      v119 = v118;
      v120 = (struct System_Int32_array *)sub_B5D684(v118, int___TypeInfo);
      if ( v120 )
        goto LABEL_21;
      sub_B5D990(v119);
    }
  }
  v120 = 0LL;
LABEL_21:
  this->fields.equipSvtIdList = v120;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIdList,
    (System_Int32_array **)v120,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_162;
  this->fields.classId = servantEntity->fields.classId;
  if ( !v116 )
    goto LABEL_162;
  Instance = (__int64)this->fields.userServantEntity;
  this->fields.rarityId = v116->fields.rarity;
  if ( !Instance )
    goto LABEL_162;
  Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
  v122 = this->fields.userServantEntity;
  this->fields.frameType = Instance;
  if ( !v122 )
    goto LABEL_162;
  v124 = *(_QWORD *)&v122->fields.limitCount.fields.currentCryptoKey;
  v123 = *(_QWORD *)&v122->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v215.fields.currentCryptoKey = v124;
  *(_QWORD *)&v215.fields.fakeValue = v123;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v215, 0LL);
  v125 = this->fields.userServantEntity;
  this->fields.svtLimitCount = Instance;
  if ( !v125 )
    goto LABEL_162;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v125, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v139 = this->fields.questRestrictionInfo;
  if ( v139 )
  {
    v140 = this->fields.userServantEntity;
    if ( !v140 )
      goto LABEL_162;
    v142 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
    v141 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v216.fields.currentCryptoKey = v142;
    *(_QWORD *)&v216.fields.fakeValue = v141;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v216, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_162;
    v143 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288((*p_userServantEntity)[6], 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_162;
    v144 = Instance;
    Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_162;
    currentCryptoKey = (*p_userServantEntity)[16].fields.currentCryptoKey;
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v147 = Instance;
    v148 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v96);
    Instance = QuestRestrictionInfo__IsRestriction_34264504(
                 v139,
                 &this->fields.isQuestRestrictionWhole,
                 v143,
                 v144,
                 v147,
                 currentCryptoKey,
                 InitPos_k__BackingField,
                 v148,
                 0LL);
    v149 = this->fields.questRestrictionInfo;
    this->fields.isQuestRestriction = Instance & 1;
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
    if ( v149 )
    {
      v150 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_162;
      v152 = *(_QWORD *)&v150->fields.svtId.fields.currentCryptoKey;
      v151 = *(_QWORD *)&v150->fields.svtId.fields.fakeValue;
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v217.fields.currentCryptoKey = v152;
      *(_QWORD *)&v217.fields.fakeValue = v151;
      v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v217, 0LL);
      IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v149, v153, 0LL);
    }
    else
    {
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  v156 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._IsClearedWave_k__BackingField = isClearedWave;
  *(_WORD *)&this->fields._IsDisappearSvt_k__BackingField = 0;
  if ( !v156 )
  {
    PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 0, v155);
    goto LABEL_161;
  }
  if ( v156->fields.isFatigure )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_162;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_162;
    v157 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_162;
    v158 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v161 = *(_QWORD *)&v157->fields.svtId.fields.currentCryptoKey;
    v160 = *(_QWORD *)&v157->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v218.fields.currentCryptoKey = v161;
    *(_QWORD *)&v218.fields.fakeValue = v160;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v218, 0LL);
    if ( !v158 )
      goto LABEL_162;
    Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                 v158,
                 recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v162 = recoverAt[0];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__getTime(0LL);
      if ( v162 > Instance )
        this->fields.fatigureTime = recoverAt[0];
    }
  }
  v163 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo )
    goto LABEL_162;
  if ( v163->fields.isAllOutBattle )
  {
    allOutBattleGroupNo = v163->fields.allOutBattleGroupNo;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_162;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    v165 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_162;
    v166 = (UserEventAlloutBattleMaster_o *)Instance;
    v168 = *(_QWORD *)&v165->fields.svtId.fields.currentCryptoKey;
    v167 = *(_QWORD *)&v165->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v219.fields.currentCryptoKey = v168;
    *(_QWORD *)&v219.fields.fakeValue = v167;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v219, 0LL);
    if ( !*p_questRestrictionInfo || !v166 )
      goto LABEL_162;
    Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                 v166,
                 Instance,
                 (*p_questRestrictionInfo)->fields.eventId,
                 allOutBattleGroupNo,
                 0LL);
    if ( (Instance & 1) != 0 )
      this->fields._IsAllOutBattle_k__BackingField = 1;
  }
  if ( !*p_questRestrictionInfo )
    goto LABEL_162;
  if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_162;
    Instance = UserEventDataLostMaster__TryGetEntity(
                 (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 (*p_questRestrictionInfo)->fields.dataLostBattleId,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v170 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_162;
      v171 = entity;
      v173 = *(_QWORD *)&v170->fields.svtId.fields.currentCryptoKey;
      v172 = *(_QWORD *)&v170->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v220.fields.currentCryptoKey = v173;
      *(_QWORD *)&v220.fields.fakeValue = v172;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v220, 0LL);
      if ( !v171 )
        goto LABEL_162;
      Instance = UserEventDataLostEntity__IsRestart(v171, Instance, 0LL);
      v174 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_162;
      v175 = entity;
      v177 = *(_QWORD *)&v174->fields.svtId.fields.currentCryptoKey;
      v176 = *(_QWORD *)&v174->fields.svtId.fields.fakeValue;
      if ( (Instance & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v221.fields.currentCryptoKey = v177;
        *(_QWORD *)&v221.fields.fakeValue = v176;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v221, 0LL);
        if ( !v175 )
          goto LABEL_162;
        Instance = UserEventDataLostEntity__GetTimesToRestart(v175, Instance, 0LL);
        this->fields._TimesToRestart_k__BackingField = Instance;
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v222.fields.currentCryptoKey = v177;
        *(_QWORD *)&v222.fields.fakeValue = v176;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v222, 0LL);
        if ( !v175 )
          goto LABEL_162;
        Instance = UserEventDataLostEntity__IsDataLost(v175, Instance, 0LL);
        if ( (Instance & 1) != 0 )
          this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo )
  {
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
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
      Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Instance )
        goto LABEL_162;
      Instance = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_162;
      v179 = *(_DWORD *)(Instance + 24);
      v180 = Instance;
      if ( v179 >= 1 )
      {
        v181 = 0;
        while ( 1 )
        {
          if ( v181 >= v179 )
            goto LABEL_163;
          v182 = *(_QWORD *)(v180 + 8LL * (int)v181 + 32);
          if ( !v182 )
            goto LABEL_162;
          v183 = *p_questRestrictionInfo;
          v185 = *(_QWORD *)(v182 + 80);
          v184 = *(_QWORD *)(v182 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v223.fields.currentCryptoKey = v185;
          *(_QWORD *)&v223.fields.fakeValue = v184;
          v186 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v223, 0LL);
          v187 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v182 + 96),
                   0LL);
          Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v182, 0, 0LL);
          if ( !v183 )
            goto LABEL_162;
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       v183,
                       v186,
                       v187,
                       Instance,
                       this->fields._InitPos_k__BackingField,
                       0,
                       0LL);
          if ( (Instance & 1) == 0 )
            break;
          v179 = *(_DWORD *)(v180 + 24);
          if ( (int)++v181 >= v179 )
            goto LABEL_120;
        }
        this->fields.haveIndividualityServant = 1;
      }
    }
  }
LABEL_120:
  if ( !*p_questRestrictionInfo )
    goto LABEL_162;
  v188 = (*p_questRestrictionInfo)->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
    goto LABEL_162;
  v189 = (EventServantPointRankMaster_o *)Instance;
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v188, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v191 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_162;
    v192 = *(_OWORD *)&v191->fields.userId.fields.fakeValue;
    v193 = (UserEventServantPointMaster_o *)Instance;
    *(_OWORD *)&v210.fields.currentCryptoKey = *(_OWORD *)&v191->fields.userId.fields.currentCryptoKey;
    *(_OWORD *)&v210.fields.fakeValue = v192;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v209 = v210;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v209, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_162;
    v194 = Instance;
    Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
    if ( !v193 )
      goto LABEL_162;
    if ( UserEventServantPointMaster__TryGetEntity(v193, &v211, v194, v188, Instance, 0LL) )
    {
      Instance = (__int64)v211;
      if ( !v211 )
        goto LABEL_162;
      this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v211, 0LL);
    }
    Instance = (__int64)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_162;
    SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
    SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
    EnableEntity = EventServantPointRankMaster__GetEnableEntity(v189, v188, SvtPoint_k__BackingField, SvtId, 0LL);
    if ( EnableEntity )
      this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v188, v198);
  }
  PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(this, 1, v190);
  v199 = this->fields.userServantEntity;
  if ( !v199 )
    goto LABEL_162;
  v200 = *(_OWORD *)&v199->fields.id.fields.fakeValue;
  *(_OWORD *)&v210.fields.currentCryptoKey = *(_OWORD *)&v199->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v210.fields.fakeValue = v200;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v208 = v210;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v208, 0LL) >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v201 = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    Instance = sub_B5D5DC(long___TypeInfo, 1LL);
    v202 = (UserServantEntity_o *)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v203 = *(_OWORD *)&v202->fields.id.fields.fakeValue;
      v204 = (System_Int64_array *)Instance;
      *(_OWORD *)&v210.fields.currentCryptoKey = *(_OWORD *)&v202->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v210.fields.fakeValue = v203;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v207 = v210;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v207, 0LL);
      if ( v204 )
      {
        if ( !v204->max_length )
        {
LABEL_163:
          v205 = sub_B5D6C8(Instance);
          sub_B5D668(v205, 0LL);
        }
        v204->m_Items[0] = Instance;
        if ( v201 )
        {
          if ( !DataMasterBase__isEntityExistsFromId(v201, v204, 0LL) )
          {
LABEL_160:
            this->fields._IsDisappearSvt_k__BackingField = 1;
            goto LABEL_161;
          }
          goto LABEL_158;
        }
      }
    }
LABEL_162:
    sub_B5D69C(Instance, v96);
  }
LABEL_158:
  Instance = (__int64)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_162;
  if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL) )
    goto LABEL_160;
LABEL_161:
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v178);
}


void __fastcall PartyOrganizationListViewItem___ctor_29764096(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        const MethodInfo *method)
{
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
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
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  void *Instance; // x0
  __int64 v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int v65; // w1
  int v66; // w8
  void *v67; // x22
  unsigned int v68; // w27
  __int64 v69; // x24
  QuestRestrictionInfo_o *v70; // x23
  __int64 v71; // x25
  __int64 v72; // x26
  int32_t v73; // w25
  int32_t v74; // w26
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  const MethodInfo *v81; // x2
  struct QuestRestrictionInfo_o *v82; // x8
  int32_t eventId; // w21
  __int64 v84; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_42EB0D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, index, isFollower, setupInfo);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EB0D4 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.followerInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_WORD *)&this->fields.isFollower = isFollower;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.servantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v51, v52, v53, v54, v55, v56);
  *(_QWORD *)&this->fields.classId = 0LL;
  if ( !this )
    goto LABEL_42;
  if ( initPos )
    v65 = initPos;
  else
    v65 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v65;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_32:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_33;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(questRestrictionInfo, v65, 0LL) )
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  v66 = *((_DWORD *)Instance + 6);
  v67 = Instance;
  if ( v66 >= 1 )
  {
    v68 = 0;
    while ( 1 )
    {
      if ( v68 >= v66 )
      {
        v84 = sub_B5D6C8(Instance);
        sub_B5D668(v84, 0LL);
      }
      v69 = *((_QWORD *)v67 + (int)v68 + 4);
      if ( !v69 )
        goto LABEL_42;
      v70 = this->fields.questRestrictionInfo;
      v72 = *(_QWORD *)(v69 + 80);
      v71 = *(_QWORD *)(v69 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v85.fields.currentCryptoKey = v72;
      *(_QWORD *)&v85.fields.fakeValue = v71;
      v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v85, 0LL);
      v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v69 + 96),
              0LL);
      Instance = (void *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)v69, 0, 0LL);
      if ( !v70 )
        goto LABEL_42;
      Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           v70,
                           v73,
                           v74,
                           (int32_t)Instance,
                           this->fields._InitPos_k__BackingField,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      v66 = *((_DWORD *)v67 + 6);
      if ( (int)++v68 >= v66 )
        goto LABEL_33;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_33:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v59, v60, v61, v62, v63, v64);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v82 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  *(_WORD *)&this->fields._IsClearedWave_k__BackingField = 0;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !v82 )
    goto LABEL_40;
  eventId = v82->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_42:
    sub_B5D69C(Instance, v58);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v81);
  }
LABEL_40:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v81);
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
  struct QuestRestrictionInfo_o **v38; // x25
  UserServantEntity_o *v39; // x8
  bool IsUniqueIndividualityRestriction_21846248; // w0
  const MethodInfo *v41; // x1
  QuestRestrictionInfo_o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // kr00_16
  int32_t v44; // w0
  int32_t v45; // w27
  int32_t v46; // w28
  const MethodInfo *v47; // x1
  int32_t DispImageLimitCount; // w0
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *v50; // x22
  int32_t followerIndex; // w24
  int32_t v52; // w5
  FollowerInfo_o *v53; // x23
  struct QuestRestrictionInfo_o *v54; // x22
  int32_t v55; // w24
  int32_t v56; // w5
  bool IsUniqueIndividualityRestriction_21689484; // w0
  const MethodInfo *v58; // x1
  QuestRestrictionInfo_o *v59; // x22
  ServantLeaderInfo_o *v60; // x0
  bool IsFixedSupportPosition_34269732; // w0
  QuestRestrictionInfo_o *v62; // x8
  QuestRestrictionInfo_o *v63; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v65; // w0
  int32_t svtLimitCount; // w22
  int32_t v67; // w23
  const MethodInfo *v68; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v70; // x23
  __int64 v71; // x24
  int32_t v72; // w23
  const MethodInfo *v73; // x1
  int32_t v74; // w24
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+28h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_42EB0DF & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)partyItem, num, method);
    byte_42EB0DF = 1;
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
      goto LABEL_44;
    ServantLeader = this->fields.followerInfo;
    if ( !ServantLeader )
      goto LABEL_79;
    ServantLeader = (void *)FollowerInfo__get_IsNpc((FollowerInfo_o *)ServantLeader, 0LL);
    if ( ((unsigned __int8)ServantLeader & 1) == 0 && (v27 = this->fields.questRestrictionInfo) != 0LL )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !ServantLeader )
        goto LABEL_79;
      v29 = *((_QWORD *)ServantLeader + 6);
      v28 = *((_QWORD *)ServantLeader + 7);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v78.fields.currentCryptoKey = v29;
      *(_QWORD *)&v78.fields.fakeValue = v28;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v78, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v31);
      if ( !ServantLeader )
        goto LABEL_79;
      v32 = *((_DWORD *)ServantLeader + 16);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !ServantLeader )
        goto LABEL_79;
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v34);
      if ( !ServantLeader )
        goto LABEL_79;
      v35 = *((_DWORD *)ServantLeader + 17);
      InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
      v37 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)partyItem);
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_34264504(
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
      if ( ((unsigned __int8)ServantLeader & 1) != 0 )
      {
        v38 = &this->fields.questRestrictionInfo;
      }
      else
      {
        v38 = &this->fields.questRestrictionInfo;
        ServantLeader = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_79;
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_34282120(
                                  (QuestRestrictionInfo_o *)ServantLeader,
                                  this->fields._InitPos_k__BackingField,
                                  0LL);
        if ( ((unsigned __int8)ServantLeader & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !ServantLeader )
            goto LABEL_79;
          v71 = *((_QWORD *)ServantLeader + 6);
          v70 = *((_QWORD *)ServantLeader + 7);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v79.fields.currentCryptoKey = v71;
          *(_QWORD *)&v79.fields.fakeValue = v70;
          v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v79, 0LL);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v73);
          if ( !ServantLeader )
            goto LABEL_79;
          v74 = *((_DWORD *)ServantLeader + 16);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !ServantLeader )
            goto LABEL_79;
          ServantLeader = (void *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_79;
          ServantLeader = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                    questRestrictionInfo,
                                    v72,
                                    v74,
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
LABEL_44:
      v38 = &this->fields.questRestrictionInfo;
      *(_WORD *)&this->fields.isQuestRestriction = 0;
    }
    followerInfo = this->fields.followerInfo;
    v50 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v50 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v50->fields.questId, 0LL);
      v52 = (int)ServantLeader;
      if ( !followerInfo )
        goto LABEL_79;
    }
    else
    {
      v52 = 0;
      if ( !followerInfo )
        goto LABEL_79;
    }
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_21689308(
                              followerInfo,
                              v50,
                              followerIndex,
                              partyItem,
                              num,
                              v52,
                              0LL);
    v53 = this->fields.followerInfo;
    v54 = this->fields.questRestrictionInfo;
    v55 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
    if ( v54 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v54->fields.questId, 0LL);
      v56 = (int)ServantLeader;
      if ( !v53 )
        goto LABEL_79;
    }
    else
    {
      v56 = 0;
      if ( !v53 )
        goto LABEL_79;
    }
    IsUniqueIndividualityRestriction_21689484 = FollowerInfo__IsUniqueIndividualityRestriction_21689484(
                                                  v53,
                                                  v54,
                                                  v55,
                                                  partyItem,
                                                  num,
                                                  v56,
                                                  0LL);
    v59 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21689484;
    if ( v59 )
    {
      v60 = PartyOrganizationListViewItem__get_ServantLeader(this, v58);
      IsFixedSupportPosition_34269732 = QuestRestrictionInfo__IsFixedSupportPosition_34269732(v59, num, v60, 0LL);
      v62 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_34269732;
      if ( v62 )
      {
        ServantLeader = (void *)QuestRestrictionInfo__IsUseOldMaster(v62, 0LL);
        if ( ((unsigned __int8)ServantLeader & 1) == 0 )
          goto LABEL_62;
        if ( !partyItem )
          goto LABEL_79;
        ServantLeader = PartyListViewItem__GetMember(partyItem, num, 0LL);
        if ( !ServantLeader )
          goto LABEL_79;
        if ( *((_BYTE *)ServantLeader + 232) )
          goto LABEL_62;
        ServantLeader = *v38;
        if ( !*v38 )
          goto LABEL_79;
        if ( QuestRestrictionInfo__IsFixedServantPositionIncludeSupport((QuestRestrictionInfo_o *)ServantLeader, 0LL) )
        {
LABEL_62:
          v63 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, (const MethodInfo *)partyItem);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v67 = v65;
          ServantLeader = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v68);
          if ( v63 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v63,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v67,
              svtLimitCount,
              (int32_t)ServantLeader,
              num,
              1,
              0LL);
            return;
          }
          goto LABEL_79;
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
    goto LABEL_35;
  }
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v76.fields.currentCryptoKey = v10;
  *(_QWORD *)&v76.fields.fakeValue = v9;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v76, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v15 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_79:
    sub_B5D69C(ServantLeader, partyItem);
  }
  lv = v15->fields.lv;
  v17 = this->fields._InitPos_k__BackingField;
  v18 = (int)ServantLeader;
  v19 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)partyItem);
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_34264504(
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
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v77.fields.currentCryptoKey = v23;
      *(_QWORD *)&v77.fields.fakeValue = v22;
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v77, 0LL);
      v24 = this->fields.userServantEntity;
      if ( v24 )
      {
        v25 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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
            goto LABEL_35;
          }
        }
      }
    }
    goto LABEL_79;
  }
LABEL_35:
  ServantLeader = this->fields.userServantEntity;
  if ( !ServantLeader )
    goto LABEL_79;
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_21845848(
                            (UserServantEntity_o *)ServantLeader,
                            this->fields.questRestrictionInfo,
                            partyItem,
                            num,
                            -1,
                            0LL);
  v39 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
  if ( !v39 )
    goto LABEL_79;
  IsUniqueIndividualityRestriction_21846248 = UserServantEntity__IsUniqueIndividualityRestriction_21846248(
                                                v39,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v42 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21846248;
  if ( v42 )
  {
    v43 = PartyOrganizationListViewItem__get_SvtId(this, v41);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
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
  struct System_Int64_array *equipIdList; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w19
  __int64 v7; // x0

  equipIdList = this->fields.equipIdList;
  if ( !equipIdList )
    return 0;
  if ( !equipIdList->max_length )
  {
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v2, v3, v4, v5, v6, v7);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t index; // w22
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42EB0D6 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, idx, (_DWORD)method, v3);
    byte_42EB0D6 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v7 = sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
  *(_DWORD *)(v7 + 304) = -1;
  *(_DWORD *)(v7 + 360) = -1;
  ListViewItem___ctor_23901828((ListViewItem_o *)v7, index, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  PartyOrganizationListViewItem__Set((PartyOrganizationListViewItem_o *)v7, this, v10);
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
  __int64 v3; // x3
  PartyOrganizationListViewItem_o *v5; // x20
  _BOOL4 isFollower; // w10
  bool v7; // zf
  int v8; // w10
  char v9; // w9
  bool v10; // w8
  il2cpp_array_size_t v11; // w22
  struct System_Int64_array *equipIdList; // x9
  struct System_Int64_array *v13; // x10
  int64_t v14; // x9
  int64_t v15; // x10
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42EB0E0 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EB0E0 = 1;
  }
  if ( !item )
LABEL_28:
    sub_B5D69C(this, item);
  if ( v5->fields.npcFollowerSvtId != item->fields.npcFollowerSvtId )
    return 0;
  isFollower = item->fields.isFollower;
  v7 = !isFollower;
  v8 = v5->fields.isFollower || isFollower;
  v9 = !v7;
  if ( v8 )
    return v9 ^ !v5->fields.isFollower;
  if ( v5->fields.userServantEntity != item->fields.userServantEntity
    || v5->fields._InitPos_k__BackingField != item->fields._InitPos_k__BackingField )
  {
    return 0;
  }
  if ( v5->fields.equipIdList && item->fields.equipIdList )
  {
    v11 = 0;
    this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( (this->fields.nameLimitCount & 0x4000000) != 0 && !LODWORD(this->fields.npcFollowerSvtId) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( (signed int)v11 >= *(_DWORD *)(*(_QWORD *)&this->fields.classId + 40LL) )
        break;
      equipIdList = v5->fields.equipIdList;
      if ( !equipIdList )
        goto LABEL_28;
      if ( v11 >= equipIdList->max_length )
        goto LABEL_29;
      v13 = item->fields.equipIdList;
      if ( !v13 )
        goto LABEL_28;
      if ( v11 >= v13->max_length )
      {
LABEL_29:
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      v14 = equipIdList->m_Items[v11];
      v15 = v13->m_Items[v11];
      v10 = 0;
      ++v11;
      if ( v14 != v15 )
        return v10;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.followerInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.servantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  *(_OWORD *)&this->fields.classId = xmmword_32B4480;
  this->fields.commandCodeIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_B5D560(
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


int32_t __fastcall PartyOrganizationListViewItem__GeRestrictionTargetType(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  FollowerInfo_o *followerInfo; // x0

  if ( !this->fields.isFollower )
    return 1;
  followerInfo = this->fields.followerInfo;
  if ( !followerInfo )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 SvtId; // x0
  __int64 v12; // x1
  UserServantEntity_o *v13; // x8
  int32_t v14; // w19
  int32_t CardImageLimitCount; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w21
  int32_t ReturnTypeByQuestId; // w2
  FollowerInfo_o *v21; // x20
  struct QuestRestrictionInfo_o *v22; // x8
  int32_t v23; // w21
  int32_t v24; // w2
  int32_t v25; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42EB0EF & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UINarrowFigureRender_TypeInfo, v5, v6, v7);
    byte_42EB0EF = 1;
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
    v21 = this->fields.followerInfo;
    v22 = this->fields.questRestrictionInfo;
    v23 = this->fields.followerIndex;
    v14 = SvtId;
    if ( v22 )
    {
      SvtId = FollowerInfo__GetReturnTypeByQuestId(v22->fields.questId, 0LL);
      v24 = SvtId;
      if ( !v21 )
        goto LABEL_22;
    }
    else
    {
      v24 = 0;
      if ( !v21 )
        goto LABEL_22;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v21, v23, v24, 0LL);
    goto LABEL_17;
  }
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v10;
  *(_QWORD *)&v26.fields.fakeValue = v9;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  v13 = this->fields.userServantEntity;
  if ( !v13 )
LABEL_22:
    sub_B5D69C(SvtId, v12);
  v14 = SvtId;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v13, 0, 0LL);
LABEL_17:
  v25 = CardImageLimitCount;
  if ( (BYTE3(UINarrowFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  }
  return UINarrowFigureRender__GetAssetName(v14, v25, 0LL);
}


int32_t __fastcall PartyOrganizationListViewItem__GetCardImageLimitCount(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UserServantEntity_o *userServantEntity; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v13; // x0

  if ( (byte_42EB0F1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0F1 = 1;
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
      v13 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      return v13->static_fields->OtherImageLimitCount;
    }
    else
    {
LABEL_7:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_22:
        sub_B5D69C(userServantEntity, v5);
      }
    }
  }
  else
  {
    followerInfo = this->fields.followerInfo;
    if ( followerInfo )
    {
      v10 = this->fields.questRestrictionInfo;
      followerIndex = this->fields.followerIndex;
      if ( v10 )
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v10->fields.questId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B5D69C(v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct ServantEntity_o *servantEntity; // x8
  System_Int32_array *result; // x0
  __int64 v7; // x1
  struct ServantEntity_o *v8; // x9
  unsigned __int64 v9; // x8
  struct System_Int32_array *cardIds; // x10
  unsigned __int64 max_length; // x11
  il2cpp_array_size_t v12; // w10
  __int64 v13; // x0

  if ( (byte_42EB0EE & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0EE = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity && servantEntity->fields.cardIds )
  {
    result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
    v8 = this->fields.servantEntity;
    if ( v8 )
    {
      v9 = 0LL;
      do
      {
        cardIds = v8->fields.cardIds;
        if ( !cardIds )
          break;
        max_length = cardIds->max_length;
        if ( (__int64)v9 >= (int)max_length )
          return result;
        if ( v9 >= max_length )
          goto LABEL_18;
        v12 = cardIds->m_Items[v9 + 1] - 1;
        if ( v12 <= 2 )
        {
          if ( !result )
            break;
          if ( v12 >= result->max_length )
          {
LABEL_18:
            v13 = sub_B5D6C8(result);
            sub_B5D668(v13, 0LL);
          }
          ++result->m_Items[v12 + 1];
          v8 = this->fields.servantEntity;
        }
        ++v9;
      }
      while ( v8 );
    }
    sub_B5D69C(result, v7);
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
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v7; // w0

  if ( (byte_42EB0F0 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0F0 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
  return QuestRestrictionInfo__GetCorrectionIconId(questRestrictionInfo, v7, this->fields.isFollower, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B5D69C(v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Array_o *equipIdList; // x0
  System_Int64_array *result; // x0
  System_Int64_array *v10; // x19
  BalanceConfig_c *v11; // x0

  if ( (byte_42EB0E1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&long___TypeInfo, v5, v6, v7);
    byte_42EB0E1 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( !result )
      return result;
    v10 = result;
    result = (System_Int64_array *)sub_B5D684(result, long___TypeInfo);
    if ( result )
      return result;
    sub_B5D990(v10);
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_42EB0ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB0ED = 1;
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
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_42EB0EC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB0EC = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B5D69C(v5, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_42EB0F3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB0F3 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_42EB0F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB0F4 = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_B5D69C(v5, 0LL);
  }
  LODWORD(v5) = UserServantEntity__getPortraitLimitCount(userServantEntity, 0, 0LL);
  return v5;
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetQuestRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  QuestRestrictionInfo_o *v12; // x0
  struct QuestRestrictionInfo_o *v14; // x0
  System_String_o *v15; // x20
  System_String_o *ConfirmRestrictionMessage; // x1

  if ( (byte_42EB0E9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_10468/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EB0E9 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
  {
    v12 = this->fields.questRestrictionInfo;
    if ( v12 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v12, 0LL);
LABEL_33:
    sub_B5D69C(v12, method);
  }
  if ( this->fields.index >= 1 )
  {
    v14 = this->fields.questRestrictionInfo;
    if ( v14 )
    {
      if ( v14->fields.isFixedMyServantSingle )
        return QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(v14, 0LL);
    }
  }
  if ( this->fields.isServantNumRestriction )
  {
    v12 = this->fields.questRestrictionInfo;
    if ( !v12 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v12, 0LL);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v12 = this->fields.questRestrictionInfo;
    if ( !v12 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v12, 0LL);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v12 = this->fields.questRestrictionInfo;
    if ( !v12 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcMessage(v12, 0LL);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10468/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_33;
    v15 = (System_String_o *)v12;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_44577788(v15, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v12 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
    {
      method = 0LL;
      if ( !v12 )
        goto LABEL_33;
    }
    else
    {
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
      if ( !v12 )
        goto LABEL_33;
    }
    return QuestRestrictionInfo__GetRestrictionMessage(v12, (int32_t)method, 0LL);
  }
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v17; // x0

  if ( (byte_42EB0EB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isFixMessage, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_27/*"\n\n"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v12, v13, v14);
    byte_42EB0EB = 1;
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
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10504/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_44580072(
           v17,
           (System_String_o *)StringLiteral_27/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_42EB0EA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB0EA = 1;
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
    sub_B5D69C(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34279132(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v15; // q1
  int64_t Entity; // x0
  const MethodInfo *v17; // x2
  int64_t v18; // x21
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-40h]

  if ( (byte_42EB0DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12, v13);
    byte_42EB0DB = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v22.fields.fakeValue = v15;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v21 = v22;
    Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v21, 0LL);
    if ( !this->fields._IsDisappearSvt_k__BackingField )
    {
      v18 = Entity;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        sub_B5D69C(0LL, v20);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 Master_WarQuestSelectionMaster,
                 &this->fields.userServantEntity,
                 v18,
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    }
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(
      (PartyOrganizationListViewItem_o *)Entity,
      this,
      v17);
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
    sub_B5D69C(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__Modify_29766772(this, item, v11);
}


void __fastcall PartyOrganizationListViewItem__Modify_29766772(
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Int32_array **userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x22
  __int64 v23; // x23
  __int64 v24; // x24
  System_Int32_array **Entity; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x8
  UserServantEntity_o *v33; // x8
  System_Int32_array **CommandCodeIdList; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v48; // x8
  __int64 v49; // x21
  __int64 v50; // x23
  int32_t v51; // w0
  bool IsConvertOverwriteImage; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  System_Int32_array **FriendshipUpValTuple_k__BackingField; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  _BOOL4 isMyServantOrNpcRestriction; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  v9 = this;
  if ( (byte_42EB0DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    this = (PartyOrganizationListViewItem_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v16,
                                                v17,
                                                v18);
    byte_42EB0DC = 1;
  }
  if ( !item )
    goto LABEL_23;
  userServantEntity = (System_Int32_array **)item->fields.userServantEntity;
  v9->fields.userServantEntity = (struct UserServantEntity_o *)userServantEntity;
  p_userServantEntity = &v9->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.userServantEntity,
    userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_23;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v24;
  *(_QWORD *)&v62.fields.fakeValue = v23;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v62,
                                              0LL);
  if ( !v22 )
    goto LABEL_23;
  Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v22,
                                    (int32_t)this,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v9->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.servantEntity, Entity, v26, v27, v28, v29, v30, v31);
  v9->fields.classId = item->fields.classId;
  v9->fields.rarityId = item->fields.rarityId;
  v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v9->fields.userServantEntity;
  v9->fields.frameType = item->fields.frameType;
  if ( !v32 )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                              v32[6],
                                              0LL);
  v33 = v9->fields.userServantEntity;
  v9->fields.svtLimitCount = (int)this;
  if ( !v33 )
    goto LABEL_23;
  CommandCodeIdList = (System_Int32_array **)UserServantEntity__getCommandCodeIdList(v33, 0LL);
  v9->fields.commandCodeIdList = (struct System_Int32_array *)CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.commandCodeIdList,
    CommandCodeIdList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  v48 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_23:
    sub_B5D69C(this, item);
  v50 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v50;
  *(_QWORD *)&v63.fields.fakeValue = v49;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v51, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields._FriendshipUpValTuple_k__BackingField,
    FriendshipUpValTuple_k__BackingField,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  isMyServantOrNpcRestriction = v9->fields.isMyServantOrNpcRestriction;
  v9->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v9->fields.isFollower )
  {
    v9->fields.followerInfo = 0LL;
    v9->fields.isFollower = 0;
    sub_B5D560((BattleServantConfConponent_o *)&v9->fields.followerInfo, 0LL, v55, v56, v57, v58, v59, v60);
  }
  *(_WORD *)&v9->fields._IsClearedWave_k__BackingField = 0;
  v9->fields._IsDisappearEquip_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(v9, v9->fields.equipIdList, (const MethodInfo *)v55);
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
    v7 = sub_B5D6C8(this);
    sub_B5D668(v7, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct ServantEntity_o *servantEntity; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct System_Int32_array *commandCodeIdList; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Array_o *equipSvtIdList; // x0
  Il2CppObject *v78; // x0
  Il2CppObject *v79; // x21
  struct System_Int32_array *v80; // x1
  const MethodInfo *v81; // x2

  if ( (byte_42EB0D9 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EB0D9 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_B5D69C(v6, v7);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)commandCodeIdList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)FriendshipUpValTuple_k__BackingField,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)WaveEnemyClassIds_k__BackingField,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  equipSvtIdList = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !equipSvtIdList )
    goto LABEL_8;
  v78 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v78 )
    goto LABEL_8;
  v79 = v78;
  v80 = (struct System_Int32_array *)sub_B5D684(v78, int___TypeInfo);
  if ( !v80 )
  {
    sub_B5D990(v79);
LABEL_8:
    v80 = 0LL;
  }
  this->fields.equipSvtIdList = v80;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIdList,
    (System_Int32_array **)v80,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v81);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem__SetCanGetBuddyPoint(
        PartyOrganizationListViewItem_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v19; // x8
  int32_t questId; // w20
  struct QuestRestrictionInfo_o *v21; // x8
  EventBuddyPointEntity_o *EntityIncludeQuestUnspecified; // x0
  EventBuddyPointEntity_o *v23; // x21
  int32_t PosPoint; // w0
  _BOOL4 HasFlag; // w21
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x22

  v5 = this;
  if ( (byte_42EB0D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBuddyPointMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    this = (PartyOrganizationListViewItem_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    byte_42EB0D8 = 1;
  }
  if ( !v5->fields.isFollower )
  {
    this = (PartyOrganizationListViewItem_o *)v5->fields.questRestrictionInfo;
    if ( this )
    {
      this = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_33;
    }
  }
  if ( v5->fields.index >= 1 )
  {
    questRestrictionInfo = v5->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      if ( questRestrictionInfo->fields.isFixedMyServantSingle )
        goto LABEL_33;
    }
  }
  if ( v5->fields.isServantNumRestriction || v5->fields.isFixMultipleNpcRestriction || v5->fields.isFixMultipleNpc )
    goto LABEL_33;
  v19 = v5->fields.questRestrictionInfo;
  if ( !v19 )
    goto LABEL_34;
  questId = v19->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v21 = v5->fields.questRestrictionInfo;
  if ( !v21 || !this )
    goto LABEL_34;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v21->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_33;
  v23 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v5->fields.index, 0LL);
  v5->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v23, 0LL) )
    goto LABEL_33;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_34;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_34;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_34:
    sub_B5D69C(this, *(_QWORD *)&eventId);
  if ( UserQuestMaster__getClearCountsFromId(Master_WarQuestSelectionMaster, (int64_t)this, questId, 0LL) < 1
    || !HasFlag )
  {
    v5->fields._IsDispCanGetBuddyPoint_k__BackingField = 1;
    return;
  }
LABEL_33:
  v5->fields._IsDispCanGetBuddyPoint_k__BackingField = 0;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  FollowerInfo_o *p_equipUserServantEntity; // x23
  struct ServantEntity_o **p_equipServantEntity; // x22
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  struct EventUpValInfo_o **p_eventUpValInfo; // x21
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Collections_Generic_IEnumerable_T__o **p_eventUpValItemList; // x28
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  int64_t Instance; // x0
  const MethodInfo *v135; // x1
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  _BOOL4 isFollower; // w8
  struct QuestRestrictionInfo_o *v143; // x8
  Il2CppObject *v144; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array **v146; // x25
  Il2CppObject *v147; // x0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  struct System_Int64_array *v154; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v156; // x8
  int32_t followerIndex; // w25
  DataMasterBase_WarMaster__WarEntity__int__o *v158; // x23
  int32_t v159; // w2
  struct System_Int64_array **p_equipIdList; // x0
  System_Int32_array **v161; // x1
  System_Int32_array **v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  struct EventUpValSetupInfo_o *v169; // x22
  struct System_Int32_array *v170; // x8
  FollowerInfo_o *v171; // x24
  struct QuestRestrictionInfo_o *v172; // x8
  int32_t v173; // w23
  int32_t v174; // w4
  BalanceConfig_c *v175; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v176; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v178; // x22
  PartyOrganizationListViewItem___c_c *v179; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *v180; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__128_0; // x23
  Il2CppObject *v182; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v183; // x0
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v190; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v191; // x0
  __int64 v192; // x8
  int64_t v193; // x22
  unsigned __int64 v194; // x20
  ServantEntity_o *v195; // x24
  int32_t v196; // w25
  EventPersonalMargeUpValInfo_o *v197; // x23
  __int64 v198; // x8
  int64_t v199; // x23
  unsigned __int64 v200; // x24
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v201; // x0
  struct System_Int64_array *v202; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v206; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v207; // x23
  Il2CppClass *v208; // x24
  Il2CppClass *v209; // x25
  System_Int32_array **v210; // x0
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  struct System_Int32_array *equipSvtIdList; // x8
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  struct System_Int32_array *v219; // x8
  UserServantCollectionEntity_o *v220; // x24
  UserServantEntity_o *v221; // x25
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  struct System_Int32_array *v228; // x8
  struct ServantEntity_o *v229; // x0
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  struct System_Int64_array *v236; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  bool EventUpVal_21842536; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v243; // x23
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v245; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__128_1; // x25
  Il2CppObject *v248; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *v249; // x0
  System_String_array **v250; // x2
  System_String_array **v251; // x3
  System_Boolean_array **v252; // x4
  System_Int32_array **v253; // x5
  System_Int32_array *v254; // x6
  System_Int32_array *v255; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v256; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v257; // x0
  __int64 v258; // x8
  int64_t v259; // x24
  unsigned __int64 v260; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v262; // w27
  EventPersonalMargeUpValInfo_o *v263; // x25
  __int64 v264; // x8
  int64_t v265; // x25
  unsigned __int64 v266; // x26
  struct EventMargeItemUpValInfo_array *v267; // x0
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  const MethodInfo *v274; // x2
  bool v275; // w1
  PartyOrganizationListViewItem_o *v276; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v278; // x23
  struct System_Int32_array *v279; // x28
  __int64 v280; // x8
  unsigned __int64 v281; // x20
  int32_t v282; // w26
  EventDetailEntity_o *v283; // x0
  ServantEntity_o *v284; // x27
  EventPersonalMargeUpValInfo_o *v285; // x25
  __int64 v286; // x8
  int64_t v287; // x25
  unsigned __int64 v288; // x26
  struct EventMargeItemUpValInfo_array *v289; // x0
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_Int32_array *v296; // x23
  EventUpValSetupInfo_o *v297; // x24
  System_String_array **v298; // x2
  System_String_array **v299; // x3
  System_Boolean_array **v300; // x4
  System_Int32_array **v301; // x5
  System_Int32_array *v302; // x6
  System_Int32_array *v303; // x7
  UserServantEntity_o *v304; // x22
  EventUpValSetupInfo_o *v305; // x23
  struct QuestRestrictionInfo_o *v306; // x8
  _BOOL8 v307; // x0
  __int64 v308; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v309; // x0
  __int64 v310; // x0
  UserServantEntity_o *v311; // x23
  EventUpValSetupInfo_o *v312; // x22
  struct QuestRestrictionInfo_o *v313; // x8
  ServantEntity_o *v314; // x22
  EventPersonalMargeUpValInfo_o *v315; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v316; // x19
  System_Collections_Generic_IEnumerable_T__o *v317; // x0
  System_Int32_array **List; // x0
  struct EventMargeItemUpValInfo_array **v319; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v320; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+50h] [xbp-60h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v324; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v325; // 0:x0.16

  v8 = equipIdList;
  if ( (byte_42EB0D7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)equipIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v34, v35, v36);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___, v37, v38, v39);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v49, v50, v51);
    sub_B5D5C4(&EventPersonalMargeUpValInfo_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&Method_System_Func_EventDropUpValInfo__int___ctor__, v58, v59, v60);
    sub_B5D5C4(&System_Func_EventDropUpValInfo__int__TypeInfo, v61, v62, v63);
    sub_B5D5C4(&int___TypeInfo, v64, v65, v66);
    sub_B5D5C4(&long___TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v70, v71, v72);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v73, v74, v75);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v76, v77, v78);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v79, v80, v81);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v82, v83, v84);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v85, v86, v87);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v88, v89, v90);
    sub_B5D5C4(&NetworkManager_TypeInfo, v91, v92, v93);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v97, v98, v99);
    sub_B5D5C4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__, v100, v101, v102);
    sub_B5D5C4(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__, v103, v104, v105);
    sub_B5D5C4(&PartyOrganizationListViewItem___c_TypeInfo, v106, v107, v108);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v109, v110, v111);
    byte_42EB0D7 = 1;
  }
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  eventUpVallInfo = 0LL;
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.equipUserServantEntity = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_equipServantEntity = &this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v114, v115, v116, v117, v118, v119);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventUpValInfo, 0LL, v121, v122, v123, v124, v125, v126);
  p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v128, v129, v130, v131, v132, v133);
  isFollower = this->fields.isFollower;
  this->fields._IsDisappearEquip_k__BackingField = 0;
  if ( !isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v161 = 0LL;
LABEL_181:
      sub_B5D560((BattleServantConfConponent_o *)p_equipIdList, v161, v136, v137, v138, v139, v140, v141);
      return;
    }
    if ( v8 )
    {
      v146 = &this->fields.equipIdList;
      if ( this->fields.equipIdList == v8 )
        goto LABEL_61;
      v147 = System_Array__Clone((System_Array_o *)v8, 0LL);
      if ( v147 )
      {
        v144 = v147;
        v154 = (struct System_Int64_array *)sub_B5D684(v147, long___TypeInfo);
        if ( !v154 )
        {
          sub_B5D990(v144);
          goto LABEL_13;
        }
      }
      else
      {
        v154 = 0LL;
      }
    }
    else
    {
      v175 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v175 = BalanceConfig_TypeInfo;
      }
      v154 = (struct System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v175->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v154;
    v146 = &this->fields.equipIdList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.equipIdList,
      (System_Int32_array **)v154,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153);
    v8 = this->fields.equipIdList;
    if ( !v8 )
      goto LABEL_184;
LABEL_61:
    if ( !v8->max_length )
      goto LABEL_167;
    if ( v8->m_Items[0] >= 1 )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_184;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      v202 = *v146;
      if ( !*v146 )
        goto LABEL_184;
      if ( !v202->max_length )
        goto LABEL_167;
      if ( !Instance )
        goto LABEL_184;
      Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   &this->fields.equipUserServantEntity,
                   v202->m_Items[0],
                   (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_184;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v324.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v324.fields.fakeValue = parent;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v324, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_184;
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
          v206 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_184;
          v207 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v209 = v206->_1.declaringType;
          v208 = v206->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v325.fields.currentCryptoKey = v209;
          *(_QWORD *)&v325.fields.fakeValue = v208;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v325, 0LL);
          if ( !v207 )
            goto LABEL_184;
          v210 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v207,
                                          Instance,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          *p_equipServantEntity = (struct ServantEntity_o *)v210;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.equipServantEntity,
            v210,
            v211,
            v212,
            v213,
            v214,
            v215,
            v216);
        }
      }
      else
      {
        equipSvtIdList = this->fields.equipSvtIdList;
        if ( !equipSvtIdList )
          goto LABEL_98;
        if ( !equipSvtIdList->max_length )
          goto LABEL_167;
        if ( equipSvtIdList->m_Items[1] < 1 )
          goto LABEL_98;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v219 = this->fields.equipSvtIdList;
        if ( !v219 )
          goto LABEL_184;
        if ( !v219->max_length )
          goto LABEL_167;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_184;
        Instance = UserServantCollectionMaster__TryGetEntity(
                     Master_WarQuestSelectionMaster,
                     &entity,
                     Instance,
                     v219->m_Items[1],
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          v220 = entity;
          v221 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
          UserServantEntity___ctor_21827392(v221, v220, 0LL);
          p_equipUserServantEntity->klass = (FollowerInfo_c *)v221;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.equipUserServantEntity,
            (System_Int32_array **)v221,
            v222,
            v223,
            v224,
            v225,
            v226,
            v227);
          Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_184;
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
          v228 = this->fields.equipSvtIdList;
          if ( !v228 )
            goto LABEL_184;
          if ( !v228->max_length )
            goto LABEL_167;
          if ( !Instance )
            goto LABEL_184;
          v229 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v228->m_Items[1],
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          this->fields.equipServantEntity = v229;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.equipServantEntity,
            (System_Int32_array **)v229,
            v230,
            v231,
            v232,
            v233,
            v234,
            v235);
          this->fields._IsDisappearEquip_k__BackingField = 1;
        }
        else
        {
LABEL_98:
          v236 = *v146;
          if ( !*v146 )
            goto LABEL_184;
          if ( !v236->max_length )
            goto LABEL_167;
          v236->m_Items[0] = 0LL;
        }
      }
    }
    p_setupInfo = &this->fields.setupInfo;
    setupInfo = this->fields.setupInfo;
    if ( !setupInfo )
      goto LABEL_153;
    eventIdList = setupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_184;
    if ( !*(_QWORD *)&eventIdList->max_length )
      goto LABEL_153;
    userServantEntity = this->fields.userServantEntity;
    Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v135);
    if ( !userServantEntity )
      goto LABEL_184;
    EventUpVal_21842536 = UserServantEntity__getEventUpVal_21842536(
                            userServantEntity,
                            &this->fields.eventUpValInfo,
                            setupInfo,
                            (System_Int64_array *)Instance,
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_21842536;
    v319 = &this->fields.eventUpValItemList;
    if ( questRestrictionInfo )
    {
      v243 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v243,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_184;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v245 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( (BYTE3(PartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v245 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      static_fields = v245->static_fields;
      _9__128_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__128_1;
      if ( !_9__128_1 )
      {
        if ( (BYTE3(v245->vtable._0_Equals.methodPtr) & 4) != 0 && !v245->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v245);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        }
        v248 = (Il2CppObject *)static_fields->__9;
        _9__128_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__128_1,
          v248,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_1__,
          (const MethodInfo_2C2F87C *)Method_System_Func_EventDropUpValInfo__int___ctor__);
        v249 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v249->__9__128_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v249->__9__128_1,
          (System_Int32_array **)_9__128_1,
          v250,
          v251,
          v252,
          v253,
          v254,
          v255);
      }
      v256 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__128_1,
                                                                    (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v257 = System_Linq_Enumerable__Distinct_int_(
               v256,
               (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                            v257,
                            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_184;
      v258 = *(_QWORD *)(Instance + 24);
      v259 = Instance;
      if ( (int)v258 >= 1 )
      {
        v260 = 0LL;
        while ( 1 )
        {
          if ( v260 >= (unsigned int)v258 )
            goto LABEL_167;
          servantEntity = this->fields.servantEntity;
          v262 = *(_DWORD *)(v259 + 4 * v260 + 32);
          v263 = (EventPersonalMargeUpValInfo_o *)sub_B5D694(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v263, v262, servantEntity, 0LL);
          Instance = (int64_t)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_184;
          Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v263 )
            goto LABEL_184;
          EventPersonalMargeUpValInfo__Add(v263, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = EventPersonalMargeUpValInfo__IsEmpty(v263, 0LL);
          if ( (Instance & 1) == 0 )
          {
            Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v263, 0LL);
            if ( !Instance )
              goto LABEL_184;
            v264 = *(_QWORD *)(Instance + 24);
            v265 = Instance;
            if ( (int)v264 >= 1 )
              break;
          }
LABEL_128:
          LODWORD(v258) = *(_DWORD *)(v259 + 24);
          if ( (__int64)++v260 >= (int)v258 )
            goto LABEL_129;
        }
        v266 = 0LL;
        while ( v266 < (unsigned int)v264 )
        {
          if ( !v243 )
            goto LABEL_184;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v243,
            *(EventMissionProgressRequest_Argument_ProgressData_o **)(v265 + 32 + 8 * v266),
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          LODWORD(v264) = *(_DWORD *)(v265 + 24);
          if ( (__int64)++v266 >= (int)v264 )
            goto LABEL_128;
        }
        goto LABEL_167;
      }
LABEL_129:
      if ( !v243 )
        goto LABEL_184;
      v267 = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v243,
                                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = v267;
      sub_B5D560((BattleServantConfConponent_o *)v319, (System_Int32_array **)v267, v268, v269, v270, v271, v272, v273);
      v275 = 1;
      v276 = this;
      goto LABEL_152;
    }
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_184;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v278 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v278,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_184;
    v279 = (*p_setupInfo)->fields.eventIdList;
    if ( !v279 )
      goto LABEL_184;
    v280 = *(_QWORD *)&v279->max_length;
    if ( (int)v280 < 1 )
    {
LABEL_150:
      if ( !v278 )
        goto LABEL_184;
      v289 = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v278,
                                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = v289;
      sub_B5D560((BattleServantConfConponent_o *)v319, (System_Int32_array **)v289, v290, v291, v292, v293, v294, v295);
      v276 = this;
      v275 = 0;
LABEL_152:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v276, v275, v274);
      p_setupInfo = &this->fields.setupInfo;
LABEL_153:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v296 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
        v297 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_24751852(v297, v296, 0, 0, 0, 0LL);
        *p_setupInfo = v297;
        sub_B5D560(
          (BattleServantConfConponent_o *)p_setupInfo,
          (System_Int32_array **)v297,
          v298,
          v299,
          v300,
          v301,
          v302,
          v303);
      }
      if ( this->fields.isEventUpVal )
      {
        v304 = this->fields.userServantEntity;
        v305 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v135);
        v306 = this->fields.questRestrictionInfo;
        if ( !v306 )
          goto LABEL_184;
        if ( !v304 )
          goto LABEL_184;
        Instance = UserServantEntity__GetBonusUpVal(
                     v304,
                     &eventUpVallInfo,
                     v305,
                     (System_Int64_array *)Instance,
                     v306->fields.questId,
                     v306->fields.questPhase,
                     0LL);
        if ( !eventUpVallInfo )
          goto LABEL_184;
        Instance = (int64_t)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_184;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v320,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        for ( i = v320;
              ;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v309,
                (EventMissionProgressRequest_Argument_ProgressData_o *)i.fields.current,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__) )
        {
          v307 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &i,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v307 )
            break;
          if ( !*p_eventUpValInfo )
            sub_B5D69C(v307, v308);
          v309 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v309 )
            sub_B5D69C(0LL, v308);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v311 = this->fields.userServantEntity;
        v312 = this->fields.setupInfo;
        Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(this, v135);
        v313 = this->fields.questRestrictionInfo;
        if ( !v313 || !v311 )
          goto LABEL_184;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v311,
                                      &this->fields.eventUpValInfo,
                                      v312,
                                      (System_Int64_array *)Instance,
                                      v313->fields.questId,
                                      v313->fields.questPhase,
                                      0LL);
      }
      v314 = this->fields.servantEntity;
      v315 = (EventPersonalMargeUpValInfo_o *)sub_B5D694(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v315, 0, v314, 0LL);
      Instance = (int64_t)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v315 )
        {
          EventPersonalMargeUpValInfo__Add(v315, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v315, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v315, 0LL);
            goto LABEL_180;
          }
          v316 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v316,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v316 )
            goto LABEL_184;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v316,
            *p_eventUpValItemList,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v317 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v315, 0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v316,
            v317,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v201 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v316;
LABEL_179:
          List = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          v201,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_180:
          v161 = List;
          *p_eventUpValItemList = (System_Collections_Generic_IEnumerable_T__o *)List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_181;
        }
      }
LABEL_184:
      sub_B5D69C(Instance, v135);
    }
    v281 = 0LL;
    while ( 1 )
    {
      if ( v281 >= (unsigned int)v280 )
        goto LABEL_167;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_184;
      v282 = v279->m_Items[v281 + 1];
      v283 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v282,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v283 || (Instance = EventDetailEntity__HasFlag(v283, 0x800000000LL, 0LL), (Instance & 1) == 0) )
      {
        v284 = this->fields.servantEntity;
        v285 = (EventPersonalMargeUpValInfo_o *)sub_B5D694(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v285, v282, v284, 0LL);
        Instance = (int64_t)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_184;
        Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v285 )
          goto LABEL_184;
        EventPersonalMargeUpValInfo__Add(v285, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = EventPersonalMargeUpValInfo__IsEmpty(v285, 0LL);
        if ( (Instance & 1) == 0 )
        {
          Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v285, 0LL);
          if ( !Instance )
            goto LABEL_184;
          v286 = *(_QWORD *)(Instance + 24);
          v287 = Instance;
          if ( (int)v286 >= 1 )
            break;
        }
      }
LABEL_149:
      LODWORD(v280) = v279->max_length;
      if ( (__int64)++v281 >= (int)v280 )
        goto LABEL_150;
    }
    v288 = 0LL;
    while ( v288 < (unsigned int)v286 )
    {
      if ( !v278 )
        goto LABEL_184;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v278,
        *(EventMissionProgressRequest_Argument_ProgressData_o **)(v287 + 32 + 8 * v288),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
      LODWORD(v286) = *(_DWORD *)(v287 + 24);
      if ( (__int64)++v288 >= (int)v286 )
        goto LABEL_149;
    }
LABEL_167:
    v310 = sub_B5D6C8(Instance);
    sub_B5D668(v310, 0LL);
  }
  this->fields.equipIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v136, v137, v138, v139, v140, v141);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v143 = this->fields.questRestrictionInfo;
  LODWORD(v144) = this->fields.followerIndex;
  if ( v143 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v143->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = FollowerInfo__getEquipSvtId(p_equipUserServantEntity, (int32_t)v144, ReturnTypeByQuestId, 0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_184;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v156 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v158 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( v156 )
    {
      Instance = FollowerInfo__GetReturnTypeByQuestId(v156->fields.questId, 0LL);
      v159 = Instance;
      if ( !followerInfo )
        goto LABEL_184;
    }
    else
    {
      v159 = 0;
      if ( !followerInfo )
        goto LABEL_184;
    }
    Instance = FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v159, 0LL);
    if ( !v158 )
      goto LABEL_184;
    v162 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v158,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    *p_equipServantEntity = (struct ServantEntity_o *)v162;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.equipServantEntity,
      v162,
      v163,
      v164,
      v165,
      v166,
      v167,
      v168);
  }
  v169 = this->fields.setupInfo;
  if ( v169 )
  {
    v170 = v169->fields.eventIdList;
    if ( !v170 )
      goto LABEL_184;
    if ( *(_QWORD *)&v170->max_length )
    {
      v171 = this->fields.followerInfo;
      v172 = this->fields.questRestrictionInfo;
      v173 = this->fields.followerIndex;
      if ( v172 )
      {
        Instance = FollowerInfo__GetReturnTypeByQuestId(v172->fields.questId, 0LL);
        v174 = Instance;
        if ( !v171 )
          goto LABEL_184;
      }
      else
      {
        v174 = 0;
        if ( !v171 )
          goto LABEL_184;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_21688944(
                                    v171,
                                    &this->fields.eventUpValInfo,
                                    v169,
                                    v173,
                                    v174,
                                    0LL);
      v176 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v176,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v178 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v179 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( (BYTE3(PartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v179 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v180 = v179->static_fields;
        _9__128_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v180->__9__128_0;
        if ( !_9__128_0 )
        {
          if ( (BYTE3(v179->vtable._0_Equals.methodPtr) & 4) != 0 && !v179->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v179);
            v180 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          }
          v182 = (Il2CppObject *)v180->__9;
          _9__128_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__128_0,
            v182,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__128_0__,
            (const MethodInfo_2C2F87C *)Method_System_Func_EventDropUpValInfo__int___ctor__);
          v183 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v183->__9__128_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__128_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v183->__9__128_0,
            (System_Int32_array **)_9__128_0,
            v184,
            v185,
            v186,
            v187,
            v188,
            v189);
        }
        v190 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                      v178,
                                                                      (System_Func_TSource__TResult__o *)_9__128_0,
                                                                      (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v191 = System_Linq_Enumerable__Distinct_int_(
                 v190,
                 (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                              v191,
                              (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v192 = *(_QWORD *)(Instance + 24);
          v193 = Instance;
          if ( (int)v192 >= 1 )
          {
            v194 = 0LL;
            while ( 1 )
            {
              if ( v194 >= (unsigned int)v192 )
                goto LABEL_167;
              v195 = this->fields.servantEntity;
              v196 = *(_DWORD *)(v193 + 4 * v194 + 32);
              v197 = (EventPersonalMargeUpValInfo_o *)sub_B5D694(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v197, v196, v195, 0LL);
              Instance = (int64_t)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_184;
              Instance = (int64_t)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v197 )
                goto LABEL_184;
              EventPersonalMargeUpValInfo__Add(v197, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = EventPersonalMargeUpValInfo__IsEmpty(v197, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v197, 0LL);
                if ( !Instance )
                  goto LABEL_184;
                v198 = *(_QWORD *)(Instance + 24);
                v199 = Instance;
                if ( (int)v198 >= 1 )
                  break;
              }
LABEL_56:
              LODWORD(v192) = *(_DWORD *)(v193 + 24);
              if ( (__int64)++v194 >= (int)v192 )
                goto LABEL_57;
            }
            v200 = 0LL;
            while ( v200 < (unsigned int)v198 )
            {
              if ( !v176 )
                goto LABEL_184;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v176,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(v199 + 32 + 8 * v200),
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(v198) = *(_DWORD *)(v199 + 24);
              if ( (__int64)++v200 >= (int)v198 )
                goto LABEL_56;
            }
            goto LABEL_167;
          }
LABEL_57:
          if ( !v176 )
            goto LABEL_184;
          v201 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v176;
          goto LABEL_179;
        }
      }
      goto LABEL_184;
    }
  }
}


void __fastcall PartyOrganizationListViewItem__SetEquipUserServantId(
        PartyOrganizationListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Int64_array *equipIdList; // x8
  const MethodInfo *v10; // x2
  __int64 v11; // x0

  equipIdList = this->fields.equipIdList;
  if ( equipIdList )
  {
    if ( !equipIdList->max_length )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
    }
    equipIdList->m_Items[0] = userSvtId;
    this->fields.equipSvtIdList = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.equipSvtIdList,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    PartyOrganizationListViewItem__SetEquipStatus(this, this->fields.equipIdList, v10);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)classIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationListViewItem__Set_29766020(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UserServantEntity_o *v31; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x21
  __int64 v33; // x22
  __int64 v34; // x23
  struct ServantEntity_o *Entity; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UserServantEntity_o *v42; // x8
  UserServantEntity_o *v43; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v54; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42EB0DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EB0DA = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_13;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.followerInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v31 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_13;
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v34 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v34;
  *(_QWORD *)&v55.fields.fakeValue = v33;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55, 0LL);
  if ( !v32 )
    goto LABEL_13;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v32,
                                       (int32_t)Instance,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  v42 = this->fields.userServantEntity;
  this->fields.frameType = item->fields.frameType;
  if ( !v42
    || (Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                      v42->fields.limitCount,
                                      0LL),
        v43 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v43) )
  {
LABEL_13:
    sub_B5D69C(Instance, v16);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v43, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v54);
}


void __fastcall PartyOrganizationListViewItem__Swap(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_userServantEntity; // x0
  char v7; // w25
  _BOOL8 isFixMultipleNpcRestriction; // x7
  _BOOL8 isFixMultipleNpc; // x5
  System_String_array **npcFollowerSvtId; // x3
  bool isFatigureRecover; // w18
  _BOOL8 isConvertOverwriteImage; // x6
  _BOOL8 isMyServantOrNpcRestriction; // x4
  _BOOL8 haveIndividualityServant; // x2
  struct UserServantEntity_o *v15; // x1
  struct FollowerInfo_o *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ServantEntity_o *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Int32_array *v30; // x1
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
  System_Array_o *v43; // x0
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x20
  struct System_Int32_array *v46; // x1
  const MethodInfo *v47; // x2
  struct EventCampaignEntity_array *v48; // x1
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
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v61; // x1
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
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  Il2CppObject *v92; // x0
  struct System_Int32_array *v93; // x1
  const MethodInfo *v94; // x2
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  int32_t InitPos_k__BackingField; // [xsp+Ch] [xbp-164h]
  struct FollowerInfo_o *followerInfo; // [xsp+20h] [xbp-150h]
  bool isFollower; // [xsp+28h] [xbp-148h]
  bool isFixNpc; // [xsp+2Ch] [xbp-144h]
  __int64 v111; // [xsp+30h] [xbp-140h]
  struct ServantEntity_o *servantEntity; // [xsp+38h] [xbp-138h]
  __int64 v113; // [xsp+40h] [xbp-130h]
  __int64 v114; // [xsp+48h] [xbp-128h]
  bool isRestrictionMyServantPos; // [xsp+50h] [xbp-120h]
  bool isRestrictionNeedStarting; // [xsp+54h] [xbp-11Ch]
  struct System_Int32_array *commandCodeIdList; // [xsp+58h] [xbp-118h]
  bool isRestrictionServantPos; // [xsp+64h] [xbp-10Ch]
  bool isQuestRestriction; // [xsp+68h] [xbp-108h]
  bool isQuestRestrictionWhole; // [xsp+6Ch] [xbp-104h]
  bool isUniqueSvtRestriction; // [xsp+70h] [xbp-100h]
  bool isUniqueIndividualityRestriction; // [xsp+74h] [xbp-FCh]
  bool isFixedSupportPositionRestriction; // [xsp+78h] [xbp-F8h]
  bool isFixedServantPositionRestriction; // [xsp+7Ch] [xbp-F4h]
  bool isFixedServantPositionAgreement; // [xsp+80h] [xbp-F0h]
  bool isServantNumRestriction; // [xsp+84h] [xbp-ECh]
  bool v127; // [xsp+88h] [xbp-E8h]
  bool v128; // [xsp+8Ch] [xbp-E4h]
  bool v129; // [xsp+90h] [xbp-E0h]
  bool v130; // [xsp+94h] [xbp-DCh]
  int64_t v131; // [xsp+98h] [xbp-D8h]
  bool v132; // [xsp+A4h] [xbp-CCh]
  int64_t fatigureTime; // [xsp+A8h] [xbp-C8h]
  struct UserServantEntity_o *userServantEntity; // [xsp+B8h] [xbp-B8h]
  System_Array_o *equipSvtIdList; // [xsp+C0h] [xbp-B0h]
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // [xsp+C8h] [xbp-A8h]
  bool IsNotSupportSingle_k__BackingField; // [xsp+D0h] [xbp-A0h]
  bool IsDispSvtPoint_k__BackingField; // [xsp+D4h] [xbp-9Ch]
  __int64 v139; // [xsp+D8h] [xbp-98h]
  bool IsAllOutBattle_k__BackingField; // [xsp+E4h] [xbp-8Ch]
  bool IsDataLost_k__BackingField; // [xsp+E8h] [xbp-88h]
  int32_t TimesToRestart_k__BackingField; // [xsp+ECh] [xbp-84h]
  System_Int64_array *equipIdList; // [xsp+F0h] [xbp-80h]
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // [xsp+F8h] [xbp-78h]
  bool IsClearedWave_k__BackingField; // [xsp+100h] [xbp-70h]
  bool IsDisappearSvt_k__BackingField; // [xsp+104h] [xbp-6Ch]
  int32_t NowPos_k__BackingField; // [xsp+108h] [xbp-68h]
  bool IsDisappearEquip_k__BackingField; // [xsp+10Ch] [xbp-64h]
  bool IsNotClassBoardNpc_k__BackingField; // [xsp+110h] [xbp-60h]

  if ( (byte_42EB0DD & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)item, notChangeInitPos, method);
    byte_42EB0DD = 1;
  }
  p_userServantEntity = &this->fields.userServantEntity;
  followerInfo = this->fields.followerInfo;
  isFollower = this->fields.isFollower;
  isFixNpc = this->fields.isFixNpc;
  v111 = *(_QWORD *)&this->fields.followerClassId;
  v7 = (_BYTE)this - 104;
  servantEntity = this->fields.servantEntity;
  v113 = *(_QWORD *)&this->fields.classId;
  v114 = *(_QWORD *)&this->fields.frameType;
  isFixMultipleNpcRestriction = this->fields.isFixMultipleNpcRestriction;
  isFixMultipleNpc = this->fields.isFixMultipleNpc;
  commandCodeIdList = this->fields.commandCodeIdList;
  npcFollowerSvtId = (System_String_array **)this->fields.npcFollowerSvtId;
  isFatigureRecover = this->fields.isFatigureRecover;
  isQuestRestriction = this->fields.isQuestRestriction;
  isConvertOverwriteImage = this->fields.isConvertOverwriteImage;
  isMyServantOrNpcRestriction = this->fields.isMyServantOrNpcRestriction;
  haveIndividualityServant = this->fields.haveIndividualityServant;
  isQuestRestrictionWhole = this->fields.isQuestRestrictionWhole;
  isUniqueSvtRestriction = this->fields.isUniqueSvtRestriction;
  isUniqueIndividualityRestriction = this->fields.isUniqueIndividualityRestriction;
  isFixedSupportPositionRestriction = this->fields.isFixedSupportPositionRestriction;
  isFixedServantPositionRestriction = this->fields.isFixedServantPositionRestriction;
  isFixedServantPositionAgreement = this->fields.isFixedServantPositionAgreement;
  if ( !item )
    sub_B5D69C(p_userServantEntity, this->fields.fatigureTime);
  isServantNumRestriction = this->fields.isServantNumRestriction;
  v127 = this->fields.isFixMultipleNpcRestriction;
  v128 = this->fields.isConvertOverwriteImage;
  v129 = this->fields.isFixMultipleNpc;
  equipSvtIdList = (System_Array_o *)this->fields.equipSvtIdList;
  friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
  IsAllOutBattle_k__BackingField = this->fields._IsAllOutBattle_k__BackingField;
  IsDataLost_k__BackingField = this->fields._IsDataLost_k__BackingField;
  equipIdList = this->fields.equipIdList;
  FriendshipUpValTuple_k__BackingField = this->fields._FriendshipUpValTuple_k__BackingField;
  v130 = this->fields.isMyServantOrNpcRestriction;
  v131 = this->fields.npcFollowerSvtId;
  v132 = this->fields.haveIndividualityServant;
  IsNotSupportSingle_k__BackingField = this->fields._IsNotSupportSingle_k__BackingField;
  IsDispSvtPoint_k__BackingField = this->fields._IsDispSvtPoint_k__BackingField;
  fatigureTime = this->fields.fatigureTime;
  userServantEntity = this->fields.userServantEntity;
  InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
  v139 = *(_QWORD *)&this->fields._SvtPoint_k__BackingField;
  TimesToRestart_k__BackingField = this->fields._TimesToRestart_k__BackingField;
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  IsNotClassBoardNpc_k__BackingField = this->fields._IsNotClassBoardNpc_k__BackingField;
  isRestrictionMyServantPos = this->fields.isRestrictionMyServantPos;
  isRestrictionNeedStarting = this->fields.isRestrictionNeedStarting;
  isRestrictionServantPos = this->fields.isRestrictionServantPos;
  IsClearedWave_k__BackingField = this->fields._IsClearedWave_k__BackingField;
  IsDisappearSvt_k__BackingField = this->fields._IsDisappearSvt_k__BackingField;
  IsDisappearEquip_k__BackingField = this->fields._IsDisappearEquip_k__BackingField;
  v15 = item->fields.userServantEntity;
  this->fields.userServantEntity = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_userServantEntity,
    (System_Int32_array **)v15,
    (System_String_array **)haveIndividualityServant,
    npcFollowerSvtId,
    (System_Boolean_array **)isMyServantOrNpcRestriction,
    (System_Int32_array **)isFixMultipleNpc,
    (System_Int32_array *)isConvertOverwriteImage,
    (System_Int32_array *)isFixMultipleNpcRestriction);
  v16 = item->fields.followerInfo;
  this->fields.followerInfo = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  v23 = item->fields.servantEntity;
  this->fields.servantEntity = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  v30 = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  v43 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( v43 && (v44 = System_Array__Clone(v43, 0LL)) != 0LL )
  {
    v45 = v44;
    v46 = (struct System_Int32_array *)sub_B5D684(v44, int___TypeInfo);
    if ( !v46 )
      goto LABEL_14;
  }
  else
  {
    v46 = 0LL;
  }
  this->fields.equipSvtIdList = v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.equipSvtIdList,
    (System_Int32_array **)v46,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v47);
  v48 = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v7 = notChangeInitPos;
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
  v61 = item->fields._FriendshipUpValTuple_k__BackingField;
  this->fields._FriendshipUpValTuple_k__BackingField = v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)v61,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  this->fields._IsClearedWave_k__BackingField = item->fields._IsClearedWave_k__BackingField;
  this->fields._IsDisappearSvt_k__BackingField = item->fields._IsDisappearSvt_k__BackingField;
  this->fields._IsDisappearEquip_k__BackingField = item->fields._IsDisappearEquip_k__BackingField;
  item->fields.userServantEntity = userServantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  item->fields.followerInfo = followerInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  item->fields.isFollower = isFollower;
  item->fields.isFixNpc = isFixNpc;
  *(_QWORD *)&item->fields.followerClassId = v111;
  item->fields.servantEntity = servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  *(_QWORD *)&item->fields.classId = v113;
  *(_QWORD *)&item->fields.frameType = v114;
  item->fields.commandCodeIdList = commandCodeIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields.commandCodeIdList,
    (System_Int32_array **)commandCodeIdList,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  item->fields.isQuestRestriction = isQuestRestriction;
  item->fields.isQuestRestrictionWhole = isQuestRestrictionWhole;
  item->fields.isUniqueSvtRestriction = isUniqueSvtRestriction;
  item->fields.isUniqueIndividualityRestriction = isUniqueIndividualityRestriction;
  item->fields.isFixedSupportPositionRestriction = isFixedSupportPositionRestriction;
  item->fields.isFixedServantPositionRestriction = isFixedServantPositionRestriction;
  item->fields.isFixedServantPositionAgreement = isFixedServantPositionAgreement;
  item->fields.isServantNumRestriction = isServantNumRestriction;
  item->fields.isFixMultipleNpcRestriction = v127;
  item->fields.isFixMultipleNpc = v129;
  item->fields.npcFollowerSvtId = v131;
  item->fields.isConvertOverwriteImage = v128;
  item->fields.isMyServantOrNpcRestriction = v130;
  item->fields.haveIndividualityServant = v132;
  item->fields.isRestrictionMyServantPos = isRestrictionMyServantPos;
  item->fields.isRestrictionNeedStarting = isRestrictionNeedStarting;
  item->fields.isRestrictionServantPos = isRestrictionServantPos;
  item->fields.fatigureTime = fatigureTime;
  item->fields.isFatigureRecover = isFatigureRecover;
  if ( !equipSvtIdList )
    goto LABEL_15;
  v92 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v92 )
    goto LABEL_15;
  v45 = v92;
  v93 = (struct System_Int32_array *)sub_B5D684(v92, int___TypeInfo);
  if ( v93 )
    goto LABEL_16;
LABEL_14:
  sub_B5D990(v45);
LABEL_15:
  v93 = 0LL;
LABEL_16:
  item->fields.equipSvtIdList = v93;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields.equipSvtIdList,
    (System_Int32_array **)v93,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v94);
  item->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  item->fields._IsDispSvtPoint_k__BackingField = IsDispSvtPoint_k__BackingField;
  item->fields._FriendshipUpValTuple_k__BackingField = FriendshipUpValTuple_k__BackingField;
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v139;
  item->fields._IsAllOutBattle_k__BackingField = IsAllOutBattle_k__BackingField;
  item->fields._IsDataLost_k__BackingField = IsDataLost_k__BackingField;
  item->fields._TimesToRestart_k__BackingField = TimesToRestart_k__BackingField;
  item->fields._IsNotSupportSingle_k__BackingField = IsNotSupportSingle_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)FriendshipUpValTuple_k__BackingField,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  if ( (v7 & 1) == 0 )
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationListViewItem_o *v9; // x22
  System_Array_o *equipSvtIdList; // x23
  System_Int64_array *equipIdList; // x20
  System_Array_o *v12; // x0
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x25
  System_Int32_array **v15; // x1
  const MethodInfo *v16; // x2
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x22
  struct System_Int32_array *v25; // x1
  const MethodInfo *v26; // x2

  v9 = this;
  if ( (byte_42EB0DE & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_B5D5C4(&int___TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EB0DE = 1;
  }
  equipSvtIdList = (System_Array_o *)v9->fields.equipSvtIdList;
  if ( !item )
    sub_B5D69C(this, item);
  equipIdList = v9->fields.equipIdList;
  v12 = (System_Array_o *)item->fields.equipSvtIdList;
  if ( !v12 )
    goto LABEL_8;
  v13 = System_Array__Clone(v12, 0LL);
  if ( !v13 )
    goto LABEL_8;
  v14 = v13;
  v15 = (System_Int32_array **)sub_B5D684(v13, int___TypeInfo);
  if ( !v15 )
  {
    sub_B5D990(v14);
LABEL_8:
    v15 = 0LL;
  }
  v9->fields.equipSvtIdList = (struct System_Int32_array *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.equipSvtIdList,
    v15,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__SetEquipStatus(v9, item->fields.equipIdList, v16);
  if ( !equipSvtIdList )
    goto LABEL_13;
  v23 = System_Array__Clone(equipSvtIdList, 0LL);
  if ( !v23 )
    goto LABEL_13;
  v24 = v23;
  v25 = (struct System_Int32_array *)sub_B5D684(v23, int___TypeInfo);
  if ( !v25 )
  {
    sub_B5D990(v24);
LABEL_13:
    v25 = 0LL;
  }
  item->fields.equipSvtIdList = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&item->fields.equipSvtIdList,
    (System_Int32_array **)v25,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v26);
}


void __fastcall PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        bool isQuestTarget,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  char v29; // w1
  int v30; // w2
  __int64 v31; // x3
  char v32; // w1
  int v33; // w2
  __int64 v34; // x3
  char v35; // w1
  int v36; // w2
  __int64 v37; // x3
  char v38; // w1
  int v39; // w2
  __int64 v40; // x3
  char v41; // w1
  int v42; // w2
  __int64 v43; // x3
  char v44; // w1
  int v45; // w2
  __int64 v46; // x3
  EventCampaignMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v48; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x23
  EventQuestMaster_o *v50; // x22
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *v51; // x20
  _BOOL8 v52; // x0
  __int64 v53; // x1
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v57; // x25
  __int64 v58; // x26
  int32_t v59; // w1
  WarQuestSelectionMaster_o *v60; // x0
  __int64 v61; // x1
  struct UserServantEntity_o *v62; // x8
  UserServantMaster_o *v63; // x24
  __int64 v64; // x25
  __int64 v65; // x26
  __int64 v66; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v68; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v73; // w2
  const MethodInfo_2BECCD8 *v74; // x5
  __int64 v75; // x0
  __int64 v76; // x1
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_List_Enumerator_T__o item; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v87; // 0:x0.12
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v88; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16

  if ( (byte_42EB0F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCampaignMaster___, isQuestTarget, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventQuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo,
      v38,
      v39,
      v40);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v44, v45, v46);
    byte_42EB0F7 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_44;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns(Master_WarQuestSelectionMaster, 0LL);
  v50 = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventQuestMaster___);
  v51 = (System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *)sub_B5D694(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType_____ctor(
    v51,
    (const MethodInfo_300B028 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &item,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendshipUpCampaigns,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v86 = item;
    while ( 1 )
    {
      v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v86,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v52 )
        break;
      current = (EventCampaignEntity_o *)v86.fields.current;
      if ( !v86.fields.current )
        sub_B5D69C(v52, v53);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v86.fields.current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B5D69C(v52, v53);
        v58 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v57 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v89.fields.currentCryptoKey = v58;
        *(_QWORD *)&v89.fields.fakeValue = v57;
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v89, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v59,
                (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v60 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
      v62 = this->fields.userServantEntity;
      if ( !v62 )
        sub_B5D69C(v60, v61);
      v63 = (UserServantMaster_o *)v60;
      v65 = *(_QWORD *)&v62->fields.svtId.fields.currentCryptoKey;
      v64 = *(_QWORD *)&v62->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v90.fields.currentCryptoKey = v65;
      *(_QWORD *)&v90.fields.fakeValue = v64;
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v90, 0LL);
      if ( !v63 )
        sub_B5D69C(v66, (unsigned int)v66);
      HeroineData = UserServantMaster__getHeroineData(v63, v66, 0LL);
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
        sub_B5D69C(HeroineData, v68);
      if ( !v50 )
        sub_B5D69C(HeroineData, v68);
      if ( !EventQuestMaster__IsEventNotIncluded(
              v50,
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
        v73 = FriendshipBonusValue;
        item.fields.index = 0;
        item.fields.list = 0LL;
        *(_QWORD *)&v87.fields.Item1 = &item;
        v87.fields.Item3 = eventId;
        System_ValueTuple_int__int__EventCombineEntity_CalcType____ctor(
          v87,
          v73,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v74);
        if ( !v51 )
          sub_B5D69C(v75, v76);
        *(_QWORD *)&v88.fields.Item1 = item.fields.list;
        v88.fields.Item3 = item.fields.index;
        System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____Add(
          v51,
          v88,
          (const MethodInfo_300BDCC *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v86,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v51 )
LABEL_44:
    sub_B5D69C(Master_WarQuestSelectionMaster, v48);
  v77 = System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ToArray(
          v51,
          (const MethodInfo_300E094 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v77;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *viewObject; // x20
  __int64 v9; // x9
  PartyOrganizationListViewItem_o *v10; // x0
  PartyServantListViewItem_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42EB0F6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    this = (PartyOrganizationListViewItem_o *)sub_B5D5C4(&PartyOrganizationListViewObject_TypeInfo, v5, v6, v7);
    byte_42EB0F6 = 1;
  }
  if ( !item )
    goto LABEL_14;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((v9 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&viewObject->klass->_2.bitflags2 + 1) < (unsigned int)v9)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v9 - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    sub_B5D990(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_29766772(v10, v11, v12);
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
      sub_B5D69C(this, item);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t DispImageLimitCount; // w0
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t v18; // w19
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v26; // x0

  if ( (byte_42EB0F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB0F2 = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v18 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v22);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(SvtId, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B5D69C(Instance, v20);
    Entity = ServantCostumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, v18, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    byte_42E6772 = 1;
  }
  v26 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager_TypeInfo;
  }
  return v26->static_fields->unknownNameText;
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *equipUserServantEntity; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  FollowerInfo_o *followerInfo; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t followerIndex; // w20
  int32_t ReturnTypeByQuestId; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42EB0E7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0E7 = 1;
  }
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v7 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&equipUserServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v7;
    *(_QWORD *)&v13.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v13, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantEntity_o *equipServantEntity; // x0

  if ( (byte_42EB0E8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB0E8 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // kr00_16
  struct ServantEntity_o *equipServantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_42EB0E6 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0E6 = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  v6 = *(_QWORD *)&v7.fields.fakeValue;
  v5 = *(_QWORD *)&v7.fields.currentCryptoKey;
  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
  {
    v5 = *(_QWORD *)&equipServantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&equipServantEntity->fields.id.fields.fakeValue;
  }
  *(_QWORD *)&result.fields.fakeValue = v6;
  *(_QWORD *)&result.fields.currentCryptoKey = v5;
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
  int v2; // w2
  __int64 v3; // x3
  struct UserServantEntity_o *equipUserServantEntity; // x8
  __int128 v6; // q0
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10[2]; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EB0E5 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0E5 = 1;
  }
  memset(&v10[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  equipUserServantEntity = this->fields.equipUserServantEntity;
  if ( equipUserServantEntity )
  {
    v7 = *(_OWORD *)&equipUserServantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_OWORD *)&equipUserServantEntity->fields.id.fields.fakeValue;
  }
  else
  {
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v10, 0LL, 0LL);
    v7 = *(_OWORD *)&v10[0].fields.currentCryptoKey;
    v6 = *(_OWORD *)&v10[0].fields.fakeValue;
  }
  *(_OWORD *)&v10[1].fields.currentCryptoKey = v7;
  *(_OWORD *)&v10[1].fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10[1];
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v9, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t NowPos_k__BackingField; // w19
  BalanceConfig_c *v6; // x0

  if ( (byte_42EB0F5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0F5 = 1;
  }
  NowPos_k__BackingField = this->fields._NowPos_k__BackingField;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return NowPos_k__BackingField <= v6->static_fields->DeckMainMemberMax;
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
      sub_B5D69C(Atk, v11);
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
      sub_B5D69C(Hp, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v21; // x20
  __int64 v22; // x21
  int32_t maxLimitCount; // w20
  const MethodInfo *v25; // x1
  int64_t ServantLeader; // x0
  __int64 v27; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v30; // x21
  __int64 v31; // x22
  __int64 v32; // x23
  struct ServantEntity_o *v33; // x8
  ServantLimitImageMaster_o *v34; // x21
  __int64 v35; // x22
  __int64 v36; // x23
  int32_t v37; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_42EB0E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42EB0E3 = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v22 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v21 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v22;
    *(_QWORD *)&v39.fields.fakeValue = v21;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
  }
  else
  {
    maxLimitCount = -1;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v25);
    if ( !ServantLeader )
      goto LABEL_42;
    maxLimitCount = *(_DWORD *)(ServantLeader + 64);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_29;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_42;
  v30 = ServantLeader;
  v32 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v31 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v32;
  *(_QWORD *)&v40.fields.fakeValue = v31;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v40, 0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_42:
    sub_B5D69C(ServantLeader, v27);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    Master_WarQuestSelectionMaster,
                    &entity,
                    v30,
                    ServantLeader,
                    0LL);
  if ( (ServantLeader & 1) == 0 )
  {
    ServantLeader = (int64_t)this->fields.servantEntity;
    if ( ServantLeader )
    {
      v37 = -1;
      return ServantEntity__getName((ServantEntity_o *)ServantLeader, v37, -1, 0LL);
    }
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_42;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_29:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v33 = this->fields.servantEntity;
  if ( !v33 )
    goto LABEL_42;
  v34 = (ServantLimitImageMaster_o *)ServantLeader;
  v36 = *(_QWORD *)&v33->fields.id.fields.currentCryptoKey;
  v35 = *(_QWORD *)&v33->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v36;
  *(_QWORD *)&v41.fields.fakeValue = v35;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
  if ( !v34 )
    goto LABEL_42;
  ServantLeader = ServantLimitImageMaster__GetServantLimitCountSealAfter(v34, ServantLeader, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_42;
  v37 = ServantLeader;
  ServantLeader = (int64_t)this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, v37, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall PartyOrganizationListViewItem__get_SvtId(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0 OVERLAPPED
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // kr00_16
  struct ServantEntity_o *servantEntity; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  if ( (byte_42EB0E2 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB0E2 = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
  v6 = *(_QWORD *)&v7.fields.fakeValue;
  v5 = *(_QWORD *)&v7.fields.currentCryptoKey;
  servantEntity = this->fields.servantEntity;
  if ( servantEntity )
  {
    v5 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  }
  *(_QWORD *)&result.fields.fakeValue = v6;
  *(_QWORD *)&result.fields.currentCryptoKey = v5;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FollowerInfo_o *followerInfo; // x0
  void *IsNpc; // x0
  struct FollowerInfo_o *v10; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v13; // x20
  __int64 v14; // x21
  int32_t nameLimitCount; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42EB0E4 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, v5, v6, v7);
    byte_42EB0E4 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    IsNpc = (void *)FollowerInfo__get_IsNpc(followerInfo, 0LL);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      v10 = this->fields.followerInfo;
      if ( v10 )
        return v10->fields.userName;
      goto LABEL_20;
    }
  }
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_18624/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v13 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = v14;
    *(_QWORD *)&v16.fields.fakeValue = v13;
    nameLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
  }
  else
  {
    nameLimitCount = this->fields.nameLimitCount;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    IsNpc = PartyOrganizationListViewItem__get_ServantLeader(this, method);
    if ( !IsNpc )
      goto LABEL_20;
    nameLimitCount = *((_DWORD *)IsNpc + 16);
  }
  IsNpc = this->fields.servantEntity;
  if ( !IsNpc )
LABEL_20:
    sub_B5D69C(IsNpc, method);
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
  sub_B5D560(
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._WaveEnemyClassIds_k__BackingField = value;
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A87 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E5A87 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__128_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_B5D69C(this, 0LL);
  return drop->fields.eventId;
}