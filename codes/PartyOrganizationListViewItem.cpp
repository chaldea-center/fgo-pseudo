void __fastcall PartyOrganizationListViewItem___ctor(
        PartyOrganizationListViewItem_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32179668(
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
  __int64 v46; // x1
  struct ServantEntity_o *Entity; // x0
  struct ServantEntity_o **p_servantEntity; // x24
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
  const MethodInfo *v61; // x2
  int v62; // w9

  if ( (byte_418B6FD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExceedMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v18);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_418B6FD = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.followerInfo = followerInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL),
        !*p_servantEntity)
    || (this->fields.classId = (*p_servantEntity)->fields.classId, !Instance)
    || (this->fields.rarityId = *((_DWORD *)Instance + 6),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v46);
  }
  this->fields.frameType = ServantExceedMaster__GetFrameType_30786392(
                             (ServantExceedMaster_o *)Instance,
                             svtId,
                             limitCount,
                             0,
                             0LL);
  this->fields.svtLimitCount = limitCount;
  this->fields.commandCodeIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v55, v56, v57, v58, v59, v60);
  this->fields.fatigureTime = -1LL;
  this->fields.isFixMultipleNpc = 0;
  *(_WORD *)&this->fields.isServantNumRestriction = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  this->fields.isRestrictionServantPos = 0;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  if ( initPos )
    v62 = initPos;
  else
    v62 = index + 1;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._TimesToRestart_k__BackingField = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v62;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v61);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32183040(
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
  unsigned __int64 v56; // x1
  FollowerInfo_o *followerInfo; // x23
  int32_t v58; // w2
  int32_t v59; // w0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  FollowerInfo_o *v66; // x24
  struct QuestRestrictionInfo_o *v67; // x8
  int32_t followerIndex; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x22
  int32_t v70; // w2
  struct ServantEntity_o *v71; // x0
  struct ServantEntity_o **p_servantEntity; // x22
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct ServantEntity_o *v79; // x8
  ServantLimitMaster_o *v80; // x27
  __int64 v81; // x23
  __int64 v82; // x24
  FollowerInfo_o *v83; // x24
  struct QuestRestrictionInfo_o *v84; // x8
  int32_t v85; // w23
  int32_t v86; // w28
  int32_t v87; // w2
  FollowerInfo_o *v88; // x28
  FollowerInfo_o *v89; // x24
  struct QuestRestrictionInfo_o *v90; // x8
  int32_t v91; // w23
  int32_t v92; // w2
  FollowerInfo_o *v93; // x24
  struct QuestRestrictionInfo_o *v94; // x8
  int32_t v95; // w23
  int32_t v96; // w2
  FollowerInfo_o *v97; // x24
  struct QuestRestrictionInfo_o *v98; // x8
  int32_t v99; // w27
  int32_t v100; // w2
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  const MethodInfo *v108; // x1
  _BOOL4 v109; // w23
  const MethodInfo *v110; // x1
  QuestRestrictionInfo_o *v111; // x27
  __int64 v112; // x23
  __int64 v113; // x24
  int32_t v114; // w28
  const MethodInfo *v115; // x1
  int32_t v116; // w24
  int32_t DispLimitCount; // w23
  const MethodInfo *v118; // x1
  bool IsRestriction_31224308; // w0
  int v120; // w8
  int64_t v121; // x23
  unsigned int v122; // w28
  __int64 v123; // x25
  QuestRestrictionInfo_o *v124; // x24
  __int64 v125; // x26
  __int64 v126; // x27
  int32_t v127; // w26
  int32_t v128; // w27
  _BOOL4 IsNpcMulitipleOrOnly; // w8
  struct QuestRestrictionInfo_o *v130; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x23
  struct ServantEntity_o *v132; // x8
  UserEventDataLostEntity_o *v133; // x23
  __int64 v134; // x24
  __int64 v135; // x25
  struct ServantEntity_o *v136; // x9
  UserEventDataLostEntity_o *v137; // x22
  __int64 v138; // x23
  __int64 v139; // x24
  struct QuestRestrictionInfo_o *v140; // x8
  int32_t eventId; // w22
  EventServantPointRankMaster_o *v142; // x23
  const MethodInfo *v143; // x1
  const MethodInfo *v144; // x2
  const MethodInfo *v145; // x1
  int32_t v146; // w21
  __int64 v147; // x24
  __int64 v148; // x25
  int32_t v149; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v151; // x1
  const MethodInfo *v152; // x2
  QuestRestrictionInfo_o *v153; // x8
  bool IsNotClassBoard; // w20
  __int64 v155; // x0
  _BOOL4 v156; // [xsp+4h] [xbp-6Ch]
  FollowerInfo_o *v157; // [xsp+8h] [xbp-68h]
  QuestPhaseEntity_o *v158; // [xsp+10h] [xbp-60h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  v11 = isFixNpc;
  if ( (byte_418B6FB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v23);
    sub_B2C35C(&DataManager_TypeInfo, v24);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_B2C35C(&NetworkManager_TypeInfo, v26);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_418B6FB = 1;
  }
  v158 = 0LL;
  entity = 0LL;
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
    v58 = ReturnTypeByQuestId;
    if ( !followerInfo )
      goto LABEL_147;
  }
  else
  {
    v58 = 0;
    if ( !followerInfo )
      goto LABEL_147;
  }
  v156 = v11;
  v59 = FollowerInfo__getIndex(followerInfo, followerClassId, v58, followerDeckId, 0LL);
  this->fields.setupInfo = setupInfo;
  this->fields.followerIndex = v59;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v66 = this->fields.followerInfo;
  v67 = this->fields.questRestrictionInfo;
  followerIndex = this->fields.followerIndex;
  v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)ReturnTypeByQuestId;
  if ( v67 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v67->fields.questId, 0LL);
    v70 = ReturnTypeByQuestId;
    if ( !v66 )
      goto LABEL_147;
  }
  else
  {
    v70 = 0;
    if ( !v66 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getSvtId(v66, followerIndex, v70, 0LL);
  if ( !v69 )
    goto LABEL_147;
  v71 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v69,
                                    ReturnTypeByQuestId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v71;
  p_servantEntity = &this->fields.servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v71,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)ReturnTypeByQuestId,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v79 = *p_servantEntity;
  if ( !*p_servantEntity )
    goto LABEL_147;
  v157 = follower;
  v80 = (ServantLimitMaster_o *)ReturnTypeByQuestId;
  v82 = *(_QWORD *)&v79->fields.id.fields.currentCryptoKey;
  v81 = *(_QWORD *)&v79->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v160.fields.currentCryptoKey = v82;
  *(_QWORD *)&v160.fields.fakeValue = v81;
  ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v160, 0LL);
  v83 = this->fields.followerInfo;
  v84 = this->fields.questRestrictionInfo;
  v85 = this->fields.followerIndex;
  v86 = ReturnTypeByQuestId;
  if ( v84 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v84->fields.questId, 0LL);
    v87 = ReturnTypeByQuestId;
    if ( !v83 )
      goto LABEL_147;
  }
  else
  {
    v87 = 0;
    if ( !v83 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v83, v85, v87, 0LL);
  if ( !v80 )
    goto LABEL_147;
  ReturnTypeByQuestId = (int64_t)ServantLimitMaster__GetEntity(v80, v86, ReturnTypeByQuestId, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_147;
  v88 = v157;
  this->fields.classId = (*p_servantEntity)->fields.classId;
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  v89 = this->fields.followerInfo;
  v90 = this->fields.questRestrictionInfo;
  v91 = this->fields.followerIndex;
  this->fields.rarityId = *(_DWORD *)(ReturnTypeByQuestId + 24);
  if ( v90 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v90->fields.questId, 0LL);
    v92 = ReturnTypeByQuestId;
    if ( !v89 )
      goto LABEL_147;
  }
  else
  {
    v92 = 0;
    if ( !v89 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getFrameType(v89, v91, v92, 0LL);
  v93 = this->fields.followerInfo;
  v94 = this->fields.questRestrictionInfo;
  v95 = this->fields.followerIndex;
  this->fields.frameType = ReturnTypeByQuestId;
  if ( v94 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v94->fields.questId, 0LL);
    v96 = ReturnTypeByQuestId;
    if ( !v93 )
      goto LABEL_147;
  }
  else
  {
    v96 = 0;
    if ( !v93 )
      goto LABEL_147;
  }
  ReturnTypeByQuestId = FollowerInfo__getLimitCount(v93, v95, v96, 0LL);
  v97 = this->fields.followerInfo;
  v98 = this->fields.questRestrictionInfo;
  v99 = this->fields.followerIndex;
  this->fields.svtLimitCount = ReturnTypeByQuestId;
  if ( v98 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v98->fields.questId, 0LL);
    v100 = ReturnTypeByQuestId;
    if ( !v97 )
      goto LABEL_147;
  }
  else
  {
    v100 = 0;
    if ( !v97 )
      goto LABEL_147;
  }
  CommandCodeIdList = FollowerInfo__getCommandCodeIdList(v97, v99, v100, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v109 = v156;
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, v108) )
    goto LABEL_49;
  ReturnTypeByQuestId = (int64_t)*p_followerInfo;
  if ( !*p_followerInfo )
    goto LABEL_147;
  if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) && (v111 = *p_questRestrictionInfo) != 0LL )
  {
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v110);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v113 = *(_QWORD *)(ReturnTypeByQuestId + 48);
    v112 = *(_QWORD *)(ReturnTypeByQuestId + 56);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v161.fields.currentCryptoKey = v113;
    *(_QWORD *)&v161.fields.fakeValue = v112;
    v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v161, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v115);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v116 = *(_DWORD *)(ReturnTypeByQuestId + 64);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v56);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL);
    ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v118);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    IsRestriction_31224308 = QuestRestrictionInfo__IsRestriction_31224308(
                               v111,
                               &this->fields.isQuestRestrictionWhole,
                               v114,
                               v116,
                               DispLimitCount,
                               *(_DWORD *)(ReturnTypeByQuestId + 68),
                               this->fields._InitPos_k__BackingField,
                               0LL);
    v88 = v157;
    v109 = v156;
    this->fields.isQuestRestriction = IsRestriction_31224308;
  }
  else
  {
LABEL_49:
    *(_WORD *)&this->fields.isQuestRestriction = 0;
  }
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.isRestrictionServantPos = 0;
  if ( initPos )
    v56 = (unsigned int)initPos;
  else
    v56 = (unsigned int)(index + 1);
  *(_QWORD *)&this->fields.isUniqueSvtRestriction = 0LL;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v56;
  *(_DWORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo
    && (ReturnTypeByQuestId = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(questRestrictionInfo, v56, 0LL),
        (ReturnTypeByQuestId & 1) != 0) )
  {
    this->fields.isMyServantOrNpcRestriction = 1;
    if ( !v88 )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = v88->fields.npcFollowerSvtId;
    ReturnTypeByQuestId = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)ReturnTypeByQuestId,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    ReturnTypeByQuestId = (int64_t)UserServantMaster__getOrganizationList(
                                     (UserServantMaster_o *)ReturnTypeByQuestId,
                                     0LL);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v120 = *(_DWORD *)(ReturnTypeByQuestId + 24);
    v121 = ReturnTypeByQuestId;
    if ( v120 >= 1 )
    {
      v122 = 0;
      while ( 1 )
      {
        if ( v122 >= v120 )
        {
          v155 = sub_B2C460(ReturnTypeByQuestId);
          sub_B2C400(v155, 0LL);
        }
        v123 = *(_QWORD *)(v121 + 8LL * (int)v122 + 32);
        if ( !v123 )
          goto LABEL_147;
        v124 = *p_questRestrictionInfo;
        v126 = *(_QWORD *)(v123 + 80);
        v125 = *(_QWORD *)(v123 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v162.fields.currentCryptoKey = v126;
        *(_QWORD *)&v162.fields.fakeValue = v125;
        v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v162, 0LL);
        v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v123 + 96),
                 0LL);
        ReturnTypeByQuestId = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v123, 0, 0LL);
        if ( !v124 )
          goto LABEL_147;
        ReturnTypeByQuestId = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                v124,
                                v127,
                                v128,
                                ReturnTypeByQuestId,
                                this->fields._InitPos_k__BackingField,
                                0,
                                0LL);
        if ( (ReturnTypeByQuestId & 1) == 0 )
          break;
        v120 = *(_DWORD *)(v121 + 24);
        if ( (int)++v122 >= v120 )
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
    if ( !IsNpcMulitipleOrOnly || !v109 )
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
    if ( !v88 )
      goto LABEL_147;
    this->fields.npcFollowerSvtId = v88->fields.npcFollowerSvtId;
  }
