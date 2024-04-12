void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
}


void __fastcall PartyOrganizationListViewItem___ctor_31233976(
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
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
  void *Instance; // x0
  __int64 v42; // x1
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
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
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x2
  int v64; // w9

  if ( (byte_42B35C5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B35C5 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.followerInfo = followerInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = followerInfo != 0LL;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_B52A5C(Instance, v42);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_30463188(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v51, v52, v53, v54, v55, v56);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( initPos )
    v64 = initPos;
  else
    v64 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v64;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v63);
}


void __fastcall PartyOrganizationListViewItem___ctor_31237364(
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct FollowerInfo_o **p_followerInfo; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int64_t ReturnTypeByQuestId; // x0
  unsigned __int64 v46; // x1
  FollowerInfo_o *followerInfo; // x23
  int32_t v48; // w2
  int32_t v49; // w0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  FollowerInfo_o *v56; // x24
  struct QuestRestrictionInfo_o *v57; // x8
  int32_t followerIndex; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // x22
  int32_t v60; // w2
  struct ServantEntity_o *v61; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct ServantEntity_o *v69; // x8
  ServantLimitMaster_o *v70; // x27
  __int64 v71; // x23
  __int64 v72; // x24
  FollowerInfo_o *v73; // x28
  struct QuestRestrictionInfo_o *v74; // x8
  int32_t v75; // w23
  int32_t v76; // w24
  int32_t v77; // w2
  _BOOL4 v78; // w28
  FollowerInfo_o *v79; // x24
  struct QuestRestrictionInfo_o *v80; // x8
  int32_t v81; // w23
  int32_t v82; // w2
  FollowerInfo_o *v83; // x24
  struct QuestRestrictionInfo_o *v84; // x8
  int32_t v85; // w23
  int32_t v86; // w2
  FollowerInfo_o *v87; // x24
  struct QuestRestrictionInfo_o *v88; // x8
  int32_t v89; // w27
  int32_t v90; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  const MethodInfo *v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  int32_t v105; // w23
  const MethodInfo *v106; // x1
  QuestRestrictionInfo_o *v107; // x27
  __int64 v108; // x23
  __int64 v109; // x24
  int32_t v110; // w23
  const MethodInfo *v111; // x1
  int32_t v112; // w24
  int32_t DispLimitCount; // w28
  const MethodInfo *v114; // x1
  int32_t v115; // w23
  int32_t InitPos_k__BackingField; // w24
  int32_t v117; // w0
  int v118; // w8
  int64_t v119; // x23
  unsigned int v120; // w28
  __int64 v121; // x25
  QuestRestrictionInfo_o *v122; // x24
  __int64 v123; // x26
  __int64 v124; // x27
  int32_t v125; // w26
  int32_t v126; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v128; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x23
  struct ServantEntity_o *v130; // x8
  UserEventDataLostEntity_o *v131; // x23
  __int64 v132; // x24
  __int64 v133; // x25
  struct ServantEntity_o *v134; // x9
  UserEventDataLostEntity_o *v135; // x22
  __int64 v136; // x23
  __int64 v137; // x24
  struct QuestRestrictionInfo_o *v138; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v140; // x23
  const MethodInfo *v141; // x1
  const MethodInfo *v142; // x2
  const MethodInfo *v143; // x1
  int32_t v144; // w21
  __int64 v145; // x24
  __int64 v146; // x25
  int32_t v147; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v149; // x1
  const MethodInfo *v150; // x2
  QuestRestrictionInfo_o *v151; // x8
  bool IsNotClassBoard; // w20
  __int64 v153; // x0
  int32_t v154; // [xsp+8h] [xbp-78h]
  int32_t v155; // [xsp+Ch] [xbp-74h]
  int32_t v156; // [xsp+18h] [xbp-68h]
  _BOOL4 v157; // [xsp+1Ch] [xbp-64h]
  QuestPhaseEntity_o *v158; // [xsp+20h] [xbp-60h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  v11 = isFixNpc;
  if ( (byte_42B35C3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B35C3 = 1;
  }
  v158 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.followerInfo = follower;
  p_followerInfo = &this->fields.followerInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)follower,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.isFollower = 1;
  this->fields.isFixNpc = v11;
  this->fields.followerClassId = followerClassId;
  followerInfo = this->fields.followerInfo;
  if ( this->fields.questRestrictionInfo )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questRestrictionInfo->fields.questId, 0LL);
    v48 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_147;
  }
  else
  {
    v48 = 0;
    if ( !followerInfo )
      goto LABEL_147;
  }
  v156 = index;
  v49 = FollowerInfo__getIndex(followerInfo, followerClassId, v48, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v49;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v56 = this->fields.followerInfo;
  v57 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)ReturnTypeByQuestId;
  if ( v57 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v57->fields.questId, 0LL);
    v60 = ReturnTypeByQuestId;
    if ( !v56 )
      goto LABEL_147;
  }
  else
  {
    v60 = 0;
    if ( !v56 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v56, followerIndex, v60, 0LL);
  if ( !v59 )
    goto LABEL_147;
  v61 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v59,
                                    ReturnTypeByQuestId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v61;
  p_servantEntity = &this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v61,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v69 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_147;
  v157 = v11;
  v70 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v72 = *(_QWORD *)&v69->fields.id.fields.currentCryptoKey;
  v71 = *(_QWORD *)&v69->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v160.fields.currentCryptoKey = v72;
  *(_QWORD *)&v160.fields.fakeValue = v71;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v160, 0LL);
  v73 = this->fields.followerInfo;
  v74 = this->fields.questRestrictionInfo;
  v75 = this->fields.followerIndex;
  v76 = ReturnTypeByQuestId;
  if ( v74 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v74->fields.questId, 0LL);
    v77 = ReturnTypeByQuestId;
    if ( !v73 )
      goto LABEL_147;
  }
  else
  {
    v77 = 0;
    if ( !v73 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v73, v75, v77, 0LL);
  if ( !v70 )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)ServantLimitMaster__GetEntity(v70, v76, ReturnTypeByQuestId, 0LL);
  v78 = v157;
  if ( !*p_servantEntity )
    goto LABEL_147;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  v79 = this->fields.followerInfo;
  v80 = this->fields.questRestrictionInfo;
  v81 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v80 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v80->fields.questId, 0LL);
    v82 = ReturnTypeByQuestId;
    if ( !v79 )
      goto LABEL_147;
  }
  else
  {
    v82 = 0;
    if ( !v79 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v79, v81, v82, 0LL);
  v83 = this->fields.followerInfo;
  v84 = this->fields.questRestrictionInfo;
  v85 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v84 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v84->fields.questId, 0LL);
    v86 = ReturnTypeByQuestId;
    if ( !v83 )
      goto LABEL_147;
  }
  else
  {
    v86 = 0;
    if ( !v83 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v83, v85, v86, 0LL);
  v87 = this->fields.followerInfo;
  v88 = this->fields.questRestrictionInfo;
  v89 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v88 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v88->fields.questId, 0LL);
    v90 = ReturnTypeByQuestId;
    if ( !v87 )
      goto LABEL_147;
  }
  else
  {
    v90 = 0;
    if ( !v87 )
      goto LABEL_147;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v87, v89, v90, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  v105 = v156;
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v98) )
    goto LABEL_49;
  ReturnTypeByQuestId = (int64_t)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_147;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v107 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v106);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v109 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v108 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v161.fields.currentCryptoKey = v109;
    *(_QWORD *)&v161.fields.fakeValue = v108;
    v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v161, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v111);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v112 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v46);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v154 = v112;
    v155 = v110;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v114);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v115 = *(_DWORD *)(ReturnTypeByQuestId + 68);
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v117 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)v46);
    this->fields.isQuestRestriction = QuestRestrictionInfo__IsRestriction_34152740(
                                        v107,
                                        &this->fields.isQuestRestrictionWhole,
                                        v155,
                                        v154,
                                        DispLimitCount,
                                        v115,
                                        InitPos_k__BackingField,
                                        v117,
                                        0LL);
    v105 = v156;
    v78 = v157;
  }
  else
  {
LABEL_49:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v46 = (unsigned int)initPos;
  else
    v46 = (unsigned int)(v105 + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = v105 + 1;
  this->fields._InitPos_k__BackingField = v46;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(questRestrictionInfo, v46, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !follower )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = follower->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v118 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v119 = ReturnTypeByQuestId;
    if ( v118 >= 1 )
    {
      v120 = 0;
      while ( 1 )
      {
        if ( v120 >= v118 )
        {
          v153 = sub_B52A88(ReturnTypeByQuestId);
          sub_B52A28(v153, 0LL);
        }
        v121 = *(_QWORD *)(v119 + 8LL * (int)v120 + 32);
        if ( !v121 )
          goto LABEL_147;
        v122 = *p_questRestrictionInfo;
        v124 = *(_QWORD *)(v121 + 80);
        v123 = *(_QWORD *)(v121 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v162.fields.currentCryptoKey = v124;
        *(_QWORD *)&v162.fields.fakeValue = v123;
        v125 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v162, 0LL);
        v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v121 + 96),
                 0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v121, 0, 0LL);
        if ( !v122 )
          goto LABEL_147;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v122,
                                v125,
                                v126,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v118 = *(_DWORD *)(v119 + 24);
        if ( (int)++v120 >= v118 )
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
    if ( !IsNpcMulitipleOrOnly || !v78 )
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
  v128 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v128 && v128->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v130 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v131 = entity;
      v133 = *(_QWORD *)&v130->fields.id.fields.currentCryptoKey;
      v132 = *(_QWORD *)&v130->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v163.fields.currentCryptoKey = v133;
      *(_QWORD *)&v163.fields.fakeValue = v132;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v163, 0LL);
      if ( !v131 )
        goto LABEL_147;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v131, ReturnTypeByQuestId, 0LL);
      v134 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v135 = entity;
      v137 = *(_QWORD *)&v134->fields.id.fields.currentCryptoKey;
      v136 = *(_QWORD *)&v134->fields.id.fields.fakeValue;
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v164.fields.currentCryptoKey = v137;
        *(_QWORD *)&v164.fields.fakeValue = v136;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v164, 0LL);
        if ( !v135 )
          goto LABEL_147;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v135,
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
        *(_QWORD *)&v165.fields.currentCryptoKey = v137;
        *(_QWORD *)&v165.fields.fakeValue = v136;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v165, 0LL);
        if ( !v135 )
          goto LABEL_147;
        if ( UserEventDataLostEntity__IsDataLost(v135, ReturnTypeByQuestId, 0LL) )
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  v138 = this->fields.questRestrictionInfo;
  if ( v138 )
  {
    eventId = v138->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v140 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_147;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v141) )
        {
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v143);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v144 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v144;
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v46);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v146 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v145 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v166.fields.currentCryptoKey = v146;
          *(_QWORD *)&v166.fields.fakeValue = v145;
          v147 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v166, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v140, eventId, v144, v147, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v142);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v46) )
    goto LABEL_142;
  ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v149);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v151 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( *p_questRestrictionInfo && ReturnTypeByQuestId )
      {
        if ( QuestPhaseMaster__TryGetEntity(
               (QuestPhaseMaster_o *)ReturnTypeByQuestId,
               &v158,
               (*p_questRestrictionInfo)->fields.questId,
               (*p_questRestrictionInfo)->fields.questPhase,
               0LL) )
        {
          ReturnTypeByQuestId = (int64_t)v158;
          if ( !v158 )
            goto LABEL_147;
          IsNotClassBoard = QuestPhaseEntity__IsNotClassBoard(v158, 0LL);
        }
        else
        {
          IsNotClassBoard = 0;
        }
        ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v46);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v151) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_146;
        }
      }