LABEL_84:
  v130 = this->fields.questRestrictionInfo;
  this->fields._IsDataLost_k__BackingField = 0;
  this->fields._TimesToRestart_k__BackingField = 0;
  if ( v130 && v130->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v132 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v133 = entity;
      v135 = *(_QWORD *)&v132->fields.id.fields.currentCryptoKey;
      v134 = *(_QWORD *)&v132->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v163.fields.currentCryptoKey = v135;
      *(_QWORD *)&v163.fields.fakeValue = v134;
      ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v163, 0LL);
      if ( !v133 )
        goto LABEL_147;
      ReturnTypeByQuestId = UserEventDataLostEntity__IsRestart(v133, ReturnTypeByQuestId, 0LL);
      v136 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_147;
      v137 = entity;
      v139 = *(_QWORD *)&v136->fields.id.fields.currentCryptoKey;
      v138 = *(_QWORD *)&v136->fields.id.fields.fakeValue;
      if ( (ReturnTypeByQuestId & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v164.fields.currentCryptoKey = v139;
        *(_QWORD *)&v164.fields.fakeValue = v138;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v164, 0LL);
        if ( !v137 )
          goto LABEL_147;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(
                                                         v137,
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
        *(_QWORD *)&v165.fields.currentCryptoKey = v139;
        *(_QWORD *)&v165.fields.fakeValue = v138;
        ReturnTypeByQuestId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v165, 0LL);
        if ( !v137 )
          goto LABEL_147;
        if ( UserEventDataLostEntity__IsDataLost(v137, ReturnTypeByQuestId, 0LL) )
          this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  v140 = this->fields.questRestrictionInfo;
  this->fields.isFatigureRecover = 0;
  this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  this->fields.fatigureTime = -1LL;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._FriendshipUpVal_k__BackingField = 0;
  if ( v140 )
  {
    eventId = v140->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !ReturnTypeByQuestId )
      goto LABEL_147;
    v142 = (EventServantPointRankMaster_o *)ReturnTypeByQuestId;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)ReturnTypeByQuestId, eventId, 0LL) )
    {
      ReturnTypeByQuestId = (int64_t)*p_followerInfo;
      if ( !*p_followerInfo )
        goto LABEL_147;
      if ( !FollowerInfo__get_IsNpc((FollowerInfo_o *)ReturnTypeByQuestId, 0LL) )
      {
        this->fields._IsDispSvtPoint_k__BackingField = 1;
        if ( PartyOrganizationListViewItem__get_ServantLeader(this, v143) )
        {
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v145);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v146 = *(_DWORD *)(ReturnTypeByQuestId + 224);
          this->fields._SvtPoint_k__BackingField = v146;
          ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v56);
          if ( !ReturnTypeByQuestId )
            goto LABEL_147;
          v148 = *(_QWORD *)(ReturnTypeByQuestId + 48);
          v147 = *(_QWORD *)(ReturnTypeByQuestId + 56);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v166.fields.currentCryptoKey = v148;
          *(_QWORD *)&v166.fields.fakeValue = v147;
          v149 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v166, 0LL);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v142, eventId, v146, v149, 0LL);
          if ( EnableEntity )
            this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
        }
      }
      PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v144);
    }
  }
  if ( !PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v56) )
    goto LABEL_142;
  ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, v151);
  if ( !ReturnTypeByQuestId )
    goto LABEL_147;
  if ( ServantLeaderInfo__IsNpc((ServantLeaderInfo_o *)ReturnTypeByQuestId, 0LL) )
  {
    v153 = *p_questRestrictionInfo;
    if ( *p_questRestrictionInfo )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      ReturnTypeByQuestId = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
        ReturnTypeByQuestId = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)v56);
        if ( ReturnTypeByQuestId )
        {
          LOBYTE(v153) = IsNotClassBoard | ServantLeaderInfo__IsNotClassBoardNpc(
                                             (ServantLeaderInfo_o *)ReturnTypeByQuestId,
                                             0LL);
          goto LABEL_146;
        }
      }
LABEL_147:
      sub_B2C434(ReturnTypeByQuestId, v56);
    }
  }
  else
  {
LABEL_142:
    LOBYTE(v153) = 0;
  }