LABEL_147:
      sub_B52A5C(ReturnTypeByQuestId, v46);
    }
  }
  else
  {
LABEL_142:
    LOBYTE(v151) = 0;
  }
LABEL_146:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v151;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v150);
}


void __fastcall PartyOrganizationListViewItem___ctor_31263776(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
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
  int64_t Instance; // x0
  const MethodInfo *v49; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x26
  __int64 v52; // x27
  __int64 v53; // x28
  struct ServantEntity_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  ServantLimitMaster_o *v61; // x26
  int32_t v62; // w27
  struct ServantEntity_o *servantEntity; // x8
  int32_t v64; // w10
  int32_t v65; // w8
  struct UserServantEntity_o *v66; // x8
  __int64 v67; // x24
  __int64 v68; // x25
  UserServantEntity_o *v69; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
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
  QuestRestrictionInfo_o *v83; // x24
  struct UserServantEntity_o *v84; // x8
  __int64 v85; // x25
  __int64 v86; // x26
  int32_t v87; // w25
  int32_t v88; // w26
  struct UserServantEntity_o **v89; // x21
  int32_t currentCryptoKey; // w28
  int32_t InitPos_k__BackingField; // w19
  int32_t v92; // w27
  int32_t v93; // w0
  QuestRestrictionInfo_o *v94; // x24
  struct UserServantEntity_o *v95; // x8
  __int64 v96; // x25
  __int64 v97; // x26
  int32_t v98; // w0
  bool IsConvertOverwriteImage; // w8
  const MethodInfo *v100; // x2
  struct QuestRestrictionInfo_o *v101; // x8
  UserServantEntity_o *v102; // x9
  UserEventServantFatigueMaster_o *v103; // x25
  int32_t eventId; // w26
  __int64 v105; // x27
  __int64 v106; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v107; // x21
  int64_t v108; // x19
  bool v109; // cc
  struct QuestRestrictionInfo_o *v110; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v112; // x8
  UserEventAlloutBattleMaster_o *v113; // x25
  __int64 v114; // x26
  __int64 v115; // x27
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x24
  UserServantEntity_o *v117; // x8
  UserEventDataLostEntity_o *v118; // x24
  __int64 v119; // x25
  __int64 v120; // x26
  UserServantEntity_o *v121; // x9
  UserEventDataLostEntity_o *v122; // x24
  __int64 v123; // x25
  __int64 v124; // x26
  PartyOrganizationListViewItem_o *v125; // x0
  bool v126; // w1
  UserServantEntity_o **v127; // x21
  int v128; // w8
  int64_t v129; // x23
  unsigned int v130; // w19
  __int64 v131; // x25
  QuestRestrictionInfo_o *v132; // x24
  __int64 v133; // x26
  __int64 v134; // x27
  int32_t v135; // w26
  int32_t v136; // w27
  int32_t v137; // w22
  EventServantPointRankMaster_o *v138; // x23
  UserServantEntity_o *v139; // x8
  __int128 v140; // q1
  UserEventServantPointMaster_o *v141; // x24
  int64_t v142; // x25
  int32_t SvtPoint_k__BackingField; // w19
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v146; // x2
  const MethodInfo *v147; // x2
  __int64 v148; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v150; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+40h] [xbp-90h]
  UserEventServantPointEntity_o *v152; // [xsp+68h] [xbp-68h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+70h] [xbp-60h] BYREF
  int64_t recoverAt; // [xsp+78h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16

  if ( (byte_42B35C2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B35C2 = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  v152 = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.followerInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v36, v37, v38, v39, v40, v41);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v50 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_139;
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v53 = *(_QWORD *)&v50[5].fields.currentCryptoKey;
  v52 = *(_QWORD *)&v50[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v155.fields.currentCryptoKey = v53;
  *(_QWORD *)&v155.fields.fakeValue = v52;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v155, 0LL);
  if ( !v51 )
    goto LABEL_139;
  v54 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v54;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_139;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_139;
  v61 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_139;
  v62 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userServantEntity)[6], 0LL);
  if ( !v61 )
    goto LABEL_139;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v61, v62, Instance, 0LL);
  servantEntity = this->fields.servantEntity;
  v64 = initPos ? initPos : index + 1;
  this->fields._InitPos_k__BackingField = v64;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !servantEntity )
    goto LABEL_139;
  this->fields.classId = servantEntity->fields.classId;
  if ( !Instance )
    goto LABEL_139;
  v65 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarityId = v65;
  if ( !Instance )
    goto LABEL_139;
  Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
  v66 = this->fields.userServantEntity;
  this->fields.frameType = Instance;
  if ( !v66 )
    goto LABEL_139;
  v68 = *(_QWORD *)&v66->fields.limitCount.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v66->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v156.fields.currentCryptoKey = v68;
  *(_QWORD *)&v156.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v156, 0LL);
  v69 = this->fields.userServantEntity;
  this->fields.svtLimitCount = Instance;
  if ( !v69 )
    goto LABEL_139;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v69, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v83 = this->fields.questRestrictionInfo;
  if ( v83 )
  {
    v84 = this->fields.userServantEntity;
    if ( !v84 )
      goto LABEL_139;
    v86 = *(_QWORD *)&v84->fields.svtId.fields.currentCryptoKey;
    v85 = *(_QWORD *)&v84->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v157.fields.currentCryptoKey = v86;
    *(_QWORD *)&v157.fields.fakeValue = v85;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v157, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_139;
    v87 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_userServantEntity)[6], 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_139;
    v88 = Instance;
    Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_139;
    v89 = &this->fields.userServantEntity;
    currentCryptoKey = (*p_userServantEntity)[16].fields.currentCryptoKey;
    InitPos_k__BackingField = this->fields._InitPos_k__BackingField;
    v92 = Instance;
    v93 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, v49);
    Instance = QuestRestrictionInfo__IsRestriction_34152740(
                 v83,
                 &this->fields.isQuestRestrictionWhole,
                 v87,
                 v88,
                 v92,
                 currentCryptoKey,
                 InitPos_k__BackingField,
                 v93,
                 0LL);
    v94 = this->fields.questRestrictionInfo;
    this->fields.isQuestRestriction = Instance & 1;
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
    if ( v94 )
    {
      v95 = *v89;
      if ( !*v89 )
        goto LABEL_139;
      p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
      v97 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
      v96 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v158.fields.currentCryptoKey = v97;
      *(_QWORD *)&v158.fields.fakeValue = v96;
      v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v158, 0LL);
      IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(v94, v98, 0LL);
    }
    else
    {
      p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v101 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( v101 )
  {
    if ( v101->fields.isFatigure )
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_139;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( !*p_questRestrictionInfo )
        goto LABEL_139;
      v102 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_139;
      v103 = (UserEventServantFatigueMaster_o *)Instance;
      eventId = (*p_questRestrictionInfo)->fields.eventId;
      v106 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v159.fields.currentCryptoKey = v106;
      *(_QWORD *)&v159.fields.fakeValue = v105;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v159, 0LL);
      if ( !v103 )
        goto LABEL_139;
      Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                   v103,
                   &recoverAt,
                   &this->fields.isFatigureRecover,
                   eventId,
                   Instance,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        v107 = p_userServantEntity;
        v108 = recoverAt;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__getTime(0LL);
        v109 = v108 <= Instance;
        p_userServantEntity = v107;
        if ( !v109 )
          this->fields.fatigureTime = recoverAt;
      }
    }
    v110 = *p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_139;
    if ( v110->fields.isAllOutBattle )
    {
      allOutBattleGroupNo = v110->fields.allOutBattleGroupNo;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_139;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
      v112 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_139;
      v113 = (UserEventAlloutBattleMaster_o *)Instance;
      v115 = *(_QWORD *)&v112->fields.svtId.fields.currentCryptoKey;
      v114 = *(_QWORD *)&v112->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v160.fields.currentCryptoKey = v115;
      *(_QWORD *)&v160.fields.fakeValue = v114;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v160, 0LL);
      if ( !*p_questRestrictionInfo || !v113 )
        goto LABEL_139;
      Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                   v113,
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
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
        v117 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_139;
        v118 = entity;
        v120 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
        v119 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v161.fields.currentCryptoKey = v120;
        *(_QWORD *)&v161.fields.fakeValue = v119;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v161, 0LL);
        if ( !v118 )
          goto LABEL_139;
        Instance = UserEventDataLostEntity__IsRestart(v118, Instance, 0LL);
        v121 = (UserServantEntity_o *)*p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_139;
        v122 = entity;
        v124 = *(_QWORD *)&v121->fields.svtId.fields.currentCryptoKey;
        v123 = *(_QWORD *)&v121->fields.svtId.fields.fakeValue;
        if ( (Instance & 1) != 0 )
        {
          if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v162.fields.currentCryptoKey = v124;
          *(_QWORD *)&v162.fields.fakeValue = v123;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v162, 0LL);
          if ( !v122 )
            goto LABEL_139;
          Instance = UserEventDataLostEntity__GetTimesToRestart(v122, Instance, 0LL);
          this->fields._TimesToRestart_k__BackingField = Instance;
        }
        else
        {
          if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v163.fields.currentCryptoKey = v124;
          *(_QWORD *)&v163.fields.fakeValue = v123;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v163, 0LL);
          if ( !v122 )
            goto LABEL_139;
          Instance = UserEventDataLostEntity__IsDataLost(v122, Instance, 0LL);
          if ( (Instance & 1) != 0 )
            this->fields._IsDataLost_k__BackingField = 1;
        }
      }
    }
    v127 = (UserServantEntity_o **)p_userServantEntity;
    *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
    if ( questRestrictionInfo )
    {
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(
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
        Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !Instance )
          goto LABEL_139;
        Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_139;
        v128 = *(_DWORD *)(Instance + 24);
        v129 = Instance;
        if ( v128 >= 1 )
        {
          v130 = 0;
          while ( 1 )
          {
            if ( v130 >= v128 )
            {
              v148 = sub_B52A88(Instance);
              sub_B52A28(v148, 0LL);
            }
            v131 = *(_QWORD *)(v129 + 8LL * (int)v130 + 32);
            if ( !v131 )
              goto LABEL_139;
            v132 = *p_questRestrictionInfo;
            v134 = *(_QWORD *)(v131 + 80);
            v133 = *(_QWORD *)(v131 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v164.fields.currentCryptoKey = v134;
            *(_QWORD *)&v164.fields.fakeValue = v133;
            v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v164, 0LL);
            v136 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                     *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v131 + 96),
                     0LL);
            Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v131, 0, 0LL);
            if ( !v132 )
              goto LABEL_139;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v132,
                         v135,
                         v136,
                         Instance,
                         this->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            if ( (Instance & 1) == 0 )
              break;
            v128 = *(_DWORD *)(v129 + 24);
            if ( (int)++v130 >= v128 )
              goto LABEL_115;
          }
          this->fields.haveIndividualityServant = 1;
        }
      }
    }