LABEL_146:
  this->fields._IsNotClassBoardNpc_k__BackingField = (char)v153;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v152);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32205676(
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userServantEntity; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
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
  int64_t Instance; // x0
  __int64 v69; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v71; // x26
  __int64 v72; // x27
  __int64 v73; // x28
  struct ServantEntity_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  ServantLimitMaster_o *v81; // x26
  int32_t v82; // w27
  struct ServantEntity_o *servantEntity; // x8
  int32_t v84; // w10
  int32_t v85; // w8
  struct UserServantEntity_o *v86; // x8
  __int64 v87; // x24
  __int64 v88; // x25
  UserServantEntity_o *v89; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  const MethodInfo *v97; // x2
  QuestRestrictionInfo_o *v98; // x24
  struct UserServantEntity_o *v99; // x8
  __int64 v100; // x25
  __int64 v101; // x26
  int32_t v102; // w25
  int32_t v103; // w26
  QuestRestrictionInfo_o *v104; // x24
  UserServantEntity_o *v105; // x8
  __int64 v106; // x25
  __int64 v107; // x26
  int32_t v108; // w0
  struct QuestRestrictionInfo_o *v109; // x8
  bool v110; // w9
  UserServantEntity_o *v111; // x9
  UserEventServantFatigueMaster_o *v112; // x25
  int32_t eventId; // w26
  __int64 v114; // x27
  __int64 v115; // x28
  int64_t v116; // x24
  struct QuestRestrictionInfo_o *v117; // x8
  int32_t allOutBattleGroupNo; // w24
  UserServantEntity_o *v119; // x8
  UserEventAlloutBattleMaster_o *v120; // x25
  __int64 v121; // x26
  __int64 v122; // x27
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x24
  UserServantEntity_o *v124; // x8
  UserEventDataLostEntity_o *v125; // x24
  __int64 v126; // x25
  __int64 v127; // x26
  UserServantEntity_o *v128; // x9
  UserEventDataLostEntity_o *v129; // x24
  __int64 v130; // x25
  __int64 v131; // x26
  int v132; // w8
  int64_t v133; // x23
  unsigned int v134; // w19
  __int64 v135; // x25
  QuestRestrictionInfo_o *v136; // x24
  __int64 v137; // x26
  __int64 v138; // x27
  int32_t v139; // w26
  int32_t v140; // w27
  int32_t v141; // w23
  EventServantPointRankMaster_o *v142; // x24
  UserServantEntity_o *v143; // x8
  __int128 v144; // q1
  UserEventServantPointMaster_o *v145; // x25
  int64_t v146; // x26
  int32_t SvtPoint_k__BackingField; // w25
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  const MethodInfo *v150; // x2
  System_Collections_Generic_List_EventCampaignEntity__o *FriendshipUpCampaigns; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v152; // x24
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v154; // x0
  __int64 v155; // x1
  EventCampaignEntity_o *current; // x24
  System_Int32_array *monitor; // x25
  UserServantEntity_o *v158; // x8
  __int64 v159; // x26
  __int64 v160; // x27
  int32_t v161; // w1
  __int64 v162; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v166; // [xsp+50h] [xbp-80h] BYREF
  UserEventServantPointEntity_o *v167; // [xsp+68h] [xbp-68h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+70h] [xbp-60h] BYREF
  int64_t recoverAt; // [xsp+78h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16

  if ( (byte_418B6FA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v24);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v25);
    sub_B2C35C(&DataManager_TypeInfo, v26);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v31);
    sub_B2C35C(&NetworkManager_TypeInfo, v32);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    byte_418B6FA = 1;
  }
  entity = 0LL;
  recoverAt = 0LL;
  v167 = 0LL;
  memset(&v166, 0, sizeof(v166));
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.friendPointCampaignEntityList = friendPointCampaignEntityList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)friendPointCampaignEntityList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.followerInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v56, v57, v58, v59, v60, v61);
  this->fields.setupInfo = setupInfo;
  *(_WORD *)&this->fields.isFollower = 0;
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_154;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v70 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_154;
  v71 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v73 = *(_QWORD *)&v70[5].fields.currentCryptoKey;
  v72 = *(_QWORD *)&v70[5].fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v170.fields.currentCryptoKey = v73;
  *(_QWORD *)&v170.fields.fakeValue = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v170, 0LL);
  if ( !v71 )
    goto LABEL_154;
  v74 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v71,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v74;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_154;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !*p_userServantEntity )
    goto LABEL_154;
  v81 = (ServantLimitMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userServantEntity)[5], 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_154;
  v82 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userServantEntity)[6], 0LL);
  if ( !v81 )
    goto LABEL_154;
  Instance = (int64_t)ServantLimitMaster__GetEntity(v81, v82, Instance, 0LL);
  servantEntity = this->fields.servantEntity;
  v84 = initPos ? initPos : index + 1;
  this->fields._InitPos_k__BackingField = v84;
  this->fields._NowPos_k__BackingField = index + 1;
  if ( !servantEntity )
    goto LABEL_154;
  this->fields.classId = servantEntity->fields.classId;
  if ( !Instance )
    goto LABEL_154;
  v85 = *(_DWORD *)(Instance + 24);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.rarityId = v85;
  if ( !Instance )
    goto LABEL_154;
  Instance = UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0LL);
  v86 = this->fields.userServantEntity;
  this->fields.frameType = Instance;
  if ( !v86 )
    goto LABEL_154;
  v88 = *(_QWORD *)&v86->fields.limitCount.fields.currentCryptoKey;
  v87 = *(_QWORD *)&v86->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v171.fields.currentCryptoKey = v88;
  *(_QWORD *)&v171.fields.fakeValue = v87;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v171, 0LL);
  v89 = this->fields.userServantEntity;
  this->fields.svtLimitCount = Instance;
  if ( !v89 )
    goto LABEL_154;
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v89, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v98 = this->fields.questRestrictionInfo;
  if ( v98 )
  {
    v99 = this->fields.userServantEntity;
    if ( !v99 )
      goto LABEL_154;
    v101 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
    v100 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v172.fields.currentCryptoKey = v101;
    *(_QWORD *)&v172.fields.fakeValue = v100;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v172, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v102 = Instance;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_userServantEntity)[6], 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v103 = Instance;
    Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)*p_userServantEntity, 0, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_154;
    Instance = QuestRestrictionInfo__IsRestriction_31224308(
                 v98,
                 &this->fields.isQuestRestrictionWhole,
                 v102,
                 v103,
                 Instance,
                 (*p_userServantEntity)[16].fields.currentCryptoKey,
                 this->fields._InitPos_k__BackingField,
                 0LL);
    v104 = this->fields.questRestrictionInfo;
    this->fields.isQuestRestriction = Instance & 1;
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
    if ( v104 )
    {
      v105 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_154;
      v107 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
      v106 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v173.fields.currentCryptoKey = v107;
      *(_QWORD *)&v173.fields.fakeValue = v106;
      v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v173, 0LL);
      Instance = QuestRestrictionInfo__IsConvertOverwriteImage(v104, v108, 0LL);
      v109 = *p_questRestrictionInfo;
      v110 = Instance & 1;
    }
    else
    {
      v109 = 0LL;
      v110 = 0;
    }
  }
  else
  {
    v109 = 0LL;
    v110 = 0;
    *(_WORD *)&this->fields.isQuestRestriction = 0;
    this->fields.isFixedServantPositionAgreement = 0;
    *(_DWORD *)&this->fields.isUniqueSvtRestriction = 0;
  }
  this->fields.isFatigureRecover = 0;
  this->fields.isConvertOverwriteImage = v110;
  *(_WORD *)&this->fields.isServantNumRestriction = 0;
  this->fields.isFixMultipleNpc = 0;
  this->fields.npcFollowerSvtId = 0LL;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  *(_QWORD *)&this->fields._TimesToRestart_k__BackingField = 0LL;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  if ( !v109 )
    goto LABEL_153;
  if ( v109->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_154;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_154;
    v111 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v112 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v115 = *(_QWORD *)&v111->fields.svtId.fields.currentCryptoKey;
    v114 = *(_QWORD *)&v111->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v174.fields.currentCryptoKey = v115;
    *(_QWORD *)&v174.fields.fakeValue = v114;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v174, 0LL);
    if ( !v112 )
      goto LABEL_154;
    Instance = UserEventServantFatigueMaster__GetFatigueInfo(
                 v112,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v116 = recoverAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__getTime(0LL);
      if ( v116 > Instance )
        this->fields.fatigureTime = recoverAt;
    }
  }
  v117 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo )
    goto LABEL_154;
  if ( v117->fields.isAllOutBattle )
  {
    allOutBattleGroupNo = v117->fields.allOutBattleGroupNo;
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_154;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    v119 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_154;
    v120 = (UserEventAlloutBattleMaster_o *)Instance;
    v122 = *(_QWORD *)&v119->fields.svtId.fields.currentCryptoKey;
    v121 = *(_QWORD *)&v119->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v175.fields.currentCryptoKey = v122;
    *(_QWORD *)&v175.fields.fakeValue = v121;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v175, 0LL);
    if ( !*p_questRestrictionInfo || !v120 )
      goto LABEL_154;
    Instance = UserEventAlloutBattleMaster__IsAlreadyUsedServant(
                 v120,
                 Instance,
                 (*p_questRestrictionInfo)->fields.eventId,
                 allOutBattleGroupNo,
                 0LL);
    if ( (Instance & 1) != 0 )
      this->fields._IsAllOutBattle_k__BackingField = 1;
  }
  if ( !*p_questRestrictionInfo )
    goto LABEL_154;
  if ( (*p_questRestrictionInfo)->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_154;
    Instance = UserEventDataLostMaster__TryGetEntity(
                 (UserEventDataLostMaster_o *)Master_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 (*p_questRestrictionInfo)->fields.dataLostBattleId,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v124 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_154;
      v125 = entity;
      v127 = *(_QWORD *)&v124->fields.svtId.fields.currentCryptoKey;
      v126 = *(_QWORD *)&v124->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v176.fields.currentCryptoKey = v127;
      *(_QWORD *)&v176.fields.fakeValue = v126;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v176, 0LL);
      if ( !v125 )
        goto LABEL_154;
      Instance = UserEventDataLostEntity__IsRestart(v125, Instance, 0LL);
      v128 = (UserServantEntity_o *)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_154;
      v129 = entity;
      v131 = *(_QWORD *)&v128->fields.svtId.fields.currentCryptoKey;
      v130 = *(_QWORD *)&v128->fields.svtId.fields.fakeValue;
      if ( (Instance & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v177.fields.currentCryptoKey = v131;
        *(_QWORD *)&v177.fields.fakeValue = v130;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v177, 0LL);
        if ( !v129 )
          goto LABEL_154;
        Instance = UserEventDataLostEntity__GetTimesToRestart(v129, Instance, 0LL);
        this->fields._TimesToRestart_k__BackingField = Instance;
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v178.fields.currentCryptoKey = v131;
        *(_QWORD *)&v178.fields.fakeValue = v130;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v178, 0LL);
        if ( !v129 )
          goto LABEL_154;
        Instance = UserEventDataLostEntity__IsDataLost(v129, Instance, 0LL);
        if ( (Instance & 1) != 0 )
          this->fields._IsDataLost_k__BackingField = 1;
      }
    }
  }
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( questRestrictionInfo )
  {
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                 questRestrictionInfo,
                 this->fields._InitPos_k__BackingField,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      this->fields.isMyServantOrNpcRestriction = 1;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_154;
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_154;
      Instance = (int64_t)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_154;
      v132 = *(_DWORD *)(Instance + 24);
      v133 = Instance;
      if ( v132 >= 1 )
      {
        v134 = 0;
        while ( 1 )
        {
          if ( v134 >= v132 )
          {
            v162 = sub_B2C460(Instance);
            sub_B2C400(v162, 0LL);
          }
          v135 = *(_QWORD *)(v133 + 8LL * (int)v134 + 32);
          if ( !v135 )
            goto LABEL_154;
          v136 = *p_questRestrictionInfo;
          v138 = *(_QWORD *)(v135 + 80);
          v137 = *(_QWORD *)(v135 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v179.fields.currentCryptoKey = v138;
          *(_QWORD *)&v179.fields.fakeValue = v137;
          v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v179, 0LL);
          v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                   *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v135 + 96),
                   0LL);
          Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)v135, 0, 0LL);
          if ( !v136 )
            goto LABEL_154;
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
            goto LABEL_112;
        }
        this->fields.haveIndividualityServant = 1;
      }
    }
  }
LABEL_112:
  if ( !*p_questRestrictionInfo )
    goto LABEL_154;
  v141 = (*p_questRestrictionInfo)->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
    goto LABEL_154;
  v142 = (EventServantPointRankMaster_o *)Instance;
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v141, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v143 = (UserServantEntity_o *)*p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v144 = *(_OWORD *)&v143->fields.userId.fields.fakeValue;
      v145 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v165.fields.currentCryptoKey = *(_OWORD *)&v143->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v165.fields.fakeValue = v144;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v164 = v165;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v164, 0LL);
      if ( *p_userServantEntity )
      {
        v146 = Instance;
        Instance = UserServantEntity__getSvtId((UserServantEntity_o *)*p_userServantEntity, 0LL);
        if ( v145 )
        {
          if ( UserEventServantPointMaster__TryGetEntity(v145, &v167, v146, v141, Instance, 0LL) )
          {
            Instance = (int64_t)v167;
            if ( !v167 )
              goto LABEL_154;
            this->fields._SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v167, 0LL);
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
            goto LABEL_134;
          }
        }
      }
    }
LABEL_154:
    sub_B2C434(Instance, v69);
  }
LABEL_134:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_154;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_154;
  FriendshipUpCampaigns = EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( !FriendshipUpCampaigns )
    goto LABEL_153;
  v152 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)FriendshipUpCampaigns;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_154;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v165,
    v152,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v166 = *(System_Collections_Generic_List_Enumerator_T__o *)&v165.fields.currentCryptoKey;
  while ( 1 )
  {
    v154 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v166,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( (v154 & 1) == 0 )
      break;
    current = (EventCampaignEntity_o *)v166.fields.current;
    if ( !v166.fields.current )
      sub_B2C434(v154, v155);
    monitor = (System_Int32_array *)v166.fields.current[2].monitor;
    if ( !monitor || !monitor->max_length )
      goto LABEL_150;
    v158 = (UserServantEntity_o *)*p_userServantEntity;
    if ( !*p_userServantEntity )
      sub_B2C434(v154, v155);
    v160 = *(_QWORD *)&v158->fields.svtId.fields.currentCryptoKey;
    v159 = *(_QWORD *)&v158->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v180.fields.currentCryptoKey = v160;
    *(_QWORD *)&v180.fields.fakeValue = v159;
    v161 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v180, 0LL);
    v154 = System_Array__IndexOf_int_(monitor, v161, (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
    if ( (v154 & 0x80000000) == 0 )
    {
LABEL_150:
      if ( !*p_questRestrictionInfo )
        sub_B2C434(v154, v155);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(v154, v155);
      if ( EventQuestMaster__IsExistQuest(
             MasterData_WarQuestSelectionMaster,
             current->fields.eventId,
             (*p_questRestrictionInfo)->fields.questId,
             (*p_questRestrictionInfo)->fields.questPhase,
             0LL) )
      {
        this->fields._FriendshipUpVal_k__BackingField = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
        break;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v166,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
LABEL_153:
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v97);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewItem___ctor_32212232(
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
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int v57; // w1
  int v58; // w8
  void *v59; // x22
  unsigned int v60; // w27
  __int64 v61; // x24
  QuestRestrictionInfo_o *v62; // x23
  __int64 v63; // x25
  __int64 v64; // x26
  int32_t v65; // w25
  int32_t v66; // w26
  const MethodInfo *v67; // x2
  struct QuestRestrictionInfo_o *v68; // x8
  int32_t eventId; // w21
  __int64 v70; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_418B6FC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418B6FC = 1;
  }
  this->fields.nameLimitCount = -1;
  this->fields.warBoardPieceIndex = -1;
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.userServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.followerInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.servantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v43, v44, v45, v46, v47, v48);
  *(_QWORD *)&this->fields.classId = 0LL;
  if ( !this )
    goto LABEL_42;
  if ( initPos )
    v57 = initPos;
  else
    v57 = index + 1;
  this->fields._NowPos_k__BackingField = index + 1;
  this->fields._InitPos_k__BackingField = v57;
  *(_WORD *)&this->fields.isMyServantOrNpcRestriction = 0;
  if ( !questRestrictionInfo )
  {
LABEL_32:
    this->fields.frameType = 9;
    *(_WORD *)&this->fields.isServantNumRestriction = 0;
    goto LABEL_33;
  }
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(questRestrictionInfo, v57, 0LL) )
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  v58 = *((_DWORD *)Instance + 6);
  v59 = Instance;
  if ( v58 >= 1 )
  {
    v60 = 0;
    while ( 1 )
    {
      if ( v60 >= v58 )
      {
        v70 = sub_B2C460(Instance);
        sub_B2C400(v70, 0LL);
      }
      v61 = *((_QWORD *)v59 + (int)v60 + 4);
      if ( !v61 )
        goto LABEL_42;
      v62 = this->fields.questRestrictionInfo;
      v64 = *(_QWORD *)(v61 + 80);
      v63 = *(_QWORD *)(v61 + 88);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v71.fields.currentCryptoKey = v64;
      *(_QWORD *)&v71.fields.fakeValue = v63;
      v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v61 + 96),
              0LL);
      Instance = (void *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)v61, 0, 0LL);
      if ( !v62 )
        goto LABEL_42;
      Instance = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           v62,
                           v65,
                           v66,
                           (int32_t)Instance,
                           this->fields._InitPos_k__BackingField,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      v58 = *((_DWORD *)v59 + 6);
      if ( (int)++v60 >= v58 )
        goto LABEL_33;
    }
    this->fields.haveIndividualityServant = 1;
  }
LABEL_33:
  this->fields.commandCodeIdList = 0LL;
  this->fields.isFixMultipleNpc = 0;
  this->fields.svtLimitCount = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v51, v52, v53, v54, v55, v56);
  v68 = this->fields.questRestrictionInfo;
  *(_WORD *)&this->fields.isRestrictionMyServantPos = 0;
  this->fields.isRestrictionServantPos = 0;
  *(_QWORD *)&this->fields.isQuestRestriction = 0LL;
  this->fields.isFatigureRecover = 0;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields.fatigureTime = -1LL;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._TimesToRestart_k__BackingField = 0LL;
  if ( !v68 )
    goto LABEL_40;
  eventId = v68->fields.eventId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
LABEL_42:
    sub_B2C434(Instance, v50);
  if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, eventId, 0LL) )
  {
    this->fields._IsDispSvtPoint_k__BackingField = !isFollower;
    PartyOrganizationListViewItem__SetCanGetBuddyPoint(this, eventId, v67);
  }
LABEL_40:
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v67);
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
  QuestRestrictionInfo_o *v23; // x22
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x26
  __int64 v25; // x23
  __int64 v26; // x24
  int32_t v27; // w23
  const MethodInfo *v28; // x1
  int32_t v29; // w24
  int32_t DispLimitCount; // w25
  const MethodInfo *v31; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x22
  __int64 v33; // x23
  __int64 v34; // x24
  int32_t v35; // w23
  const MethodInfo *v36; // x1
  int32_t v37; // w24
  UserServantEntity_o *v38; // x8
  bool IsUniqueIndividualityRestriction_21657940; // w0
  const MethodInfo *v40; // x1
  QuestRestrictionInfo_o *v41; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // kr00_16
  int32_t v43; // w0
  int32_t v44; // w27
  int32_t v45; // w28
  const MethodInfo *v46; // x1
  int32_t dispLimit; // w0
  FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *v49; // x22
  int32_t followerIndex; // w24
  int32_t v51; // w5
  FollowerInfo_o *v52; // x23
  struct QuestRestrictionInfo_o *v53; // x22
  int32_t v54; // w24
  int32_t v55; // w5
  bool IsUniqueIndividualityRestriction_23154352; // w0
  const MethodInfo *v57; // x1
  QuestRestrictionInfo_o *v58; // x22
  ServantLeaderInfo_o *v59; // x0
  bool IsFixedSupportPosition_31228864; // w0
  QuestRestrictionInfo_o *v61; // x8
  QuestRestrictionInfo_o *v62; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v64; // w0
  int32_t svtLimitCount; // w22
  int32_t v66; // w23
  const MethodInfo *v67; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_418B704 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyItem);
    byte_418B704 = 1;
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
      && (p_questRestrictionInfo = &this->fields.questRestrictionInfo, (v23 = this->fields.questRestrictionInfo) != 0LL) )
    {
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !ServantLeader )
        goto LABEL_78;
      v26 = *((_QWORD *)ServantLeader + 6);
      v25 = *((_QWORD *)ServantLeader + 7);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v70.fields.currentCryptoKey = v26;
      *(_QWORD *)&v70.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v28);
      if ( !ServantLeader )
        goto LABEL_78;
      v29 = *((_DWORD *)ServantLeader + 16);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
      if ( !ServantLeader )
        goto LABEL_78;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v31);
      if ( !ServantLeader )
        goto LABEL_78;
      ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_31224308(
                                v23,
                                &this->fields.isQuestRestrictionWhole,
                                v27,
                                v29,
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
        ServantLeader = (void *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_31241252(
                                  (QuestRestrictionInfo_o *)ServantLeader,
                                  this->fields._InitPos_k__BackingField,
                                  0LL);
        if ( ((unsigned __int8)ServantLeader & 1) != 0 )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !ServantLeader )
            goto LABEL_78;
          v34 = *((_QWORD *)ServantLeader + 6);
          v33 = *((_QWORD *)ServantLeader + 7);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v71.fields.currentCryptoKey = v34;
          *(_QWORD *)&v71.fields.fakeValue = v33;
          v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, v36);
          if ( !ServantLeader )
            goto LABEL_78;
          v37 = *((_DWORD *)ServantLeader + 16);
          ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(this, (const MethodInfo *)partyItem);
          if ( !ServantLeader )
            goto LABEL_78;
          ServantLeader = (void *)ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)ServantLeader, 0LL);
          if ( !questRestrictionInfo )
            goto LABEL_78;
          ServantLeader = (void *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                    questRestrictionInfo,
                                    v35,
                                    v37,
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
    v49 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    if ( v49 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v49->fields.questId, 0LL);
      v51 = (int)ServantLeader;
      if ( !followerInfo )
        goto LABEL_78;
    }
    else
    {
      v51 = 0;
      if ( !followerInfo )
        goto LABEL_78;
    }
    ServantLeader = (void *)FollowerInfo__getUniqueSvtRestriction_23154176(
                              followerInfo,
                              v49,
                              followerIndex,
                              partyItem,
                              num,
                              v51,
                              0LL);
    v52 = this->fields.followerInfo;
    v53 = this->fields.questRestrictionInfo;
    v54 = this->fields.followerIndex;
    this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
    if ( v53 )
    {
      ServantLeader = (void *)FollowerInfo__GetReturnTypeByQuestId(v53->fields.questId, 0LL);
      v55 = (int)ServantLeader;
      if ( !v52 )
        goto LABEL_78;
    }
    else
    {
      v55 = 0;
      if ( !v52 )
        goto LABEL_78;
    }
    IsUniqueIndividualityRestriction_23154352 = FollowerInfo__IsUniqueIndividualityRestriction_23154352(
                                                  v52,
                                                  v53,
                                                  v54,
                                                  partyItem,
                                                  num,
                                                  v55,
                                                  0LL);
    v58 = this->fields.questRestrictionInfo;
    this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_23154352;
    if ( v58 )
    {
      v59 = PartyOrganizationListViewItem__get_ServantLeader(this, v57);
      IsFixedSupportPosition_31228864 = QuestRestrictionInfo__IsFixedSupportPosition_31228864(v58, num, v59, 0LL);
      v61 = this->fields.questRestrictionInfo;
      this->fields.isFixedSupportPositionRestriction = IsFixedSupportPosition_31228864;
      if ( v61 )
      {
        ServantLeader = (void *)QuestRestrictionInfo__IsUseOldMaster(v61, 0LL);
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
          v62 = this->fields.questRestrictionInfo;
          SvtId = PartyOrganizationListViewItem__get_SvtId(this, (const MethodInfo *)partyItem);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
          svtLimitCount = this->fields.svtLimitCount;
          v66 = v64;
          ServantLeader = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(this, v67);
          if ( v62 )
          {
            QuestRestrictionInfo__CheckFixedServantPosition(
              v62,
              &this->fields.isFixedServantPositionRestriction,
              &this->fields.isFixedServantPositionAgreement,
              &this->fields.isRestrictionMyServantPos,
              &this->fields.isRestrictionNeedStarting,
              &this->fields.isRestrictionServantPos,
              v66,
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
  *(_QWORD *)&v68.fields.currentCryptoKey = v10;
  *(_QWORD *)&v68.fields.fakeValue = v9;
  ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v68, 0LL);
  v12 = this->fields.userServantEntity;
  if ( !v12
    || (v13 = (int)ServantLeader,
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                  v12->fields.limitCount,
                                  0LL),
        !this->fields.userServantEntity)
    || (v14 = (int)ServantLeader,
        ServantLeader = (void *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL),
        (v15 = this->fields.userServantEntity) == 0LL) )
  {
LABEL_78:
    sub_B2C434(ServantLeader, partyItem);
  }
  ServantLeader = (void *)QuestRestrictionInfo__IsRestriction_31224308(
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
      *(_QWORD *)&v69.fields.currentCryptoKey = v19;
      *(_QWORD *)&v69.fields.fakeValue = v18;
      ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v69, 0LL);
      v20 = this->fields.userServantEntity;
      if ( v20 )
      {
        v21 = (int)ServantLeader;
        ServantLeader = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
  ServantLeader = (void *)UserServantEntity__getUniqueSvtRestriction_21657540(
                            (UserServantEntity_o *)ServantLeader,
                            this->fields.questRestrictionInfo,
                            partyItem,
                            num,
                            -1,
                            0LL);
  v38 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = (unsigned __int8)ServantLeader & 1;
  if ( !v38 )
    goto LABEL_78;
  IsUniqueIndividualityRestriction_21657940 = UserServantEntity__IsUniqueIndividualityRestriction_21657940(
                                                v38,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                -1,
                                                0LL);
  v41 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21657940;
  if ( v41 )
  {
    v42 = PartyOrganizationListViewItem__get_SvtId(this, v40);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
    v44 = this->fields.svtLimitCount;
    v45 = v43;
    dispLimit = PartyOrganizationListViewItem__GetDispImageLimitCount(this, v46);
    QuestRestrictionInfo__CheckFixedServantPosition(
      v41,
      &this->fields.isFixedServantPositionRestriction,
      &this->fields.isFixedServantPositionAgreement,
      &this->fields.isRestrictionMyServantPos,
      &this->fields.isRestrictionNeedStarting,
      &this->fields.isRestrictionServantPos,
      v45,
      v44,
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_418B6FE & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&idx);
    byte_418B6FE = 1;
  }
  index = idx;
  if ( (idx & 0x80000000) != 0 )
    index = this->fields.index;
  v6 = sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
  *(_DWORD *)(v6 + 296) = -1;
  *(_DWORD *)(v6 + 344) = -1;
  ListViewItem___ctor_24128628((ListViewItem_o *)v6, index, 0LL);
  if ( !v6 )
    sub_B2C434(v7, v8);
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
  if ( (byte_418B705 & 1) == 0 )
  {
    this = (PartyOrganizationListViewItem_o *)sub_B2C35C(&BalanceConfig_TypeInfo, item);
    byte_418B705 = 1;
  }
  if ( !item )
LABEL_28:
    sub_B2C434(this, item);
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
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
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
  const MethodInfo *v33; // x2

  this->fields.userServantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.userServantEntity, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.followerInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)&this->fields.followerClassId = 0LL;
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.servantEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantEntity, 0LL, v21, v22, v23, v24, v25, v26);
  *(_OWORD *)&this->fields.classId = xmmword_31B43A0;
  this->fields.commandCodeIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.commandCodeIdList, 0LL, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)&this->fields.isQuestRestriction = 0;
  this->fields.isFatigureRecover = 0;
  this->fields.fatigureTime = -1LL;
  *(_WORD *)&this->fields._IsAllOutBattle_k__BackingField = 0;
  *(_QWORD *)&this->fields._SvtPoint_k__BackingField = 0LL;
  this->fields._IsNotClassBoardNpc_k__BackingField = 0;
  this->fields._IsNotSupportSingle_k__BackingField = 0;
  *(_QWORD *)&this->fields._TimesToRestart_k__BackingField = 0LL;
  PartyOrganizationListViewItem__SetEquipStatus(this, 0LL, v33);
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

  if ( (byte_418B714 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&UINarrowFigureRender_TypeInfo, v3);
    byte_418B714 = 1;
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
        goto LABEL_22;
    }
    else
    {
      v20 = 0;
      if ( !v17 )
        goto LABEL_22;
    }
    CardImageLimitCount = FollowerInfo__getCardImageLimitCount(v17, v19, v20, 0LL);
    goto LABEL_17;
  }
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v6;
  *(_QWORD *)&v22.fields.fakeValue = v5;
  SvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
  v9 = this->fields.userServantEntity;
  if ( !v9 )