LABEL_115:
    if ( *p_questRestrictionInfo )
    {
      v137 = (*p_questRestrictionInfo)->fields.eventId;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      if ( Instance )
      {
        v138 = (EventServantPointRankMaster_o *)Instance;
        if ( !EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v137, 0LL) )
        {
LABEL_137:
          v126 = 1;
          v125 = this;
          goto LABEL_138;
        }
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v139 = *v127;
        if ( *v127 )
        {
          v140 = *(_OWORD *)&v139->fields.userId.fields.fakeValue;
          v141 = (UserEventServantPointMaster_o *)Instance;
          *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v139->fields.userId.fields.currentCryptoKey;
          *(_OWORD *)&v151.fields.fakeValue = v140;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v150 = v151;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v150, 0LL);
          if ( *v127 )
          {
            v142 = Instance;
            Instance = UserServantEntity__getSvtId(*v127, 0LL);
            if ( v141 )
            {
              if ( UserEventServantPointMaster__TryGetEntity(v141, &v152, v142, v137, Instance, 0LL) )
              {
                Instance = (int64_t)v152;
                if ( !v152 )
                  goto LABEL_139;
                this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v152, 0LL);
              }
              Instance = (int64_t)*v127;
              if ( *v127 )
              {
                SvtPoint_k__BackingField = this->fields._SvtPoint_k__BackingField;
                SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                                 v138,
                                 v137,
                                 SvtPoint_k__BackingField,
                                 SvtId,
                                 0LL);
                if ( EnableEntity )
                  this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
                PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, v137, v146);
                goto LABEL_137;
              }
            }
          }
        }
      }
    }
LABEL_139:
    sub_B52A5C(Instance, v49);
  }
  v125 = this;
  v126 = 0;
LABEL_138:
  PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v125, v126, v100);
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v147);
}


void __fastcall PartyOrganizationListViewItem___ctor_31272016(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        bool isFollower,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isMyServant,
        int32_t initPos,
        const MethodInfo *method)
{
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
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  void *Instance; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // w1
  int v54; // w8
  void *v55; // x22
  unsigned int v56; // w27
  __int64 v57; // x24
  QuestRestrictionInfo_o *v58; // x23
  __int64 v59; // x25
  __int64 v60; // x26
  int32_t v61; // w25
  int32_t v62; // w26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  struct QuestRestrictionInfo_o *v70; // x8
  int32_t eventId; // w21
  __int64 v72; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_42B35C4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B35C4 = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.followerInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_WORD *)&this->fields.isFollower = isFollower;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.servantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)&this->fields.classId = 0LL;
  if ( !this )
    goto LABEL_42;
  if ( initPos )
    v53 = initPos;
  else
    v53 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v53;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_32:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_33;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(questRestrictionInfo, v53, 0LL) )
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  v54 = *((_DWORD *)Instance + 6);
  v55 = Instance;
  if ( v54 >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      if ( v56 >= v54 )
      {
        v72 = sub_B52A88(Instance);
        sub_B52A28(v72, 0LL);
      }
      v57 = *((_QWORD *)v55 + (int)v56 + 4);
      if ( !v57 )
        goto LABEL_42;
      v58 = this->fields.questRestrictionInfo;
      v60 = *(_QWORD *)(v57 + 80);
      v59 = *(_QWORD *)(v57 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v73.fields.currentCryptoKey = v60;
      *(_QWORD *)&v73.fields.fakeValue = v59;
      v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v73, 0LL);
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v57 + 96),
              0LL);
      Instance = (void *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)v57, 0, 0LL);
      if ( !v58 )
        goto LABEL_42;
      Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           v58,
                           v61,
                           v62,
                           (int32_t)Instance,
                           this->fields._InitPos_k__BackingField,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      v54 = *((_DWORD *)v55 + 6);
      if ( (int)++v56 >= v54 )
        goto LABEL_33;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_33:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v47, v48, v49, v50, v51, v52);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    0LL,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v70 = this->fields.questRestrictionInfo;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( !v70 )
    goto LABEL_40;
  eventId = v70->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_42:
    sub_B52A5C(Instance, v46);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v69);
  }