LABEL_22:
    sub_B2C434(SvtId, v8);
  v10 = SvtId;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v9, 0, 0LL);
LABEL_17:
  v21 = CardImageLimitCount;
  if ( (BYTE3(UINarrowFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UINarrowFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo);
  }
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

  if ( (byte_418B716 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B716 = 1;
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
        || (result = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(
                       questRestrictionInfo,
                       this->fields.userServantEntity,
                       0LL),
            (result & 0x80000000) != 0) )
      {
        userServantEntity = this->fields.userServantEntity;
        if ( userServantEntity )
          return UserServantEntity__getCardImageLimitCount(userServantEntity, 0, 0LL);
LABEL_22:
        sub_B2C434(userServantEntity, v3);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B2C434(v5, 0LL);
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

  if ( (byte_418B713 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_418B713 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( servantEntity && servantEntity->fields.cardIds )
  {
    result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 3LL);
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
            v11 = sub_B2C460(result);
            sub_B2C400(v11, 0LL);
          }
          ++result->m_Items[v10 + 1];
          v6 = this->fields.servantEntity;
        }
        ++v7;
      }
      while ( v6 );
    }
    sub_B2C434(result, v5);
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

  if ( (byte_418B715 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B715 = 1;
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
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B2C434(v5, 0LL);
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

  if ( (byte_418B706 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&long___TypeInfo, v3);
    byte_418B706 = 1;
  }
  equipIdList = (System_Array_o *)this->fields.equipIdList;
  if ( equipIdList )
  {
    result = (System_Int64_array *)System_Array__Clone(equipIdList, 0LL);
    if ( !result )
      return result;
    v6 = result;
    result = (System_Int64_array *)sub_B2C41C(result, long___TypeInfo);
    if ( result )
      return result;
    sub_B2C728(v6);
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
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
  sub_B2C2F8(
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

  if ( (byte_418B712 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B712 = 1;
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

  if ( (byte_418B711 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B711 = 1;
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
      v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userServantEntity, 0LL);
      if ( (v5 & 0x80000000) == 0 )
        return v5;
      userServantEntity = this->fields.userServantEntity;
      if ( !userServantEntity )
        sub_B2C434(v5, 0LL);
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

  if ( (byte_418B718 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B718 = 1;
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

  if ( (byte_418B719 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B719 = 1;
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
    v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userServantEntity, 0LL);
    if ( (v5 & 0x80000000) == 0 )
      return v5;
    userServantEntity = this->fields.userServantEntity;
    if ( !userServantEntity )
      sub_B2C434(v5, 0LL);
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

  if ( (byte_418B70E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_10362/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418B70E = 1;
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
    sub_B2C434(v6, method);
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
    v6 = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10362/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_33;
    v9 = (System_String_o *)v6;
    ConfirmRestrictionMessage = QuestRestrictionInfo__GetConfirmRestrictionMessage(
                                  this->fields.questRestrictionInfo,
                                  this->fields._InitPos_k__BackingField,
                                  this->fields.index + 1,
                                  1,
                                  0LL);
    return System_String__Concat_44305532(v9, ConfirmRestrictionMessage, 0LL);
  }
  else
  {
    v6 = this->fields.questRestrictionInfo;
    if ( this->fields.isQuestRestrictionWhole )
    {
      method = 0LL;
      if ( !v6 )
        goto LABEL_33;
    }
    else
    {
      method = (const MethodInfo *)(unsigned int)this->fields._InitPos_k__BackingField;
      if ( !v6 )
        goto LABEL_33;
    }
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

  if ( (byte_418B710 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, isFixMessage);
    sub_B2C35C(&StringLiteral_27/*"\n\n"*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    sub_B2C35C(&StringLiteral_10396/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, v7);
    byte_418B710 = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10396/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_MY_SERVANT_OR_NPC"*/, 0LL);
  return System_String__Concat_44307816(
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

  if ( (byte_418B70F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B70F = 1;
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
    sub_B2C434(0LL, v4);
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
      LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(
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
  v5 = QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31238264(questRestrictionInfo, userServantEntity, 0LL);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v7 = v5;
  v8 = this->fields.userServantEntity;
  if ( !v8 )
    sub_B2C434(0LL, v6);
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
  int64_t v8; // x21
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *Entity; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  PartyOrganizationListViewItem_o *v18; // x0
  const MethodInfo *v19; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-40h]

  if ( (byte_418B702 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418B702 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v7;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v20 = v21;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v10);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               v8,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this->fields.userServantEntity = Entity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.userServantEntity,
      (System_Int32_array **)Entity,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    PartyOrganizationListViewItem__UpdateStartingMemberFriendshipUp(v18, this, v19);
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
    sub_B2C434(this, 0LL);
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewItem__Modify_32214720(this, item, v11);
}


void __fastcall PartyOrganizationListViewItem__Modify_32214720(
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
  _BOOL4 isMyServantOrNpcRestriction; // w9
  int32_t TimesToRestart_k__BackingField; // w8
  int32_t FriendshipUpVal_k__BackingField; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  v9 = this;
  if ( (byte_418B703 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    this = (PartyOrganizationListViewItem_o *)sub_B2C35C(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v12);
    byte_418B703 = 1;
  }
  if ( !item )
    goto LABEL_23;
  userServantEntity = (System_Int32_array **)item->fields.userServantEntity;
  v9->fields.userServantEntity = (struct UserServantEntity_o *)userServantEntity;
  p_userServantEntity = &v9->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.userServantEntity,
    userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this = (PartyOrganizationListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
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
  *(_QWORD *)&v50.fields.currentCryptoKey = v18;
  *(_QWORD *)&v50.fields.fakeValue = v17;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v50,
                                              0LL);
  if ( !v16 )
    goto LABEL_23;
  Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v16,
                                    (int32_t)this,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v9->fields.servantEntity = (struct ServantEntity_o *)Entity;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.servantEntity, Entity, v20, v21, v22, v23, v24, v25);
  v9->fields.classId = item->fields.classId;
  v9->fields.rarityId = item->fields.rarityId;
  v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v9->fields.userServantEntity;
  v9->fields.frameType = item->fields.frameType;
  if ( !v26 )
    goto LABEL_23;
  this = (PartyOrganizationListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                              v26[6],
                                              0LL);
  v27 = v9->fields.userServantEntity;
  v9->fields.svtLimitCount = (int)this;
  if ( !v27 )
    goto LABEL_23;
  CommandCodeIdList = (System_Int32_array **)UserServantEntity__getCommandCodeIdList(v27, 0LL);
  v9->fields.commandCodeIdList = (struct System_Int32_array *)CommandCodeIdList;
  sub_B2C2F8(
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
    sub_B2C434(this, item);
  v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
  v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v44;
  *(_QWORD *)&v51.fields.fakeValue = v43;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51, 0LL);
  IsConvertOverwriteImage = QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v45, 0LL);
LABEL_19:
  v9->fields.isConvertOverwriteImage = IsConvertOverwriteImage;
  isMyServantOrNpcRestriction = v9->fields.isMyServantOrNpcRestriction;
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
  FriendshipUpVal_k__BackingField = item->fields._FriendshipUpVal_k__BackingField;
  v9->fields._IsNotClassBoardNpc_k__BackingField = 0;
  v9->fields._FriendshipUpVal_k__BackingField = FriendshipUpVal_k__BackingField;
  if ( isMyServantOrNpcRestriction && v9->fields.isFollower )
  {
    v9->fields.followerInfo = 0LL;
    v9->fields.isFollower = 0;
    sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.followerInfo, 0LL, v35, v36, v37, v38, v39, v40);
  }
  PartyOrganizationListViewItem__SetEquipStatus(v9, v9->fields.equipIdList, (const MethodInfo *)v35);
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
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
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
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x2

  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    sub_B2C434(v5, v6);
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  this->fields._FriendshipUpVal_k__BackingField = item->fields._FriendshipUpVal_k__BackingField;
  this->fields._InitPos_k__BackingField = item->fields._InitPos_k__BackingField;
  this->fields._NowPos_k__BackingField = item->fields._NowPos_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  WaveEnemyClassIds_k__BackingField = item->fields._WaveEnemyClassIds_k__BackingField;
  this->fields._WaveEnemyClassIds_k__BackingField = WaveEnemyClassIds_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)WaveEnemyClassIds_k__BackingField,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, v63);
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
  if ( (byte_418B700 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventBuddyPointMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    this = (PartyOrganizationListViewItem_o *)sub_B2C35C(&NetworkManager_TypeInfo, v8);
    byte_418B700 = 1;
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
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
  this = (PartyOrganizationListViewItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !this )
    goto LABEL_34;
  this = (PartyOrganizationListViewItem_o *)QuestMaster__getQuestEntity((QuestMaster_o *)this, questId, 0LL);
  if ( !this )
    goto LABEL_34;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)this, 0x20000LL, 0LL);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (PartyOrganizationListViewItem_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_34:
    sub_B2C434(this, *(_QWORD *)&eventId);
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
  FollowerInfo_o *p_equipUserServantEntity; // x23
  BattleServantConfConponent_o *p_equipServantEntity; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EventUpValInfo_o **p_eventUpValInfo; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BattleServantConfConponent_o *p_eventUpValItemList; // x27
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  DataManager_o *Instance; // x0
  const MethodInfo *v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct QuestRestrictionInfo_o *v62; // x8
  Il2CppObject *v63; // x24
  int32_t ReturnTypeByQuestId; // w2
  struct System_Int64_array **v65; // x25
  Il2CppObject *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Int64_array *v73; // x1
  FollowerInfo_o *followerInfo; // x24
  struct QuestRestrictionInfo_o *v75; // x8
  int32_t followerIndex; // w25
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x23
  int32_t v78; // w2
  struct System_Int64_array **p_equipIdList; // x0
  System_Int32_array **v80; // x1
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct EventUpValSetupInfo_o *v88; // x22
  struct System_Int32_array *v89; // x8
  FollowerInfo_o *v90; // x24
  struct QuestRestrictionInfo_o *v91; // x8
  int32_t v92; // w23
  int32_t v93; // w4
  BalanceConfig_c *v94; // x0
  struct EventUpValSetupInfo_o *v95; // x8
  struct System_Int32_array *v96; // x8
  int32_t v97; // w22
  ServantEntity_o *v98; // x23
  EventPersonalMargeUpValInfo_o *v99; // x21
  struct System_Int64_array *v100; // x8
  FollowerInfo_c *klass; // x8
  Il2CppClass *parent; // x24
  Il2CppClass *declaringType; // x25
  FollowerInfo_c *v104; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v105; // x23
  Il2CppClass *v106; // x24
  Il2CppClass *v107; // x25
  System_Int32_array **Entity; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct System_Int64_array *v115; // x8
  struct EventUpValSetupInfo_o **p_setupInfo; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x23
  struct System_Int32_array *eventIdList; // x8
  UserServantEntity_o *userServantEntity; // x24
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct System_Int32_array *v121; // x8
  int32_t v122; // w24
  ServantEntity_o *servantEntity; // x25
  EventPersonalMargeUpValInfo_o *v124; // x23
  System_Int32_array **List; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v133; // x23
  struct System_Int32_array *v134; // x28
  __int64 v135; // x8
  unsigned __int64 v136; // x20
  int32_t v137; // w26
  EventDetailEntity_o *v138; // x0
  ServantEntity_o *v139; // x27
  EventPersonalMargeUpValInfo_o *v140; // x25
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v142; // x25
  unsigned __int64 v143; // x26
  System_Int32_array **v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array *v151; // x23
  EventUpValSetupInfo_o *v152; // x24
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  UserServantEntity_o *v159; // x22
  EventUpValSetupInfo_o *v160; // x23
  struct QuestRestrictionInfo_o *v161; // x8
  _BOOL8 v162; // x0
  __int64 v163; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *dropList; // x0
  __int64 v165; // x0
  UserServantEntity_o *v166; // x23
  EventUpValSetupInfo_o *v167; // x22
  struct QuestRestrictionInfo_o *v168; // x8
  ServantEntity_o *v169; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v170; // x19
  System_Collections_Generic_IEnumerable_T__o *v171; // x0
  System_Int32_array **v172; // x0
  BattleServantConfConponent_o *v173; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v174; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v178; // 0:x0.16

  v8 = equipIdList;
  if ( (byte_418B6FF & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, equipIdList);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v18);
    sub_B2C35C(&EventPersonalMargeUpValInfo_TypeInfo, v19);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B2C35C(&int___TypeInfo, v21);
    sub_B2C35C(&long___TypeInfo, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v28);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v29);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    byte_418B6FF = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.equipUserServantEntity = 0LL;
  p_equipUserServantEntity = (FollowerInfo_o *)&this->fields.equipUserServantEntity;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v34, v35, v36, v37, v38, v39);
  p_eventUpValInfo = &this->fields.eventUpValInfo;
  this->fields.isEventUpVal = 0;
  this->fields.eventUpValInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventUpValInfo, 0LL, v41, v42, v43, v44, v45, v46);
  p_eventUpValItemList = (BattleServantConfConponent_o *)&this->fields.eventUpValItemList;
  this->fields.eventUpValItemList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.eventUpValItemList, 0LL, v48, v49, v50, v51, v52, v53);
  if ( !this->fields.isFollower )
  {
    if ( !this->fields.userServantEntity )
    {
      this->fields.equipIdList = 0LL;
      p_equipIdList = &this->fields.equipIdList;
      v80 = 0LL;
LABEL_126:
      sub_B2C2F8((BattleServantConfConponent_o *)p_equipIdList, v80, v56, v57, v58, v59, v60, v61);
      return;
    }
    if ( v8 )
    {
      v65 = &this->fields.equipIdList;
      if ( this->fields.equipIdList == v8 )
        goto LABEL_43;
      v66 = System_Array__Clone((System_Array_o *)v8, 0LL);
      if ( v66 )
      {
        v63 = v66;
        v73 = (struct System_Int64_array *)sub_B2C41C(v66, long___TypeInfo);
        if ( !v73 )
        {
          sub_B2C728(v63);
          goto LABEL_13;
        }
      }
      else
      {
        v73 = 0LL;
      }
    }
    else
    {
      v94 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v94 = BalanceConfig_TypeInfo;
      }
      v73 = (struct System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v94->static_fields->SvtEquipMax);
    }
    this->fields.equipIdList = v73;
    v65 = &this->fields.equipIdList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.equipIdList,
      (System_Int32_array **)v73,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    v8 = this->fields.equipIdList;
    if ( !v8 )
      goto LABEL_128;
LABEL_43:
    if ( !v8->max_length )
      goto LABEL_112;
    if ( v8->m_Items[0] >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_128;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      v100 = *v65;
      if ( !*v65 )
        goto LABEL_128;
      if ( !v100->max_length )
        goto LABEL_112;
      if ( !Instance )
        goto LABEL_128;
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                    (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                    &this->fields.equipUserServantEntity,
                                    v100->m_Items[0],
                                    (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        klass = p_equipUserServantEntity->klass;
        if ( !p_equipUserServantEntity->klass )
          goto LABEL_128;
        declaringType = klass->_1.declaringType;
        parent = klass->_1.parent;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v177.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v177.fields.fakeValue = parent;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v177, 0LL);
        if ( (int)Instance >= 1 )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_128;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
          v104 = p_equipUserServantEntity->klass;
          if ( !p_equipUserServantEntity->klass )
            goto LABEL_128;
          v105 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          v107 = v104->_1.declaringType;
          v106 = v104->_1.parent;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v178.fields.currentCryptoKey = v107;
          *(_QWORD *)&v178.fields.fakeValue = v106;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v178, 0LL);
          if ( !v105 )
            goto LABEL_128;
          Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v105,
                                            (int32_t)Instance,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (BattleServantConfConponent_c *)Entity;
          sub_B2C2F8(p_equipServantEntity, Entity, v109, v110, v111, v112, v113, v114);
        }
      }
      else
      {
        v115 = *v65;
        if ( !*v65 )
          goto LABEL_128;
        if ( !v115->max_length )
          goto LABEL_112;
        v115->m_Items[0] = 0LL;
      }
    }
    p_setupInfo = &this->fields.setupInfo;
    setupInfo = this->fields.setupInfo;
    if ( setupInfo )
    {
      eventIdList = setupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_128;
      if ( *(_QWORD *)&eventIdList->max_length )
      {
        userServantEntity = this->fields.userServantEntity;
        Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v55);
        if ( !userServantEntity )
          goto LABEL_128;
        Instance = (DataManager_o *)UserServantEntity__getEventUpVal_21654264(
                                      userServantEntity,
                                      p_eventUpValInfo,
                                      setupInfo,
                                      (System_Int64_array *)Instance,
                                      0LL);
        questRestrictionInfo = this->fields.questRestrictionInfo;
        this->fields.isEventUpVal = (unsigned __int8)Instance & 1;
        if ( questRestrictionInfo )
        {
          if ( !*p_setupInfo )
            goto LABEL_128;
          v121 = (*p_setupInfo)->fields.eventIdList;
          if ( !v121 )
            goto LABEL_128;
          if ( !v121->max_length )
            goto LABEL_112;
          v122 = v121->m_Items[1];
          servantEntity = this->fields.servantEntity;
          v124 = (EventPersonalMargeUpValInfo_o *)sub_B2C42C(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v124, v122, servantEntity, 0LL);
          Instance = (DataManager_o *)this->fields.eventUpValInfo;
          if ( !Instance )
            goto LABEL_128;
          Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( !v124 )
            goto LABEL_128;
          EventPersonalMargeUpValInfo__Add(v124, (EventDropItemUpValInfo_array *)Instance, 0LL);
          if ( !EventPersonalMargeUpValInfo__IsEmpty(v124, 0LL) )
          {
            List = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v124, 0LL);
            p_eventUpValItemList->klass = (BattleServantConfConponent_c *)List;
            sub_B2C2F8(p_eventUpValItemList, List, v126, v127, v128, v129, v130, v131);
          }
        }
        else
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_128;
          v173 = (BattleServantConfConponent_o *)&this->fields.eventUpValItemList;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                Instance,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
          v133 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v133,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !*p_setupInfo )
            goto LABEL_128;
          v134 = (*p_setupInfo)->fields.eventIdList;
          if ( !v134 )
            goto LABEL_128;
          v135 = *(_QWORD *)&v134->max_length;
          if ( (int)v135 >= 1 )
          {
            v136 = 0LL;
            while ( 1 )
            {
              if ( v136 >= (unsigned int)v135 )
                goto LABEL_112;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_128;
              v137 = v134->m_Items[v136 + 1];
              v138 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              v137,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
              if ( !v138
                || (Instance = (DataManager_o *)EventDetailEntity__HasFlag(v138, 0x800000000LL, 0LL),
                    ((unsigned __int8)Instance & 1) == 0) )
              {
                v139 = this->fields.servantEntity;
                v140 = (EventPersonalMargeUpValInfo_o *)sub_B2C42C(EventPersonalMargeUpValInfo_TypeInfo);
                EventPersonalMargeUpValInfo___ctor(v140, v137, v139, 0LL);
                Instance = (DataManager_o *)this->fields.eventUpValInfo;
                if ( !Instance )
                  goto LABEL_128;
                Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
                if ( !v140 )
                  goto LABEL_128;
                EventPersonalMargeUpValInfo__Add(v140, (EventDropItemUpValInfo_array *)Instance, 0LL);
                Instance = (DataManager_o *)EventPersonalMargeUpValInfo__IsEmpty(v140, 0LL);
                if ( ((unsigned __int8)Instance & 1) == 0 )
                {
                  Instance = (DataManager_o *)EventPersonalMargeUpValInfo__GetList(v140, 0LL);
                  if ( !Instance )
                    goto LABEL_128;
                  datalist = Instance->fields.datalist;
                  v142 = Instance;
                  if ( (int)datalist >= 1 )
                    break;
                }
              }
LABEL_95:
              LODWORD(v135) = v134->max_length;
              if ( (__int64)++v136 >= (int)v135 )
                goto LABEL_96;
            }
            v143 = 0LL;
            while ( v143 < (unsigned int)datalist )
            {
              if ( !v133 )
                goto LABEL_128;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v133,
                *((EventMissionProgressRequest_Argument_ProgressData_o **)&v142->fields.lookup + v143),
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              LODWORD(datalist) = v142->fields.datalist;
              if ( (__int64)++v143 >= (int)datalist )
                goto LABEL_95;
            }
            goto LABEL_112;
          }
LABEL_96:
          if ( !v133 )
            goto LABEL_128;
          v144 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v133,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          p_eventUpValItemList = (BattleServantConfConponent_o *)&this->fields.eventUpValItemList;
          v173->klass = (BattleServantConfConponent_c *)v144;
          sub_B2C2F8(v173, v144, v145, v146, v147, v148, v149, v150);
          p_setupInfo = &this->fields.setupInfo;
        }
      }
    }
    if ( !this->fields.questRestrictionInfo )
      return;
    if ( !*p_setupInfo )
    {
      v151 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
      v152 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_26087716(v152, v151, 0, 0LL);
      *p_setupInfo = v152;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)p_setupInfo,
        (System_Int32_array **)v152,
        v153,
        v154,
        v155,
        v156,
        v157,
        v158);
    }
    if ( this->fields.isEventUpVal )
    {
      v159 = this->fields.userServantEntity;
      v160 = this->fields.setupInfo;
      Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v55);
      v161 = this->fields.questRestrictionInfo;
      if ( !v161 )
        goto LABEL_128;
      if ( !v159 )
        goto LABEL_128;
      Instance = (DataManager_o *)UserServantEntity__GetBonusUpVal(
                                    v159,
                                    &eventUpVallInfo,
                                    v160,
                                    (System_Int64_array *)Instance,
                                    v161->fields.questId,
                                    v161->fields.questPhase,
                                    0LL);
      if ( !eventUpVallInfo )
        goto LABEL_128;
      Instance = (DataManager_o *)eventUpVallInfo->fields.dropList;
      if ( !Instance )
        goto LABEL_128;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v174,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
      for ( i = v174;
            ;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              dropList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)i.fields.current,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Add__) )
      {
        v162 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &i,
                 (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
        if ( !v162 )
          break;
        if ( !*p_eventUpValInfo )
          sub_B2C434(v162, v163);
        dropList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*p_eventUpValInfo)->fields.dropList;
        if ( !dropList )
          sub_B2C434(0LL, v163);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    }
    else
    {
      v166 = this->fields.userServantEntity;
      v167 = this->fields.setupInfo;
      Instance = (DataManager_o *)PartyOrganizationListViewItem__GetEquipList(this, v55);
      v168 = this->fields.questRestrictionInfo;
      if ( !v168 || !v166 )
        goto LABEL_128;
      this->fields.isEventUpVal = UserServantEntity__GetBonusUpVal(
                                    v166,
                                    p_eventUpValInfo,
                                    v167,
                                    (System_Int64_array *)Instance,
                                    v168->fields.questId,
                                    v168->fields.questPhase,
                                    0LL);
    }
    v169 = this->fields.servantEntity;
    v99 = (EventPersonalMargeUpValInfo_o *)sub_B2C42C(EventPersonalMargeUpValInfo_TypeInfo);
    EventPersonalMargeUpValInfo___ctor(v99, 0, v169, 0LL);
    Instance = (DataManager_o *)this->fields.eventUpValInfo;
    if ( Instance )
    {
      Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
      if ( v99 )
      {
        EventPersonalMargeUpValInfo__Add(v99, (EventDropItemUpValInfo_array *)Instance, 0LL);
        if ( EventPersonalMargeUpValInfo__IsEmpty(v99, 0LL) )
          return;
        if ( p_eventUpValItemList->klass )
        {
          v170 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v170,
            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
          if ( !v170 )
            goto LABEL_128;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v170,
            (System_Collections_Generic_IEnumerable_T__o *)p_eventUpValItemList->klass,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v171 = (System_Collections_Generic_IEnumerable_T__o *)EventPersonalMargeUpValInfo__GetList(v99, 0LL);
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v170,
            v171,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__AddRange__);
          v172 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v170,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
          goto LABEL_125;
        }
LABEL_124:
        v172 = (System_Int32_array **)EventPersonalMargeUpValInfo__GetList(v99, 0LL);
LABEL_125:
        v80 = v172;
        p_eventUpValItemList->klass = (BattleServantConfConponent_c *)v172;
        p_equipIdList = (struct System_Int64_array **)p_eventUpValItemList;
        goto LABEL_126;
      }
    }
LABEL_128:
    sub_B2C434(Instance, v55);
  }
  this->fields.equipIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v56, v57, v58, v59, v60, v61);
  p_equipUserServantEntity = this->fields.followerInfo;
  if ( !p_equipUserServantEntity )
    return;
  v62 = this->fields.questRestrictionInfo;
  LODWORD(v63) = this->fields.followerIndex;
  if ( v62 )
  {
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(v62->fields.questId, 0LL);
    goto LABEL_14;
  }
LABEL_13:
  ReturnTypeByQuestId = 0;
LABEL_14:
  Instance = (DataManager_o *)FollowerInfo__getEquipSvtId(
                                p_equipUserServantEntity,
                                (int32_t)v63,
                                ReturnTypeByQuestId,
                                0LL);
  if ( (int)Instance >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_128;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    followerInfo = this->fields.followerInfo;
    v75 = this->fields.questRestrictionInfo;
    followerIndex = this->fields.followerIndex;
    v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( v75 )
    {
      Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(v75->fields.questId, 0LL);
      v78 = (int)Instance;
      if ( !followerInfo )
        goto LABEL_128;
    }
    else
    {
      v78 = 0;
      if ( !followerInfo )
        goto LABEL_128;
    }
    Instance = (DataManager_o *)FollowerInfo__getEquipSvtId(followerInfo, followerIndex, v78, 0LL);
    if ( !v77 )
      goto LABEL_128;
    v81 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v77,
                                   (int32_t)Instance,
                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    p_equipServantEntity->klass = (BattleServantConfConponent_c *)v81;
    sub_B2C2F8(p_equipServantEntity, v81, v82, v83, v84, v85, v86, v87);
  }
  v88 = this->fields.setupInfo;
  if ( v88 )
  {
    v89 = v88->fields.eventIdList;
    if ( !v89 )
      goto LABEL_128;
    if ( *(_QWORD *)&v89->max_length )
    {
      v90 = this->fields.followerInfo;
      v91 = this->fields.questRestrictionInfo;
      v92 = this->fields.followerIndex;
      if ( v91 )
      {
        Instance = (DataManager_o *)FollowerInfo__GetReturnTypeByQuestId(v91->fields.questId, 0LL);
        v93 = (int)Instance;
        if ( !v90 )
          goto LABEL_128;
      }
      else
      {
        v93 = 0;
        if ( !v90 )
          goto LABEL_128;
      }
      Instance = (DataManager_o *)FollowerInfo__getEventUpVal_23153812(v90, p_eventUpValInfo, v88, v92, v93, 0LL);
      v95 = this->fields.setupInfo;
      this->fields.isEventUpVal = (unsigned __int8)Instance & 1;
      if ( !v95 )
        goto LABEL_128;
      v96 = v95->fields.eventIdList;
      if ( !v96 )
        goto LABEL_128;
      if ( v96->max_length )
      {
        v97 = v96->m_Items[1];
        v98 = this->fields.servantEntity;
        v99 = (EventPersonalMargeUpValInfo_o *)sub_B2C42C(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v99, v97, v98, 0LL);
        Instance = (DataManager_o *)this->fields.eventUpValInfo;
        if ( Instance )
        {
          Instance = (DataManager_o *)EventUpValInfo__GetDropItemList((EventUpValInfo_o *)Instance, 0, 0LL);
          if ( v99 )
          {
            EventPersonalMargeUpValInfo__Add(v99, (EventDropItemUpValInfo_array *)Instance, 0LL);
            if ( EventPersonalMargeUpValInfo__IsEmpty(v99, 0LL) )
              return;
            goto LABEL_124;
          }
        }
        goto LABEL_128;
      }
LABEL_112:
      v165 = sub_B2C460(Instance);
      sub_B2C400(v165, 0LL);
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
      v4 = sub_B2C460(this);
      sub_B2C400(v4, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)classIds,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PartyOrganizationListViewItem__Set_32213968(
        PartyOrganizationListViewItem_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UserServantEntity_o *userServantEntity; // x1
  struct UserServantEntity_o **p_userServantEntity; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UserServantEntity_o *v24; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x23
  struct ServantEntity_o *Entity; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UserServantEntity_o *v35; // x8
  UserServantEntity_o *v36; // x8
  struct System_Int32_array *CommandCodeIdList; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int64_array *equipIdList; // x1
  bool isUniqueIndividualityRestriction; // w8
  int32_t TimesToRestart_k__BackingField; // w8
  const MethodInfo *v47; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_418B701 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, item);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418B701 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
    goto LABEL_13;
  userServantEntity = item->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.followerInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.followerInfo, 0LL, v18, v19, v20, v21, v22, v23);
  this->fields.followerClassId = 0;
  this->fields.followerIndex = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_13;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v27 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v27;
  *(_QWORD *)&v48.fields.fakeValue = v26;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
  if ( !v25 )
    goto LABEL_13;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v25,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  v35 = this->fields.userServantEntity;
  this->fields.frameType = item->fields.frameType;
  if ( !v35
    || (Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                      v35->fields.limitCount,
                                      0LL),
        v36 = this->fields.userServantEntity,
        this->fields.svtLimitCount = (int)Instance,
        !v36) )
  {
LABEL_13:
    sub_B2C434(Instance, v9);
  }
  CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v36, 0LL);
  this->fields.commandCodeIdList = CommandCodeIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCodeIdList,
    (System_Int32_array **)CommandCodeIdList,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
  PartyOrganizationListViewItem__SetEquipStatus(this, equipIdList, v47);
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
  BattleServantConfConponent_o *v11; // x22
  struct FollowerInfo_o *v12; // x27
  BattleServantConfConponent_o *v13; // x20
  struct ServantEntity_o *v14; // x26
  BattleServantConfConponent_o *v15; // x25
  BattleServantConfConponent_o *v16; // x19
  struct UserServantEntity_o *v18; // x1
  struct UserServantEntity_o **v19; // x23
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
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x2
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int32_t v80; // [xsp+4h] [xbp-12Ch]
  char v81; // [xsp+8h] [xbp-128h]
  char v82; // [xsp+Ch] [xbp-124h]
  __int64 v83; // [xsp+10h] [xbp-120h]
  struct UserServantEntity_o *v84; // [xsp+18h] [xbp-118h]
  struct UserServantEntity_o *v85; // [xsp+20h] [xbp-110h]
  char v86; // [xsp+28h] [xbp-108h]
  char v87; // [xsp+2Ch] [xbp-104h]
  char v88; // [xsp+30h] [xbp-100h]
  struct System_Int32_array *v90; // [xsp+38h] [xbp-F8h]
  char v91; // [xsp+40h] [xbp-F0h]
  char v92; // [xsp+44h] [xbp-ECh]
  char v93; // [xsp+48h] [xbp-E8h]
  char v94; // [xsp+4Ch] [xbp-E4h]
  char v95; // [xsp+50h] [xbp-E0h]
  char v96; // [xsp+54h] [xbp-DCh]
  char v97; // [xsp+58h] [xbp-D8h]
  char v98; // [xsp+5Ch] [xbp-D4h]
  char v99; // [xsp+60h] [xbp-D0h]
  char v100; // [xsp+64h] [xbp-CCh]
  char v101; // [xsp+68h] [xbp-C8h]
  char v102; // [xsp+6Ch] [xbp-C4h]
  int64_t v103; // [xsp+70h] [xbp-C0h]
  char v104; // [xsp+7Ch] [xbp-B4h]
  struct UserServantEntity_o *v105; // [xsp+80h] [xbp-B0h]
  int64_t v106; // [xsp+88h] [xbp-A8h]
  char v107; // [xsp+90h] [xbp-A0h]
  char v108; // [xsp+94h] [xbp-9Ch]
  struct UserServantEntity_o *v109; // [xsp+98h] [xbp-98h]
  char v110; // [xsp+A4h] [xbp-8Ch]
  char v111; // [xsp+A8h] [xbp-88h]
  char v112; // [xsp+ACh] [xbp-84h]
  struct UserServantEntity_o *v113; // [xsp+B0h] [xbp-80h]
  struct EventCampaignEntity_array *v114; // [xsp+B8h] [xbp-78h]
  int32_t v115; // [xsp+C4h] [xbp-6Ch]
  System_Int64_array *v116; // [xsp+C8h] [xbp-68h]
  char v117; // [xsp+D4h] [xbp-5Ch]

  userServantEntity = this->fields.userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  v105 = userServantEntity;
  v11 = (BattleServantConfConponent_o *)(p_userServantEntity + 1);
  v12 = (struct FollowerInfo_o *)p_userServantEntity[1];
  v81 = *((_BYTE *)p_userServantEntity + 16);
  v82 = *((_BYTE *)p_userServantEntity + 17);
  v83 = *(__int64 *)((char *)p_userServantEntity + 20);
  v116 = (System_Int64_array *)p_userServantEntity[4];
  v13 = (BattleServantConfConponent_o *)(p_userServantEntity + 7);
  v14 = (struct ServantEntity_o *)p_userServantEntity[7];
  v84 = p_userServantEntity[8];
  v85 = p_userServantEntity[9];
  v15 = (BattleServantConfConponent_o *)(p_userServantEntity + 10);
  v90 = (struct System_Int32_array *)p_userServantEntity[10];
  v91 = *((_BYTE *)p_userServantEntity + 88);
  v92 = *((_BYTE *)p_userServantEntity + 89);
  v93 = *((_BYTE *)p_userServantEntity + 90);
  v94 = *((_BYTE *)p_userServantEntity + 91);
  v95 = *((_BYTE *)p_userServantEntity + 92);
  v96 = *((_BYTE *)p_userServantEntity + 93);
  v97 = *((_BYTE *)p_userServantEntity + 94);
  v98 = *((_BYTE *)p_userServantEntity + 96);
  v99 = *((_BYTE *)p_userServantEntity + 97);
  v101 = *((_BYTE *)p_userServantEntity + 98);
  v103 = (int64_t)p_userServantEntity[13];
  v106 = (int64_t)p_userServantEntity[15];
  v107 = *((_BYTE *)p_userServantEntity + 128);
  v100 = *((_BYTE *)p_userServantEntity + 95);
  v102 = *((_BYTE *)p_userServantEntity + 112);
  v104 = *((_BYTE *)p_userServantEntity + 113);
  v16 = (BattleServantConfConponent_o *)(p_userServantEntity + 22);
  v114 = (struct EventCampaignEntity_array *)p_userServantEntity[22];
  if ( !item )
    sub_B2C434(p_userServantEntity, 0LL);
  v108 = *((_BYTE *)p_userServantEntity + 188);
  v109 = p_userServantEntity[24];
  v110 = *((_BYTE *)p_userServantEntity + 205);
  v112 = *((_BYTE *)p_userServantEntity + 206);
  v113 = p_userServantEntity[26];
  v111 = *((_BYTE *)p_userServantEntity + 216);
  v80 = *((_DWORD *)p_userServantEntity + 55);
  v115 = *((_DWORD *)p_userServantEntity + 56);
  v117 = *((_BYTE *)p_userServantEntity + 229);
  v86 = *((_BYTE *)p_userServantEntity + 114);
  v88 = *((_BYTE *)p_userServantEntity + 115);
  v87 = *((_BYTE *)p_userServantEntity + 116);
  v19 = &item->fields.userServantEntity;
  v18 = item->fields.userServantEntity;
  this->fields.userServantEntity = v18;
  sub_B2C2F8(
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
  sub_B2C2F8(v11, (System_Int32_array **)followerInfo, v21, v22, v23, v24, v25, v26);
  this->fields.isFollower = item->fields.isFollower;
  this->fields.isFixNpc = item->fields.isFixNpc;
  this->fields.followerClassId = item->fields.followerClassId;
  this->fields.followerIndex = item->fields.followerIndex;
  servantEntity = item->fields.servantEntity;
  this->fields.servantEntity = servantEntity;
  sub_B2C2F8(v13, (System_Int32_array **)servantEntity, v28, v29, v30, v31, v32, v33);
  this->fields.classId = item->fields.classId;
  this->fields.rarityId = item->fields.rarityId;
  this->fields.frameType = item->fields.frameType;
  this->fields.svtLimitCount = item->fields.svtLimitCount;
  commandCodeIdList = item->fields.commandCodeIdList;
  this->fields.commandCodeIdList = commandCodeIdList;
  sub_B2C2F8(v15, (System_Int32_array **)commandCodeIdList, v35, v36, v37, v38, v39, v40);
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
  sub_B2C2F8(v16, (System_Int32_array **)friendPointCampaignEntityList, v43, v44, v45, v46, v47, v48);
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
  this->fields._FriendshipUpVal_k__BackingField = item->fields._FriendshipUpVal_k__BackingField;
  this->fields._IsNotClassBoardNpc_k__BackingField = item->fields._IsNotClassBoardNpc_k__BackingField;
  item->fields.userServantEntity = v105;
  sub_B2C2F8((BattleServantConfConponent_o *)v19, (System_Int32_array **)v105, v49, v50, v51, v52, v53, v54);
  item->fields.followerInfo = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&item->fields.followerInfo,
    (System_Int32_array **)v12,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  item->fields.servantEntity = v14;
  item->fields.isFollower = v81;
  item->fields.isFixNpc = v82;
  *(_QWORD *)&item->fields.followerClassId = v83;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&item->fields.servantEntity,
    (System_Int32_array **)v14,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  *(_QWORD *)&item->fields.classId = v84;
  *(_QWORD *)&item->fields.frameType = v85;
  item->fields.commandCodeIdList = v90;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&item->fields.commandCodeIdList,
    (System_Int32_array **)v90,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  item->fields.isQuestRestriction = v91;
  item->fields.isQuestRestrictionWhole = v92;
  item->fields.isUniqueSvtRestriction = v93;
  item->fields.isUniqueIndividualityRestriction = v94;
  item->fields.isFixedSupportPositionRestriction = v95;
  item->fields.isFixedServantPositionRestriction = v96;
  item->fields.isFixedServantPositionAgreement = v97;
  item->fields.isServantNumRestriction = v98;
  item->fields.isFixMultipleNpcRestriction = v99;
  item->fields.isFixMultipleNpc = v101;
  item->fields.npcFollowerSvtId = v103;
  item->fields.isConvertOverwriteImage = v100;
  item->fields.isMyServantOrNpcRestriction = v102;
  item->fields.haveIndividualityServant = v104;
  item->fields.isRestrictionMyServantPos = v86;
  item->fields.isRestrictionNeedStarting = v88;
  item->fields.isRestrictionServantPos = v87;
  item->fields.fatigureTime = v106;
  item->fields.isFatigureRecover = v107;
  PartyOrganizationListViewItem__SetEquipStatus(item, v116, v73);
  item->fields.friendPointCampaignEntityList = v114;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&item->fields.friendPointCampaignEntityList,
    (System_Int32_array **)v114,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  item->fields._IsDispSvtPoint_k__BackingField = v108;
  *(_QWORD *)&item->fields._SvtPoint_k__BackingField = v109;
  item->fields._IsAllOutBattle_k__BackingField = v110;
  item->fields._IsDataLost_k__BackingField = v112;
  item->fields._IsNotSupportSingle_k__BackingField = v111;
  *(_QWORD *)&item->fields._TimesToRestart_k__BackingField = v113;
  if ( !notChangeInitPos )
    item->fields._InitPos_k__BackingField = v80;
  item->fields._NowPos_k__BackingField = v115;
  item->fields._IsNotClassBoardNpc_k__BackingField = v117;
}