LABEL_40:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v69);
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
  bool IsUniqueIndividualityRestriction_21514628; // w0
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
  bool IsUniqueIndividualityRestriction_22632996; // w0
  const MethodInfo *v58; // x1
  QuestRestrictionInfo_o *v59; // x22
  ServantLeaderInfo_o *v60; // x0
  bool IsFixedSupportPosition_34157968; // w0
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

  if ( (byte_42B35CC & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B35CC = 1;
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
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v78, 0LL);
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
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_34152740(
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
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_34170356(
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
          v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v79, 0LL);
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
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_22632820(
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
    IsUniqueIndividualityRestriction_22632996 = FollowerInfo__IsUniqueIndividualityRestriction_22632996(
                                                  v53,
                                                  v54,
                                                  v55,
                                                  partyItem,
                                                  num,
                                                  v56,
                                                  0LL);
    v59 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_22632996;
    if ( v59 )
    {
      v60 = PartyOrganizationListViewItem__get_ServantLeader(this, v58);
      IsFixedSupportPosition_34157968 = QuestRestrictionInfo__IsFixedSupportPosition_34157968(v59, num, v60, 0LL);
      v62 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_34157968;
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
        if ( *((_BYTE *)ServantLeader + 224) )
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
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
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
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v76, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v15 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_79:
    sub_B52A5C(ServantLeader, partyItem);
  }
  lv = v15->fields.lv;
  v17 = this->fields._InitPos_k__BackingField;
  v18 = (int)ServantLeader;
  v19 = PartyOrganizationListViewItem__GeRestrictionTargetType(this, (const MethodInfo *)partyItem);
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_34152740(
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
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v77, 0LL);
      v24 = this->fields.userServantEntity;
      if ( v24 )
      {
        v25 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_21514228(
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
  IsUniqueIndividualityRestriction_21514628 = UserServantEntity__IsUniqueIndividualityRestriction_21514628(
                                                v39,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v42 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21514628;
  if ( v42 )
  {
    v43 = PartyOrganizationListViewItem__get_SvtId(this, v41);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
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
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v2, v3, v4, v5, v6, v7);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewItem__Clone(
        PartyOrganizationListViewItem_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t index; // w22
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_42B35C6 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    byte_42B35C6 = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
  *(_DWORD *)(v6 + 296) = -1;
  *(_DWORD *)(v6 + 352) = -1;
  ListViewItem___ctor_23532700((ListViewItem_o *)v6, index, 0LL);
  if ( !v6 )
    sub_B52A5C(v7, v8);
  PartyOrganizationListViewItem__Set((PartyOrganizationListViewItem_o *)v6, this, v9);
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
  if ( (byte_42B35CD & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B35CD = 1;
  }
  if ( !item )
LABEL_28:
    sub_B52A5C(this, item);
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
        v16 = sub_B52A88(this);
        sub_B52A28(v16, 0LL);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.followerInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.servantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  *(_OWORD *)&this->fields.classId = xmmword_328E050;
  this->fields.commandCodeIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpValTuple_k__BackingField = 0LL;
  sub_B52920(
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B35DC & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UINarrowFigureRender_TypeInfo);
    byte_42B35DC = 1;
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
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v5;
  *(_QWORD *)&v21.fields.fakeValue = v4;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v21, 0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_22:
    sub_B52A5C(SvtId, v7);
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
  __int64 v3; // x1
  UserServantEntity_o *userServantEntity; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t result; // w0
  FollowerInfo_o *followerInfo; // x20
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t followerIndex; // w19
  int32_t ReturnTypeByQuestId; // w2
  BalanceConfig_c *v11; // x0

  if ( (byte_42B35DE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B35DE = 1;
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
      v11 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_22:
        sub_B52A5C(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B52A5C(v5, 0LL);
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
  struct ServantEntity_o *v6; // x9
  unsigned __int64 v7; // x8
  struct System_Int32_array *cardIds; // x10
  unsigned __int64 max_length; // x11
  il2cpp_array_size_t v10; // w10
  __int64 v11; // x0

  if ( (byte_42B35DB & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B35DB = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity && servantEntity->fields.cardIds )
  {
    result = (System_Int32_array *)sub_B5299C(int___TypeInfo, 3LL);
    v6 = this->fields.servantEntity;
    if ( v6 )
    {
      v7 = 0LL;
      do
      {
        cardIds = v6->fields.cardIds;
        if ( !cardIds )
          break;
        max_length = cardIds->max_length;
        if ( (__int64)v7 >= (int)max_length )
          return result;
        if ( v7 >= max_length )
          goto LABEL_18;
        v10 = cardIds->m_Items[v7 + 1] - 1;
        if ( v10 <= 2 )
        {
          if ( !result )
            break;
          if ( v10 >= result->max_length )
          {
LABEL_18:
            v11 = sub_B52A88(result);
            sub_B52A28(v11, 0LL);
          }
          ++result->m_Items[v10 + 1];
          v6 = this->fields.servantEntity;
        }
        ++v7;
      }
      while ( v6 );
    }
    sub_B52A5C(result, v5);
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

  if ( (byte_42B35DD & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B35DD = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B52A5C(v5, 0LL);
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

  if ( (byte_42B35CE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&long___TypeInfo);
    byte_42B35CE = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( !result )
      return result;
    v5 = result;
    result = (System_Int64_array *)sub_B52A44(result, long___TypeInfo);
    if ( result )
      return result;
    sub_B52D50(v5);
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5299C(long___TypeInfo, (unsigned int)v6->static_fields->SvtEquipMax);
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
  sub_B52920(
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

  if ( (byte_42B35DA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35DA = 1;
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

  if ( (byte_42B35D9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35D9 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B52A5C(v5, 0LL);
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

  if ( (byte_42B35E0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35E0 = 1;
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

  if ( (byte_42B35E1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35E1 = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_B52A5C(v5, 0LL);
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

  if ( (byte_42B35D6 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10426/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35D6 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !this->fields.isFollower && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( v4 )
      return QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(v4, 0LL);
LABEL_33:
    sub_B52A5C(v4, method);
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
      goto LABEL_33;
    return QuestRestrictionInfo__GetServantNumRestrictionMessage(v4, 0LL);
  }
  else if ( this->fields.isFixMultipleNpcRestriction )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(v4, 0LL);
  }
  else if ( this->fields.isFixMultipleNpc )
  {
    v4 = this->fields.questRestrictionInfo;
    if ( !v4 )
      goto LABEL_33;
    return QuestRestrictionInfo__GetFixNpcMessage(v4, 0LL);
  }
  else if ( this->fields.frameType == 9 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v4 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10426/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_33;
    v7 = (System_String_o *)v4;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_44568316(v7, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v4 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
    {
      method = 0LL;
      if ( !v4 )
        goto LABEL_33;
    }
    else
    {
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
      if ( !v4 )
        goto LABEL_33;
    }
    return QuestRestrictionInfo__GetRestrictionMessage(v4, (int32_t)method, 0LL);
  }
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueIndividualityRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_String_o *UniqueIndividualityRestrictionMessage; // x20
  System_String_o *v7; // x0

  if ( (byte_42B35D8 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_27/*"\n\n"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_10460/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/);
    byte_42B35D8 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10460/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_44570600(
           v7,
           (System_String_o *)StringLiteral_27/*"\n\n"*/,
           UniqueIndividualityRestrictionMessage,
           0LL);
}


System_String_o *__fastcall PartyOrganizationListViewItem__GetUniqueSvtRestrictionMessage(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  if ( (byte_42B35D7 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35D7 = 1;
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
    sub_B52A5C(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_34167368(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_B52A5C(0LL, v6);
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
  int64_t v5; // x21
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  _BOOL8 Entity; // x0
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  if ( (byte_42B35CA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B35CA = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v4 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v11.fields.fakeValue = v4;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v10 = v11;
    v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v10, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B52A5C(0LL, v7);
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               Master_WarQuestSelectionMaster,
               &this->fields.userServantEntity,
               v5,
               (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp((PartyOrganizationListViewItem_o *)Entity, this, v9);
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
    sub_B52A5C(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__Modify_31274528(this, item, v11);
}


void __fastcall PartyOrganizationListViewItem__Modify_31274528(
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
  System_Int32_array **userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  struct UserServantEntity_o *v12; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  System_Int32_array **Entity; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v23; // x8
  UserServantEntity_o *v24; // x8
  System_Int32_array **CommandCodeIdList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  struct UserServantEntity_o *v39; // x8
  __int64 v40; // x21
  __int64 v41; // x23
  int32_t v42; // w0
  bool IsConvertOverwriteImage; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  System_Int32_array **FriendshipUpValTuple_k__BackingField; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  _BOOL4 isMyServantOrNpcRestriction; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  v9 = this;
  if ( (byte_42B35CB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B35CB = 1;
  }
  if ( !item )
    goto LABEL_23;
  userServantEntity = (System_Int32_array **)item->fields.userServantEntity;
  v9->fields.userServantEntity = (struct UserServantEntity_o *)userServantEntity;
  p_userServantEntity = &v9->fields.userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields.userServantEntity,
    userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_23;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v15 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v15;
  *(_QWORD *)&v53.fields.fakeValue = v14;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                              v53,
                                              0LL);
  if ( !v13 )
    goto LABEL_23;
  Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    (int32_t)this,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v9->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_B52920((BattleServantConfConponent_o *)&v9->fields.servantEntity, Entity, v17, v18, v19, v20, v21, v22);
  v9->fields.classId = item->fields.classId;
  v9->fields.rarityId = item->fields.rarityId;
  v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v9->fields.userServantEntity;
  v9->fields.frameType = item->fields.frameType;
  if ( !v23 )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                              v23[6],
                                              0LL);
  v24 = v9->fields.userServantEntity;
  v9->fields.svtLimitCount = (int)this;
  if ( !v24 )
    goto LABEL_23;
  CommandCodeIdList = (System_Int32_array **)UserServantEntity__getCommandCodeIdList(v24, 0LL);
  v9->fields.commandCodeIdList = (struct System_Int32_array *)CommandCodeIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields.commandCodeIdList,
    CommandCodeIdList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  v39 = *p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_23:
    sub_B52A5C(this, item);
  v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  *(_QWORD *)&v54.fields.fakeValue = v40;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v54, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v42, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->fields._FriendshipUpValTuple_k__BackingField,
    FriendshipUpValTuple_k__BackingField,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  isMyServantOrNpcRestriction = v9->fields.isMyServantOrNpcRestriction;
  v9->fields._IsNotClassBoardNpc_k__BackingField = 0;
  if ( isMyServantOrNpcRestriction && v9->fields.isFollower )
  {
    v9->fields.followerInfo = 0LL;
    v9->fields.isFollower = 0;
    sub_B52920((BattleServantConfConponent_o *)&v9->fields.followerInfo, 0LL, v46, v47, v48, v49, v50, v51);
  }
  PartyOrganizationListViewItem__SetEquipStatus(v9, v9->fields.equipIdList, (const MethodInfo *)v46);
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
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
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
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct FollowerInfo_o *followerInfo; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct ServantEntity_o *servantEntity; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Int32_array *commandCodeIdList; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *FriendshipUpValTuple_k__BackingField; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x2

  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_B52A5C(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  followerInfo = item->fields.followerInfo;
  this->fields.followerInfo = followerInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.followerInfo,
    (System_Int32_array **)followerInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  friendPointCampaignEntityList = item->fields.friendPointCampaignEntityList;
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)commandCodeIdList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)FriendshipUpValTuple_k__BackingField,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)WaveEnemyClassIds_k__BackingField,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v70);
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
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x22

  v4 = this;
  if ( (byte_42B35C8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42B35C8 = 1;
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
  v6 = v4->fields.questRestrictionInfo;
  if ( !v6 )
    goto LABEL_34;
  questId = v6->fields.questId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
  v8 = v4->fields.questRestrictionInfo;
  if ( !v8 || !this )
    goto LABEL_34;
  EntityIncludeQuestUnspecified = EventBuddyPointMaster__GetEntityIncludeQuestUnspecified(
                                    (EventBuddyPointMaster_o *)this,
                                    eventId,
                                    questId,
                                    v8->fields.questPhase,
                                    0LL);
  if ( !EntityIncludeQuestUnspecified )
    goto LABEL_33;
  v10 = EntityIncludeQuestUnspecified;
  PosPoint = EventBuddyPointEntity__GetPosPoint(EntityIncludeQuestUnspecified, v4->fields.index, 0LL);
  v4->fields._CanGetBuddyPoint_k__BackingField = PosPoint;
  if ( !PosPoint || EventBuddyPointEntity__IsHideBuddyPointResult(v10, 0LL) )
    goto LABEL_33;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_34;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_34;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_34:
    sub_B52A5C(this, *(_QWORD *)&eventId);
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
  FollowerInfo_o *p_equipUserServantEntity; // x23
  BattleServantConfConponent_o *p_equipServantEntity; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  EventUpValInfo_o **p_eventUpValInfo; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct EventMargeItemUpValInfo_array **p_eventUpValItemList; // x28
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  DataManager_o *Instance; // x0
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct QuestRestrictionInfo_o *v40; // x8
  Il2CppObject *v41; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array **v43; // x25
  Il2CppObject *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_Int64_array *v51; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v53; // x8
  int32_t followerIndex; // w25
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x23
  int32_t v56; // w2
  struct System_Int64_array **p_equipIdList; // x0
  System_Int32_array **v58; // x1
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct EventUpValSetupInfo_o *v66; // x22
  struct System_Int32_array *v67; // x8
  FollowerInfo_o *v68; // x24
  struct QuestRestrictionInfo_o *v69; // x8
  int32_t v70; // w23
  int32_t v71; // w4
  BalanceConfig_c *v72; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x21
  struct EventUpValInfo_o *eventUpValInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x22
  PartyOrganizationListViewItem___c_c *v76; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *v77; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__115_0; // x23
  Il2CppObject *v79; // x24
  struct PartyOrganizationListViewItem___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  struct DataMasterBase_array *v89; // x8
  DataManager_o *v90; // x22
  unsigned __int64 v91; // x20
  ServantEntity_o *v92; // x24
  int32_t v93; // w25
  EventPersonalMargeUpValInfo_o *v94; // x23
  struct DataMasterBase_array *v95; // x8
  DataManager_o *v96; // x23
  unsigned __int64 v97; // x24
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v98; // x0
  struct System_Int64_array *v99; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v103; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // x23
  Il2CppClass *v105; // x24
  Il2CppClass *v106; // x25
  System_Int32_array **Entity; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  struct System_Int64_array *v114; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x22
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  bool EventUpVal_21510952; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v121; // x23
  System_Collections_Generic_IEnumerable_TSource__o *dropList; // x24
  PartyOrganizationListViewItem___c_c *v123; // x0
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__115_1; // x25
  Il2CppObject *v126; // x26
  struct PartyOrganizationListViewItem___c_StaticFields *v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x0
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v137; // x24
  unsigned __int64 v138; // x20
  ServantEntity_o *servantEntity; // x26
  int32_t v140; // w27
  EventPersonalMargeUpValInfo_o *v141; // x25
  struct DataMasterBase_array *v142; // x8
  DataManager_o *v143; // x25
  unsigned __int64 v144; // x26
  struct EventMargeItemUpValInfo_array *v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  const MethodInfo *v152; // x2
  bool v153; // w1
  PartyOrganizationListViewItem_o *v154; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v156; // x23
  struct System_Int32_array *v157; // x28
  __int64 v158; // x8
  unsigned __int64 v159; // x20
  int32_t v160; // w26
  EventDetailEntity_o *v161; // x0
  ServantEntity_o *v162; // x27
  EventPersonalMargeUpValInfo_o *v163; // x25
  struct DataMasterBase_array *v164; // x8
  DataManager_o *v165; // x25
  unsigned __int64 v166; // x26
  struct EventMargeItemUpValInfo_array *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array *v174; // x23
  EventUpValSetupInfo_o *v175; // x24
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  UserServantEntity_o *v182; // x22
  EventUpValSetupInfo_o *v183; // x23
  struct QuestRestrictionInfo_o *v184; // x8
  _BOOL8 v185; // x0
  __int64 v186; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v187; // x0
  __int64 v188; // x0
  UserServantEntity_o *v189; // x23
  EventUpValSetupInfo_o *v190; // x22
  struct QuestRestrictionInfo_o *v191; // x8
  ServantEntity_o *v192; // x22
  EventPersonalMargeUpValInfo_o *v193; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v194; // x19
  System_Collections_Generic_IEnumerable_T__o *v195; // x0
  System_Int32_array **List; // x0
  System_Collections_Generic_List_Enumerator_T__o v197; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v201; // 0:x0.16

  if ( (byte_42B35C7 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_B52984(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_B52984(&EventUpValSetupInfo_TypeInfo);
    sub_B52984(&Method_System_Func_EventDropUpValInfo__int___ctor__);
    sub_B52984(&System_Func_EventDropUpValInfo__int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_0__);
    sub_B52984(&Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_1__);
    sub_B52984(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_42B35C7 = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v12, v13, v14, v15, v16, v17);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.eventUpValInfo, 0LL, v19, v20, v21, v22, v23, v24);
  p_eventUpValItemList = &this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v26, v27, v28, v29, v30, v31);
  if ( !this->fields.isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v58 = 0LL;
LABEL_163:
      sub_B52920((BattleServantConfConponent_o *)p_equipIdList, v58, v34, v35, v36, v37, v38, v39);
      return;
    }
    if ( equipIdList )
    {
      v43 = &this->fields.equipIdList;
      if ( this->fields.equipIdList == equipIdList )
        goto LABEL_61;
      v44 = System_Array__Clone((System_Array_o *)equipIdList, 0LL);
      if ( v44 )
      {
        v41 = v44;
        v51 = (struct System_Int64_array *)sub_B52A44(v44, long___TypeInfo);
        if ( !v51 )
        {
          sub_B52D50(v41);
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
      v72 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v72 = BalanceConfig_TypeInfo;
      }
      v51 = (struct System_Int64_array *)sub_B5299C(long___TypeInfo, (unsigned int)v72->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v51;
    v43 = &this->fields.equipIdList;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.equipIdList,
      (System_Int32_array **)v51,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    equipIdList = this->fields.equipIdList;
    if ( !equipIdList )
      goto LABEL_166;
LABEL_61:
    if ( !equipIdList->max_length )
      goto LABEL_149;
    if ( equipIdList->m_Items[0] >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_166;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      v99 = *v43;
      if ( !*v43 )
        goto LABEL_166;
      if ( !v99->max_length )
        goto LABEL_149;
      if ( !Instance )
        goto LABEL_166;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                    &this->fields.equipUserServantEntity,
                                    v99->m_Items[0],
                                    (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
        *(_QWORD *)&v200.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v200.fields.fakeValue = parent;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v200, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_166;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
          v103 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_166;
          v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v106 = v103->_1.declaringType;
          v105 = v103->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v201.fields.currentCryptoKey = v106;
          *(_QWORD *)&v201.fields.fakeValue = v105;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v201, 0LL);
          if ( !v104 )
            goto LABEL_166;
          Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v104,
                                            (int32_t)Instance,
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (BattleServantConfConponent_c *)Entity;
          sub_B52920(p_equipServantEntity, Entity, v108, v109, v110, v111, v112, v113);
        }
      }
      else
      {
        v114 = *v43;
        if ( !*v43 )
          goto LABEL_166;
        if ( !v114->max_length )
          goto LABEL_149;
        v114->m_Items[0] = 0LL;
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
    Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v33);
    if ( !userServantEntity )
      goto LABEL_166;
    EventUpVal_21510952 = UserServantEntity__getEventUpVal_21510952(
                            userServantEntity,
                            p_eventUpValInfo,
                            setupInfo,
                            (System_Int64_array *)Instance,
                            0LL);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    this->fields.isEventUpVal = EventUpVal_21510952;
    if ( questRestrictionInfo )
    {
      v121 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v121,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      if ( !*p_eventUpValInfo )
        goto LABEL_166;
      dropList = (System_Collections_Generic_IEnumerable_TSource__o *)(*p_eventUpValInfo)->fields.dropList;
      v123 = PartyOrganizationListViewItem___c_TypeInfo;
      if ( (BYTE3(PartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
        v123 = PartyOrganizationListViewItem___c_TypeInfo;
      }
      static_fields = v123->static_fields;
      _9__115_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__115_1;
      if ( !_9__115_1 )
      {
        if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v123);
          static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        }
        v126 = (Il2CppObject *)static_fields->__9;
        _9__115_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventDropUpValInfo__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__115_1,
          v126,
          Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_1__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_EventDropUpValInfo__int___ctor__);
        v127 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
        v127->__9__115_1 = (struct System_Func_EventDropUpValInfo__int__o *)_9__115_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v127->__9__115_1,
          (System_Int32_array **)_9__115_1,
          v128,
          v129,
          v130,
          v131,
          v132,
          v133);
      }
      v134 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                    dropList,
                                                                    (System_Func_TSource__TResult__o *)_9__115_1,
                                                                    (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
      v135 = System_Linq_Enumerable__Distinct_int_(
               v134,
               (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
      Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                    v135,
                                    (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !Instance )
        goto LABEL_166;
      datalist = Instance->fields.datalist;
      v137 = Instance;
      if ( (int)datalist >= 1 )
      {
        v138 = 0LL;
        while ( 1 )
        {
          if ( v138 >= (unsigned int)datalist )
            goto LABEL_149;
          servantEntity = this->fields.servantEntity;
          v140 = *((_DWORD *)&v137->fields.lookup + v138);
          v141 = (EventPersonalMargeUpValInfo_o *)sub_B52A54(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v141, v140, servantEntity, 0LL);
          Instance = (DataManager_o *)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_166;
          Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v141 )
            goto LABEL_166;
          EventPersonalMargeUpValInfo__Add(v141, (EventDropItemUpValInfo_array *)Instance, 0LL);
          Instance = (DataManager_o *)EventPersonalMargeUpValInfo__IsEmpty(v141, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            Instance = (DataManager_o *)EventPersonalMargeUpValInfo__GetList(v141, 0LL);
            if ( !Instance )
              goto LABEL_166;
            v142 = Instance->fields.datalist;
            v143 = Instance;
            if ( (int)v142 >= 1 )
              break;
          }
LABEL_110:
          LODWORD(datalist) = v137->fields.datalist;
          if ( (__int64)++v138 >= (int)datalist )
            goto LABEL_111;
        }
        v144 = 0LL;
        while ( v144 < (unsigned int)v142 )
        {
          if ( !v121 )
            goto LABEL_166;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v121,
            *((EventMissionProgressRequest_Argument_ProgressData_o **)&v143->fields.lookup + v144),
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          LODWORD(v142) = v143->fields.datalist;
          if ( (__int64)++v144 >= (int)v142 )
            goto LABEL_110;
        }
        goto LABEL_149;
      }
LABEL_111:
      if ( !v121 )
        goto LABEL_166;
      v145 = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v121,
                                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      this->fields.eventUpValItemList = v145;
      sub_B52920(
        (BattleServantConfConponent_o *)p_eventUpValItemList,
        (System_Int32_array **)v145,
        v146,
        v147,
        v148,
        v149,
        v150,
        v151);
      v153 = 1;
      v154 = this;
      goto LABEL_134;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_166;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          Instance,
                                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    v156 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v156,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    if ( !*p_setupInfo )
      goto LABEL_166;
    v157 = (*p_setupInfo)->fields.eventIdList;
    if ( !v157 )
      goto LABEL_166;
    v158 = *(_QWORD *)&v157->max_length;
    if ( (int)v158 < 1 )
    {
LABEL_132:
      if ( !v156 )
        goto LABEL_166;
      v167 = (struct EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v156,
                                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
      p_eventUpValItemList = &this->fields.eventUpValItemList;
      this->fields.eventUpValItemList = v167;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.eventUpValItemList,
        (System_Int32_array **)v167,
        v168,
        v169,
        v170,
        v171,
        v172,
        v173);
      v154 = this;
      v153 = 0;
LABEL_134:
      PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(v154, v153, v152);
      p_setupInfo = &this->fields.setupInfo;
LABEL_135:
      if ( !this->fields.questRestrictionInfo )
        return;
      if ( !*p_setupInfo )
      {
        v174 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
        v175 = (EventUpValSetupInfo_o *)sub_B52A54(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_24343028(v175, v174, 0, 0, 0, 0LL);
        *p_setupInfo = v175;
        sub_B52920(
          (BattleServantConfConponent_o *)p_setupInfo,
          (System_Int32_array **)v175,
          v176,
          v177,
          v178,
          v179,
          v180,
          v181);
      }
      if ( this->fields.isEventUpVal )
      {
        v182 = this->fields.userServantEntity;
        v183 = this->fields.setupInfo;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v33);
        v184 = this->fields.questRestrictionInfo;
        if ( !v184 )
          goto LABEL_166;
        if ( !v182 )
          goto LABEL_166;
        Instance = (DataManager_o *)UserServantEntity__GetBonusUpVal(
                                      v182,
                                      &eventUpVallInfo,
                                      v183,
                                      (System_Int64_array *)Instance,
                                      v184->fields.questId,
                                      v184->fields.questPhase,
                                      0LL);
        if ( !eventUpVallInfo )
          goto LABEL_166;
        Instance = (DataManager_o *)eventUpVallInfo->fields.dropList;
        if ( !Instance )
          goto LABEL_166;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v197,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        for ( i = v197;
              ;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v187,
                (EventMissionProgressRequest_Argument_ProgressData_o *)i.fields.current,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__) )
        {
          v185 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &i,
                   (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
          if ( !v185 )
            break;
          if ( !*p_eventUpValInfo )
            sub_B52A5C(v185, v186);
          v187 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*p_eventUpValInfo)->fields.dropList;
          if ( !v187 )
            sub_B52A5C(0LL, v186);
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
      }
      else
      {
        v189 = this->fields.userServantEntity;
        v190 = this->fields.setupInfo;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v33);
        v191 = this->fields.questRestrictionInfo;
        if ( !v191 || !v189 )
          goto LABEL_166;
        this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                      v189,
                                      p_eventUpValInfo,
                                      v190,
                                      (System_Int64_array *)Instance,
                                      v191->fields.questId,
                                      v191->fields.questPhase,
                                      0LL);
      }
      v192 = this->fields.servantEntity;
      v193 = (EventPersonalMargeUpValInfo_o *)sub_B52A54(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v193, 0, v192, 0LL);
      Instance = (DataManager_o *)this->fields.eventUpValInfo;
      if ( Instance )
      {
        Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( v193 )
        {
          EventPersonalMargeUpValInfo__Add(v193, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( EventPersonalMargeUpValInfo__IsEmpty(v193, 0LL) )
            return;
          if ( !*p_eventUpValItemList )
          {
            List = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v193, 0LL);
            goto LABEL_162;
          }
          v194 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v194,
            (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v194 )
            goto LABEL_166;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v194,
            (System_Collections_Generic_IEnumerable_T__o *)*p_eventUpValItemList,
            (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v195 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v193, 0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v194,
            v195,
            (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v98 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v194;
LABEL_161:
          List = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          v98,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_162:
          v58 = List;
          *p_eventUpValItemList = (struct EventMargeItemUpValInfo_array *)List;
          p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
          goto LABEL_163;
        }
      }
LABEL_166:
      sub_B52A5C(Instance, v33);
    }
    v159 = 0LL;
    while ( 1 )
    {
      if ( v159 >= (unsigned int)v158 )
        goto LABEL_149;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_166;
      v160 = v157->m_Items[v159 + 1];
      v161 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v160,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v161
        || (Instance = (DataManager_o *)EventDetailEntity__HasFlag(v161, 0x800000000LL, 0LL),
            ((unsigned __int8)Instance & 1) == 0) )
      {
        v162 = this->fields.servantEntity;
        v163 = (EventPersonalMargeUpValInfo_o *)sub_B52A54(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v163, v160, v162, 0LL);
        Instance = (DataManager_o *)this->fields.eventUpValInfo;
        if ( !Instance )
          goto LABEL_166;
        Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
        if ( !v163 )
          goto LABEL_166;
        EventPersonalMargeUpValInfo__Add(v163, (EventDropItemUpValInfo_array *)Instance, 0LL);
        Instance = (DataManager_o *)EventPersonalMargeUpValInfo__IsEmpty(v163, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)EventPersonalMargeUpValInfo__GetList(v163, 0LL);
          if ( !Instance )
            goto LABEL_166;
          v164 = Instance->fields.datalist;
          v165 = Instance;
          if ( (int)v164 >= 1 )
            break;
        }
      }
LABEL_131:
      LODWORD(v158) = v157->max_length;
      if ( (__int64)++v159 >= (int)v158 )
        goto LABEL_132;
    }
    v166 = 0LL;
    while ( v166 < (unsigned int)v164 )
    {
      if ( !v156 )
        goto LABEL_166;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v156,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v165->fields.lookup + v166),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
      LODWORD(v164) = v165->fields.datalist;
      if ( (__int64)++v166 >= (int)v164 )
        goto LABEL_131;
    }
LABEL_149:
    v188 = sub_B52A88(Instance);
    sub_B52A28(v188, 0LL);
  }
  this->fields.equipIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v34, v35, v36, v37, v38, v39);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v40 = this->fields.questRestrictionInfo;
  LODWORD(v41) = this->fields.followerIndex;
  if ( v40 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v40->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = (DataManager_o *)FollowerInfo__getEquipSvtId(
                                p_equipUserServantEntity,
                                (int32_t)v41,
                                ReturnTypeByQuestId,
                                0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_166;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v53 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( v53 )
    {
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0LL);
      v56 = (int)Instance;
      if ( !followerInfo )
        goto LABEL_166;
    }
    else
    {
      v56 = 0;
      if ( !followerInfo )
        goto LABEL_166;
    }
    Instance = (DataManager_o *)FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v56, 0LL);
    if ( !v55 )
      goto LABEL_166;
    v59 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v55,
                                   (int32_t)Instance,
                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_equipServantEntity->klass = (BattleServantConfConponent_c *)v59;
    sub_B52920(p_equipServantEntity, v59, v60, v61, v62, v63, v64, v65);
  }
  v66 = this->fields.setupInfo;
  if ( v66 )
  {
    v67 = v66->fields.eventIdList;
    if ( !v67 )
      goto LABEL_166;
    if ( *(_QWORD *)&v67->max_length )
    {
      v68 = this->fields.followerInfo;
      v69 = this->fields.questRestrictionInfo;
      v70 = this->fields.followerIndex;
      if ( v69 )
      {
        Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(v69->fields.questId, 0LL);
        v71 = (int)Instance;
        if ( !v68 )
          goto LABEL_166;
      }
      else
      {
        v71 = 0;
        if ( !v68 )
          goto LABEL_166;
      }
      this->fields.isEventUpVal = FollowerInfo__getEventUpVal_22632456(v68, p_eventUpValInfo, v66, v70, v71, 0LL);
      v73 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v73,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      eventUpValInfo = this->fields.eventUpValInfo;
      if ( eventUpValInfo )
      {
        v75 = (System_Collections_Generic_IEnumerable_TSource__o *)eventUpValInfo->fields.dropList;
        v76 = PartyOrganizationListViewItem___c_TypeInfo;
        if ( (BYTE3(PartyOrganizationListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationListViewItem___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationListViewItem___c_TypeInfo);
          v76 = PartyOrganizationListViewItem___c_TypeInfo;
        }
        v77 = v76->static_fields;
        _9__115_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v77->__9__115_0;
        if ( !_9__115_0 )
        {
          if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v76);
            v77 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          }
          v79 = (Il2CppObject *)v77->__9;
          _9__115_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_EventDropUpValInfo__int__TypeInfo);
          System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
            _9__115_0,
            v79,
            Method_PartyOrganizationListViewItem___c__SetEquipStatus_b__115_0__,
            (const MethodInfo_2BC9C68 *)Method_System_Func_EventDropUpValInfo__int___ctor__);
          v80 = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
          v80->__9__115_0 = (struct System_Func_EventDropUpValInfo__int__o *)_9__115_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&v80->__9__115_0,
            (System_Int32_array **)_9__115_0,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86);
        }
        v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                     v75,
                                                                     (System_Func_TSource__TResult__o *)_9__115_0,
                                                                     (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_EventDropUpValInfo__int___);
        v88 = System_Linq_Enumerable__Distinct_int_(
                v87,
                (const MethodInfo_1B5FED4 *)Method_System_Linq_Enumerable_Distinct_int___);
        Instance = (DataManager_o *)System_Linq_Enumerable__ToArray_int_(
                                      v88,
                                      (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( Instance )
        {
          v89 = Instance->fields.datalist;
          v90 = Instance;
          if ( (int)v89 >= 1 )
          {
            v91 = 0LL;
            while ( 1 )
            {
              if ( v91 >= (unsigned int)v89 )
                goto LABEL_149;
              v92 = this->fields.servantEntity;
              v93 = *((_DWORD *)&v90->fields.lookup + v91);
              v94 = (EventPersonalMargeUpValInfo_o *)sub_B52A54(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v94, v93, v92, 0LL);
              Instance = (DataManager_o *)this->fields.eventUpValInfo;
              if ( !Instance )
                goto LABEL_166;
              Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
              if ( !v94 )
                goto LABEL_166;
              EventPersonalMargeUpValInfo__Add(v94, (EventDropItemUpValInfo_array *)Instance, 0LL);
              Instance = (DataManager_o *)EventPersonalMargeUpValInfo__IsEmpty(v94, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                Instance = (DataManager_o *)EventPersonalMargeUpValInfo__GetList(v94, 0LL);
                if ( !Instance )
                  goto LABEL_166;
                v95 = Instance->fields.datalist;
                v96 = Instance;
                if ( (int)v95 >= 1 )
                  break;
              }
LABEL_56:
              LODWORD(v89) = v90->fields.datalist;
              if ( (__int64)++v91 >= (int)v89 )
                goto LABEL_57;
            }
            v97 = 0LL;
            while ( v97 < (unsigned int)v95 )
            {
              if ( !v73 )
                goto LABEL_166;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v73,
                *((EventMissionProgressRequest_Argument_ProgressData_o **)&v96->fields.lookup + v97),
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(v95) = v96->fields.datalist;
              if ( (__int64)++v97 >= (int)v95 )
                goto LABEL_56;
            }
            goto LABEL_149;
          }
LABEL_57:
          if ( !v73 )
            goto LABEL_166;
          v98 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v73;
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
      v4 = sub_B52A88(this);
      sub_B52A28(v4, 0LL);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)classIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationListViewItem__Set_31273776(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UserServantEntity_o *v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  struct ServantEntity_o *Entity; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UserServantEntity_o *v32; // x8
  UserServantEntity_o *v33; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v44; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42B35C9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B35C9 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_13;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.followerInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_13;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v24;
  *(_QWORD *)&v45.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v45, 0LL);
  if ( !v22 )
    goto LABEL_13;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v22,
                                       (int32_t)Instance,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  v32 = this->fields.userServantEntity;
  this->fields.frameType = item->fields.frameType;
  if ( !v32
    || (Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                      v32->fields.limitCount,
                                      0LL),
        v33 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v33) )
  {
LABEL_13:
    sub_B52A5C(Instance, v6);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v33, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v44);
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
    sub_B52A5C(p_userServantEntity, 0LL);
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
  sub_B52920(
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
  sub_B52920(v11, (System_Int32_array **)followerInfo, v21, v22, v23, v24, v25, v26);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B52920(v12, (System_Int32_array **)servantEntity, v28, v29, v30, v31, v32, v33);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B52920(v13, (System_Int32_array **)commandCodeIdList, v35, v36, v37, v38, v39, v40);
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
  sub_B52920(v14, (System_Int32_array **)friendPointCampaignEntityList, v43, v44, v45, v46, v47, v48);
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
  sub_B52920(v15, (System_Int32_array **)FriendshipUpValTuple_k__BackingField, v49, v50, v51, v52, v53, v54);
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  item->fields.userServantEntity = v121;
  sub_B52920((BattleServantConfConponent_o *)v19, (System_Int32_array **)v121, v56, v57, v58, v59, v60, v61);
  item->fields.followerInfo = v94;
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
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
    sub_B52A5C(this, 0LL);
  equipIdList = this->fields.equipIdList;
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, method);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v5);
}


void __fastcall PartyOrganizationListViewItem__UpdateCampaignFriendshipUp(
        PartyOrganizationListViewItem_o *this,
        bool isQuestTarget,
        const MethodInfo *method)
{
  EventCampaignMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x23
  EventQuestMaster_o *v7; // x22
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v14; // x25
  __int64 v15; // x26
  int32_t v16; // w1
  WarQuestSelectionMaster_o *v17; // x0
  __int64 v18; // x1
  struct UserServantEntity_o *v19; // x8
  UserServantMaster_o *v20; // x24
  __int64 v21; // x25
  __int64 v22; // x26
  __int64 v23; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v25; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v30; // w2
  const MethodInfo_2C0F670 *v31; // x5
  __int64 v32; // x0
  __int64 v33; // x1
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_Enumerator_T__o item; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v44; // 0:x0.12
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v45; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_42B35E4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_B52984(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_42B35E4 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_44;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns(Master_WarQuestSelectionMaster, 0LL);
  v7 = (EventQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventQuestMaster___);
  v8 = (System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *)sub_B52A54(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType_____ctor(
    v8,
    (const MethodInfo_2FA476C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( FriendshipUpCampaigns )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &item,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendshipUpCampaigns,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v43 = item;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v43,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v9 )
        break;
      current = (EventCampaignEntity_o *)v43.fields.current;
      if ( !v43.fields.current )
        sub_B52A5C(v9, v10);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v43.fields.current[2].monitor;
      if ( monitor && monitor[1].monitor )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( !userServantEntity )
          sub_B52A5C(v9, v10);
        v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v46.fields.currentCryptoKey = v15;
        *(_QWORD *)&v46.fields.fakeValue = v14;
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v46, 0LL);
        if ( !System_Linq_Enumerable__Contains_int_(
                monitor,
                v16,
                (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
          continue;
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v17 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
      v19 = this->fields.userServantEntity;
      if ( !v19 )
        sub_B52A5C(v17, v18);
      v20 = (UserServantMaster_o *)v17;
      v22 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v47.fields.currentCryptoKey = v22;
      *(_QWORD *)&v47.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v47, 0LL);
      if ( !v20 )
        sub_B52A5C(v23, (unsigned int)v23);
      HeroineData = UserServantMaster__getHeroineData(v20, v23, 0LL);
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
        sub_B52A5C(HeroineData, v25);
      if ( !v7 )
        sub_B52A5C(HeroineData, v25);
      if ( !EventQuestMaster__IsEventNotIncluded(
              v7,
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
        v30 = FriendshipBonusValue;
        item.fields.index = 0;
        item.fields.list = 0LL;
        *(_QWORD *)&v44.fields.Item1 = &item;
        v44.fields.Item3 = eventId;
        System_ValueTuple_int__int__EventCombineEntity_CalcType____ctor(
          v44,
          v30,
          calcType,
          Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
          v31);
        if ( !v8 )
          sub_B52A5C(v32, v33);
        *(_QWORD *)&v45.fields.Item1 = item.fields.list;
        v45.fields.Item3 = item.fields.index;
        System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____Add(
          v8,
          v45,
          (const MethodInfo_2FA5510 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v43,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v8 )
LABEL_44:
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  v34 = System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ToArray(
          v8,
          (const MethodInfo_2FA77D8 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v34;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
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
  UnityEngine_Object_o *viewObject; // x20
  __int64 v5; // x9
  PartyOrganizationListViewItem_o *v6; // x0
  PartyServantListViewItem_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_42B35E3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (PartyOrganizationListViewItem_o *)sub_B52984(&PartyOrganizationListViewObject_TypeInfo);
    byte_42B35E3 = 1;
  }
  if ( !item )
    goto LABEL_14;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((v5 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&viewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v5 - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    sub_B52D50(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_31274528(v6, v7, v8);
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
      sub_B52A5C(this, item);
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v12; // x0

  if ( (byte_42B35DF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B35DF = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v4 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v8);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(SvtId, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B52A5C(Instance, v6);
    Entity = ServantCostumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, v4, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ADEE6 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ADEE6 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42B35D4 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B35D4 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
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

  if ( (byte_42B35D5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35D5 = 1;
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

  if ( (byte_42B35D3 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B35D3 = 1;
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

  if ( (byte_42B35D2 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B35D2 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v7, 0LL);
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

  if ( (byte_42B35E2 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B35E2 = 1;
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
      sub_B52A5C(Atk, v11);
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
      sub_B52A5C(Hp, v11);
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t maxLimitCount; // w20
  const MethodInfo *v8; // x1
  int64_t ServantLeader; // x0
  __int64 v10; // x1
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  struct ServantEntity_o *v16; // x8
  ServantLimitImageMaster_o *v17; // x21
  __int64 v18; // x22
  __int64 v19; // x23
  int32_t v20; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42B35D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B35D0 = 1;
  }
  entity = 0LL;
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v4 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v5;
    *(_QWORD *)&v22.fields.fakeValue = v4;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
  }
  else
  {
    maxLimitCount = -1;
  }
  if ( PartyOrganizationListViewItem__get_ServantLeader(this, method) )
  {
    ServantLeader = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v8);
    if ( !ServantLeader )
      goto LABEL_42;
    maxLimitCount = *(_DWORD *)(ServantLeader + 64);
  }
  if ( maxLimitCount != -1 )
    goto LABEL_29;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_42;
  v13 = ServantLeader;
  v15 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v23, 0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_42:
    sub_B52A5C(ServantLeader, v10);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    Master_WarQuestSelectionMaster,
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
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_42;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_29:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v16 = this->fields.servantEntity;
  if ( !v16 )
    goto LABEL_42;
  v17 = (ServantLimitImageMaster_o *)ServantLeader;
  v19 = *(_QWORD *)&v16->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v19;
  *(_QWORD *)&v24.fields.fakeValue = v18;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v24, 0LL);
  if ( !v17 )
    goto LABEL_42;
  ServantLeader = ServantLimitImageMaster__GetServantLimitCountSealAfter(v17, ServantLeader, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_42;
  v20 = ServantLeader;
  ServantLeader = (int64_t)this->fields.servantEntity;
  return ServantEntity__getName((ServantEntity_o *)ServantLeader, v20, -1, 0LL);
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

  if ( (byte_42B35CF & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B35CF = 1;
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
  FollowerInfo_o *followerInfo; // x0
  void *IsNpc; // x0
  struct FollowerInfo_o *v5; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t nameLimitCount; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42B35D1 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B35D1 = 1;
  }
  followerInfo = this->fields.followerInfo;
  if ( followerInfo )
  {
    IsNpc = (void *)FollowerInfo__get_IsNpc(followerInfo, 0LL);
    if ( ((unsigned __int8)IsNpc & 1) != 0 )
    {
      v5 = this->fields.followerInfo;
      if ( v5 )
        return v5->fields.userName;
      goto LABEL_20;
    }
  }
  if ( !this->fields.servantEntity )
    return (System_String_o *)StringLiteral_18529/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v11.fields.currentCryptoKey = v9;
    *(_QWORD *)&v11.fields.fakeValue = v8;
    nameLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
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
    sub_B52A5C(IsNpc, method);
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
  sub_B52920(
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
  sub_B52920(
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
  Il2CppObject *v1; // x19
  struct PartyOrganizationListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42AD416 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationListViewItem___c_TypeInfo);
    byte_42AD416 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(PartyOrganizationListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = PartyOrganizationListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyOrganizationListViewItem___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return drop->fields.eventId;
}


int32_t __fastcall PartyOrganizationListViewItem___c___SetEquipStatus_b__115_1(
        PartyOrganizationListViewItem___c_o *this,
        EventDropUpValInfo_o *drop,
        const MethodInfo *method)
{
  if ( !drop )
    sub_B52A5C(this, 0LL);
  return drop->fields.eventId;
}