void __fastcall PartyOrganizationListViewItem__SwapEquip(
        PartyOrganizationListViewItem_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  System_Int64_array *equipIdList; // x20
  const MethodInfo *v5; // x2

  if ( !item )
    sub_B2C434(this, 0LL);
  equipIdList = this->fields.equipIdList;
  PartyOrganizationListViewItem__SetEquipStatus(this, item->fields.equipIdList, method);
  PartyOrganizationListViewItem__SetEquipStatus(item, equipIdList, v5);
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

  if ( (byte_418B71B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    this = (PartyOrganizationListViewItem_o *)sub_B2C35C(&PartyOrganizationListViewObject_TypeInfo, v4);
    byte_418B71B = 1;
  }
  if ( !item )
    goto LABEL_14;
  viewObject = (UnityEngine_Object_o *)item->fields.viewObject;
  if ( viewObject
    && ((v6 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&viewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6)
     || (PartyOrganizationListViewObject_c *)viewObject->klass->_2.typeHierarchy[v6 - 1] != PartyOrganizationListViewObject_TypeInfo) )
  {
    sub_B2C728(item->fields.viewObject);
    PartyOrganizationListViewItem__Modify_32214720(v7, v8, v9);
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
      sub_B2C434(this, item);
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
  __int64 v10; // x1
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  ServantCostumeEntity_o *Entity; // x0
  LocalizationManager_c *v16; // x0

  if ( (byte_418B717 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418B717 = 1;
  }
  DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(this, method);
  if ( DispImageLimitCount >= 11 )
  {
    v8 = DispImageLimitCount;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    SvtId = PartyOrganizationListViewItem__get_SvtId(this, v12);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(SvtId, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
LABEL_20:
      sub_B2C434(Instance, v10);
    Entity = ServantCostumeMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, v8, 0LL);
    if ( Entity )
      return ServantCostumeEntity__getShortName(Entity, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    byte_4185BC0 = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_418B70C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B70C = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v11, 0LL);
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

  if ( (byte_418B70D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B70D = 1;
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

  if ( (byte_418B70B & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B70B = 1;
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

  if ( (byte_418B70A & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_418B70A = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL);
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


int32_t __fastcall PartyOrganizationListViewItem__get_FriendshipUpVal(
        PartyOrganizationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipUpVal_k__BackingField;
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

  if ( (byte_418B71A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_418B71A = 1;
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
      sub_B2C434(Atk, v11);
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
      sub_B2C434(Hp, v11);
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
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x20
  struct ServantEntity_o *servantEntity; // x8
  int64_t v18; // x21
  __int64 v19; // x22
  __int64 v20; // x23
  struct ServantEntity_o *v21; // x8
  ServantLimitImageMaster_o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  int32_t v25; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_418B708 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418B708 = 1;
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
    *(_QWORD *)&v27.fields.currentCryptoKey = v10;
    *(_QWORD *)&v27.fields.fakeValue = v9;
    maxLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
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
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  ServantLeader = NetworkManager__get_UserId(0LL);
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_42;
  v18 = ServantLeader;
  v20 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v20;
  *(_QWORD *)&v28.fields.fakeValue = v19;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_42:
    sub_B2C434(ServantLeader, v15);
  ServantLeader = UserServantCollectionMaster__TryGetEntity(
                    Master_WarQuestSelectionMaster,
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
    goto LABEL_42;
  }
  if ( !entity )
    goto LABEL_42;
  maxLimitCount = entity->fields.maxLimitCount;
LABEL_29:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  ServantLeader = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v21 = this->fields.servantEntity;
  if ( !v21 )
    goto LABEL_42;
  v22 = (ServantLimitImageMaster_o *)ServantLeader;
  v24 = *(_QWORD *)&v21->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v24;
  *(_QWORD *)&v29.fields.fakeValue = v23;
  ServantLeader = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL);
  if ( !v22 )
    goto LABEL_42;
  ServantLeader = ServantLimitImageMaster__GetServantLimitCountSealAfter(v22, ServantLeader, maxLimitCount, 0LL);
  if ( !this->fields.servantEntity )
    goto LABEL_42;
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

  if ( (byte_418B707 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B707 = 1;
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_418B709 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&StringLiteral_18395/*"error"*/, v3);
    byte_418B709 = 1;
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
    return (System_String_o *)StringLiteral_18395/*"error"*/;
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
    *(_QWORD *)&v12.fields.currentCryptoKey = v10;
    *(_QWORD *)&v12.fields.fakeValue = v9;
    nameLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
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
    sub_B2C434(IsNpc, method);
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


void __fastcall PartyOrganizationListViewItem__set_FriendshipUpVal(
        PartyOrganizationListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._FriendshipUpVal_k__BackingField = value;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._WaveEnemyClassIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}